FUN_0074babb:
0074BABB  56                        PUSH ESI
0074BABC  8B F1                     MOV ESI,ECX
0074BABE  83 7E 40 00               CMP dword ptr [ESI + 0x40],0x0
0074BAC2  74 09                     JZ 0x0074bacd
0074BAC4  FF 76 44                  PUSH dword ptr [ESI + 0x44]
0074BAC7  FF 15 DC C0 85 00         CALL dword ptr [0x0085c0dc]
LAB_0074bacd:
0074BACD  83 66 40 00               AND dword ptr [ESI + 0x40],0x0
0074BAD1  83 66 44 00               AND dword ptr [ESI + 0x44],0x0
0074BAD5  5E                        POP ESI
0074BAD6  C3                        RET
