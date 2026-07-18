FUN_00682050:
00682050  55                        PUSH EBP
00682051  8B EC                     MOV EBP,ESP
00682053  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00682056  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
0068205C  56                        PUSH ESI
0068205D  33 F6                     XOR ESI,ESI
0068205F  85 D2                     TEST EDX,EDX
00682061  57                        PUSH EDI
00682062  7E 27                     JLE 0x0068208b
00682064  8B C1                     MOV EAX,ECX
00682066  C1 E0 04                  SHL EAX,0x4
00682069  03 C1                     ADD EAX,ECX
0068206B  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0068206E  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00682071  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00682074  8D 3C 40                  LEA EDI,[EAX + EAX*0x2]
LAB_00682077:
00682077  8A 84 BE C8 3B 81 00      MOV AL,byte ptr [ESI + EDI*0x4 + 0x813bc8]
0068207E  3C 02                     CMP AL,0x2
00682080  74 04                     JZ 0x00682086
00682082  3C 04                     CMP AL,0x4
00682084  75 3F                     JNZ 0x006820c5
LAB_00682086:
00682086  46                        INC ESI
00682087  3B F2                     CMP ESI,EDX
00682089  7C EC                     JL 0x00682077
LAB_0068208b:
0068208B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0068208E  8D 34 02                  LEA ESI,[EDX + EAX*0x1]
00682091  3B D6                     CMP EDX,ESI
00682093  7D 27                     JGE 0x006820bc
00682095  8B C1                     MOV EAX,ECX
00682097  C1 E0 04                  SHL EAX,0x4
0068209A  03 C1                     ADD EAX,ECX
0068209C  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0068209F  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
006820A2  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
006820A5  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
LAB_006820a8:
006820A8  8A 84 8A C8 3B 81 00      MOV AL,byte ptr [EDX + ECX*0x4 + 0x813bc8]
006820AF  3C 01                     CMP AL,0x1
006820B1  74 04                     JZ 0x006820b7
006820B3  3C 04                     CMP AL,0x4
006820B5  75 0E                     JNZ 0x006820c5
LAB_006820b7:
006820B7  42                        INC EDX
006820B8  3B D6                     CMP EDX,ESI
006820BA  7C EC                     JL 0x006820a8
LAB_006820bc:
006820BC  5F                        POP EDI
006820BD  B8 01 00 00 00            MOV EAX,0x1
006820C2  5E                        POP ESI
006820C3  5D                        POP EBP
006820C4  C3                        RET
LAB_006820c5:
006820C5  5F                        POP EDI
006820C6  33 C0                     XOR EAX,EAX
006820C8  5E                        POP ESI
006820C9  5D                        POP EBP
006820CA  C3                        RET
