FUN_006aac10:
006AAC10  55                        PUSH EBP
006AAC11  8B EC                     MOV EBP,ESP
006AAC13  56                        PUSH ESI
006AAC14  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006AAC17  85 F6                     TEST ESI,ESI
006AAC19  75 05                     JNZ 0x006aac20
006AAC1B  BE 01 00 00 00            MOV ESI,0x1
LAB_006aac20:
006AAC20  56                        PUSH ESI
006AAC21  E8 FB 7E D5 FF            CALL 0x00402b21
006AAC26  8B D0                     MOV EDX,EAX
006AAC28  83 C4 04                  ADD ESP,0x4
006AAC2B  85 D2                     TEST EDX,EDX
006AAC2D  75 1B                     JNZ 0x006aac4a
006AAC2F  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006AAC34  6A 17                     PUSH 0x17
006AAC36  68 4C D7 7E 00            PUSH 0x7ed74c
006AAC3B  50                        PUSH EAX
006AAC3C  6A FE                     PUSH -0x2
006AAC3E  E8 FD B1 FF FF            CALL 0x006a5e40
006AAC43  33 C0                     XOR EAX,EAX
006AAC45  5E                        POP ESI
006AAC46  5D                        POP EBP
006AAC47  C2 04 00                  RET 0x4
LAB_006aac4a:
006AAC4A  8B CE                     MOV ECX,ESI
006AAC4C  57                        PUSH EDI
006AAC4D  33 C0                     XOR EAX,EAX
006AAC4F  8B FA                     MOV EDI,EDX
006AAC51  C1 E9 02                  SHR ECX,0x2
006AAC54  F3 AB                     STOSD.REP ES:EDI
006AAC56  8B CE                     MOV ECX,ESI
006AAC58  83 E1 03                  AND ECX,0x3
006AAC5B  F3 AA                     STOSB.REP ES:EDI
006AAC5D  5F                        POP EDI
006AAC5E  8B C2                     MOV EAX,EDX
006AAC60  5E                        POP ESI
006AAC61  5D                        POP EBP
006AAC62  C2 04 00                  RET 0x4
