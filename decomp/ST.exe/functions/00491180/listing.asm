FUN_00491180:
00491180  83 B9 5D 04 00 00 14      CMP dword ptr [ECX + 0x45d],0x14
00491187  75 0F                     JNZ 0x00491198
00491189  83 B9 C0 05 00 00 03      CMP dword ptr [ECX + 0x5c0],0x3
00491190  75 06                     JNZ 0x00491198
00491192  B8 01 00 00 00            MOV EAX,0x1
00491197  C3                        RET
LAB_00491198:
00491198  33 C0                     XOR EAX,EAX
0049119A  C3                        RET
