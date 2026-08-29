CreateSTDest:
006023C0  68 AF 03 00 00            PUSH 0x3af
CreateSTDest::override::prt_6023c5_478cfdcf:
006023C5  E8 06 E1 0A 00            CALL 0x006b04d0  ; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STDestC; signature=__stdcall;pointer:/STDestC;/uint
006023CA  85 C0                     TEST EAX,EAX
006023CC  74 07                     JZ 0x006023d5
006023CE  8B C8                     MOV ECX,EAX
006023D0  E9 88 20 E0 FF            JMP 0x0040445d
LAB_006023d5:
006023D5  33 C0                     XOR EAX,EAX
006023D7  C3                        RET
