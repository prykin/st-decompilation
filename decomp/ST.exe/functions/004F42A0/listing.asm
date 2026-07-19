CPanelTy::PaintTab:
004F42A0  55                        PUSH EBP
004F42A1  8B EC                     MOV EBP,ESP
004F42A3  83 EC 54                  SUB ESP,0x54
004F42A6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004F42A9  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004F42AC  81 E2 FF 00 00 00         AND EDX,0xff
004F42B2  53                        PUSH EBX
004F42B3  8B 40 14                  MOV EAX,dword ptr [EAX + 0x14]
004F42B6  56                        PUSH ESI
004F42B7  8B 5C 91 3C               MOV EBX,dword ptr [ECX + EDX*0x4 + 0x3c]
004F42BB  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
004F42C2  8B 70 0C                  MOV ESI,dword ptr [EAX + 0xc]
004F42C5  8B 40 10                  MOV EAX,dword ptr [EAX + 0x10]
004F42C8  2B F3                     SUB ESI,EBX
004F42CA  57                        PUSH EDI
004F42CB  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
004F42CE  8D 72 FF                  LEA ESI,[EDX + -0x1]
004F42D1  83 FE 06                  CMP ESI,0x6
004F42D4  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
004F42D7  0F 87 7D 01 00 00         JA 0x004f445a
switchD_004f42dd::switchD:
004F42DD  FF 24 B5 BC 44 4F 00      JMP dword ptr [ESI*0x4 + 0x4f44bc]
switchD_004f42dd::caseD_1:
004F42E4  8B B1 34 01 00 00         MOV ESI,dword ptr [ECX + 0x134]
004F42EA  EB 2C                     JMP 0x004f4318
switchD_004f42dd::caseD_3:
004F42EC  8B B1 34 01 00 00         MOV ESI,dword ptr [ECX + 0x134]
004F42F2  85 F6                     TEST ESI,ESI
004F42F4  74 35                     JZ 0x004f432b
004F42F6  2B 84 91 94 00 00 00      SUB EAX,dword ptr [ECX + EDX*0x4 + 0x94]
004F42FD  EB 32                     JMP 0x004f4331
switchD_004f42dd::caseD_5:
004F42FF  8B B1 38 01 00 00         MOV ESI,dword ptr [ECX + 0x138]
004F4305  85 F6                     TEST ESI,ESI
004F4307  74 22                     JZ 0x004f432b
004F4309  2B 84 91 94 00 00 00      SUB EAX,dword ptr [ECX + EDX*0x4 + 0x94]
004F4310  EB 1F                     JMP 0x004f4331
switchD_004f42dd::caseD_7:
004F4312  8B B1 38 01 00 00         MOV ESI,dword ptr [ECX + 0x138]
LAB_004f4318:
004F4318  85 F6                     TEST ESI,ESI
004F431A  74 09                     JZ 0x004f4325
004F431C  2B 84 91 94 00 00 00      SUB EAX,dword ptr [ECX + EDX*0x4 + 0x94]
004F4323  EB 0C                     JMP 0x004f4331
LAB_004f4325:
004F4325  2B 81 C0 00 00 00         SUB EAX,dword ptr [ECX + 0xc0]
LAB_004f432b:
004F432B  2B 05 34 67 80 00         SUB EAX,dword ptr [0x00806734]
CPanelTy::PaintTab::cf_common_join_004F4331:
004F4331  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004F4334  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
004F4337  85 C0                     TEST EAX,EAX
004F4339  0F 84 74 01 00 00         JZ 0x004f44b3
004F433F  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
004F4345  8D 45 B0                  LEA EAX,[EBP + -0x50]
004F4348  8D 55 AC                  LEA EDX,[EBP + -0x54]
004F434B  6A 00                     PUSH 0x0
004F434D  50                        PUSH EAX
004F434E  89 4D AC                  MOV dword ptr [EBP + -0x54],ECX
004F4351  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004F4357  E8 94 94 23 00            CALL 0x0072d7f0
004F435C  8B F0                     MOV ESI,EAX
004F435E  83 C4 08                  ADD ESP,0x8
004F4361  85 F6                     TEST ESI,ESI
004F4363  0F 85 0B 01 00 00         JNZ 0x004f4474
004F4369  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
004F436C  53                        PUSH EBX
004F436D  FF 55 1C                  CALL dword ptr [EBP + 0x1c]
004F4370  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004F4373  50                        PUSH EAX
004F4374  6A 02                     PUSH 0x2
004F4376  51                        PUSH ECX
004F4377  E8 84 E8 1F 00            CALL 0x006f2c00
004F437C  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004F437F  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F4385  83 C4 10                  ADD ESP,0x10
004F4388  6A 01                     PUSH 0x1
004F438A  56                        PUSH ESI
004F438B  50                        PUSH EAX
004F438C  52                        PUSH EDX
004F438D  E8 4E D9 1F 00            CALL 0x006f1ce0
004F4392  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
004F4395  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
004F4398  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004F439B  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004F439E  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004F43A1  50                        PUSH EAX
004F43A2  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004F43A5  81 E6 FF 00 00 00         AND ESI,0xff
004F43AB  50                        PUSH EAX
004F43AC  51                        PUSH ECX
004F43AD  8B 84 B7 80 01 00 00      MOV EAX,dword ptr [EDI + ESI*0x4 + 0x180]
004F43B4  52                        PUSH EDX
004F43B5  50                        PUSH EAX
004F43B6  E8 6E EE F0 FF            CALL 0x00403229
004F43BB  83 C4 14                  ADD ESP,0x14
004F43BE  8D 4D FC                  LEA ECX,[EBP + -0x4]
004F43C1  51                        PUSH ECX
004F43C2  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F43C8  E8 13 DD 1F 00            CALL 0x006f20e0
004F43CD  8B 53 14                  MOV EDX,dword ptr [EBX + 0x14]
004F43D0  83 7A 04 03               CMP dword ptr [EDX + 0x4],0x3
004F43D4  75 46                     JNZ 0x004f441c
004F43D6  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
004F43D9  85 C0                     TEST EAX,EAX
004F43DB  74 3F                     JZ 0x004f441c
004F43DD  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F43E3  6A 01                     PUSH 0x1
004F43E5  6A 00                     PUSH 0x0
004F43E7  50                        PUSH EAX
004F43E8  6A 06                     PUSH 0x6
004F43EA  E8 F1 D8 1F 00            CALL 0x006f1ce0
004F43EF  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004F43F2  8B 94 B7 80 01 00 00      MOV EDX,dword ptr [EDI + ESI*0x4 + 0x180]
004F43F9  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004F43FC  50                        PUSH EAX
004F43FD  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004F4400  6A 06                     PUSH 0x6
004F4402  50                        PUSH EAX
004F4403  51                        PUSH ECX
004F4404  52                        PUSH EDX
004F4405  E8 1F EE F0 FF            CALL 0x00403229
004F440A  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F4410  83 C4 14                  ADD ESP,0x14
004F4413  8D 45 FC                  LEA EAX,[EBP + -0x4]
004F4416  50                        PUSH EAX
004F4417  E8 C4 DC 1F 00            CALL 0x006f20e0
LAB_004f441c:
004F441C  80 7D 08 0B               CMP byte ptr [EBP + 0x8],0xb
004F4420  73 26                     JNC 0x004f4448
004F4422  8B 84 B7 48 01 00 00      MOV EAX,dword ptr [EDI + ESI*0x4 + 0x148]
004F4429  85 C0                     TEST EAX,EAX
004F442B  7C 1B                     JL 0x004f4448
004F442D  8B 8C B7 94 00 00 00      MOV ECX,dword ptr [EDI + ESI*0x4 + 0x94]
004F4434  8B 54 B7 3C               MOV EDX,dword ptr [EDI + ESI*0x4 + 0x3c]
004F4438  51                        PUSH ECX
004F4439  52                        PUSH EDX
004F443A  6A FF                     PUSH -0x1
004F443C  50                        PUSH EAX
004F443D  A1 A8 75 80 00            MOV EAX,[0x008075a8]
004F4442  50                        PUSH EAX
004F4443  E8 F8 F1 1B 00            CALL 0x006b3640
LAB_004f4448:
004F4448  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
004F444B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004F4451  5F                        POP EDI
004F4452  5E                        POP ESI
004F4453  5B                        POP EBX
004F4454  8B E5                     MOV ESP,EBP
004F4456  5D                        POP EBP
004F4457  C2 18 00                  RET 0x18
switchD_004f42dd::caseD_2:
004F445A  8B B1 30 01 00 00         MOV ESI,dword ptr [ECX + 0x130]
004F4460  85 F6                     TEST ESI,ESI
004F4462  0F 84 C3 FE FF FF         JZ 0x004f432b
004F4468  2B 84 91 94 00 00 00      SUB EAX,dword ptr [ECX + EDX*0x4 + 0x94]
004F446F  E9 BD FE FF FF            JMP 0x004f4331
LAB_004f4474:
004F4474  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
004F4477  68 9C 1B 7C 00            PUSH 0x7c1b9c
004F447C  68 CC 4C 7A 00            PUSH 0x7a4ccc
004F4481  56                        PUSH ESI
004F4482  6A 00                     PUSH 0x0
004F4484  68 56 02 00 00            PUSH 0x256
004F4489  68 4C 1A 7C 00            PUSH 0x7c1a4c
004F448E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004F4494  E8 37 90 1B 00            CALL 0x006ad4d0
004F4499  83 C4 18                  ADD ESP,0x18
004F449C  85 C0                     TEST EAX,EAX
004F449E  74 01                     JZ 0x004f44a1
004F44A0  CC                        INT3
LAB_004f44a1:
004F44A1  68 56 02 00 00            PUSH 0x256
004F44A6  68 4C 1A 7C 00            PUSH 0x7c1a4c
004F44AB  6A 00                     PUSH 0x0
004F44AD  56                        PUSH ESI
004F44AE  E8 8D 19 1B 00            CALL 0x006a5e40
LAB_004f44b3:
004F44B3  5F                        POP EDI
004F44B4  5E                        POP ESI
004F44B5  5B                        POP EBX
004F44B6  8B E5                     MOV ESP,EBP
004F44B8  5D                        POP EBP
004F44B9  C2 18 00                  RET 0x18
