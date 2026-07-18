FUN_004d9c20:
004D9C20  56                        PUSH ESI
004D9C21  8B F1                     MOV ESI,ECX
004D9C23  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004D9C29  85 C0                     TEST EAX,EAX
004D9C2B  75 18                     JNZ 0x004d9c45
004D9C2D  C7 86 D0 04 00 00 01 00 00 00  MOV dword ptr [ESI + 0x4d0],0x1
004D9C37  E8 D3 7D F2 FF            CALL 0x00401a0f
004D9C3C  6A 00                     PUSH 0x0
004D9C3E  8B CE                     MOV ECX,ESI
004D9C40  E8 B2 90 F2 FF            CALL 0x00402cf7
LAB_004d9c45:
004D9C45  B8 01 00 00 00            MOV EAX,0x1
004D9C4A  5E                        POP ESI
004D9C4B  C3                        RET
