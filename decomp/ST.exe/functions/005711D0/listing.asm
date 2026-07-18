FUN_005711d0:
005711D0  55                        PUSH EBP
005711D1  8B EC                     MOV EBP,ESP
005711D3  56                        PUSH ESI
005711D4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005711D7  57                        PUSH EDI
005711D8  8B F9                     MOV EDI,ECX
005711DA  8B 06                     MOV EAX,dword ptr [ESI]
005711DC  85 C0                     TEST EAX,EAX
005711DE  74 32                     JZ 0x00571212
005711E0  50                        PUSH EAX
005711E1  E8 4A 3A 17 00            CALL 0x006e4c30
005711E6  8B 06                     MOV EAX,dword ptr [ESI]
005711E8  8B CF                     MOV ECX,EDI
005711EA  50                        PUSH EAX
005711EB  E8 90 39 17 00            CALL 0x006e4b80
005711F0  8B 0E                     MOV ECX,dword ptr [ESI]
005711F2  51                        PUSH ECX
005711F3  8B CF                     MOV ECX,EDI
005711F5  E8 26 3B 17 00            CALL 0x006e4d20
005711FA  8B 0E                     MOV ECX,dword ptr [ESI]
005711FC  8B 11                     MOV EDX,dword ptr [ECX]
005711FE  FF 52 04                  CALL dword ptr [EDX + 0x4]
00571201  8B 06                     MOV EAX,dword ptr [ESI]
00571203  50                        PUSH EAX
00571204  E8 A7 D0 1B 00            CALL 0x0072e2b0
00571209  83 C4 04                  ADD ESP,0x4
0057120C  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
LAB_00571212:
00571212  5F                        POP EDI
00571213  5E                        POP ESI
00571214  5D                        POP EBP
00571215  C2 04 00                  RET 0x4
