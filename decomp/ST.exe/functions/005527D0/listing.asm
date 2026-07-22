CreateUpgPanel:
005527D0  53                        PUSH EBX
005527D1  56                        PUSH ESI
005527D2  68 F7 03 00 00            PUSH 0x3f7
005527D7  E8 F4 DC 15 00            CALL 0x006b04d0
005527DC  8B F0                     MOV ESI,EAX
005527DE  33 DB                     XOR EBX,EBX
005527E0  3B F3                     CMP ESI,EBX
005527E2  0F 84 92 00 00 00         JZ 0x0055287a
005527E8  57                        PUSH EDI
005527E9  8B CE                     MOV ECX,ESI
005527EB  E8 C0 37 19 00            CALL 0x006e5fb0
005527F0  B9 90 00 00 00            MOV ECX,0x90
005527F5  33 C0                     XOR EAX,EAX
005527F7  8D BE AB 01 00 00         LEA EDI,[ESI + 0x1ab]
005527FD  89 5E 5C                  MOV dword ptr [ESI + 0x5c],EBX
00552800  C7 46 60 FF FF FF FF      MOV dword ptr [ESI + 0x60],0xffffffff
00552807  C7 46 64 04 00 00 00      MOV dword ptr [ESI + 0x64],0x4
0055280E  89 5E 68                  MOV dword ptr [ESI + 0x68],EBX
00552811  66 C7 86 72 01 00 00 02 00  MOV word ptr [ESI + 0x172],0x2
0055281A  89 9E 78 01 00 00         MOV dword ptr [ESI + 0x178],EBX
00552820  89 9E 7C 01 00 00         MOV dword ptr [ESI + 0x17c],EBX
00552826  89 9E 85 01 00 00         MOV dword ptr [ESI + 0x185],EBX
0055282C  89 9E 89 01 00 00         MOV dword ptr [ESI + 0x189],EBX
00552832  C7 06 90 AE 79 00         MOV dword ptr [ESI],0x79ae90
00552838  C7 46 3C 0C 00 00 00      MOV dword ptr [ESI + 0x3c],0xc
0055283F  89 5E 44                  MOV dword ptr [ESI + 0x44],EBX
00552842  C7 46 40 28 01 00 00      MOV dword ptr [ESI + 0x40],0x128
00552849  C7 46 48 8C 00 00 00      MOV dword ptr [ESI + 0x48],0x8c
00552850  C7 86 80 01 00 00 01 00 00 00  MOV dword ptr [ESI + 0x180],0x1
0055285A  88 9E 84 01 00 00         MOV byte ptr [ESI + 0x184],BL
00552860  F3 AB                     STOSD.REP ES:EDI
00552862  89 9E F3 03 00 00         MOV dword ptr [ESI + 0x3f3],EBX
00552868  89 9E EF 03 00 00         MOV dword ptr [ESI + 0x3ef],EBX
0055286E  89 9E EB 03 00 00         MOV dword ptr [ESI + 0x3eb],EBX
00552874  8B C6                     MOV EAX,ESI
00552876  5F                        POP EDI
00552877  5E                        POP ESI
00552878  5B                        POP EBX
00552879  C3                        RET
LAB_0055287a:
0055287A  5E                        POP ESI
0055287B  33 C0                     XOR EAX,EAX
0055287D  5B                        POP EBX
0055287E  C3                        RET
