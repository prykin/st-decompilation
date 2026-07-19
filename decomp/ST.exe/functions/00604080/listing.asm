STExplosion::STExplosion:
00604080  56                        PUSH ESI
00604081  57                        PUSH EDI
00604082  8B F1                     MOV ESI,ECX
00604084  E8 AA D8 DF FF            CALL 0x00401933
00604089  33 D2                     XOR EDX,EDX
0060408B  B9 14 00 00 00            MOV ECX,0x14
00604090  33 C0                     XOR EAX,EAX
00604092  8D BE 19 02 00 00         LEA EDI,[ESI + 0x219]
00604098  C7 06 14 CB 79 00         MOV dword ptr [ESI],0x79cb14
0060409E  89 96 15 02 00 00         MOV dword ptr [ESI + 0x215],EDX
006040A4  F3 AB                     STOSD.REP ES:EDI
006040A6  89 96 69 02 00 00         MOV dword ptr [ESI + 0x269],EDX
006040AC  88 96 6D 02 00 00         MOV byte ptr [ESI + 0x26d],DL
006040B2  A1 38 2A 80 00            MOV EAX,[0x00802a38]
006040B7  8D BE 82 02 00 00         LEA EDI,[ESI + 0x282]
006040BD  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
006040C3  33 C0                     XOR EAX,EAX
006040C5  89 8E 6E 02 00 00         MOV dword ptr [ESI + 0x26e],ECX
006040CB  B9 0B 00 00 00            MOV ECX,0xb
006040D0  F3 AB                     STOSD.REP ES:EDI
006040D2  AA                        STOSB ES:EDI
006040D3  89 96 AF 02 00 00         MOV dword ptr [ESI + 0x2af],EDX
006040D9  89 96 B3 02 00 00         MOV dword ptr [ESI + 0x2b3],EDX
006040DF  89 96 BB 02 00 00         MOV dword ptr [ESI + 0x2bb],EDX
006040E5  C7 86 B7 02 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x2b7],0xffffffff
006040EF  8B C6                     MOV EAX,ESI
006040F1  5F                        POP EDI
006040F2  5E                        POP ESI
006040F3  C3                        RET
