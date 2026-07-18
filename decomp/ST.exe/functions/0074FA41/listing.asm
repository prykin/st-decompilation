FUN_0074fa41:
0074FA41  55                        PUSH EBP
0074FA42  8B EC                     MOV EBP,ESP
0074FA44  56                        PUSH ESI
0074FA45  57                        PUSH EDI
0074FA46  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0074FA49  6A 10                     PUSH 0x10
0074FA4B  59                        POP ECX
0074FA4C  BE 68 E3 79 00            MOV ESI,0x79e368
0074FA51  33 C0                     XOR EAX,EAX
0074FA53  F3 A6                     CMPSB.REPE ES:EDI,ESI
0074FA55  74 07                     JZ 0x0074fa5e
0074FA57  B8 01 00 02 80            MOV EAX,0x80020001
0074FA5C  EB 3F                     JMP 0x0074fa9d
LAB_0074fa5e:
0074FA5E  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0074FA61  8D 4D 10                  LEA ECX,[EBP + 0x10]
0074FA64  51                        PUSH ECX
0074FA65  FF 75 14                  PUSH dword ptr [EBP + 0x14]
0074FA68  8B 06                     MOV EAX,dword ptr [ESI]
0074FA6A  6A 00                     PUSH 0x0
0074FA6C  56                        PUSH ESI
0074FA6D  FF 50 10                  CALL dword ptr [EAX + 0x10]
0074FA70  85 C0                     TEST EAX,EAX
0074FA72  7C 29                     JL 0x0074fa9d
0074FA74  FF 75 28                  PUSH dword ptr [EBP + 0x28]
0074FA77  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0074FA7A  FF 75 24                  PUSH dword ptr [EBP + 0x24]
0074FA7D  8B 08                     MOV ECX,dword ptr [EAX]
0074FA7F  FF 75 20                  PUSH dword ptr [EBP + 0x20]
0074FA82  FF 75 1C                  PUSH dword ptr [EBP + 0x1c]
0074FA85  FF 75 18                  PUSH dword ptr [EBP + 0x18]
0074FA88  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074FA8B  56                        PUSH ESI
0074FA8C  50                        PUSH EAX
0074FA8D  FF 51 2C                  CALL dword ptr [ECX + 0x2c]
0074FA90  8B F0                     MOV ESI,EAX
0074FA92  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0074FA95  50                        PUSH EAX
0074FA96  8B 08                     MOV ECX,dword ptr [EAX]
0074FA98  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074FA9B  8B C6                     MOV EAX,ESI
LAB_0074fa9d:
0074FA9D  5F                        POP EDI
0074FA9E  5E                        POP ESI
0074FA9F  5D                        POP EBP
0074FAA0  C2 24 00                  RET 0x24
