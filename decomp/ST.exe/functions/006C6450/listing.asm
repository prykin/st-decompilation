FUN_006c6450:
006C6450  55                        PUSH EBP
006C6451  8B EC                     MOV EBP,ESP
006C6453  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006C6456  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006C6459  8B 81 A4 04 00 00         MOV EAX,dword ptr [ECX + 0x4a4]
006C645F  89 91 A4 04 00 00         MOV dword ptr [ECX + 0x4a4],EDX
006C6465  5D                        POP EBP
006C6466  C2 08 00                  RET 0x8
