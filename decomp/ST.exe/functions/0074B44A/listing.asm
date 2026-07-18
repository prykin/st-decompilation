FUN_0074b44a:
0074B44A  56                        PUSH ESI
0074B44B  8B F1                     MOV ESI,ECX
0074B44D  FF 74 24 08               PUSH dword ptr [ESP + 0x8]
0074B451  E8 55 EE FF FF            CALL 0x0074a2ab
0074B456  85 C0                     TEST EAX,EAX
0074B458  75 08                     JNZ 0x0074b462
0074B45A  FF 86 08 01 00 00         INC dword ptr [ESI + 0x108]
0074B460  EB 03                     JMP 0x0074b465
LAB_0074b462:
0074B462  6A 01                     PUSH 0x1
0074B464  58                        POP EAX
LAB_0074b465:
0074B465  5E                        POP ESI
0074B466  C2 04 00                  RET 0x4
