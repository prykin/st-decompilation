FUN_004d7f70:
004D7F70  55                        PUSH EBP
004D7F71  8B EC                     MOV EBP,ESP
004D7F73  51                        PUSH ECX
004D7F74  8B C1                     MOV EAX,ECX
004D7F76  53                        PUSH EBX
004D7F77  0F BE 4D 08               MOVSX ECX,byte ptr [EBP + 0x8]
004D7F7B  56                        PUSH ESI
004D7F7C  57                        PUSH EDI
004D7F7D  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
004D7F80  33 FF                     XOR EDI,EDI
004D7F82  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004D7F85  8D 14 D1                  LEA EDX,[ECX + EDX*0x8]
004D7F88  8D 34 51                  LEA ESI,[ECX + EDX*0x2]
004D7F8B  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004D7F8E  8B DA                     MOV EBX,EDX
004D7F90  C1 E3 04                  SHL EBX,0x4
004D7F93  C1 E6 04                  SHL ESI,0x4
004D7F96  03 DA                     ADD EBX,EDX
004D7F98  03 F1                     ADD ESI,ECX
004D7F9A  C1 E3 02                  SHL EBX,0x2
004D7F9D  8D 34 73                  LEA ESI,[EBX + ESI*0x2]
004D7FA0  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
004D7FA3  39 9E 0A 56 7F 00         CMP dword ptr [ESI + 0x7f560a],EBX
004D7FA9  7C 7F                     JL 0x004d802a
004D7FAB  89 BE 12 56 7F 00         MOV dword ptr [ESI + 0x7f5612],EDI
LAB_004d7fb1:
004D7FB1  8B 96 12 56 7F 00         MOV EDX,dword ptr [ESI + 0x7f5612]
004D7FB7  8B BE 1A 56 7F 00         MOV EDI,dword ptr [ESI + 0x7f561a]
004D7FBD  3B D7                     CMP EDX,EDI
004D7FBF  73 74                     JNC 0x004d8035
004D7FC1  8B BE 16 56 7F 00         MOV EDI,dword ptr [ESI + 0x7f5616]
004D7FC7  0F AF FA                  IMUL EDI,EDX
004D7FCA  03 BE 2A 56 7F 00         ADD EDI,dword ptr [ESI + 0x7f562a]
004D7FD0  8D 52 01                  LEA EDX,[EDX + 0x1]
004D7FD3  89 96 12 56 7F 00         MOV dword ptr [ESI + 0x7f5612],EDX
004D7FD9  74 5A                     JZ 0x004d8035
004D7FDB  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004D7FDE  39 17                     CMP dword ptr [EDI],EDX
004D7FE0  75 CF                     JNZ 0x004d7fb1
004D7FE2  53                        PUSH EBX
004D7FE3  51                        PUSH ECX
004D7FE4  8B C8                     MOV ECX,EAX
004D7FE6  E8 29 B8 F2 FF            CALL 0x00403814
004D7FEB  8B 86 0A 56 7F 00         MOV EAX,dword ptr [ESI + 0x7f560a]
004D7FF1  2B C3                     SUB EAX,EBX
004D7FF3  89 86 0A 56 7F 00         MOV dword ptr [ESI + 0x7f560a],EAX
004D7FF9  8B 96 3A 56 7F 00         MOV EDX,dword ptr [ESI + 0x7f563a]
004D7FFF  2B D3                     SUB EDX,EBX
004D8001  89 96 3A 56 7F 00         MOV dword ptr [ESI + 0x7f563a],EDX
004D8007  8B 4F 10                  MOV ECX,dword ptr [EDI + 0x10]
004D800A  2B CB                     SUB ECX,EBX
004D800C  89 4F 10                  MOV dword ptr [EDI + 0x10],ECX
004D800F  8B 86 0A 56 7F 00         MOV EAX,dword ptr [ESI + 0x7f560a]
004D8015  85 C0                     TEST EAX,EAX
004D8017  BF 01 00 00 00            MOV EDI,0x1
004D801C  75 0C                     JNZ 0x004d802a
004D801E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004D8021  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004D8024  50                        PUSH EAX
004D8025  E8 CC A8 F2 FF            CALL 0x004028f6
LAB_004d802a:
004D802A  8B C7                     MOV EAX,EDI
004D802C  5F                        POP EDI
004D802D  5E                        POP ESI
004D802E  5B                        POP EBX
004D802F  8B E5                     MOV ESP,EBP
004D8031  5D                        POP EBP
004D8032  C2 10 00                  RET 0x10
LAB_004d8035:
004D8035  5F                        POP EDI
004D8036  5E                        POP ESI
004D8037  33 C0                     XOR EAX,EAX
004D8039  5B                        POP EBX
004D803A  8B E5                     MOV ESP,EBP
004D803C  5D                        POP EBP
004D803D  C2 10 00                  RET 0x10
