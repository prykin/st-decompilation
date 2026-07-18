FUN_00757710:
00757710  55                        PUSH EBP
00757711  8B EC                     MOV EBP,ESP
00757713  56                        PUSH ESI
00757714  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00757717  56                        PUSH ESI
00757718  E8 33 00 00 00            CALL 0x00757750
0075771D  56                        PUSH ESI
0075771E  E8 CD 01 00 00            CALL 0x007578f0
00757723  8B 86 AA 01 00 00         MOV EAX,dword ptr [ESI + 0x1aa]
00757729  56                        PUSH ESI
0075772A  FF 10                     CALL dword ptr [EAX]
0075772C  8B 8E 9A 01 00 00         MOV ECX,dword ptr [ESI + 0x19a]
00757732  56                        PUSH ESI
00757733  FF 11                     CALL dword ptr [ECX]
00757735  8B 96 9A 01 00 00         MOV EDX,dword ptr [ESI + 0x19a]
0075773B  8B 86 A2 01 00 00         MOV EAX,dword ptr [ESI + 0x1a2]
00757741  5E                        POP ESI
00757742  8B 4A 04                  MOV ECX,dword ptr [EDX + 0x4]
00757745  89 08                     MOV dword ptr [EAX],ECX
00757747  5D                        POP EBP
00757748  C2 04 00                  RET 0x4
