FUN_00647ce0:
00647CE0  55                        PUSH EBP
00647CE1  8B EC                     MOV EBP,ESP
00647CE3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00647CE6  85 C0                     TEST EAX,EAX
00647CE8  7C 11                     JL 0x00647cfb
00647CEA  3D 00 01 00 00            CMP EAX,0x100
00647CEF  7D 0A                     JGE 0x00647cfb
00647CF1  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00647CF4  89 94 81 DE 00 00 00      MOV dword ptr [ECX + EAX*0x4 + 0xde],EDX
LAB_00647cfb:
00647CFB  5D                        POP EBP
00647CFC  C2 08 00                  RET 0x8
