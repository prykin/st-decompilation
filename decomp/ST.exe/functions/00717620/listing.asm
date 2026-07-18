FUN_00717620:
00717620  55                        PUSH EBP
00717621  8B EC                     MOV EBP,ESP
00717623  53                        PUSH EBX
00717624  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00717627  0F AF 5D 10               IMUL EBX,dword ptr [EBP + 0x10]
0071762B  56                        PUSH ESI
0071762C  57                        PUSH EDI
0071762D  53                        PUSH EBX
0071762E  E8 3D 36 F9 FF            CALL 0x006aac70
00717633  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00717636  8B CB                     MOV ECX,EBX
00717638  8B D1                     MOV EDX,ECX
0071763A  8B F8                     MOV EDI,EAX
0071763C  C1 E9 02                  SHR ECX,0x2
0071763F  F3 A5                     MOVSD.REP ES:EDI,ESI
00717641  8B CA                     MOV ECX,EDX
00717643  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
00717646  83 E1 03                  AND ECX,0x3
00717649  4B                        DEC EBX
0071764A  F3 A4                     MOVSB.REP ES:EDI,ESI
0071764C  8B C8                     MOV ECX,EAX
0071764E  78 20                     JS 0x00717670
00717650  8D 73 01                  LEA ESI,[EBX + 0x1]
00717653  8A 5D 18                  MOV BL,byte ptr [EBP + 0x18]
LAB_00717656:
00717656  8A 11                     MOV DL,byte ptr [ECX]
00717658  3A D3                     CMP DL,BL
0071765A  73 04                     JNC 0x00717660
0071765C  88 19                     MOV byte ptr [ECX],BL
0071765E  EB 0C                     JMP 0x0071766c
LAB_00717660:
00717660  8A 45 14                  MOV AL,byte ptr [EBP + 0x14]
00717663  3A D0                     CMP DL,AL
00717665  76 02                     JBE 0x00717669
00717667  88 01                     MOV byte ptr [ECX],AL
LAB_00717669:
00717669  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_0071766c:
0071766C  41                        INC ECX
0071766D  4E                        DEC ESI
0071766E  75 E6                     JNZ 0x00717656
LAB_00717670:
00717670  5F                        POP EDI
00717671  5E                        POP ESI
00717672  5B                        POP EBX
00717673  5D                        POP EBP
00717674  C2 14 00                  RET 0x14
