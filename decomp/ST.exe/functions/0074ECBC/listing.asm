FUN_0074ecbc:
0074ECBC  55                        PUSH EBP
0074ECBD  8B EC                     MOV EBP,ESP
0074ECBF  8D 45 08                  LEA EAX,[EBP + 0x8]
0074ECC2  50                        PUSH EAX
0074ECC3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074ECC6  8D 48 FC                  LEA ECX,[EAX + -0x4]
0074ECC9  E8 C0 FB FF FF            CALL 0x0074e88e
0074ECCE  85 C0                     TEST EAX,EAX
0074ECD0  7C 1B                     JL 0x0074eced
0074ECD2  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074ECD5  56                        PUSH ESI
0074ECD6  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074ECD9  8B 08                     MOV ECX,dword ptr [EAX]
0074ECDB  50                        PUSH EAX
0074ECDC  FF 51 24                  CALL dword ptr [ECX + 0x24]
0074ECDF  8B F0                     MOV ESI,EAX
0074ECE1  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074ECE4  50                        PUSH EAX
0074ECE5  8B 08                     MOV ECX,dword ptr [EAX]
0074ECE7  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074ECEA  8B C6                     MOV EAX,ESI
0074ECEC  5E                        POP ESI
LAB_0074eced:
0074ECED  5D                        POP EBP
0074ECEE  C2 08 00                  RET 0x8
