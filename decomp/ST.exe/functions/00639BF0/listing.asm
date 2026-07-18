FUN_00639bf0:
00639BF0  55                        PUSH EBP
00639BF1  8B EC                     MOV EBP,ESP
00639BF3  56                        PUSH ESI
00639BF4  57                        PUSH EDI
00639BF5  85 C9                     TEST ECX,ECX
00639BF7  C7 81 3D 02 00 00 02 00 00 00  MOV dword ptr [ECX + 0x23d],0x2
00639C01  74 18                     JZ 0x00639c1b
00639C03  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00639C06  8D B1 31 02 00 00         LEA ESI,[ECX + 0x231]
00639C0C  B9 1E 00 00 00            MOV ECX,0x1e
00639C11  F3 A5                     MOVSD.REP ES:EDI,ESI
00639C13  66 A5                     MOVSW ES:EDI,ESI
00639C15  5F                        POP EDI
00639C16  5E                        POP ESI
00639C17  5D                        POP EBP
00639C18  C2 04 00                  RET 0x4
LAB_00639c1b:
00639C1B  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00639C1E  33 F6                     XOR ESI,ESI
00639C20  B9 1E 00 00 00            MOV ECX,0x1e
00639C25  F3 A5                     MOVSD.REP ES:EDI,ESI
00639C27  66 A5                     MOVSW ES:EDI,ESI
00639C29  5F                        POP EDI
00639C2A  5E                        POP ESI
00639C2B  5D                        POP EBP
00639C2C  C2 04 00                  RET 0x4
