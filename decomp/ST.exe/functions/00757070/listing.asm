FUN_00757070:
00757070  55                        PUSH EBP
00757071  8B EC                     MOV EBP,ESP
00757073  56                        PUSH ESI
00757074  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00757077  57                        PUSH EDI
00757078  68 80 05 00 00            PUSH 0x580
0075707D  8B 06                     MOV EAX,dword ptr [ESI]
0075707F  6A 01                     PUSH 0x1
00757081  56                        PUSH ESI
00757082  FF 10                     CALL dword ptr [EAX]
00757084  8B D0                     MOV EDX,EAX
00757086  B9 40 00 00 00            MOV ECX,0x40
0075708B  81 C2 00 01 00 00         ADD EDX,0x100
00757091  33 C0                     XOR EAX,EAX
00757093  89 96 32 01 00 00         MOV dword ptr [ESI + 0x132],EDX
00757099  8D BA 00 FF FF FF         LEA EDI,[EDX + 0xffffff00]
0075709F  F3 AB                     STOSD.REP ES:EDI
LAB_007570a1:
007570A1  88 04 10                  MOV byte ptr [EAX + EDX*0x1],AL
007570A4  40                        INC EAX
007570A5  3D FF 00 00 00            CMP EAX,0xff
007570AA  7E F5                     JLE 0x007570a1
007570AC  81 C2 80 00 00 00         ADD EDX,0x80
007570B2  B9 60 00 00 00            MOV ECX,0x60
007570B7  83 C8 FF                  OR EAX,0xffffffff
007570BA  8D BA 80 00 00 00         LEA EDI,[EDX + 0x80]
007570C0  F3 AB                     STOSD.REP ES:EDI
007570C2  B9 60 00 00 00            MOV ECX,0x60
007570C7  33 C0                     XOR EAX,EAX
007570C9  8D BA 00 02 00 00         LEA EDI,[EDX + 0x200]
007570CF  F3 AB                     STOSD.REP ES:EDI
007570D1  8B B6 32 01 00 00         MOV ESI,dword ptr [ESI + 0x132]
007570D7  8D BA 80 03 00 00         LEA EDI,[EDX + 0x380]
007570DD  B9 20 00 00 00            MOV ECX,0x20
007570E2  F3 A5                     MOVSD.REP ES:EDI,ESI
007570E4  5F                        POP EDI
007570E5  5E                        POP ESI
007570E6  5D                        POP EBP
007570E7  C2 04 00                  RET 0x4
