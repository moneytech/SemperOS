#
# Copyright (C) 2013, Nils Asmussen <nils@os.inf.tu-dresden.de>
# Economic rights: Technische Universitaet Dresden (Germany)
#
# This file is part of M3 (Microkernel for Minimalist Manycores).
#
# SemperOS is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License version 2 as
# published by the Free Software Foundation.
#
# SemperOS is distributed in the hope that it will be useful, but
# WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
# General Public License version 2 for more details.
#

// macro to build a default-isr-handler
.macro BUILD_DEF_ISR no
    .global isr\no
    isr\no:
    // interrupts are already disabled here since its a interrupt-gate, not a trap-gate
    push    $0                      // error-code (no error here)
    push    $\no                    // the interrupt-number
    jmp     isrCommon
.endm

// macro to build an error-isr-handler
.macro BUILD_ERR_ISR no
    .global isr\no
    isr\no:
    // interrupts are already disabled here since its a interrupt-gate, not a trap-gate
    // the error-code has already been pushed
    push    $\no                    // the interrupt-number
    jmp     isrCommon
.endm

// our ISRs
BUILD_DEF_ISR 0
BUILD_DEF_ISR 1
BUILD_DEF_ISR 2
BUILD_DEF_ISR 3
BUILD_DEF_ISR 4
BUILD_DEF_ISR 5
BUILD_DEF_ISR 6
BUILD_DEF_ISR 7
BUILD_ERR_ISR 8
BUILD_DEF_ISR 9
BUILD_ERR_ISR 10
BUILD_ERR_ISR 11
BUILD_ERR_ISR 12
BUILD_ERR_ISR 13
BUILD_ERR_ISR 14
BUILD_DEF_ISR 15
BUILD_DEF_ISR 16
BUILD_DEF_ISR 64
BUILD_DEF_ISR 65

.global isrNull
isrNull:
    push    $0                      // error-code (no error here)
    push    $32                     // the interrupt-number

isrCommon:
    push    %rax
    push    %rbx
    push    %rcx
    push    %rdx
    push    %rdi
    push    %rsi
    push    %rbp
    push    %r8
    push    %r9
    push    %r10
    push    %r11
    push    %r12
    push    %r13
    push    %r14
    push    %r15

    // call c-routine
    mov     %rsp,%rdi               // pointer to stack-frame
    call    intrpt_handler

    pop     %r15
    pop     %r14
    pop     %r13
    pop     %r12
    pop     %r11
    pop     %r10
    pop     %r9
    pop     %r8
    pop     %rbp
    pop     %rsi
    pop     %rdi
    pop     %rdx
    pop     %rcx
    pop     %rbx
    pop     %rax

    // remove error-code and interrupt-number from stack and return
    add     $16,%rsp
    iretq
