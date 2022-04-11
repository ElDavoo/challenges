/* Author: _____PUT YOUR GROUP NAME HERE____ 
 *
 * This source is part of the Tatarus MCU assignment for the 
 * Embedded Control course at POLIBA. 
 */


#ifndef __LIBPERIPH_H__
#define __LIBPERIPH_H__

#include <stdint-gcc.h>

/*
 * This struct is used to represent the ctrl register.
 * It has the following fields:
 * Bit 0 (W): to request the transmission of data this bit has to be set to 1
▪ Bit 1 (R): to request data to be received this bit has to be set to 1
 Bit 2 (B): this is a status bit set by the MCU (you are not allowed to change it!)
that indicates whether the peripheral is busy transmitting/receiving data (B = 1)
or idle (B = 0)
▪ Bit 3:10 (TX_PIN): PIN number of the MCU where the TX line is connected
▪ Bit 11:18 (RX_PIN): PIN number of the MCU where the RX line is connected

 */
typedef struct __attribute__((__packed__)) {
    unsigned int w: 1;
    unsigned int r: 1;
    unsigned int b: 1;
    uint8_t tx_pin: 8;
    uint8_t rx_pin: 8;
} ctrl_t;

typedef struct  {
    ctrl_t CTRL;
    uint32_t RXDATA;
    uint32_t TXDATA;
} FooPeriph_t;
/* 
 * You should put the prototypes of:
 *  - foo_periph_init
 *  - foo_periph_tx_data
 *  - foo_periph_rx_data
 *
 * You should also define the structure FooPeriph_t to access the FooPeriph_t
 *
 */

void foo_periph_init(ctrl_t *ctrl, uint8_t tx_pin, uint8_t rx_pin);
void foo_periph_tx_data(FooPeriph_t *device, uint32_t data);
uint32_t foo_periph_rx_data(FooPeriph_t *device);
#endif
