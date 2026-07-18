FUN_0074e9f8:
0074E9F8  55                        PUSH EBP
0074E9F9  8B EC                     MOV EBP,ESP
0074E9FB  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0074E9FE  8D 45 08                  LEA EAX,[EBP + 0x8]
0074EA01  50                        PUSH EAX
0074EA02  E8 D8 FE FF FF            CALL 0x0074e8df
0074EA07  85 C0                     TEST EAX,EAX
0074EA09  7C 1B                     JL 0x0074ea26
0074EA0B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074EA0E  56                        PUSH ESI
0074EA0F  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074EA12  8B 08                     MOV ECX,dword ptr [EAX]
0074EA14  50                        PUSH EAX
0074EA15  FF 51 24                  CALL dword ptr [ECX + 0x24]
0074EA18  8B F0                     MOV ESI,EAX
0074EA1A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074EA1D  50                        PUSH EAX
0074EA1E  8B 08                     MOV ECX,dword ptr [EAX]
0074EA20  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074EA23  8B C6                     MOV EAX,ESI
0074EA25  5E                        POP ESI
LAB_0074ea26:
0074EA26  5D                        POP EBP
0074EA27  C2 08 00                  RET 0x8
