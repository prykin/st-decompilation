FUN_00423e00:
00423E00  56                        PUSH ESI
00423E01  57                        PUSH EDI
00423E02  8B F1                     MOV ESI,ECX
FUN_00423e00::override::prt_423e04_66359455:
00423E04  E8 AC EF FD FF            CALL 0x00402db5  ; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArrayTy; signature=__thiscall;pointer:/SubmarineTitans/Recovered/DArrayTy;pointer:/STGroupC
00423E09  8B F8                     MOV EDI,EAX
00423E0B  8B CE                     MOV ECX,ESI
00423E0D  57                        PUSH EDI
00423E0E  E8 D5 F3 FD FF            CALL 0x004031e8
00423E13  57                        PUSH EDI
00423E14  E8 F7 A2 28 00            CALL 0x006ae110
00423E19  5F                        POP EDI
00423E1A  5E                        POP ESI
00423E1B  C3                        RET
