FUN_0074b79e:
0074B79E  A1 00 75 85 00            MOV EAX,[0x00857500]
0074B7A3  85 C0                     TEST EAX,EAX
0074B7A5  75 10                     JNZ 0x0074b7b7
0074B7A7  68 B0 16 7A 00            PUSH 0x7a16b0
0074B7AC  FF 15 C0 BC 85 00         CALL dword ptr [0x0085bcc0]
0074B7B2  A3 00 75 85 00            MOV [0x00857500],EAX
LAB_0074b7b7:
0074B7B7  C3                        RET
