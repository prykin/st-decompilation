STAllPlayersC::PushTV:
0044AF50  55                        PUSH EBP
0044AF51  8B EC                     MOV EBP,ESP
0044AF53  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0044AF56  56                        PUSH ESI
0044AF57  57                        PUSH EDI
0044AF58  33 FF                     XOR EDI,EDI
0044AF5A  2B C7                     SUB EAX,EDI
0044AF5C  74 4A                     JZ 0x0044afa8
0044AF5E  48                        DEC EAX
0044AF5F  74 29                     JZ 0x0044af8a
0044AF61  68 0C 63 7A 00            PUSH 0x7a630c
0044AF66  68 CC 4C 7A 00            PUSH 0x7a4ccc
0044AF6B  57                        PUSH EDI
0044AF6C  57                        PUSH EDI
0044AF6D  68 28 30 00 00            PUSH 0x3028
0044AF72  68 04 60 7A 00            PUSH 0x7a6004
0044AF77  E8 54 25 26 00            CALL 0x006ad4d0
0044AF7C  83 C4 18                  ADD ESP,0x18
0044AF7F  85 C0                     TEST EAX,EAX
0044AF81  74 75                     JZ 0x0044aff8
0044AF83  CC                        INT3
LAB_0044af8a:
0044AF8A  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
0044AF8E  57                        PUSH EDI
0044AF8F  6A 0F                     PUSH 0xf
0044AF91  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0044AF94  8D 14 D0                  LEA EDX,[EAX + EDX*0x8]
0044AF97  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
0044AF9A  C1 E2 04                  SHL EDX,0x4
0044AF9D  03 D0                     ADD EDX,EAX
0044AF9F  8D 34 55 D3 4F 7F 00      LEA ESI,[EDX*0x2 + 0x7f4fd3]
0044AFA6  EB 1C                     JMP 0x0044afc4
LAB_0044afa8:
0044AFA8  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
0044AFAC  57                        PUSH EDI
0044AFAD  6A 0E                     PUSH 0xe
0044AFAF  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0044AFB2  8D 14 D0                  LEA EDX,[EAX + EDX*0x8]
0044AFB5  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
0044AFB8  C1 E2 04                  SHL EDX,0x4
0044AFBB  03 D0                     ADD EDX,EAX
0044AFBD  8D 34 55 83 4F 7F 00      LEA ESI,[EDX*0x2 + 0x7f4f83]
LAB_0044afc4:
0044AFC4  E8 8C 9C FB FF            CALL 0x00404c55
0044AFC9  8B 46 4A                  MOV EAX,dword ptr [ESI + 0x4a]
0044AFCC  3B C7                     CMP EAX,EDI
0044AFCE  74 0D                     JZ 0x0044afdd
0044AFD0  50                        PUSH EAX
0044AFD1  E8 3A 31 26 00            CALL 0x006ae110
0044AFD6  89 7E 4A                  MOV dword ptr [ESI + 0x4a],EDI
0044AFD9  66 89 7E 4E               MOV word ptr [ESI + 0x4e],DI
LAB_0044afdd:
0044AFDD  6A 40                     PUSH 0x40
0044AFDF  8D 4E 10                  LEA ECX,[ESI + 0x10]
0044AFE2  56                        PUSH ESI
0044AFE3  51                        PUSH ECX
0044AFE4  89 7E 40                  MOV dword ptr [ESI + 0x40],EDI
0044AFE7  E8 84 2A 2E 00            CALL 0x0072da70
0044AFEC  83 C4 0C                  ADD ESP,0xc
0044AFEF  89 3E                     MOV dword ptr [ESI],EDI
0044AFF1  89 7E 0A                  MOV dword ptr [ESI + 0xa],EDI
0044AFF4  66 89 7E 0E               MOV word ptr [ESI + 0xe],DI
LAB_0044aff8:
0044AFF8  5F                        POP EDI
0044AFF9  5E                        POP ESI
0044AFFA  5D                        POP EBP
0044AFFB  C2 08 00                  RET 0x8
