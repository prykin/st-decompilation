FUN_0074f80d:
0074F80D  55                        PUSH EBP
0074F80E  8B EC                     MOV EBP,ESP
0074F810  56                        PUSH ESI
0074F811  57                        PUSH EDI
0074F812  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0074F815  6A 10                     PUSH 0x10
0074F817  59                        POP ECX
0074F818  BE 68 E3 79 00            MOV ESI,0x79e368
0074F81D  33 C0                     XOR EAX,EAX
0074F81F  F3 A6                     CMPSB.REPE ES:EDI,ESI
0074F821  74 07                     JZ 0x0074f82a
0074F823  B8 01 00 02 80            MOV EAX,0x80020001
0074F828  EB 3F                     JMP 0x0074f869
LAB_0074f82a:
0074F82A  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0074F82D  8D 4D 10                  LEA ECX,[EBP + 0x10]
0074F830  51                        PUSH ECX
0074F831  FF 75 14                  PUSH dword ptr [EBP + 0x14]
0074F834  8B 06                     MOV EAX,dword ptr [ESI]
0074F836  6A 00                     PUSH 0x0
0074F838  56                        PUSH ESI
0074F839  FF 50 10                  CALL dword ptr [EAX + 0x10]
0074F83C  85 C0                     TEST EAX,EAX
0074F83E  7C 29                     JL 0x0074f869
0074F840  FF 75 28                  PUSH dword ptr [EBP + 0x28]
0074F843  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0074F846  FF 75 24                  PUSH dword ptr [EBP + 0x24]
0074F849  8B 08                     MOV ECX,dword ptr [EAX]
0074F84B  FF 75 20                  PUSH dword ptr [EBP + 0x20]
0074F84E  FF 75 1C                  PUSH dword ptr [EBP + 0x1c]
0074F851  FF 75 18                  PUSH dword ptr [EBP + 0x18]
0074F854  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074F857  56                        PUSH ESI
0074F858  50                        PUSH EAX
0074F859  FF 51 2C                  CALL dword ptr [ECX + 0x2c]
0074F85C  8B F0                     MOV ESI,EAX
0074F85E  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0074F861  50                        PUSH EAX
0074F862  8B 08                     MOV ECX,dword ptr [EAX]
0074F864  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074F867  8B C6                     MOV EAX,ESI
LAB_0074f869:
0074F869  5F                        POP EDI
0074F86A  5E                        POP ESI
0074F86B  5D                        POP EBP
0074F86C  C2 24 00                  RET 0x24
