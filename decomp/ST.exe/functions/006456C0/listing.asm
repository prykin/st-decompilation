FUN_006456c0:
006456C0  55                        PUSH EBP
006456C1  8B EC                     MOV EBP,ESP
006456C3  83 EC 4C                  SUB ESP,0x4c
006456C6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006456C9  53                        PUSH EBX
006456CA  56                        PUSH ESI
006456CB  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006456CE  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
006456D4  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006456D7  57                        PUSH EDI
006456D8  8D 45 B8                  LEA EAX,[EBP + -0x48]
006456DB  8D 55 B4                  LEA EDX,[EBP + -0x4c]
006456DE  6A 00                     PUSH 0x0
006456E0  50                        PUSH EAX
006456E1  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
006456E4  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006456EA  E8 01 81 0E 00            CALL 0x0072d7f0
006456EF  8B F0                     MOV ESI,EAX
006456F1  83 C4 08                  ADD ESP,0x8
006456F4  85 F6                     TEST ESI,ESI
006456F6  75 5D                     JNZ 0x00645755
006456F8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006456FB  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006456FE  B9 11 00 00 00            MOV ECX,0x11
00645703  8D 70 14                  LEA ESI,[EAX + 0x14]
00645706  8D BB 45 02 00 00         LEA EDI,[EBX + 0x245]
0064570C  F3 A5                     MOVSD.REP ES:EDI,ESI
0064570E  8D 48 58                  LEA ECX,[EAX + 0x58]
00645711  8D 93 31 02 00 00         LEA EDX,[EBX + 0x231]
00645717  8B 31                     MOV ESI,dword ptr [ECX]
00645719  89 32                     MOV dword ptr [EDX],ESI
0064571B  8B 71 04                  MOV ESI,dword ptr [ECX + 0x4]
0064571E  89 72 04                  MOV dword ptr [EDX + 0x4],ESI
00645721  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
00645724  89 4A 08                  MOV dword ptr [EDX + 0x8],ECX
00645727  8B 50 64                  MOV EDX,dword ptr [EAX + 0x64]
0064572A  89 93 3D 02 00 00         MOV dword ptr [EBX + 0x23d],EDX
00645730  8B 48 68                  MOV ECX,dword ptr [EAX + 0x68]
00645733  03 C8                     ADD ECX,EAX
00645735  51                        PUSH ECX
00645736  6A 00                     PUSH 0x0
00645738  E8 23 A9 06 00            CALL 0x006b0060
0064573D  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00645740  89 83 41 02 00 00         MOV dword ptr [EBX + 0x241],EAX
00645746  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0064574C  5F                        POP EDI
0064574D  5E                        POP ESI
0064574E  5B                        POP EBX
0064574F  8B E5                     MOV ESP,EBP
00645751  5D                        POP EBP
00645752  C2 04 00                  RET 0x4
LAB_00645755:
00645755  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
00645758  68 54 26 7D 00            PUSH 0x7d2654
0064575D  68 CC 4C 7A 00            PUSH 0x7a4ccc
00645762  56                        PUSH ESI
00645763  6A 00                     PUSH 0x0
00645765  68 E5 04 00 00            PUSH 0x4e5
0064576A  68 C0 25 7D 00            PUSH 0x7d25c0
0064576F  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00645774  E8 57 7D 06 00            CALL 0x006ad4d0
00645779  83 C4 18                  ADD ESP,0x18
0064577C  85 C0                     TEST EAX,EAX
0064577E  74 01                     JZ 0x00645781
00645780  CC                        INT3
LAB_00645781:
00645781  68 E6 04 00 00            PUSH 0x4e6
00645786  68 C0 25 7D 00            PUSH 0x7d25c0
0064578B  6A 00                     PUSH 0x0
0064578D  56                        PUSH ESI
0064578E  E8 AD 06 06 00            CALL 0x006a5e40
00645793  5F                        POP EDI
00645794  5E                        POP ESI
00645795  5B                        POP EBX
00645796  8B E5                     MOV ESP,EBP
00645798  5D                        POP EBP
00645799  C2 04 00                  RET 0x4
