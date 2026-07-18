FUN_0074ea2a:
0074EA2A  55                        PUSH EBP
0074EA2B  8B EC                     MOV EBP,ESP
0074EA2D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0074EA30  8D 45 08                  LEA EAX,[EBP + 0x8]
0074EA33  50                        PUSH EAX
0074EA34  E8 A6 FE FF FF            CALL 0x0074e8df
0074EA39  85 C0                     TEST EAX,EAX
0074EA3B  7C 1B                     JL 0x0074ea58
0074EA3D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074EA40  56                        PUSH ESI
0074EA41  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074EA44  8B 08                     MOV ECX,dword ptr [EAX]
0074EA46  50                        PUSH EAX
0074EA47  FF 51 1C                  CALL dword ptr [ECX + 0x1c]
0074EA4A  8B F0                     MOV ESI,EAX
0074EA4C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074EA4F  50                        PUSH EAX
0074EA50  8B 08                     MOV ECX,dword ptr [EAX]
0074EA52  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074EA55  8B C6                     MOV EAX,ESI
0074EA57  5E                        POP ESI
LAB_0074ea58:
0074EA58  5D                        POP EBP
0074EA59  C2 08 00                  RET 0x8
