FUN_0075ef30:
0075EF30  55                        PUSH EBP
0075EF31  8B EC                     MOV EBP,ESP
0075EF33  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0075EF36  56                        PUSH ESI
0075EF37  8B B0 BA 01 00 00         MOV ESI,dword ptr [EAX + 0x1ba]
0075EF3D  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
0075EF40  89 88 80 00 00 00         MOV dword ptr [EAX + 0x80],ECX
0075EF46  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
0075EF49  52                        PUSH EDX
0075EF4A  50                        PUSH EAX
0075EF4B  E8 10 00 00 00            CALL 0x0075ef60
0075EF50  C7 46 1C 01 00 00 00      MOV dword ptr [ESI + 0x1c],0x1
0075EF57  5E                        POP ESI
0075EF58  5D                        POP EBP
0075EF59  C2 04 00                  RET 0x4
