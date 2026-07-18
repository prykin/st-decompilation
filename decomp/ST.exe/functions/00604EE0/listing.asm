FUN_00604ee0:
00604EE0  55                        PUSH EBP
00604EE1  8B EC                     MOV EBP,ESP
00604EE3  83 EC 28                  SUB ESP,0x28
00604EE6  53                        PUSH EBX
00604EE7  8B D9                     MOV EBX,ECX
00604EE9  57                        PUSH EDI
00604EEA  B9 08 00 00 00            MOV ECX,0x8
00604EEF  33 C0                     XOR EAX,EAX
00604EF1  8D 7D D8                  LEA EDI,[EBP + -0x28]
00604EF4  F3 AB                     STOSD.REP ES:EDI
00604EF6  8B 83 69 02 00 00         MOV EAX,dword ptr [EBX + 0x269]
00604EFC  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00604EFF  33 D2                     XOR EDX,EDX
00604F01  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
00604F04  3B C2                     CMP EAX,EDX
00604F06  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00604F09  C7 45 E8 02 00 00 00      MOV dword ptr [EBP + -0x18],0x2
00604F10  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
00604F13  7E 69                     JLE 0x00604f7e
00604F15  56                        PUSH ESI
00604F16  8D B3 19 02 00 00         LEA ESI,[EBX + 0x219]
LAB_00604f1c:
00604F1C  83 3E 00                  CMP dword ptr [ESI],0x0
00604F1F  74 3E                     JZ 0x00604f5f
00604F21  E8 56 D6 DF FF            CALL 0x0040257c
00604F26  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00604F29  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00604F2C  89 06                     MOV dword ptr [ESI],EAX
00604F2E  89 98 CE 00 00 00         MOV dword ptr [EAX + 0xce],EBX
00604F34  8B 06                     MOV EAX,dword ptr [ESI]
00604F36  83 C7 04                  ADD EDI,0x4
00604F39  89 88 D2 00 00 00         MOV dword ptr [EAX + 0xd2],ECX
00604F3F  8B 5F FC                  MOV EBX,dword ptr [EDI + -0x4]
00604F42  8D 4D D8                  LEA ECX,[EBP + -0x28]
00604F45  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
00604F48  8D 44 1A 04               LEA EAX,[EDX + EBX*0x1 + 0x4]
00604F4C  51                        PUSH ECX
00604F4D  8B 0E                     MOV ECX,dword ptr [ESI]
00604F4F  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00604F52  E8 43 0D E0 FF            CALL 0x00405c9a
00604F57  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00604F5A  03 FB                     ADD EDI,EBX
00604F5C  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
LAB_00604f5f:
00604F5F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00604F62  8B 8B 69 02 00 00         MOV ECX,dword ptr [EBX + 0x269]
00604F68  40                        INC EAX
00604F69  83 C6 04                  ADD ESI,0x4
00604F6C  3B C1                     CMP EAX,ECX
00604F6E  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00604F71  7C A9                     JL 0x00604f1c
00604F73  5E                        POP ESI
00604F74  5F                        POP EDI
00604F75  8B C2                     MOV EAX,EDX
00604F77  5B                        POP EBX
00604F78  8B E5                     MOV ESP,EBP
00604F7A  5D                        POP EBP
00604F7B  C2 04 00                  RET 0x4
LAB_00604f7e:
00604F7E  5F                        POP EDI
00604F7F  8B C2                     MOV EAX,EDX
00604F81  5B                        POP EBX
00604F82  8B E5                     MOV ESP,EBP
00604F84  5D                        POP EBP
00604F85  C2 04 00                  RET 0x4
