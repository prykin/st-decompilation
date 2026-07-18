FUN_00695180:
00695180  55                        PUSH EBP
00695181  8B EC                     MOV EBP,ESP
00695183  83 EC 14                  SUB ESP,0x14
00695186  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00695189  53                        PUSH EBX
0069518A  56                        PUSH ESI
0069518B  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0069518E  8B 40 10                  MOV EAX,dword ptr [EAX + 0x10]
00695191  57                        PUSH EDI
00695192  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00695195  33 D2                     XOR EDX,EDX
00695197  33 DB                     XOR EBX,EBX
00695199  33 FF                     XOR EDI,EDI
0069519B  3B C8                     CMP ECX,EAX
0069519D  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006951A0  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006951A3  74 0B                     JZ 0x006951b0
006951A5  5F                        POP EDI
006951A6  5E                        POP ESI
006951A7  33 C0                     XOR EAX,EAX
006951A9  5B                        POP EBX
006951AA  8B E5                     MOV ESP,EBP
006951AC  5D                        POP EBP
006951AD  C2 10 00                  RET 0x10
LAB_006951b0:
006951B0  39 55 14                  CMP dword ptr [EBP + 0x14],EDX
006951B3  75 0E                     JNZ 0x006951c3
006951B5  5F                        POP EDI
006951B6  5E                        POP ESI
006951B7  B8 01 00 00 00            MOV EAX,0x1
006951BC  5B                        POP EBX
006951BD  8B E5                     MOV ESP,EBP
006951BF  5D                        POP EBP
006951C0  C2 10 00                  RET 0x10
LAB_006951c3:
006951C3  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
006951C6  3B CA                     CMP ECX,EDX
006951C8  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
006951CB  75 5E                     JNZ 0x0069522b
006951CD  3B C2                     CMP EAX,EDX
006951CF  7E 5A                     JLE 0x0069522b
006951D1  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
006951D4  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006951D7  8B 71 0C                  MOV ESI,dword ptr [ECX + 0xc]
006951DA  89 75 14                  MOV dword ptr [EBP + 0x14],ESI
006951DD  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006951E0  8B 76 18                  MOV ESI,dword ptr [ESI + 0x18]
006951E3  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
006951E6  8B 76 0C                  MOV ESI,dword ptr [ESI + 0xc]
006951E9  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
006951EC  EB 03                     JMP 0x006951f1
LAB_006951ee:
006951EE  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
LAB_006951f1:
006951F1  3B 55 14                  CMP EDX,dword ptr [EBP + 0x14]
006951F4  73 0B                     JNC 0x00695201
006951F6  8B 71 08                  MOV ESI,dword ptr [ECX + 0x8]
006951F9  0F AF F2                  IMUL ESI,EDX
006951FC  03 71 1C                  ADD ESI,dword ptr [ECX + 0x1c]
006951FF  EB 02                     JMP 0x00695203
LAB_00695201:
00695201  33 F6                     XOR ESI,ESI
LAB_00695203:
00695203  3B 55 F8                  CMP EDX,dword ptr [EBP + -0x8]
00695206  73 11                     JNC 0x00695219
00695208  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0069520B  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0069520E  0F AF CA                  IMUL ECX,EDX
00695211  03 48 1C                  ADD ECX,dword ptr [EAX + 0x1c]
00695214  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00695217  EB 02                     JMP 0x0069521b
LAB_00695219:
00695219  33 C9                     XOR ECX,ECX
LAB_0069521b:
0069521B  03 7E 2C                  ADD EDI,dword ptr [ESI + 0x2c]
0069521E  8B 71 2C                  MOV ESI,dword ptr [ECX + 0x2c]
00695221  03 DE                     ADD EBX,ESI
00695223  42                        INC EDX
00695224  3B D0                     CMP EDX,EAX
00695226  7C C6                     JL 0x006951ee
00695228  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
LAB_0069522b:
0069522B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0069522E  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
00695231  8B 40 14                  MOV EAX,dword ptr [EAX + 0x14]
00695234  8D 14 C9                  LEA EDX,[ECX + ECX*0x8]
00695237  C1 E2 04                  SHL EDX,0x4
0069523A  03 D1                     ADD EDX,ECX
0069523C  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
0069523F  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
00695242  8D 04 C9                  LEA EAX,[ECX + ECX*0x8]
00695245  C1 E0 04                  SHL EAX,0x4
00695248  03 C1                     ADD EAX,ECX
0069524A  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0069524D  03 D3                     ADD EDX,EBX
0069524F  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00695252  03 C7                     ADD EAX,EDI
00695254  3B C2                     CMP EAX,EDX
00695256  7E 07                     JLE 0x0069525f
00695258  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
LAB_0069525f:
0069525F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00695262  5F                        POP EDI
00695263  5E                        POP ESI
00695264  5B                        POP EBX
00695265  8B E5                     MOV ESP,EBP
00695267  5D                        POP EBP
00695268  C2 10 00                  RET 0x10
