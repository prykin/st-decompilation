STCrabC::Bad:
00579170  53                        PUSH EBX
00579171  56                        PUSH ESI
00579172  0F BF 35 40 B2 7F 00      MOVSX ESI,word ptr [0x007fb240]
00579179  0F BF 1D 42 B2 7F 00      MOVSX EBX,word ptr [0x007fb242]
00579180  57                        PUSH EDI
00579181  8B F9                     MOV EDI,ECX
00579183  4E                        DEC ESI
00579184  4B                        DEC EBX
00579185  8B 87 6D 02 00 00         MOV EAX,dword ptr [EDI + 0x26d]
0057918B  3B C6                     CMP EAX,ESI
0057918D  7F 12                     JG 0x005791a1
0057918F  85 C0                     TEST EAX,EAX
00579191  7C 0E                     JL 0x005791a1
00579193  8B 87 71 02 00 00         MOV EAX,dword ptr [EDI + 0x271]
00579199  3B C3                     CMP EAX,EBX
0057919B  7F 04                     JG 0x005791a1
0057919D  85 C0                     TEST EAX,EAX
0057919F  7D 35                     JGE 0x005791d6
LAB_005791a1:
005791A1  68 E4 AD 7C 00            PUSH 0x7cade4
005791A6  68 CC 4C 7A 00            PUSH 0x7a4ccc
005791AB  6A 00                     PUSH 0x0
005791AD  6A 00                     PUSH 0x0
005791AF  68 02 02 00 00            PUSH 0x202
005791B4  68 4C AD 7C 00            PUSH 0x7cad4c
005791B9  E8 12 43 13 00            CALL 0x006ad4d0
005791BE  83 C4 18                  ADD ESP,0x18
005791C1  85 C0                     TEST EAX,EAX
005791C3  74 01                     JZ 0x005791c6
005791C5  CC                        INT3
LAB_005791c6:
005791C6  D1 FE                     SAR ESI,0x1
005791C8  D1 FB                     SAR EBX,0x1
005791CA  89 B7 6D 02 00 00         MOV dword ptr [EDI + 0x26d],ESI
005791D0  89 9F 71 02 00 00         MOV dword ptr [EDI + 0x271],EBX
LAB_005791d6:
005791D6  8B 87 75 02 00 00         MOV EAX,dword ptr [EDI + 0x275]
005791DC  85 C0                     TEST EAX,EAX
005791DE  7C 05                     JL 0x005791e5
005791E0  83 F8 05                  CMP EAX,0x5
005791E3  7C 2F                     JL 0x00579214
LAB_005791e5:
005791E5  68 E4 AD 7C 00            PUSH 0x7cade4
005791EA  68 CC 4C 7A 00            PUSH 0x7a4ccc
005791EF  6A 00                     PUSH 0x0
005791F1  6A 00                     PUSH 0x0
005791F3  68 07 02 00 00            PUSH 0x207
005791F8  68 4C AD 7C 00            PUSH 0x7cad4c
005791FD  E8 CE 42 13 00            CALL 0x006ad4d0
00579202  83 C4 18                  ADD ESP,0x18
00579205  85 C0                     TEST EAX,EAX
00579207  74 01                     JZ 0x0057920a
00579209  CC                        INT3
LAB_0057920a:
0057920A  C7 87 75 02 00 00 00 00 00 00  MOV dword ptr [EDI + 0x275],0x0
LAB_00579214:
00579214  81 BF 7D 02 00 00 68 01 00 00  CMP dword ptr [EDI + 0x27d],0x168
0057921E  7C 2F                     JL 0x0057924f
00579220  68 B4 AD 7C 00            PUSH 0x7cadb4
00579225  68 CC 4C 7A 00            PUSH 0x7a4ccc
0057922A  6A 00                     PUSH 0x0
0057922C  6A 00                     PUSH 0x0
0057922E  68 0C 02 00 00            PUSH 0x20c
00579233  68 4C AD 7C 00            PUSH 0x7cad4c
00579238  E8 93 42 13 00            CALL 0x006ad4d0
0057923D  83 C4 18                  ADD ESP,0x18
00579240  85 C0                     TEST EAX,EAX
00579242  74 01                     JZ 0x00579245
00579244  CC                        INT3
LAB_00579245:
00579245  C7 87 7D 02 00 00 00 00 00 00  MOV dword ptr [EDI + 0x27d],0x0
LAB_0057924f:
0057924F  33 F6                     XOR ESI,ESI
LAB_00579251:
00579251  66 8B 87 71 02 00 00      MOV AX,word ptr [EDI + 0x271]
00579258  66 8B 8F 6D 02 00 00      MOV CX,word ptr [EDI + 0x26d]
0057925F  56                        PUSH ESI
00579260  50                        PUSH EAX
00579261  51                        PUSH ECX
00579262  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00579268  E8 CE BA E8 FF            CALL 0x00404d3b
0057926D  85 C0                     TEST EAX,EAX
0057926F  75 0A                     JNZ 0x0057927b
00579271  46                        INC ESI
00579272  83 FE 05                  CMP ESI,0x5
00579275  7C DA                     JL 0x00579251
00579277  5F                        POP EDI
00579278  5E                        POP ESI
00579279  5B                        POP EBX
0057927A  C3                        RET
LAB_0057927b:
0057927B  89 B7 75 02 00 00         MOV dword ptr [EDI + 0x275],ESI
00579281  5F                        POP EDI
00579282  5E                        POP ESI
00579283  5B                        POP EBX
00579284  C3                        RET
