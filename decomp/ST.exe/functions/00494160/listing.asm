FUN_00494160:
00494160  55                        PUSH EBP
00494161  8B EC                     MOV EBP,ESP
00494163  51                        PUSH ECX
00494164  53                        PUSH EBX
00494165  8B D9                     MOV EBX,ECX
00494167  8B 83 F7 06 00 00         MOV EAX,dword ptr [EBX + 0x6f7]
0049416D  83 E8 16                  SUB EAX,0x16
00494170  74 79                     JZ 0x004941eb
00494172  83 E8 0D                  SUB EAX,0xd
00494175  74 0C                     JZ 0x00494183
00494177  83 E8 02                  SUB EAX,0x2
0049417A  74 6F                     JZ 0x004941eb
0049417C  5B                        POP EBX
0049417D  8B E5                     MOV ESP,EBP
0049417F  5D                        POP EBP
00494180  C2 04 00                  RET 0x4
LAB_00494183:
00494183  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00494186  8B 8B 2E 07 00 00         MOV ECX,dword ptr [EBX + 0x72e]
0049418C  3B C1                     CMP EAX,ECX
0049418E  0F 84 39 03 00 00         JZ 0x004944cd
00494194  83 F8 01                  CMP EAX,0x1
00494197  75 30                     JNZ 0x004941c9
00494199  8B 83 22 07 00 00         MOV EAX,dword ptr [EBX + 0x722]
0049419F  85 C0                     TEST EAX,EAX
004941A1  0F 8E 26 03 00 00         JLE 0x004944cd
004941A7  8B 03                     MOV EAX,dword ptr [EBX]
004941A9  68 6C 01 00 00            PUSH 0x16c
004941AE  6A 03                     PUSH 0x3
004941B0  8B CB                     MOV ECX,EBX
004941B2  C7 83 2E 07 00 00 01 00 00 00  MOV dword ptr [EBX + 0x72e],0x1
004941BC  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
004941C2  5B                        POP EBX
004941C3  8B E5                     MOV ESP,EBP
004941C5  5D                        POP EBP
004941C6  C2 04 00                  RET 0x4
LAB_004941c9:
004941C9  8B 13                     MOV EDX,dword ptr [EBX]
004941CB  68 6D 01 00 00            PUSH 0x16d
004941D0  6A 03                     PUSH 0x3
004941D2  8B CB                     MOV ECX,EBX
004941D4  C7 83 2E 07 00 00 00 00 00 00  MOV dword ptr [EBX + 0x72e],0x0
004941DE  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
004941E4  5B                        POP EBX
004941E5  8B E5                     MOV ESP,EBP
004941E7  5D                        POP EBP
004941E8  C2 04 00                  RET 0x4
LAB_004941eb:
004941EB  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004941EE  8B 8B 32 07 00 00         MOV ECX,dword ptr [EBX + 0x732]
004941F4  3B C1                     CMP EAX,ECX
004941F6  0F 84 D1 02 00 00         JZ 0x004944cd
004941FC  83 F8 01                  CMP EAX,0x1
004941FF  0F 85 AD 02 00 00         JNZ 0x004944b2
00494205  8B 83 26 07 00 00         MOV EAX,dword ptr [EBX + 0x726]
0049420B  85 C0                     TEST EAX,EAX
0049420D  0F 8E BA 02 00 00         JLE 0x004944cd
00494213  56                        PUSH ESI
00494214  57                        PUSH EDI
00494215  B9 08 00 00 00            MOV ECX,0x8
0049421A  33 C0                     XOR EAX,EAX
0049421C  8D BB 4E 07 00 00         LEA EDI,[EBX + 0x74e]
00494222  C7 83 32 07 00 00 01 00 00 00  MOV dword ptr [EBX + 0x732],0x1
0049422C  F3 AB                     STOSD.REP ES:EDI
0049422E  8B CB                     MOV ECX,EBX
00494230  E8 DF F0 F6 FF            CALL 0x00403314
00494235  8A 0D 8F 8A 80 00         MOV CL,byte ptr [0x00808a8f]
0049423B  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
0049423E  84 C9                     TEST CL,CL
00494240  88 45 0B                  MOV byte ptr [EBP + 0xb],AL
00494243  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
00494246  74 2D                     JZ 0x00494275
00494248  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
0049424E  33 C0                     XOR EAX,EAX
00494250  8A C2                     MOV AL,DL
00494252  33 C9                     XOR ECX,ECX
00494254  8D 34 C0                  LEA ESI,[EAX + EAX*0x8]
00494257  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0049425A  25 FF 00 00 00            AND EAX,0xff
0049425F  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00494262  8A 84 C0 EA 87 80 00      MOV AL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
00494269  3A 84 F6 EA 87 80 00      CMP AL,byte ptr [ESI + ESI*0x8 + 0x8087ea]
00494270  0F 95 C1                  SETNZ CL
00494273  EB 7B                     JMP 0x004942f0
LAB_00494275:
00494275  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
0049427B  3A D0                     CMP DL,AL
0049427D  74 68                     JZ 0x004942e7
0049427F  33 C0                     XOR EAX,EAX
00494281  8A C2                     MOV AL,DL
00494283  8B F0                     MOV ESI,EAX
00494285  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00494288  25 FF 00 00 00            AND EAX,0xff
0049428D  8A 8C F0 4F 8A 80 00      MOV CL,byte ptr [EAX + ESI*0x8 + 0x808a4f]
00494294  84 C9                     TEST CL,CL
00494296  75 10                     JNZ 0x004942a8
00494298  38 8C C6 4F 8A 80 00      CMP byte ptr [ESI + EAX*0x8 + 0x808a4f],CL
0049429F  75 07                     JNZ 0x004942a8
004942A1  B8 FE FF FF FF            MOV EAX,0xfffffffe
004942A6  EB 41                     JMP 0x004942e9
LAB_004942a8:
004942A8  80 F9 01                  CMP CL,0x1
004942AB  75 0F                     JNZ 0x004942bc
004942AD  80 BC C6 4F 8A 80 00 00   CMP byte ptr [ESI + EAX*0x8 + 0x808a4f],0x0
004942B5  75 05                     JNZ 0x004942bc
004942B7  83 C8 FF                  OR EAX,0xffffffff
004942BA  EB 2D                     JMP 0x004942e9
LAB_004942bc:
004942BC  84 C9                     TEST CL,CL
004942BE  75 11                     JNZ 0x004942d1
004942C0  80 BC C6 4F 8A 80 00 01   CMP byte ptr [ESI + EAX*0x8 + 0x808a4f],0x1
004942C8  75 07                     JNZ 0x004942d1
004942CA  B8 01 00 00 00            MOV EAX,0x1
004942CF  EB 18                     JMP 0x004942e9
LAB_004942d1:
004942D1  80 F9 01                  CMP CL,0x1
004942D4  75 11                     JNZ 0x004942e7
004942D6  80 BC C6 4F 8A 80 00 01   CMP byte ptr [ESI + EAX*0x8 + 0x808a4f],0x1
004942DE  75 07                     JNZ 0x004942e7
004942E0  B8 02 00 00 00            MOV EAX,0x2
004942E5  EB 02                     JMP 0x004942e9
LAB_004942e7:
004942E7  33 C0                     XOR EAX,EAX
LAB_004942e9:
004942E9  33 C9                     XOR ECX,ECX
004942EB  85 C0                     TEST EAX,EAX
004942ED  0F 9C C1                  SETL CL
LAB_004942f0:
004942F0  8B C1                     MOV EAX,ECX
004942F2  83 F8 01                  CMP EAX,0x1
004942F5  0F 84 2A 01 00 00         JZ 0x00494425
004942FB  8A 0D 8F 8A 80 00         MOV CL,byte ptr [0x00808a8f]
00494301  8A 45 0B                  MOV AL,byte ptr [EBP + 0xb]
00494304  84 C9                     TEST CL,CL
00494306  88 45 08                  MOV byte ptr [EBP + 0x8],AL
00494309  74 27                     JZ 0x00494332
0049430B  33 C0                     XOR EAX,EAX
0049430D  8A C2                     MOV AL,DL
0049430F  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
00494312  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00494315  25 FF 00 00 00            AND EAX,0xff
0049431A  8A 94 C9 EA 87 80 00      MOV DL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
00494321  8D 34 C0                  LEA ESI,[EAX + EAX*0x8]
00494324  33 C0                     XOR EAX,EAX
00494326  3A 94 F6 EA 87 80 00      CMP DL,byte ptr [ESI + ESI*0x8 + 0x8087ea]
0049432D  0F 95 C0                  SETNZ AL
00494330  EB 79                     JMP 0x004943ab
LAB_00494332:
00494332  3A C2                     CMP AL,DL
00494334  74 6A                     JZ 0x004943a0
00494336  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00494339  33 C0                     XOR EAX,EAX
0049433B  81 E6 FF 00 00 00         AND ESI,0xff
00494341  8A C2                     MOV AL,DL
00494343  8A 8C F0 4F 8A 80 00      MOV CL,byte ptr [EAX + ESI*0x8 + 0x808a4f]
0049434A  84 C9                     TEST CL,CL
0049434C  75 12                     JNZ 0x00494360
0049434E  8A 94 C6 4F 8A 80 00      MOV DL,byte ptr [ESI + EAX*0x8 + 0x808a4f]
00494355  84 D2                     TEST DL,DL
00494357  75 07                     JNZ 0x00494360
00494359  B8 FE FF FF FF            MOV EAX,0xfffffffe
0049435E  EB 42                     JMP 0x004943a2
LAB_00494360:
00494360  80 F9 01                  CMP CL,0x1
00494363  75 10                     JNZ 0x00494375
00494365  8A 94 C6 4F 8A 80 00      MOV DL,byte ptr [ESI + EAX*0x8 + 0x808a4f]
0049436C  84 D2                     TEST DL,DL
0049436E  75 05                     JNZ 0x00494375
00494370  83 C8 FF                  OR EAX,0xffffffff
00494373  EB 2D                     JMP 0x004943a2
LAB_00494375:
00494375  84 C9                     TEST CL,CL
00494377  75 11                     JNZ 0x0049438a
00494379  80 BC C6 4F 8A 80 00 01   CMP byte ptr [ESI + EAX*0x8 + 0x808a4f],0x1
00494381  75 07                     JNZ 0x0049438a
00494383  B8 01 00 00 00            MOV EAX,0x1
00494388  EB 18                     JMP 0x004943a2
LAB_0049438a:
0049438A  80 F9 01                  CMP CL,0x1
0049438D  75 11                     JNZ 0x004943a0
0049438F  80 BC C6 4F 8A 80 00 01   CMP byte ptr [ESI + EAX*0x8 + 0x808a4f],0x1
00494397  75 07                     JNZ 0x004943a0
00494399  B8 02 00 00 00            MOV EAX,0x2
0049439E  EB 02                     JMP 0x004943a2
LAB_004943a0:
004943A0  33 C0                     XOR EAX,EAX
LAB_004943a2:
004943A2  33 C9                     XOR ECX,ECX
004943A4  85 C0                     TEST EAX,EAX
004943A6  0F 9C C1                  SETL CL
004943A9  8B C1                     MOV EAX,ECX
LAB_004943ab:
004943AB  83 F8 01                  CMP EAX,0x1
004943AE  74 75                     JZ 0x00494425
004943B0  8D B3 D5 01 00 00         LEA ESI,[EBX + 0x1d5]
004943B6  6A 0E                     PUSH 0xe
004943B8  8B CE                     MOV ECX,ESI
004943BA  E8 EF D7 F6 FF            CALL 0x00401bae
004943BF  6A 0D                     PUSH 0xd
004943C1  8B CE                     MOV ECX,ESI
004943C3  E8 E6 D7 F6 FF            CALL 0x00401bae
004943C8  6A 0C                     PUSH 0xc
004943CA  8B CE                     MOV ECX,ESI
004943CC  E8 DD D7 F6 FF            CALL 0x00401bae
004943D1  6A 01                     PUSH 0x1
004943D3  8B CE                     MOV ECX,ESI
004943D5  E8 00 FC F6 FF            CALL 0x00403fda
004943DA  6A 02                     PUSH 0x2
004943DC  8B CE                     MOV ECX,ESI
004943DE  E8 F7 FB F6 FF            CALL 0x00403fda
004943E3  6A 00                     PUSH 0x0
004943E5  8B CE                     MOV ECX,ESI
004943E7  E8 EE FB F6 FF            CALL 0x00403fda
004943EC  6A 0F                     PUSH 0xf
004943EE  8B CE                     MOV ECX,ESI
004943F0  E8 E5 FB F6 FF            CALL 0x00403fda
004943F5  6A 0B                     PUSH 0xb
004943F7  8B CE                     MOV ECX,ESI
004943F9  E8 DC FB F6 FF            CALL 0x00403fda
004943FE  6A 0A                     PUSH 0xa
00494400  8B CE                     MOV ECX,ESI
00494402  E8 D3 FB F6 FF            CALL 0x00403fda
00494407  6A 09                     PUSH 0x9
00494409  8B CE                     MOV ECX,ESI
0049440B  E8 CA FB F6 FF            CALL 0x00403fda
00494410  6A 08                     PUSH 0x8
00494412  8B CE                     MOV ECX,ESI
00494414  E8 C1 FB F6 FF            CALL 0x00403fda
00494419  C7 83 46 07 00 00 00 00 00 00  MOV dword ptr [EBX + 0x746],0x0
00494423  EB 73                     JMP 0x00494498
LAB_00494425:
00494425  8D B3 D5 01 00 00         LEA ESI,[EBX + 0x1d5]
0049442B  6A 0E                     PUSH 0xe
0049442D  8B CE                     MOV ECX,ESI
0049442F  E8 7A D7 F6 FF            CALL 0x00401bae
00494434  6A 0D                     PUSH 0xd
00494436  8B CE                     MOV ECX,ESI
00494438  E8 71 D7 F6 FF            CALL 0x00401bae
0049443D  6A 0C                     PUSH 0xc
0049443F  8B CE                     MOV ECX,ESI
00494441  E8 68 D7 F6 FF            CALL 0x00401bae
00494446  6A 01                     PUSH 0x1
00494448  8B CE                     MOV ECX,ESI
0049444A  E8 5F D7 F6 FF            CALL 0x00401bae
0049444F  6A 02                     PUSH 0x2
00494451  8B CE                     MOV ECX,ESI
00494453  E8 56 D7 F6 FF            CALL 0x00401bae
00494458  6A 00                     PUSH 0x0
0049445A  8B CE                     MOV ECX,ESI
0049445C  E8 4D D7 F6 FF            CALL 0x00401bae
00494461  6A 0F                     PUSH 0xf
00494463  8B CE                     MOV ECX,ESI
00494465  E8 44 D7 F6 FF            CALL 0x00401bae
0049446A  6A 0B                     PUSH 0xb
0049446C  8B CE                     MOV ECX,ESI
0049446E  E8 3B D7 F6 FF            CALL 0x00401bae
00494473  6A 0A                     PUSH 0xa
00494475  8B CE                     MOV ECX,ESI
00494477  E8 32 D7 F6 FF            CALL 0x00401bae
0049447C  6A 09                     PUSH 0x9
0049447E  8B CE                     MOV ECX,ESI
00494480  E8 29 D7 F6 FF            CALL 0x00401bae
00494485  6A 08                     PUSH 0x8
00494487  8B CE                     MOV ECX,ESI
00494489  E8 20 D7 F6 FF            CALL 0x00401bae
0049448E  C7 83 46 07 00 00 01 00 00 00  MOV dword ptr [EBX + 0x746],0x1
LAB_00494498:
00494498  8B 13                     MOV EDX,dword ptr [EBX]
0049449A  68 6C 01 00 00            PUSH 0x16c
0049449F  6A 03                     PUSH 0x3
004944A1  8B CB                     MOV ECX,EBX
004944A3  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
004944A9  5F                        POP EDI
004944AA  5E                        POP ESI
004944AB  5B                        POP EBX
004944AC  8B E5                     MOV ESP,EBP
004944AE  5D                        POP EBP
004944AF  C2 04 00                  RET 0x4
LAB_004944b2:
004944B2  8B 03                     MOV EAX,dword ptr [EBX]
004944B4  68 6D 01 00 00            PUSH 0x16d
004944B9  6A 03                     PUSH 0x3
004944BB  8B CB                     MOV ECX,EBX
004944BD  C7 83 32 07 00 00 00 00 00 00  MOV dword ptr [EBX + 0x732],0x0
004944C7  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
LAB_004944cd:
004944CD  5B                        POP EBX
004944CE  8B E5                     MOV ESP,EBP
004944D0  5D                        POP EBP
004944D1  C2 04 00                  RET 0x4
