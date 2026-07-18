FUN_0074e622:
0074E622  55                        PUSH EBP
0074E623  8B EC                     MOV EBP,ESP
0074E625  56                        PUSH ESI
0074E626  57                        PUSH EDI
0074E627  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0074E62A  6A 10                     PUSH 0x10
0074E62C  59                        POP ECX
0074E62D  BE 68 E3 79 00            MOV ESI,0x79e368
0074E632  33 C0                     XOR EAX,EAX
0074E634  F3 A6                     CMPSB.REPE ES:EDI,ESI
0074E636  74 07                     JZ 0x0074e63f
0074E638  B8 01 00 02 80            MOV EAX,0x80020001
0074E63D  EB 3F                     JMP 0x0074e67e
LAB_0074e63f:
0074E63F  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0074E642  8D 4D 10                  LEA ECX,[EBP + 0x10]
0074E645  51                        PUSH ECX
0074E646  FF 75 14                  PUSH dword ptr [EBP + 0x14]
0074E649  8B 06                     MOV EAX,dword ptr [ESI]
0074E64B  6A 00                     PUSH 0x0
0074E64D  56                        PUSH ESI
0074E64E  FF 50 10                  CALL dword ptr [EAX + 0x10]
0074E651  85 C0                     TEST EAX,EAX
0074E653  7C 29                     JL 0x0074e67e
0074E655  FF 75 28                  PUSH dword ptr [EBP + 0x28]
0074E658  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0074E65B  FF 75 24                  PUSH dword ptr [EBP + 0x24]
0074E65E  8B 08                     MOV ECX,dword ptr [EAX]
0074E660  FF 75 20                  PUSH dword ptr [EBP + 0x20]
0074E663  FF 75 1C                  PUSH dword ptr [EBP + 0x1c]
0074E666  FF 75 18                  PUSH dword ptr [EBP + 0x18]
0074E669  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074E66C  56                        PUSH ESI
0074E66D  50                        PUSH EAX
0074E66E  FF 51 2C                  CALL dword ptr [ECX + 0x2c]
0074E671  8B F0                     MOV ESI,EAX
0074E673  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0074E676  50                        PUSH EAX
0074E677  8B 08                     MOV ECX,dword ptr [EAX]
0074E679  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074E67C  8B C6                     MOV EAX,ESI
LAB_0074e67e:
0074E67E  5F                        POP EDI
0074E67F  5E                        POP ESI
0074E680  5D                        POP EBP
0074E681  C2 24 00                  RET 0x24
