FUN_004e8e50:
004E8E50  55                        PUSH EBP
004E8E51  8B EC                     MOV EBP,ESP
004E8E53  53                        PUSH EBX
004E8E54  56                        PUSH ESI
004E8E55  8B F1                     MOV ESI,ECX
004E8E57  57                        PUSH EDI
004E8E58  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E8E5E  8A 86 3D 02 00 00         MOV AL,byte ptr [ESI + 0x23d]
004E8E64  50                        PUSH EAX
004E8E65  E8 4D BB F1 FF            CALL 0x004049b7
004E8E6A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004E8E6D  8B 8E 45 02 00 00         MOV ECX,dword ptr [ESI + 0x245]
004E8E73  25 FF 00 00 00            AND EAX,0xff
004E8E78  48                        DEC EAX
004E8E79  83 FA 0C                  CMP EDX,0xc
004E8E7C  74 54                     JZ 0x004e8ed2
004E8E7E  0F 8E C2 00 00 00         JLE 0x004e8f46
004E8E84  83 FA 0E                  CMP EDX,0xe
004E8E87  0F 8F B9 00 00 00         JG 0x004e8f46
004E8E8D  8B 96 35 02 00 00         MOV EDX,dword ptr [ESI + 0x235]
004E8E93  8B 1C 8D 70 51 7B 00      MOV EBX,dword ptr [ECX*0x4 + 0x7b5170]
004E8E9A  8D 3C 50                  LEA EDI,[EAX + EDX*0x2]
004E8E9D  03 D7                     ADD EDX,EDI
004E8E9F  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
004E8EA2  8D 14 97                  LEA EDX,[EDI + EDX*0x4]
004E8EA5  8B 14 D3                  MOV EDX,dword ptr [EBX + EDX*0x8]
004E8EA8  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
004E8EAB  89 13                     MOV dword ptr [EBX],EDX
004E8EAD  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004E8EB3  8D 04 70                  LEA EAX,[EAX + ESI*0x2]
004E8EB6  03 F0                     ADD ESI,EAX
004E8EB8  8B 04 8D 70 51 7B 00      MOV EAX,dword ptr [ECX*0x4 + 0x7b5170]
004E8EBF  8D 14 B7                  LEA EDX,[EDI + ESI*0x4]
004E8EC2  5F                        POP EDI
004E8EC3  5E                        POP ESI
004E8EC4  5B                        POP EBX
004E8EC5  8B 4C D0 04               MOV ECX,dword ptr [EAX + EDX*0x8 + 0x4]
004E8EC9  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004E8ECC  89 0A                     MOV dword ptr [EDX],ECX
004E8ECE  5D                        POP EBP
004E8ECF  C2 10 00                  RET 0x10
LAB_004e8ed2:
004E8ED2  8B 96 F4 04 00 00         MOV EDX,dword ptr [ESI + 0x4f4]
004E8ED8  85 D2                     TEST EDX,EDX
004E8EDA  74 45                     JZ 0x004e8f21
004E8EDC  8B 96 35 02 00 00         MOV EDX,dword ptr [ESI + 0x235]
004E8EE2  8B 1C 8D 10 83 7B 00      MOV EBX,dword ptr [ECX*0x4 + 0x7b8310]
004E8EE9  8D 3C 50                  LEA EDI,[EAX + EDX*0x2]
004E8EEC  03 D7                     ADD EDX,EDI
004E8EEE  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
004E8EF1  8D 14 97                  LEA EDX,[EDI + EDX*0x4]
004E8EF4  8B 14 D3                  MOV EDX,dword ptr [EBX + EDX*0x8]
004E8EF7  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
004E8EFA  89 13                     MOV dword ptr [EBX],EDX
004E8EFC  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004E8F02  8D 04 70                  LEA EAX,[EAX + ESI*0x2]
004E8F05  03 F0                     ADD ESI,EAX
004E8F07  8B 04 8D 10 83 7B 00      MOV EAX,dword ptr [ECX*0x4 + 0x7b8310]
004E8F0E  8D 14 B7                  LEA EDX,[EDI + ESI*0x4]
004E8F11  5F                        POP EDI
004E8F12  5E                        POP ESI
004E8F13  5B                        POP EBX
004E8F14  8B 4C D0 04               MOV ECX,dword ptr [EAX + EDX*0x8 + 0x4]
004E8F18  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004E8F1B  89 0A                     MOV dword ptr [EDX],ECX
004E8F1D  5D                        POP EBP
004E8F1E  C2 10 00                  RET 0x10
LAB_004e8f21:
004E8F21  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004E8F27  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004E8F2A  8B 0C 8D 10 83 7B 00      MOV ECX,dword ptr [ECX*0x4 + 0x7b8310]
004E8F31  8D 04 70                  LEA EAX,[EAX + ESI*0x2]
004E8F34  03 F0                     ADD ESI,EAX
004E8F36  8D 04 B2                  LEA EAX,[EDX + ESI*0x4]
004E8F39  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004E8F3C  8B 04 C1                  MOV EAX,dword ptr [ECX + EAX*0x8]
004E8F3F  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004E8F42  89 02                     MOV dword ptr [EDX],EAX
004E8F44  89 01                     MOV dword ptr [ECX],EAX
LAB_004e8f46:
004E8F46  5F                        POP EDI
004E8F47  5E                        POP ESI
004E8F48  5B                        POP EBX
004E8F49  5D                        POP EBP
004E8F4A  C2 10 00                  RET 0x10
