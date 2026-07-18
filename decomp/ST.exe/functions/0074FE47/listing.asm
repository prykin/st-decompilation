FUN_0074fe47:
0074FE47  55                        PUSH EBP
0074FE48  8B EC                     MOV EBP,ESP
0074FE4A  DD 45 0C                  FLD double ptr [EBP + 0xc]
0074FE4D  DC 0D 00 1C 7A 00         FMUL double ptr [0x007a1c00]
0074FE53  53                        PUSH EBX
0074FE54  56                        PUSH ESI
0074FE55  57                        PUSH EDI
0074FE56  E8 2D E4 FD FF            CALL 0x0072e288
0074FE5B  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0074FE5E  8B D8                     MOV EBX,EAX
0074FE60  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
0074FE63  FF 76 24                  PUSH dword ptr [ESI + 0x24]
0074FE66  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
0074FE69  52                        PUSH EDX
0074FE6A  53                        PUSH EBX
0074FE6B  E8 34 00 00 00            CALL 0x0074fea4
0074FE70  85 C0                     TEST EAX,EAX
0074FE72  74 07                     JZ 0x0074fe7b
0074FE74  B8 33 02 04 80            MOV EAX,0x80040233
0074FE79  EB 22                     JMP 0x0074fe9d
LAB_0074fe7b:
0074FE7B  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
0074FE7E  8D 7E F4                  LEA EDI,[ESI + -0xc]
0074FE81  57                        PUSH EDI
0074FE82  8B 01                     MOV EAX,dword ptr [ECX]
0074FE84  FF 50 0C                  CALL dword ptr [EAX + 0xc]
0074FE87  85 C0                     TEST EAX,EAX
0074FE89  7C 12                     JL 0x0074fe9d
0074FE8B  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0074FE8E  89 5E 0C                  MOV dword ptr [ESI + 0xc],EBX
0074FE91  89 46 10                  MOV dword ptr [ESI + 0x10],EAX
0074FE94  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
0074FE97  57                        PUSH EDI
0074FE98  8B 01                     MOV EAX,dword ptr [ECX]
0074FE9A  FF 50 08                  CALL dword ptr [EAX + 0x8]
LAB_0074fe9d:
0074FE9D  5F                        POP EDI
0074FE9E  5E                        POP ESI
0074FE9F  5B                        POP EBX
0074FEA0  5D                        POP EBP
0074FEA1  C2 0C 00                  RET 0xc
