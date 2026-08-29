CreateSTGroupBoat:
004A8890  68 12 03 00 00            PUSH 0x312
CreateSTGroupBoat::override::prt_4a8895_6fae859f:
004A8895  E8 36 7C 20 00            CALL 0x006b04d0  ; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STGroupBoatC; signature=__stdcall;pointer:/STGroupBoatC;/uint
004A889A  85 C0                     TEST EAX,EAX
004A889C  74 07                     JZ 0x004a88a5
004A889E  8B C8                     MOV ECX,EAX
004A88A0  E9 E5 B1 F5 FF            JMP 0x00403a8a
LAB_004a88a5:
004A88A5  33 C0                     XOR EAX,EAX
004A88A7  C3                        RET
