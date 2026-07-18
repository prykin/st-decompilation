FUN_005fce70:
005FCE70  55                        PUSH EBP
005FCE71  8B EC                     MOV EBP,ESP
005FCE73  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005FCE76  56                        PUSH ESI
005FCE77  8B F1                     MOV ESI,ECX
005FCE79  68 03 01 00 00            PUSH 0x103
005FCE7E  50                        PUSH EAX
005FCE7F  8D 8E 6B 03 00 00         LEA ECX,[ESI + 0x36b]
005FCE85  51                        PUSH ECX
005FCE86  E8 B5 14 13 00            CALL 0x0072e340
005FCE8B  83 C4 0C                  ADD ESP,0xc
005FCE8E  C6 86 6E 04 00 00 00      MOV byte ptr [ESI + 0x46e],0x0
005FCE95  5E                        POP ESI
005FCE96  5D                        POP EBP
005FCE97  C2 04 00                  RET 0x4
