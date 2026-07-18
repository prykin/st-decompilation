STPlaySystemC::Save:
0054D2F0  55                        PUSH EBP
0054D2F1  8B EC                     MOV EBP,ESP
0054D2F3  83 EC 70                  SUB ESP,0x70
0054D2F6  8B 81 E4 00 00 00         MOV EAX,dword ptr [ECX + 0xe4]
0054D2FC  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0054D2FF  8B 49 20                  MOV ECX,dword ptr [ECX + 0x20]
0054D302  56                        PUSH ESI
0054D303  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0054D306  57                        PUSH EDI
0054D307  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0054D30A  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
0054D310  8D 45 94                  LEA EAX,[EBP + -0x6c]
0054D313  8D 55 90                  LEA EDX,[EBP + -0x70]
0054D316  6A 00                     PUSH 0x0
0054D318  50                        PUSH EAX
0054D319  89 4D 90                  MOV dword ptr [EBP + -0x70],ECX
0054D31C  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0054D322  E8 C9 04 1E 00            CALL 0x0072d7f0
0054D327  8B F0                     MOV ESI,EAX
0054D329  83 C4 08                  ADD ESP,0x8
0054D32C  85 F6                     TEST ESI,ESI
0054D32E  75 73                     JNZ 0x0054d3a3
0054D330  8B 15 30 AE 79 00         MOV EDX,dword ptr [0x0079ae30]
0054D336  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0054D339  50                        PUSH EAX
0054D33A  50                        PUSH EAX
0054D33B  50                        PUSH EAX
0054D33C  8D 4D F8                  LEA ECX,[EBP + -0x8]
0054D33F  6A 04                     PUSH 0x4
0054D341  51                        PUSH ECX
0054D342  52                        PUSH EDX
0054D343  6A 0C                     PUSH 0xc
0054D345  8B CE                     MOV ECX,ESI
0054D347  E8 A4 40 1A 00            CALL 0x006f13f0
0054D34C  8B 0D 2C AE 79 00         MOV ECX,dword ptr [0x0079ae2c]
0054D352  6A 00                     PUSH 0x0
0054D354  6A 00                     PUSH 0x0
0054D356  6A 00                     PUSH 0x0
0054D358  8D 45 FC                  LEA EAX,[EBP + -0x4]
0054D35B  6A 04                     PUSH 0x4
0054D35D  50                        PUSH EAX
0054D35E  51                        PUSH ECX
0054D35F  6A 0C                     PUSH 0xc
0054D361  8B CE                     MOV ECX,ESI
0054D363  E8 88 40 1A 00            CALL 0x006f13f0
0054D368  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
0054D36B  8D 55 D4                  LEA EDX,[EBP + -0x2c]
0054D36E  52                        PUSH EDX
0054D36F  B9 20 76 80 00            MOV ECX,0x807620
0054D374  89 77 24                  MOV dword ptr [EDI + 0x24],ESI
0054D377  C7 45 E0 0F 00 00 00      MOV dword ptr [EBP + -0x20],0xf
0054D37E  C7 45 E4 0F 01 00 00      MOV dword ptr [EBP + -0x1c],0x10f
0054D385  E8 26 6A 19 00            CALL 0x006e3db0
0054D38A  8B 45 90                  MOV EAX,dword ptr [EBP + -0x70]
0054D38D  C7 47 24 00 00 00 00      MOV dword ptr [EDI + 0x24],0x0
0054D394  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0054D399  33 C0                     XOR EAX,EAX
0054D39B  5F                        POP EDI
0054D39C  5E                        POP ESI
0054D39D  8B E5                     MOV ESP,EBP
0054D39F  5D                        POP EBP
0054D3A0  C2 04 00                  RET 0x4
LAB_0054d3a3:
0054D3A3  8B 4D 90                  MOV ECX,dword ptr [EBP + -0x70]
0054D3A6  68 F8 84 7C 00            PUSH 0x7c84f8
0054D3AB  68 CC 4C 7A 00            PUSH 0x7a4ccc
0054D3B0  56                        PUSH ESI
0054D3B1  6A 00                     PUSH 0x0
0054D3B3  68 FB 01 00 00            PUSH 0x1fb
0054D3B8  68 30 84 7C 00            PUSH 0x7c8430
0054D3BD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0054D3C3  E8 08 01 16 00            CALL 0x006ad4d0
0054D3C8  83 C4 18                  ADD ESP,0x18
0054D3CB  85 C0                     TEST EAX,EAX
0054D3CD  74 01                     JZ 0x0054d3d0
0054D3CF  CC                        INT3
LAB_0054d3d0:
0054D3D0  68 FB 01 00 00            PUSH 0x1fb
0054D3D5  68 30 84 7C 00            PUSH 0x7c8430
0054D3DA  6A 00                     PUSH 0x0
0054D3DC  56                        PUSH ESI
0054D3DD  E8 5E 8A 15 00            CALL 0x006a5e40
0054D3E2  8B C6                     MOV EAX,ESI
0054D3E4  5F                        POP EDI
0054D3E5  5E                        POP ESI
0054D3E6  8B E5                     MOV ESP,EBP
0054D3E8  5D                        POP EBP
0054D3E9  C2 04 00                  RET 0x4
