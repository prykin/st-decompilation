FUN_0074e930:
0074E930  55                        PUSH EBP
0074E931  8B EC                     MOV EBP,ESP
0074E933  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0074E936  8D 45 08                  LEA EAX,[EBP + 0x8]
0074E939  50                        PUSH EAX
0074E93A  E8 A0 FF FF FF            CALL 0x0074e8df
0074E93F  85 C0                     TEST EAX,EAX
0074E941  7C 1B                     JL 0x0074e95e
0074E943  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074E946  56                        PUSH ESI
0074E947  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074E94A  8B 08                     MOV ECX,dword ptr [EAX]
0074E94C  50                        PUSH EAX
0074E94D  FF 51 0C                  CALL dword ptr [ECX + 0xc]
0074E950  8B F0                     MOV ESI,EAX
0074E952  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074E955  50                        PUSH EAX
0074E956  8B 08                     MOV ECX,dword ptr [EAX]
0074E958  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074E95B  8B C6                     MOV EAX,ESI
0074E95D  5E                        POP ESI
LAB_0074e95e:
0074E95E  5D                        POP EBP
0074E95F  C2 08 00                  RET 0x8
