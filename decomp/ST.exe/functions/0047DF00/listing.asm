FUN_0047df00:
0047DF00  55                        PUSH EBP
0047DF01  8B EC                     MOV EBP,ESP
0047DF03  83 EC 28                  SUB ESP,0x28
0047DF06  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0047DF09  53                        PUSH EBX
0047DF0A  56                        PUSH ESI
0047DF0B  57                        PUSH EDI
0047DF0C  85 C0                     TEST EAX,EAX
0047DF0E  8B F1                     MOV ESI,ECX
0047DF10  BB 01 00 00 00            MOV EBX,0x1
0047DF15  0F 84 31 13 00 00         JZ 0x0047f24c
0047DF1B  3B C3                     CMP EAX,EBX
0047DF1D  0F 84 29 13 00 00         JZ 0x0047f24c
0047DF23  8B 86 C3 06 00 00         MOV EAX,dword ptr [ESI + 0x6c3]
0047DF29  85 C0                     TEST EAX,EAX
0047DF2B  0F 85 5F 02 00 00         JNZ 0x0047e190
0047DF31  6A 02                     PUSH 0x2
0047DF33  E8 A6 52 F8 FF            CALL 0x004031de
0047DF38  40                        INC EAX
0047DF39  83 F8 04                  CMP EAX,0x4
0047DF3C  0F 87 AB 03 00 00         JA 0x0047e2ed
switchD_0047df42::switchD:
0047DF42  FF 24 85 10 F5 47 00      JMP dword ptr [EAX*0x4 + 0x47f510]
switchD_0047df42::caseD_ffffffff:
0047DF49  68 04 B8 7A 00            PUSH 0x7ab804
0047DF4E  68 CC 4C 7A 00            PUSH 0x7a4ccc
0047DF53  6A 00                     PUSH 0x0
0047DF55  6A 00                     PUSH 0x0
0047DF57  68 87 39 00 00            PUSH 0x3987
0047DF5C  68 3C 9D 7A 00            PUSH 0x7a9d3c
0047DF61  E8 6A F5 22 00            CALL 0x006ad4d0
0047DF66  83 C4 18                  ADD ESP,0x18
0047DF69  85 C0                     TEST EAX,EAX
0047DF6B  74 01                     JZ 0x0047df6e
0047DF6D  CC                        INT3
LAB_0047df6e:
0047DF6E  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0047DF73  68 87 39 00 00            PUSH 0x3987
0047DF78  68 3C 9D 7A 00            PUSH 0x7a9d3c
0047DF7D  50                        PUSH EAX
0047DF7E  68 FF FF 00 00            PUSH 0xffff
0047DF83  E8 B8 7E 22 00            CALL 0x006a5e40
0047DF88  B8 FF FF 00 00            MOV EAX,0xffff
0047DF8D  5F                        POP EDI
0047DF8E  5E                        POP ESI
0047DF8F  5B                        POP EBX
0047DF90  8B E5                     MOV ESP,EBP
0047DF92  5D                        POP EBP
0047DF93  C2 04 00                  RET 0x4
switchD_0047df42::caseD_0:
0047DF96  66 8B 86 A9 06 00 00      MOV AX,word ptr [ESI + 0x6a9]
0047DF9D  66 8B 8E AD 06 00 00      MOV CX,word ptr [ESI + 0x6ad]
0047DFA4  66 8B 96 AB 06 00 00      MOV DX,word ptr [ESI + 0x6ab]
0047DFAB  C7 86 B7 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xb7],0x0
0047DFB5  66 85 C0                  TEST AX,AX
0047DFB8  7C 50                     JL 0x0047e00a
0047DFBA  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0047DFC1  66 3B C7                  CMP AX,DI
0047DFC4  7D 44                     JGE 0x0047e00a
0047DFC6  66 85 D2                  TEST DX,DX
0047DFC9  7C 3F                     JL 0x0047e00a
0047DFCB  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0047DFD2  7D 36                     JGE 0x0047e00a
0047DFD4  66 85 C9                  TEST CX,CX
0047DFD7  7C 31                     JL 0x0047e00a
0047DFD9  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0047DFE0  7D 28                     JGE 0x0047e00a
0047DFE2  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0047DFE9  0F BF C9                  MOVSX ECX,CX
0047DFEC  0F BF D2                  MOVSX EDX,DX
0047DFEF  0F AF CB                  IMUL ECX,EBX
0047DFF2  0F BF FF                  MOVSX EDI,DI
0047DFF5  0F AF D7                  IMUL EDX,EDI
0047DFF8  0F BF C0                  MOVSX EAX,AX
0047DFFB  03 CA                     ADD ECX,EDX
0047DFFD  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0047E003  03 C8                     ADD ECX,EAX
0047E005  8B 0C CA                  MOV ECX,dword ptr [EDX + ECX*0x8]
0047E008  EB 02                     JMP 0x0047e00c
LAB_0047e00a:
0047E00A  33 C9                     XOR ECX,ECX
LAB_0047e00c:
0047E00C  85 C9                     TEST ECX,ECX
0047E00E  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0047E011  0F 84 6E 01 00 00         JZ 0x0047e185
0047E017  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
0047E01A  8B 96 AF 06 00 00         MOV EDX,dword ptr [ESI + 0x6af]
0047E020  3B C2                     CMP EAX,EDX
0047E022  0F 85 5D 01 00 00         JNZ 0x0047e185
0047E028  8B 51 24                  MOV EDX,dword ptr [ECX + 0x24]
0047E02B  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0047E02E  3B D0                     CMP EDX,EAX
0047E030  0F 85 4F 01 00 00         JNZ 0x0047e185
0047E036  E8 DF 33 F8 FF            CALL 0x0040141a
0047E03B  85 C0                     TEST EAX,EAX
0047E03D  0F 84 42 01 00 00         JZ 0x0047e185
0047E043  8D BE B7 06 00 00         LEA EDI,[ESI + 0x6b7]
0047E049  8D 9E B5 06 00 00         LEA EBX,[ESI + 0x6b5]
0047E04F  8D 86 B3 06 00 00         LEA EAX,[ESI + 0x6b3]
0047E055  57                        PUSH EDI
0047E056  53                        PUSH EBX
0047E057  50                        PUSH EAX
0047E058  8B CE                     MOV ECX,ESI
0047E05A  E8 7A 3D F8 FF            CALL 0x00401dd9
0047E05F  83 F8 01                  CMP EAX,0x1
0047E062  75 2A                     JNZ 0x0047e08e
0047E064  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0047E067  8B 88 B0 04 00 00         MOV ECX,dword ptr [EAX + 0x4b0]
0047E06D  85 C9                     TEST ECX,ECX
0047E06F  74 05                     JZ 0x0047e076
0047E071  3B 4E 18                  CMP ECX,dword ptr [ESI + 0x18]
0047E074  75 18                     JNZ 0x0047e08e
LAB_0047e076:
0047E076  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
0047E079  89 88 B0 04 00 00         MOV dword ptr [EAX + 0x4b0],ECX
0047E07F  C7 86 C3 06 00 00 02 00 00 00  MOV dword ptr [ESI + 0x6c3],0x2
0047E089  E9 51 04 00 00            JMP 0x0047e4df
LAB_0047e08e:
0047E08E  C7 86 C3 06 00 00 01 00 00 00  MOV dword ptr [ESI + 0x6c3],0x1
0047E098  C7 86 BF 06 00 00 00 00 00 00  MOV dword ptr [ESI + 0x6bf],0x0
0047E0A2  6A 00                     PUSH 0x0
LAB_0047e0a4:
0047E0A4  8B CE                     MOV ECX,ESI
0047E0A6  E8 80 59 F8 FF            CALL 0x00403a2b
0047E0AB  83 F8 FF                  CMP EAX,-0x1
0047E0AE  0F 85 39 02 00 00         JNZ 0x0047e2ed
LAB_0047e0b4:
0047E0B4  83 C8 FF                  OR EAX,0xffffffff
0047E0B7  5F                        POP EDI
0047E0B8  5E                        POP ESI
0047E0B9  5B                        POP EBX
0047E0BA  8B E5                     MOV ESP,EBP
0047E0BC  5D                        POP EBP
0047E0BD  C2 04 00                  RET 0x4
switchD_0047df42::caseD_3:
0047E0C0  0F BF 96 AD 06 00 00      MOVSX EDX,word ptr [ESI + 0x6ad]
0047E0C7  0F BF 86 AB 06 00 00      MOVSX EAX,word ptr [ESI + 0x6ab]
0047E0CE  0F BF 8E A9 06 00 00      MOVSX ECX,word ptr [ESI + 0x6a9]
0047E0D5  42                        INC EDX
0047E0D6  52                        PUSH EDX
0047E0D7  50                        PUSH EAX
0047E0D8  E9 11 04 00 00            JMP 0x0047e4ee
switchD_0047df42::caseD_1:
0047E0DD  66 8B 86 A9 06 00 00      MOV AX,word ptr [ESI + 0x6a9]
0047E0E4  66 8B 8E AD 06 00 00      MOV CX,word ptr [ESI + 0x6ad]
0047E0EB  66 8B 96 AB 06 00 00      MOV DX,word ptr [ESI + 0x6ab]
0047E0F2  66 85 C0                  TEST AX,AX
0047E0F5  7C 50                     JL 0x0047e147
0047E0F7  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0047E0FE  66 3B C7                  CMP AX,DI
0047E101  7D 44                     JGE 0x0047e147
0047E103  66 85 D2                  TEST DX,DX
0047E106  7C 3F                     JL 0x0047e147
0047E108  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0047E10F  7D 36                     JGE 0x0047e147
0047E111  66 85 C9                  TEST CX,CX
0047E114  7C 31                     JL 0x0047e147
0047E116  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0047E11D  7D 28                     JGE 0x0047e147
0047E11F  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0047E126  0F BF C9                  MOVSX ECX,CX
0047E129  0F BF D2                  MOVSX EDX,DX
0047E12C  0F AF CB                  IMUL ECX,EBX
0047E12F  0F BF FF                  MOVSX EDI,DI
0047E132  0F AF D7                  IMUL EDX,EDI
0047E135  0F BF C0                  MOVSX EAX,AX
0047E138  03 CA                     ADD ECX,EDX
0047E13A  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0047E140  03 C8                     ADD ECX,EAX
0047E142  8B 0C CA                  MOV ECX,dword ptr [EDX + ECX*0x8]
0047E145  EB 02                     JMP 0x0047e149
LAB_0047e147:
0047E147  33 C9                     XOR ECX,ECX
LAB_0047e149:
0047E149  85 C9                     TEST ECX,ECX
0047E14B  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0047E14E  74 24                     JZ 0x0047e174
0047E150  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
0047E153  8B 96 AF 06 00 00         MOV EDX,dword ptr [ESI + 0x6af]
0047E159  3B C2                     CMP EAX,EDX
0047E15B  75 17                     JNZ 0x0047e174
0047E15D  8B 51 24                  MOV EDX,dword ptr [ECX + 0x24]
0047E160  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0047E163  3B D0                     CMP EDX,EAX
0047E165  75 0D                     JNZ 0x0047e174
0047E167  E8 AE 32 F8 FF            CALL 0x0040141a
0047E16C  85 C0                     TEST EAX,EAX
0047E16E  0F 85 79 01 00 00         JNZ 0x0047e2ed
LAB_0047e174:
0047E174  8B CE                     MOV ECX,ESI
0047E176  E8 DA 56 F8 FF            CALL 0x00403855
0047E17B  C7 86 B7 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xb7],0x0
LAB_0047e185:
0047E185  33 C0                     XOR EAX,EAX
0047E187  5F                        POP EDI
0047E188  5E                        POP ESI
0047E189  5B                        POP EBX
0047E18A  8B E5                     MOV ESP,EBP
0047E18C  5D                        POP EBP
0047E18D  C2 04 00                  RET 0x4
LAB_0047e190:
0047E190  3B C3                     CMP EAX,EBX
0047E192  0F 85 63 01 00 00         JNZ 0x0047e2fb
0047E198  6A 02                     PUSH 0x2
0047E19A  8B CE                     MOV ECX,ESI
0047E19C  E8 8A 58 F8 FF            CALL 0x00403a2b
0047E1A1  83 F8 FF                  CMP EAX,-0x1
0047E1A4  0F 84 0A FF FF FF         JZ 0x0047e0b4
0047E1AA  8B 86 2E 08 00 00         MOV EAX,dword ptr [ESI + 0x82e]
0047E1B0  85 C0                     TEST EAX,EAX
0047E1B2  0F 85 2F 01 00 00         JNZ 0x0047e2e7
0047E1B8  81 BE 8B 04 00 00 FF FF 00 00  CMP dword ptr [ESI + 0x48b],0xffff
0047E1C2  0F 85 1F 01 00 00         JNZ 0x0047e2e7
0047E1C8  8B 86 BF 06 00 00         MOV EAX,dword ptr [ESI + 0x6bf]
0047E1CE  B9 0A 00 00 00            MOV ECX,0xa
0047E1D3  99                        CDQ
0047E1D4  F7 F9                     IDIV ECX
0047E1D6  85 D2                     TEST EDX,EDX
0047E1D8  0F 85 09 01 00 00         JNZ 0x0047e2e7
0047E1DE  66 8B 86 A9 06 00 00      MOV AX,word ptr [ESI + 0x6a9]
0047E1E5  66 8B 8E AD 06 00 00      MOV CX,word ptr [ESI + 0x6ad]
0047E1EC  66 8B 96 AB 06 00 00      MOV DX,word ptr [ESI + 0x6ab]
0047E1F3  66 85 C0                  TEST AX,AX
0047E1F6  7C 50                     JL 0x0047e248
0047E1F8  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0047E1FF  66 3B C7                  CMP AX,DI
0047E202  7D 44                     JGE 0x0047e248
0047E204  66 85 D2                  TEST DX,DX
0047E207  7C 3F                     JL 0x0047e248
0047E209  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0047E210  7D 36                     JGE 0x0047e248
0047E212  66 85 C9                  TEST CX,CX
0047E215  7C 31                     JL 0x0047e248
0047E217  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0047E21E  7D 28                     JGE 0x0047e248
0047E220  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0047E227  0F BF C9                  MOVSX ECX,CX
0047E22A  0F BF D2                  MOVSX EDX,DX
0047E22D  0F AF CB                  IMUL ECX,EBX
0047E230  0F BF FF                  MOVSX EDI,DI
0047E233  0F AF D7                  IMUL EDX,EDI
0047E236  0F BF C0                  MOVSX EAX,AX
0047E239  03 CA                     ADD ECX,EDX
0047E23B  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0047E241  03 C8                     ADD ECX,EAX
0047E243  8B 0C CA                  MOV ECX,dword ptr [EDX + ECX*0x8]
0047E246  EB 02                     JMP 0x0047e24a
LAB_0047e248:
0047E248  33 C9                     XOR ECX,ECX
LAB_0047e24a:
0047E24A  85 C9                     TEST ECX,ECX
0047E24C  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0047E24F  0F 84 30 FF FF FF         JZ 0x0047e185
0047E255  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
0047E258  8B 96 AF 06 00 00         MOV EDX,dword ptr [ESI + 0x6af]
0047E25E  3B C2                     CMP EAX,EDX
0047E260  0F 85 1F FF FF FF         JNZ 0x0047e185
0047E266  8B 51 24                  MOV EDX,dword ptr [ECX + 0x24]
0047E269  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0047E26C  3B D0                     CMP EDX,EAX
0047E26E  0F 85 11 FF FF FF         JNZ 0x0047e185
0047E274  E8 A1 31 F8 FF            CALL 0x0040141a
0047E279  85 C0                     TEST EAX,EAX
0047E27B  0F 84 04 FF FF FF         JZ 0x0047e185
0047E281  8D BE B7 06 00 00         LEA EDI,[ESI + 0x6b7]
0047E287  8D 9E B5 06 00 00         LEA EBX,[ESI + 0x6b5]
0047E28D  8D 86 B3 06 00 00         LEA EAX,[ESI + 0x6b3]
0047E293  57                        PUSH EDI
0047E294  53                        PUSH EBX
0047E295  50                        PUSH EAX
0047E296  8B CE                     MOV ECX,ESI
0047E298  E8 3C 3B F8 FF            CALL 0x00401dd9
0047E29D  83 F8 01                  CMP EAX,0x1
0047E2A0  75 45                     JNZ 0x0047e2e7
0047E2A2  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0047E2A5  8B 88 B0 04 00 00         MOV ECX,dword ptr [EAX + 0x4b0]
0047E2AB  85 C9                     TEST ECX,ECX
0047E2AD  74 05                     JZ 0x0047e2b4
0047E2AF  3B 4E 18                  CMP ECX,dword ptr [ESI + 0x18]
0047E2B2  75 33                     JNZ 0x0047e2e7
LAB_0047e2b4:
0047E2B4  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
0047E2B7  89 88 B0 04 00 00         MOV dword ptr [EAX + 0x4b0],ECX
0047E2BD  C7 86 C3 06 00 00 02 00 00 00  MOV dword ptr [ESI + 0x6c3],0x2
0047E2C7  0F BF 17                  MOVSX EDX,word ptr [EDI]
0047E2CA  0F BF 03                  MOVSX EAX,word ptr [EBX]
0047E2CD  0F BF 8E B3 06 00 00      MOVSX ECX,word ptr [ESI + 0x6b3]
0047E2D4  52                        PUSH EDX
0047E2D5  50                        PUSH EAX
0047E2D6  51                        PUSH ECX
0047E2D7  8B CE                     MOV ECX,ESI
0047E2D9  E8 8D 6C F8 FF            CALL 0x00404f6b
0047E2DE  6A 00                     PUSH 0x0
0047E2E0  8B CE                     MOV ECX,ESI
0047E2E2  E8 F7 4E F8 FF            CALL 0x004031de
LAB_0047e2e7:
0047E2E7  FF 86 BF 06 00 00         INC dword ptr [ESI + 0x6bf]
switchD_0047df42::caseD_2:
0047E2ED  B8 02 00 00 00            MOV EAX,0x2
0047E2F2  5F                        POP EDI
0047E2F3  5E                        POP ESI
0047E2F4  5B                        POP EBX
0047E2F5  8B E5                     MOV ESP,EBP
0047E2F7  5D                        POP EBP
0047E2F8  C2 04 00                  RET 0x4
LAB_0047e2fb:
0047E2FB  83 F8 02                  CMP EAX,0x2
0047E2FE  0F 85 EC 03 00 00         JNZ 0x0047e6f0
0047E304  50                        PUSH EAX
0047E305  8B CE                     MOV ECX,ESI
0047E307  E8 D2 4E F8 FF            CALL 0x004031de
0047E30C  40                        INC EAX
0047E30D  83 F8 04                  CMP EAX,0x4
0047E310  77 DB                     JA 0x0047e2ed
switchD_0047e312::switchD:
0047E312  FF 24 85 24 F5 47 00      JMP dword ptr [EAX*0x4 + 0x47f524]
switchD_0047e312::caseD_ffffffff:
0047E319  68 D4 B7 7A 00            PUSH 0x7ab7d4
0047E31E  68 CC 4C 7A 00            PUSH 0x7a4ccc
0047E323  6A 00                     PUSH 0x0
0047E325  6A 00                     PUSH 0x0
0047E327  68 D9 39 00 00            PUSH 0x39d9
0047E32C  68 3C 9D 7A 00            PUSH 0x7a9d3c
0047E331  E8 9A F1 22 00            CALL 0x006ad4d0
0047E336  83 C4 18                  ADD ESP,0x18
0047E339  85 C0                     TEST EAX,EAX
0047E33B  74 01                     JZ 0x0047e33e
0047E33D  CC                        INT3
LAB_0047e33e:
0047E33E  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0047E344  68 D9 39 00 00            PUSH 0x39d9
0047E349  68 3C 9D 7A 00            PUSH 0x7a9d3c
0047E34E  52                        PUSH EDX
0047E34F  68 FF FF 00 00            PUSH 0xffff
0047E354  E8 E7 7A 22 00            CALL 0x006a5e40
0047E359  B8 FF FF 00 00            MOV EAX,0xffff
0047E35E  5F                        POP EDI
0047E35F  5E                        POP ESI
0047E360  5B                        POP EBX
0047E361  8B E5                     MOV ESP,EBP
0047E363  5D                        POP EBP
0047E364  C2 04 00                  RET 0x4
switchD_0047e312::caseD_0:
0047E367  66 8B 86 A9 06 00 00      MOV AX,word ptr [ESI + 0x6a9]
0047E36E  66 8B 8E AD 06 00 00      MOV CX,word ptr [ESI + 0x6ad]
0047E375  66 8B 96 AB 06 00 00      MOV DX,word ptr [ESI + 0x6ab]
0047E37C  66 85 C0                  TEST AX,AX
0047E37F  7C 55                     JL 0x0047e3d6
0047E381  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0047E388  66 3B C7                  CMP AX,DI
0047E38B  7D 49                     JGE 0x0047e3d6
0047E38D  66 85 D2                  TEST DX,DX
0047E390  7C 44                     JL 0x0047e3d6
0047E392  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0047E399  7D 3B                     JGE 0x0047e3d6
0047E39B  66 85 C9                  TEST CX,CX
0047E39E  7C 36                     JL 0x0047e3d6
0047E3A0  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0047E3A7  7D 2D                     JGE 0x0047e3d6
0047E3A9  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0047E3B0  0F BF C9                  MOVSX ECX,CX
0047E3B3  0F BF D2                  MOVSX EDX,DX
0047E3B6  0F AF CB                  IMUL ECX,EBX
0047E3B9  0F BF FF                  MOVSX EDI,DI
0047E3BC  0F AF D7                  IMUL EDX,EDI
0047E3BF  0F BF C0                  MOVSX EAX,AX
0047E3C2  03 CA                     ADD ECX,EDX
0047E3C4  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0047E3CA  03 C8                     ADD ECX,EAX
0047E3CC  BB 01 00 00 00            MOV EBX,0x1
0047E3D1  8B 0C CA                  MOV ECX,dword ptr [EDX + ECX*0x8]
0047E3D4  EB 02                     JMP 0x0047e3d8
LAB_0047e3d6:
0047E3D6  33 C9                     XOR ECX,ECX
LAB_0047e3d8:
0047E3D8  33 FF                     XOR EDI,EDI
0047E3DA  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0047E3DD  3B CF                     CMP ECX,EDI
0047E3DF  0F 84 96 00 00 00         JZ 0x0047e47b
0047E3E5  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
0047E3E8  8B 96 AF 06 00 00         MOV EDX,dword ptr [ESI + 0x6af]
0047E3EE  3B C2                     CMP EAX,EDX
0047E3F0  0F 85 85 00 00 00         JNZ 0x0047e47b
0047E3F6  8B 51 24                  MOV EDX,dword ptr [ECX + 0x24]
0047E3F9  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0047E3FC  3B D0                     CMP EDX,EAX
0047E3FE  75 7B                     JNZ 0x0047e47b
0047E400  E8 15 30 F8 FF            CALL 0x0040141a
0047E405  85 C0                     TEST EAX,EAX
0047E407  74 72                     JZ 0x0047e47b
0047E409  39 9E B9 06 00 00         CMP dword ptr [ESI + 0x6b9],EBX
0047E40F  75 4A                     JNZ 0x0047e45b
0047E411  66 8B 46 47               MOV AX,word ptr [ESI + 0x47]
0047E415  66 3B 86 B3 06 00 00      CMP AX,word ptr [ESI + 0x6b3]
0047E41C  75 38                     JNZ 0x0047e456
0047E41E  66 8B 4E 49               MOV CX,word ptr [ESI + 0x49]
0047E422  66 3B 8E B5 06 00 00      CMP CX,word ptr [ESI + 0x6b5]
0047E429  75 2B                     JNZ 0x0047e456
0047E42B  66 8B 56 4B               MOV DX,word ptr [ESI + 0x4b]
0047E42F  66 3B 96 B7 06 00 00      CMP DX,word ptr [ESI + 0x6b7]
0047E436  75 1E                     JNZ 0x0047e456
0047E438  C7 86 C3 06 00 00 03 00 00 00  MOV dword ptr [ESI + 0x6c3],0x3
0047E442  89 BE C7 06 00 00         MOV dword ptr [ESI + 0x6c7],EDI
0047E448  B8 02 00 00 00            MOV EAX,0x2
0047E44D  5F                        POP EDI
0047E44E  5E                        POP ESI
0047E44F  5B                        POP EBX
0047E450  8B E5                     MOV ESP,EBP
0047E452  5D                        POP EBP
0047E453  C2 04 00                  RET 0x4
LAB_0047e456:
0047E456  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0047E459  EB 41                     JMP 0x0047e49c
LAB_0047e45b:
0047E45B  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0047E45E  E8 DA 52 F8 FF            CALL 0x0040373d
0047E463  C7 86 C3 06 00 00 04 00 00 00  MOV dword ptr [ESI + 0x6c3],0x4
0047E46D  B8 02 00 00 00            MOV EAX,0x2
0047E472  5F                        POP EDI
0047E473  5E                        POP ESI
0047E474  5B                        POP EBX
0047E475  8B E5                     MOV ESP,EBP
0047E477  5D                        POP EBP
0047E478  C2 04 00                  RET 0x4
LAB_0047e47b:
0047E47B  8B 86 AF 06 00 00         MOV EAX,dword ptr [ESI + 0x6af]
0047E481  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0047E487  8D 55 08                  LEA EDX,[EBP + 0x8]
0047E48A  52                        PUSH EDX
0047E48B  50                        PUSH EAX
0047E48C  E8 3F 7E 26 00            CALL 0x006e62d0
0047E491  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0047E494  3B C7                     CMP EAX,EDI
0047E496  0F 84 E9 FC FF FF         JZ 0x0047e185
LAB_0047e49c:
0047E49C  8B 88 B0 04 00 00         MOV ECX,dword ptr [EAX + 0x4b0]
0047E4A2  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0047E4A5  3B CA                     CMP ECX,EDX
0047E4A7  0F 85 D8 FC FF FF         JNZ 0x0047e185
0047E4AD  89 B8 B0 04 00 00         MOV dword ptr [EAX + 0x4b0],EDI
0047E4B3  33 C0                     XOR EAX,EAX
0047E4B5  5F                        POP EDI
0047E4B6  5E                        POP ESI
0047E4B7  5B                        POP EBX
0047E4B8  8B E5                     MOV ESP,EBP
0047E4BA  5D                        POP EBP
0047E4BB  C2 04 00                  RET 0x4
switchD_0047e312::caseD_3:
0047E4BE  8D BE B7 06 00 00         LEA EDI,[ESI + 0x6b7]
0047E4C4  8D 9E B5 06 00 00         LEA EBX,[ESI + 0x6b5]
0047E4CA  8D 86 B3 06 00 00         LEA EAX,[ESI + 0x6b3]
0047E4D0  57                        PUSH EDI
0047E4D1  53                        PUSH EBX
0047E4D2  50                        PUSH EAX
0047E4D3  8B CE                     MOV ECX,ESI
0047E4D5  E8 FF 38 F8 FF            CALL 0x00401dd9
0047E4DA  83 F8 01                  CMP EAX,0x1
0047E4DD  75 2E                     JNZ 0x0047e50d
LAB_0047e4df:
0047E4DF  0F BF 17                  MOVSX EDX,word ptr [EDI]
0047E4E2  0F BF 03                  MOVSX EAX,word ptr [EBX]
0047E4E5  0F BF 8E B3 06 00 00      MOVSX ECX,word ptr [ESI + 0x6b3]
0047E4EC  52                        PUSH EDX
0047E4ED  50                        PUSH EAX
LAB_0047e4ee:
0047E4EE  51                        PUSH ECX
0047E4EF  8B CE                     MOV ECX,ESI
0047E4F1  E8 75 6A F8 FF            CALL 0x00404f6b
0047E4F6  6A 00                     PUSH 0x0
0047E4F8  8B CE                     MOV ECX,ESI
0047E4FA  E8 DF 4C F8 FF            CALL 0x004031de
0047E4FF  B8 02 00 00 00            MOV EAX,0x2
0047E504  5F                        POP EDI
0047E505  5E                        POP ESI
0047E506  5B                        POP EBX
0047E507  8B E5                     MOV ESP,EBP
0047E509  5D                        POP EBP
0047E50A  C2 04 00                  RET 0x4
LAB_0047e50d:
0047E50D  66 8B 86 A9 06 00 00      MOV AX,word ptr [ESI + 0x6a9]
0047E514  66 8B 8E AD 06 00 00      MOV CX,word ptr [ESI + 0x6ad]
0047E51B  66 8B 96 AB 06 00 00      MOV DX,word ptr [ESI + 0x6ab]
0047E522  33 DB                     XOR EBX,EBX
0047E524  66 3B C3                  CMP AX,BX
0047E527  7C 52                     JL 0x0047e57b
0047E529  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0047E530  66 3B C7                  CMP AX,DI
0047E533  7D 46                     JGE 0x0047e57b
0047E535  66 3B D3                  CMP DX,BX
0047E538  7C 41                     JL 0x0047e57b
0047E53A  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0047E541  7D 38                     JGE 0x0047e57b
0047E543  66 3B CB                  CMP CX,BX
0047E546  7C 33                     JL 0x0047e57b
0047E548  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0047E54F  7D 2A                     JGE 0x0047e57b
0047E551  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0047E558  0F BF C9                  MOVSX ECX,CX
0047E55B  0F BF D2                  MOVSX EDX,DX
0047E55E  0F AF CB                  IMUL ECX,EBX
0047E561  0F BF FF                  MOVSX EDI,DI
0047E564  0F AF D7                  IMUL EDX,EDI
0047E567  0F BF C0                  MOVSX EAX,AX
0047E56A  03 CA                     ADD ECX,EDX
0047E56C  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0047E572  03 C8                     ADD ECX,EAX
0047E574  33 DB                     XOR EBX,EBX
0047E576  8B 0C CA                  MOV ECX,dword ptr [EDX + ECX*0x8]
0047E579  EB 02                     JMP 0x0047e57d
LAB_0047e57b:
0047E57B  33 C9                     XOR ECX,ECX
LAB_0047e57d:
0047E57D  3B CB                     CMP ECX,EBX
0047E57F  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0047E582  74 4C                     JZ 0x0047e5d0
0047E584  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
0047E587  8B 96 AF 06 00 00         MOV EDX,dword ptr [ESI + 0x6af]
0047E58D  3B C2                     CMP EAX,EDX
0047E58F  75 3F                     JNZ 0x0047e5d0
0047E591  8B 51 24                  MOV EDX,dword ptr [ECX + 0x24]
0047E594  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0047E597  3B D0                     CMP EDX,EAX
0047E599  75 35                     JNZ 0x0047e5d0
0047E59B  E8 7A 2E F8 FF            CALL 0x0040141a
0047E5A0  85 C0                     TEST EAX,EAX
0047E5A2  74 2C                     JZ 0x0047e5d0
0047E5A4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0047E5A7  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0047E5AA  8B 88 B0 04 00 00         MOV ECX,dword ptr [EAX + 0x4b0]
0047E5B0  3B CA                     CMP ECX,EDX
0047E5B2  75 06                     JNZ 0x0047e5ba
0047E5B4  89 98 B0 04 00 00         MOV dword ptr [EAX + 0x4b0],EBX
LAB_0047e5ba:
0047E5BA  C7 86 C3 06 00 00 01 00 00 00  MOV dword ptr [ESI + 0x6c3],0x1
0047E5C4  89 9E BF 06 00 00         MOV dword ptr [ESI + 0x6bf],EBX
0047E5CA  53                        PUSH EBX
0047E5CB  E9 D4 FA FF FF            JMP 0x0047e0a4
LAB_0047e5d0:
0047E5D0  8B 86 AF 06 00 00         MOV EAX,dword ptr [ESI + 0x6af]
0047E5D6  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0047E5DC  8D 55 08                  LEA EDX,[EBP + 0x8]
0047E5DF  52                        PUSH EDX
0047E5E0  50                        PUSH EAX
0047E5E1  E8 EA 7C 26 00            CALL 0x006e62d0
0047E5E6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0047E5E9  3B C3                     CMP EAX,EBX
0047E5EB  0F 84 94 FB FF FF         JZ 0x0047e185
0047E5F1  8B 88 B0 04 00 00         MOV ECX,dword ptr [EAX + 0x4b0]
0047E5F7  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0047E5FA  3B CA                     CMP ECX,EDX
0047E5FC  0F 85 83 FB FF FF         JNZ 0x0047e185
0047E602  89 98 B0 04 00 00         MOV dword ptr [EAX + 0x4b0],EBX
0047E608  33 C0                     XOR EAX,EAX
0047E60A  5F                        POP EDI
0047E60B  5E                        POP ESI
0047E60C  5B                        POP EBX
0047E60D  8B E5                     MOV ESP,EBP
0047E60F  5D                        POP EBP
0047E610  C2 04 00                  RET 0x4
switchD_0047e312::caseD_1:
0047E613  66 8B 86 A9 06 00 00      MOV AX,word ptr [ESI + 0x6a9]
0047E61A  66 8B 8E AD 06 00 00      MOV CX,word ptr [ESI + 0x6ad]
0047E621  66 8B 96 AB 06 00 00      MOV DX,word ptr [ESI + 0x6ab]
0047E628  66 85 C0                  TEST AX,AX
0047E62B  7C 50                     JL 0x0047e67d
0047E62D  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0047E634  66 3B C7                  CMP AX,DI
0047E637  7D 44                     JGE 0x0047e67d
0047E639  66 85 D2                  TEST DX,DX
0047E63C  7C 3F                     JL 0x0047e67d
0047E63E  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0047E645  7D 36                     JGE 0x0047e67d
0047E647  66 85 C9                  TEST CX,CX
0047E64A  7C 31                     JL 0x0047e67d
0047E64C  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0047E653  7D 28                     JGE 0x0047e67d
0047E655  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0047E65C  0F BF C9                  MOVSX ECX,CX
0047E65F  0F BF D2                  MOVSX EDX,DX
0047E662  0F AF CB                  IMUL ECX,EBX
0047E665  0F BF FF                  MOVSX EDI,DI
0047E668  0F AF D7                  IMUL EDX,EDI
0047E66B  0F BF C0                  MOVSX EAX,AX
0047E66E  03 CA                     ADD ECX,EDX
0047E670  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0047E676  03 C8                     ADD ECX,EAX
0047E678  8B 0C CA                  MOV ECX,dword ptr [EDX + ECX*0x8]
0047E67B  EB 02                     JMP 0x0047e67f
LAB_0047e67d:
0047E67D  33 C9                     XOR ECX,ECX
LAB_0047e67f:
0047E67F  85 C9                     TEST ECX,ECX
0047E681  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0047E684  74 24                     JZ 0x0047e6aa
0047E686  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
0047E689  8B 96 AF 06 00 00         MOV EDX,dword ptr [ESI + 0x6af]
0047E68F  3B C2                     CMP EAX,EDX
0047E691  75 17                     JNZ 0x0047e6aa
0047E693  8B 51 24                  MOV EDX,dword ptr [ECX + 0x24]
0047E696  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0047E699  3B D0                     CMP EDX,EAX
0047E69B  75 0D                     JNZ 0x0047e6aa
0047E69D  E8 78 2D F8 FF            CALL 0x0040141a
0047E6A2  85 C0                     TEST EAX,EAX
0047E6A4  0F 85 43 FC FF FF         JNZ 0x0047e2ed
LAB_0047e6aa:
0047E6AA  8B 8E AF 06 00 00         MOV ECX,dword ptr [ESI + 0x6af]
0047E6B0  8D 45 08                  LEA EAX,[EBP + 0x8]
0047E6B3  50                        PUSH EAX
0047E6B4  51                        PUSH ECX
0047E6B5  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0047E6BB  E8 10 7C 26 00            CALL 0x006e62d0
0047E6C0  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0047E6C3  85 C0                     TEST EAX,EAX
0047E6C5  74 17                     JZ 0x0047e6de
0047E6C7  8B 90 B0 04 00 00         MOV EDX,dword ptr [EAX + 0x4b0]
0047E6CD  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
0047E6D0  3B D1                     CMP EDX,ECX
0047E6D2  75 0A                     JNZ 0x0047e6de
0047E6D4  C7 80 B0 04 00 00 00 00 00 00  MOV dword ptr [EAX + 0x4b0],0x0
LAB_0047e6de:
0047E6DE  8B CE                     MOV ECX,ESI
0047E6E0  E8 70 51 F8 FF            CALL 0x00403855
0047E6E5  33 C0                     XOR EAX,EAX
0047E6E7  5F                        POP EDI
0047E6E8  5E                        POP ESI
0047E6E9  5B                        POP EBX
0047E6EA  8B E5                     MOV ESP,EBP
0047E6EC  5D                        POP EBP
0047E6ED  C2 04 00                  RET 0x4
LAB_0047e6f0:
0047E6F0  BF 03 00 00 00            MOV EDI,0x3
0047E6F5  3B C7                     CMP EAX,EDI
0047E6F7  0F 85 7C 04 00 00         JNZ 0x0047eb79
0047E6FD  8B 86 C7 06 00 00         MOV EAX,dword ptr [ESI + 0x6c7]
0047E703  85 C0                     TEST EAX,EAX
0047E705  75 59                     JNZ 0x0047e760
0047E707  66 8B 86 B7 06 00 00      MOV AX,word ptr [ESI + 0x6b7]
0047E70E  8B 16                     MOV EDX,dword ptr [ESI]
0047E710  66 69 C0 C8 00            IMUL AX,AX,0xc8
0047E715  83 C0 64                  ADD EAX,0x64
0047E718  50                        PUSH EAX
0047E719  66 8B 86 AB 06 00 00      MOV AX,word ptr [ESI + 0x6ab]
0047E720  66 40                     INC AX
0047E722  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0047E725  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0047E728  8D 04 C8                  LEA EAX,[EAX + ECX*0x8]
0047E72B  50                        PUSH EAX
0047E72C  66 8B 86 A9 06 00 00      MOV AX,word ptr [ESI + 0x6a9]
0047E733  66 40                     INC AX
0047E735  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0047E738  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0047E73B  8D 04 C8                  LEA EAX,[EAX + ECX*0x8]
0047E73E  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
0047E742  50                        PUSH EAX
0047E743  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
0047E747  51                        PUSH ECX
0047E748  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
0047E74C  50                        PUSH EAX
0047E74D  51                        PUSH ECX
0047E74E  8B CE                     MOV ECX,ESI
0047E750  FF 52 10                  CALL dword ptr [EDX + 0x10]
0047E753  66 89 86 BD 06 00 00      MOV word ptr [ESI + 0x6bd],AX
0047E75A  89 9E C7 06 00 00         MOV dword ptr [ESI + 0x6c7],EBX
LAB_0047e760:
0047E760  39 9E C7 06 00 00         CMP dword ptr [ESI + 0x6c7],EBX
0047E766  75 75                     JNZ 0x0047e7dd
0047E768  66 8B 96 BD 06 00 00      MOV DX,word ptr [ESI + 0x6bd]
0047E76F  8B CE                     MOV ECX,ESI
0047E771  52                        PUSH EDX
0047E772  E8 3B 49 F8 FF            CALL 0x004030b2
0047E777  50                        PUSH EAX
0047E778  8B CE                     MOV ECX,ESI
0047E77A  E8 7D 3B F8 FF            CALL 0x004022fc
0047E77F  83 F8 FF                  CMP EAX,-0x1
0047E782  74 2A                     JZ 0x0047e7ae
0047E784  85 C0                     TEST EAX,EAX
0047E786  75 55                     JNZ 0x0047e7dd
0047E788  8B 06                     MOV EAX,dword ptr [ESI]
0047E78A  8B CE                     MOV ECX,ESI
0047E78C  C7 86 C7 06 00 00 02 00 00 00  MOV dword ptr [ESI + 0x6c7],0x2
0047E796  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
0047E79C  F7 D8                     NEG EAX
0047E79E  1B C0                     SBB EAX,EAX
0047E7A0  24 FD                     AND AL,0xfd
0047E7A2  83 C0 02                  ADD EAX,0x2
0047E7A5  5F                        POP EDI
0047E7A6  5E                        POP ESI
0047E7A7  5B                        POP EBX
0047E7A8  8B E5                     MOV ESP,EBP
0047E7AA  5D                        POP EBP
0047E7AB  C2 04 00                  RET 0x4
LAB_0047e7ae:
0047E7AE  68 AC B7 7A 00            PUSH 0x7ab7ac
0047E7B3  68 CC 4C 7A 00            PUSH 0x7a4ccc
0047E7B8  6A 00                     PUSH 0x0
0047E7BA  6A 00                     PUSH 0x0
0047E7BC  68 2D 3A 00 00            PUSH 0x3a2d
0047E7C1  68 3C 9D 7A 00            PUSH 0x7a9d3c
0047E7C6  E8 05 ED 22 00            CALL 0x006ad4d0
0047E7CB  83 C4 18                  ADD ESP,0x18
0047E7CE  85 C0                     TEST EAX,EAX
0047E7D0  74 01                     JZ 0x0047e7d3
0047E7D2  CC                        INT3
LAB_0047e7d3:
0047E7D3  68 2E 3A 00 00            PUSH 0x3a2e
0047E7D8  E9 1A 0A 00 00            JMP 0x0047f1f7
LAB_0047e7dd:
0047E7DD  83 BE C7 06 00 00 02      CMP dword ptr [ESI + 0x6c7],0x2
0047E7E4  75 56                     JNZ 0x0047e83c
0047E7E6  66 8B 86 B7 06 00 00      MOV AX,word ptr [ESI + 0x6b7]
0047E7ED  8A 56 61                  MOV DL,byte ptr [ESI + 0x61]
0047E7F0  66 69 C0 C8 00            IMUL AX,AX,0xc8
0047E7F5  83 C0 64                  ADD EAX,0x64
0047E7F8  52                        PUSH EDX
0047E7F9  50                        PUSH EAX
0047E7FA  66 8B 86 AB 06 00 00      MOV AX,word ptr [ESI + 0x6ab]
0047E801  66 40                     INC AX
0047E803  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0047E806  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0047E809  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0047E80C  66 8B 86 A9 06 00 00      MOV AX,word ptr [ESI + 0x6a9]
0047E813  66 40                     INC AX
0047E815  52                        PUSH EDX
0047E816  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0047E819  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0047E81C  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0047E81F  66 8B 46 45               MOV AX,word ptr [ESI + 0x45]
0047E823  66 8B 4E 43               MOV CX,word ptr [ESI + 0x43]
0047E827  52                        PUSH EDX
0047E828  66 8B 56 41               MOV DX,word ptr [ESI + 0x41]
0047E82C  50                        PUSH EAX
0047E82D  51                        PUSH ECX
0047E82E  52                        PUSH EDX
0047E82F  8B CE                     MOV ECX,ESI
0047E831  E8 1F 3C F8 FF            CALL 0x00402455
0047E836  89 BE C7 06 00 00         MOV dword ptr [ESI + 0x6c7],EDI
LAB_0047e83c:
0047E83C  39 BE C7 06 00 00         CMP dword ptr [ESI + 0x6c7],EDI
0047E842  0F 85 52 09 00 00         JNZ 0x0047f19a
0047E848  8D 45 F0                  LEA EAX,[EBP + -0x10]
0047E84B  8D 4D EC                  LEA ECX,[EBP + -0x14]
0047E84E  50                        PUSH EAX
0047E84F  51                        PUSH ECX
0047E850  8B CE                     MOV ECX,ESI
0047E852  E8 F0 3F F8 FF            CALL 0x00402847
0047E857  8A 8E BF 02 00 00         MOV CL,byte ptr [ESI + 0x2bf]
0047E85D  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0047E860  84 C9                     TEST CL,CL
0047E862  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0047E869  0F 86 D9 01 00 00         JBE 0x0047ea48
0047E86F  8D 96 B3 02 00 00         LEA EDX,[ESI + 0x2b3]
0047E875  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_0047e878:
0047E878  66 8B 46 6C               MOV AX,word ptr [ESI + 0x6c]
0047E87C  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0047E87F  50                        PUSH EAX
0047E880  8B 01                     MOV EAX,dword ptr [ECX]
0047E882  83 EC 08                  SUB ESP,0x8
0047E885  8B D4                     MOV EDX,ESP
0047E887  66 8B 49 04               MOV CX,word ptr [ECX + 0x4]
0047E88B  89 02                     MOV dword ptr [EDX],EAX
0047E88D  66 89 4A 04               MOV word ptr [EDX + 0x4],CX
0047E891  8D 55 D8                  LEA EDX,[EBP + -0x28]
0047E894  52                        PUSH EDX
0047E895  8B CE                     MOV ECX,ESI
0047E897  E8 90 4B F8 FF            CALL 0x0040342c
0047E89C  8B 08                     MOV ECX,dword ptr [EAX]
0047E89E  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
0047E8A1  66 8B 50 04               MOV DX,word ptr [EAX + 0x4]
0047E8A5  A1 2C 73 80 00            MOV EAX,[0x0080732c]
0047E8AA  3B C3                     CMP EAX,EBX
0047E8AC  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0047E8AF  66 89 55 E4               MOV word ptr [EBP + -0x1c],DX
0047E8B3  0F 85 C6 00 00 00         JNZ 0x0047e97f
0047E8B9  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0047E8BF  6A 00                     PUSH 0x0
0047E8C1  6A 00                     PUSH 0x0
0047E8C3  8D B8 39 30 00 00         LEA EDI,[EAX + 0x3039]
0047E8C9  6A FF                     PUSH -0x1
0047E8CB  8B CF                     MOV ECX,EDI
0047E8CD  89 7E 1C                  MOV dword ptr [ESI + 0x1c],EDI
0047E8D0  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
0047E8D6  6A 00                     PUSH 0x0
0047E8D8  6A 00                     PUSH 0x0
0047E8DA  8D 99 39 30 00 00         LEA EBX,[ECX + 0x3039]
0047E8E0  6A 00                     PUSH 0x0
0047E8E2  8B D3                     MOV EDX,EBX
0047E8E4  89 5E 1C                  MOV dword ptr [ESI + 0x1c],EBX
0047E8E7  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0047E8ED  6A 00                     PUSH 0x0
0047E8EF  6A 00                     PUSH 0x0
0047E8F1  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0047E8F7  6A 00                     PUSH 0x0
0047E8F9  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0047E8FC  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0047E8FF  D9 46 70                  FLD float ptr [ESI + 0x70]
0047E902  D8 0D 04 07 79 00         FMUL float ptr [0x00790704]
0047E908  E8 7B F9 2A 00            CALL 0x0072e288
0047E90D  0F BF C8                  MOVSX ECX,AX
0047E910  8B C7                     MOV EAX,EDI
0047E912  33 D2                     XOR EDX,EDX
0047E914  C1 E8 10                  SHR EAX,0x10
0047E917  BF 07 00 00 00            MOV EDI,0x7
0047E91C  F7 F7                     DIV EDI
0047E91E  0F BF 45 E4               MOVSX EAX,word ptr [EBP + -0x1c]
0047E922  03 CA                     ADD ECX,EDX
0047E924  0F BF 56 45               MOVSX EDX,word ptr [ESI + 0x45]
0047E928  03 CA                     ADD ECX,EDX
0047E92A  33 D2                     XOR EDX,EDX
0047E92C  8D 4C 01 FD               LEA ECX,[ECX + EAX*0x1 + -0x3]
0047E930  8B C3                     MOV EAX,EBX
0047E932  51                        PUSH ECX
0047E933  8B CF                     MOV ECX,EDI
0047E935  C1 E8 10                  SHR EAX,0x10
0047E938  F7 F1                     DIV ECX
0047E93A  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
0047E93E  0F BF 4D E2               MOVSX ECX,word ptr [EBP + -0x1e]
0047E942  03 D0                     ADD EDX,EAX
0047E944  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0047E947  2B D1                     SUB EDX,ECX
0047E949  8B CF                     MOV ECX,EDI
0047E94B  83 EA 03                  SUB EDX,0x3
0047E94E  52                        PUSH EDX
0047E94F  33 D2                     XOR EDX,EDX
0047E951  C1 E8 10                  SHR EAX,0x10
0047E954  F7 F1                     DIV ECX
0047E956  0F BF 46 41               MOVSX EAX,word ptr [ESI + 0x41]
0047E95A  0F BF 4D E0               MOVSX ECX,word ptr [EBP + -0x20]
0047E95E  03 D0                     ADD EDX,EAX
0047E960  8D 54 0A FD               LEA EDX,[EDX + ECX*0x1 + -0x3]
0047E964  8B 0D 7C 2A 80 00         MOV ECX,dword ptr [0x00802a7c]
0047E96A  52                        PUSH EDX
0047E96B  57                        PUSH EDI
0047E96C  6A 02                     PUSH 0x2
0047E96E  6A 01                     PUSH 0x1
0047E970  E8 BE 2A F8 FF            CALL 0x00401433
0047E975  BB 01 00 00 00            MOV EBX,0x1
0047E97A  E9 A6 00 00 00            JMP 0x0047ea25
LAB_0047e97f:
0047E97F  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0047E985  05 39 30 00 00            ADD EAX,0x3039
0047E98A  BB 07 00 00 00            MOV EBX,0x7
0047E98F  8B C8                     MOV ECX,EAX
0047E991  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0047E994  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
0047E99A  81 C1 39 30 00 00         ADD ECX,0x3039
0047E9A0  6A 00                     PUSH 0x0
0047E9A2  8B D1                     MOV EDX,ECX
0047E9A4  89 4E 1C                  MOV dword ptr [ESI + 0x1c],ECX
0047E9A7  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0047E9AD  C1 E8 10                  SHR EAX,0x10
0047E9B0  8D BA 39 30 00 00         LEA EDI,[EDX + 0x3039]
0047E9B6  33 D2                     XOR EDX,EDX
0047E9B8  F7 F3                     DIV EBX
0047E9BA  89 7E 1C                  MOV dword ptr [ESI + 0x1c],EDI
0047E9BD  6A 00                     PUSH 0x0
0047E9BF  0F BF 46 45               MOVSX EAX,word ptr [ESI + 0x45]
0047E9C3  6A FF                     PUSH -0x1
0047E9C5  6A 00                     PUSH 0x0
0047E9C7  6A 00                     PUSH 0x0
0047E9C9  6A 00                     PUSH 0x0
0047E9CB  6A 00                     PUSH 0x0
0047E9CD  6A 00                     PUSH 0x0
0047E9CF  6A 00                     PUSH 0x0
0047E9D1  03 D0                     ADD EDX,EAX
0047E9D3  0F BF 45 E4               MOVSX EAX,word ptr [EBP + -0x1c]
0047E9D7  8D 54 02 FD               LEA EDX,[EDX + EAX*0x1 + -0x3]
0047E9DB  8B C1                     MOV EAX,ECX
0047E9DD  52                        PUSH EDX
0047E9DE  33 D2                     XOR EDX,EDX
0047E9E0  C1 E8 10                  SHR EAX,0x10
0047E9E3  8B CB                     MOV ECX,EBX
0047E9E5  F7 F1                     DIV ECX
0047E9E7  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
0047E9EB  0F BF 4D E2               MOVSX ECX,word ptr [EBP + -0x1e]
0047E9EF  03 D0                     ADD EDX,EAX
0047E9F1  8B C7                     MOV EAX,EDI
0047E9F3  2B D1                     SUB EDX,ECX
0047E9F5  8B CB                     MOV ECX,EBX
0047E9F7  83 EA 03                  SUB EDX,0x3
0047E9FA  52                        PUSH EDX
0047E9FB  33 D2                     XOR EDX,EDX
0047E9FD  C1 E8 10                  SHR EAX,0x10
0047EA00  F7 F1                     DIV ECX
0047EA02  0F BF 46 41               MOVSX EAX,word ptr [ESI + 0x41]
0047EA06  0F BF 4D E0               MOVSX ECX,word ptr [EBP + -0x20]
0047EA0A  03 D0                     ADD EDX,EAX
0047EA0C  8D 54 0A FD               LEA EDX,[EDX + ECX*0x1 + -0x3]
0047EA10  8B 0D 7C 2A 80 00         MOV ECX,dword ptr [0x00802a7c]
0047EA16  52                        PUSH EDX
0047EA17  53                        PUSH EBX
0047EA18  BB 01 00 00 00            MOV EBX,0x1
0047EA1D  6A 02                     PUSH 0x2
0047EA1F  53                        PUSH EBX
0047EA20  E8 0E 2A F8 FF            CALL 0x00401433
LAB_0047ea25:
0047EA25  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0047EA28  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0047EA2B  33 C9                     XOR ECX,ECX
0047EA2D  40                        INC EAX
0047EA2E  8A 8E BF 02 00 00         MOV CL,byte ptr [ESI + 0x2bf]
0047EA34  83 C7 06                  ADD EDI,0x6
0047EA37  3B C1                     CMP EAX,ECX
0047EA39  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0047EA3C  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0047EA3F  0F 8C 33 FE FF FF         JL 0x0047e878
0047EA45  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
LAB_0047ea48:
0047EA48  83 F8 FF                  CMP EAX,-0x1
0047EA4B  0F 84 F9 00 00 00         JZ 0x0047eb4a
0047EA51  85 C0                     TEST EAX,EAX
0047EA53  0F 85 41 07 00 00         JNZ 0x0047f19a
0047EA59  66 8B 86 A9 06 00 00      MOV AX,word ptr [ESI + 0x6a9]
0047EA60  66 8B 8E AD 06 00 00      MOV CX,word ptr [ESI + 0x6ad]
0047EA67  66 8B 96 AB 06 00 00      MOV DX,word ptr [ESI + 0x6ab]
0047EA6E  66 85 C0                  TEST AX,AX
0047EA71  7C 50                     JL 0x0047eac3
0047EA73  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0047EA7A  66 3B C7                  CMP AX,DI
0047EA7D  7D 44                     JGE 0x0047eac3
0047EA7F  66 85 D2                  TEST DX,DX
0047EA82  7C 3F                     JL 0x0047eac3
0047EA84  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0047EA8B  7D 36                     JGE 0x0047eac3
0047EA8D  66 85 C9                  TEST CX,CX
0047EA90  7C 31                     JL 0x0047eac3
0047EA92  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0047EA99  7D 28                     JGE 0x0047eac3
0047EA9B  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0047EAA2  0F BF C9                  MOVSX ECX,CX
0047EAA5  0F BF D2                  MOVSX EDX,DX
0047EAA8  0F AF CB                  IMUL ECX,EBX
0047EAAB  0F BF FF                  MOVSX EDI,DI
0047EAAE  0F AF D7                  IMUL EDX,EDI
0047EAB1  0F BF C0                  MOVSX EAX,AX
0047EAB4  03 CA                     ADD ECX,EDX
0047EAB6  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0047EABC  03 C8                     ADD ECX,EAX
0047EABE  8B 0C CA                  MOV ECX,dword ptr [EDX + ECX*0x8]
0047EAC1  EB 02                     JMP 0x0047eac5
LAB_0047eac3:
0047EAC3  33 C9                     XOR ECX,ECX
LAB_0047eac5:
0047EAC5  33 FF                     XOR EDI,EDI
0047EAC7  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0047EACA  3B CF                     CMP ECX,EDI
0047EACC  74 37                     JZ 0x0047eb05
0047EACE  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
0047EAD1  8B 96 AF 06 00 00         MOV EDX,dword ptr [ESI + 0x6af]
0047EAD7  3B C2                     CMP EAX,EDX
0047EAD9  75 2A                     JNZ 0x0047eb05
0047EADB  8B 51 24                  MOV EDX,dword ptr [ECX + 0x24]
0047EADE  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0047EAE1  3B D0                     CMP EDX,EAX
0047EAE3  75 20                     JNZ 0x0047eb05
0047EAE5  E8 30 29 F8 FF            CALL 0x0040141a
0047EAEA  85 C0                     TEST EAX,EAX
0047EAEC  74 17                     JZ 0x0047eb05
0047EAEE  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0047EAF1  E8 47 4C F8 FF            CALL 0x0040373d
0047EAF6  C7 86 C3 06 00 00 04 00 00 00  MOV dword ptr [ESI + 0x6c3],0x4
0047EB00  E9 95 06 00 00            JMP 0x0047f19a
LAB_0047eb05:
0047EB05  8B 8E AF 06 00 00         MOV ECX,dword ptr [ESI + 0x6af]
0047EB0B  8D 45 08                  LEA EAX,[EBP + 0x8]
0047EB0E  50                        PUSH EAX
0047EB0F  51                        PUSH ECX
0047EB10  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0047EB16  E8 B5 77 26 00            CALL 0x006e62d0
0047EB1B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0047EB1E  3B C7                     CMP EAX,EDI
0047EB20  74 13                     JZ 0x0047eb35
0047EB22  8B 90 B0 04 00 00         MOV EDX,dword ptr [EAX + 0x4b0]
0047EB28  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
0047EB2B  3B D1                     CMP EDX,ECX
0047EB2D  75 06                     JNZ 0x0047eb35
0047EB2F  89 B8 B0 04 00 00         MOV dword ptr [EAX + 0x4b0],EDI
LAB_0047eb35:
0047EB35  C7 86 C3 06 00 00 05 00 00 00  MOV dword ptr [ESI + 0x6c3],0x5
0047EB3F  89 BE C7 06 00 00         MOV dword ptr [ESI + 0x6c7],EDI
0047EB45  E9 50 06 00 00            JMP 0x0047f19a
LAB_0047eb4a:
0047EB4A  68 84 B7 7A 00            PUSH 0x7ab784
0047EB4F  68 CC 4C 7A 00            PUSH 0x7a4ccc
0047EB54  6A 00                     PUSH 0x0
0047EB56  6A 00                     PUSH 0x0
0047EB58  68 53 3A 00 00            PUSH 0x3a53
0047EB5D  68 3C 9D 7A 00            PUSH 0x7a9d3c
0047EB62  E8 69 E9 22 00            CALL 0x006ad4d0
0047EB67  83 C4 18                  ADD ESP,0x18
0047EB6A  85 C0                     TEST EAX,EAX
0047EB6C  74 01                     JZ 0x0047eb6f
0047EB6E  CC                        INT3
LAB_0047eb6f:
0047EB6F  68 54 3A 00 00            PUSH 0x3a54
0047EB74  E9 5C 02 00 00            JMP 0x0047edd5
LAB_0047eb79:
0047EB79  83 F8 04                  CMP EAX,0x4
0047EB7C  0F 85 8C 01 00 00         JNZ 0x0047ed0e
0047EB82  66 8B 86 A9 06 00 00      MOV AX,word ptr [ESI + 0x6a9]
0047EB89  66 8B 8E AD 06 00 00      MOV CX,word ptr [ESI + 0x6ad]
0047EB90  66 8B 96 AB 06 00 00      MOV DX,word ptr [ESI + 0x6ab]
0047EB97  66 85 C0                  TEST AX,AX
0047EB9A  7C 55                     JL 0x0047ebf1
0047EB9C  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0047EBA3  66 3B C7                  CMP AX,DI
0047EBA6  7D 49                     JGE 0x0047ebf1
0047EBA8  66 85 D2                  TEST DX,DX
0047EBAB  7C 44                     JL 0x0047ebf1
0047EBAD  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0047EBB4  7D 3B                     JGE 0x0047ebf1
0047EBB6  66 85 C9                  TEST CX,CX
0047EBB9  7C 36                     JL 0x0047ebf1
0047EBBB  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0047EBC2  7D 2D                     JGE 0x0047ebf1
0047EBC4  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0047EBCB  0F BF C9                  MOVSX ECX,CX
0047EBCE  0F BF D2                  MOVSX EDX,DX
0047EBD1  0F AF CB                  IMUL ECX,EBX
0047EBD4  0F BF FF                  MOVSX EDI,DI
0047EBD7  0F AF D7                  IMUL EDX,EDI
0047EBDA  0F BF C0                  MOVSX EAX,AX
0047EBDD  03 CA                     ADD ECX,EDX
0047EBDF  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0047EBE5  03 C8                     ADD ECX,EAX
0047EBE7  BB 01 00 00 00            MOV EBX,0x1
0047EBEC  8B 0C CA                  MOV ECX,dword ptr [EDX + ECX*0x8]
0047EBEF  EB 02                     JMP 0x0047ebf3
LAB_0047ebf1:
0047EBF1  33 C9                     XOR ECX,ECX
LAB_0047ebf3:
0047EBF3  33 FF                     XOR EDI,EDI
0047EBF5  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0047EBF8  3B CF                     CMP ECX,EDI
0047EBFA  74 5D                     JZ 0x0047ec59
0047EBFC  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
0047EBFF  8B 96 AF 06 00 00         MOV EDX,dword ptr [ESI + 0x6af]
0047EC05  3B C2                     CMP EAX,EDX
0047EC07  75 50                     JNZ 0x0047ec59
0047EC09  8B 51 24                  MOV EDX,dword ptr [ECX + 0x24]
0047EC0C  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0047EC0F  3B D0                     CMP EDX,EAX
0047EC11  75 46                     JNZ 0x0047ec59
0047EC13  E8 02 28 F8 FF            CALL 0x0040141a
0047EC18  85 C0                     TEST EAX,EAX
0047EC1A  74 3D                     JZ 0x0047ec59
0047EC1C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0047EC1F  B8 06 00 00 00            MOV EAX,0x6
0047EC24  39 81 45 02 00 00         CMP dword ptr [ECX + 0x245],EAX
0047EC2A  0F 85 6A 05 00 00         JNZ 0x0047f19a
0047EC30  83 BE B9 06 00 00 01      CMP dword ptr [ESI + 0x6b9],0x1
0047EC37  75 15                     JNZ 0x0047ec4e
0047EC39  C7 86 C3 06 00 00 05 00 00 00  MOV dword ptr [ESI + 0x6c3],0x5
0047EC43  89 BE C7 06 00 00         MOV dword ptr [ESI + 0x6c7],EDI
0047EC49  E9 4C 05 00 00            JMP 0x0047f19a
LAB_0047ec4e:
0047EC4E  89 86 C3 06 00 00         MOV dword ptr [ESI + 0x6c3],EAX
0047EC54  E9 41 05 00 00            JMP 0x0047f19a
LAB_0047ec59:
0047EC59  8B 86 AF 06 00 00         MOV EAX,dword ptr [ESI + 0x6af]
0047EC5F  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0047EC65  8D 55 08                  LEA EDX,[EBP + 0x8]
0047EC68  52                        PUSH EDX
0047EC69  50                        PUSH EAX
0047EC6A  E8 61 76 26 00            CALL 0x006e62d0
0047EC6F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0047EC72  3B C7                     CMP EAX,EDI
0047EC74  74 13                     JZ 0x0047ec89
0047EC76  8B 88 B0 04 00 00         MOV ECX,dword ptr [EAX + 0x4b0]
0047EC7C  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0047EC7F  3B CA                     CMP ECX,EDX
0047EC81  75 06                     JNZ 0x0047ec89
0047EC83  89 B8 B0 04 00 00         MOV dword ptr [EAX + 0x4b0],EDI
LAB_0047ec89:
0047EC89  39 9E B9 06 00 00         CMP dword ptr [ESI + 0x6b9],EBX
0047EC8F  0F 84 A0 FE FF FF         JZ 0x0047eb35
0047EC95  66 8B 86 AD 06 00 00      MOV AX,word ptr [ESI + 0x6ad]
0047EC9C  66 8B 8E AB 06 00 00      MOV CX,word ptr [ESI + 0x6ab]
0047ECA3  8D BE B7 06 00 00         LEA EDI,[ESI + 0x6b7]
0047ECA9  8D 9E B5 06 00 00         LEA EBX,[ESI + 0x6b5]
0047ECAF  57                        PUSH EDI
0047ECB0  8D 96 B3 06 00 00         LEA EDX,[ESI + 0x6b3]
0047ECB6  53                        PUSH EBX
0047ECB7  66 40                     INC AX
0047ECB9  52                        PUSH EDX
0047ECBA  66 8B 96 A9 06 00 00      MOV DX,word ptr [ESI + 0x6a9]
0047ECC1  6A 01                     PUSH 0x1
0047ECC3  50                        PUSH EAX
0047ECC4  51                        PUSH ECX
0047ECC5  52                        PUSH EDX
0047ECC6  50                        PUSH EAX
0047ECC7  51                        PUSH ECX
0047ECC8  52                        PUSH EDX
0047ECC9  8B CE                     MOV ECX,ESI
0047ECCB  C7 86 C3 06 00 00 06 00 00 00  MOV dword ptr [ESI + 0x6c3],0x6
0047ECD5  E8 2E 5C F8 FF            CALL 0x00404908
0047ECDA  0F BF 17                  MOVSX EDX,word ptr [EDI]
0047ECDD  0F BF 03                  MOVSX EAX,word ptr [EBX]
0047ECE0  0F BF 8E B3 06 00 00      MOVSX ECX,word ptr [ESI + 0x6b3]
0047ECE7  52                        PUSH EDX
0047ECE8  50                        PUSH EAX
0047ECE9  51                        PUSH ECX
0047ECEA  8B CE                     MOV ECX,ESI
0047ECEC  E8 7A 62 F8 FF            CALL 0x00404f6b
0047ECF1  6A 00                     PUSH 0x0
0047ECF3  8B CE                     MOV ECX,ESI
0047ECF5  E8 3A 4E F8 FF            CALL 0x00403b34
0047ECFA  83 F8 FF                  CMP EAX,-0x1
0047ECFD  0F 85 97 04 00 00         JNZ 0x0047f19a
0047ED03  0B C0                     OR EAX,EAX
0047ED05  5F                        POP EDI
0047ED06  5E                        POP ESI
0047ED07  5B                        POP EBX
0047ED08  8B E5                     MOV ESP,EBP
0047ED0A  5D                        POP EBP
0047ED0B  C2 04 00                  RET 0x4
LAB_0047ed0e:
0047ED0E  83 F8 05                  CMP EAX,0x5
0047ED11  0F 85 05 04 00 00         JNZ 0x0047f11c
0047ED17  8B 86 C7 06 00 00         MOV EAX,dword ptr [ESI + 0x6c7]
0047ED1D  85 C0                     TEST EAX,EAX
0047ED1F  75 53                     JNZ 0x0047ed74
0047ED21  66 8B 8E B7 06 00 00      MOV CX,word ptr [ESI + 0x6b7]
0047ED28  66 8B 96 B5 06 00 00      MOV DX,word ptr [ESI + 0x6b5]
0047ED2F  66 69 C9 C8 00            IMUL CX,CX,0xc8
0047ED34  66 69 D2 C9 00            IMUL DX,DX,0xc9
0047ED39  83 C1 64                  ADD ECX,0x64
0047ED3C  8B 06                     MOV EAX,dword ptr [ESI]
0047ED3E  51                        PUSH ECX
0047ED3F  66 8B 8E B3 06 00 00      MOV CX,word ptr [ESI + 0x6b3]
0047ED46  66 69 C9 C9 00            IMUL CX,CX,0xc9
0047ED4B  83 C2 64                  ADD EDX,0x64
0047ED4E  83 C1 64                  ADD ECX,0x64
0047ED51  52                        PUSH EDX
0047ED52  66 8B 56 45               MOV DX,word ptr [ESI + 0x45]
0047ED56  51                        PUSH ECX
0047ED57  66 8B 4E 43               MOV CX,word ptr [ESI + 0x43]
0047ED5B  52                        PUSH EDX
0047ED5C  66 8B 56 41               MOV DX,word ptr [ESI + 0x41]
0047ED60  51                        PUSH ECX
0047ED61  52                        PUSH EDX
0047ED62  8B CE                     MOV ECX,ESI
0047ED64  FF 50 10                  CALL dword ptr [EAX + 0x10]
0047ED67  66 89 86 BD 06 00 00      MOV word ptr [ESI + 0x6bd],AX
0047ED6E  89 9E C7 06 00 00         MOV dword ptr [ESI + 0x6c7],EBX
LAB_0047ed74:
0047ED74  39 9E C7 06 00 00         CMP dword ptr [ESI + 0x6c7],EBX
0047ED7A  75 7C                     JNZ 0x0047edf8
0047ED7C  66 8B 86 BD 06 00 00      MOV AX,word ptr [ESI + 0x6bd]
0047ED83  8B CE                     MOV ECX,ESI
0047ED85  50                        PUSH EAX
0047ED86  E8 27 43 F8 FF            CALL 0x004030b2
0047ED8B  50                        PUSH EAX
0047ED8C  8B CE                     MOV ECX,ESI
0047ED8E  E8 69 35 F8 FF            CALL 0x004022fc
0047ED93  83 F8 FF                  CMP EAX,-0x1
0047ED96  74 13                     JZ 0x0047edab
0047ED98  85 C0                     TEST EAX,EAX
0047ED9A  75 5C                     JNZ 0x0047edf8
0047ED9C  C7 86 C7 06 00 00 02 00 00 00  MOV dword ptr [ESI + 0x6c7],0x2
0047EDA6  E9 EF 03 00 00            JMP 0x0047f19a
LAB_0047edab:
0047EDAB  68 5C B7 7A 00            PUSH 0x7ab75c
0047EDB0  68 CC 4C 7A 00            PUSH 0x7a4ccc
0047EDB5  6A 00                     PUSH 0x0
0047EDB7  6A 00                     PUSH 0x0
0047EDB9  68 A0 3A 00 00            PUSH 0x3aa0
0047EDBE  68 3C 9D 7A 00            PUSH 0x7a9d3c
0047EDC3  E8 08 E7 22 00            CALL 0x006ad4d0
0047EDC8  83 C4 18                  ADD ESP,0x18
0047EDCB  85 C0                     TEST EAX,EAX
0047EDCD  74 01                     JZ 0x0047edd0
0047EDCF  CC                        INT3
LAB_0047edd0:
0047EDD0  68 A1 3A 00 00            PUSH 0x3aa1
LAB_0047edd5:
0047EDD5  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0047EDDA  68 3C 9D 7A 00            PUSH 0x7a9d3c
0047EDDF  50                        PUSH EAX
0047EDE0  68 FF FF 00 00            PUSH 0xffff
0047EDE5  E8 56 70 22 00            CALL 0x006a5e40
0047EDEA  B8 FF FF 00 00            MOV EAX,0xffff
0047EDEF  5F                        POP EDI
0047EDF0  5E                        POP ESI
0047EDF1  5B                        POP EBX
0047EDF2  8B E5                     MOV ESP,EBP
0047EDF4  5D                        POP EBP
0047EDF5  C2 04 00                  RET 0x4
LAB_0047edf8:
0047EDF8  83 BE C7 06 00 00 02      CMP dword ptr [ESI + 0x6c7],0x2
0047EDFF  75 50                     JNZ 0x0047ee51
0047EE01  8A 4E 61                  MOV CL,byte ptr [ESI + 0x61]
0047EE04  66 8B 96 B7 06 00 00      MOV DX,word ptr [ESI + 0x6b7]
0047EE0B  66 8B 86 B5 06 00 00      MOV AX,word ptr [ESI + 0x6b5]
0047EE12  51                        PUSH ECX
0047EE13  66 8B 8E B3 06 00 00      MOV CX,word ptr [ESI + 0x6b3]
0047EE1A  66 69 D2 C8 00            IMUL DX,DX,0xc8
0047EE1F  66 69 C0 C9 00            IMUL AX,AX,0xc9
0047EE24  66 69 C9 C9 00            IMUL CX,CX,0xc9
0047EE29  83 C2 64                  ADD EDX,0x64
0047EE2C  83 C0 64                  ADD EAX,0x64
0047EE2F  52                        PUSH EDX
0047EE30  66 8B 56 45               MOV DX,word ptr [ESI + 0x45]
0047EE34  83 C1 64                  ADD ECX,0x64
0047EE37  50                        PUSH EAX
0047EE38  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
0047EE3C  51                        PUSH ECX
0047EE3D  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
0047EE41  52                        PUSH EDX
0047EE42  50                        PUSH EAX
0047EE43  51                        PUSH ECX
0047EE44  8B CE                     MOV ECX,ESI
0047EE46  E8 0A 36 F8 FF            CALL 0x00402455
0047EE4B  89 BE C7 06 00 00         MOV dword ptr [ESI + 0x6c7],EDI
LAB_0047ee51:
0047EE51  39 BE C7 06 00 00         CMP dword ptr [ESI + 0x6c7],EDI
0047EE57  0F 85 A3 02 00 00         JNZ 0x0047f100
0047EE5D  8D 55 EC                  LEA EDX,[EBP + -0x14]
0047EE60  8D 45 F0                  LEA EAX,[EBP + -0x10]
0047EE63  52                        PUSH EDX
0047EE64  50                        PUSH EAX
0047EE65  8B CE                     MOV ECX,ESI
0047EE67  E8 DB 39 F8 FF            CALL 0x00402847
0047EE6C  8A 8E BF 02 00 00         MOV CL,byte ptr [ESI + 0x2bf]
0047EE72  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0047EE75  84 C9                     TEST CL,CL
0047EE77  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0047EE7E  0F 86 AC 01 00 00         JBE 0x0047f030
0047EE84  8D 8E B3 02 00 00         LEA ECX,[ESI + 0x2b3]
0047EE8A  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_0047ee8d:
0047EE8D  66 8B 56 6C               MOV DX,word ptr [ESI + 0x6c]
0047EE91  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0047EE94  52                        PUSH EDX
0047EE95  8B 10                     MOV EDX,dword ptr [EAX]
0047EE97  83 EC 08                  SUB ESP,0x8
0047EE9A  8B CC                     MOV ECX,ESP
0047EE9C  66 8B 40 04               MOV AX,word ptr [EAX + 0x4]
0047EEA0  89 11                     MOV dword ptr [ECX],EDX
0047EEA2  66 89 41 04               MOV word ptr [ECX + 0x4],AX
0047EEA6  8D 4D D8                  LEA ECX,[EBP + -0x28]
0047EEA9  51                        PUSH ECX
0047EEAA  8B CE                     MOV ECX,ESI
0047EEAC  E8 7B 45 F8 FF            CALL 0x0040342c
0047EEB1  8B 10                     MOV EDX,dword ptr [EAX]
0047EEB3  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
0047EEB6  66 8B 40 04               MOV AX,word ptr [EAX + 0x4]
0047EEBA  66 89 45 E4               MOV word ptr [EBP + -0x1c],AX
0047EEBE  A1 2C 73 80 00            MOV EAX,[0x0080732c]
0047EEC3  83 F8 01                  CMP EAX,0x1
0047EEC6  0F 85 98 00 00 00         JNZ 0x0047ef64
0047EECC  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
0047EECF  6A 00                     PUSH 0x0
0047EED1  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
0047EED7  6A 00                     PUSH 0x0
0047EED9  6A FF                     PUSH -0x1
0047EEDB  8D B9 39 30 00 00         LEA EDI,[ECX + 0x3039]
0047EEE1  6A 00                     PUSH 0x0
0047EEE3  8B D7                     MOV EDX,EDI
0047EEE5  89 7E 1C                  MOV dword ptr [ESI + 0x1c],EDI
0047EEE8  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0047EEEE  6A 00                     PUSH 0x0
0047EEF0  6A 00                     PUSH 0x0
0047EEF2  8D 9A 39 30 00 00         LEA EBX,[EDX + 0x3039]
0047EEF8  6A 00                     PUSH 0x0
0047EEFA  8B C3                     MOV EAX,EBX
0047EEFC  89 5E 1C                  MOV dword ptr [ESI + 0x1c],EBX
0047EEFF  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0047EF05  05 39 30 00 00            ADD EAX,0x3039
0047EF0A  6A 00                     PUSH 0x0
0047EF0C  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0047EF0F  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0047EF12  D9 46 70                  FLD float ptr [ESI + 0x70]
0047EF15  D8 0D 04 07 79 00         FMUL float ptr [0x00790704]
0047EF1B  6A 00                     PUSH 0x0
0047EF1D  E8 66 F3 2A 00            CALL 0x0072e288
0047EF22  0F BF C8                  MOVSX ECX,AX
0047EF25  8B C7                     MOV EAX,EDI
0047EF27  33 D2                     XOR EDX,EDX
0047EF29  C1 E8 10                  SHR EAX,0x10
0047EF2C  BF 07 00 00 00            MOV EDI,0x7
0047EF31  F7 F7                     DIV EDI
0047EF33  0F BF 45 E4               MOVSX EAX,word ptr [EBP + -0x1c]
0047EF37  03 CA                     ADD ECX,EDX
0047EF39  0F BF 56 45               MOVSX EDX,word ptr [ESI + 0x45]
0047EF3D  03 CA                     ADD ECX,EDX
0047EF3F  33 D2                     XOR EDX,EDX
0047EF41  8D 4C 01 FD               LEA ECX,[ECX + EAX*0x1 + -0x3]
0047EF45  8B C3                     MOV EAX,EBX
0047EF47  51                        PUSH ECX
0047EF48  8B CF                     MOV ECX,EDI
0047EF4A  C1 E8 10                  SHR EAX,0x10
0047EF4D  F7 F1                     DIV ECX
0047EF4F  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
0047EF53  0F BF 4D E2               MOVSX ECX,word ptr [EBP + -0x1e]
0047EF57  03 D0                     ADD EDX,EAX
0047EF59  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0047EF5C  2B D1                     SUB EDX,ECX
0047EF5E  83 EA 03                  SUB EDX,0x3
0047EF61  52                        PUSH EDX
0047EF62  EB 7D                     JMP 0x0047efe1
LAB_0047ef64:
0047EF64  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0047EF67  BB 07 00 00 00            MOV EBX,0x7
0047EF6C  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0047EF72  05 39 30 00 00            ADD EAX,0x3039
0047EF77  6A 00                     PUSH 0x0
0047EF79  8B C8                     MOV ECX,EAX
0047EF7B  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0047EF7E  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
0047EF84  81 C1 39 30 00 00         ADD ECX,0x3039
0047EF8A  6A 00                     PUSH 0x0
0047EF8C  8B D1                     MOV EDX,ECX
0047EF8E  89 4E 1C                  MOV dword ptr [ESI + 0x1c],ECX
0047EF91  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0047EF97  C1 E8 10                  SHR EAX,0x10
0047EF9A  8D BA 39 30 00 00         LEA EDI,[EDX + 0x3039]
0047EFA0  33 D2                     XOR EDX,EDX
0047EFA2  F7 F3                     DIV EBX
0047EFA4  89 7E 1C                  MOV dword ptr [ESI + 0x1c],EDI
0047EFA7  6A FF                     PUSH -0x1
0047EFA9  0F BF 46 45               MOVSX EAX,word ptr [ESI + 0x45]
0047EFAD  6A 00                     PUSH 0x0
0047EFAF  6A 00                     PUSH 0x0
0047EFB1  6A 00                     PUSH 0x0
0047EFB3  6A 00                     PUSH 0x0
0047EFB5  6A 00                     PUSH 0x0
0047EFB7  6A 00                     PUSH 0x0
0047EFB9  03 D0                     ADD EDX,EAX
0047EFBB  0F BF 45 E4               MOVSX EAX,word ptr [EBP + -0x1c]
0047EFBF  8D 54 02 FD               LEA EDX,[EDX + EAX*0x1 + -0x3]
0047EFC3  8B C1                     MOV EAX,ECX
0047EFC5  52                        PUSH EDX
0047EFC6  33 D2                     XOR EDX,EDX
0047EFC8  C1 E8 10                  SHR EAX,0x10
0047EFCB  8B CB                     MOV ECX,EBX
0047EFCD  F7 F1                     DIV ECX
0047EFCF  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
0047EFD3  0F BF 4D E2               MOVSX ECX,word ptr [EBP + -0x1e]
0047EFD7  03 D0                     ADD EDX,EAX
0047EFD9  8B C7                     MOV EAX,EDI
0047EFDB  2B D1                     SUB EDX,ECX
0047EFDD  83 EA 03                  SUB EDX,0x3
0047EFE0  52                        PUSH EDX
LAB_0047efe1:
0047EFE1  C1 E8 10                  SHR EAX,0x10
0047EFE4  33 D2                     XOR EDX,EDX
0047EFE6  B9 07 00 00 00            MOV ECX,0x7
0047EFEB  F7 F1                     DIV ECX
0047EFED  0F BF 46 41               MOVSX EAX,word ptr [ESI + 0x41]
0047EFF1  0F BF 4D E0               MOVSX ECX,word ptr [EBP + -0x20]
0047EFF5  03 D0                     ADD EDX,EAX
0047EFF7  8D 54 0A FD               LEA EDX,[EDX + ECX*0x1 + -0x3]
0047EFFB  8B 0D 7C 2A 80 00         MOV ECX,dword ptr [0x00802a7c]
0047F001  52                        PUSH EDX
0047F002  6A 07                     PUSH 0x7
0047F004  6A 02                     PUSH 0x2
0047F006  6A 01                     PUSH 0x1
0047F008  E8 26 24 F8 FF            CALL 0x00401433
0047F00D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0047F010  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0047F013  33 C9                     XOR ECX,ECX
0047F015  40                        INC EAX
0047F016  8A 8E BF 02 00 00         MOV CL,byte ptr [ESI + 0x2bf]
0047F01C  83 C7 06                  ADD EDI,0x6
0047F01F  3B C1                     CMP EAX,ECX
0047F021  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0047F024  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0047F027  0F 8C 60 FE FF FF         JL 0x0047ee8d
0047F02D  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
LAB_0047f030:
0047F030  83 F8 FF                  CMP EAX,-0x1
0047F033  74 7D                     JZ 0x0047f0b2
0047F035  85 C0                     TEST EAX,EAX
0047F037  0F 85 C3 00 00 00         JNZ 0x0047f100
0047F03D  66 8B 86 AD 06 00 00      MOV AX,word ptr [ESI + 0x6ad]
0047F044  66 8B 8E AB 06 00 00      MOV CX,word ptr [ESI + 0x6ab]
0047F04B  8D BE B7 06 00 00         LEA EDI,[ESI + 0x6b7]
0047F051  8D 9E B5 06 00 00         LEA EBX,[ESI + 0x6b5]
0047F057  57                        PUSH EDI
0047F058  8D 96 B3 06 00 00         LEA EDX,[ESI + 0x6b3]
0047F05E  53                        PUSH EBX
0047F05F  66 40                     INC AX
0047F061  52                        PUSH EDX
0047F062  66 8B 96 A9 06 00 00      MOV DX,word ptr [ESI + 0x6a9]
0047F069  6A 01                     PUSH 0x1
0047F06B  50                        PUSH EAX
0047F06C  51                        PUSH ECX
0047F06D  52                        PUSH EDX
0047F06E  50                        PUSH EAX
0047F06F  51                        PUSH ECX
0047F070  52                        PUSH EDX
0047F071  8B CE                     MOV ECX,ESI
0047F073  C7 86 C3 06 00 00 06 00 00 00  MOV dword ptr [ESI + 0x6c3],0x6
0047F07D  E8 86 58 F8 FF            CALL 0x00404908
0047F082  0F BF 17                  MOVSX EDX,word ptr [EDI]
0047F085  0F BF 03                  MOVSX EAX,word ptr [EBX]
0047F088  0F BF 8E B3 06 00 00      MOVSX ECX,word ptr [ESI + 0x6b3]
0047F08F  52                        PUSH EDX
0047F090  50                        PUSH EAX
0047F091  51                        PUSH ECX
0047F092  8B CE                     MOV ECX,ESI
0047F094  E8 D2 5E F8 FF            CALL 0x00404f6b
0047F099  6A 00                     PUSH 0x0
0047F09B  8B CE                     MOV ECX,ESI
0047F09D  E8 92 4A F8 FF            CALL 0x00403b34
0047F0A2  83 F8 FF                  CMP EAX,-0x1
0047F0A5  75 59                     JNZ 0x0047f100
0047F0A7  0B C0                     OR EAX,EAX
0047F0A9  5F                        POP EDI
0047F0AA  5E                        POP ESI
0047F0AB  5B                        POP EBX
0047F0AC  8B E5                     MOV ESP,EBP
0047F0AE  5D                        POP EBP
0047F0AF  C2 04 00                  RET 0x4
LAB_0047f0b2:
0047F0B2  68 34 B7 7A 00            PUSH 0x7ab734
0047F0B7  68 CC 4C 7A 00            PUSH 0x7a4ccc
0047F0BC  6A 00                     PUSH 0x0
0047F0BE  6A 00                     PUSH 0x0
0047F0C0  68 C6 3A 00 00            PUSH 0x3ac6
0047F0C5  68 3C 9D 7A 00            PUSH 0x7a9d3c
0047F0CA  E8 01 E4 22 00            CALL 0x006ad4d0
0047F0CF  83 C4 18                  ADD ESP,0x18
0047F0D2  85 C0                     TEST EAX,EAX
0047F0D4  74 01                     JZ 0x0047f0d7
0047F0D6  CC                        INT3
LAB_0047f0d7:
0047F0D7  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0047F0DD  68 C7 3A 00 00            PUSH 0x3ac7
0047F0E2  68 3C 9D 7A 00            PUSH 0x7a9d3c
0047F0E7  52                        PUSH EDX
0047F0E8  68 FF FF 00 00            PUSH 0xffff
0047F0ED  E8 4E 6D 22 00            CALL 0x006a5e40
0047F0F2  B8 FF FF 00 00            MOV EAX,0xffff
0047F0F7  5F                        POP EDI
0047F0F8  5E                        POP ESI
0047F0F9  5B                        POP EBX
0047F0FA  8B E5                     MOV ESP,EBP
0047F0FC  5D                        POP EBP
0047F0FD  C2 04 00                  RET 0x4
LAB_0047f100:
0047F100  8B 06                     MOV EAX,dword ptr [ESI]
0047F102  8B CE                     MOV ECX,ESI
0047F104  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
0047F10A  F7 D8                     NEG EAX
0047F10C  1B C0                     SBB EAX,EAX
0047F10E  24 FD                     AND AL,0xfd
0047F110  83 C0 02                  ADD EAX,0x2
0047F113  5F                        POP EDI
0047F114  5E                        POP ESI
0047F115  5B                        POP EBX
0047F116  8B E5                     MOV ESP,EBP
0047F118  5D                        POP EBP
0047F119  C2 04 00                  RET 0x4
LAB_0047f11c:
0047F11C  83 F8 06                  CMP EAX,0x6
0047F11F  0F 85 F6 00 00 00         JNZ 0x0047f21b
0047F125  6A 02                     PUSH 0x2
0047F127  8B CE                     MOV ECX,ESI
0047F129  E8 06 4A F8 FF            CALL 0x00403b34
0047F12E  83 F8 FF                  CMP EAX,-0x1
0047F131  0F 84 96 00 00 00         JZ 0x0047f1cd
0047F137  85 C0                     TEST EAX,EAX
0047F139  74 7B                     JZ 0x0047f1b6
0047F13B  3B C7                     CMP EAX,EDI
0047F13D  75 5B                     JNZ 0x0047f19a
0047F13F  66 8B 86 AD 06 00 00      MOV AX,word ptr [ESI + 0x6ad]
0047F146  66 8B 8E AB 06 00 00      MOV CX,word ptr [ESI + 0x6ab]
0047F14D  8D BE B7 06 00 00         LEA EDI,[ESI + 0x6b7]
0047F153  8D 9E B5 06 00 00         LEA EBX,[ESI + 0x6b5]
0047F159  57                        PUSH EDI
0047F15A  8D 96 B3 06 00 00         LEA EDX,[ESI + 0x6b3]
0047F160  53                        PUSH EBX
0047F161  66 40                     INC AX
0047F163  52                        PUSH EDX
0047F164  66 8B 96 A9 06 00 00      MOV DX,word ptr [ESI + 0x6a9]
0047F16B  6A 01                     PUSH 0x1
0047F16D  50                        PUSH EAX
0047F16E  51                        PUSH ECX
0047F16F  52                        PUSH EDX
0047F170  50                        PUSH EAX
0047F171  51                        PUSH ECX
0047F172  52                        PUSH EDX
0047F173  8B CE                     MOV ECX,ESI
0047F175  E8 8E 57 F8 FF            CALL 0x00404908
0047F17A  0F BF 0F                  MOVSX ECX,word ptr [EDI]
0047F17D  0F BF 13                  MOVSX EDX,word ptr [EBX]
0047F180  0F BF 86 B3 06 00 00      MOVSX EAX,word ptr [ESI + 0x6b3]
0047F187  51                        PUSH ECX
0047F188  52                        PUSH EDX
0047F189  50                        PUSH EAX
0047F18A  8B CE                     MOV ECX,ESI
0047F18C  E8 DA 5D F8 FF            CALL 0x00404f6b
0047F191  6A 00                     PUSH 0x0
0047F193  8B CE                     MOV ECX,ESI
0047F195  E8 9A 49 F8 FF            CALL 0x00403b34
LAB_0047f19a:
0047F19A  8B 16                     MOV EDX,dword ptr [ESI]
0047F19C  8B CE                     MOV ECX,ESI
0047F19E  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
0047F1A4  F7 D8                     NEG EAX
0047F1A6  1B C0                     SBB EAX,EAX
0047F1A8  24 FD                     AND AL,0xfd
0047F1AA  83 C0 02                  ADD EAX,0x2
0047F1AD  5F                        POP EDI
0047F1AE  5E                        POP ESI
0047F1AF  5B                        POP EBX
0047F1B0  8B E5                     MOV ESP,EBP
0047F1B2  5D                        POP EBP
0047F1B3  C2 04 00                  RET 0x4
LAB_0047f1b6:
0047F1B6  8B 06                     MOV EAX,dword ptr [ESI]
0047F1B8  8B CE                     MOV ECX,ESI
0047F1BA  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
0047F1C0  F7 D8                     NEG EAX
0047F1C2  1B C0                     SBB EAX,EAX
0047F1C4  5F                        POP EDI
0047F1C5  5E                        POP ESI
0047F1C6  5B                        POP EBX
0047F1C7  8B E5                     MOV ESP,EBP
0047F1C9  5D                        POP EBP
0047F1CA  C2 04 00                  RET 0x4
LAB_0047f1cd:
0047F1CD  68 04 B7 7A 00            PUSH 0x7ab704
0047F1D2  68 CC 4C 7A 00            PUSH 0x7a4ccc
0047F1D7  6A 00                     PUSH 0x0
0047F1D9  6A 00                     PUSH 0x0
0047F1DB  68 DE 3A 00 00            PUSH 0x3ade
0047F1E0  68 3C 9D 7A 00            PUSH 0x7a9d3c
0047F1E5  E8 E6 E2 22 00            CALL 0x006ad4d0
0047F1EA  83 C4 18                  ADD ESP,0x18
0047F1ED  85 C0                     TEST EAX,EAX
0047F1EF  74 01                     JZ 0x0047f1f2
0047F1F1  CC                        INT3
LAB_0047f1f2:
0047F1F2  68 DE 3A 00 00            PUSH 0x3ade
LAB_0047f1f7:
0047F1F7  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0047F1FD  68 3C 9D 7A 00            PUSH 0x7a9d3c
0047F202  51                        PUSH ECX
0047F203  68 FF FF 00 00            PUSH 0xffff
0047F208  E8 33 6C 22 00            CALL 0x006a5e40
0047F20D  B8 FF FF 00 00            MOV EAX,0xffff
0047F212  5F                        POP EDI
0047F213  5E                        POP ESI
0047F214  5B                        POP EBX
0047F215  8B E5                     MOV ESP,EBP
0047F217  5D                        POP EBP
0047F218  C2 04 00                  RET 0x4
LAB_0047f21b:
0047F21B  68 D8 B6 7A 00            PUSH 0x7ab6d8
0047F220  68 CC 4C 7A 00            PUSH 0x7a4ccc
0047F225  6A 00                     PUSH 0x0
0047F227  6A 00                     PUSH 0x0
0047F229  68 F1 3A 00 00            PUSH 0x3af1
0047F22E  68 3C 9D 7A 00            PUSH 0x7a9d3c
0047F233  E8 98 E2 22 00            CALL 0x006ad4d0
0047F238  83 C4 18                  ADD ESP,0x18
0047F23B  85 C0                     TEST EAX,EAX
0047F23D  74 01                     JZ 0x0047f240
0047F23F  CC                        INT3
LAB_0047f240:
0047F240  83 C8 FF                  OR EAX,0xffffffff
0047F243  5F                        POP EDI
0047F244  5E                        POP ESI
0047F245  5B                        POP EBX
0047F246  8B E5                     MOV ESP,EBP
0047F248  5D                        POP EBP
0047F249  C2 04 00                  RET 0x4
LAB_0047f24c:
0047F24C  B9 17 00 00 00            MOV ECX,0x17
0047F251  33 C0                     XOR EAX,EAX
0047F253  8D BE CC 02 00 00         LEA EDI,[ESI + 0x2cc]
0047F259  F3 AB                     STOSD.REP ES:EDI
0047F25B  89 86 C4 02 00 00         MOV dword ptr [ESI + 0x2c4],EAX
0047F261  8B 86 F7 06 00 00         MOV EAX,dword ptr [ESI + 0x6f7]
0047F267  83 F8 0C                  CMP EAX,0xc
0047F26A  74 0E                     JZ 0x0047f27a
0047F26C  83 F8 18                  CMP EAX,0x18
0047F26F  74 09                     JZ 0x0047f27a
0047F271  83 F8 1D                  CMP EAX,0x1d
0047F274  0F 85 0B EF FF FF         JNZ 0x0047e185
LAB_0047f27a:
0047F27A  66 8B 8E 2D 04 00 00      MOV CX,word ptr [ESI + 0x42d]
0047F281  66 8B 96 2F 04 00 00      MOV DX,word ptr [ESI + 0x42f]
0047F288  66 8B 86 31 04 00 00      MOV AX,word ptr [ESI + 0x431]
0047F28F  8B BE 33 04 00 00         MOV EDI,dword ptr [ESI + 0x433]
0047F295  66 89 8E A9 06 00 00      MOV word ptr [ESI + 0x6a9],CX
0047F29C  66 89 96 AB 06 00 00      MOV word ptr [ESI + 0x6ab],DX
0047F2A3  66 89 86 AD 06 00 00      MOV word ptr [ESI + 0x6ad],AX
0047F2AA  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
0047F2AD  89 BE AF 06 00 00         MOV dword ptr [ESI + 0x6af],EDI
0047F2B3  0F BF 3D 44 B2 7F 00      MOVSX EDI,word ptr [0x007fb244]
0047F2BA  0F BF D8                  MOVSX EBX,AX
0047F2BD  83 EF 02                  SUB EDI,0x2
0047F2C0  3B DF                     CMP EBX,EDI
0047F2C2  0F 8F BD EE FF FF         JG 0x0047e185
0047F2C8  66 85 C9                  TEST CX,CX
0047F2CB  7C 50                     JL 0x0047f31d
0047F2CD  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0047F2D4  66 3B CF                  CMP CX,DI
0047F2D7  7D 44                     JGE 0x0047f31d
0047F2D9  66 85 D2                  TEST DX,DX
0047F2DC  7C 3F                     JL 0x0047f31d
0047F2DE  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0047F2E5  7D 36                     JGE 0x0047f31d
0047F2E7  66 85 C0                  TEST AX,AX
0047F2EA  7C 31                     JL 0x0047f31d
0047F2EC  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
0047F2F3  7D 28                     JGE 0x0047f31d
0047F2F5  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0047F2FC  0F BF C0                  MOVSX EAX,AX
0047F2FF  0F AF D8                  IMUL EBX,EAX
0047F302  0F BF C7                  MOVSX EAX,DI
0047F305  0F BF D2                  MOVSX EDX,DX
0047F308  0F AF C2                  IMUL EAX,EDX
0047F30B  03 D8                     ADD EBX,EAX
0047F30D  0F BF C1                  MOVSX EAX,CX
0047F310  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
0047F316  03 D8                     ADD EBX,EAX
0047F318  8B 0C D9                  MOV ECX,dword ptr [ECX + EBX*0x8]
0047F31B  EB 02                     JMP 0x0047f31f
LAB_0047f31d:
0047F31D  33 C9                     XOR ECX,ECX
LAB_0047f31f:
0047F31F  85 C9                     TEST ECX,ECX
0047F321  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0047F324  0F 84 5B EE FF FF         JZ 0x0047e185
0047F32A  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0047F32D  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
0047F330  3B C2                     CMP EAX,EDX
0047F332  0F 85 4D EE FF FF         JNZ 0x0047e185
0047F338  81 79 20 E8 03 00 00      CMP dword ptr [ECX + 0x20],0x3e8
0047F33F  0F 85 40 EE FF FF         JNZ 0x0047e185
0047F345  8B 41 24                  MOV EAX,dword ptr [ECX + 0x24]
0047F348  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
0047F34B  3B C2                     CMP EAX,EDX
0047F34D  0F 85 32 EE FF FF         JNZ 0x0047e185
0047F353  E8 C2 20 F8 FF            CALL 0x0040141a
0047F358  85 C0                     TEST EAX,EAX
0047F35A  0F 84 25 EE FF FF         JZ 0x0047e185
0047F360  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0047F363  8B 11                     MOV EDX,dword ptr [ECX]
0047F365  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0047F368  8B 04 85 68 1D 79 00      MOV EAX,dword ptr [EAX*0x4 + 0x791d68]
0047F36F  83 F8 01                  CMP EAX,0x1
0047F372  89 86 B9 06 00 00         MOV dword ptr [ESI + 0x6b9],EAX
0047F378  0F 85 B2 00 00 00         JNZ 0x0047f430
0047F37E  66 8B 86 AB 06 00 00      MOV AX,word ptr [ESI + 0x6ab]
0047F385  66 8B 96 AD 06 00 00      MOV DX,word ptr [ESI + 0x6ad]
0047F38C  66 89 45 F4               MOV word ptr [EBP + -0xc],AX
0047F390  66 8B 86 A9 06 00 00      MOV AX,word ptr [ESI + 0x6a9]
0047F397  33 C9                     XOR ECX,ECX
0047F399  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0047F39C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0047F39F  42                        INC EDX
0047F3A0  66 89 45 F0               MOV word ptr [EBP + -0x10],AX
LAB_0047f3a4:
0047F3A4  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0047F3A7  33 FF                     XOR EDI,EDI
0047F3A9  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
0047F3AC  03 C8                     ADD ECX,EAX
LAB_0047f3ae:
0047F3AE  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0047F3B1  03 C7                     ADD EAX,EDI
0047F3B3  66 85 C9                  TEST CX,CX
0047F3B6  7C 5A                     JL 0x0047f412
0047F3B8  66 3B 0D 40 B2 7F 00      CMP CX,word ptr [0x007fb240]
0047F3BF  7D 51                     JGE 0x0047f412
0047F3C1  66 85 C0                  TEST AX,AX
0047F3C4  7C 4C                     JL 0x0047f412
0047F3C6  66 3B 05 42 B2 7F 00      CMP AX,word ptr [0x007fb242]
0047F3CD  7D 43                     JGE 0x0047f412
0047F3CF  66 85 D2                  TEST DX,DX
0047F3D2  7C 3E                     JL 0x0047f412
0047F3D4  66 3B 15 44 B2 7F 00      CMP DX,word ptr [0x007fb244]
0047F3DB  7D 35                     JGE 0x0047f412
0047F3DD  0F BF 3D 78 B2 7F 00      MOVSX EDI,word ptr [0x007fb278]
0047F3E4  0F BF C0                  MOVSX EAX,AX
0047F3E7  0F AF F8                  IMUL EDI,EAX
0047F3EA  0F BF 05 7E B2 7F 00      MOVSX EAX,word ptr [0x007fb27e]
0047F3F1  0F BF DA                  MOVSX EBX,DX
0047F3F4  0F AF C3                  IMUL EAX,EBX
0047F3F7  03 F8                     ADD EDI,EAX
0047F3F9  0F BF C1                  MOVSX EAX,CX
0047F3FC  03 F8                     ADD EDI,EAX
0047F3FE  A1 80 B2 7F 00            MOV EAX,[0x007fb280]
0047F403  0F BF 04 78               MOVSX EAX,word ptr [EAX + EDI*0x2]
0047F407  85 C0                     TEST EAX,EAX
0047F409  0F 84 B8 00 00 00         JZ 0x0047f4c7
0047F40F  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
LAB_0047f412:
0047F412  47                        INC EDI
0047F413  83 FF 02                  CMP EDI,0x2
0047F416  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
0047F419  7C 93                     JL 0x0047f3ae
0047F41B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0047F41E  41                        INC ECX
0047F41F  83 F9 02                  CMP ECX,0x2
0047F422  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0047F425  0F 8D 5A ED FF FF         JGE 0x0047e185
0047F42B  E9 74 FF FF FF            JMP 0x0047f3a4
LAB_0047f430:
0047F430  66 8B 86 AD 06 00 00      MOV AX,word ptr [ESI + 0x6ad]
0047F437  66 8B 8E AB 06 00 00      MOV CX,word ptr [ESI + 0x6ab]
0047F43E  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0047F441  8D 50 01                  LEA EDX,[EAX + 0x1]
0047F444  66 8B 86 A9 06 00 00      MOV AX,word ptr [ESI + 0x6a9]
0047F44B  66 85 C0                  TEST AX,AX
0047F44E  0F 8C 31 ED FF FF         JL 0x0047e185
0047F454  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
0047F45B  0F 8D 24 ED FF FF         JGE 0x0047e185
0047F461  66 85 C9                  TEST CX,CX
0047F464  0F 8C 1B ED FF FF         JL 0x0047e185
0047F46A  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
0047F471  0F 8D 0E ED FF FF         JGE 0x0047e185
0047F477  66 85 D2                  TEST DX,DX
0047F47A  0F 8C 05 ED FF FF         JL 0x0047e185
0047F480  66 3B 15 44 B2 7F 00      CMP DX,word ptr [0x007fb244]
0047F487  0F 8D F8 EC FF FF         JGE 0x0047e185
0047F48D  0F BF 3D 7E B2 7F 00      MOVSX EDI,word ptr [0x007fb27e]
0047F494  0F BF 1D 78 B2 7F 00      MOVSX EBX,word ptr [0x007fb278]
0047F49B  0F BF D2                  MOVSX EDX,DX
0047F49E  0F AF D7                  IMUL EDX,EDI
0047F4A1  0F BF F9                  MOVSX EDI,CX
0047F4A4  0F AF FB                  IMUL EDI,EBX
0047F4A7  03 D7                     ADD EDX,EDI
0047F4A9  0F BF F8                  MOVSX EDI,AX
0047F4AC  03 D7                     ADD EDX,EDI
0047F4AE  8B 3D 80 B2 7F 00         MOV EDI,dword ptr [0x007fb280]
0047F4B4  0F BF 14 57               MOVSX EDX,word ptr [EDI + EDX*0x2]
0047F4B8  85 D2                     TEST EDX,EDX
0047F4BA  74 11                     JZ 0x0047f4cd
0047F4BC  33 C0                     XOR EAX,EAX
0047F4BE  5F                        POP EDI
0047F4BF  5E                        POP ESI
0047F4C0  5B                        POP EBX
0047F4C1  8B E5                     MOV ESP,EBP
0047F4C3  5D                        POP EBP
0047F4C4  C2 04 00                  RET 0x4
LAB_0047f4c7:
0047F4C7  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0047F4CA  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
LAB_0047f4cd:
0047F4CD  0F BF 55 F8               MOVSX EDX,word ptr [EBP + -0x8]
0047F4D1  42                        INC EDX
0047F4D2  C7 86 C3 06 00 00 00 00 00 00  MOV dword ptr [ESI + 0x6c3],0x0
0047F4DC  52                        PUSH EDX
0047F4DD  C7 86 B7 00 00 00 03 00 00 00  MOV dword ptr [ESI + 0xb7],0x3
0047F4E7  0F BF C9                  MOVSX ECX,CX
0047F4EA  0F BF D0                  MOVSX EDX,AX
0047F4ED  51                        PUSH ECX
0047F4EE  52                        PUSH EDX
0047F4EF  8B CE                     MOV ECX,ESI
0047F4F1  E8 75 5A F8 FF            CALL 0x00404f6b
0047F4F6  6A 00                     PUSH 0x0
0047F4F8  8B CE                     MOV ECX,ESI
0047F4FA  E8 DF 3C F8 FF            CALL 0x004031de
0047F4FF  5F                        POP EDI
0047F500  5E                        POP ESI
0047F501  B8 02 00 00 00            MOV EAX,0x2
0047F506  5B                        POP EBX
0047F507  8B E5                     MOV ESP,EBP
0047F509  5D                        POP EBP
0047F50A  C2 04 00                  RET 0x4
