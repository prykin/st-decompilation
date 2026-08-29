FUN_0048a640:
0048A640  68 5E 08 00 00            PUSH 0x85e
FUN_0048a640::override::prt_48a645_f467b1a9:
0048A645  E8 86 5E 22 00            CALL 0x006b04d0  ; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__stdcall;pointer:/STBoatC;/uint
0048A64A  85 C0                     TEST EAX,EAX
0048A64C  74 07                     JZ 0x0048a655
0048A64E  8B C8                     MOV ECX,EAX
0048A650  E9 89 86 F7 FF            JMP 0x00402cde
LAB_0048a655:
0048A655  33 C0                     XOR EAX,EAX
0048A657  C3                        RET
