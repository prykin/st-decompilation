FUN_0074b777:
0074B777  68 04 75 85 00            PUSH 0x857504
0074B77C  FF 15 70 BC 85 00         CALL dword ptr [0x0085bc70]
0074B782  85 C0                     TEST EAX,EAX
0074B784  75 17                     JNZ 0x0074b79d
0074B786  A1 00 75 85 00            MOV EAX,[0x00857500]
0074B78B  85 C0                     TEST EAX,EAX
0074B78D  74 0E                     JZ 0x0074b79d
0074B78F  50                        PUSH EAX
0074B790  FF 15 10 BD 85 00         CALL dword ptr [0x0085bd10]
0074B796  83 25 00 75 85 00 00      AND dword ptr [0x00857500],0x0
LAB_0074b79d:
0074B79D  C3                        RET
