FSGSTy::sub_005A0C80:
005A0C80  56                        PUSH ESI
005A0C81  8B F1                     MOV ESI,ECX
005A0C83  57                        PUSH EDI
005A0C84  33 FF                     XOR EDI,EDI
005A0C86  8B 86 C4 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac4]
005A0C8C  3B C7                     CMP EAX,EDI
005A0C8E  74 09                     JZ 0x005a0c99
005A0C90  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005A0C93  50                        PUSH EAX
005A0C94  E8 17 4A 14 00            CALL 0x006e56b0
LAB_005a0c99:
005A0C99  8B 86 B6 1E 00 00         MOV EAX,dword ptr [ESI + 0x1eb6]
005A0C9F  89 BE C4 1A 00 00         MOV dword ptr [ESI + 0x1ac4],EDI
005A0CA5  3B C7                     CMP EAX,EDI
005A0CA7  74 09                     JZ 0x005a0cb2
005A0CA9  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005A0CAC  50                        PUSH EAX
005A0CAD  E8 FE 49 14 00            CALL 0x006e56b0
LAB_005a0cb2:
005A0CB2  8B 86 BA 1E 00 00         MOV EAX,dword ptr [ESI + 0x1eba]
005A0CB8  89 BE B6 1E 00 00         MOV dword ptr [ESI + 0x1eb6],EDI
005A0CBE  3B C7                     CMP EAX,EDI
005A0CC0  74 09                     JZ 0x005a0ccb
005A0CC2  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005A0CC5  50                        PUSH EAX
005A0CC6  E8 E5 49 14 00            CALL 0x006e56b0
LAB_005a0ccb:
005A0CCB  8B 86 D3 1E 00 00         MOV EAX,dword ptr [ESI + 0x1ed3]
005A0CD1  89 BE BA 1E 00 00         MOV dword ptr [ESI + 0x1eba],EDI
005A0CD7  3B C7                     CMP EAX,EDI
005A0CD9  74 09                     JZ 0x005a0ce4
005A0CDB  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005A0CDE  50                        PUSH EAX
005A0CDF  E8 CC 49 14 00            CALL 0x006e56b0
LAB_005a0ce4:
005A0CE4  8B 86 D7 1E 00 00         MOV EAX,dword ptr [ESI + 0x1ed7]
005A0CEA  89 BE D3 1E 00 00         MOV dword ptr [ESI + 0x1ed3],EDI
005A0CF0  3B C7                     CMP EAX,EDI
005A0CF2  74 09                     JZ 0x005a0cfd
005A0CF4  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005A0CF7  50                        PUSH EAX
005A0CF8  E8 B3 49 14 00            CALL 0x006e56b0
LAB_005a0cfd:
005A0CFD  8B 86 24 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b24]
005A0D03  89 BE D7 1E 00 00         MOV dword ptr [ESI + 0x1ed7],EDI
005A0D09  3B C7                     CMP EAX,EDI
005A0D0B  74 09                     JZ 0x005a0d16
005A0D0D  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005A0D10  50                        PUSH EAX
005A0D11  E8 9A 49 14 00            CALL 0x006e56b0
LAB_005a0d16:
005A0D16  8B 86 E8 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ae8]
005A0D1C  89 BE 24 1B 00 00         MOV dword ptr [ESI + 0x1b24],EDI
005A0D22  3B C7                     CMP EAX,EDI
005A0D24  74 06                     JZ 0x005a0d2c
005A0D26  50                        PUSH EAX
005A0D27  E8 44 48 11 00            CALL 0x006b5570
LAB_005a0d2c:
005A0D2C  8B 8E DB 1E 00 00         MOV ECX,dword ptr [ESI + 0x1edb]
005A0D32  8D 86 DB 1E 00 00         LEA EAX,[ESI + 0x1edb]
005A0D38  3B CF                     CMP ECX,EDI
005A0D3A  89 BE E8 1A 00 00         MOV dword ptr [ESI + 0x1ae8],EDI
005A0D40  74 06                     JZ 0x005a0d48
005A0D42  50                        PUSH EAX
005A0D43  E8 18 A3 10 00            CALL 0x006ab060
LAB_005a0d48:
005A0D48  8B 8E 8E 1E 00 00         MOV ECX,dword ptr [ESI + 0x1e8e]
005A0D4E  8D 86 8E 1E 00 00         LEA EAX,[ESI + 0x1e8e]
005A0D54  3B CF                     CMP ECX,EDI
005A0D56  74 06                     JZ 0x005a0d5e
005A0D58  50                        PUSH EAX
005A0D59  E8 02 A3 10 00            CALL 0x006ab060
LAB_005a0d5e:
005A0D5E  8B 8E 92 1E 00 00         MOV ECX,dword ptr [ESI + 0x1e92]
005A0D64  8D 86 92 1E 00 00         LEA EAX,[ESI + 0x1e92]
005A0D6A  3B CF                     CMP ECX,EDI
005A0D6C  5F                        POP EDI
005A0D6D  5E                        POP ESI
005A0D6E  74 06                     JZ 0x005a0d76
005A0D70  50                        PUSH EAX
005A0D71  E8 EA A2 10 00            CALL 0x006ab060
LAB_005a0d76:
005A0D76  C3                        RET
