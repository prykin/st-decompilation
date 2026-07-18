FUN_004d0fc0:
004D0FC0  56                        PUSH ESI
004D0FC1  57                        PUSH EDI
004D0FC2  8B F1                     MOV ESI,ECX
004D0FC4  E8 6A 09 F3 FF            CALL 0x00401933
004D0FC9  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
004D0FCF  8B CF                     MOV ECX,EDI
004D0FD1  E8 40 03 F3 FF            CALL 0x00401316
004D0FD6  33 D2                     XOR EDX,EDX
004D0FD8  8D 8E 50 03 00 00         LEA ECX,[ESI + 0x350]
004D0FDE  33 C0                     XOR EAX,EAX
004D0FE0  C7 06 70 8C 79 00         MOV dword ptr [ESI],0x798c70
004D0FE6  C7 07 6C 8C 79 00         MOV dword ptr [EDI],0x798c6c
004D0FEC  89 96 A8 02 00 00         MOV dword ptr [ESI + 0x2a8],EDX
004D0FF2  89 96 DC 02 00 00         MOV dword ptr [ESI + 0x2dc],EDX
004D0FF8  89 01                     MOV dword ptr [ECX],EAX
004D0FFA  8D BE 08 03 00 00         LEA EDI,[ESI + 0x308]
004D1000  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
004D1003  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
004D1006  B9 0C 00 00 00            MOV ECX,0xc
004D100B  F3 AB                     STOSD.REP ES:EDI
004D100D  B8 01 00 00 00            MOV EAX,0x1
004D1012  89 96 5C 03 00 00         MOV dword ptr [ESI + 0x35c],EDX
004D1018  89 86 C8 02 00 00         MOV dword ptr [ESI + 0x2c8],EAX
004D101E  89 86 C4 02 00 00         MOV dword ptr [ESI + 0x2c4],EAX
004D1024  89 86 C0 02 00 00         MOV dword ptr [ESI + 0x2c0],EAX
004D102A  89 86 BC 02 00 00         MOV dword ptr [ESI + 0x2bc],EAX
004D1030  89 86 B8 02 00 00         MOV dword ptr [ESI + 0x2b8],EAX
004D1036  89 86 B4 02 00 00         MOV dword ptr [ESI + 0x2b4],EAX
004D103C  89 96 E0 02 00 00         MOV dword ptr [ESI + 0x2e0],EDX
004D1042  89 96 A0 02 00 00         MOV dword ptr [ESI + 0x2a0],EDX
004D1048  89 96 E4 02 00 00         MOV dword ptr [ESI + 0x2e4],EDX
004D104E  89 96 E8 02 00 00         MOV dword ptr [ESI + 0x2e8],EDX
004D1054  C7 86 4C 03 00 00 FF 00 00 00  MOV dword ptr [ESI + 0x34c],0xff
004D105E  89 96 A4 02 00 00         MOV dword ptr [ESI + 0x2a4],EDX
004D1064  8B C6                     MOV EAX,ESI
004D1066  5F                        POP EDI
004D1067  5E                        POP ESI
004D1068  C3                        RET
