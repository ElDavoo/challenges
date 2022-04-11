/* Author: _____FOGGIA____
 *
 * This source is part of the Tartarus MCU assignment for the
 * Embedded Control course at POLIBA.

 */

#include "mcu-api.h"
#include "lib-periph.h"

#define init 0x10900     /* control register: 00100001 00100000 000 pin di TX 32, pin di RX 33, in esadecimale 0x10900*/

/* This file should implement the functions whose prototypes are defined in lib-periph.h */

void foo_periph_init(struct FooPeriph_t *puntatore){
    uint32_t mask_init = 0b1111111111111111111; /*0x7FFFF - 0b111 1111 1111 1111 1111 - 524287*/
    MCU_STEP;

    puntatore->CTRL = (puntatore->CTRL & ~mask_init) | (init & mask_init);
    MCU_STEP;

 	printf("mask_init: %d\n", mask_init);
 }

  uint32_t foo_periph_rx_data(struct FooPeriph_t *puntatore){
  	printf("Control register: %x\n",puntatore->CTRL);
  	printf("received number: %d\n",puntatore->RXDATA);
 	return puntatore->RXDATA;
 }

  void foo_periph_tx_data(struct FooPeriph_t *puntatore, uint32_t avg){
 	puntatore->TXDATA = avg;
 	MCU_STEP;
 }
