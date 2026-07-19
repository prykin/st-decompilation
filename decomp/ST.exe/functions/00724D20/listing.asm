FUN_00724d20:
00724D20  F7 41 1C 00 00 00 F0      TEST dword ptr [ECX + 0x1c],0xf0000000
00724D27  75 05                     JNZ 0x00724d2e
00724D29  8B 01                     MOV EAX,dword ptr [ECX]
00724D2B  FF 60 08                  JMP dword ptr [EAX + 0x8]
LAB_00724d2e:
00724D2E  33 C0                     XOR EAX,EAX
00724D30  C3                        RET
