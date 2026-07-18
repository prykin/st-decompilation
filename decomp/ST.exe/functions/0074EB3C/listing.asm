FUN_0074eb3c:
0074EB3C  55                        PUSH EBP
0074EB3D  8B EC                     MOV EBP,ESP
0074EB3F  51                        PUSH ECX
0074EB40  8D 45 FC                  LEA EAX,[EBP + -0x4]
0074EB43  56                        PUSH ESI
0074EB44  50                        PUSH EAX
0074EB45  E8 95 FD FF FF            CALL 0x0074e8df
0074EB4A  8B F0                     MOV ESI,EAX
0074EB4C  85 F6                     TEST ESI,ESI
0074EB4E  7C 14                     JL 0x0074eb64
0074EB50  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074EB53  FF 75 FC                  PUSH dword ptr [EBP + -0x4]
0074EB56  FF 55 08                  CALL dword ptr [EBP + 0x8]
0074EB59  8B F0                     MOV ESI,EAX
0074EB5B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0074EB5E  50                        PUSH EAX
0074EB5F  8B 08                     MOV ECX,dword ptr [EAX]
0074EB61  FF 51 08                  CALL dword ptr [ECX + 0x8]
LAB_0074eb64:
0074EB64  8B C6                     MOV EAX,ESI
0074EB66  5E                        POP ESI
0074EB67  C9                        LEAVE
0074EB68  C2 08 00                  RET 0x8
