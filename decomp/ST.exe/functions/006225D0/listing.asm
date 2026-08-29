CreateSTMineSet:
006225D0  68 67 03 00 00            PUSH 0x367
CreateSTMineSet::override::prt_6225d5_50f123f5:
006225D5  E8 F6 DE 08 00            CALL 0x006b04d0  ; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STMineSetC; signature=__stdcall;pointer:/STMineSetC;/uint
006225DA  85 C0                     TEST EAX,EAX
006225DC  74 07                     JZ 0x006225e5
006225DE  8B C8                     MOV ECX,EAX
006225E0  E9 8D 2C DE FF            JMP 0x00405272
LAB_006225e5:
006225E5  33 C0                     XOR EAX,EAX
006225E7  C3                        RET
