FUN_0074a844:
0074A844  55                        PUSH EBP
0074A845  8B EC                     MOV EBP,ESP
0074A847  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074A84A  56                        PUSH ESI
0074A84B  8D 55 08                  LEA EDX,[EBP + 0x8]
0074A84E  8B F1                     MOV ESI,ECX
0074A850  8B 08                     MOV ECX,dword ptr [EAX]
0074A852  52                        PUSH EDX
0074A853  68 E0 1A 7A 00            PUSH 0x7a1ae0
0074A858  50                        PUSH EAX
0074A859  FF 11                     CALL dword ptr [ECX]
0074A85B  85 C0                     TEST EAX,EAX
0074A85D  7C 19                     JL 0x0074a878
0074A85F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074A862  6A 00                     PUSH 0x0
0074A864  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074A867  8B 08                     MOV ECX,dword ptr [EAX]
0074A869  6A 19                     PUSH 0x19
0074A86B  50                        PUSH EAX
0074A86C  FF 51 0C                  CALL dword ptr [ECX + 0xc]
0074A86F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074A872  50                        PUSH EAX
0074A873  8B 08                     MOV ECX,dword ptr [EAX]
0074A875  FF 51 08                  CALL dword ptr [ECX + 0x8]
LAB_0074a878:
0074A878  6A 00                     PUSH 0x0
0074A87A  8B CE                     MOV ECX,ESI
0074A87C  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074A87F  6A 19                     PUSH 0x19
0074A881  E8 80 CB FF FF            CALL 0x00747406
0074A886  5E                        POP ESI
0074A887  5D                        POP EBP
0074A888  C2 08 00                  RET 0x8
