FUN_004dd260:
004DD260  56                        PUSH ESI
004DD261  8B F1                     MOV ESI,ECX
004DD263  57                        PUSH EDI
004DD264  33 FF                     XOR EDI,EDI
004DD266  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004DD26C  48                        DEC EAX
004DD26D  75 22                     JNZ 0x004dd291
004DD26F  6A 0E                     PUSH 0xe
004DD271  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
004DD277  E8 33 70 F2 FF            CALL 0x004042af
004DD27C  8B 8E F5 01 00 00         MOV ECX,dword ptr [ESI + 0x1f5]
004DD282  8B 91 0C 02 00 00         MOV EDX,dword ptr [ECX + 0x20c]
004DD288  3B C2                     CMP EAX,EDX
004DD28A  B8 01 00 00 00            MOV EAX,0x1
004DD28F  74 02                     JZ 0x004dd293
LAB_004dd291:
004DD291  8B C7                     MOV EAX,EDI
LAB_004dd293:
004DD293  5F                        POP EDI
004DD294  5E                        POP ESI
004DD295  C3                        RET
