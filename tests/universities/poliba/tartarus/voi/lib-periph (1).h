/* Author: _____FOGGIA____
 *
 * This source is part of the Tartarus MCU assignment for the
 * Embedded Control course at POLIBA.
 */


#ifndef __LIBPERIPH_H__
#define __LIBPERIPH_H__
#include <stdint.h>
#include <stdio.h>


/*
 * You should put the prototypes of:
 *  - foo_periph_init
 *  - foo_periph_tx_data
 *  - foo_periph_rx_data
 *
 * You should also define the structure FooPeriph_t to access the registers
 *
 */

struct FooPeriph_t {
 	uint32_t CTRL;
	uint32_t RXDATA;
	uint32_t TXDATA;
 };

void foo_periph_init(struct FooPeriph_t *puntatore);
uint32_t foo_periph_rx_data(struct FooPeriph_t *puntatore);
void foo_periph_tx_data(struct FooPeriph_t *puntatore, uint32_t avg);



#endif
