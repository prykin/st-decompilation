FUN_005a0a50:
005A0A50  56                        PUSH ESI
005A0A51  8B F1                     MOV ESI,ECX
005A0A53  57                        PUSH EDI
005A0A54  33 FF                     XOR EDI,EDI
005A0A56  8B 86 C4 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac4]
005A0A5C  3B C7                     CMP EAX,EDI
005A0A5E  74 09                     JZ 0x005a0a69
005A0A60  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005A0A63  50                        PUSH EAX
005A0A64  E8 47 4C 14 00            CALL 0x006e56b0
LAB_005a0a69:
005A0A69  8B 86 C8 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac8]
005A0A6F  89 BE C4 1A 00 00         MOV dword ptr [ESI + 0x1ac4],EDI
005A0A75  3B C7                     CMP EAX,EDI
005A0A77  74 09                     JZ 0x005a0a82
005A0A79  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005A0A7C  50                        PUSH EAX
005A0A7D  E8 2E 4C 14 00            CALL 0x006e56b0
LAB_005a0a82:
005A0A82  8B 86 B6 1E 00 00         MOV EAX,dword ptr [ESI + 0x1eb6]
005A0A88  89 BE C8 1A 00 00         MOV dword ptr [ESI + 0x1ac8],EDI
005A0A8E  3B C7                     CMP EAX,EDI
005A0A90  74 09                     JZ 0x005a0a9b
005A0A92  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005A0A95  50                        PUSH EAX
005A0A96  E8 15 4C 14 00            CALL 0x006e56b0
LAB_005a0a9b:
005A0A9B  8B 86 E8 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ae8]
005A0AA1  89 BE B6 1E 00 00         MOV dword ptr [ESI + 0x1eb6],EDI
005A0AA7  3B C7                     CMP EAX,EDI
005A0AA9  74 06                     JZ 0x005a0ab1
005A0AAB  50                        PUSH EAX
005A0AAC  E8 BF 4A 11 00            CALL 0x006b5570
LAB_005a0ab1:
005A0AB1  8B 86 EC 1A 00 00         MOV EAX,dword ptr [ESI + 0x1aec]
005A0AB7  89 BE E8 1A 00 00         MOV dword ptr [ESI + 0x1ae8],EDI
005A0ABD  3B C7                     CMP EAX,EDI
005A0ABF  74 06                     JZ 0x005a0ac7
005A0AC1  50                        PUSH EAX
005A0AC2  E8 A9 4A 11 00            CALL 0x006b5570
LAB_005a0ac7:
005A0AC7  89 BE EC 1A 00 00         MOV dword ptr [ESI + 0x1aec],EDI
005A0ACD  5F                        POP EDI
005A0ACE  5E                        POP ESI
005A0ACF  C3                        RET
