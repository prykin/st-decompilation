FUN_004e6fe0:
004E6FE0  55                        PUSH EBP
004E6FE1  8B EC                     MOV EBP,ESP
004E6FE3  83 EC 10                  SUB ESP,0x10
004E6FE6  56                        PUSH ESI
004E6FE7  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
004E6FEA  57                        PUSH EDI
004E6FEB  33 FF                     XOR EDI,EDI
004E6FED  3B F7                     CMP ESI,EDI
004E6FEF  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
004E6FF2  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
004E6FF5  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
004E6FF8  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004E6FFB  0F 8C 9F 00 00 00         JL 0x004e70a0
004E7001  83 FE 08                  CMP ESI,0x8
004E7004  0F 8D 96 00 00 00         JGE 0x004e70a0
004E700A  53                        PUSH EBX
004E700B  56                        PUSH ESI
004E700C  E8 A6 D9 F1 FF            CALL 0x004049b7
004E7011  25 FF 00 00 00            AND EAX,0xff
004E7016  48                        DEC EAX
004E7017  33 DB                     XOR EBX,EBX
004E7019  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_004e701c:
004E701C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004E701F  8B 0C 85 04 FC 7B 00      MOV ECX,dword ptr [EAX*0x4 + 0x7bfc04]
004E7026  03 CB                     ADD ECX,EBX
004E7028  74 39                     JZ 0x004e7063
004E702A  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004E702D  57                        PUSH EDI
004E702E  56                        PUSH ESI
004E702F  E8 37 A8 F1 FF            CALL 0x0040186b
004E7034  8D 14 B6                  LEA EDX,[ESI + ESI*0x4]
004E7037  8D 0C D6                  LEA ECX,[ESI + EDX*0x8]
004E703A  8D 14 4E                  LEA EDX,[ESI + ECX*0x2]
004E703D  33 C9                     XOR ECX,ECX
004E703F  C1 E2 04                  SHL EDX,0x4
004E7042  03 D6                     ADD EDX,ESI
004E7044  8A 8C 57 5B 55 7F 00      MOV CL,byte ptr [EDI + EDX*0x2 + 0x7f555b]
004E704B  3B C1                     CMP EAX,ECX
004E704D  7C 03                     JL 0x004e7052
004E704F  FF 45 F8                  INC dword ptr [EBP + -0x8]
LAB_004e7052:
004E7052  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004E7055  57                        PUSH EDI
004E7056  56                        PUSH ESI
004E7057  E8 F3 E1 F1 FF            CALL 0x0040524f
004E705C  85 C0                     TEST EAX,EAX
004E705E  74 03                     JZ 0x004e7063
004E7060  FF 45 FC                  INC dword ptr [EBP + -0x4]
LAB_004e7063:
004E7063  81 C3 9B 00 00 00         ADD EBX,0x9b
004E7069  47                        INC EDI
004E706A  81 FB D9 5D 00 00         CMP EBX,0x5dd9
004E7070  72 AA                     JC 0x004e701c
004E7072  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004E7075  5B                        POP EBX
004E7076  85 C9                     TEST ECX,ECX
004E7078  74 1B                     JZ 0x004e7095
004E707A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004E707D  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004E7080  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004E7083  C1 E0 02                  SHL EAX,0x2
004E7086  99                        CDQ
004E7087  F7 F9                     IDIV ECX
004E7089  83 F8 64                  CMP EAX,0x64
004E708C  7E 14                     JLE 0x004e70a2
004E708E  C7 45 F4 64 00 00 00      MOV dword ptr [EBP + -0xc],0x64
LAB_004e7095:
004E7095  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004E7098  5F                        POP EDI
004E7099  5E                        POP ESI
004E709A  8B E5                     MOV ESP,EBP
004E709C  5D                        POP EBP
004E709D  C2 04 00                  RET 0x4
LAB_004e70a0:
004E70A0  33 C0                     XOR EAX,EAX
LAB_004e70a2:
004E70A2  5F                        POP EDI
004E70A3  5E                        POP ESI
004E70A4  8B E5                     MOV ESP,EBP
004E70A6  5D                        POP EBP
004E70A7  C2 04 00                  RET 0x4
