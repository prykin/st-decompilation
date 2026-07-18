FUN_006961b0:
006961B0  55                        PUSH EBP
006961B1  8B EC                     MOV EBP,ESP
006961B3  83 EC 08                  SUB ESP,0x8
006961B6  8B 81 53 58 00 00         MOV EAX,dword ptr [ECX + 0x5853]
006961BC  53                        PUSH EBX
006961BD  33 D2                     XOR EDX,EDX
006961BF  56                        PUSH ESI
006961C0  85 C0                     TEST EAX,EAX
006961C2  57                        PUSH EDI
006961C3  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006961C6  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006961C9  0F 84 E3 00 00 00         JZ 0x006962b2
006961CF  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
006961D2  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006961D5  3B DA                     CMP EBX,EDX
006961D7  73 0D                     JNC 0x006961e6
006961D9  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
006961DC  8B 70 1C                  MOV ESI,dword ptr [EAX + 0x1c]
006961DF  0F AF CB                  IMUL ECX,EBX
006961E2  03 CE                     ADD ECX,ESI
006961E4  EB 02                     JMP 0x006961e8
LAB_006961e6:
006961E6  33 C9                     XOR ECX,ECX
LAB_006961e8:
006961E8  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006961EB  3B F2                     CMP ESI,EDX
006961ED  73 0D                     JNC 0x006961fc
006961EF  8B 78 08                  MOV EDI,dword ptr [EAX + 0x8]
006961F2  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
006961F5  0F AF FE                  IMUL EDI,ESI
006961F8  03 FA                     ADD EDI,EDX
006961FA  EB 02                     JMP 0x006961fe
LAB_006961fc:
006961FC  33 FF                     XOR EDI,EDI
LAB_006961fe:
006961FE  85 C9                     TEST ECX,ECX
00696200  0F 84 A0 00 00 00         JZ 0x006962a6
00696206  85 FF                     TEST EDI,EDI
00696208  0F 84 98 00 00 00         JZ 0x006962a6
0069620E  8B 41 15                  MOV EAX,dword ptr [ECX + 0x15]
00696211  85 C0                     TEST EAX,EAX
00696213  0F 84 8D 00 00 00         JZ 0x006962a6
00696219  8B 4F 15                  MOV ECX,dword ptr [EDI + 0x15]
0069621C  33 F6                     XOR ESI,ESI
0069621E  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00696221  85 C0                     TEST EAX,EAX
00696223  7E 36                     JLE 0x0069625b
00696225  3B F0                     CMP ESI,EAX
LAB_00696227:
00696227  73 27                     JNC 0x00696250
00696229  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0069622C  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
0069622F  0F AF C6                  IMUL EAX,ESI
00696232  03 C2                     ADD EAX,EDX
00696234  85 C0                     TEST EAX,EAX
00696236  74 18                     JZ 0x00696250
00696238  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0069623B  8B 50 02                  MOV EDX,dword ptr [EAX + 0x2]
0069623E  51                        PUSH ECX
0069623F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00696242  52                        PUSH EDX
00696243  53                        PUSH EBX
00696244  E8 0D DF D6 FF            CALL 0x00404156
00696249  85 C0                     TEST EAX,EAX
0069624B  7C 03                     JL 0x00696250
0069624D  FF 45 FC                  INC dword ptr [EBP + -0x4]
LAB_00696250:
00696250  8B 4F 15                  MOV ECX,dword ptr [EDI + 0x15]
00696253  46                        INC ESI
00696254  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00696257  3B F0                     CMP ESI,EAX
00696259  7C CC                     JL 0x00696227
LAB_0069625b:
0069625B  8B 47 19                  MOV EAX,dword ptr [EDI + 0x19]
0069625E  85 C0                     TEST EAX,EAX
00696260  74 33                     JZ 0x00696295
00696262  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00696265  33 F6                     XOR ESI,ESI
00696267  85 C9                     TEST ECX,ECX
00696269  7E 2A                     JLE 0x00696295
0069626B  3B F1                     CMP ESI,ECX
LAB_0069626d:
0069626D  73 0D                     JNC 0x0069627c
0069626F  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00696272  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
00696275  0F AF CE                  IMUL ECX,ESI
00696278  03 CA                     ADD ECX,EDX
0069627A  EB 02                     JMP 0x0069627e
LAB_0069627c:
0069627C  33 C9                     XOR ECX,ECX
LAB_0069627e:
0069627E  8B 01                     MOV EAX,dword ptr [ECX]
00696280  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00696283  50                        PUSH EAX
00696284  53                        PUSH EBX
00696285  E8 04 B1 D6 FF            CALL 0x0040138e
0069628A  8B 47 19                  MOV EAX,dword ptr [EDI + 0x19]
0069628D  46                        INC ESI
0069628E  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00696291  3B F1                     CMP ESI,ECX
00696293  7C D8                     JL 0x0069626d
LAB_00696295:
00696295  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00696298  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0069629B  53                        PUSH EBX
0069629C  51                        PUSH ECX
0069629D  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006962A0  52                        PUSH EDX
006962A1  E8 2D C1 D6 FF            CALL 0x004023d3
LAB_006962a6:
006962A6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006962A9  5F                        POP EDI
006962AA  5E                        POP ESI
006962AB  5B                        POP EBX
006962AC  8B E5                     MOV ESP,EBP
006962AE  5D                        POP EBP
006962AF  C2 10 00                  RET 0x10
LAB_006962b2:
006962B2  5F                        POP EDI
006962B3  5E                        POP ESI
006962B4  8B C2                     MOV EAX,EDX
006962B6  5B                        POP EBX
006962B7  8B E5                     MOV ESP,EBP
006962B9  5D                        POP EBP
006962BA  C2 10 00                  RET 0x10
