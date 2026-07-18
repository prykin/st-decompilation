FUN_006189c0:
006189C0  55                        PUSH EBP
006189C1  8B EC                     MOV EBP,ESP
006189C3  51                        PUSH ECX
006189C4  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006189C7  56                        PUSH ESI
006189C8  33 F6                     XOR ESI,ESI
006189CA  85 C0                     TEST EAX,EAX
006189CC  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006189CF  7E 51                     JLE 0x00618a22
006189D1  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006189D4  53                        PUSH EBX
006189D5  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006189D8  57                        PUSH EDI
LAB_006189d9:
006189D9  8B 02                     MOV EAX,dword ptr [EDX]
006189DB  85 F6                     TEST ESI,ESI
006189DD  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
006189E0  8D 04 48                  LEA EAX,[EAX + ECX*0x2]
006189E3  8B 7C 83 1E               MOV EDI,dword ptr [EBX + EAX*0x4 + 0x1e]
006189E7  7E 29                     JLE 0x00618a12
006189E9  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006189EC  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
LAB_006189ef:
006189EF  8B 01                     MOV EAX,dword ptr [ECX]
006189F1  8D 34 80                  LEA ESI,[EAX + EAX*0x4]
006189F4  8D 34 70                  LEA ESI,[EAX + ESI*0x2]
006189F7  3B 7C B3 1E               CMP EDI,dword ptr [EBX + ESI*0x4 + 0x1e]
006189FB  7D 06                     JGE 0x00618a03
006189FD  8B 32                     MOV ESI,dword ptr [EDX]
006189FF  89 31                     MOV dword ptr [ECX],ESI
00618A01  89 02                     MOV dword ptr [EDX],EAX
LAB_00618a03:
00618A03  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00618A06  83 C1 04                  ADD ECX,0x4
00618A09  48                        DEC EAX
00618A0A  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00618A0D  75 E0                     JNZ 0x006189ef
00618A0F  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
LAB_00618a12:
00618A12  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00618A15  46                        INC ESI
00618A16  83 C2 04                  ADD EDX,0x4
00618A19  3B F0                     CMP ESI,EAX
00618A1B  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00618A1E  7C B9                     JL 0x006189d9
00618A20  5F                        POP EDI
00618A21  5B                        POP EBX
LAB_00618a22:
00618A22  5E                        POP ESI
00618A23  8B E5                     MOV ESP,EBP
00618A25  5D                        POP EBP
00618A26  C2 0C 00                  RET 0xc
