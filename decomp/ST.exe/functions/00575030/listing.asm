FUN_00575030:
00575030  55                        PUSH EBP
00575031  8B EC                     MOV EBP,ESP
00575033  53                        PUSH EBX
00575034  56                        PUSH ESI
00575035  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00575038  57                        PUSH EDI
00575039  0F BF 0E                  MOVSX ECX,word ptr [ESI]
0057503C  0F BF 46 02               MOVSX EAX,word ptr [ESI + 0x2]
00575040  0F AF C1                  IMUL EAX,ECX
00575043  99                        CDQ
00575044  83 E2 03                  AND EDX,0x3
00575047  03 C2                     ADD EAX,EDX
00575049  8B D8                     MOV EBX,EAX
0057504B  8B C1                     MOV EAX,ECX
0057504D  0F AF 45 10               IMUL EAX,dword ptr [EBP + 0x10]
00575051  99                        CDQ
00575052  2B C2                     SUB EAX,EDX
00575054  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00575057  C1 FB 02                  SAR EBX,0x2
0057505A  D1 F8                     SAR EAX,0x1
0057505C  8D 0C 9B                  LEA ECX,[EBX + EBX*0x4]
0057505F  03 D0                     ADD EDX,EAX
00575061  03 CA                     ADD ECX,EDX
00575063  C7 45 10 06 00 00 00      MOV dword ptr [EBP + 0x10],0x6
0057506A  8D 84 8E 59 04 00 00      LEA EAX,[ESI + ECX*0x4 + 0x459]
00575071  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_00575074:
00575074  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00575077  8B 01                     MOV EAX,dword ptr [ECX]
00575079  85 C0                     TEST EAX,EAX
0057507B  74 4B                     JZ 0x005750c8
0057507D  8D 78 0C                  LEA EDI,[EAX + 0xc]
00575080  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
00575083  85 C0                     TEST EAX,EAX
00575085  74 41                     JZ 0x005750c8
00575087  8B 96 51 04 00 00         MOV EDX,dword ptr [ESI + 0x451]
0057508D  C7 42 04 00 00 00 00      MOV dword ptr [EDX + 0x4],0x0
LAB_00575094:
00575094  8B 8E 51 04 00 00         MOV ECX,dword ptr [ESI + 0x451]
0057509A  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
0057509D  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
005750A0  3B D0                     CMP EDX,EAX
005750A2  73 1E                     JNC 0x005750c2
005750A4  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005750A7  0F AF C2                  IMUL EAX,EDX
005750AA  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
005750AD  8D 52 01                  LEA EDX,[EDX + 0x1]
005750B0  89 51 04                  MOV dword ptr [ECX + 0x4],EDX
005750B3  74 0D                     JZ 0x005750c2
005750B5  8B 0F                     MOV ECX,dword ptr [EDI]
005750B7  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
005750BA  3B CA                     CMP ECX,EDX
005750BC  75 D6                     JNZ 0x00575094
005750BE  85 C0                     TEST EAX,EAX
005750C0  75 06                     JNZ 0x005750c8
LAB_005750c2:
005750C2  57                        PUSH EDI
005750C3  E8 98 5F 13 00            CALL 0x006ab060
LAB_005750c8:
005750C8  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005750CB  8B D3                     MOV EDX,EBX
005750CD  F7 DA                     NEG EDX
005750CF  8D 0C 90                  LEA ECX,[EAX + EDX*0x4]
005750D2  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
005750D5  48                        DEC EAX
005750D6  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
005750D9  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
005750DC  75 96                     JNZ 0x00575074
005750DE  5F                        POP EDI
005750DF  5E                        POP ESI
005750E0  5B                        POP EBX
005750E1  5D                        POP EBP
005750E2  C3                        RET
