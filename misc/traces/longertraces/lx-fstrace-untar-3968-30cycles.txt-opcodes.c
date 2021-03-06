// This file has been automatically generated by strace2c.
// Do not edit it!

#include "common/op_types.h"

trace_op_t trace_ops[] = {
    /* #1 = 0x1 */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 115154 } },
    /* #2 = 0x2 */ { .opcode = OPEN_OP, .args.open = { 3, "/test.tar", O_RDONLY|O_LARGEFILE, 0 } },
    /* #3 = 0x3 */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 19129 } },
    /* #4 = 0x4 */ { .opcode = READ_OP, .args.read = { 512, 3, 512, 1 } },
    /* #5 = 0x5 */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 24197 } },
    /* #6 = 0x6 */ { .opcode = UNLINK_OP, .args.unlink = { -1, "1024.bin" } },
    /* #7 = 0x7 */ { .opcode = OPEN_OP, .args.open = { 4, "1024.bin", O_WRONLY|O_CREAT|O_EXCL|O_LARGEFILE, 0100644 } },
    /* #8 = 0x8 */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 2674 } },
    /* #9 = 0x9 */ { .opcode = SENDFILE_OP, .args.sendfile = { 1048576, 4, 3, NULL, 1048576 } },
    /* #10 = 0xa */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 3512 } },
    /* #11 = 0xb */ { .opcode = CLOSE_OP, .args.close = { 0, 4 } },
    /* #12 = 0xc */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 24945 } },
    /* #13 = 0xd */ { .opcode = READ_OP, .args.read = { 512, 3, 512, 1 } },
    /* #14 = 0xe */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 11804 } },
    /* #15 = 0xf */ { .opcode = UNLINK_OP, .args.unlink = { -1, "128.bin" } },
    /* #16 = 0x10 */ { .opcode = OPEN_OP, .args.open = { 4, "128.bin", O_WRONLY|O_CREAT|O_EXCL|O_LARGEFILE, 0100644 } },
    /* #17 = 0x11 */ { .opcode = SENDFILE_OP, .args.sendfile = { 131072, 4, 3, NULL, 131072 } },
    /* #18 = 0x12 */ { .opcode = CLOSE_OP, .args.close = { 0, 4 } },
    /* #19 = 0x13 */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 14168 } },
    /* #20 = 0x14 */ { .opcode = READ_OP, .args.read = { 512, 3, 512, 1 } },
    /* #21 = 0x15 */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 11605 } },
    /* #22 = 0x16 */ { .opcode = UNLINK_OP, .args.unlink = { -1, "2048.bin" } },
    /* #23 = 0x17 */ { .opcode = OPEN_OP, .args.open = { 4, "2048.bin", O_WRONLY|O_CREAT|O_EXCL|O_LARGEFILE, 0100644 } },
    /* #24 = 0x18 */ { .opcode = SENDFILE_OP, .args.sendfile = { 2097152, 4, 3, NULL, 2097152 } },
    /* #25 = 0x19 */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 1155 } },
    /* #26 = 0x1a */ { .opcode = CLOSE_OP, .args.close = { 0, 4 } },
    /* #27 = 0x1b */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 14405 } },
    /* #28 = 0x1c */ { .opcode = READ_OP, .args.read = { 512, 3, 512, 1 } },
    /* #29 = 0x1d */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 11607 } },
    /* #30 = 0x1e */ { .opcode = UNLINK_OP, .args.unlink = { -1, "256.bin" } },
    /* #31 = 0x1f */ { .opcode = OPEN_OP, .args.open = { 4, "256.bin", O_WRONLY|O_CREAT|O_EXCL|O_LARGEFILE, 0100644 } },
    /* #32 = 0x20 */ { .opcode = SENDFILE_OP, .args.sendfile = { 262144, 4, 3, NULL, 262144 } },
    /* #33 = 0x21 */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 1028 } },
    /* #34 = 0x22 */ { .opcode = CLOSE_OP, .args.close = { 0, 4 } },
    /* #35 = 0x23 */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 14278 } },
    /* #36 = 0x24 */ { .opcode = READ_OP, .args.read = { 512, 3, 512, 1 } },
    /* #37 = 0x25 */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 11529 } },
    /* #38 = 0x26 */ { .opcode = UNLINK_OP, .args.unlink = { -1, "512.bin" } },
    /* #39 = 0x27 */ { .opcode = OPEN_OP, .args.open = { 4, "512.bin", O_WRONLY|O_CREAT|O_EXCL|O_LARGEFILE, 0100644 } },
    /* #40 = 0x28 */ { .opcode = SENDFILE_OP, .args.sendfile = { 524288, 4, 3, NULL, 524288 } },
    /* #41 = 0x29 */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 1149 } },
    /* #42 = 0x2a */ { .opcode = CLOSE_OP, .args.close = { 0, 4 } },
    /* #43 = 0x2b */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 14341 } },
    /* #44 = 0x2c */ { .opcode = READ_OP, .args.read = { 512, 3, 512, 19 } },
    /* #45 = 0x2d */ { .opcode = READ_OP, .args.read = { 0, 3, 512, 1 } },
    /* #46 = 0x2e */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 2776 } },
    /* #47 = 0x2f */ { .opcode = CLOSE_OP, .args.close = { 0, 3 } },
    { .opcode = INVALID_OP } 
};
