#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <assert.h>
#include <time.h>
#include <stdarg.h>

// THe structure that holds the user-exposed registers.
struct foo_mcu_regs_t {
    uint32_t CTRL;
    uint32_t RXDATA;
    uint32_t TXDATA;
};
typedef struct foo_mcu_regs_t foo_mcu_regs_t;

// The structure that holds data for periph emulation.
struct foo_mcu_t {
    uint32_t sys_tick;
    // The tick in which the operation will complete.
    uint32_t sys_tick_idle;
    // 0: Idle, 1: Writing, 2: Reading
    uint8_t state;
    foo_mcu_regs_t regs;
    foo_mcu_regs_t regs_old;
};
typedef struct foo_mcu_t foo_mcu_t;

// Global mcu structure
foo_mcu_t mcu;
void *regs = &(mcu.regs);

/*
 * Prints the current situation
 */
void printWithSysTick(foo_mcu_t *fooMcu, const char *color, const char *string, ...) {

    va_list vaList;
    va_start(vaList, string);

    printf("%s[%03d] ", color, fooMcu->sys_tick);
    vprintf(string, vaList);
    printf("\x1B[0m");

    va_end(vaList);

};

/*
 * Increments the tick counter
 */
void addTick(foo_mcu_t *fooMcu) {
    if (fooMcu) {
        fooMcu->sys_tick++;
    };
};

/*
 * Sets the specified (log2(n)+2) bit.
 */
void ctrlOr(foo_mcu_regs_t *mcuRegs, uint32_t n) { mcuRegs->CTRL |= n; };

/*
 * Clears the specified (log2(n)+1) bit.
 */
void ctrlAndNot(foo_mcu_regs_t *mcuRegs, uint32_t n) { mcuRegs->CTRL &= ~n; };

uint8_t readValueFromCtrl(foo_mcu_regs_t *mcuRegs,
                          uint32_t mask,
                          uint8_t startingBit) {
    return (mcuRegs->CTRL & mask)
            >> startingBit;
};

void o_9212590e69b55c794939f1fbfd2e8be0(foo_mcu_regs_t *mcuRegs,
                                        uint32_t o_d8014879aa8f4301175712103e9b1a9c,
                                        uint8_t startingBit,
                                        uint8_t o_5f2054375735557ee37481b29ead9540) {
    mcuRegs->CTRL = (mcuRegs->CTRL &
                     ~o_d8014879aa8f4301175712103e9b1a9c) |
                    (o_5f2054375735557ee37481b29ead9540
                            << startingBit);
};

/*
 * Sets the writing bit in the CTRL register.
 */
void setReading(foo_mcu_regs_t *mcuRegs) {
    mcuRegs->CTRL |= 1;
};

/*
 * Clears the writing bit in the CTRL register.
 */
void clearWriting(foo_mcu_regs_t *mcuRegs) {
    mcuRegs->CTRL &= ~1;
};

/*
 * Sets the writing bit in the CTRL register.
 */
void setWriting(foo_mcu_regs_t *mcuRegs) {
    ctrlOr(mcuRegs, 2);
};

/*
 * Clears the reading bit from the CTRL register.
 */
void clearReading(foo_mcu_regs_t *mcuRegs) {
    ctrlAndNot(mcuRegs, 2);
};

/*
 * Reads the reading bit from the CTRL register.
 */
uint8_t isPeriphReading(foo_mcu_regs_t *mcuRegs) {
    return readValueFromCtrl(mcuRegs, 2, 1);
};

/*
 * Reads the writing bit from the CTRL register.
 */
uint8_t isPeriphWriting(foo_mcu_regs_t *mcuRegs) {
    return readValueFromCtrl(mcuRegs, 1, 0);
};

/*
 * Sets the busy bit in the CTRL register.
 */
void setBusy(foo_mcu_regs_t *mcuRegs) {
    ctrlOr(mcuRegs, 4);
};

/*
 * Deletes the busy bit in the CTRL register.
 */
void clearBusy(foo_mcu_regs_t *mcuRegs) {
    ctrlAndNot(mcuRegs, 4);
};

/*
 * Checks if the busy bit in the CTRL register is set.
 */
uint8_t isPeriphBusy(foo_mcu_regs_t *mcuRegs) {
    return readValueFromCtrl(mcuRegs, 4, 2);
};

/*
 * Gets the TX pin from the CTRL register.
 */
uint8_t getTxPin(foo_mcu_regs_t *mcuRegs) {
    return readValueFromCtrl(mcuRegs, 2040, 3);
};

/*
 * Gets the RX pin from the CTRL register.
 */
uint8_t getRxPin(foo_mcu_regs_t *mcuRegs) {
    return readValueFromCtrl(mcuRegs, 522240, 11);
};

void o_a93cb5055c3299e052ef8faa78e53272(foo_mcu_regs_t *mcuRegs,
                                        uint8_t o_1b0310a4785467406b8e13d512b453d9) {
    return o_9212590e69b55c794939f1fbfd2e8be0(mcuRegs, 2040, 3,
                                              o_1b0310a4785467406b8e13d512b453d9);
};

void o_0a058493a2b5534c760709fbe8d1fa94(foo_mcu_regs_t *mcuRegs,
                                        uint8_t o_12a01f57b606806d52e472fda34bd5ea) {
    return o_9212590e69b55c794939f1fbfd2e8be0(mcuRegs, 522240, 11,
                                              o_12a01f57b606806d52e472fda34bd5ea);
};

/*
 * Writes the content of the memory to stdout.
 */
void dumpMemory(foo_mcu_t *fooMcu) {

    foo_mcu_regs_t *pFooMcuRegs = &(fooMcu->regs);

    uint8_t txPin;
    uint8_t rxPin;
    uint8_t read;
    uint8_t write;
    uint8_t busy;

    read = isPeriphReading(pFooMcuRegs);
    write = isPeriphWriting(pFooMcuRegs);
    busy = isPeriphBusy(pFooMcuRegs);
    rxPin = getRxPin(pFooMcuRegs);
    txPin = getTxPin(pFooMcuRegs);

    printWithSysTick(fooMcu, "\x1B[31m","MCU regs dump: ");
    printWithSysTick(fooMcu, "\x1B[31m","CTRL: TXPIN: %d RXPIN: %d WRITE: %d READ: %d BUSY: %d\n",
                     txPin, rxPin, write, read, busy);
    printWithSysTick(fooMcu, "\x1B[31m","RXDATA: 0x%X\tTXDATA: 0x%X\n",
                     pFooMcuRegs->RXDATA, pFooMcuRegs->TXDATA);

};

void dumpAndHalt(foo_mcu_t *fooMcu) {

    printWithSysTick(fooMcu, "\x1B[31m","MCU halted\n");
    dumpMemory(fooMcu);
    while (1) {};

};

/*
 * Checks if the user illegally set the R/W bits
 * @return 0 if the lock is respected, 1 or 2 if not.
 */
uint8_t isLockNotRespected(foo_mcu_t *fooMcu) {

    foo_mcu_regs_t *mcuRegs;
    foo_mcu_regs_t *mcuRegsOld;

    mcuRegs = &(fooMcu->regs);
    mcuRegsOld = &(fooMcu->regs_old);

    if (isPeriphWriting(mcuRegs) && isPeriphReading(mcuRegs)) {
        printWithSysTick(fooMcu, "\x1B[31m",
                         "Error. You cannot read and write at the same time.\n");
        return 1;
    };

    if ((isPeriphWriting(mcuRegs) || isPeriphReading(mcuRegs)) && isPeriphBusy(mcuRegs)) {
        printWithSysTick(fooMcu, "\x1B[31m",
                         "Error. You cannot read or write when the periph is busy.\n""");
        return 2;
    };

    return 0;

};

/*
 * Starts an operation if a command bit is set.
 * Does nothing otherwise.
 */
void startOperation(foo_mcu_t *fooMcu) {
    foo_mcu_regs_t *mcuRegs;
    foo_mcu_regs_t *mcuRegsOld;

    uint8_t unusedint8_1;
    uint8_t isReading;
    uint8_t isWriting;
    uint8_t unuseduint8_2;
    uint8_t wasReading;
    uint8_t wasWriting;
    uint8_t rxPin;
    uint8_t txPin;

    mcuRegs = &(fooMcu->regs);
    mcuRegsOld = &(fooMcu->regs_old);

    isReading = isPeriphReading(mcuRegs);
    wasReading = isPeriphReading(mcuRegsOld);
    isWriting = isPeriphWriting(mcuRegs);
    wasWriting = isPeriphWriting(mcuRegsOld);
    rxPin = getRxPin(mcuRegs);
    txPin = getTxPin(mcuRegs);

    // Start a read operation
    if (!(isReading ^ 1) && !(wasReading ^ 0)) {

        // Decide n of cycles required to complete
        uint8_t required_cycles = 1 + rand() % 5;

        // Check if rx pin is legal
        if (rxPin < 32 || rxPin > 143) {
            printWithSysTick(fooMcu, "\x1B[31m","Error. You are trying to write to a pin that is not allowed\n");
            dumpAndHalt(fooMcu);
            return;
        };
        if (rxPin == txPin) {
            printWithSysTick(fooMcu, "\x1B[31m","Error. TX and RX wires are assigned to the same pin.\n");
            dumpAndHalt(fooMcu);
        };

        printWithSysTick(fooMcu, "\x1B[32m","Starting a RX operation.\n");
        fooMcu->sys_tick_idle = fooMcu->sys_tick + required_cycles;
        clearReading(mcuRegs);
        setBusy(mcuRegs);
        fooMcu->state = 2;
        return;

    };

    // Start a writing operation
    if (!(isWriting ^ 1) && !(wasWriting ^ 0)) {

        uint8_t required_cycles = 5 + rand() % 10;

        // Check if tx pin is legal
        if (txPin < 20 || txPin > 143) {
            printWithSysTick(fooMcu, "\x1B[31m", "Error. You are trying to write to a pin that is not allowed\n");
            dumpAndHalt(fooMcu);
            return;
        };
        if (rxPin == txPin) {
            printWithSysTick(fooMcu, "\x1B[31m", "Error. TX and RX wires are assigned to the same pin.\n");
            dumpAndHalt(fooMcu);
        };

        printWithSysTick(fooMcu, "\x1B[32m", "Starting a TX operation\n");
        fooMcu->sys_tick_idle = fooMcu->sys_tick + required_cycles;

        clearWriting(mcuRegs);
        setBusy(mcuRegs);
        fooMcu->state = 1;
        return;

    };

};

/*
 * Emulates a clock cycle of the device.
 */
void mcu_one_iteration() {

    foo_mcu_t *pMcu = &mcu;
    srand(time(NULL));

    if (isLockNotRespected(pMcu)) {

        dumpAndHalt(pMcu);

    } else {

        // An operation has finished
        if (pMcu->sys_tick == pMcu->sys_tick_idle) {

            clearBusy(&(pMcu->regs));

            if (!(pMcu->state ^ 1)) {
                printWithSysTick(pMcu, "\x1B[32m",
                                 "TX finished. Transmitted data: 0x%X\n",
                                 pMcu->regs.TXDATA);
            };

            if (!(pMcu->state ^ 2)) {
                pMcu->regs.RXDATA = (uint32_t) rand();
                printWithSysTick(pMcu, "\x1B[32m",
                                 "RX finished. Received data: 0x%X\n",
                                 pMcu->regs.RXDATA);
            };

            pMcu->state = 0;

        };

        // Does nothing if there is no operation to start
        startOperation(pMcu);

        pMcu->regs_old = pMcu->regs;

        addTick(pMcu);
        printWithSysTick(pMcu, "\x1B[36m",
                         "Tick!\n");

    };

};