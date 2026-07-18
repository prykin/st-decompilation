FUN_0074ed60:
0074ED60  55                        PUSH EBP
0074ED61  8B EC                     MOV EBP,ESP
0074ED63  8D 45 08                  LEA EAX,[EBP + 0x8]
0074ED66  50                        PUSH EAX
0074ED67  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074ED6A  8D 48 FC                  LEA ECX,[EAX + -0x4]
0074ED6D  E8 1C FB FF FF            CALL 0x0074e88e
0074ED72  85 C0                     TEST EAX,EAX
0074ED74  7C 20                     JL 0x0074ed96
0074ED76  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074ED79  56                        PUSH ESI
0074ED7A  DD 45 0C                  FLD double ptr [EBP + 0xc]
0074ED7D  8B 08                     MOV ECX,dword ptr [EAX]
0074ED7F  51                        PUSH ECX
0074ED80  51                        PUSH ECX
0074ED81  DD 1C 24                  FSTP double ptr [ESP]
0074ED84  50                        PUSH EAX
0074ED85  FF 51 2C                  CALL dword ptr [ECX + 0x2c]
0074ED88  8B F0                     MOV ESI,EAX
0074ED8A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074ED8D  50                        PUSH EAX
0074ED8E  8B 08                     MOV ECX,dword ptr [EAX]
0074ED90  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074ED93  8B C6                     MOV EAX,ESI
0074ED95  5E                        POP ESI
LAB_0074ed96:
0074ED96  5D                        POP EBP
0074ED97  C2 0C 00                  RET 0xc
