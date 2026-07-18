FUN_006bbb00:
006BBB00  55                        PUSH EBP
006BBB01  8B EC                     MOV EBP,ESP
006BBB03  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006BBB06  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006BBB09  8B 81 98 04 00 00         MOV EAX,dword ptr [ECX + 0x498]
006BBB0F  89 91 98 04 00 00         MOV dword ptr [ECX + 0x498],EDX
006BBB15  5D                        POP EBP
006BBB16  C2 08 00                  RET 0x8
