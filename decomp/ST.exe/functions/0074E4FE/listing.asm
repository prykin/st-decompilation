FUN_0074e4fe:
0074E4FE  55                        PUSH EBP
0074E4FF  8B EC                     MOV EBP,ESP
0074E501  56                        PUSH ESI
0074E502  57                        PUSH EDI
0074E503  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0074E506  6A 10                     PUSH 0x10
0074E508  59                        POP ECX
0074E509  BE 68 E3 79 00            MOV ESI,0x79e368
0074E50E  33 C0                     XOR EAX,EAX
0074E510  F3 A6                     CMPSB.REPE ES:EDI,ESI
0074E512  74 07                     JZ 0x0074e51b
0074E514  B8 01 00 02 80            MOV EAX,0x80020001
0074E519  EB 3F                     JMP 0x0074e55a
LAB_0074e51b:
0074E51B  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0074E51E  8D 4D 10                  LEA ECX,[EBP + 0x10]
0074E521  51                        PUSH ECX
0074E522  FF 75 14                  PUSH dword ptr [EBP + 0x14]
0074E525  8B 06                     MOV EAX,dword ptr [ESI]
0074E527  6A 00                     PUSH 0x0
0074E529  56                        PUSH ESI
0074E52A  FF 50 10                  CALL dword ptr [EAX + 0x10]
0074E52D  85 C0                     TEST EAX,EAX
0074E52F  7C 29                     JL 0x0074e55a
0074E531  FF 75 28                  PUSH dword ptr [EBP + 0x28]
0074E534  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0074E537  FF 75 24                  PUSH dword ptr [EBP + 0x24]
0074E53A  8B 08                     MOV ECX,dword ptr [EAX]
0074E53C  FF 75 20                  PUSH dword ptr [EBP + 0x20]
0074E53F  FF 75 1C                  PUSH dword ptr [EBP + 0x1c]
0074E542  FF 75 18                  PUSH dword ptr [EBP + 0x18]
0074E545  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074E548  56                        PUSH ESI
0074E549  50                        PUSH EAX
0074E54A  FF 51 2C                  CALL dword ptr [ECX + 0x2c]
0074E54D  8B F0                     MOV ESI,EAX
0074E54F  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0074E552  50                        PUSH EAX
0074E553  8B 08                     MOV ECX,dword ptr [EAX]
0074E555  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074E558  8B C6                     MOV EAX,ESI
LAB_0074e55a:
0074E55A  5F                        POP EDI
0074E55B  5E                        POP ESI
0074E55C  5D                        POP EBP
0074E55D  C2 24 00                  RET 0x24
