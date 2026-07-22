STManRub3C::sub_0062D840:
0062D840  55                        PUSH EBP
0062D841  8B EC                     MOV EBP,ESP
0062D843  53                        PUSH EBX
0062D844  8B D9                     MOV EBX,ECX
0062D846  56                        PUSH ESI
0062D847  57                        PUSH EDI
0062D848  85 DB                     TEST EBX,EBX
0062D84A  74 05                     JZ 0x0062d851
0062D84C  8D 7B 1C                  LEA EDI,[EBX + 0x1c]
0062D84F  EB 02                     JMP 0x0062d853
LAB_0062d851:
0062D851  33 FF                     XOR EDI,EDI
LAB_0062d853:
0062D853  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0062D856  B9 26 00 00 00            MOV ECX,0x26
0062D85B  8B F0                     MOV ESI,EAX
0062D85D  C7 45 08 98 00 00 00      MOV dword ptr [EBP + 0x8],0x98
0062D864  F3 A5                     MOVSD.REP ES:EDI,ESI
0062D866  8B 8B B0 00 00 00         MOV ECX,dword ptr [EBX + 0xb0]
0062D86C  8D B0 98 00 00 00         LEA ESI,[EAX + 0x98]
0062D872  89 8B B4 00 00 00         MOV dword ptr [EBX + 0xb4],ECX
0062D878  33 FF                     XOR EDI,EDI
LAB_0062d87a:
0062D87A  33 C0                     XOR EAX,EAX
0062D87C  83 FF 03                  CMP EDI,0x3
0062D87F  77 2A                     JA 0x0062d8ab
switchD_0062d881::switchD:
0062D881  FF 24 BD C4 D8 62 00      JMP dword ptr [EDI*0x4 + 0x62d8c4]
switchD_0062d881::caseD_0:
0062D888  56                        PUSH ESI
0062D889  8D 53 30                  LEA EDX,[EBX + 0x30]
0062D88C  EB 15                     JMP 0x0062d8a3
switchD_0062d881::caseD_1:
0062D88E  8D 43 50                  LEA EAX,[EBX + 0x50]
0062D891  56                        PUSH ESI
0062D892  50                        PUSH EAX
0062D893  EB 0F                     JMP 0x0062d8a4
switchD_0062d881::caseD_2:
0062D895  8D 4B 70                  LEA ECX,[EBX + 0x70]
0062D898  56                        PUSH ESI
0062D899  51                        PUSH ECX
0062D89A  EB 08                     JMP 0x0062d8a4
switchD_0062d881::caseD_3:
0062D89C  56                        PUSH ESI
0062D89D  8D 93 90 00 00 00         LEA EDX,[EBX + 0x90]
LAB_0062d8a3:
0062D8A3  52                        PUSH EDX
LAB_0062d8a4:
0062D8A4  8B CB                     MOV ECX,EBX
0062D8A6  E8 FC 71 DD FF            CALL 0x00404aa7
switchD_0062d881::default:
0062D8AB  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0062D8AE  03 F0                     ADD ESI,EAX
0062D8B0  03 D0                     ADD EDX,EAX
0062D8B2  47                        INC EDI
0062D8B3  83 FF 04                  CMP EDI,0x4
0062D8B6  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
0062D8B9  7C BF                     JL 0x0062d87a
0062D8BB  5F                        POP EDI
0062D8BC  5E                        POP ESI
0062D8BD  8B C2                     MOV EAX,EDX
0062D8BF  5B                        POP EBX
0062D8C0  5D                        POP EBP
0062D8C1  C2 04 00                  RET 0x4
