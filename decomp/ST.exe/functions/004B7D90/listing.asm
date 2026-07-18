FUN_004b7d90:
004B7D90  56                        PUSH ESI
004B7D91  8B F1                     MOV ESI,ECX
004B7D93  33 C0                     XOR EAX,EAX
004B7D95  8B 8E D0 04 00 00         MOV ECX,dword ptr [ESI + 0x4d0]
004B7D9B  85 C9                     TEST ECX,ECX
004B7D9D  75 28                     JNZ 0x004b7dc7
004B7D9F  57                        PUSH EDI
004B7DA0  BF 01 00 00 00            MOV EDI,0x1
004B7DA5  50                        PUSH EAX
004B7DA6  8B CE                     MOV ECX,ESI
004B7DA8  89 BE D0 04 00 00         MOV dword ptr [ESI + 0x4d0],EDI
004B7DAE  E8 44 AF F4 FF            CALL 0x00402cf7
004B7DB3  8B 06                     MOV EAX,dword ptr [ESI]
004B7DB5  68 CB 03 00 00            PUSH 0x3cb
004B7DBA  6A 03                     PUSH 0x3
004B7DBC  8B CE                     MOV ECX,ESI
004B7DBE  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
004B7DC4  8B C7                     MOV EAX,EDI
004B7DC6  5F                        POP EDI
LAB_004b7dc7:
004B7DC7  5E                        POP ESI
004B7DC8  C3                        RET
