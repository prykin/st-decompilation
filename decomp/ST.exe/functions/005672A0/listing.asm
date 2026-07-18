FUN_005672a0:
005672A0  55                        PUSH EBP
005672A1  8B EC                     MOV EBP,ESP
005672A3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005672A6  56                        PUSH ESI
005672A7  8B F1                     MOV ESI,ECX
005672A9  50                        PUSH EAX
005672AA  E8 A5 BC E9 FF            CALL 0x00402f54
005672AF  8B 86 8B 0F 00 00         MOV EAX,dword ptr [ESI + 0xf8b]
005672B5  85 C0                     TEST EAX,EAX
005672B7  74 07                     JZ 0x005672c0
005672B9  8B CE                     MOV ECX,ESI
005672BB  E8 50 B5 E9 FF            CALL 0x00402810
LAB_005672c0:
005672C0  5E                        POP ESI
005672C1  5D                        POP EBP
005672C2  C2 04 00                  RET 0x4
