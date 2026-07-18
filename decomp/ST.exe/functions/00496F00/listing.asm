FUN_00496f00:
00496F00  55                        PUSH EBP
00496F01  8B EC                     MOV EBP,ESP
00496F03  53                        PUSH EBX
00496F04  56                        PUSH ESI
00496F05  57                        PUSH EDI
00496F06  8B 3D 70 B2 7F 00         MOV EDI,dword ptr [0x007fb270]
00496F0C  33 C0                     XOR EAX,EAX
00496F0E  33 D2                     XOR EDX,EDX
00496F10  8B 77 0C                  MOV ESI,dword ptr [EDI + 0xc]
00496F13  85 F6                     TEST ESI,ESI
00496F15  7E 2A                     JLE 0x00496f41
00496F17  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00496F1A  3B D6                     CMP EDX,ESI
LAB_00496f1c:
00496F1C  73 0B                     JNC 0x00496f29
00496F1E  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
00496F21  0F AF CA                  IMUL ECX,EDX
00496F24  03 4F 1C                  ADD ECX,dword ptr [EDI + 0x1c]
00496F27  EB 02                     JMP 0x00496f2b
LAB_00496f29:
00496F29  33 C9                     XOR ECX,ECX
LAB_00496f2b:
00496F2B  39 59 08                  CMP dword ptr [ECX + 0x8],EBX
00496F2E  74 0C                     JZ 0x00496f3c
00496F30  42                        INC EDX
00496F31  3B D6                     CMP EDX,ESI
00496F33  7C E7                     JL 0x00496f1c
00496F35  5F                        POP EDI
00496F36  5E                        POP ESI
00496F37  5B                        POP EBX
00496F38  5D                        POP EBP
00496F39  C2 04 00                  RET 0x4
LAB_00496f3c:
00496F3C  B8 01 00 00 00            MOV EAX,0x1
LAB_00496f41:
00496F41  5F                        POP EDI
00496F42  5E                        POP ESI
00496F43  5B                        POP EBX
00496F44  5D                        POP EBP
00496F45  C2 04 00                  RET 0x4
