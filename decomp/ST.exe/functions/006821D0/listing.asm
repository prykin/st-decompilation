FUN_006821d0:
006821D0  55                        PUSH EBP
006821D1  8B EC                     MOV EBP,ESP
006821D3  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
006821D9  56                        PUSH ESI
006821DA  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006821DD  33 D2                     XOR EDX,EDX
006821DF  85 F6                     TEST ESI,ESI
006821E1  57                        PUSH EDI
006821E2  7E 27                     JLE 0x0068220b
006821E4  8B C1                     MOV EAX,ECX
006821E6  C1 E0 04                  SHL EAX,0x4
006821E9  03 C1                     ADD EAX,ECX
006821EB  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006821EE  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
006821F1  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
006821F4  8D 3C 40                  LEA EDI,[EAX + EAX*0x2]
LAB_006821f7:
006821F7  8A 84 BA C8 3B 81 00      MOV AL,byte ptr [EDX + EDI*0x4 + 0x813bc8]
006821FE  3C 01                     CMP AL,0x1
00682200  74 04                     JZ 0x00682206
00682202  3C 04                     CMP AL,0x4
00682204  75 41                     JNZ 0x00682247
LAB_00682206:
00682206  42                        INC EDX
00682207  3B D6                     CMP EDX,ESI
00682209  7C EC                     JL 0x006821f7
LAB_0068220b:
0068220B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0068220E  8B D6                     MOV EDX,ESI
00682210  8D 3C 06                  LEA EDI,[ESI + EAX*0x1]
00682213  3B F7                     CMP ESI,EDI
00682215  7D 27                     JGE 0x0068223e
00682217  8B C1                     MOV EAX,ECX
00682219  C1 E0 04                  SHL EAX,0x4
0068221C  03 C1                     ADD EAX,ECX
0068221E  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00682221  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00682224  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00682227  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
LAB_0068222a:
0068222A  8A 84 8A C8 3B 81 00      MOV AL,byte ptr [EDX + ECX*0x4 + 0x813bc8]
00682231  3C 02                     CMP AL,0x2
00682233  74 04                     JZ 0x00682239
00682235  3C 04                     CMP AL,0x4
00682237  75 0E                     JNZ 0x00682247
LAB_00682239:
00682239  42                        INC EDX
0068223A  3B D7                     CMP EDX,EDI
0068223C  7C EC                     JL 0x0068222a
LAB_0068223e:
0068223E  5F                        POP EDI
0068223F  B8 01 00 00 00            MOV EAX,0x1
00682244  5E                        POP ESI
00682245  5D                        POP EBP
00682246  C3                        RET
LAB_00682247:
00682247  5F                        POP EDI
00682248  33 C0                     XOR EAX,EAX
0068224A  5E                        POP ESI
0068224B  5D                        POP EBP
0068224C  C3                        RET
