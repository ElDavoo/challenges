from collections import deque
from io import BufferedReader, BytesIO

needle_string = "abcd1234"

# This is the needle. It is a bytes object (made from the string needle_string)
needle = needle_string.encode(encoding="ascii")

# This is the haystack. It is a buffered reader, so we can process streamed data.
hay = BufferedReader(BytesIO(b"vnk2435kvabco8awkh125kjneytbcd12qjhb4acd123xmnbqwnw4t"))

# This is the threshold, which means how many characters need to be matched.
threshold = 3

# While we do need to shift the haystack one byte at a time,
# we don't need to compare one byte a time.
# chunk_size defines how many bytes at a time are compared.
# As all the chunks from the needle are loaded in memory, we need a tradeoff.
# If the chunk_size is smaller, we have to make more comparisons, but less RAM is used.
# if size is bigger, less comparisons, more RAM.
# When a match between chunks is found, we will switch to the traditional byte-to-byte comparison.

# We determine the size basing on the length of the needle
chunk_size = len(needle) // 255 + 1
# With a minimum hard cap.
if chunk_size > threshold:
    chunk_size = threshold

# We are going to load all the needles chunks into a dictionary.
# The key are the chunks, while the value is a list of offsets in the needle.
chunk_dict = {}
for i in range(0, len(needle) - threshold + 1):
    chunk = needle[i:i + chunk_size]
    if chunk not in chunk_dict:
        # Create a new list
        chunk_dict[chunk] = list()
    # Append to existing list
    chunk_dict[chunk].append(i)

# This is a circular buffer where we are reading the data from the haystack.
dq = deque([], maxlen=chunk_size)

# Offset = number of bytes read in total - 1
offset = -1

# Fill up the deque, minus one byte.
for i in range(chunk_size - 1):
    dq.append(hay.read(1))
    offset = offset + 1

while byt := hay.read(1):

    offset = offset + 1

    # Shift the buffer (or fills it if it's the first read)
    dq.append(byt)

    # Type conversion
    chunk = b''.join(list(dq))

    #Now we compare every needle chunk (in the dictionary) with the haystack chunk.
    for i in chunk_dict:

        if i == chunk:

            # We found a match. Now we need to cycle for all the offsets in the deque.
            # As the match can be made multiple times in one needle.
            for index in chunk_dict[i]:

                # The number of characters matched. We need to include the chunk.
                k = chunk_size - 1

                # The offset from which to start the byte-to-byte comparison.
                start = index + chunk_size

                byte_needle = b''
                byte_haystack = b''
                n = 1
                while byte_needle == byte_haystack:
                    byte_needle = needle[start + n - 1: start + n]
                    # We do need to make sure n bytes are available in the buffer,
                    # but we only need one.
                    byte_haystack = hay.peek(n)[n-1:n]
                    k = k + 1
                    n = n + 1

                if k >= threshold:
                    print("sequence of length = {} found at haystack offset {}, needle offset {}".format(k,
                                                                                                         offset, index))
                    # Discard the read bytes, but track them in the offset
                    hay.read(k)
                    offset = offset + k
