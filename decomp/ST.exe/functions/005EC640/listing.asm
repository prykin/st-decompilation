FUN_005ec640:
005EC640  55                        PUSH EBP
005EC641  8B EC                     MOV EBP,ESP
005EC643  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005EC646  56                        PUSH ESI
005EC647  8B F1                     MOV ESI,ECX
005EC649  68 03 01 00 00            PUSH 0x103
005EC64E  50                        PUSH EAX
005EC64F  8D 8E 67 03 00 00         LEA ECX,[ESI + 0x367]
005EC655  51                        PUSH ECX
005EC656  E8 E5 1C 14 00            CALL 0x0072e340
005EC65B  83 C4 0C                  ADD ESP,0xc
005EC65E  C6 86 6A 04 00 00 00      MOV byte ptr [ESI + 0x46a],0x0
005EC665  5E                        POP ESI
005EC666  5D                        POP EBP
005EC667  C2 04 00                  RET 0x4
