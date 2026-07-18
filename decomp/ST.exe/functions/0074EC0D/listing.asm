FUN_0074ec0d:
0074EC0D  55                        PUSH EBP
0074EC0E  8B EC                     MOV EBP,ESP
0074EC10  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0074EC13  8D 45 08                  LEA EAX,[EBP + 0x8]
0074EC16  50                        PUSH EAX
0074EC17  E8 C3 FC FF FF            CALL 0x0074e8df
0074EC1C  85 C0                     TEST EAX,EAX
0074EC1E  7C 1B                     JL 0x0074ec3b
0074EC20  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074EC23  56                        PUSH ESI
0074EC24  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074EC27  8B 08                     MOV ECX,dword ptr [EAX]
0074EC29  50                        PUSH EAX
0074EC2A  FF 51 48                  CALL dword ptr [ECX + 0x48]
0074EC2D  8B F0                     MOV ESI,EAX
0074EC2F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074EC32  50                        PUSH EAX
0074EC33  8B 08                     MOV ECX,dword ptr [EAX]
0074EC35  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074EC38  8B C6                     MOV EAX,ESI
0074EC3A  5E                        POP ESI
LAB_0074ec3b:
0074EC3B  5D                        POP EBP
0074EC3C  C2 08 00                  RET 0x8
