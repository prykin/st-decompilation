FUN_00614a90:
00614A90  55                        PUSH EBP
00614A91  8B EC                     MOV EBP,ESP
00614A93  51                        PUSH ECX
00614A94  53                        PUSH EBX
00614A95  8B D9                     MOV EBX,ECX
00614A97  85 DB                     TEST EBX,EBX
00614A99  57                        PUSH EDI
00614A9A  74 08                     JZ 0x00614aa4
00614A9C  8D BB D5 01 00 00         LEA EDI,[EBX + 0x1d5]
00614AA2  EB 02                     JMP 0x00614aa6
LAB_00614aa4:
00614AA4  33 FF                     XOR EDI,EDI
LAB_00614aa6:
00614AA6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00614AA9  56                        PUSH ESI
00614AAA  B9 45 00 00 00            MOV ECX,0x45
00614AAF  8B F0                     MOV ESI,EAX
00614AB1  F3 A5                     MOVSD.REP ES:EDI,ESI
00614AB3  66 A5                     MOVSW ES:EDI,ESI
00614AB5  8D B0 16 01 00 00         LEA ESI,[EAX + 0x116]
00614ABB  8B 83 DD 02 00 00         MOV EAX,dword ptr [EBX + 0x2dd]
00614AC1  85 C0                     TEST EAX,EAX
00614AC3  C7 45 FC 16 01 00 00      MOV dword ptr [EBP + -0x4],0x116
00614ACA  74 5F                     JZ 0x00614b2b
00614ACC  8B 83 D5 02 00 00         MOV EAX,dword ptr [EBX + 0x2d5]
00614AD2  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
00614AD9  2B C8                     SUB ECX,EAX
00614ADB  C1 E1 02                  SHL ECX,0x2
00614ADE  51                        PUSH ECX
00614ADF  E8 8C 61 09 00            CALL 0x006aac70
00614AE4  8B 93 D5 02 00 00         MOV EDX,dword ptr [EBX + 0x2d5]
00614AEA  8B F8                     MOV EDI,EAX
00614AEC  89 83 DD 02 00 00         MOV dword ptr [EBX + 0x2dd],EAX
00614AF2  8D 0C D5 00 00 00 00      LEA ECX,[EDX*0x8 + 0x0]
00614AF9  2B CA                     SUB ECX,EDX
00614AFB  C1 E1 02                  SHL ECX,0x2
00614AFE  8B D1                     MOV EDX,ECX
00614B00  C1 E9 02                  SHR ECX,0x2
00614B03  F3 A5                     MOVSD.REP ES:EDI,ESI
00614B05  8B CA                     MOV ECX,EDX
00614B07  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00614B0A  83 E1 03                  AND ECX,0x3
00614B0D  F3 A4                     MOVSB.REP ES:EDI,ESI
00614B0F  8B 83 D5 02 00 00         MOV EAX,dword ptr [EBX + 0x2d5]
00614B15  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
00614B1C  2B C8                     SUB ECX,EAX
00614B1E  8D 04 8D 16 01 00 00      LEA EAX,[ECX*0x4 + 0x116]
00614B25  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00614B28  8D 34 10                  LEA ESI,[EAX + EDX*0x1]
LAB_00614b2b:
00614B2B  8B 83 E5 02 00 00         MOV EAX,dword ptr [EBX + 0x2e5]
00614B31  85 C0                     TEST EAX,EAX
00614B33  74 46                     JZ 0x00614b7b
00614B35  8B 83 E1 02 00 00         MOV EAX,dword ptr [EBX + 0x2e1]
00614B3B  C1 E0 02                  SHL EAX,0x2
00614B3E  50                        PUSH EAX
00614B3F  E8 2C 61 09 00            CALL 0x006aac70
00614B44  8B 8B E1 02 00 00         MOV ECX,dword ptr [EBX + 0x2e1]
00614B4A  8B F8                     MOV EDI,EAX
00614B4C  C1 E1 02                  SHL ECX,0x2
00614B4F  8B D1                     MOV EDX,ECX
00614B51  89 83 E5 02 00 00         MOV dword ptr [EBX + 0x2e5],EAX
00614B57  C1 E9 02                  SHR ECX,0x2
00614B5A  F3 A5                     MOVSD.REP ES:EDI,ESI
00614B5C  8B CA                     MOV ECX,EDX
00614B5E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00614B61  83 E1 03                  AND ECX,0x3
00614B64  F3 A4                     MOVSB.REP ES:EDI,ESI
00614B66  8B 83 D5 02 00 00         MOV EAX,dword ptr [EBX + 0x2d5]
00614B6C  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
00614B73  2B C8                     SUB ECX,EAX
00614B75  8D 04 8A                  LEA EAX,[EDX + ECX*0x4]
00614B78  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_00614b7b:
00614B7B  8B 83 52 02 00 00         MOV EAX,dword ptr [EBX + 0x252]
00614B81  5E                        POP ESI
00614B82  85 C0                     TEST EAX,EAX
00614B84  74 0A                     JZ 0x00614b90
00614B86  C7 83 52 02 00 00 00 00 00 00  MOV dword ptr [EBX + 0x252],0x0
LAB_00614b90:
00614B90  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00614B93  5F                        POP EDI
00614B94  5B                        POP EBX
00614B95  8B E5                     MOV ESP,EBP
00614B97  5D                        POP EBP
00614B98  C2 04 00                  RET 0x4
