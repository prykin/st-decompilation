FUN_007287e0:
007287E0  55                        PUSH EBP
007287E1  8B EC                     MOV EBP,ESP
007287E3  A1 04 71 85 00            MOV EAX,[0x00857104]
007287E8  53                        PUSH EBX
007287E9  56                        PUSH ESI
007287EA  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
007287ED  3B F0                     CMP ESI,EAX
007287EF  57                        PUSH EDI
007287F0  74 40                     JZ 0x00728832
007287F2  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
007287F5  8B 1F                     MOV EBX,dword ptr [EDI]
LAB_007287f7:
007287F7  A1 0C 71 85 00            MOV EAX,[0x0085710c]
007287FC  8D 0C 33                  LEA ECX,[EBX + ESI*0x1]
007287FF  3B C8                     CMP ECX,EAX
00728801  7C 04                     JL 0x00728807
00728803  33 C9                     XOR ECX,ECX
00728805  EB 07                     JMP 0x0072880e
LAB_00728807:
00728807  85 C9                     TEST ECX,ECX
00728809  7D 03                     JGE 0x0072880e
0072880B  8D 48 FF                  LEA ECX,[EAX + -0x1]
LAB_0072880e:
0072880E  8B 15 10 71 85 00         MOV EDX,dword ptr [0x00857110]
00728814  0F BF 44 CA 02            MOVSX EAX,word ptr [EDX + ECX*0x8 + 0x2]
00728819  0F BF 54 F2 02            MOVSX EDX,word ptr [EDX + ESI*0x8 + 0x2]
0072881E  2B C2                     SUB EAX,EDX
00728820  85 C0                     TEST EAX,EAX
00728822  89 47 04                  MOV dword ptr [EDI + 0x4],EAX
00728825  7F 14                     JG 0x0072883b
00728827  A1 04 71 85 00            MOV EAX,[0x00857104]
0072882C  8B F1                     MOV ESI,ECX
0072882E  3B C8                     CMP ECX,EAX
00728830  75 C5                     JNZ 0x007287f7
LAB_00728832:
00728832  5F                        POP EDI
00728833  5E                        POP ESI
00728834  33 C0                     XOR EAX,EAX
00728836  5B                        POP EBX
00728837  5D                        POP EBP
00728838  C2 08 00                  RET 0x8
LAB_0072883b:
0072883B  89 4F 08                  MOV dword ptr [EDI + 0x8],ECX
0072883E  A1 10 71 85 00            MOV EAX,[0x00857110]
00728843  0F BF 14 F0               MOVSX EDX,word ptr [EAX + ESI*0x8]
00728847  C1 E2 10                  SHL EDX,0x10
0072884A  89 57 0C                  MOV dword ptr [EDI + 0xc],EDX
0072884D  A1 10 71 85 00            MOV EAX,[0x00857110]
00728852  0F BF 14 F0               MOVSX EDX,word ptr [EAX + ESI*0x8]
00728856  0F BF 04 C8               MOVSX EAX,word ptr [EAX + ECX*0x8]
0072885A  2B C2                     SUB EAX,EDX
0072885C  C1 E0 10                  SHL EAX,0x10
0072885F  99                        CDQ
00728860  F7 7F 04                  IDIV dword ptr [EDI + 0x4]
00728863  89 47 10                  MOV dword ptr [EDI + 0x10],EAX
00728866  A1 10 71 85 00            MOV EAX,[0x00857110]
0072886B  0F BF 54 F0 04            MOVSX EDX,word ptr [EAX + ESI*0x8 + 0x4]
00728870  C1 E2 10                  SHL EDX,0x10
00728873  89 57 14                  MOV dword ptr [EDI + 0x14],EDX
00728876  A1 10 71 85 00            MOV EAX,[0x00857110]
0072887B  0F BF 54 F0 04            MOVSX EDX,word ptr [EAX + ESI*0x8 + 0x4]
00728880  0F BF 44 C8 04            MOVSX EAX,word ptr [EAX + ECX*0x8 + 0x4]
00728885  2B C2                     SUB EAX,EDX
00728887  C1 E0 10                  SHL EAX,0x10
0072888A  99                        CDQ
0072888B  F7 7F 04                  IDIV dword ptr [EDI + 0x4]
0072888E  89 47 18                  MOV dword ptr [EDI + 0x18],EAX
00728891  5F                        POP EDI
00728892  5E                        POP ESI
00728893  B8 01 00 00 00            MOV EAX,0x1
00728898  5B                        POP EBX
00728899  5D                        POP EBP
0072889A  C2 08 00                  RET 0x8
