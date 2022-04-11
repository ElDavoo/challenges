/* Author: _____PUT YOUR GROUP NAME HERE____ 
 *
 * This source is part of the Tatarus MCU assignment for the 
 * Embedded Control course at POLIBA. 
 */


#include <stdbool.h>
#include <stdio.h>
#include "lib-periph.h"
#include "mcu-api.h"

bool isBusy(ctrl_t ctrl) {return ctrl.b;}

// Function to print the ctrl register
void printCtrl(ctrl_t *ctrl) {
    printf("R: %u", ctrl->r);
    printf(" W: %u", ctrl->w);
    printf(" B: %u", ctrl->b);
    printf(" RX: %d", ctrl->rx_pin);
    printf(" TX: %d", ctrl ->tx_pin);
    printf("\n");
}


/* foo_periph_init: initialize the peripheral by assigning the
TX and RX pins and defaulting to R=0, W=0, B=0 (no pending
TX/RX, the peripheral is idle)
*/
void foo_periph_init(ctrl_t *ctrl, uint8_t tx_pin, uint8_t rx_pin)
{
    ctrl->w = 0;
    ctrl->r = 0;
    ctrl->b = 0;
    ctrl->tx_pin = tx_pin;
    ctrl->rx_pin = rx_pin;
    MCU_STEP;
}

// foo_periph_tx_data: send the specified 32bit variable to
//the peripheral (recall you have to set the TXDATA register)
void foo_periph_tx_data(FooPeriph_t *device, uint32_t data)
{
    while (isBusy(device->CTRL)) {
        MCU_STEP;
    }
    (device->TXDATA) = data;
    (device->CTRL.w) = 1;
    MCU_STEP;
    while (isBusy(device->CTRL)) {
        MCU_STEP;
    }

}

// foo_periph_rx_data: send the specified 32bit variable to
//the peripheral (recall you have to set the TXDATA register)
uint32_t foo_periph_rx_data(FooPeriph_t *device)
{
    while (isBusy(device->CTRL)) {
        MCU_STEP;
    }
    (device->CTRL.r) = 1;
    MCU_STEP;
    while (isBusy(device->CTRL)) {
        MCU_STEP;
    }
    return (device->RXDATA);
}
/* This file should implement the functions whose prototypes are defined in lib-periph.h */

