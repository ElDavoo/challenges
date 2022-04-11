/* Author: _____PUT YOUR GROUP NAME HERE____
 *
 * This source is part of the Tatarus MCU assignment for the
 * Embedded Control course at POLIBA.
 */

#include "mcu-api.h"
#include <stdio.h>
#include <stdint.h>

/* Recall FOO_PERIPH is the address to the memory mapped registers of the peripheral */
/* Of course you can implement functions to be called in the main if you need */

void main()
{
    printf("Hello Tartarus MCU world!\n");
    MCU_STEP; /* This simulates that you have performed on tick. It's just an example */
}

