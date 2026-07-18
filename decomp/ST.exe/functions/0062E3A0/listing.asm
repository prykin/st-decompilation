FUN_0062e3a0:
0062E3A0  55                        PUSH EBP
0062E3A1  8B EC                     MOV EBP,ESP
0062E3A3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0062E3A6  8B 4C 81 50               MOV ECX,dword ptr [ECX + EAX*0x4 + 0x50]
0062E3AA  85 C9                     TEST ECX,ECX
0062E3AC  74 65                     JZ 0x0062e413
0062E3AE  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0062E3B1  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0062E3B4  3B D0                     CMP EDX,EAX
0062E3B6  73 5B                     JNC 0x0062e413
0062E3B8  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0062E3BB  0F AF C2                  IMUL EAX,EDX
0062E3BE  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
0062E3C1  85 C0                     TEST EAX,EAX
0062E3C3  74 4E                     JZ 0x0062e413
0062E3C5  53                        PUSH EBX
0062E3C6  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
0062E3C9  56                        PUSH ESI
0062E3CA  57                        PUSH EDI
0062E3CB  8D 70 10                  LEA ESI,[EAX + 0x10]
0062E3CE  BF 03 00 00 00            MOV EDI,0x3
LAB_0062e3d3:
0062E3D3  8B 06                     MOV EAX,dword ptr [ESI]
0062E3D5  85 C0                     TEST EAX,EAX
0062E3D7  76 31                     JBE 0x0062e40a
0062E3D9  8D 4D 08                  LEA ECX,[EBP + 0x8]
0062E3DC  51                        PUSH ECX
0062E3DD  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0062E3E3  50                        PUSH EAX
0062E3E4  E8 E7 7E 0B 00            CALL 0x006e62d0
0062E3E9  83 F8 FC                  CMP EAX,-0x4
0062E3EC  74 1C                     JZ 0x0062e40a
0062E3EE  8B C3                     MOV EAX,EBX
0062E3F0  83 E8 00                  SUB EAX,0x0
0062E3F3  74 0D                     JZ 0x0062e402
0062E3F5  48                        DEC EAX
0062E3F6  75 12                     JNZ 0x0062e40a
0062E3F8  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0062E3FB  E8 41 4A DD FF            CALL 0x00402e41
0062E400  EB 08                     JMP 0x0062e40a
LAB_0062e402:
0062E402  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0062E405  E8 C6 65 DD FF            CALL 0x004049d0
LAB_0062e40a:
0062E40A  83 C6 04                  ADD ESI,0x4
0062E40D  4F                        DEC EDI
0062E40E  75 C3                     JNZ 0x0062e3d3
0062E410  5F                        POP EDI
0062E411  5E                        POP ESI
0062E412  5B                        POP EBX
LAB_0062e413:
0062E413  5D                        POP EBP
0062E414  C2 0C 00                  RET 0xc
