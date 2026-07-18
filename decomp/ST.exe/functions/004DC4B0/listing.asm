FUN_004dc4b0:
004DC4B0  55                        PUSH EBP
004DC4B1  8B EC                     MOV EBP,ESP
004DC4B3  53                        PUSH EBX
004DC4B4  56                        PUSH ESI
004DC4B5  8B F1                     MOV ESI,ECX
004DC4B7  57                        PUSH EDI
004DC4B8  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DC4BE  8A 86 3D 02 00 00         MOV AL,byte ptr [ESI + 0x23d]
004DC4C4  50                        PUSH EAX
004DC4C5  E8 ED 84 F2 FF            CALL 0x004049b7
004DC4CA  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004DC4CD  8B 8E 45 02 00 00         MOV ECX,dword ptr [ESI + 0x245]
004DC4D3  25 FF 00 00 00            AND EAX,0xff
004DC4D8  48                        DEC EAX
004DC4D9  83 FA 0D                  CMP EDX,0xd
004DC4DC  0F 8C FB 00 00 00         JL 0x004dc5dd
004DC4E2  83 FA 0E                  CMP EDX,0xe
004DC4E5  0F 8F F2 00 00 00         JG 0x004dc5dd
004DC4EB  8B 96 D0 04 00 00         MOV EDX,dword ptr [ESI + 0x4d0]
004DC4F1  83 FA 03                  CMP EDX,0x3
004DC4F4  0F 87 E3 00 00 00         JA 0x004dc5dd
switchD_004dc4fa::switchD:
004DC4FA  FF 24 95 E4 C5 4D 00      JMP dword ptr [EDX*0x4 + 0x4dc5e4]
switchD_004dc4fa::caseD_0:
004DC501  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004DC507  5F                        POP EDI
004DC508  8D 14 70                  LEA EDX,[EAX + ESI*0x2]
004DC50B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004DC50E  03 F2                     ADD ESI,EDX
004DC510  8D 14 B0                  LEA EDX,[EAX + ESI*0x4]
004DC513  8B 04 8D 70 51 7B 00      MOV EAX,dword ptr [ECX*0x4 + 0x7b5170]
004DC51A  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004DC51D  5E                        POP ESI
004DC51E  8B 04 D0                  MOV EAX,dword ptr [EAX + EDX*0x8]
004DC521  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004DC524  89 01                     MOV dword ptr [ECX],EAX
004DC526  5B                        POP EBX
004DC527  89 02                     MOV dword ptr [EDX],EAX
004DC529  5D                        POP EBP
004DC52A  C2 10 00                  RET 0x10
switchD_004dc4fa::caseD_1:
004DC52D  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004DC533  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004DC536  8B 0C 8D 70 51 7B 00      MOV ECX,dword ptr [ECX*0x4 + 0x7b5170]
004DC53D  5F                        POP EDI
004DC53E  8D 04 70                  LEA EAX,[EAX + ESI*0x2]
004DC541  03 F0                     ADD ESI,EAX
004DC543  8D 04 B2                  LEA EAX,[EDX + ESI*0x4]
004DC546  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004DC549  5E                        POP ESI
004DC54A  5B                        POP EBX
004DC54B  8B 44 C1 04               MOV EAX,dword ptr [ECX + EAX*0x8 + 0x4]
004DC54F  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004DC552  89 02                     MOV dword ptr [EDX],EAX
004DC554  89 01                     MOV dword ptr [ECX],EAX
004DC556  5D                        POP EBP
004DC557  C2 10 00                  RET 0x10
switchD_004dc4fa::caseD_2:
004DC55A  8B 96 35 02 00 00         MOV EDX,dword ptr [ESI + 0x235]
004DC560  8B 1C 8D 70 51 7B 00      MOV EBX,dword ptr [ECX*0x4 + 0x7b5170]
004DC567  8D 3C 50                  LEA EDI,[EAX + EDX*0x2]
004DC56A  03 D7                     ADD EDX,EDI
004DC56C  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
004DC56F  8D 14 97                  LEA EDX,[EDI + EDX*0x4]
004DC572  8B 14 D3                  MOV EDX,dword ptr [EBX + EDX*0x8]
004DC575  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
004DC578  89 13                     MOV dword ptr [EBX],EDX
004DC57A  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004DC580  8D 04 70                  LEA EAX,[EAX + ESI*0x2]
004DC583  03 F0                     ADD ESI,EAX
004DC585  8B 04 8D 70 51 7B 00      MOV EAX,dword ptr [ECX*0x4 + 0x7b5170]
004DC58C  8D 14 B7                  LEA EDX,[EDI + ESI*0x4]
004DC58F  5F                        POP EDI
004DC590  5E                        POP ESI
004DC591  5B                        POP EBX
004DC592  8B 4C D0 04               MOV ECX,dword ptr [EAX + EDX*0x8 + 0x4]
004DC596  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004DC599  89 0A                     MOV dword ptr [EDX],ECX
004DC59B  5D                        POP EBP
004DC59C  C2 10 00                  RET 0x10
switchD_004dc4fa::caseD_3:
004DC59F  8B 96 35 02 00 00         MOV EDX,dword ptr [ESI + 0x235]
004DC5A5  8B 1C 8D 70 51 7B 00      MOV EBX,dword ptr [ECX*0x4 + 0x7b5170]
004DC5AC  8D 3C 50                  LEA EDI,[EAX + EDX*0x2]
004DC5AF  03 D7                     ADD EDX,EDI
004DC5B1  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
004DC5B4  8D 14 97                  LEA EDX,[EDI + EDX*0x4]
004DC5B7  8B 54 D3 04               MOV EDX,dword ptr [EBX + EDX*0x8 + 0x4]
004DC5BB  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
004DC5BE  89 13                     MOV dword ptr [EBX],EDX
004DC5C0  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004DC5C6  8D 04 70                  LEA EAX,[EAX + ESI*0x2]
004DC5C9  03 F0                     ADD ESI,EAX
004DC5CB  8B 04 8D 70 51 7B 00      MOV EAX,dword ptr [ECX*0x4 + 0x7b5170]
004DC5D2  8D 14 B7                  LEA EDX,[EDI + ESI*0x4]
004DC5D5  8B 0C D0                  MOV ECX,dword ptr [EAX + EDX*0x8]
004DC5D8  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004DC5DB  89 0A                     MOV dword ptr [EDX],ECX
switchD_004dc4fa::default:
004DC5DD  5F                        POP EDI
004DC5DE  5E                        POP ESI
004DC5DF  5B                        POP EBX
004DC5E0  5D                        POP EBP
004DC5E1  C2 10 00                  RET 0x10
