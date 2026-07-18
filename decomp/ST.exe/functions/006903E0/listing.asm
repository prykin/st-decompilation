FUN_006903e0:
006903E0  55                        PUSH EBP
006903E1  8B EC                     MOV EBP,ESP
006903E3  56                        PUSH ESI
006903E4  57                        PUSH EDI
006903E5  8B F9                     MOV EDI,ECX
006903E7  33 F6                     XOR ESI,ESI
006903E9  8B 8F A5 00 00 00         MOV ECX,dword ptr [EDI + 0xa5]
006903EF  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
006903F2  85 C0                     TEST EAX,EAX
006903F4  7E 34                     JLE 0x0069042a
006903F6  53                        PUSH EBX
006903F7  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006903FA  3B F0                     CMP ESI,EAX
LAB_006903fc:
006903FC  73 1D                     JNC 0x0069041b
006903FE  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00690401  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
00690404  0F AF C6                  IMUL EAX,ESI
00690407  03 C2                     ADD EAX,EDX
00690409  85 C0                     TEST EAX,EAX
0069040B  74 0E                     JZ 0x0069041b
0069040D  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
00690410  85 C0                     TEST EAX,EAX
00690412  74 07                     JZ 0x0069041b
00690414  8B 10                     MOV EDX,dword ptr [EAX]
00690416  53                        PUSH EBX
00690417  8B C8                     MOV ECX,EAX
00690419  FF 12                     CALL dword ptr [EDX]
LAB_0069041b:
0069041B  8B 8F A5 00 00 00         MOV ECX,dword ptr [EDI + 0xa5]
00690421  46                        INC ESI
00690422  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00690425  3B F0                     CMP ESI,EAX
00690427  7C D3                     JL 0x006903fc
00690429  5B                        POP EBX
LAB_0069042a:
0069042A  5F                        POP EDI
0069042B  5E                        POP ESI
0069042C  5D                        POP EBP
0069042D  C2 04 00                  RET 0x4
