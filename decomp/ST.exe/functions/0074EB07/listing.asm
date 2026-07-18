FUN_0074eb07:
0074EB07  55                        PUSH EBP
0074EB08  8B EC                     MOV EBP,ESP
0074EB0A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0074EB0D  8D 45 08                  LEA EAX,[EBP + 0x8]
0074EB10  50                        PUSH EAX
0074EB11  E8 C9 FD FF FF            CALL 0x0074e8df
0074EB16  85 C0                     TEST EAX,EAX
0074EB18  7C 1E                     JL 0x0074eb38
0074EB1A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074EB1D  56                        PUSH ESI
0074EB1E  FF 75 10                  PUSH dword ptr [EBP + 0x10]
0074EB21  8B 08                     MOV ECX,dword ptr [EAX]
0074EB23  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074EB26  50                        PUSH EAX
0074EB27  FF 51 3C                  CALL dword ptr [ECX + 0x3c]
0074EB2A  8B F0                     MOV ESI,EAX
0074EB2C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074EB2F  50                        PUSH EAX
0074EB30  8B 08                     MOV ECX,dword ptr [EAX]
0074EB32  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074EB35  8B C6                     MOV EAX,ESI
0074EB37  5E                        POP ESI
LAB_0074eb38:
0074EB38  5D                        POP EBP
0074EB39  C2 0C 00                  RET 0xc
