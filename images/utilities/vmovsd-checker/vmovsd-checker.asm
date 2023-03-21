        .global _start
        .text

_start:
        mov $entry_message, %rdi
        call _print64b
        call _try_vmovsd
        mov $exit_message, %rdi
        call _print64b
        call _exit

_try_vmovsd:
        vmovsd 0x18(%rsp),%xmm17
        ret

_print64b:
        push %rdi
        mov %rdi, %rsi
        mov $1, %rax
        mov $1, %rdi
        mov $64, %rdx
        syscall
        pop %rdi
        ret

_exit:
        mov $60, %rax
        xor %rdi, %rdi
        syscall

entry_message:
        .ascii "Checking if instruction vmovsd is supported on this platform...\n"

exit_message:
        .ascii "The instruction vmovsd is supported on your platform.\n"