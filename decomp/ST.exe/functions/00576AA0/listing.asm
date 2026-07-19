BaseSystemC::BaseSystemC:
00576AA0  55                        PUSH EBP
00576AA1  8B EC                     MOV EBP,ESP
00576AA3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00576AA6  56                        PUSH ESI
00576AA7  6A 00                     PUSH 0x0
00576AA9  8B F1                     MOV ESI,ECX
00576AAB  50                        PUSH EAX
00576AAC  E8 0F E7 16 00            CALL 0x006e51c0
00576AB1  C7 06 B4 B1 79 00         MOV dword ptr [ESI],0x79b1b4
00576AB7  8B C6                     MOV EAX,ESI
00576AB9  5E                        POP ESI
00576ABA  5D                        POP EBP
00576ABB  C2 04 00                  RET 0x4
