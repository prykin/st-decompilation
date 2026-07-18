FUN_006820f0:
006820F0  55                        PUSH EBP
006820F1  8B EC                     MOV EBP,ESP
006820F3  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
006820F9  56                        PUSH ESI
006820FA  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006820FD  33 D2                     XOR EDX,EDX
006820FF  85 F6                     TEST ESI,ESI
00682101  57                        PUSH EDI
00682102  7E 27                     JLE 0x0068212b
00682104  8B C1                     MOV EAX,ECX
00682106  C1 E0 04                  SHL EAX,0x4
00682109  03 C1                     ADD EAX,ECX
0068210B  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0068210E  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00682111  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00682114  8D 3C 40                  LEA EDI,[EAX + EAX*0x2]
LAB_00682117:
00682117  8A 84 BA C8 3B 81 00      MOV AL,byte ptr [EDX + EDI*0x4 + 0x813bc8]
0068211E  3C 02                     CMP AL,0x2
00682120  74 04                     JZ 0x00682126
00682122  3C 04                     CMP AL,0x4
00682124  75 6F                     JNZ 0x00682195
LAB_00682126:
00682126  42                        INC EDX
00682127  3B D6                     CMP EDX,ESI
00682129  7C EC                     JL 0x00682117
LAB_0068212b:
0068212B  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0068212E  03 D6                     ADD EDX,ESI
00682130  3B F2                     CMP ESI,EDX
00682132  7D 27                     JGE 0x0068215b
00682134  8B C1                     MOV EAX,ECX
00682136  C1 E0 04                  SHL EAX,0x4
00682139  03 C1                     ADD EAX,ECX
0068213B  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0068213E  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00682141  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00682144  8D 3C 40                  LEA EDI,[EAX + EAX*0x2]
LAB_00682147:
00682147  8A 84 BE C8 3B 81 00      MOV AL,byte ptr [ESI + EDI*0x4 + 0x813bc8]
0068214E  3C 01                     CMP AL,0x1
00682150  74 04                     JZ 0x00682156
00682152  3C 04                     CMP AL,0x4
00682154  75 3F                     JNZ 0x00682195
LAB_00682156:
00682156  46                        INC ESI
00682157  3B F2                     CMP ESI,EDX
00682159  7C EC                     JL 0x00682147
LAB_0068215b:
0068215B  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0068215E  8D 34 02                  LEA ESI,[EDX + EAX*0x1]
00682161  3B D6                     CMP EDX,ESI
00682163  7D 27                     JGE 0x0068218c
00682165  8B C1                     MOV EAX,ECX
00682167  C1 E0 04                  SHL EAX,0x4
0068216A  03 C1                     ADD EAX,ECX
0068216C  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0068216F  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00682172  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00682175  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
LAB_00682178:
00682178  8A 84 8A C8 3B 81 00      MOV AL,byte ptr [EDX + ECX*0x4 + 0x813bc8]
0068217F  3C 02                     CMP AL,0x2
00682181  74 04                     JZ 0x00682187
00682183  3C 04                     CMP AL,0x4
00682185  75 0E                     JNZ 0x00682195
LAB_00682187:
00682187  42                        INC EDX
00682188  3B D6                     CMP EDX,ESI
0068218A  7C EC                     JL 0x00682178
LAB_0068218c:
0068218C  5F                        POP EDI
0068218D  B8 01 00 00 00            MOV EAX,0x1
00682192  5E                        POP ESI
00682193  5D                        POP EBP
00682194  C3                        RET
LAB_00682195:
00682195  5F                        POP EDI
00682196  33 C0                     XOR EAX,EAX
00682198  5E                        POP ESI
00682199  5D                        POP EBP
0068219A  C3                        RET
