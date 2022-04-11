/* Author: _____PUT YOUR GROUP NAME HERE____
 *
 * This source is part of the Tatarus MCU assignment for the
 * Embedded Control course at POLIBA.
 */

#include "lib-periph.h"
#include "mcu-api.h"
#include <stdio.h>

/* Recall FOO_PERIPH is the address to the memory mapped FooPeriph_t of the peripheral */
/* Of course you can implement functions to be called in the main if you need */


#define NUMBERS 1
int main()
{
    /*Read 10 32-bit unsigned int readings from the
peripheral
2. Compute the average value of the 10 received
readings
3. Send the average value (32-bit unsigned int) to the
peripheral
4. Go back to step 1
*/
    printf("Hello, going to init device\n");
    foo_periph_init(FOO_PERIPH, 32, 33);
    printf("Initialized device\n");
    uint32_t values[NUMBERS];
    int i = 0;
    for (i =0 ; i< NUMBERS; i++){
        values[i] = foo_periph_rx_data(FOO_PERIPH);
        printf("Read value %d\n", values[i]);
    }
    uint64_t average = 0;
    for (i =0 ; i< NUMBERS; i++){
        average += values[i];
    }
    average = average/NUMBERS;
    uint32_t lsb = average & 0xffffffff;
    printf("Average value is %d\n", lsb);
    foo_periph_tx_data(FOO_PERIPH, lsb);
}

