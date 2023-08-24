global _start

section .text
_start:
  mov rdi, fmt     ; address of the format string
  mov rsi, msg     ; address of the string to print
  mov rax, 0x02000004 ; system call number for write
  syscall           ; call the write system call

  mov rax, 0x02000001 ; system call number for exit
  mov rdi, 0         ; exit code 0
  syscall           ; call the exit system call

section .data
fmt: db "%s\n", 10   ; format string for printf
msg: db "Hello, Holberton", 10 ; string to print
