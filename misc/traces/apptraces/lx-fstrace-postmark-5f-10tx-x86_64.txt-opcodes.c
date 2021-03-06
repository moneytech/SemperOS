// This file has been automatically generated by strace2c.
// Do not edit it!

#include "common/op_types.h"

trace_op_t trace_ops[] = {
    /* #1 = 0x1 */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 58233 } },
    /* #2 = 0x2 */ { .opcode = OPEN_OP, .args.open = { 3, "/postmark.conf", O_RDONLY, 0 } },
    /* #3 = 0x3 */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 19249 } },
    /* #4 = 0x4 */ { .opcode = READ_OP, .args.read = { 33, 3, 4096, 1 } },
    /* #5 = 0x5 */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 10852 } },
    /* #6 = 0x6 */ { .opcode = READ_OP, .args.read = { 0, 3, 4096, 1 } },
    /* #7 = 0x7 */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 2274 } },
    /* #8 = 0x8 */ { .opcode = CLOSE_OP, .args.close = { 0, 3 } },
    /* #9 = 0x9 */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 163663 } },
    /* #10 = 0xa */ { .opcode = OPEN_OP, .args.open = { 3, "/tmp/1", O_WRONLY|O_CREAT|O_TRUNC, 0666 } },
    /* #11 = 0xb */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 13590 } },
    /* #12 = 0xc */ { .opcode = WRITE_OP, .args.write = { 489, 3, 489, 1 } },
    /* #13 = 0xd */ { .opcode = CLOSE_OP, .args.close = { 0, 3 } },
    /* #14 = 0xe */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 9594 } },
    /* #15 = 0xf */ { .opcode = OPEN_OP, .args.open = { 3, "/tmp/2", O_WRONLY|O_CREAT|O_TRUNC, 0666 } },
    /* #16 = 0x10 */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 7627 } },
    /* #17 = 0x11 */ { .opcode = WRITE_OP, .args.write = { 339, 3, 339, 1 } },
    /* #18 = 0x12 */ { .opcode = CLOSE_OP, .args.close = { 0, 3 } },
    /* #19 = 0x13 */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 9347 } },
    /* #20 = 0x14 */ { .opcode = OPEN_OP, .args.open = { 3, "/tmp/3", O_WRONLY|O_CREAT|O_TRUNC, 0666 } },
    /* #21 = 0x15 */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 13479 } },
    /* #22 = 0x16 */ { .opcode = WRITE_OP, .args.write = { 830, 3, 830, 1 } },
    /* #23 = 0x17 */ { .opcode = CLOSE_OP, .args.close = { 0, 3 } },
    /* #24 = 0x18 */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 9367 } },
    /* #25 = 0x19 */ { .opcode = OPEN_OP, .args.open = { 3, "/tmp/4", O_WRONLY|O_CREAT|O_TRUNC, 0666 } },
    /* #26 = 0x1a */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 13606 } },
    /* #27 = 0x1b */ { .opcode = WRITE_OP, .args.write = { 850, 3, 850, 1 } },
    /* #28 = 0x1c */ { .opcode = CLOSE_OP, .args.close = { 0, 3 } },
    /* #29 = 0x1d */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 8781 } },
    /* #30 = 0x1e */ { .opcode = OPEN_OP, .args.open = { 3, "/tmp/5", O_WRONLY|O_CREAT|O_TRUNC, 0666 } },
    /* #31 = 0x1f */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 10521 } },
    /* #32 = 0x20 */ { .opcode = WRITE_OP, .args.write = { 600, 3, 600, 1 } },
    /* #33 = 0x21 */ { .opcode = CLOSE_OP, .args.close = { 0, 3 } },
    /* #34 = 0x22 */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 6258 } },
    /* #35 = 0x23 */ { .opcode = OPEN_OP, .args.open = { 3, "/tmp/3", O_WRONLY|O_CREAT|O_APPEND, 0666 } },
    /* #36 = 0x24 */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 5834 } },
    /* #37 = 0x25 */ { .opcode = WRITE_OP, .args.write = { 194, 3, 194, 1 } },
    /* #38 = 0x26 */ { .opcode = CLOSE_OP, .args.close = { 0, 3 } },
    /* #39 = 0x27 */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 6622 } },
    /* #40 = 0x28 */ { .opcode = RMDIR_OP, .args.rmdir = { -1, "/tmp/5" } },
    /* #41 = 0x29 */ { .opcode = UNLINK_OP, .args.unlink = { 0, "/tmp/5" } },
    /* #42 = 0x2a */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 1670 } },
    /* #43 = 0x2b */ { .opcode = OPEN_OP, .args.open = { 3, "/tmp/4", O_WRONLY|O_CREAT|O_APPEND, 0666 } },
    /* #44 = 0x2c */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 4319 } },
    /* #45 = 0x2d */ { .opcode = WRITE_OP, .args.write = { 55, 3, 55, 1 } },
    /* #46 = 0x2e */ { .opcode = CLOSE_OP, .args.close = { 0, 3 } },
    /* #47 = 0x2f */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 3571 } },
    /* #48 = 0x30 */ { .opcode = RMDIR_OP, .args.rmdir = { -1, "/tmp/3" } },
    /* #49 = 0x31 */ { .opcode = UNLINK_OP, .args.unlink = { 0, "/tmp/3" } },
    /* #50 = 0x32 */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 2452 } },
    /* #51 = 0x33 */ { .opcode = OPEN_OP, .args.open = { 3, "/tmp/4", O_WRONLY|O_CREAT|O_APPEND, 0666 } },
    /* #52 = 0x34 */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 4274 } },
    /* #53 = 0x35 */ { .opcode = WRITE_OP, .args.write = { 60, 3, 60, 1 } },
    /* #54 = 0x36 */ { .opcode = CLOSE_OP, .args.close = { 0, 3 } },
    /* #55 = 0x37 */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 3536 } },
    /* #56 = 0x38 */ { .opcode = RMDIR_OP, .args.rmdir = { -1, "/tmp/4" } },
    /* #57 = 0x39 */ { .opcode = UNLINK_OP, .args.unlink = { 0, "/tmp/4" } },
    /* #58 = 0x3a */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 1890 } },
    /* #59 = 0x3b */ { .opcode = OPEN_OP, .args.open = { 3, "/tmp/2", O_WRONLY|O_CREAT|O_APPEND, 0666 } },
    /* #60 = 0x3c */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 6605 } },
    /* #61 = 0x3d */ { .opcode = WRITE_OP, .args.write = { 253, 3, 253, 1 } },
    /* #62 = 0x3e */ { .opcode = CLOSE_OP, .args.close = { 0, 3 } },
    /* #63 = 0x3f */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 9458 } },
    /* #64 = 0x40 */ { .opcode = OPEN_OP, .args.open = { 3, "/tmp/6", O_WRONLY|O_CREAT|O_TRUNC, 0666 } },
    /* #65 = 0x41 */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 12397 } },
    /* #66 = 0x42 */ { .opcode = WRITE_OP, .args.write = { 733, 3, 733, 1 } },
    /* #67 = 0x43 */ { .opcode = CLOSE_OP, .args.close = { 0, 3 } },
    /* #68 = 0x44 */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 4959 } },
    /* #69 = 0x45 */ { .opcode = OPEN_OP, .args.open = { 3, "/tmp/2", O_RDONLY, 0 } },
    /* #70 = 0x46 */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 4673 } },
    /* #71 = 0x47 */ { .opcode = READ_OP, .args.read = { 32, 3, 32, 18 } },
    /* #72 = 0x48 */ { .opcode = READ_OP, .args.read = { 16, 3, 16, 1 } },
    /* #73 = 0x49 */ { .opcode = CLOSE_OP, .args.close = { 0, 3 } },
    /* #74 = 0x4a */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 3445 } },
    /* #75 = 0x4b */ { .opcode = RMDIR_OP, .args.rmdir = { -1, "/tmp/1" } },
    /* #76 = 0x4c */ { .opcode = UNLINK_OP, .args.unlink = { 0, "/tmp/1" } },
    /* #77 = 0x4d */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 1900 } },
    /* #78 = 0x4e */ { .opcode = OPEN_OP, .args.open = { 3, "/tmp/6", O_RDONLY, 0 } },
    /* #79 = 0x4f */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 2794 } },
    /* #80 = 0x50 */ { .opcode = READ_OP, .args.read = { 32, 3, 32, 22 } },
    /* #81 = 0x51 */ { .opcode = READ_OP, .args.read = { 29, 3, 29, 1 } },
    /* #82 = 0x52 */ { .opcode = CLOSE_OP, .args.close = { 0, 3 } },
    /* #83 = 0x53 */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 9841 } },
    /* #84 = 0x54 */ { .opcode = OPEN_OP, .args.open = { 3, "/tmp/7", O_WRONLY|O_CREAT|O_TRUNC, 0666 } },
    /* #85 = 0x55 */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 6809 } },
    /* #86 = 0x56 */ { .opcode = WRITE_OP, .args.write = { 276, 3, 276, 1 } },
    /* #87 = 0x57 */ { .opcode = CLOSE_OP, .args.close = { 0, 3 } },
    /* #88 = 0x58 */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 4070 } },
    /* #89 = 0x59 */ { .opcode = OPEN_OP, .args.open = { 3, "/tmp/7", O_RDONLY, 0 } },
    /* #90 = 0x5a */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 2532 } },
    /* #91 = 0x5b */ { .opcode = READ_OP, .args.read = { 32, 3, 32, 8 } },
    /* #92 = 0x5c */ { .opcode = READ_OP, .args.read = { 20, 3, 20, 1 } },
    /* #93 = 0x5d */ { .opcode = CLOSE_OP, .args.close = { 0, 3 } },
    /* #94 = 0x5e */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 9074 } },
    /* #95 = 0x5f */ { .opcode = OPEN_OP, .args.open = { 3, "/tmp/8", O_WRONLY|O_CREAT|O_TRUNC, 0666 } },
    /* #96 = 0x60 */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 7162 } },
    /* #97 = 0x61 */ { .opcode = WRITE_OP, .args.write = { 298, 3, 298, 1 } },
    /* #98 = 0x62 */ { .opcode = CLOSE_OP, .args.close = { 0, 3 } },
    /* #99 = 0x63 */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 4458 } },
    /* #100 = 0x64 */ { .opcode = OPEN_OP, .args.open = { 3, "/tmp/8", O_RDONLY, 0 } },
    /* #101 = 0x65 */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 2538 } },
    /* #102 = 0x66 */ { .opcode = READ_OP, .args.read = { 32, 3, 32, 9 } },
    /* #103 = 0x67 */ { .opcode = READ_OP, .args.read = { 10, 3, 10, 1 } },
    /* #104 = 0x68 */ { .opcode = CLOSE_OP, .args.close = { 0, 3 } },
    /* #105 = 0x69 */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 3492 } },
    /* #106 = 0x6a */ { .opcode = RMDIR_OP, .args.rmdir = { -1, "/tmp/8" } },
    /* #107 = 0x6b */ { .opcode = UNLINK_OP, .args.unlink = { 0, "/tmp/8" } },
    /* #108 = 0x6c */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 1638 } },
    /* #109 = 0x6d */ { .opcode = OPEN_OP, .args.open = { 3, "/tmp/6", O_RDONLY, 0 } },
    /* #110 = 0x6e */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 2524 } },
    /* #111 = 0x6f */ { .opcode = READ_OP, .args.read = { 32, 3, 32, 22 } },
    /* #112 = 0x70 */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 1631 } },
    /* #113 = 0x71 */ { .opcode = READ_OP, .args.read = { 29, 3, 29, 1 } },
    /* #114 = 0x72 */ { .opcode = CLOSE_OP, .args.close = { 0, 3 } },
    /* #115 = 0x73 */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 3911 } },
    /* #116 = 0x74 */ { .opcode = RMDIR_OP, .args.rmdir = { -1, "/tmp/2" } },
    /* #117 = 0x75 */ { .opcode = UNLINK_OP, .args.unlink = { 0, "/tmp/2" } },
    /* #118 = 0x76 */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 1606 } },
    /* #119 = 0x77 */ { .opcode = OPEN_OP, .args.open = { 3, "/tmp/7", O_RDONLY, 0 } },
    /* #120 = 0x78 */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 2476 } },
    /* #121 = 0x79 */ { .opcode = READ_OP, .args.read = { 32, 3, 32, 8 } },
    /* #122 = 0x7a */ { .opcode = READ_OP, .args.read = { 20, 3, 20, 1 } },
    /* #123 = 0x7b */ { .opcode = CLOSE_OP, .args.close = { 0, 3 } },
    /* #124 = 0x7c */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 3325 } },
    /* #125 = 0x7d */ { .opcode = RMDIR_OP, .args.rmdir = { -1, "/tmp/6" } },
    /* #126 = 0x7e */ { .opcode = UNLINK_OP, .args.unlink = { 0, "/tmp/6" } },
    /* #127 = 0x7f */ { .opcode = WAITUNTIL_OP, .args.waituntil = { 0, 1270 } },
    /* #128 = 0x80 */ { .opcode = RMDIR_OP, .args.rmdir = { -1, "/tmp/7" } },
    /* #129 = 0x81 */ { .opcode = UNLINK_OP, .args.unlink = { 0, "/tmp/7" } },
    { .opcode = INVALID_OP } 
};
