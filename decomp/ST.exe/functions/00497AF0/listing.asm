STGroupBoatC::STGroupBoatC:
00497AF0  56                        PUSH ESI
00497AF1  57                        PUSH EDI
00497AF2  8B F1                     MOV ESI,ECX
00497AF4  E8 BE D8 F6 FF            CALL 0x004053b7
00497AF9  33 D2                     XOR EDX,EDX
00497AFB  B9 61 00 00 00            MOV ECX,0x61
00497B00  33 C0                     XOR EAX,EAX
00497B02  8D 7E 5D                  LEA EDI,[ESI + 0x5d]
00497B05  C7 06 28 07 79 00         MOV dword ptr [ESI],0x790728
00497B0B  89 56 45                  MOV dword ptr [ESI + 0x45],EDX
00497B0E  89 56 41                  MOV dword ptr [ESI + 0x41],EDX
00497B11  89 56 3D                  MOV dword ptr [ESI + 0x3d],EDX
00497B14  89 56 55                  MOV dword ptr [ESI + 0x55],EDX
00497B17  89 56 51                  MOV dword ptr [ESI + 0x51],EDX
00497B1A  89 56 4D                  MOV dword ptr [ESI + 0x4d],EDX
00497B1D  89 56 49                  MOV dword ptr [ESI + 0x49],EDX
00497B20  89 56 59                  MOV dword ptr [ESI + 0x59],EDX
00497B23  F3 AB                     STOSD.REP ES:EDI
00497B25  AA                        STOSB ES:EDI
00497B26  B9 0A 00 00 00            MOV ECX,0xa
00497B2B  33 C0                     XOR EAX,EAX
00497B2D  8D BE E2 01 00 00         LEA EDI,[ESI + 0x1e2]
00497B33  F3 AB                     STOSD.REP ES:EDI
00497B35  B9 06 00 00 00            MOV ECX,0x6
00497B3A  8D BE 0A 02 00 00         LEA EDI,[ESI + 0x20a]
00497B40  F3 AB                     STOSD.REP ES:EDI
00497B42  B9 09 00 00 00            MOV ECX,0x9
00497B47  8D BE 26 02 00 00         LEA EDI,[ESI + 0x226]
00497B4D  F3 AB                     STOSD.REP ES:EDI
00497B4F  B9 0B 00 00 00            MOV ECX,0xb
00497B54  8D BE 4A 02 00 00         LEA EDI,[ESI + 0x24a]
00497B5A  C7 86 32 02 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x232],0xffffffff
00497B64  C7 86 36 02 00 00 01 00 00 00  MOV dword ptr [ESI + 0x236],0x1
00497B6E  F3 AB                     STOSD.REP ES:EDI
00497B70  B9 07 00 00 00            MOV ECX,0x7
00497B75  8D BE 76 02 00 00         LEA EDI,[ESI + 0x276]
00497B7B  F3 AB                     STOSD.REP ES:EDI
00497B7D  66 AB                     STOSW ES:EDI
00497B7F  AA                        STOSB ES:EDI
00497B80  8D 8E 95 02 00 00         LEA ECX,[ESI + 0x295]
00497B86  33 C0                     XOR EAX,EAX
00497B88  89 01                     MOV dword ptr [ECX],EAX
00497B8A  66 89 41 04               MOV word ptr [ECX + 0x4],AX
00497B8E  8D 8E 9B 02 00 00         LEA ECX,[ESI + 0x29b]
00497B94  89 86 9B 02 00 00         MOV dword ptr [ESI + 0x29b],EAX
00497B9A  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
00497B9D  8D 8E A3 02 00 00         LEA ECX,[ESI + 0x2a3]
00497BA3  89 86 A3 02 00 00         MOV dword ptr [ESI + 0x2a3],EAX
00497BA9  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
00497BAC  66 89 41 08               MOV word ptr [ECX + 0x8],AX
00497BB0  8D 8E B3 02 00 00         LEA ECX,[ESI + 0x2b3]
00497BB6  89 86 B3 02 00 00         MOV dword ptr [ESI + 0x2b3],EAX
00497BBC  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
00497BBF  66 89 41 08               MOV word ptr [ECX + 0x8],AX
00497BC3  8D 8E BD 02 00 00         LEA ECX,[ESI + 0x2bd]
00497BC9  89 86 BD 02 00 00         MOV dword ptr [ESI + 0x2bd],EAX
00497BCF  66 89 41 04               MOV word ptr [ECX + 0x4],AX
00497BD3  8D 8E C3 02 00 00         LEA ECX,[ESI + 0x2c3]
00497BD9  89 86 C3 02 00 00         MOV dword ptr [ESI + 0x2c3],EAX
00497BDF  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
00497BE2  66 89 41 08               MOV word ptr [ECX + 0x8],AX
00497BE6  88 41 0A                  MOV byte ptr [ECX + 0xa],AL
00497BE9  8D 8E CE 02 00 00         LEA ECX,[ESI + 0x2ce]
00497BEF  89 86 CE 02 00 00         MOV dword ptr [ESI + 0x2ce],EAX
00497BF5  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
00497BF8  66 89 41 08               MOV word ptr [ECX + 0x8],AX
00497BFC  8D 8E D8 02 00 00         LEA ECX,[ESI + 0x2d8]
00497C02  89 86 D8 02 00 00         MOV dword ptr [ESI + 0x2d8],EAX
00497C08  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
00497C0B  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
00497C0E  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
00497C11  8D 8E E8 02 00 00         LEA ECX,[ESI + 0x2e8]
00497C17  89 86 E8 02 00 00         MOV dword ptr [ESI + 0x2e8],EAX
00497C1D  66 89 41 04               MOV word ptr [ECX + 0x4],AX
00497C21  8D 8E EE 02 00 00         LEA ECX,[ESI + 0x2ee]
00497C27  89 86 EE 02 00 00         MOV dword ptr [ESI + 0x2ee],EAX
00497C2D  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
00497C30  66 89 41 08               MOV word ptr [ECX + 0x8],AX
00497C34  8D 8E F8 02 00 00         LEA ECX,[ESI + 0x2f8]
00497C3A  89 86 F8 02 00 00         MOV dword ptr [ESI + 0x2f8],EAX
00497C40  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
00497C43  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
00497C46  8D 8E 04 03 00 00         LEA ECX,[ESI + 0x304]
00497C4C  5F                        POP EDI
00497C4D  89 01                     MOV dword ptr [ECX],EAX
00497C4F  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
00497C52  66 89 41 08               MOV word ptr [ECX + 0x8],AX
00497C56  89 96 0E 03 00 00         MOV dword ptr [ESI + 0x30e],EDX
00497C5C  C7 86 E6 01 00 00 03 00 00 00  MOV dword ptr [ESI + 0x1e6],0x3
00497C66  89 56 39                  MOV dword ptr [ESI + 0x39],EDX
00497C69  8B C6                     MOV EAX,ESI
00497C6B  5E                        POP ESI
00497C6C  C3                        RET
