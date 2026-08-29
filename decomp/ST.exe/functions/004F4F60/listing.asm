FUN_004f4f60:
004F4F60  68 EE 0D 00 00            PUSH 0xdee
FUN_004f4f60::override::prt_4f4f65_43fa3302:
004F4F65  E8 66 B5 1B 00            CALL 0x006b04d0  ; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/AnonShape_004F4F90_2D6E0DDA; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/AnonShape_004F4F90_2D6E0DDA;/uint
004F4F6A  85 C0                     TEST EAX,EAX
004F4F6C  74 07                     JZ 0x004f4f75
004F4F6E  8B C8                     MOV ECX,EAX
004F4F70  E9 2F DB F0 FF            JMP 0x00402aa4
LAB_004f4f75:
004F4F75  33 C0                     XOR EAX,EAX
004F4F77  C3                        RET
