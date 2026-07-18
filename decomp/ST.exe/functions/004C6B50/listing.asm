FUN_004c6b50:
004C6B50  56                        PUSH ESI
004C6B51  8B F1                     MOV ESI,ECX
004C6B53  33 C0                     XOR EAX,EAX
004C6B55  6A 01                     PUSH 0x1
004C6B57  89 86 DC 03 00 00         MOV dword ptr [ESI + 0x3dc],EAX
004C6B5D  89 86 EC 03 00 00         MOV dword ptr [ESI + 0x3ec],EAX
004C6B63  E8 42 AF F3 FF            CALL 0x00401aaa
004C6B68  6A 03                     PUSH 0x3
004C6B6A  8B CE                     MOV ECX,ESI
004C6B6C  E8 1F F1 F3 FF            CALL 0x00405c90
004C6B71  6A 01                     PUSH 0x1
004C6B73  8B CE                     MOV ECX,ESI
004C6B75  E8 8B E5 F3 FF            CALL 0x00405105
004C6B7A  33 C0                     XOR EAX,EAX
004C6B7C  5E                        POP ESI
004C6B7D  C3                        RET
