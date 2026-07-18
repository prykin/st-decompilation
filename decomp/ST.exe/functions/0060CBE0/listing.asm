FUN_0060cbe0:
0060CBE0  55                        PUSH EBP
0060CBE1  8B EC                     MOV EBP,ESP
0060CBE3  83 EC 28                  SUB ESP,0x28
0060CBE6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0060CBE9  56                        PUSH ESI
0060CBEA  99                        CDQ
0060CBEB  2B C2                     SUB EAX,EDX
0060CBED  57                        PUSH EDI
0060CBEE  8B F0                     MOV ESI,EAX
0060CBF0  C7 45 D8 00 00 00 00      MOV dword ptr [EBP + -0x28],0x0
0060CBF7  D1 FE                     SAR ESI,0x1
0060CBF9  8B C6                     MOV EAX,ESI
0060CBFB  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
0060CC02  99                        CDQ
0060CC03  83 E2 07                  AND EDX,0x7
0060CC06  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0060CC0D  03 C2                     ADD EAX,EDX
0060CC0F  8B C8                     MOV ECX,EAX
0060CC11  8B C6                     MOV EAX,ESI
0060CC13  99                        CDQ
0060CC14  83 E2 03                  AND EDX,0x3
0060CC17  03 C2                     ADD EAX,EDX
0060CC19  C1 F9 03                  SAR ECX,0x3
0060CC1C  C1 F8 02                  SAR EAX,0x2
0060CC1F  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0060CC22  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
0060CC25  99                        CDQ
0060CC26  83 E2 03                  AND EDX,0x3
0060CC29  03 C2                     ADD EAX,EDX
0060CC2B  8B F8                     MOV EDI,EAX
0060CC2D  8B C6                     MOV EAX,ESI
0060CC2F  99                        CDQ
0060CC30  2B C2                     SUB EAX,EDX
0060CC32  D1 F8                     SAR EAX,0x1
0060CC34  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0060CC37  8B C1                     MOV EAX,ECX
0060CC39  99                        CDQ
0060CC3A  2B C2                     SUB EAX,EDX
0060CC3C  F7 D9                     NEG ECX
0060CC3E  D1 F8                     SAR EAX,0x1
0060CC40  D1 E1                     SHL ECX,0x1
0060CC42  2B C8                     SUB ECX,EAX
0060CC44  8D 04 76                  LEA EAX,[ESI + ESI*0x2]
0060CC47  99                        CDQ
0060CC48  83 E2 03                  AND EDX,0x3
0060CC4B  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0060CC4E  03 C2                     ADD EAX,EDX
0060CC50  8D 0C B5 00 00 00 00      LEA ECX,[ESI*0x4 + 0x0]
0060CC57  C1 F8 02                  SAR EAX,0x2
0060CC5A  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0060CC5D  8D 46 FF                  LEA EAX,[ESI + -0x1]
0060CC60  C1 FF 02                  SAR EDI,0x2
0060CC63  51                        PUSH ECX
0060CC64  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
0060CC67  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0060CC6A  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0060CC6D  E8 FE DF 09 00            CALL 0x006aac70
0060CC72  56                        PUSH ESI
0060CC73  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0060CC76  50                        PUSH EAX
0060CC77  8D 55 EC                  LEA EDX,[EBP + -0x14]
0060CC7A  6A 05                     PUSH 0x5
0060CC7C  8D 45 D8                  LEA EAX,[EBP + -0x28]
0060CC7F  52                        PUSH EDX
0060CC80  50                        PUSH EAX
0060CC81  E8 B6 8E DF FF            CALL 0x00405b3c
0060CC86  85 C0                     TEST EAX,EAX
0060CC88  75 10                     JNZ 0x0060cc9a
0060CC8A  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0060CC8D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0060CC90  5F                        POP EDI
0060CC91  89 31                     MOV dword ptr [ECX],ESI
0060CC93  5E                        POP ESI
0060CC94  8B E5                     MOV ESP,EBP
0060CC96  5D                        POP EBP
0060CC97  C2 08 00                  RET 0x8
LAB_0060cc9a:
0060CC9A  8D 55 08                  LEA EDX,[EBP + 0x8]
0060CC9D  52                        PUSH EDX
0060CC9E  E8 BD E3 09 00            CALL 0x006ab060
0060CCA3  5F                        POP EDI
0060CCA4  33 C0                     XOR EAX,EAX
0060CCA6  5E                        POP ESI
0060CCA7  8B E5                     MOV ESP,EBP
0060CCA9  5D                        POP EBP
0060CCAA  C2 08 00                  RET 0x8
