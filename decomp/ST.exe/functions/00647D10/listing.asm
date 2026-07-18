FUN_00647d10:
00647D10  55                        PUSH EBP
00647D11  8B EC                     MOV EBP,ESP
00647D13  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00647D16  85 C0                     TEST EAX,EAX
00647D18  7C 10                     JL 0x00647d2a
00647D1A  83 F8 21                  CMP EAX,0x21
00647D1D  7D 0B                     JGE 0x00647d2a
00647D1F  8B 84 81 2F 05 00 00      MOV EAX,dword ptr [ECX + EAX*0x4 + 0x52f]
00647D26  5D                        POP EBP
00647D27  C2 04 00                  RET 0x4
LAB_00647d2a:
00647D2A  B8 01 00 00 00            MOV EAX,0x1
00647D2F  5D                        POP EBP
00647D30  C2 04 00                  RET 0x4
