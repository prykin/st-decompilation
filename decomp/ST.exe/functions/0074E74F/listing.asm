FUN_0074e74f:
0074E74F  55                        PUSH EBP
0074E750  8B EC                     MOV EBP,ESP
0074E752  56                        PUSH ESI
0074E753  57                        PUSH EDI
0074E754  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0074E757  6A 10                     PUSH 0x10
0074E759  59                        POP ECX
0074E75A  BE 68 E3 79 00            MOV ESI,0x79e368
0074E75F  33 C0                     XOR EAX,EAX
0074E761  F3 A6                     CMPSB.REPE ES:EDI,ESI
0074E763  74 07                     JZ 0x0074e76c
0074E765  B8 01 00 02 80            MOV EAX,0x80020001
0074E76A  EB 3F                     JMP 0x0074e7ab
LAB_0074e76c:
0074E76C  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0074E76F  8D 4D 10                  LEA ECX,[EBP + 0x10]
0074E772  51                        PUSH ECX
0074E773  FF 75 14                  PUSH dword ptr [EBP + 0x14]
0074E776  8B 06                     MOV EAX,dword ptr [ESI]
0074E778  6A 00                     PUSH 0x0
0074E77A  56                        PUSH ESI
0074E77B  FF 50 10                  CALL dword ptr [EAX + 0x10]
0074E77E  85 C0                     TEST EAX,EAX
0074E780  7C 29                     JL 0x0074e7ab
0074E782  FF 75 28                  PUSH dword ptr [EBP + 0x28]
0074E785  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0074E788  FF 75 24                  PUSH dword ptr [EBP + 0x24]
0074E78B  8B 08                     MOV ECX,dword ptr [EAX]
0074E78D  FF 75 20                  PUSH dword ptr [EBP + 0x20]
0074E790  FF 75 1C                  PUSH dword ptr [EBP + 0x1c]
0074E793  FF 75 18                  PUSH dword ptr [EBP + 0x18]
0074E796  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074E799  56                        PUSH ESI
0074E79A  50                        PUSH EAX
0074E79B  FF 51 2C                  CALL dword ptr [ECX + 0x2c]
0074E79E  8B F0                     MOV ESI,EAX
0074E7A0  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0074E7A3  50                        PUSH EAX
0074E7A4  8B 08                     MOV ECX,dword ptr [EAX]
0074E7A6  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074E7A9  8B C6                     MOV EAX,ESI
LAB_0074e7ab:
0074E7AB  5F                        POP EDI
0074E7AC  5E                        POP ESI
0074E7AD  5D                        POP EBP
0074E7AE  C2 24 00                  RET 0x24
