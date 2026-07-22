CreateResearchPanel:
0053BFF0  53                        PUSH EBX
0053BFF1  56                        PUSH ESI
0053BFF2  68 86 02 00 00            PUSH 0x286
0053BFF7  E8 D4 44 17 00            CALL 0x006b04d0
0053BFFC  8B F0                     MOV ESI,EAX
0053BFFE  33 DB                     XOR EBX,EBX
0053C000  3B F3                     CMP ESI,EBX
0053C002  0F 84 CA 00 00 00         JZ 0x0053c0d2
0053C008  57                        PUSH EDI
0053C009  8B CE                     MOV ECX,ESI
0053C00B  E8 A0 9F 1A 00            CALL 0x006e5fb0
0053C010  8D 8E A1 01 00 00         LEA ECX,[ESI + 0x1a1]
0053C016  33 C0                     XOR EAX,EAX
0053C018  89 5E 5C                  MOV dword ptr [ESI + 0x5c],EBX
0053C01B  C7 46 60 FF FF FF FF      MOV dword ptr [ESI + 0x60],0xffffffff
0053C022  C7 46 64 04 00 00 00      MOV dword ptr [ESI + 0x64],0x4
0053C029  89 5E 68                  MOV dword ptr [ESI + 0x68],EBX
0053C02C  66 C7 86 72 01 00 00 02 00  MOV word ptr [ESI + 0x172],0x2
0053C035  89 9E 78 01 00 00         MOV dword ptr [ESI + 0x178],EBX
0053C03B  89 9E 7C 01 00 00         MOV dword ptr [ESI + 0x17c],EBX
0053C041  89 9E 84 01 00 00         MOV dword ptr [ESI + 0x184],EBX
0053C047  89 9E 90 01 00 00         MOV dword ptr [ESI + 0x190],EBX
0053C04D  89 9E 88 01 00 00         MOV dword ptr [ESI + 0x188],EBX
0053C053  89 9E 9D 01 00 00         MOV dword ptr [ESI + 0x19d],EBX
0053C059  89 9E 80 01 00 00         MOV dword ptr [ESI + 0x180],EBX
0053C05F  89 01                     MOV dword ptr [ECX],EAX
0053C061  8D BE B5 01 00 00         LEA EDI,[ESI + 0x1b5]
0053C067  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
0053C06A  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
0053C06D  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
0053C070  89 41 10                  MOV dword ptr [ECX + 0x10],EAX
0053C073  B9 30 00 00 00            MOV ECX,0x30
0053C078  F3 AB                     STOSD.REP ES:EDI
0053C07A  66 AB                     STOSW ES:EDI
0053C07C  AA                        STOSB ES:EDI
0053C07D  89 9E 99 01 00 00         MOV dword ptr [ESI + 0x199],EBX
0053C083  C6 86 79 02 00 00 01      MOV byte ptr [ESI + 0x279],0x1
0053C08A  88 9E 78 02 00 00         MOV byte ptr [ESI + 0x278],BL
0053C090  C7 06 64 AD 79 00         MOV dword ptr [ESI],0x79ad64
0053C096  C7 46 3C C7 01 00 00      MOV dword ptr [ESI + 0x3c],0x1c7
0053C09D  89 5E 44                  MOV dword ptr [ESI + 0x44],EBX
0053C0A0  C7 46 40 3D 01 00 00      MOV dword ptr [ESI + 0x40],0x13d
0053C0A7  C7 46 48 64 00 00 00      MOV dword ptr [ESI + 0x48],0x64
0053C0AE  88 9E 94 01 00 00         MOV byte ptr [ESI + 0x194],BL
0053C0B4  89 9E 95 01 00 00         MOV dword ptr [ESI + 0x195],EBX
0053C0BA  89 9E 82 02 00 00         MOV dword ptr [ESI + 0x282],EBX
0053C0C0  89 9E 7E 02 00 00         MOV dword ptr [ESI + 0x27e],EBX
0053C0C6  89 9E 7A 02 00 00         MOV dword ptr [ESI + 0x27a],EBX
0053C0CC  8B C6                     MOV EAX,ESI
0053C0CE  5F                        POP EDI
0053C0CF  5E                        POP ESI
0053C0D0  5B                        POP EBX
0053C0D1  C3                        RET
LAB_0053c0d2:
0053C0D2  5E                        POP ESI
0053C0D3  33 C0                     XOR EAX,EAX
0053C0D5  5B                        POP EBX
0053C0D6  C3                        RET
