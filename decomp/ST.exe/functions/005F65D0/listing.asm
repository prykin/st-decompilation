CreateSTColl3:
005F65D0  68 F3 02 00 00            PUSH 0x2f3
CreateSTColl3::override::prt_5f65d5_28e8bd7c:
005F65D5  E8 F6 9E 0B 00            CALL 0x006b04d0  ; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STColl3C; signature=__stdcall;pointer:/STColl3C;/uint
005F65DA  85 C0                     TEST EAX,EAX
005F65DC  74 07                     JZ 0x005f65e5
005F65DE  8B C8                     MOV ECX,EAX
005F65E0  E9 E3 C8 E0 FF            JMP 0x00402ec8
LAB_005f65e5:
005F65E5  33 C0                     XOR EAX,EAX
005F65E7  C3                        RET
