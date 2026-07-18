FUN_006201f0:
006201F0  55                        PUSH EBP
006201F1  8B EC                     MOV EBP,ESP
006201F3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006201F6  53                        PUSH EBX
006201F7  56                        PUSH ESI
006201F8  57                        PUSH EDI
006201F9  C7 02 FF FF FF FF         MOV dword ptr [EDX],0xffffffff
006201FF  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00620202  33 C0                     XOR EAX,EAX
00620204  33 DB                     XOR EBX,EBX
00620206  C7 02 FF FF FF FF         MOV dword ptr [EDX],0xffffffff
0062020C  8B B1 C5 00 00 00         MOV ESI,dword ptr [ECX + 0xc5]
00620212  83 CF FF                  OR EDI,0xffffffff
00620215  85 F6                     TEST ESI,ESI
00620217  74 60                     JZ 0x00620279
00620219  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0062021C  85 C9                     TEST ECX,ECX
0062021E  7C 59                     JL 0x00620279
00620220  33 D2                     XOR EDX,EDX
00620222  85 C9                     TEST ECX,ECX
00620224  7E 53                     JLE 0x00620279
00620226  3B D1                     CMP EDX,ECX
LAB_00620228:
00620228  73 0B                     JNC 0x00620235
0062022A  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0062022D  0F AF CA                  IMUL ECX,EDX
00620230  03 4E 1C                  ADD ECX,dword ptr [ESI + 0x1c]
00620233  EB 02                     JMP 0x00620237
LAB_00620235:
00620235  33 C9                     XOR ECX,ECX
LAB_00620237:
00620237  8B 09                     MOV ECX,dword ptr [ECX]
00620239  85 C9                     TEST ECX,ECX
0062023B  76 0D                     JBE 0x0062024a
0062023D  3B CB                     CMP ECX,EBX
0062023F  76 09                     JBE 0x0062024a
00620241  8B FA                     MOV EDI,EDX
00620243  8B D9                     MOV EBX,ECX
00620245  B8 01 00 00 00            MOV EAX,0x1
LAB_0062024a:
0062024A  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0062024D  42                        INC EDX
0062024E  3B D1                     CMP EDX,ECX
00620250  7C D6                     JL 0x00620228
00620252  85 FF                     TEST EDI,EDI
00620254  7C 23                     JL 0x00620279
00620256  3B F9                     CMP EDI,ECX
00620258  73 0D                     JNC 0x00620267
0062025A  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0062025D  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00620260  0F AF CF                  IMUL ECX,EDI
00620263  03 CA                     ADD ECX,EDX
00620265  EB 02                     JMP 0x00620269
LAB_00620267:
00620267  33 C9                     XOR ECX,ECX
LAB_00620269:
00620269  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0062026C  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
0062026F  89 16                     MOV dword ptr [ESI],EDX
00620271  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00620274  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
00620277  89 0A                     MOV dword ptr [EDX],ECX
LAB_00620279:
00620279  5F                        POP EDI
0062027A  5E                        POP ESI
0062027B  5B                        POP EBX
0062027C  5D                        POP EBP
0062027D  C2 08 00                  RET 0x8
