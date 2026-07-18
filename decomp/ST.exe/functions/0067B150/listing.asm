FUN_0067b150:
0067B150  55                        PUSH EBP
0067B151  8B EC                     MOV EBP,ESP
0067B153  56                        PUSH ESI
0067B154  8B B1 A1 06 00 00         MOV ESI,dword ptr [ECX + 0x6a1]
0067B15A  57                        PUSH EDI
0067B15B  33 C0                     XOR EAX,EAX
0067B15D  8B 7E 0C                  MOV EDI,dword ptr [ESI + 0xc]
0067B160  33 D2                     XOR EDX,EDX
0067B162  85 FF                     TEST EDI,EDI
0067B164  7E 23                     JLE 0x0067b189
0067B166  53                        PUSH EBX
0067B167  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0067B16A  3B D7                     CMP EDX,EDI
LAB_0067b16c:
0067B16C  73 15                     JNC 0x0067b183
0067B16E  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0067B171  0F AF CA                  IMUL ECX,EDX
0067B174  03 4E 1C                  ADD ECX,dword ptr [ESI + 0x1c]
0067B177  85 C9                     TEST ECX,ECX
0067B179  74 08                     JZ 0x0067b183
0067B17B  0F BE 09                  MOVSX ECX,byte ptr [ECX]
0067B17E  3B CB                     CMP ECX,EBX
0067B180  75 01                     JNZ 0x0067b183
0067B182  40                        INC EAX
LAB_0067b183:
0067B183  42                        INC EDX
0067B184  3B D7                     CMP EDX,EDI
0067B186  7C E4                     JL 0x0067b16c
0067B188  5B                        POP EBX
LAB_0067b189:
0067B189  5F                        POP EDI
0067B18A  5E                        POP ESI
0067B18B  5D                        POP EBP
0067B18C  C2 04 00                  RET 0x4
