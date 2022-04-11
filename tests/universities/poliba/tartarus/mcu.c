#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <assert.h>
#include <time.h>
#include <stdarg.h>

struct a_f2fbeff737f9623ccba574bb9ca500eb {
    uint32_t CTRL;
    uint32_t RXDATA;
    uint32_t TXDATA;
};
typedef struct a_f2fbeff737f9623ccba574bb9ca500eb foo_mcu_regs_t;
struct a_6666732d1d927a44729510a254c2ef18 {
    uint32_t sys_tick;
    uint32_t sys_tick_idle;
    uint8_t state;
    foo_mcu_regs_t regs;
    foo_mcu_regs_t regs_old;
};
typedef struct a_6666732d1d927a44729510a254c2ef18 foo_mcu_t;
foo_mcu_t o_8564a6b5f08e8217e6bb707b1a20be8a;
void *regs = &(o_8564a6b5f08e8217e6bb707b1a20be8a.regs);

void o_ba6ac9918776da86fb709a00dac670c4(foo_mcu_t *o_068fc7d28d47b832159c2da15e323187,
                                        const char *o_1e5eba04d086487857865512f1a1fb92,
                                        const char *o_47d3fd7964c654f64251c54a5b6c026e, ...) {
    va_list o_23da420366332a9e19b0620af61fef3f;
    va_start(o_23da420366332a9e19b0620af61fef3f, o_47d3fd7964c654f64251c54a5b6c026e);
    printf("\x25""s\133%\x30""3\144]\x20""", o_1e5eba04d086487857865512f1a1fb92,
           o_068fc7d28d47b832159c2da15e323187->sys_tick);
    vprintf(o_47d3fd7964c654f64251c54a5b6c026e, o_23da420366332a9e19b0620af61fef3f);
    printf("\x1B""[\060m");
    va_end(o_23da420366332a9e19b0620af61fef3f);
};

void o_196b64ff67cb3698d301018b28823628(foo_mcu_t *o_35581ac0a159ee719a41d1195a78c06d) {
    if (o_35581ac0a159ee719a41d1195a78c06d) {
        o_35581ac0a159ee719a41d1195a78c06d->sys_tick += (0x0000000000000002 + 0x0000000000000201 + 0x0000000000000801 -
                                                         0x0000000000000A03);
    };
};

void o_72a27cbbbf5c7de60061429b706c7ade(foo_mcu_regs_t *o_3b88a1f7f4894b515f7c7370cf5ae101,
                                        uint32_t o_df471f48b576e1f43b84046a94c21a08) { o_3b88a1f7f4894b515f7c7370cf5ae101->CTRL |= o_df471f48b576e1f43b84046a94c21a08; };

void o_90b9703e2a3361b74dbcc5ed67c41cd6(foo_mcu_regs_t *o_c3819c782df20c74549c0101bf060cc1,
                                        uint32_t o_9d5ee8430f47e22c6710de6f4960828b) { o_c3819c782df20c74549c0101bf060cc1->CTRL &= ~o_9d5ee8430f47e22c6710de6f4960828b; };

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

void o_bc5af8fe1ab51ac1e7f30cdabe23f232(foo_mcu_t *o_e9c46ab9f26169d2816536ef4230fa3c) {
    foo_mcu_regs_t *o_28bea975ddd4042ec0678caf30df40ff = &(o_e9c46ab9f26169d2816536ef4230fa3c->regs);
    uint8_t o_2a6e7e7c79d887866294c6c412680b61, o_bcc059fa7cc12a437a31d93a84d4e9a2, o_29497b53c90c3adfb578022f37550aaa, o_46eab19159790a19d97d3495ce1dcd39, o_41b60993bf8bf35ed776e73e52922f34;
    o_29497b53c90c3adfb578022f37550aaa = o_80fffed2be4ec6c9b0cf579d6e8c459f(o_28bea975ddd4042ec0678caf30df40ff);
    o_46eab19159790a19d97d3495ce1dcd39 = o_db05a6b6ce8cb30ec735ab77f7f2beb5(o_28bea975ddd4042ec0678caf30df40ff);
    o_41b60993bf8bf35ed776e73e52922f34 = o_90e929fcb044f4de8e3e926490919eb5(o_28bea975ddd4042ec0678caf30df40ff);
    o_bcc059fa7cc12a437a31d93a84d4e9a2 = o_77969eea28f6bb59d78f611e4145911b(o_28bea975ddd4042ec0678caf30df40ff);
    o_2a6e7e7c79d887866294c6c412680b61 = o_b7afb496fe3bcb9985ff8581fa24e2f0(o_28bea975ddd4042ec0678caf30df40ff);
    o_ba6ac9918776da86fb709a00dac670c4(o_e9c46ab9f26169d2816536ef4230fa3c, "\x1B""[\0631\x6D""",
                                       "\x4D""C\125 \x72""e\147s\x20""d\165m\x70"":\040");
    o_ba6ac9918776da86fb709a00dac670c4(o_e9c46ab9f26169d2816536ef4230fa3c, "\x1B""[\0631\x6D""",
                                       "\x43""T\122L\x3A"" \124X\x50""I\116:\x20""%\144 \x52""X\120I\x4E"":\040%\x64"" \127R\x49""T\105:\x20""%\144 \x52""E\101D\x3A"" \045d\x20""B\125S\x59"":\040%\x64""\x0A",
                                       o_2a6e7e7c79d887866294c6c412680b61, o_bcc059fa7cc12a437a31d93a84d4e9a2,
                                       o_46eab19159790a19d97d3495ce1dcd39, o_29497b53c90c3adfb578022f37550aaa,
                                       o_41b60993bf8bf35ed776e73e52922f34);
    o_ba6ac9918776da86fb709a00dac670c4(o_e9c46ab9f26169d2816536ef4230fa3c, "\x1B""[\0631\x6D""",
                                       "\x52""X\104A\x54""A\072 \x30""x\045X\x09""T\130D\x41""T\101:\x20""0\170%\x58""\x0A",
                                       o_28bea975ddd4042ec0678caf30df40ff->RXDATA,
                                       o_28bea975ddd4042ec0678caf30df40ff->TXDATA);
};

void o_caf09b4914d1bcc74f5e17949454a8b3(foo_mcu_t *o_e56d732b7e5e97e88da8aa6a79021125) {
    o_ba6ac9918776da86fb709a00dac670c4(o_e56d732b7e5e97e88da8aa6a79021125, "\x1B""[\0631\x6D""",
                                       "\x4D""C\125 \x68""a\154t\x65""d\012");
    o_bc5af8fe1ab51ac1e7f30cdabe23f232(o_e56d732b7e5e97e88da8aa6a79021125);
    while ((0x0000000000000002 + 0x0000000000000201 + 0x0000000000000801 - 0x0000000000000A03)) {};
};

uint8_t o_ac02cef19c00e137e7efd46c676269fd(foo_mcu_t *o_9cc5df9f4ad6898a08c9c8f5e3517ded) {
    foo_mcu_regs_t *o_8b30ffe368accc4b0ff59cb00ee7b37d, *o_eadd8259fd07f6d02d29ad0b20010e13;
    o_8b30ffe368accc4b0ff59cb00ee7b37d = &(o_9cc5df9f4ad6898a08c9c8f5e3517ded->regs);
    o_eadd8259fd07f6d02d29ad0b20010e13 = &(o_9cc5df9f4ad6898a08c9c8f5e3517ded->regs_old);
    if (o_db05a6b6ce8cb30ec735ab77f7f2beb5(o_8b30ffe368accc4b0ff59cb00ee7b37d) &&
        o_80fffed2be4ec6c9b0cf579d6e8c459f(o_8b30ffe368accc4b0ff59cb00ee7b37d)) {
        o_ba6ac9918776da86fb709a00dac670c4(o_9cc5df9f4ad6898a08c9c8f5e3517ded, "\x1B""[\0631\x6D""",
                                           "\x45""r\162o\x72"".\040Y\x6F""u\040c\x61""n\156o\x74"" \162e\x61""d\040a\x6E""d\040w\x72""i\164e\x20""a\164 \x74""h\145 \x73""a\155e\x20""t\151m\x65"".\012");
        return (0x0000000000000002 + 0x0000000000000201 + 0x0000000000000801 - 0x0000000000000A03);
    };
    if ((o_db05a6b6ce8cb30ec735ab77f7f2beb5(o_8b30ffe368accc4b0ff59cb00ee7b37d) ||
         o_80fffed2be4ec6c9b0cf579d6e8c459f(o_8b30ffe368accc4b0ff59cb00ee7b37d)) &&
        o_90e929fcb044f4de8e3e926490919eb5(o_8b30ffe368accc4b0ff59cb00ee7b37d)) {
        o_ba6ac9918776da86fb709a00dac670c4(o_9cc5df9f4ad6898a08c9c8f5e3517ded, "\x1B""[\0631\x6D""",
                                           "\x45""r\162o\x72"".\040Y\x6F""u\040c\x61""n\156o\x74"" \162e\x61""d\040o\x72"" \167r\x69""t\145 \x77""h\145n\x20""t\150e\x20""p\145r\x69""p\150 \x69""s\040b\x75""s\171.\x0A""");
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
            o_ba6ac9918776da86fb709a00dac670c4(o_5fdd523d0613be7a3eee3fcf73821b31, "\x1B""[\0631\x6D""",
                                               "\x45""r\162o\x72"".\040Y\x6F""u\040a\x72""e\040t\x72""y\151n\x67"" \164o\x20""w\162i\x74""e\040t\x6F"" \141 \x70""i\156 \x74""h\141t\x20""i\163 \x6E""o\164 \x61""l\154o\x77""e\144\x0A");
            o_caf09b4914d1bcc74f5e17949454a8b3(o_5fdd523d0613be7a3eee3fcf73821b31);
            return;
        };
        if (o_3decc86c0e8e098db9596ec537551976 == o_6e94d8ce35f85f4e02edaf2a23647ee2) {
            o_ba6ac9918776da86fb709a00dac670c4(o_5fdd523d0613be7a3eee3fcf73821b31, "\x1B""[\0631\x6D""",
                                               "\x45""r\162o\x72"".\040T\x58"" \141n\x64"" \122X\x20""w\151r\x65""s\040a\x72""e\040a\x73""s\151g\x6E""e\144 \x74""o\040t\x68""e\040s\x61""m\145 \x70""i\156.\x0A""");
            o_caf09b4914d1bcc74f5e17949454a8b3(o_5fdd523d0613be7a3eee3fcf73821b31);
        };
        o_ba6ac9918776da86fb709a00dac670c4(o_5fdd523d0613be7a3eee3fcf73821b31, "\x1B""[\0632\x6D""",
                                           "\x53""t\141r\x74""i\156g\x20""a\040R\x58"" \157p\x65""r\141t\x69""o\156.\x0A""");
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
            o_ba6ac9918776da86fb709a00dac670c4(o_5fdd523d0613be7a3eee3fcf73821b31, "\x1B""[\0631\x6D""",
                                               "\x45""r\162o\x72"".\040Y\x6F""u\040a\x72""e\040t\x72""y\151n\x67"" \164o\x20""w\162i\x74""e\040t\x6F"" \141 \x70""i\156 \x74""h\141t\x20""i\163 \x6E""o\164 \x61""l\154o\x77""e\144\x0A");
            o_caf09b4914d1bcc74f5e17949454a8b3(o_5fdd523d0613be7a3eee3fcf73821b31);
            return;
        };
        if (o_3decc86c0e8e098db9596ec537551976 == o_6e94d8ce35f85f4e02edaf2a23647ee2) {
            o_ba6ac9918776da86fb709a00dac670c4(o_5fdd523d0613be7a3eee3fcf73821b31, "\x1B""[\0631\x6D""",
                                               "\x45""r\162o\x72"".\040T\x58"" \141n\x64"" \122X\x20""w\151r\x65""s\040a\x72""e\040a\x73""s\151g\x6E""e\144 \x74""o\040t\x68""e\040s\x61""m\145 \x70""i\156.\x0A""");
            o_caf09b4914d1bcc74f5e17949454a8b3(o_5fdd523d0613be7a3eee3fcf73821b31);
        };
        o_ba6ac9918776da86fb709a00dac670c4(o_5fdd523d0613be7a3eee3fcf73821b31, "\x1B""[\0632\x6D""",
                                           "\x53""t\141r\x74""i\156g\x20""a\040T\x58"" \157p\x65""r\141t\x69""o\156\x0A");
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
    foo_mcu_t *o_ef575290c7a418330b8b9fda762e7b5b = &o_8564a6b5f08e8217e6bb707b1a20be8a;
    srand(time(NULL));
    if ((o_ac02cef19c00e137e7efd46c676269fd(o_ef575290c7a418330b8b9fda762e7b5b) >
         (0x0000000000000000 + 0x0000000000000200 + 0x0000000000000800 - 0x0000000000000A00)) &
        !!(o_ac02cef19c00e137e7efd46c676269fd(o_ef575290c7a418330b8b9fda762e7b5b) >
           (0x0000000000000000 + 0x0000000000000200 + 0x0000000000000800 -
            0x0000000000000A00))) { o_caf09b4914d1bcc74f5e17949454a8b3(o_ef575290c7a418330b8b9fda762e7b5b); }
    else {
        if (o_ef575290c7a418330b8b9fda762e7b5b->sys_tick == o_ef575290c7a418330b8b9fda762e7b5b->sys_tick_idle) {
            o_ebdc36287735d9da2a645a50cf4818dc(&(o_ef575290c7a418330b8b9fda762e7b5b->regs));
            if (!(o_ef575290c7a418330b8b9fda762e7b5b->state ^ 0x0000000000000001)) {
                o_ba6ac9918776da86fb709a00dac670c4(o_ef575290c7a418330b8b9fda762e7b5b, "\x1B""[\0632\x6D""",
                                                   "\x54""X\040f\x69""n\151s\x68""e\144.\x20""T\162a\x6E""s\155i\x74""t\145d\x20""d\141t\x61"":\0400\x78""%\130\x0A",
                                                   o_ef575290c7a418330b8b9fda762e7b5b->regs.TXDATA);
            };
            if (!(o_ef575290c7a418330b8b9fda762e7b5b->state ^ 0x0000000000000002)) {
                o_ef575290c7a418330b8b9fda762e7b5b->regs.RXDATA = (uint32_t) rand();
                o_ba6ac9918776da86fb709a00dac670c4(o_ef575290c7a418330b8b9fda762e7b5b, "\x1B""[\0632\x6D""",
                                                   "\x52""X\040f\x69""n\151s\x68""e\144.\x20""R\145c\x65""i\166e\x64"" \144a\x74""a\072 \x30""x\045X\x0A""",
                                                   o_ef575290c7a418330b8b9fda762e7b5b->regs.RXDATA);
            };
            o_ef575290c7a418330b8b9fda762e7b5b->state = (0x0000000000000000 + 0x0000000000000200 + 0x0000000000000800 -
                                                         0x0000000000000A00);
        };
        o_4f945a415e974cce52763083f3d894e1(o_ef575290c7a418330b8b9fda762e7b5b);
        o_ef575290c7a418330b8b9fda762e7b5b->regs_old = o_ef575290c7a418330b8b9fda762e7b5b->regs;
        o_196b64ff67cb3698d301018b28823628(o_ef575290c7a418330b8b9fda762e7b5b);
        o_ba6ac9918776da86fb709a00dac670c4(o_ef575290c7a418330b8b9fda762e7b5b, "\x1B""[\0636\x6D""",
                                           "\x54""i\143k\x21""\x0A");
    };
};