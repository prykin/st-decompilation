FUN_00567490:
00567490  56                        PUSH ESI
00567491  8B F1                     MOV ESI,ECX
00567493  8B 86 8B 0F 00 00         MOV EAX,dword ptr [ESI + 0xf8b]
00567499  85 C0                     TEST EAX,EAX
0056749B  74 16                     JZ 0x005674b3
0056749D  57                        PUSH EDI
0056749E  E8 7D A9 15 00            CALL 0x006c1e20
005674A3  B9 60 00 00 00            MOV ECX,0x60
005674A8  33 C0                     XOR EAX,EAX
005674AA  8D BE 0B 0E 00 00         LEA EDI,[ESI + 0xe0b]
005674B0  F3 AB                     STOSD.REP ES:EDI
005674B2  5F                        POP EDI
LAB_005674b3:
005674B3  8B 8E F3 0D 00 00         MOV ECX,dword ptr [ESI + 0xdf3]
005674B9  8D 86 F3 0D 00 00         LEA EAX,[ESI + 0xdf3]
005674BF  85 C9                     TEST ECX,ECX
005674C1  74 09                     JZ 0x005674cc
005674C3  50                        PUSH EAX
005674C4  E8 07 34 1B 00            CALL 0x0071a8d0
005674C9  83 C4 04                  ADD ESP,0x4
LAB_005674cc:
005674CC  8B 86 EF 0D 00 00         MOV EAX,dword ptr [ESI + 0xdef]
005674D2  85 C0                     TEST EAX,EAX
005674D4  74 13                     JZ 0x005674e9
005674D6  50                        PUSH EAX
005674D7  E8 94 9C 18 00            CALL 0x006f1170
005674DC  83 C4 04                  ADD ESP,0x4
005674DF  C7 86 EF 0D 00 00 00 00 00 00  MOV dword ptr [ESI + 0xdef],0x0
LAB_005674e9:
005674E9  5E                        POP ESI
005674EA  C3                        RET
