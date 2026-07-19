FUN_0071cf60:
0071CF60  F7 41 1C 00 00 00 F0      TEST dword ptr [ECX + 0x1c],0xf0000000
0071CF67  75 05                     JNZ 0x0071cf6e
0071CF69  8B 01                     MOV EAX,dword ptr [ECX]
0071CF6B  FF 60 08                  JMP dword ptr [EAX + 0x8]
LAB_0071cf6e:
0071CF6E  33 C0                     XOR EAX,EAX
0071CF70  C3                        RET
