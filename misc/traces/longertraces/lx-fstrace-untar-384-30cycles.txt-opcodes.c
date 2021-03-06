// This file has been automatically generated by strace2c.
// Do not edit it!

#include "common/op_types.h"

trace_op_t trace_ops[] = {
    /* #1 = 0x1 */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 114030 } },
    /* #2 = 0x2 */ { .opcode = OPEN_OP, .args.open = { 3, "/test.tar", O_RDONLY|O_LARGEFILE, 0 } },
    /* #3 = 0x3 */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 19189 } },
    /* #4 = 0x4 */ { .opcode = READ_OP, .args.read = { 512, 3, 512, 1 } },
    /* #5 = 0x5 */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 23935 } },
    /* #6 = 0x6 */ { .opcode = UNLINK_OP, .args.unlink = { -1, "128.bin" } },
    /* #7 = 0x7 */ { .opcode = OPEN_OP, .args.open = { 4, "128.bin", O_WRONLY|O_CREAT|O_EXCL|O_LARGEFILE, 0100644 } },
    /* #8 = 0x8 */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 2529 } },
    /* #9 = 0x9 */ { .opcode = SENDFILE_OP, .args.sendfile = { 131072, 4, 3, NULL, 131072 } },
    /* #10 = 0xa */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 3394 } },
    /* #11 = 0xb */ { .opcode = CLOSE_OP, .args.close = { 0, 4 } },
    /* #12 = 0xc */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 24436 } },
    /* #13 = 0xd */ { .opcode = READ_OP, .args.read = { 512, 3, 512, 1 } },
    /* #14 = 0xe */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 11176 } },
    /* #15 = 0xf */ { .opcode = UNLINK_OP, .args.unlink = { -1, "256.bin" } },
    /* #16 = 0x10 */ { .opcode = OPEN_OP, .args.open = { 4, "256.bin", O_WRONLY|O_CREAT|O_EXCL|O_LARGEFILE, 0100644 } },
    /* #17 = 0x11 */ { .opcode = SENDFILE_OP, .args.sendfile = { 262144, 4, 3, NULL, 262144 } },
    /* #18 = 0x12 */ { .opcode = CLOSE_OP, .args.close = { 0, 4 } },
    /* #19 = 0x13 */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 14365 } },
    /* #20 = 0x14 */ { .opcode = READ_OP, .args.read = { 512, 3, 512, 10 } },
    /* #21 = 0x15 */ { .opcode = READ_OP, .args.read = { 0, 3, 512, 1 } },
    /* #22 = 0x16 */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 2682 } },
    /* #23 = 0x17 */ { .opcode = CLOSE_OP, .args.close = { 0, 3 } },
    { .opcode = INVALID_OP } 
};
