/* Author: _____FOGGIA____
 *
 * This source is part of the Tartarus MCU assignment for the
 * Embedded Control course at POLIBA.
 */

#include "lib-periph.h"

#include "mcu-api.h"
#include <stdio.h>
#include <stdint.h>

#define puntatore ((FooPeriph_t *) &FOO_PERIPH)
#define read 2
#define write 1

/* Recall FOO_PERIPH is the address to the memory mapped registers of the peripheral */
/* Of course you can implement functions to be called in the main if you need */

typedef struct {
 	volatile uint32_t CTRL;
	volatile uint32_t RXDATA;
	volatile uint32_t TXDATA;
    }FooPeriph_t;

void main()
{
    printf("Address of FOO_PERIPH: %x\n", &FOO_PERIPH);
    printf("FOO_PERIPH: %x\n", FOO_PERIPH);
    printf("CTRL: %x\n", puntatore->CTRL);
    printf("Address of CTRL %x\n", puntatore);

    uint32_t i, a;
    MCU_STEP;

    uint32_t sum, avg;
    MCU_STEP;

    uint32_t mask_check = 7;
    MCU_STEP;

    uint32_t mask = 3;
    MCU_STEP;

    FooPeriph_t FOO_PERIPH;
    MCU_STEP;

    foo_periph_init(puntatore);
    MCU_STEP;

    printf("address of FOO_PERIPH: %x\n", &FOO_PERIPH);

	while(1)
	{
		sum = 0;
		MCU_STEP;

        printf("Control register: %x\n", puntatore->CTRL);
        MCU_STEP;


            for(i=0; i<10; i++)
            {
                puntatore->CTRL = (puntatore->CTRL & ~mask) | (read & mask);  /* set R pin: 00100001 00100000 010 */
                if((puntatore->CTRL & mask_check) == 2){

                    MCU_STEP;
                    printf("Control register: %x\n",puntatore->CTRL);
                    MCU_STEP;

                    a = foo_periph_rx_data(puntatore);
                    MCU_STEP;

                    sum += a;
                    MCU_STEP;

                    printf("sum: %d\n",sum);
                    MCU_STEP;
                }
            }

            MCU_STEP;
            avg = sum / 10;

            MCU_STEP;
            printf("average: %d\n",avg);

            MCU_STEP;
            puntatore->CTRL = (puntatore->CTRL & -mask) | (write & mask);  	/* set W pin: 00100001 00100000 001*/


            MCU_STEP;
            foo_periph_tx_data(puntatore, avg);

            MCU_STEP;
            printf("Control register: %x\n",puntatore->CTRL);

            MCU_STEP;
            printf("transmitted number: %d\n",puntatore->TXDATA);

            MCU_STEP;
            system("pause");
        }

		}

