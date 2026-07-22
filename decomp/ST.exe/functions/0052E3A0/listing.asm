CreateOptPanel:
0052E3A0  53                        PUSH EBX
0052E3A1  56                        PUSH ESI
0052E3A2  68 06 03 00 00            PUSH 0x306
0052E3A7  E8 24 21 18 00            CALL 0x006b04d0
0052E3AC  8B F0                     MOV ESI,EAX
0052E3AE  33 DB                     XOR EBX,EBX
0052E3B0  3B F3                     CMP ESI,EBX
0052E3B2  0F 84 E6 00 00 00         JZ 0x0052e49e
0052E3B8  57                        PUSH EDI
0052E3B9  8B CE                     MOV ECX,ESI
0052E3BB  E8 F0 7B 1B 00            CALL 0x006e5fb0
0052E3C0  8D 8E 84 01 00 00         LEA ECX,[ESI + 0x184]
0052E3C6  33 C0                     XOR EAX,EAX
0052E3C8  89 5E 5C                  MOV dword ptr [ESI + 0x5c],EBX
0052E3CB  C7 46 60 FF FF FF FF      MOV dword ptr [ESI + 0x60],0xffffffff
0052E3D2  C7 46 64 04 00 00 00      MOV dword ptr [ESI + 0x64],0x4
0052E3D9  89 5E 68                  MOV dword ptr [ESI + 0x68],EBX
0052E3DC  66 C7 86 72 01 00 00 02 00  MOV word ptr [ESI + 0x172],0x2
0052E3E5  89 9E 78 01 00 00         MOV dword ptr [ESI + 0x178],EBX
0052E3EB  C7 06 10 AD 79 00         MOV dword ptr [ESI],0x79ad10
0052E3F1  C7 46 3C 0C 00 00 00      MOV dword ptr [ESI + 0x3c],0xc
0052E3F8  C7 46 44 9C 00 00 00      MOV dword ptr [ESI + 0x44],0x9c
0052E3FF  C7 46 40 28 01 00 00      MOV dword ptr [ESI + 0x40],0x128
0052E406  C7 46 48 B4 00 00 00      MOV dword ptr [ESI + 0x48],0xb4
0052E40D  89 9E 80 01 00 00         MOV dword ptr [ESI + 0x180],EBX
0052E413  89 9E 7C 01 00 00         MOV dword ptr [ESI + 0x17c],EBX
0052E419  89 9E 9C 01 00 00         MOV dword ptr [ESI + 0x19c],EBX
0052E41F  89 9E A0 01 00 00         MOV dword ptr [ESI + 0x1a0],EBX
0052E425  89 01                     MOV dword ptr [ECX],EAX
0052E427  33 D2                     XOR EDX,EDX
0052E429  8D BE B5 01 00 00         LEA EDI,[ESI + 0x1b5]
0052E42F  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
0052E432  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
0052E435  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
0052E438  89 41 10                  MOV dword ptr [ECX + 0x10],EAX
0052E43B  8D 86 AD 01 00 00         LEA EAX,[ESI + 0x1ad]
0052E441  89 9E 98 01 00 00         MOV dword ptr [ESI + 0x198],EBX
0052E447  C6 86 A4 01 00 00 01      MOV byte ptr [ESI + 0x1a4],0x1
0052E44E  89 10                     MOV dword ptr [EAX],EDX
0052E450  B9 0A 00 00 00            MOV ECX,0xa
0052E455  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
0052E458  33 C0                     XOR EAX,EAX
0052E45A  F3 AB                     STOSD.REP ES:EDI
0052E45C  89 9E DD 01 00 00         MOV dword ptr [ESI + 0x1dd],EBX
0052E462  89 9E E1 01 00 00         MOV dword ptr [ESI + 0x1e1],EBX
0052E468  88 9E AC 01 00 00         MOV byte ptr [ESI + 0x1ac],BL
0052E46E  89 9E E5 01 00 00         MOV dword ptr [ESI + 0x1e5],EBX
0052E474  89 9E F1 01 00 00         MOV dword ptr [ESI + 0x1f1],EBX
0052E47A  89 9E E9 01 00 00         MOV dword ptr [ESI + 0x1e9],EBX
0052E480  89 9E ED 01 00 00         MOV dword ptr [ESI + 0x1ed],EBX
0052E486  89 9E FD 02 00 00         MOV dword ptr [ESI + 0x2fd],EBX
0052E48C  89 9E F9 02 00 00         MOV dword ptr [ESI + 0x2f9],EBX
0052E492  89 9E 01 03 00 00         MOV dword ptr [ESI + 0x301],EBX
0052E498  8B C6                     MOV EAX,ESI
0052E49A  5F                        POP EDI
0052E49B  5E                        POP ESI
0052E49C  5B                        POP EBX
0052E49D  C3                        RET
LAB_0052e49e:
0052E49E  5E                        POP ESI
0052E49F  33 C0                     XOR EAX,EAX
0052E4A1  5B                        POP EBX
0052E4A2  C3                        RET
