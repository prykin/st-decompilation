CreateSTVolcano:
00646C60  68 B5 00 00 00            PUSH 0xb5
CreateSTVolcano::override::prt_646c65_203a55c3:
00646C65  E8 66 98 06 00            CALL 0x006b04d0  ; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STVolcanoC; signature=__stdcall;pointer:/STVolcanoC;/uint
00646C6A  85 C0                     TEST EAX,EAX
00646C6C  74 07                     JZ 0x00646c75
00646C6E  8B C8                     MOV ECX,EAX
00646C70  E9 3C E3 DB FF            JMP 0x00404fb1
LAB_00646c75:
00646C75  33 C0                     XOR EAX,EAX
00646C77  C3                        RET
