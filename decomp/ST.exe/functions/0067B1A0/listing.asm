FUN_0067b1a0:
0067B1A0  55                        PUSH EBP
0067B1A1  8B EC                     MOV EBP,ESP
0067B1A3  56                        PUSH ESI
0067B1A4  8B B1 A1 06 00 00         MOV ESI,dword ptr [ECX + 0x6a1]
0067B1AA  57                        PUSH EDI
0067B1AB  33 C0                     XOR EAX,EAX
0067B1AD  8B 7E 0C                  MOV EDI,dword ptr [ESI + 0xc]
0067B1B0  33 D2                     XOR EDX,EDX
0067B1B2  85 FF                     TEST EDI,EDI
0067B1B4  7E 2A                     JLE 0x0067b1e0
0067B1B6  53                        PUSH EBX
0067B1B7  3B D7                     CMP EDX,EDI
LAB_0067b1b9:
0067B1B9  73 1F                     JNC 0x0067b1da
0067B1BB  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0067B1BE  8B 5E 1C                  MOV EBX,dword ptr [ESI + 0x1c]
0067B1C1  0F AF CA                  IMUL ECX,EDX
0067B1C4  03 CB                     ADD ECX,EBX
0067B1C6  85 C9                     TEST ECX,ECX
0067B1C8  74 10                     JZ 0x0067b1da
0067B1CA  0F BE 19                  MOVSX EBX,byte ptr [ECX]
0067B1CD  3B 5D 08                  CMP EBX,dword ptr [EBP + 0x8]
0067B1D0  75 08                     JNZ 0x0067b1da
0067B1D2  8A 59 07                  MOV BL,byte ptr [ECX + 0x7]
0067B1D5  84 DB                     TEST BL,BL
0067B1D7  75 01                     JNZ 0x0067b1da
0067B1D9  40                        INC EAX
LAB_0067b1da:
0067B1DA  42                        INC EDX
0067B1DB  3B D7                     CMP EDX,EDI
0067B1DD  7C DA                     JL 0x0067b1b9
0067B1DF  5B                        POP EBX
LAB_0067b1e0:
0067B1E0  5F                        POP EDI
0067B1E1  5E                        POP ESI
0067B1E2  5D                        POP EBP
0067B1E3  C2 04 00                  RET 0x4
