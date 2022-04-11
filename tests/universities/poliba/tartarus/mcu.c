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
                      const char *stringToPrint,
                      const char *n, ...) {
    va_list vl;
    va_start(vl, n);
    printf("\x25""s\133%\x30""3d] """, stringToPrint,
           fooMcu->sys_tick);
    vprintf(n, vl);
    printf("\x1B""[\060m");
    va_end(vl);
};

void addTick(foo_mcu_t *fooMcu) {
    if (fooMcu) {
        fooMcu->sys_tick += (0x0000000000000002 + 0x0000000000000201 + 0x0000000000000801 -
                             0x0000000000000A03);
    };
};

void o_72a27cbbbf5c7de60061429b706c7ade(foo_mcu_regs_t *mcuRegs,
                                        uint32_t o_df471f48b576e1f43b84046a94c21a08) { mcuRegs->CTRL |= o_df471f48b576e1f43b84046a94c21a08; };

void o_90b9703e2a3361b74dbcc5ed67c41cd6(foo_mcu_regs_t *mcuRegs,
                                        uint32_t o_9d5ee8430f47e22c6710de6f4960828b) { mcuRegs->CTRL &= ~o_9d5ee8430f47e22c6710de6f4960828b; };

uint8_t o_12188f50ebb21a6806de0cd61946247d(foo_mcu_regs_t *o_195220b25f952b3eee83f8b2d38c90bb,
                                           uint32_t o_d36fdf8ced93fae004e7fed26597efcd,
                                           uint8_t o_1001e3d49e99def2eaae389abb10deb0) {
    return (o_195220b25f952b3eee83f8b2d38c90bb->CTRL & o_d36fdf8ced93fae004e7fed26597efcd)
            >> o_1001e3d49e99def2eaae389abb10deb0;
};

void o_9212590e69b55c794939f1fbfd2e8be0(foo_mcu_regs_t *o_7fc817367bd646f1df2afededc0f5b30,
                                        uint32_t o_d8014879aa8f4301175712103e9b1a9c,
                                        uint8_t o_1776b1bf14709638fb92b3abac5d87a4,
                                        uint8_t o_5f2054375735557ee37481b29ead9540) {
    o_7fc817367bd646f1df2afededc0f5b30->CTRL = (o_7fc817367bd646f1df2afededc0f5b30->CTRL &
                                                ~o_d8014879aa8f4301175712103e9b1a9c) |
                                               (o_5f2054375735557ee37481b29ead9540
                                                       << o_1776b1bf14709638fb92b3abac5d87a4);
};

void o_8b0dad0932902bea5f6bb4bfec4c6edf(foo_mcu_regs_t *o_88ab8dc8a6b85c9803be08f6eafd1d80) {
    o_88ab8dc8a6b85c9803be08f6eafd1d80->CTRL |= (0x0000000000000002 + 0x0000000000000201 + 0x0000000000000801 -
                                                 0x0000000000000A03);
};

void o_45c8b920638c46b9ec2035e717d8af3d(foo_mcu_regs_t *o_8fce256bc95ac15d43a16a56f22e6e62) {
    o_8fce256bc95ac15d43a16a56f22e6e62->CTRL &= ~(0x0000000000000002 + 0x0000000000000201 + 0x0000000000000801 -
                                                  0x0000000000000A03);
};

void o_c6e22c82cc811f6c075d53765d7bf3ec(foo_mcu_regs_t *o_35b77b8a53e7521f1c972b187fbdc620) {
    o_72a27cbbbf5c7de60061429b706c7ade(o_35b77b8a53e7521f1c972b187fbdc620,
                                       (0x0000000000000004 + 0x0000000000000202 + 0x0000000000000802 -
                                        0x0000000000000A06));
};

void o_a56332c23f30413b1482d90134fb017c(foo_mcu_regs_t *o_c5be2095df257bdf0685c169cbe19d4d) {
    o_90b9703e2a3361b74dbcc5ed67c41cd6(o_c5be2095df257bdf0685c169cbe19d4d,
                                       (0x0000000000000004 + 0x0000000000000202 + 0x0000000000000802 -
                                        0x0000000000000A06));
};

uint8_t o_80fffed2be4ec6c9b0cf579d6e8c459f(foo_mcu_regs_t *o_69b08944cb2f626eb4981fe4fef3e730) {
    return o_12188f50ebb21a6806de0cd61946247d(o_69b08944cb2f626eb4981fe4fef3e730,
                                              (0x0000000000000004 + 0x0000000000000202 + 0x0000000000000802 -
                                               0x0000000000000A06),
                                              (0x0000000000000002 + 0x0000000000000201 + 0x0000000000000801 -
                                               0x0000000000000A03));
};

uint8_t o_db05a6b6ce8cb30ec735ab77f7f2beb5(foo_mcu_regs_t *o_38a86e3004b648051b19c5a6ad3c60db) {
    return o_12188f50ebb21a6806de0cd61946247d(o_38a86e3004b648051b19c5a6ad3c60db,
                                              (0x0000000000000002 + 0x0000000000000201 + 0x0000000000000801 -
                                               0x0000000000000A03),
                                              (0x0000000000000000 + 0x0000000000000200 + 0x0000000000000800 -
                                               0x0000000000000A00));
};

void o_c06bb83883008f7eda58c3f132764d1f(foo_mcu_regs_t *o_9f104ad96e181d991f32bf4c5bf3d8bd) {
    o_72a27cbbbf5c7de60061429b706c7ade(o_9f104ad96e181d991f32bf4c5bf3d8bd,
                                       (0x0000000000000008 + 0x0000000000000204 + 0x0000000000000804 -
                                        0x0000000000000A0C));
};

void o_ebdc36287735d9da2a645a50cf4818dc(foo_mcu_regs_t *o_65a474ec98af19e2d1599657c1dab752) {
    o_90b9703e2a3361b74dbcc5ed67c41cd6(o_65a474ec98af19e2d1599657c1dab752,
                                       (0x0000000000000008 + 0x0000000000000204 + 0x0000000000000804 -
                                        0x0000000000000A0C));
};

uint8_t o_90e929fcb044f4de8e3e926490919eb5(foo_mcu_regs_t *o_a5297b181c490828e374c53ffe15ddef) {
    return o_12188f50ebb21a6806de0cd61946247d(o_a5297b181c490828e374c53ffe15ddef,
                                              (0x0000000000000008 + 0x0000000000000204 + 0x0000000000000804 -
                                               0x0000000000000A0C),
                                              (0x0000000000000004 + 0x0000000000000202 + 0x0000000000000802 -
                                               0x0000000000000A06));
};

uint8_t o_b7afb496fe3bcb9985ff8581fa24e2f0(foo_mcu_regs_t *o_4fff041ba9649595ea9824bba8ada7db) {
    return o_12188f50ebb21a6806de0cd61946247d(o_4fff041ba9649595ea9824bba8ada7db,
                                              (0x0000000000000FF0 + 0x00000000000009F8 + 0x0000000000000FF8 -
                                               0x00000000000021E8),
                                              (0x0000000000000006 + 0x0000000000000203 + 0x0000000000000803 -
                                               0x0000000000000A09));
};

uint8_t o_77969eea28f6bb59d78f611e4145911b(foo_mcu_regs_t *o_ed20c2343b44b7c0890564710c7d8518) {
    return o_12188f50ebb21a6806de0cd61946247d(o_ed20c2343b44b7c0890564710c7d8518,
                                              (0x00000000000FF000 + 0x000000000007FA00 + 0x0000000000080000 -
                                               0x000000000017F200),
                                              (0x0000000000000016 + 0x000000000000020B + 0x000000000000080B -
                                               0x0000000000000A21));
};

void o_a93cb5055c3299e052ef8faa78e53272(foo_mcu_regs_t *o_a73570b18cfbb5a276a7539514e91698,
                                        uint8_t o_1b0310a4785467406b8e13d512b453d9) {
    return o_9212590e69b55c794939f1fbfd2e8be0(o_a73570b18cfbb5a276a7539514e91698,
                                              (0x0000000000000FF0 + 0x00000000000009F8 + 0x0000000000000FF8 -
                                               0x00000000000021E8),
                                              (0x0000000000000006 + 0x0000000000000203 + 0x0000000000000803 -
                                               0x0000000000000A09), o_1b0310a4785467406b8e13d512b453d9);
};

void o_0a058493a2b5534c760709fbe8d1fa94(foo_mcu_regs_t *o_4bcb2b0601f7815aafbe7ce5ec8d42de,
                                        uint8_t o_12a01f57b606806d52e472fda34bd5ea) {
    return o_9212590e69b55c794939f1fbfd2e8be0(o_4bcb2b0601f7815aafbe7ce5ec8d42de,
                                              (0x00000000000FF000 + 0x000000000007FA00 + 0x0000000000080000 -
                                               0x000000000017F200),
                                              (0x0000000000000016 + 0x000000000000020B + 0x000000000000080B -
                                               0x0000000000000A21), o_12a01f57b606806d52e472fda34bd5ea);
};

void o_bc5af8fe1ab51ac1e7f30cdabe23f232(foo_mcu_t *fooMcu) {
    foo_mcu_regs_t *pFooMcuRegs = &(fooMcu->regs);
    uint8_t o_2a6e7e7c79d887866294c6c412680b61, o_bcc059fa7cc12a437a31d93a84d4e9a2, o_29497b53c90c3adfb578022f37550aaa, o_46eab19159790a19d97d3495ce1dcd39, o_41b60993bf8bf35ed776e73e52922f34;
    o_29497b53c90c3adfb578022f37550aaa = o_80fffed2be4ec6c9b0cf579d6e8c459f(pFooMcuRegs);
    o_46eab19159790a19d97d3495ce1dcd39 = o_db05a6b6ce8cb30ec735ab77f7f2beb5(pFooMcuRegs);
    o_41b60993bf8bf35ed776e73e52922f34 = o_90e929fcb044f4de8e3e926490919eb5(pFooMcuRegs);
    o_bcc059fa7cc12a437a31d93a84d4e9a2 = o_77969eea28f6bb59d78f611e4145911b(pFooMcuRegs);
    o_2a6e7e7c79d887866294c6c412680b61 = o_b7afb496fe3bcb9985ff8581fa24e2f0(pFooMcuRegs);
    printWithSysTick(fooMcu, "\x1B""[\0631\x6D""",
                     "\x4D""CU r""egs ""dump"": ");
    printWithSysTick(fooMcu, "\x1B""[\0631\x6D""",
                     "\x43""T\122L\x3A"" \124X\x50""I\116: ""%d \x52""X\120I\x4E"": %\x64"" WR\x49""T\105: ""%d \x52""E\101D\x3A"" \045d ""BUS\x59"": %\x64""\x0A",
                     o_2a6e7e7c79d887866294c6c412680b61, o_bcc059fa7cc12a437a31d93a84d4e9a2,
                     o_46eab19159790a19d97d3495ce1dcd39, o_29497b53c90c3adfb578022f37550aaa,
                     o_41b60993bf8bf35ed776e73e52922f34);
    printWithSysTick(fooMcu, "\x1B""[\0631\x6D""",
                     "\x52""X\104A\x54""A\072 \x30""x\045X\x09""T\130D\x41""T\101: ""0\170%\x58""\x0A",
                     pFooMcuRegs->RXDATA,
                     pFooMcuRegs->TXDATA);
};

void o_caf09b4914d1bcc74f5e17949454a8b3(foo_mcu_t *o_e56d732b7e5e97e88da8aa6a79021125) {
    printWithSysTick(o_e56d732b7e5e97e88da8aa6a79021125, "\x1B""[\0631\x6D""",
                     "\x4D""CU h""alt\x65""d\012");
    o_bc5af8fe1ab51ac1e7f30cdabe23f232(o_e56d732b7e5e97e88da8aa6a79021125);
    while ((0x0000000000000002 + 0x0000000000000201 + 0x0000000000000801 - 0x0000000000000A03)) {};
};

uint8_t o_ac02cef19c00e137e7efd46c676269fd(foo_mcu_t *o_9cc5df9f4ad6898a08c9c8f5e3517ded) {
    foo_mcu_regs_t *o_8b30ffe368accc4b0ff59cb00ee7b37d, *o_eadd8259fd07f6d02d29ad0b20010e13;
    o_8b30ffe368accc4b0ff59cb00ee7b37d = &(o_9cc5df9f4ad6898a08c9c8f5e3517ded->regs);
    o_eadd8259fd07f6d02d29ad0b20010e13 = &(o_9cc5df9f4ad6898a08c9c8f5e3517ded->regs_old);
    if (o_db05a6b6ce8cb30ec735ab77f7f2beb5(o_8b30ffe368accc4b0ff59cb00ee7b37d) &&
        o_80fffed2be4ec6c9b0cf579d6e8c459f(o_8b30ffe368accc4b0ff59cb00ee7b37d)) {
        printWithSysTick(o_9cc5df9f4ad6898a08c9c8f5e3517ded, "\x1B""[\0631\x6D""",
                         "\x45""rror"". Yo""u c\x61""n\156o\x74"" re\x61""d an""d wr""i\164e ""a\164 \x74""h e \x73""a\155e ""tim\x65"".\012");
        return (0x0000000000000002 + 0x0000000000000201 + 0x0000000000000801 - 0x0000000000000A03);
    };
    if ((o_db05a6b6ce8cb30ec735ab77f7f2beb5(o_8b30ffe368accc4b0ff59cb00ee7b37d) ||
         o_80fffed2be4ec6c9b0cf579d6e8c459f(o_8b30ffe368accc4b0ff59cb00ee7b37d)) &&
        o_90e929fcb044f4de8e3e926490919eb5(o_8b30ffe368accc4b0ff59cb00ee7b37d)) {
        printWithSysTick(o_9cc5df9f4ad6898a08c9c8f5e3517ded, "\x1B""[\0631\x6D""",
                         "\x45""rror"". Yo""u c\x61""n\156o\x74"" re\x61""d or"" \167ri""t e \x77""h en ""the ""p eri""ph i""s b\x75""s\171.\x0A""");
        return (0x0000000000000004 + 0x0000000000000202 + 0x0000000000000802 - 0x0000000000000A06);
    };
    return (0x0000000000000000 + 0x0000000000000200 + 0x0000000000000800 - 0x0000000000000A00);
};

void o_4f945a415e974cce52763083f3d894e1(foo_mcu_t *o_5fdd523d0613be7a3eee3fcf73821b31) {
    foo_mcu_regs_t *o_3f5a390808594b2b59c6baaa7809cfe5, *o_0a5613864e8e857d72298cf38b8fbe23;
    uint8_t o_13359d83a37cc9105c520e6b7cc6b472, o_d8c93bd5f5ed2ddf51ea73d2024d871a, o_349439f3c2bdbbb75d3e19ceebcac287, o_52df9170fe9a8f4db92e21b7c173fc0e, o_5da32ca341d61c72b856cefd58d59dc1, o_71c91eedd0d7fba70239d75017f2e937, o_3decc86c0e8e098db9596ec537551976, o_6e94d8ce35f85f4e02edaf2a23647ee2;
    o_3f5a390808594b2b59c6baaa7809cfe5 = &(o_5fdd523d0613be7a3eee3fcf73821b31->regs);
    o_0a5613864e8e857d72298cf38b8fbe23 = &(o_5fdd523d0613be7a3eee3fcf73821b31->regs_old);
    o_d8c93bd5f5ed2ddf51ea73d2024d871a = o_80fffed2be4ec6c9b0cf579d6e8c459f(o_3f5a390808594b2b59c6baaa7809cfe5);
    o_5da32ca341d61c72b856cefd58d59dc1 = o_80fffed2be4ec6c9b0cf579d6e8c459f(o_0a5613864e8e857d72298cf38b8fbe23);
    o_349439f3c2bdbbb75d3e19ceebcac287 = o_db05a6b6ce8cb30ec735ab77f7f2beb5(o_3f5a390808594b2b59c6baaa7809cfe5);
    o_71c91eedd0d7fba70239d75017f2e937 = o_db05a6b6ce8cb30ec735ab77f7f2beb5(o_0a5613864e8e857d72298cf38b8fbe23);
    o_3decc86c0e8e098db9596ec537551976 = o_77969eea28f6bb59d78f611e4145911b(o_3f5a390808594b2b59c6baaa7809cfe5);
    o_6e94d8ce35f85f4e02edaf2a23647ee2 = o_b7afb496fe3bcb9985ff8581fa24e2f0(o_3f5a390808594b2b59c6baaa7809cfe5);
    if (!(o_d8c93bd5f5ed2ddf51ea73d2024d871a ^ 0x0000000000000001) &&
        !(o_5da32ca341d61c72b856cefd58d59dc1 ^ 0x0000000000000000)) {
        uint8_t o_03483490132b42cfebba9b2b0e7c16f3 =
                (0x0000000000000002 + 0x0000000000000201 + 0x0000000000000801 - 0x0000000000000A03) +
                rand() % (0x000000000000000A + 0x0000000000000205 + 0x0000000000000805 - 0x0000000000000A0F);
        if ((o_3decc86c0e8e098db9596ec537551976 <
             (0x0000000000000040 + 0x0000000000000220 + 0x0000000000000820 - 0x0000000000000A60)) &
            !!(o_3decc86c0e8e098db9596ec537551976 <
               (0x0000000000000040 + 0x0000000000000220 + 0x0000000000000820 - 0x0000000000000A60)) ||
            (o_3decc86c0e8e098db9596ec537551976 >
             (0x000000000000011E + 0x000000000000028F + 0x000000000000088F - 0x0000000000000BAD)) &
            !!(o_3decc86c0e8e098db9596ec537551976 > (0x000000000000011E + 0x000000000000028F + 0x000000000000088F -
                                                     0x0000000000000BAD))) {
            printWithSysTick(o_5fdd523d0613be7a3eee3fcf73821b31, "\x1B""[\0631\x6D""",
                             "\x45""rror"". Yo""u ar""e tr""yin\x67"" \164o ""wri\x74""e to"" \141  p""i\156 \x74""h\141t ""i\163 n""o\164 \x61""llo\x77""ed\x0A");
            o_caf09b4914d1bcc74f5e17949454a8b3(o_5fdd523d0613be7a3eee3fcf73821b31);
            return;
        };
        if (o_3decc86c0e8e098db9596ec537551976 == o_6e94d8ce35f85f4e02edaf2a23647ee2) {
            printWithSysTick(o_5fdd523d0613be7a3eee3fcf73821b31, "\x1B""[\0631\x6D""",
                             "\x45""rror"". T\x58"" \141n\x64"" \122X ""wir\x65""s ar""e a\x73""sign""ed \x74""o th""e s\x61""m e  p""i\156.\x0A""");
            o_caf09b4914d1bcc74f5e17949454a8b3(o_5fdd523d0613be7a3eee3fcf73821b31);
        };
        printWithSysTick(o_5fdd523d0613be7a3eee3fcf73821b31, "\x1B""[\0632\x6D""",
                         "\x53""t\141r\x74""i\156g ""a R\x58"" \157p\x65""r\141ti""o\156.\x0A""");
        o_5fdd523d0613be7a3eee3fcf73821b31->sys_tick_idle =
                o_5fdd523d0613be7a3eee3fcf73821b31->sys_tick + o_03483490132b42cfebba9b2b0e7c16f3;
        o_a56332c23f30413b1482d90134fb017c(o_3f5a390808594b2b59c6baaa7809cfe5);
        o_c06bb83883008f7eda58c3f132764d1f(o_3f5a390808594b2b59c6baaa7809cfe5);
        o_5fdd523d0613be7a3eee3fcf73821b31->state = (0x0000000000000004 + 0x0000000000000202 + 0x0000000000000802 -
                                                     0x0000000000000A06);
        return;
    };
    if (!(o_349439f3c2bdbbb75d3e19ceebcac287 ^ 0x0000000000000001) &&
        !(o_71c91eedd0d7fba70239d75017f2e937 ^ 0x0000000000000000)) {
        uint8_t o_7fc4569c3a90443139409734b95d8a3c =
                (0x000000000000000A + 0x0000000000000205 + 0x0000000000000805 - 0x0000000000000A0F) +
                rand() % (0x0000000000000014 + 0x000000000000020A + 0x000000000000080A - 0x0000000000000A1E);
        if ((o_6e94d8ce35f85f4e02edaf2a23647ee2 <
             (0x0000000000000040 + 0x0000000000000220 + 0x0000000000000820 - 0x0000000000000A60)) &
            !!(o_6e94d8ce35f85f4e02edaf2a23647ee2 <
               (0x0000000000000040 + 0x0000000000000220 + 0x0000000000000820 - 0x0000000000000A60)) ||
            (o_6e94d8ce35f85f4e02edaf2a23647ee2 >
             (0x000000000000011E + 0x000000000000028F + 0x000000000000088F - 0x0000000000000BAD)) &
            !!(o_6e94d8ce35f85f4e02edaf2a23647ee2 > (0x000000000000011E + 0x000000000000028F + 0x000000000000088F -
                                                     0x0000000000000BAD))) {
            printWithSysTick(o_5fdd523d0613be7a3eee3fcf73821b31, "\x1B""[\0631\x6D""",
                             "\x45""rror"". Yo""u ar""e tr""yin\x67"" \164o ""wri\x74""e to"" \141  p""i\156 \x74""h\141t ""i\163 n""o\164 \x61""llo\x77""ed\x0A");
            o_caf09b4914d1bcc74f5e17949454a8b3(o_5fdd523d0613be7a3eee3fcf73821b31);
            return;
        };
        if (o_3decc86c0e8e098db9596ec537551976 == o_6e94d8ce35f85f4e02edaf2a23647ee2) {
            printWithSysTick(o_5fdd523d0613be7a3eee3fcf73821b31, "\x1B""[\0631\x6D""",
                             "\x45""rror"". T\x58"" \141n\x64"" \122X ""wir\x65""s ar""e a\x73""sign""ed \x74""o th""e s\x61""m e  p""i\156.\x0A""");
            o_caf09b4914d1bcc74f5e17949454a8b3(o_5fdd523d0613be7a3eee3fcf73821b31);
        };
        printWithSysTick(o_5fdd523d0613be7a3eee3fcf73821b31, "\x1B""[\0632\x6D""",
                         "\x53""t\141r\x74""i\156g ""a T\x58"" \157p\x65""r\141ti""o\156\x0A");
        o_5fdd523d0613be7a3eee3fcf73821b31->sys_tick_idle =
                o_5fdd523d0613be7a3eee3fcf73821b31->sys_tick + o_7fc4569c3a90443139409734b95d8a3c;
        o_45c8b920638c46b9ec2035e717d8af3d(o_3f5a390808594b2b59c6baaa7809cfe5);
        o_c06bb83883008f7eda58c3f132764d1f(o_3f5a390808594b2b59c6baaa7809cfe5);
        o_5fdd523d0613be7a3eee3fcf73821b31->state = (0x0000000000000002 + 0x0000000000000201 + 0x0000000000000801 -
                                                     0x0000000000000A03);
        return;
    };
};

void mcu_one_iteration() {
    foo_mcu_t *pMcu = &mcu;
    srand(time(NULL));
    if ((o_ac02cef19c00e137e7efd46c676269fd(pMcu) >
         (0x0000000000000000 + 0x0000000000000200 + 0x0000000000000800 - 0x0000000000000A00)) &
        !!(o_ac02cef19c00e137e7efd46c676269fd(pMcu) >
           (0x0000000000000000 + 0x0000000000000200 + 0x0000000000000800 -
            0x0000000000000A00))) { o_caf09b4914d1bcc74f5e17949454a8b3(pMcu); }
    else {
        if (pMcu->sys_tick == pMcu->sys_tick_idle) {
            o_ebdc36287735d9da2a645a50cf4818dc(&(pMcu->regs));
            if (!(pMcu->state ^ 0x0000000000000001)) {
                printWithSysTick(pMcu, "\x1B""[\0632\x6D""",
                                 "\x54""X fi""nish""ed. ""Tran""s\155i\x74""t ed ""d\141t\x61"": 0\x78""%\130\x0A",
                                 pMcu->regs.TXDATA);
            };
            if (!(pMcu->state ^ 0x0000000000000002)) {
                pMcu->regs.RXDATA = (uint32_t) rand();
                printWithSysTick(pMcu, "\x1B""[\0632\x6D""",
                                 "\x52""X fi""nish""ed. ""R ec\x65""i\166e\x64"" da\x74""a\072 \x30""x\045X\x0A""",
                                 pMcu->regs.RXDATA);
            };
            pMcu->state = (0x0000000000000000 + 0x0000000000000200 + 0x0000000000000800 -
                           0x0000000000000A00);
        };
        o_4f945a415e974cce52763083f3d894e1(pMcu);
        pMcu->regs_old = pMcu->regs;
        addTick(pMcu);
        printWithSysTick(pMcu, "\x1B""[\0636\x6D""",
                         "\x54""i\143k\x21""\x0A");
    };
};