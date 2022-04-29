#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <assert.h>
#include <time.h>
#include <stdarg.h>

struct foo_mcu_regs_t {
    uint32_t CTRL;
    uint32_t RXDATA;
    uint32_t TXDATA;
};
typedef struct foo_mcu_regs_t foo_mcu_regs_t;
struct foo_mcu_t {
    uint32_t sys_tick;
    uint32_t sys_tick_idle;
    uint8_t state;
    foo_mcu_regs_t regs;
    foo_mcu_regs_t regs_old;
};
typedef struct foo_mcu_t foo_mcu_t;
foo_mcu_t mcu;
void *regs = &(mcu.regs);

void printWithSysTick(foo_mcu_t *fooMcu,
                      const char *color,
                      const char *string, ...) {
    va_list vl;
    va_start(vl, string);
    printf("%s[%03d] ", color,
           fooMcu->sys_tick);
    vprintf(string, vl);
    printf("\x1B[0m");
    va_end(vl);
};

void addTick(foo_mcu_t *fooMcu) {
    if (fooMcu) {
        fooMcu->sys_tick++;
    };
};

void ctrlIncOr(foo_mcu_regs_t *mcuRegs,
               uint32_t n) { mcuRegs->CTRL |= n; };

void ctrlAnd(foo_mcu_regs_t *mcuRegs,
             uint32_t n) {
    mcuRegs->CTRL &= ~n; };

uint8_t o_12188f50ebb21a6806de0cd61946247d(foo_mcu_regs_t *mcuRegs,
                                           uint32_t o_d36fdf8ced93fae004e7fed26597efcd,
                                           uint8_t o_1001e3d49e99def2eaae389abb10deb0) {
    return (mcuRegs->CTRL & o_d36fdf8ced93fae004e7fed26597efcd)
            >> o_1001e3d49e99def2eaae389abb10deb0;
};

void o_9212590e69b55c794939f1fbfd2e8be0(foo_mcu_regs_t *mcuRegs,
                                        uint32_t o_d8014879aa8f4301175712103e9b1a9c,
                                        uint8_t o_1776b1bf14709638fb92b3abac5d87a4,
                                        uint8_t o_5f2054375735557ee37481b29ead9540) {
    mcuRegs->CTRL = (mcuRegs->CTRL &
                     ~o_d8014879aa8f4301175712103e9b1a9c) |
                    (o_5f2054375735557ee37481b29ead9540
                                                       << o_1776b1bf14709638fb92b3abac5d87a4);
};

void o_8b0dad0932902bea5f6bb4bfec4c6edf(foo_mcu_regs_t *mcuRegs) {
    mcuRegs->CTRL |= 1;
};

void o_45c8b920638c46b9ec2035e717d8af3d(foo_mcu_regs_t *mcuRegs) {
    mcuRegs->CTRL &= ~1;
};

void o_c6e22c82cc811f6c075d53765d7bf3ec(foo_mcu_regs_t *mcuRegs) {
    ctrlIncOr(mcuRegs,
              (0x0000000000000004 + 0x0000000000000202 + 0x0000000000000802 -
               0x0000000000000A06));
};

void o_a56332c23f30413b1482d90134fb017c(foo_mcu_regs_t *mcuRegs) {
    ctrlAnd(mcuRegs, 2);
};

uint8_t getRead(foo_mcu_regs_t *mcuRegs) {
    return o_12188f50ebb21a6806de0cd61946247d(mcuRegs,
                                              (0x0000000000000004 + 0x0000000000000202 + 0x0000000000000802 -
                                               0x0000000000000A06),
                                              (0x0000000000000002 + 0x0000000000000201 + 0x0000000000000801 -
                                               0x0000000000000A03));
};

uint8_t getWrite(foo_mcu_regs_t *mcuRegs) {
    return o_12188f50ebb21a6806de0cd61946247d(mcuRegs,
                                              (0x0000000000000002 + 0x0000000000000201 + 0x0000000000000801 -
                                               0x0000000000000A03),
                                              (0x0000000000000000 + 0x0000000000000200 + 0x0000000000000800 -
                                               0x0000000000000A00));
};

void o_c06bb83883008f7eda58c3f132764d1f(foo_mcu_regs_t *mcuRegs) {
    ctrlIncOr(mcuRegs,
              4);
};

void o_ebdc36287735d9da2a645a50cf4818dc(foo_mcu_regs_t *mcuRegs) {
    ctrlAnd(mcuRegs,
            4);
};

uint8_t getBusy(foo_mcu_regs_t *o_a5297b181c490828e374c53ffe15ddef) {
    return o_12188f50ebb21a6806de0cd61946247d(o_a5297b181c490828e374c53ffe15ddef,
                                              (0x0000000000000008 + 0x0000000000000204 + 0x0000000000000804 -
                                               0x0000000000000A0C),
                                              (0x0000000000000004 + 0x0000000000000202 + 0x0000000000000802 -
                                               0x0000000000000A06));
};

uint8_t getTxPin(foo_mcu_regs_t *o_4fff041ba9649595ea9824bba8ada7db) {
    return o_12188f50ebb21a6806de0cd61946247d(o_4fff041ba9649595ea9824bba8ada7db,
                                              (0x0000000000000FF0 + 0x00000000000009F8 + 0x0000000000000FF8 -
                                               0x00000000000021E8),
                                              (0x0000000000000006 + 0x0000000000000203 + 0x0000000000000803 -
                                               0x0000000000000A09));
};

uint8_t getRxPin(foo_mcu_regs_t *o_ed20c2343b44b7c0890564710c7d8518) {
    return o_12188f50ebb21a6806de0cd61946247d(o_ed20c2343b44b7c0890564710c7d8518,
                                              (0x00000000000FF000 + 0x000000000007FA00 + 0x0000000000080000 -
                                               0x000000000017F200),
                                              (0x0000000000000016 + 0x000000000000020B + 0x000000000000080B -
                                               0x0000000000000A21));
};

void o_a93cb5055c3299e052ef8faa78e53272(foo_mcu_regs_t *mcuRegs,
                                        uint8_t o_1b0310a4785467406b8e13d512b453d9) {
    return o_9212590e69b55c794939f1fbfd2e8be0(mcuRegs,
                                              (0x0000000000000FF0 + 0x00000000000009F8 + 0x0000000000000FF8 -
                                               0x00000000000021E8),
                                              (0x0000000000000006 + 0x0000000000000203 + 0x0000000000000803 -
                                               0x0000000000000A09), o_1b0310a4785467406b8e13d512b453d9);
};

void o_0a058493a2b5534c760709fbe8d1fa94(foo_mcu_regs_t *mcuRegs,
                                        uint8_t o_12a01f57b606806d52e472fda34bd5ea) {
    return o_9212590e69b55c794939f1fbfd2e8be0(mcuRegs,
                                              (0x00000000000FF000 + 0x000000000007FA00 + 0x0000000000080000 -
                                               0x000000000017F200),
                                              (0x0000000000000016 + 0x000000000000020B + 0x000000000000080B -
                                               0x0000000000000A21), o_12a01f57b606806d52e472fda34bd5ea);
};

void dumpMemory(foo_mcu_t *fooMcu) {
    foo_mcu_regs_t *pFooMcuRegs = &(fooMcu->regs);
    uint8_t txPin, rxPin, read, write, busy;
    read = getRead(pFooMcuRegs);
    write = getWrite(pFooMcuRegs);
    busy = getBusy(pFooMcuRegs);
    rxPin = getRxPin(pFooMcuRegs);
    txPin = getTxPin(pFooMcuRegs);
    printWithSysTick(fooMcu, "\x1B[31m",
                     "MCU regs dump: ");
    printWithSysTick(fooMcu, "\x1B[31m",
                     "CTRL: TXPIN: %d RXPIN: %d WRITE: %d READ: %d BUSY: %d\n",
                     txPin, rxPin,
                     write, read,
                     busy);
    printWithSysTick(fooMcu, "\x1B[31m",
                     "RXDATA: 0x%X\tTXDATA: 0x%X\n",
                     pFooMcuRegs->RXDATA,
                     pFooMcuRegs->TXDATA);
};

void dumpAndHalt(foo_mcu_t *fooMcu) {
    printWithSysTick(fooMcu, "\x1B[31m",
                     "MCU halted\n");
    dumpMemory(fooMcu);
    while (1) {};
};

uint8_t o_ac02cef19c00e137e7efd46c676269fd(foo_mcu_t *mcu) {
    foo_mcu_regs_t *mcuRegs, *mcuRegsOld;
    mcuRegs = &(mcu->regs);
    mcuRegsOld = &(mcu->regs_old);
    if (getWrite(mcuRegs) &&
        getRead(mcuRegs)) {
        printWithSysTick(mcu, "\x1B[31m",
                         "Error. You cannot read and write at the same time.\n");
        return 1;
    };
    if ((getWrite(mcuRegs) ||
         getRead(mcuRegs)) &&
        getBusy(mcuRegs)) {
        printWithSysTick(mcu, "\x1B[31m",
                         "Error. You cannot read or write when the periph is busy.\n""");
        return 2;
    };
    return 0;
};

void o_4f945a415e974cce52763083f3d894e1(foo_mcu_t *fooMcu) {
    foo_mcu_regs_t *mcuRegs, *mcuRegsOld;
    uint8_t o_13359d83a37cc9105c520e6b7cc6b472, read, write, o_52df9170fe9a8f4db92e21b7c173fc0e, readOld, writeOld, rxPin, txPin;
    mcuRegs = &(fooMcu->regs);
    mcuRegsOld = &(fooMcu->regs_old);
    read = getRead(mcuRegs);
    readOld = getRead(mcuRegsOld);
    write = getWrite(mcuRegs);
    writeOld = getWrite(mcuRegsOld);
    rxPin = getRxPin(mcuRegs);
    txPin = getTxPin(mcuRegs);
    if (!(read ^ 1) && !(readOld ^ 0)) {
        uint8_t randomNumber = 1 + rand() % 5;
        if (rxPin < 32 || rxPin > 143) {
            printWithSysTick(fooMcu, "\x1B[31m",
                             "Error. You are trying to write to a pin that is not allowed\n");
            dumpAndHalt(fooMcu);
            return;
        };
        if (rxPin == txPin) {
            printWithSysTick(fooMcu, "\x1B[31m",
                             "Error. TX and RX wires are assigned to the same pin.\n");
            dumpAndHalt(fooMcu);
        };
        printWithSysTick(fooMcu, "\x1B[32m",
                         "Starting a RX operation.\n");
        fooMcu->sys_tick_idle =
                fooMcu->sys_tick + randomNumber;
        o_a56332c23f30413b1482d90134fb017c(mcuRegs);
        o_c06bb83883008f7eda58c3f132764d1f(mcuRegs);
        fooMcu->state = (0x0000000000000004 + 0x0000000000000202 + 0x0000000000000802 -
                         0x0000000000000A06);
        return;
    };
    if (!(write ^ 0x0000000000000001) &&
        !(writeOld ^ 0x0000000000000000)) {
        uint8_t o_7fc4569c3a90443139409734b95d8a3c =
                (0x000000000000000A + 0x0000000000000205 + 0x0000000000000805 - 0x0000000000000A0F) +
                rand() % (0x0000000000000014 + 0x000000000000020A + 0x000000000000080A - 0x0000000000000A1E);
        if ((txPin <
             (0x0000000000000040 + 0x0000000000000220 + 0x0000000000000820 - 0x0000000000000A60)) &
            !!(txPin <
               (0x0000000000000040 + 0x0000000000000220 + 0x0000000000000820 - 0x0000000000000A60)) ||
            (txPin >
             (0x000000000000011E + 0x000000000000028F + 0x000000000000088F - 0x0000000000000BAD)) &
            !!(txPin > (0x000000000000011E + 0x000000000000028F + 0x000000000000088F -
                        0x0000000000000BAD))) {
            printWithSysTick(fooMcu, "\x1B[31m",
                             "Error. You are trying to write to a  pin that is not allowed\n");
            dumpAndHalt(fooMcu);
            return;
        };
        if (rxPin == txPin) {
            printWithSysTick(fooMcu, "\x1B[31m",
                             "Error. TX and RX wires are assigned to the same  pin.\n");
            dumpAndHalt(fooMcu);
        };
        printWithSysTick(fooMcu, "\x1B[32m",
                         "Starting a TX operation\n");
        fooMcu->sys_tick_idle =
                fooMcu->sys_tick + o_7fc4569c3a90443139409734b95d8a3c;
        o_45c8b920638c46b9ec2035e717d8af3d(mcuRegs);
        o_c06bb83883008f7eda58c3f132764d1f(mcuRegs);
        fooMcu->state = (0x0000000000000002 + 0x0000000000000201 + 0x0000000000000801 -
                         0x0000000000000A03);
        return;
    };
};

void mcu_one_iteration() {
    foo_mcu_t *pMcu = &mcu;
    srand(time(NULL));
    if ((o_ac02cef19c00e137e7efd46c676269fd(pMcu) >
         0) &
        !!(o_ac02cef19c00e137e7efd46c676269fd(pMcu) >
           0)) { dumpAndHalt(pMcu); }
    else {
        if (pMcu->sys_tick == pMcu->sys_tick_idle) {
            o_ebdc36287735d9da2a645a50cf4818dc(&(pMcu->regs));
            if (!(pMcu->state ^ 0x0000000000000001)) {
                printWithSysTick(pMcu, "\x1B[32m",
                                 "TX finished. Transmitted data: 0x%X\n",
                                 pMcu->regs.TXDATA);
            };
            if (!(pMcu->state ^ 0x0000000000000002)) {
                pMcu->regs.RXDATA = (uint32_t) rand();
                printWithSysTick(pMcu, "\x1B[32m",
                                 "RX finished. Received data: 0x%X\n",
                                 pMcu->regs.RXDATA);
            };
            pMcu->state = (0x0000000000000000 + 0x0000000000000200 + 0x0000000000000800 -
                           0x0000000000000A00);
        };
        o_4f945a415e974cce52763083f3d894e1(pMcu);
        pMcu->regs_old = pMcu->regs;
        addTick(pMcu);
        printWithSysTick(pMcu, "\x1B[36m",
                         "Tick!\n");
    };
};