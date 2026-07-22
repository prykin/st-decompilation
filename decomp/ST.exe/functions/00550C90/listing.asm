FUN_00550c90:
00550C90  53                        PUSH EBX
00550C91  56                        PUSH ESI
00550C92  68 E1 01 00 00            PUSH 0x1e1
00550C97  E8 34 F8 15 00            CALL 0x006b04d0
00550C9C  8B F0                     MOV ESI,EAX
00550C9E  33 DB                     XOR EBX,EBX
00550CA0  3B F3                     CMP ESI,EBX
00550CA2  0F 84 BD 00 00 00         JZ 0x00550d65
00550CA8  8B CE                     MOV ECX,ESI
00550CAA  E8 01 53 19 00            CALL 0x006e5fb0
00550CAF  B8 64 00 00 00            MOV EAX,0x64
00550CB4  B9 02 00 00 00            MOV ECX,0x2
00550CB9  66 89 86 BE 01 00 00      MOV word ptr [ESI + 0x1be],AX
00550CC0  66 89 86 BC 01 00 00      MOV word ptr [ESI + 0x1bc],AX
00550CC7  89 5E 5C                  MOV dword ptr [ESI + 0x5c],EBX
00550CCA  C7 46 60 FF FF FF FF      MOV dword ptr [ESI + 0x60],0xffffffff
00550CD1  C7 46 64 04 00 00 00      MOV dword ptr [ESI + 0x64],0x4
00550CD8  89 5E 68                  MOV dword ptr [ESI + 0x68],EBX
00550CDB  66 89 8E 72 01 00 00      MOV word ptr [ESI + 0x172],CX
00550CE2  89 9E 78 01 00 00         MOV dword ptr [ESI + 0x178],EBX
00550CE8  89 9E 7C 01 00 00         MOV dword ptr [ESI + 0x17c],EBX
00550CEE  89 9E 85 01 00 00         MOV dword ptr [ESI + 0x185],EBX
00550CF4  89 9E 89 01 00 00         MOV dword ptr [ESI + 0x189],EBX
00550CFA  C7 06 64 AE 79 00         MOV dword ptr [ESI],0x79ae64
00550D00  C7 46 3C C7 01 00 00      MOV dword ptr [ESI + 0x3c],0x1c7
00550D07  89 5E 44                  MOV dword ptr [ESI + 0x44],EBX
00550D0A  C7 46 40 3D 01 00 00      MOV dword ptr [ESI + 0x40],0x13d
00550D11  C7 46 48 8C 00 00 00      MOV dword ptr [ESI + 0x48],0x8c
00550D18  89 9E 80 01 00 00         MOV dword ptr [ESI + 0x180],EBX
00550D1E  88 9E 84 01 00 00         MOV byte ptr [ESI + 0x184],BL
00550D24  88 8E BB 01 00 00         MOV byte ptr [ESI + 0x1bb],CL
00550D2A  89 9E CC 01 00 00         MOV dword ptr [ESI + 0x1cc],EBX
00550D30  89 9E C8 01 00 00         MOV dword ptr [ESI + 0x1c8],EBX
00550D36  89 9E C4 01 00 00         MOV dword ptr [ESI + 0x1c4],EBX
00550D3C  89 9E C0 01 00 00         MOV dword ptr [ESI + 0x1c0],EBX
00550D42  88 9E D0 01 00 00         MOV byte ptr [ESI + 0x1d0],BL
00550D48  89 9E D9 01 00 00         MOV dword ptr [ESI + 0x1d9],EBX
00550D4E  89 9E D5 01 00 00         MOV dword ptr [ESI + 0x1d5],EBX
00550D54  89 9E D1 01 00 00         MOV dword ptr [ESI + 0x1d1],EBX
00550D5A  89 9E DD 01 00 00         MOV dword ptr [ESI + 0x1dd],EBX
00550D60  8B C6                     MOV EAX,ESI
00550D62  5E                        POP ESI
00550D63  5B                        POP EBX
00550D64  C3                        RET
LAB_00550d65:
00550D65  5E                        POP ESI
00550D66  33 C0                     XOR EAX,EAX
00550D68  5B                        POP EBX
00550D69  C3                        RET
