CreateSTFish:
0057CC60  68 6B 02 00 00            PUSH 0x26b
CreateSTFish::override::prt_57cc65_9ffe66a5:
0057CC65  E8 66 38 13 00            CALL 0x006b04d0  ; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STFishC; signature=__stdcall;pointer:/STFishC;/uint
0057CC6A  85 C0                     TEST EAX,EAX
0057CC6C  74 07                     JZ 0x0057cc75
0057CC6E  8B C8                     MOV ECX,EAX
0057CC70  E9 15 87 E8 FF            JMP 0x0040538a
LAB_0057cc75:
0057CC75  33 C0                     XOR EAX,EAX
0057CC77  C3                        RET
