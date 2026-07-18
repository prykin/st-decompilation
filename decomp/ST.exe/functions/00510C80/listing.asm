FUN_00510c80:
00510C80  56                        PUSH ESI
00510C81  57                        PUSH EDI
00510C82  8B F1                     MOV ESI,ECX
00510C84  E8 27 53 1D 00            CALL 0x006e5fb0
00510C89  33 D2                     XOR EDX,EDX
00510C8B  B9 0A 00 00 00            MOV ECX,0xa
00510C90  89 56 5C                  MOV dword ptr [ESI + 0x5c],EDX
00510C93  89 56 44                  MOV dword ptr [ESI + 0x44],EDX
00510C96  89 56 3C                  MOV dword ptr [ESI + 0x3c],EDX
00510C99  C7 46 60 FF FF FF FF      MOV dword ptr [ESI + 0x60],0xffffffff
00510CA0  C7 46 64 03 00 00 00      MOV dword ptr [ESI + 0x64],0x3
00510CA7  89 56 68                  MOV dword ptr [ESI + 0x68],EDX
00510CAA  66 C7 86 72 01 00 00 02 00  MOV word ptr [ESI + 0x172],0x2
00510CB3  89 96 78 01 00 00         MOV dword ptr [ESI + 0x178],EDX
00510CB9  C7 06 48 AC 79 00         MOV dword ptr [ESI],0x79ac48
00510CBF  C7 46 40 F4 01 00 00      MOV dword ptr [ESI + 0x40],0x1f4
00510CC6  C7 46 48 90 01 00 00      MOV dword ptr [ESI + 0x48],0x190
00510CCD  88 96 A0 01 00 00         MOV byte ptr [ESI + 0x1a0],DL
00510CD3  88 96 A2 01 00 00         MOV byte ptr [ESI + 0x1a2],DL
00510CD9  88 96 A1 01 00 00         MOV byte ptr [ESI + 0x1a1],DL
00510CDF  89 96 A7 01 00 00         MOV dword ptr [ESI + 0x1a7],EDX
00510CE5  33 C0                     XOR EAX,EAX
00510CE7  8D BE F0 01 00 00         LEA EDI,[ESI + 0x1f0]
00510CED  89 96 A3 01 00 00         MOV dword ptr [ESI + 0x1a3],EDX
00510CF3  89 96 DC 01 00 00         MOV dword ptr [ESI + 0x1dc],EDX
00510CF9  89 96 E8 01 00 00         MOV dword ptr [ESI + 0x1e8],EDX
00510CFF  89 96 E4 01 00 00         MOV dword ptr [ESI + 0x1e4],EDX
00510D05  89 96 E0 01 00 00         MOV dword ptr [ESI + 0x1e0],EDX
00510D0B  89 96 18 02 00 00         MOV dword ptr [ESI + 0x218],EDX
00510D11  89 96 EC 01 00 00         MOV dword ptr [ESI + 0x1ec],EDX
00510D17  F3 AB                     STOSD.REP ES:EDI
00510D19  B9 07 00 00 00            MOV ECX,0x7
00510D1E  8D BE 80 01 00 00         LEA EDI,[ESI + 0x180]
00510D24  89 96 7C 01 00 00         MOV dword ptr [ESI + 0x17c],EDX
00510D2A  F3 AB                     STOSD.REP ES:EDI
00510D2C  89 96 9C 01 00 00         MOV dword ptr [ESI + 0x19c],EDX
00510D32  89 96 CB 01 00 00         MOV dword ptr [ESI + 0x1cb],EDX
00510D38  89 96 BB 01 00 00         MOV dword ptr [ESI + 0x1bb],EDX
00510D3E  89 96 B3 01 00 00         MOV dword ptr [ESI + 0x1b3],EDX
00510D44  A1 1C C1 85 00            MOV EAX,[0x0085c11c]
00510D49  5F                        POP EDI
00510D4A  8B 08                     MOV ECX,dword ptr [EAX]
00510D4C  C7 86 CF 01 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x1cf],0xffffffff
00510D56  89 8E C7 01 00 00         MOV dword ptr [ESI + 0x1c7],ECX
00510D5C  89 96 BF 01 00 00         MOV dword ptr [ESI + 0x1bf],EDX
00510D62  89 96 B7 01 00 00         MOV dword ptr [ESI + 0x1b7],EDX
00510D68  89 96 D7 01 00 00         MOV dword ptr [ESI + 0x1d7],EDX
00510D6E  88 96 DB 01 00 00         MOV byte ptr [ESI + 0x1db],DL
00510D74  89 96 4C 02 00 00         MOV dword ptr [ESI + 0x24c],EDX
00510D7A  89 96 1C 02 00 00         MOV dword ptr [ESI + 0x21c],EDX
00510D80  89 96 38 02 00 00         MOV dword ptr [ESI + 0x238],EDX
00510D86  89 96 48 02 00 00         MOV dword ptr [ESI + 0x248],EDX
00510D8C  89 96 2C 02 00 00         MOV dword ptr [ESI + 0x22c],EDX
00510D92  89 96 28 02 00 00         MOV dword ptr [ESI + 0x228],EDX
00510D98  89 96 34 02 00 00         MOV dword ptr [ESI + 0x234],EDX
00510D9E  89 96 30 02 00 00         MOV dword ptr [ESI + 0x230],EDX
00510DA4  89 96 20 02 00 00         MOV dword ptr [ESI + 0x220],EDX
00510DAA  89 96 24 02 00 00         MOV dword ptr [ESI + 0x224],EDX
00510DB0  89 96 44 02 00 00         MOV dword ptr [ESI + 0x244],EDX
00510DB6  89 96 40 02 00 00         MOV dword ptr [ESI + 0x240],EDX
00510DBC  89 96 3C 02 00 00         MOV dword ptr [ESI + 0x23c],EDX
00510DC2  89 96 D3 01 00 00         MOV dword ptr [ESI + 0x1d3],EDX
00510DC8  8B C6                     MOV EAX,ESI
00510DCA  5E                        POP ESI
00510DCB  C3                        RET
