FUN_005da940:
005DA940  55                        PUSH EBP
005DA941  8B EC                     MOV EBP,ESP
005DA943  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005DA946  8B D1                     MOV EDX,ECX
005DA948  56                        PUSH ESI
005DA949  57                        PUSH EDI
005DA94A  8B 92 8A 06 00 00         MOV EDX,dword ptr [EDX + 0x68a]
005DA950  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005DA953  B9 04 00 00 00            MOV ECX,0x4
005DA958  BF 00 D7 7C 00            MOV EDI,0x7cd700
005DA95D  8D 74 82 0C               LEA ESI,[EDX + EAX*0x4 + 0xc]
005DA961  33 C0                     XOR EAX,EAX
005DA963  F3 A7                     CMPSD.REPE ES:EDI,ESI
005DA965  5F                        POP EDI
005DA966  5E                        POP ESI
005DA967  0F 94 C0                  SETZ AL
005DA96A  5D                        POP EBP
005DA96B  C2 04 00                  RET 0x4
