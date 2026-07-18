FUN_004d7d30:
004D7D30  55                        PUSH EBP
004D7D31  8B EC                     MOV EBP,ESP
004D7D33  51                        PUSH ECX
004D7D34  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004D7D37  8B D1                     MOV EDX,ECX
004D7D39  0F BE C8                  MOVSX ECX,AL
004D7D3C  53                        PUSH EBX
004D7D3D  56                        PUSH ESI
004D7D3E  8D 34 89                  LEA ESI,[ECX + ECX*0x4]
004D7D41  57                        PUSH EDI
004D7D42  33 FF                     XOR EDI,EDI
004D7D44  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
004D7D47  8D 34 F1                  LEA ESI,[ECX + ESI*0x8]
004D7D4A  8D 34 71                  LEA ESI,[ECX + ESI*0x2]
004D7D4D  C1 E6 04                  SHL ESI,0x4
004D7D50  03 F1                     ADD ESI,ECX
004D7D52  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004D7D55  8B D9                     MOV EBX,ECX
004D7D57  C1 E3 04                  SHL EBX,0x4
004D7D5A  03 D9                     ADD EBX,ECX
004D7D5C  C1 E3 02                  SHL EBX,0x2
004D7D5F  8D 34 73                  LEA ESI,[EBX + ESI*0x2]
004D7D62  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
004D7D65  39 9E 02 56 7F 00         CMP dword ptr [ESI + 0x7f5602],EBX
004D7D6B  7C 7F                     JL 0x004d7dec
004D7D6D  89 BE 12 56 7F 00         MOV dword ptr [ESI + 0x7f5612],EDI
LAB_004d7d73:
004D7D73  8B 8E 12 56 7F 00         MOV ECX,dword ptr [ESI + 0x7f5612]
004D7D79  8B BE 1A 56 7F 00         MOV EDI,dword ptr [ESI + 0x7f561a]
004D7D7F  3B CF                     CMP ECX,EDI
004D7D81  73 74                     JNC 0x004d7df7
004D7D83  8B BE 16 56 7F 00         MOV EDI,dword ptr [ESI + 0x7f5616]
004D7D89  0F AF F9                  IMUL EDI,ECX
004D7D8C  03 BE 2A 56 7F 00         ADD EDI,dword ptr [ESI + 0x7f562a]
004D7D92  8D 49 01                  LEA ECX,[ECX + 0x1]
004D7D95  89 8E 12 56 7F 00         MOV dword ptr [ESI + 0x7f5612],ECX
004D7D9B  74 5A                     JZ 0x004d7df7
004D7D9D  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004D7DA0  39 0F                     CMP dword ptr [EDI],ECX
004D7DA2  75 CF                     JNZ 0x004d7d73
004D7DA4  53                        PUSH EBX
004D7DA5  50                        PUSH EAX
004D7DA6  8B CA                     MOV ECX,EDX
004D7DA8  E8 6B B6 F2 FF            CALL 0x00403418
004D7DAD  8B 86 02 56 7F 00         MOV EAX,dword ptr [ESI + 0x7f5602]
004D7DB3  2B C3                     SUB EAX,EBX
004D7DB5  89 86 02 56 7F 00         MOV dword ptr [ESI + 0x7f5602],EAX
004D7DBB  8B 96 32 56 7F 00         MOV EDX,dword ptr [ESI + 0x7f5632]
004D7DC1  2B D3                     SUB EDX,EBX
004D7DC3  89 96 32 56 7F 00         MOV dword ptr [ESI + 0x7f5632],EDX
004D7DC9  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
004D7DCC  2B CB                     SUB ECX,EBX
004D7DCE  89 4F 08                  MOV dword ptr [EDI + 0x8],ECX
004D7DD1  8B 86 02 56 7F 00         MOV EAX,dword ptr [ESI + 0x7f5602]
004D7DD7  85 C0                     TEST EAX,EAX
004D7DD9  BF 01 00 00 00            MOV EDI,0x1
004D7DDE  75 0C                     JNZ 0x004d7dec
004D7DE0  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004D7DE3  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004D7DE6  52                        PUSH EDX
004D7DE7  E8 0A AB F2 FF            CALL 0x004028f6
LAB_004d7dec:
004D7DEC  8B C7                     MOV EAX,EDI
004D7DEE  5F                        POP EDI
004D7DEF  5E                        POP ESI
004D7DF0  5B                        POP EBX
004D7DF1  8B E5                     MOV ESP,EBP
004D7DF3  5D                        POP EBP
004D7DF4  C2 10 00                  RET 0x10
LAB_004d7df7:
004D7DF7  5F                        POP EDI
004D7DF8  5E                        POP ESI
004D7DF9  33 C0                     XOR EAX,EAX
004D7DFB  5B                        POP EBX
004D7DFC  8B E5                     MOV ESP,EBP
004D7DFE  5D                        POP EBP
004D7DFF  C2 10 00                  RET 0x10
