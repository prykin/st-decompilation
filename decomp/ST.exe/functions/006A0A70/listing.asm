FUN_006a0a70:
006A0A70  56                        PUSH ESI
006A0A71  57                        PUSH EDI
006A0A72  8B F1                     MOV ESI,ECX
006A0A74  68 AA 00 00 00            PUSH 0xaa
006A0A79  E8 F2 A1 00 00            CALL 0x006aac70
006A0A7E  8B F8                     MOV EDI,EAX
006A0A80  B9 2A 00 00 00            MOV ECX,0x2a
006A0A85  33 C0                     XOR EAX,EAX
006A0A87  89 3E                     MOV dword ptr [ESI],EDI
006A0A89  F3 AB                     STOSD.REP ES:EDI
006A0A8B  66 AB                     STOSW ES:EDI
006A0A8D  8B 06                     MOV EAX,dword ptr [ESI]
006A0A8F  5F                        POP EDI
006A0A90  C7 00 0A 00 00 00         MOV dword ptr [EAX],0xa
006A0A96  8B 0E                     MOV ECX,dword ptr [ESI]
006A0A98  33 C0                     XOR EAX,EAX
006A0A9A  C7 41 04 FF 00 00 00      MOV dword ptr [ECX + 0x4],0xff
006A0AA1  8B 16                     MOV EDX,dword ptr [ESI]
006A0AA3  C7 42 08 02 00 00 00      MOV dword ptr [EDX + 0x8],0x2
006A0AAA  8B 0E                     MOV ECX,dword ptr [ESI]
006A0AAC  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
006A0AAF  8B 16                     MOV EDX,dword ptr [ESI]
006A0AB1  89 42 10                  MOV dword ptr [EDX + 0x10],EAX
006A0AB4  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
006A0AB7  5E                        POP ESI
006A0AB8  C3                        RET
