FUN_0069ffb0:
0069FFB0  56                        PUSH ESI
0069FFB1  8B F1                     MOV ESI,ECX
0069FFB3  57                        PUSH EDI
0069FFB4  8D 8E 4E 02 00 00         LEA ECX,[ESI + 0x24e]
0069FFBA  E8 EB 38 D6 FF            CALL 0x004038aa
0069FFBF  8D 8E EF 1B 00 00         LEA ECX,[ESI + 0x1bef]
0069FFC5  E8 0B 4F D6 FF            CALL 0x00404ed5
0069FFCA  8D 8E 03 1C 00 00         LEA ECX,[ESI + 0x1c03]
0069FFD0  E8 64 3B D6 FF            CALL 0x00403b39
0069FFD5  33 D2                     XOR EDX,EDX
0069FFD7  B9 41 00 00 00            MOV ECX,0x41
0069FFDC  33 C0                     XOR EAX,EAX
0069FFDE  8D BE F3 53 00 00         LEA EDI,[ESI + 0x53f3]
0069FFE4  89 96 EF 53 00 00         MOV dword ptr [ESI + 0x53ef],EDX
0069FFEA  89 96 EB 53 00 00         MOV dword ptr [ESI + 0x53eb],EDX
0069FFF0  F3 AB                     STOSD.REP ES:EDI
0069FFF2  B9 41 00 00 00            MOV ECX,0x41
0069FFF7  8D BE F7 54 00 00         LEA EDI,[ESI + 0x54f7]
0069FFFD  F3 AB                     STOSD.REP ES:EDI
0069FFFF  B9 0A 00 00 00            MOV ECX,0xa
006A0004  8D BE 2F 58 00 00         LEA EDI,[ESI + 0x582f]
006A000A  89 56 08                  MOV dword ptr [ESI + 0x8],EDX
006A000D  89 56 0C                  MOV dword ptr [ESI + 0xc],EDX
006A0010  F3 AB                     STOSD.REP ES:EDI
006A0012  B9 41 00 00 00            MOV ECX,0x41
006A0017  8D BE FB 55 00 00         LEA EDI,[ESI + 0x55fb]
006A001D  89 56 18                  MOV dword ptr [ESI + 0x18],EDX
006A0020  89 96 FF 56 00 00         MOV dword ptr [ESI + 0x56ff],EDX
006A0026  F3 AB                     STOSD.REP ES:EDI
006A0028  C7 86 0B 57 00 00 32 00 00 00  MOV dword ptr [ESI + 0x570b],0x32
006A0032  89 16                     MOV dword ptr [ESI],EDX
006A0034  89 56 10                  MOV dword ptr [ESI + 0x10],EDX
006A0037  89 56 14                  MOV dword ptr [ESI + 0x14],EDX
006A003A  8B C6                     MOV EAX,ESI
006A003C  5F                        POP EDI
006A003D  5E                        POP ESI
006A003E  C3                        RET
