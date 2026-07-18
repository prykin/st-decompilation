FUN_0067b2e0:
0067B2E0  55                        PUSH EBP
0067B2E1  8B EC                     MOV EBP,ESP
0067B2E3  56                        PUSH ESI
0067B2E4  8B B1 A1 06 00 00         MOV ESI,dword ptr [ECX + 0x6a1]
0067B2EA  57                        PUSH EDI
0067B2EB  33 C0                     XOR EAX,EAX
0067B2ED  8B 7E 0C                  MOV EDI,dword ptr [ESI + 0xc]
0067B2F0  33 D2                     XOR EDX,EDX
0067B2F2  85 FF                     TEST EDI,EDI
0067B2F4  7E 2D                     JLE 0x0067b323
0067B2F6  53                        PUSH EBX
0067B2F7  3B D7                     CMP EDX,EDI
LAB_0067b2f9:
0067B2F9  73 0D                     JNC 0x0067b308
0067B2FB  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0067B2FE  8B 5E 1C                  MOV EBX,dword ptr [ESI + 0x1c]
0067B301  0F AF CA                  IMUL ECX,EDX
0067B304  03 CB                     ADD ECX,EBX
0067B306  EB 02                     JMP 0x0067b30a
LAB_0067b308:
0067B308  33 C9                     XOR ECX,ECX
LAB_0067b30a:
0067B30A  0F BF 59 01               MOVSX EBX,word ptr [ECX + 0x1]
0067B30E  3B 5D 08                  CMP EBX,dword ptr [EBP + 0x8]
0067B311  75 0A                     JNZ 0x0067b31d
0067B313  0F BF 49 03               MOVSX ECX,word ptr [ECX + 0x3]
0067B317  3B 4D 0C                  CMP ECX,dword ptr [EBP + 0xc]
0067B31A  75 01                     JNZ 0x0067b31d
0067B31C  40                        INC EAX
LAB_0067b31d:
0067B31D  42                        INC EDX
0067B31E  3B D7                     CMP EDX,EDI
0067B320  7C D7                     JL 0x0067b2f9
0067B322  5B                        POP EBX
LAB_0067b323:
0067B323  5F                        POP EDI
0067B324  5E                        POP ESI
0067B325  5D                        POP EBP
0067B326  C2 08 00                  RET 0x8
