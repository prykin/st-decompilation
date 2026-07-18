FUN_004ec700:
004EC700  55                        PUSH EBP
004EC701  8B EC                     MOV EBP,ESP
004EC703  53                        PUSH EBX
004EC704  56                        PUSH ESI
004EC705  8B F1                     MOV ESI,ECX
004EC707  57                        PUSH EDI
004EC708  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004EC70E  8A 86 3D 02 00 00         MOV AL,byte ptr [ESI + 0x23d]
004EC714  50                        PUSH EAX
004EC715  E8 9D 82 F1 FF            CALL 0x004049b7
004EC71A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004EC71D  8B 8E 45 02 00 00         MOV ECX,dword ptr [ESI + 0x245]
004EC723  25 FF 00 00 00            AND EAX,0xff
004EC728  83 C2 F9                  ADD EDX,-0x7
004EC72B  48                        DEC EAX
004EC72C  83 FA 07                  CMP EDX,0x7
004EC72F  0F 87 EB 00 00 00         JA 0x004ec820
switchD_004ec735::switchD:
004EC735  FF 24 95 68 C8 4E 00      JMP dword ptr [EDX*0x4 + 0x4ec868]
switchD_004ec735::caseD_8:
004EC73C  8B 96 D0 04 00 00         MOV EDX,dword ptr [ESI + 0x4d0]
004EC742  83 FA 03                  CMP EDX,0x3
004EC745  0F 84 D5 00 00 00         JZ 0x004ec820
004EC74B  83 FA 04                  CMP EDX,0x4
004EC74E  0F 84 9F 00 00 00         JZ 0x004ec7f3
004EC754  83 FA 06                  CMP EDX,0x6
004EC757  0F 84 96 00 00 00         JZ 0x004ec7f3
004EC75D  83 FA 05                  CMP EDX,0x5
004EC760  75 65                     JNZ 0x004ec7c7
004EC762  EB 1E                     JMP 0x004ec782
switchD_004ec735::caseD_7:
004EC764  8B 96 D0 04 00 00         MOV EDX,dword ptr [ESI + 0x4d0]
004EC76A  83 FA 03                  CMP EDX,0x3
004EC76D  0F 84 AD 00 00 00         JZ 0x004ec820
004EC773  83 FA 04                  CMP EDX,0x4
004EC776  74 7B                     JZ 0x004ec7f3
004EC778  83 FA 06                  CMP EDX,0x6
004EC77B  74 76                     JZ 0x004ec7f3
004EC77D  83 FA 05                  CMP EDX,0x5
004EC780  75 45                     JNZ 0x004ec7c7
LAB_004ec782:
004EC782  8B 96 35 02 00 00         MOV EDX,dword ptr [ESI + 0x235]
004EC788  8B 1C 8D 70 51 7B 00      MOV EBX,dword ptr [ECX*0x4 + 0x7b5170]
004EC78F  8D 3C 50                  LEA EDI,[EAX + EDX*0x2]
004EC792  03 D7                     ADD EDX,EDI
004EC794  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
004EC797  8D 14 97                  LEA EDX,[EDI + EDX*0x4]
004EC79A  8B 14 D3                  MOV EDX,dword ptr [EBX + EDX*0x8]
004EC79D  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
004EC7A0  89 13                     MOV dword ptr [EBX],EDX
004EC7A2  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004EC7A8  8D 04 70                  LEA EAX,[EAX + ESI*0x2]
004EC7AB  03 F0                     ADD ESI,EAX
004EC7AD  8B 04 8D 70 51 7B 00      MOV EAX,dword ptr [ECX*0x4 + 0x7b5170]
004EC7B4  8D 14 B7                  LEA EDX,[EDI + ESI*0x4]
004EC7B7  5F                        POP EDI
004EC7B8  5E                        POP ESI
004EC7B9  5B                        POP EBX
004EC7BA  8B 4C D0 04               MOV ECX,dword ptr [EAX + EDX*0x8 + 0x4]
004EC7BE  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004EC7C1  89 0A                     MOV dword ptr [EDX],ECX
004EC7C3  5D                        POP EBP
004EC7C4  C2 10 00                  RET 0x10
LAB_004ec7c7:
004EC7C7  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004EC7CD  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004EC7D0  8B 0C 8D 70 51 7B 00      MOV ECX,dword ptr [ECX*0x4 + 0x7b5170]
004EC7D7  5F                        POP EDI
004EC7D8  8D 04 70                  LEA EAX,[EAX + ESI*0x2]
004EC7DB  03 F0                     ADD ESI,EAX
004EC7DD  8D 04 B2                  LEA EAX,[EDX + ESI*0x4]
004EC7E0  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004EC7E3  5E                        POP ESI
004EC7E4  5B                        POP EBX
004EC7E5  8B 04 C1                  MOV EAX,dword ptr [ECX + EAX*0x8]
004EC7E8  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004EC7EB  89 02                     MOV dword ptr [EDX],EAX
004EC7ED  89 01                     MOV dword ptr [ECX],EAX
004EC7EF  5D                        POP EBP
004EC7F0  C2 10 00                  RET 0x10
LAB_004ec7f3:
004EC7F3  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004EC7F9  5F                        POP EDI
004EC7FA  8D 14 70                  LEA EDX,[EAX + ESI*0x2]
004EC7FD  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004EC800  03 F2                     ADD ESI,EDX
004EC802  8D 14 B0                  LEA EDX,[EAX + ESI*0x4]
004EC805  8B 04 8D 70 51 7B 00      MOV EAX,dword ptr [ECX*0x4 + 0x7b5170]
004EC80C  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004EC80F  5E                        POP ESI
004EC810  8B 44 D0 04               MOV EAX,dword ptr [EAX + EDX*0x8 + 0x4]
004EC814  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004EC817  89 01                     MOV dword ptr [ECX],EAX
004EC819  5B                        POP EBX
004EC81A  89 02                     MOV dword ptr [EDX],EAX
004EC81C  5D                        POP EBP
004EC81D  C2 10 00                  RET 0x10
switchD_004ec735::caseD_a:
004EC820  8B 96 35 02 00 00         MOV EDX,dword ptr [ESI + 0x235]
004EC826  8B 1C 8D 70 51 7B 00      MOV EBX,dword ptr [ECX*0x4 + 0x7b5170]
004EC82D  8D 3C 50                  LEA EDI,[EAX + EDX*0x2]
004EC830  03 D7                     ADD EDX,EDI
004EC832  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
004EC835  8D 14 97                  LEA EDX,[EDI + EDX*0x4]
004EC838  8B 14 D3                  MOV EDX,dword ptr [EBX + EDX*0x8]
004EC83B  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
004EC83E  89 13                     MOV dword ptr [EBX],EDX
004EC840  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004EC846  8D 04 70                  LEA EAX,[EAX + ESI*0x2]
004EC849  03 F0                     ADD ESI,EAX
004EC84B  8B 04 8D 70 51 7B 00      MOV EAX,dword ptr [ECX*0x4 + 0x7b5170]
004EC852  8D 14 B7                  LEA EDX,[EDI + ESI*0x4]
004EC855  5F                        POP EDI
004EC856  5E                        POP ESI
004EC857  5B                        POP EBX
004EC858  8B 4C D0 04               MOV ECX,dword ptr [EAX + EDX*0x8 + 0x4]
004EC85C  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004EC85F  89 0A                     MOV dword ptr [EDX],ECX
004EC861  5D                        POP EBP
004EC862  C2 10 00                  RET 0x10
