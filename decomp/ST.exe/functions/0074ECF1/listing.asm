FUN_0074ecf1:
0074ECF1  55                        PUSH EBP
0074ECF2  8B EC                     MOV EBP,ESP
0074ECF4  8D 45 08                  LEA EAX,[EBP + 0x8]
0074ECF7  50                        PUSH EAX
0074ECF8  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074ECFB  8D 48 FC                  LEA ECX,[EAX + -0x4]
0074ECFE  E8 8B FB FF FF            CALL 0x0074e88e
0074ED03  85 C0                     TEST EAX,EAX
0074ED05  7C 20                     JL 0x0074ed27
0074ED07  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074ED0A  56                        PUSH ESI
0074ED0B  DD 45 0C                  FLD double ptr [EBP + 0xc]
0074ED0E  8B 08                     MOV ECX,dword ptr [EAX]
0074ED10  51                        PUSH ECX
0074ED11  51                        PUSH ECX
0074ED12  DD 1C 24                  FSTP double ptr [ESP]
0074ED15  50                        PUSH EAX
0074ED16  FF 51 20                  CALL dword ptr [ECX + 0x20]
0074ED19  8B F0                     MOV ESI,EAX
0074ED1B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074ED1E  50                        PUSH EAX
0074ED1F  8B 08                     MOV ECX,dword ptr [EAX]
0074ED21  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074ED24  8B C6                     MOV EAX,ESI
0074ED26  5E                        POP ESI
LAB_0074ed27:
0074ED27  5D                        POP EBP
0074ED28  C2 0C 00                  RET 0xc
