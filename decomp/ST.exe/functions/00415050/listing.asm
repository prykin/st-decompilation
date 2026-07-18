FUN_00415050:
00415050  55                        PUSH EBP
00415051  8B EC                     MOV EBP,ESP
00415053  8B 15 18 4D 7F 00         MOV EDX,dword ptr [0x007f4d18]
00415059  53                        PUSH EBX
0041505A  8B 1D 44 4D 7F 00         MOV EBX,dword ptr [0x007f4d44]
00415060  56                        PUSH ESI
00415061  57                        PUSH EDI
00415062  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
00415065  8D 73 FF                  LEA ESI,[EBX + -0x1]
00415068  85 F6                     TEST ESI,ESI
0041506A  7C 1F                     JL 0x0041508b
0041506C  8D 04 76                  LEA EAX,[ESI + ESI*0x2]
0041506F  8D 44 C2 0C               LEA EAX,[EDX + EAX*0x8 + 0xc]
LAB_00415073:
00415073  8B 08                     MOV ECX,dword ptr [EAX]
00415075  3B F9                     CMP EDI,ECX
00415077  7F 12                     JG 0x0041508b
00415079  75 08                     JNZ 0x00415083
0041507B  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0041507E  3B 48 08                  CMP ECX,dword ptr [EAX + 0x8]
00415081  7D 08                     JGE 0x0041508b
LAB_00415083:
00415083  4E                        DEC ESI
00415084  83 E8 18                  SUB EAX,0x18
00415087  85 F6                     TEST ESI,ESI
00415089  7D E8                     JGE 0x00415073
LAB_0041508b:
0041508B  46                        INC ESI
0041508C  3B F3                     CMP ESI,EBX
0041508E  7D 28                     JGE 0x004150b8
00415090  8D 04 76                  LEA EAX,[ESI + ESI*0x2]
00415093  8D 0C 5B                  LEA ECX,[EBX + EBX*0x2]
00415096  C1 E0 03                  SHL EAX,0x3
00415099  C1 E1 03                  SHL ECX,0x3
0041509C  2B C8                     SUB ECX,EAX
0041509E  03 C2                     ADD EAX,EDX
004150A0  51                        PUSH ECX
004150A1  50                        PUSH EAX
004150A2  8D 44 76 03               LEA EAX,[ESI + ESI*0x2 + 0x3]
004150A6  8D 0C C2                  LEA ECX,[EDX + EAX*0x8]
004150A9  51                        PUSH ECX
004150AA  E8 C1 89 31 00            CALL 0x0072da70
004150AF  8B 15 18 4D 7F 00         MOV EDX,dword ptr [0x007f4d18]
004150B5  83 C4 0C                  ADD ESP,0xc
LAB_004150b8:
004150B8  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004150BB  8D 04 76                  LEA EAX,[ESI + ESI*0x2]
004150BE  C1 E0 03                  SHL EAX,0x3
004150C1  89 0C 10                  MOV dword ptr [EAX + EDX*0x1],ECX
004150C4  8B 15 18 4D 7F 00         MOV EDX,dword ptr [0x007f4d18]
004150CA  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004150CD  89 4C 10 04               MOV dword ptr [EAX + EDX*0x1 + 0x4],ECX
004150D1  8B 15 18 4D 7F 00         MOV EDX,dword ptr [0x007f4d18]
004150D7  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004150DA  89 4C 10 08               MOV dword ptr [EAX + EDX*0x1 + 0x8],ECX
004150DE  8B 15 18 4D 7F 00         MOV EDX,dword ptr [0x007f4d18]
004150E4  89 7C 10 0C               MOV dword ptr [EAX + EDX*0x1 + 0xc],EDI
004150E8  8B 0D 18 4D 7F 00         MOV ECX,dword ptr [0x007f4d18]
004150EE  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
004150F1  5F                        POP EDI
004150F2  89 54 08 14               MOV dword ptr [EAX + ECX*0x1 + 0x14],EDX
004150F6  8B 15 18 4D 7F 00         MOV EDX,dword ptr [0x007f4d18]
004150FC  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
004150FF  5E                        POP ESI
00415100  89 4C 10 10               MOV dword ptr [EAX + EDX*0x1 + 0x10],ECX
00415104  A1 44 4D 7F 00            MOV EAX,[0x007f4d44]
00415109  40                        INC EAX
0041510A  5B                        POP EBX
0041510B  A3 44 4D 7F 00            MOV [0x007f4d44],EAX
00415110  5D                        POP EBP
00415111  C2 18 00                  RET 0x18
