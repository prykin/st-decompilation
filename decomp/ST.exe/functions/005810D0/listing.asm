STJellyManC::STJellyManC:
005810D0  56                        PUSH ESI
005810D1  57                        PUSH EDI
005810D2  8B F1                     MOV ESI,ECX
005810D4  E8 5A 08 E8 FF            CALL 0x00401933
005810D9  B9 0B 00 00 00            MOV ECX,0xb
005810DE  33 C0                     XOR EAX,EAX
005810E0  8D BE D9 01 00 00         LEA EDI,[ESI + 0x1d9]
005810E6  C7 06 8C B6 79 00         MOV dword ptr [ESI],0x79b68c
005810EC  F3 AB                     STOSD.REP ES:EDI
005810EE  66 AB                     STOSW ES:EDI
005810F0  33 C0                     XOR EAX,EAX
005810F2  5F                        POP EDI
005810F3  89 86 D5 01 00 00         MOV dword ptr [ESI + 0x1d5],EAX
005810F9  89 86 07 02 00 00         MOV dword ptr [ESI + 0x207],EAX
005810FF  89 86 0B 02 00 00         MOV dword ptr [ESI + 0x20b],EAX
00581105  89 86 0F 02 00 00         MOV dword ptr [ESI + 0x20f],EAX
0058110B  8B C6                     MOV EAX,ESI
0058110D  5E                        POP ESI
0058110E  C3                        RET
