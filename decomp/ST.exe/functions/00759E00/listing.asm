FUN_00759e00:
00759E00  55                        PUSH EBP
00759E01  8B EC                     MOV EBP,ESP
00759E03  56                        PUSH ESI
00759E04  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00759E07  8B 06                     MOV EAX,dword ptr [ESI]
00759E09  85 C0                     TEST EAX,EAX
00759E0B  74 04                     JZ 0x00759e11
00759E0D  56                        PUSH ESI
00759E0E  FF 50 28                  CALL dword ptr [EAX + 0x28]
LAB_00759e11:
00759E11  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
00759E17  C7 46 0C 00 00 00 00      MOV dword ptr [ESI + 0xc],0x0
00759E1E  5E                        POP ESI
00759E1F  5D                        POP EBP
00759E20  C2 04 00                  RET 0x4
