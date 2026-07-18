FUN_005fcc00:
005FCC00  55                        PUSH EBP
005FCC01  8B EC                     MOV EBP,ESP
005FCC03  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005FCC06  8B C1                     MOV EAX,ECX
005FCC08  56                        PUSH ESI
005FCC09  57                        PUSH EDI
005FCC0A  B9 55 00 00 00            MOV ECX,0x55
005FCC0F  8B F2                     MOV ESI,EDX
005FCC11  8D B8 26 03 00 00         LEA EDI,[EAX + 0x326]
005FCC17  F3 A5                     MOVSD.REP ES:EDI,ESI
005FCC19  A4                        MOVSB ES:EDI,ESI
005FCC1A  B9 3D 00 00 00            MOV ECX,0x3d
005FCC1F  8D B2 55 01 00 00         LEA ESI,[EDX + 0x155]
005FCC25  8D B8 31 02 00 00         LEA EDI,[EAX + 0x231]
005FCC2B  81 C2 46 02 00 00         ADD EDX,0x246
005FCC31  F3 A5                     MOVSD.REP ES:EDI,ESI
005FCC33  52                        PUSH EDX
005FCC34  8B C8                     MOV ECX,EAX
005FCC36  A4                        MOVSB ES:EDI,ESI
005FCC37  E8 1D 59 E0 FF            CALL 0x00402559
005FCC3C  5F                        POP EDI
005FCC3D  05 4A 02 00 00            ADD EAX,0x24a
005FCC42  5E                        POP ESI
005FCC43  5D                        POP EBP
005FCC44  C2 04 00                  RET 0x4
