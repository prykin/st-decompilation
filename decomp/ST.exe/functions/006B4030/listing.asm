FUN_006b4030:
006B4030  55                        PUSH EBP
006B4031  8B EC                     MOV EBP,ESP
006B4033  83 EC 10                  SUB ESP,0x10
006B4036  56                        PUSH ESI
006B4037  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B403A  8B 86 20 02 00 00         MOV EAX,dword ptr [ESI + 0x220]
006B4040  85 C0                     TEST EAX,EAX
006B4042  0F 84 89 00 00 00         JZ 0x006b40d1
006B4048  8B 8E EC 01 00 00         MOV ECX,dword ptr [ESI + 0x1ec]
006B404E  8B 86 E4 01 00 00         MOV EAX,dword ptr [ESI + 0x1e4]
006B4054  8B D1                     MOV EDX,ECX
006B4056  53                        PUSH EBX
006B4057  0F AF 55 0C               IMUL EDX,dword ptr [EBP + 0xc]
006B405B  57                        PUSH EDI
006B405C  8B BC C6 1C 01 00 00      MOV EDI,dword ptr [ESI + EAX*0x8 + 0x11c]
006B4063  03 FA                     ADD EDI,EDX
006B4065  8B 96 F0 01 00 00         MOV EDX,dword ptr [ESI + 0x1f0]
006B406B  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
006B406E  8B 9C C6 20 01 00 00      MOV EBX,dword ptr [ESI + EAX*0x8 + 0x120]
006B4075  8B FA                     MOV EDI,EDX
006B4077  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006B407A  0F AF 7D 10               IMUL EDI,dword ptr [EBP + 0x10]
006B407E  C1 E0 04                  SHL EAX,0x4
006B4081  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006B4084  8D 4D F0                  LEA ECX,[EBP + -0x10]
006B4087  8D 44 30 14               LEA EAX,[EAX + ESI*0x1 + 0x14]
006B408B  8D 55 F0                  LEA EDX,[EBP + -0x10]
006B408E  50                        PUSH EAX
006B408F  03 DF                     ADD EBX,EDI
006B4091  51                        PUSH ECX
006B4092  52                        PUSH EDX
006B4093  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006B4096  E8 15 BE 01 00            CALL 0x006cfeb0
006B409B  83 C4 0C                  ADD ESP,0xc
006B409E  85 C0                     TEST EAX,EAX
006B40A0  5F                        POP EDI
006B40A1  5B                        POP EBX
006B40A2  74 2D                     JZ 0x006b40d1
006B40A4  8B 86 F4 01 00 00         MOV EAX,dword ptr [ESI + 0x1f4]
006B40AA  8B 8E 20 02 00 00         MOV ECX,dword ptr [ESI + 0x220]
006B40B0  83 C0 07                  ADD EAX,0x7
006B40B3  99                        CDQ
006B40B4  83 E2 07                  AND EDX,0x7
006B40B7  03 C2                     ADD EAX,EDX
006B40B9  C1 F8 03                  SAR EAX,0x3
006B40BC  0F AF 45 10               IMUL EAX,dword ptr [EBP + 0x10]
006B40C0  03 C1                     ADD EAX,ECX
006B40C2  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
006B40C5  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006B40C8  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006B40CB  80 F2 07                  XOR DL,0x7
006B40CE  0F AB 11                  BTS [ECX],EDX
LAB_006b40d1:
006B40D1  5E                        POP ESI
006B40D2  8B E5                     MOV ESP,EBP
006B40D4  5D                        POP EBP
006B40D5  C2 0C 00                  RET 0xc
