SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0065ED90::FUN_0065ed90:
0065ED90  55                        PUSH EBP
0065ED91  8B EC                     MOV EBP,ESP
0065ED93  83 EC 18                  SUB ESP,0x18
0065ED96  53                        PUSH EBX
0065ED97  56                        PUSH ESI
0065ED98  8D 45 E8                  LEA EAX,[EBP + -0x18]
0065ED9B  57                        PUSH EDI
0065ED9C  50                        PUSH EAX
0065ED9D  8D 55 F8                  LEA EDX,[EBP + -0x8]
0065EDA0  8D 45 FC                  LEA EAX,[EBP + -0x4]
0065EDA3  52                        PUSH EDX
0065EDA4  50                        PUSH EAX
0065EDA5  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0065EDA8  BB FC FF FF FF            MOV EBX,0xfffffffc
0065EDAD  E8 D9 3C DA FF            CALL 0x00402a8b
0065EDB2  85 C0                     TEST EAX,EAX
0065EDB4  0F 85 46 01 00 00         JNZ 0x0065ef00
0065EDBA  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0065EDBD  0F BF 41 06               MOVSX EAX,word ptr [ECX + 0x6]
0065EDC1  99                        CDQ
0065EDC2  2B C2                     SUB EAX,EDX
0065EDC4  0F BF 11                  MOVSX EDX,word ptr [ECX]
0065EDC7  8B F8                     MOV EDI,EAX
0065EDC9  0F BF 41 08               MOVSX EAX,word ptr [ECX + 0x8]
0065EDCD  D1 FF                     SAR EDI,0x1
0065EDCF  03 FA                     ADD EDI,EDX
0065EDD1  99                        CDQ
0065EDD2  2B C2                     SUB EAX,EDX
0065EDD4  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0065EDD7  8B F0                     MOV ESI,EAX
0065EDD9  0F BF 41 02               MOVSX EAX,word ptr [ECX + 0x2]
0065EDDD  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0065EDE0  D1 FE                     SAR ESI,0x1
0065EDE2  03 F0                     ADD ESI,EAX
0065EDE4  56                        PUSH ESI
0065EDE5  57                        PUSH EDI
0065EDE6  51                        PUSH ECX
0065EDE7  52                        PUSH EDX
0065EDE8  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
0065EDEB  E8 E8 E0 04 00            CALL 0x006aced8
0065EDF0  83 C4 10                  ADD ESP,0x10
0065EDF3  83 F8 07                  CMP EAX,0x7
0065EDF6  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0065EDF9  0F 8E 01 01 00 00         JLE 0x0065ef00
0065EDFF  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0065EE02  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0065EE05  8B C7                     MOV EAX,EDI
0065EE07  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
0065EE0A  2B C1                     SUB EAX,ECX
0065EE0C  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0065EE0F  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0065EE12  2B DE                     SUB EBX,ESI
0065EE14  66 C7 41 04 00 00         MOV word ptr [ECX + 0x4],0x0
0065EE1A  66 C7 41 06 03 00         MOV word ptr [ECX + 0x6],0x3
0065EE20  66 C7 41 08 03 00         MOV word ptr [ECX + 0x8],0x3
0065EE26  66 C7 41 0A 05 00         MOV word ptr [ECX + 0xa],0x5
0065EE2C  8B 42 1C                  MOV EAX,dword ptr [EDX + 0x1c]
0065EE2F  BE 06 00 00 00            MOV ESI,0x6
0065EE34  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0065EE3A  05 39 30 00 00            ADD EAX,0x3039
0065EE3F  89 42 1C                  MOV dword ptr [EDX + 0x1c],EAX
0065EE42  33 D2                     XOR EDX,EDX
0065EE44  C1 E8 10                  SHR EAX,0x10
0065EE47  F7 F6                     DIV ESI
0065EE49  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0065EE4C  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
0065EE4F  8B F2                     MOV ESI,EDX
0065EE51  83 C6 14                  ADD ESI,0x14
0065EE54  3D 00 02 00 00            CMP EAX,0x200
0065EE59  74 38                     JZ 0x0065ee93
0065EE5B  3D 00 04 00 00            CMP EAX,0x400
0065EE60  74 2A                     JZ 0x0065ee8c
0065EE62  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0065EE65  8B 42 1C                  MOV EAX,dword ptr [EDX + 0x1c]
0065EE68  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0065EE6E  05 39 30 00 00            ADD EAX,0x3039
0065EE73  89 42 1C                  MOV dword ptr [EDX + 0x1c],EAX
0065EE76  25 00 00 01 00            AND EAX,0x10000
0065EE7B  F7 D8                     NEG EAX
0065EE7D  1B C0                     SBB EAX,EAX
0065EE7F  25 00 02 00 00            AND EAX,0x200
0065EE84  05 00 02 00 00            ADD EAX,0x200
0065EE89  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
LAB_0065ee8c:
0065EE8C  3D 00 02 00 00            CMP EAX,0x200
0065EE91  75 27                     JNZ 0x0065eeba
LAB_0065ee93:
0065EE93  8B C6                     MOV EAX,ESI
0065EE95  0F AF C3                  IMUL EAX,EBX
0065EE98  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0065EE9B  99                        CDQ
0065EE9C  F7 FB                     IDIV EBX
0065EE9E  8D 54 38 FF               LEA EDX,[EAX + EDI*0x1 + -0x1]
0065EEA2  8B C6                     MOV EAX,ESI
0065EEA4  0F AF 45 F0               IMUL EAX,dword ptr [EBP + -0x10]
0065EEA8  66 89 11                  MOV word ptr [ECX],DX
0065EEAB  8D 79 02                  LEA EDI,[ECX + 0x2]
0065EEAE  99                        CDQ
0065EEAF  F7 FB                     IDIV EBX
0065EEB1  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0065EEB4  8D 44 10 FF               LEA EAX,[EAX + EDX*0x1 + -0x1]
0065EEB8  EB 25                     JMP 0x0065eedf
LAB_0065eeba:
0065EEBA  8B C6                     MOV EAX,ESI
0065EEBC  0F AF C3                  IMUL EAX,EBX
0065EEBF  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0065EEC2  99                        CDQ
0065EEC3  F7 FB                     IDIV EBX
0065EEC5  2B F8                     SUB EDI,EAX
0065EEC7  8B C6                     MOV EAX,ESI
0065EEC9  0F AF 45 F0               IMUL EAX,dword ptr [EBP + -0x10]
0065EECD  99                        CDQ
0065EECE  F7 FB                     IDIV EBX
0065EED0  4F                        DEC EDI
0065EED1  66 89 39                  MOV word ptr [ECX],DI
0065EED4  8D 79 02                  LEA EDI,[ECX + 0x2]
0065EED7  8B D0                     MOV EDX,EAX
0065EED9  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0065EEDC  2B C2                     SUB EAX,EDX
0065EEDE  48                        DEC EAX
LAB_0065eedf:
0065EEDF  66 89 07                  MOV word ptr [EDI],AX
0065EEE2  8D 41 08                  LEA EAX,[ECX + 0x8]
0065EEE5  50                        PUSH EAX
0065EEE6  8D 41 06                  LEA EAX,[ECX + 0x6]
0065EEE9  50                        PUSH EAX
0065EEEA  57                        PUSH EDI
0065EEEB  51                        PUSH ECX
0065EEEC  E8 15 2A DA FF            CALL 0x00401906
0065EEF1  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0065EEF4  83 C4 10                  ADD ESP,0x10
0065EEF7  5F                        POP EDI
0065EEF8  5E                        POP ESI
0065EEF9  5B                        POP EBX
0065EEFA  8B E5                     MOV ESP,EBP
0065EEFC  5D                        POP EBP
0065EEFD  C2 0C 00                  RET 0xc
LAB_0065ef00:
0065EF00  5F                        POP EDI
0065EF01  8B C3                     MOV EAX,EBX
0065EF03  5E                        POP ESI
0065EF04  5B                        POP EBX
0065EF05  8B E5                     MOV ESP,EBP
0065EF07  5D                        POP EBP
0065EF08  C2 0C 00                  RET 0xc
