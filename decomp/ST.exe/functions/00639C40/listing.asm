FUN_00639c40:
00639C40  55                        PUSH EBP
00639C41  8B EC                     MOV EBP,ESP
00639C43  56                        PUSH ESI
00639C44  57                        PUSH EDI
00639C45  85 C9                     TEST ECX,ECX
00639C47  74 18                     JZ 0x00639c61
00639C49  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00639C4C  8D B9 31 02 00 00         LEA EDI,[ECX + 0x231]
00639C52  B9 1E 00 00 00            MOV ECX,0x1e
00639C57  F3 A5                     MOVSD.REP ES:EDI,ESI
00639C59  66 A5                     MOVSW ES:EDI,ESI
00639C5B  5F                        POP EDI
00639C5C  5E                        POP ESI
00639C5D  5D                        POP EBP
00639C5E  C2 04 00                  RET 0x4
LAB_00639c61:
00639C61  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00639C64  33 FF                     XOR EDI,EDI
00639C66  B9 1E 00 00 00            MOV ECX,0x1e
00639C6B  F3 A5                     MOVSD.REP ES:EDI,ESI
00639C6D  66 A5                     MOVSW ES:EDI,ESI
00639C6F  5F                        POP EDI
00639C70  5E                        POP ESI
00639C71  5D                        POP EBP
00639C72  C2 04 00                  RET 0x4
