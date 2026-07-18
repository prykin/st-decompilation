FUN_00621120:
00621120  55                        PUSH EBP
00621121  8B EC                     MOV EBP,ESP
00621123  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00621126  53                        PUSH EBX
00621127  56                        PUSH ESI
00621128  57                        PUSH EDI
00621129  C7 02 FF FF FF FF         MOV dword ptr [EDX],0xffffffff
0062112F  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00621132  33 C0                     XOR EAX,EAX
00621134  33 DB                     XOR EBX,EBX
00621136  C7 02 FF FF FF FF         MOV dword ptr [EDX],0xffffffff
0062113C  8B B1 F5 00 00 00         MOV ESI,dword ptr [ECX + 0xf5]
00621142  83 CF FF                  OR EDI,0xffffffff
00621145  85 F6                     TEST ESI,ESI
00621147  74 60                     JZ 0x006211a9
00621149  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0062114C  85 C9                     TEST ECX,ECX
0062114E  7C 59                     JL 0x006211a9
00621150  33 D2                     XOR EDX,EDX
00621152  85 C9                     TEST ECX,ECX
00621154  7E 53                     JLE 0x006211a9
00621156  3B D1                     CMP EDX,ECX
LAB_00621158:
00621158  73 0B                     JNC 0x00621165
0062115A  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0062115D  0F AF CA                  IMUL ECX,EDX
00621160  03 4E 1C                  ADD ECX,dword ptr [ESI + 0x1c]
00621163  EB 02                     JMP 0x00621167
LAB_00621165:
00621165  33 C9                     XOR ECX,ECX
LAB_00621167:
00621167  8B 09                     MOV ECX,dword ptr [ECX]
00621169  85 C9                     TEST ECX,ECX
0062116B  76 0D                     JBE 0x0062117a
0062116D  3B CB                     CMP ECX,EBX
0062116F  76 09                     JBE 0x0062117a
00621171  8B FA                     MOV EDI,EDX
00621173  8B D9                     MOV EBX,ECX
00621175  B8 01 00 00 00            MOV EAX,0x1
LAB_0062117a:
0062117A  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0062117D  42                        INC EDX
0062117E  3B D1                     CMP EDX,ECX
00621180  7C D6                     JL 0x00621158
00621182  85 FF                     TEST EDI,EDI
00621184  7C 23                     JL 0x006211a9
00621186  3B F9                     CMP EDI,ECX
00621188  73 0D                     JNC 0x00621197
0062118A  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0062118D  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00621190  0F AF CF                  IMUL ECX,EDI
00621193  03 CA                     ADD ECX,EDX
00621195  EB 02                     JMP 0x00621199
LAB_00621197:
00621197  33 C9                     XOR ECX,ECX
LAB_00621199:
00621199  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0062119C  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
0062119F  89 16                     MOV dword ptr [ESI],EDX
006211A1  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006211A4  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
006211A7  89 0A                     MOV dword ptr [EDX],ECX
LAB_006211a9:
006211A9  5F                        POP EDI
006211AA  5E                        POP ESI
006211AB  5B                        POP EBX
006211AC  5D                        POP EBP
006211AD  C2 08 00                  RET 0x8
