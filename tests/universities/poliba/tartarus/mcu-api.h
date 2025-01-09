#ifndef __MCUAPI_H__
#define __MCUAPI_H__

extern void *regs;
void mcu_one_iteration();

#define FOO_PERIPH (regs)
#define MCU_STEP mcu_one_iteration()
#endif
