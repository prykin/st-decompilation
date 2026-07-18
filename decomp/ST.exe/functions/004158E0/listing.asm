FUN_004158e0:
004158E0  53                        PUSH EBX
004158E1  56                        PUSH ESI
004158E2  57                        PUSH EDI
004158E3  8B F1                     MOV ESI,ECX
004158E5  E8 F6 07 2D 00            CALL 0x006e60e0
004158EA  33 D2                     XOR EDX,EDX
004158EC  C7 06 A0 00 79 00         MOV dword ptr [ESI],0x7900a0
004158F2  89 56 20                  MOV dword ptr [ESI + 0x20],EDX
004158F5  C7 46 24 FF 00 00 00      MOV dword ptr [ESI + 0x24],0xff
004158FC  C7 46 28 01 00 00 00      MOV dword ptr [ESI + 0x28],0x1
00415903  B8 FF FF 00 00            MOV EAX,0xffff
00415908  89 56 2C                  MOV dword ptr [ESI + 0x2c],EDX
0041590B  66 89 46 30               MOV word ptr [ESI + 0x30],AX
0041590F  66 89 46 32               MOV word ptr [ESI + 0x32],AX
00415913  B9 17 00 00 00            MOV ECX,0x17
00415918  33 C0                     XOR EAX,EAX
0041591A  8D 7E 34                  LEA EDI,[ESI + 0x34]
0041591D  F3 AB                     STOSD.REP ES:EDI
0041591F  66 AB                     STOSW ES:EDI
00415921  83 CB FF                  OR EBX,0xffffffff
00415924  B9 1B 00 00 00            MOV ECX,0x1b
00415929  AA                        STOSB ES:EDI
0041592A  66 89 5E 5F               MOV word ptr [ESI + 0x5f],BX
0041592E  66 89 5E 5D               MOV word ptr [ESI + 0x5d],BX
00415932  66 89 5E 5B               MOV word ptr [ESI + 0x5b],BX
00415936  66 C7 46 6E 2F 00         MOV word ptr [ESI + 0x6e],0x2f
0041593C  C6 46 62 01               MOV byte ptr [ESI + 0x62],0x1
00415940  33 C0                     XOR EAX,EAX
00415942  8D BE 93 00 00 00         LEA EDI,[ESI + 0x93]
00415948  C6 46 61 01               MOV byte ptr [ESI + 0x61],0x1
0041594C  F3 AB                     STOSD.REP ES:EDI
0041594E  66 AB                     STOSW ES:EDI
00415950  8D 8E 2D 01 00 00         LEA ECX,[ESI + 0x12d]
00415956  C7 86 FD 00 00 00 01 00 00 00  MOV dword ptr [ESI + 0xfd],0x1
00415960  33 C0                     XOR EAX,EAX
00415962  89 9E CF 00 00 00         MOV dword ptr [ESI + 0xcf],EBX
00415968  89 9E CB 00 00 00         MOV dword ptr [ESI + 0xcb],EBX
0041596E  89 9E C7 00 00 00         MOV dword ptr [ESI + 0xc7],EBX
00415974  89 9E 11 01 00 00         MOV dword ptr [ESI + 0x111],EBX
0041597A  89 9E 0D 01 00 00         MOV dword ptr [ESI + 0x10d],EBX
00415980  89 9E 09 01 00 00         MOV dword ptr [ESI + 0x109],EBX
00415986  89 9E 05 01 00 00         MOV dword ptr [ESI + 0x105],EBX
0041598C  89 9E 01 01 00 00         MOV dword ptr [ESI + 0x101],EBX
00415992  89 96 21 01 00 00         MOV dword ptr [ESI + 0x121],EDX
00415998  89 96 1D 01 00 00         MOV dword ptr [ESI + 0x11d],EDX
0041599E  89 96 29 01 00 00         MOV dword ptr [ESI + 0x129],EDX
004159A4  89 96 25 01 00 00         MOV dword ptr [ESI + 0x125],EDX
004159AA  89 01                     MOV dword ptr [ECX],EAX
004159AC  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
004159AF  8D 8E 35 01 00 00         LEA ECX,[ESI + 0x135]
004159B5  89 86 35 01 00 00         MOV dword ptr [ESI + 0x135],EAX
004159BB  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
004159BE  8D 8E 3D 01 00 00         LEA ECX,[ESI + 0x13d]
004159C4  89 86 3D 01 00 00         MOV dword ptr [ESI + 0x13d],EAX
004159CA  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
004159CD  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
004159D0  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
004159D3  8D 8E 4D 01 00 00         LEA ECX,[ESI + 0x14d]
004159D9  89 86 4D 01 00 00         MOV dword ptr [ESI + 0x14d],EAX
004159DF  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
004159E2  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
004159E5  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
004159E8  8D 8E 5D 01 00 00         LEA ECX,[ESI + 0x15d]
004159EE  89 86 5D 01 00 00         MOV dword ptr [ESI + 0x15d],EAX
004159F4  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
004159F7  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
004159FA  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
004159FD  89 41 10                  MOV dword ptr [ECX + 0x10],EAX
00415A00  8D 8E 71 01 00 00         LEA ECX,[ESI + 0x171]
00415A06  89 86 71 01 00 00         MOV dword ptr [ESI + 0x171],EAX
00415A0C  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
00415A0F  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
00415A12  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
00415A15  89 41 10                  MOV dword ptr [ECX + 0x10],EAX
00415A18  89 96 89 01 00 00         MOV dword ptr [ESI + 0x189],EDX
00415A1E  89 96 85 01 00 00         MOV dword ptr [ESI + 0x185],EDX
00415A24  89 96 91 01 00 00         MOV dword ptr [ESI + 0x191],EDX
00415A2A  89 96 8D 01 00 00         MOV dword ptr [ESI + 0x18d],EDX
00415A30  89 96 99 01 00 00         MOV dword ptr [ESI + 0x199],EDX
00415A36  89 96 95 01 00 00         MOV dword ptr [ESI + 0x195],EDX
00415A3C  89 96 A1 01 00 00         MOV dword ptr [ESI + 0x1a1],EDX
00415A42  89 96 9D 01 00 00         MOV dword ptr [ESI + 0x19d],EDX
00415A48  89 96 A9 01 00 00         MOV dword ptr [ESI + 0x1a9],EDX
00415A4E  89 96 A5 01 00 00         MOV dword ptr [ESI + 0x1a5],EDX
00415A54  89 96 B1 01 00 00         MOV dword ptr [ESI + 0x1b1],EDX
00415A5A  89 96 AD 01 00 00         MOV dword ptr [ESI + 0x1ad],EDX
00415A60  89 96 B9 01 00 00         MOV dword ptr [ESI + 0x1b9],EDX
00415A66  89 96 B5 01 00 00         MOV dword ptr [ESI + 0x1b5],EDX
00415A6C  89 96 C1 01 00 00         MOV dword ptr [ESI + 0x1c1],EDX
00415A72  89 96 BD 01 00 00         MOV dword ptr [ESI + 0x1bd],EDX
00415A78  89 96 C9 01 00 00         MOV dword ptr [ESI + 0x1c9],EDX
00415A7E  89 96 C5 01 00 00         MOV dword ptr [ESI + 0x1c5],EDX
00415A84  89 96 CD 01 00 00         MOV dword ptr [ESI + 0x1cd],EDX
00415A8A  89 96 D1 01 00 00         MOV dword ptr [ESI + 0x1d1],EDX
00415A90  8B C6                     MOV EAX,ESI
00415A92  5F                        POP EDI
00415A93  5E                        POP ESI
00415A94  5B                        POP EBX
00415A95  C3                        RET
