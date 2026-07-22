FUN_004ee8e0:
004EE8E0  53                        PUSH EBX
004EE8E1  56                        PUSH ESI
004EE8E2  68 96 02 00 00            PUSH 0x296
004EE8E7  E8 E4 1B 1C 00            CALL 0x006b04d0
004EE8EC  8B F0                     MOV ESI,EAX
004EE8EE  33 DB                     XOR EBX,EBX
004EE8F0  3B F3                     CMP ESI,EBX
004EE8F2  0F 84 E4 00 00 00         JZ 0x004ee9dc
004EE8F8  57                        PUSH EDI
004EE8F9  8B CE                     MOV ECX,ESI
004EE8FB  E8 B0 76 1F 00            CALL 0x006e5fb0
004EE900  8D 8E A1 01 00 00         LEA ECX,[ESI + 0x1a1]
004EE906  33 C0                     XOR EAX,EAX
004EE908  89 5E 5C                  MOV dword ptr [ESI + 0x5c],EBX
004EE90B  C7 46 60 FF FF FF FF      MOV dword ptr [ESI + 0x60],0xffffffff
004EE912  C7 46 64 04 00 00 00      MOV dword ptr [ESI + 0x64],0x4
004EE919  89 5E 68                  MOV dword ptr [ESI + 0x68],EBX
004EE91C  66 C7 86 72 01 00 00 02 00  MOV word ptr [ESI + 0x172],0x2
004EE925  89 9E 78 01 00 00         MOV dword ptr [ESI + 0x178],EBX
004EE92B  89 9E 7C 01 00 00         MOV dword ptr [ESI + 0x17c],EBX
004EE931  89 9E 84 01 00 00         MOV dword ptr [ESI + 0x184],EBX
004EE937  89 9E 90 01 00 00         MOV dword ptr [ESI + 0x190],EBX
004EE93D  89 9E 88 01 00 00         MOV dword ptr [ESI + 0x188],EBX
004EE943  89 9E 9D 01 00 00         MOV dword ptr [ESI + 0x19d],EBX
004EE949  89 9E 80 01 00 00         MOV dword ptr [ESI + 0x180],EBX
004EE94F  89 01                     MOV dword ptr [ECX],EAX
004EE951  8D BE B5 01 00 00         LEA EDI,[ESI + 0x1b5]
004EE957  33 D2                     XOR EDX,EDX
004EE959  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
004EE95C  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
004EE95F  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
004EE962  89 41 10                  MOV dword ptr [ECX + 0x10],EAX
004EE965  B9 30 00 00 00            MOV ECX,0x30
004EE96A  F3 AB                     STOSD.REP ES:EDI
004EE96C  66 AB                     STOSW ES:EDI
004EE96E  AA                        STOSB ES:EDI
004EE96F  89 9E 99 01 00 00         MOV dword ptr [ESI + 0x199],EBX
004EE975  C6 86 79 02 00 00 01      MOV byte ptr [ESI + 0x279],0x1
004EE97C  88 9E 78 02 00 00         MOV byte ptr [ESI + 0x278],BL
004EE982  C7 06 A0 AB 79 00         MOV dword ptr [ESI],0x79aba0
004EE988  C7 46 3C C7 01 00 00      MOV dword ptr [ESI + 0x3c],0x1c7
004EE98F  89 5E 44                  MOV dword ptr [ESI + 0x44],EBX
004EE992  C7 46 40 3D 01 00 00      MOV dword ptr [ESI + 0x40],0x13d
004EE999  C7 46 48 78 00 00 00      MOV dword ptr [ESI + 0x48],0x78
004EE9A0  88 9E 94 01 00 00         MOV byte ptr [ESI + 0x194],BL
004EE9A6  89 9E 95 01 00 00         MOV dword ptr [ESI + 0x195],EBX
004EE9AC  89 9E 8A 02 00 00         MOV dword ptr [ESI + 0x28a],EBX
004EE9B2  89 9E 8E 02 00 00         MOV dword ptr [ESI + 0x28e],EBX
004EE9B8  89 9E 92 02 00 00         MOV dword ptr [ESI + 0x292],EBX
004EE9BE  89 96 7A 02 00 00         MOV dword ptr [ESI + 0x27a],EDX
004EE9C4  89 96 7E 02 00 00         MOV dword ptr [ESI + 0x27e],EDX
004EE9CA  8B C6                     MOV EAX,ESI
004EE9CC  89 96 82 02 00 00         MOV dword ptr [ESI + 0x282],EDX
004EE9D2  5F                        POP EDI
004EE9D3  89 96 86 02 00 00         MOV dword ptr [ESI + 0x286],EDX
004EE9D9  5E                        POP ESI
004EE9DA  5B                        POP EBX
004EE9DB  C3                        RET
LAB_004ee9dc:
004EE9DC  5E                        POP ESI
004EE9DD  33 C0                     XOR EAX,EAX
004EE9DF  5B                        POP EBX
004EE9E0  C3                        RET
