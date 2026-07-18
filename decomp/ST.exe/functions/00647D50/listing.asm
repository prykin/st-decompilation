FUN_00647d50:
00647D50  55                        PUSH EBP
00647D51  8B EC                     MOV EBP,ESP
00647D53  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00647D56  85 C0                     TEST EAX,EAX
00647D58  7C 1A                     JL 0x00647d74
00647D5A  83 F8 04                  CMP EAX,0x4
00647D5D  7D 15                     JGE 0x00647d74
00647D5F  8B 89 B3 05 00 00         MOV ECX,dword ptr [ECX + 0x5b3]
00647D65  3B 41 08                  CMP EAX,dword ptr [ECX + 0x8]
00647D68  7D 0A                     JGE 0x00647d74
00647D6A  8B 49 14                  MOV ECX,dword ptr [ECX + 0x14]
00647D6D  8B 04 81                  MOV EAX,dword ptr [ECX + EAX*0x4]
00647D70  5D                        POP EBP
00647D71  C2 04 00                  RET 0x4
LAB_00647d74:
00647D74  33 C0                     XOR EAX,EAX
00647D76  5D                        POP EBP
00647D77  C2 04 00                  RET 0x4
