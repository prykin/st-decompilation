FUN_00491070:
00491070  55                        PUSH EBP
00491071  8B EC                     MOV EBP,ESP
00491073  56                        PUSH ESI
00491074  8B F1                     MOV ESI,ECX
00491076  8B 86 C2 07 00 00         MOV EAX,dword ptr [ESI + 0x7c2]
0049107C  85 C0                     TEST EAX,EAX
0049107E  7F 2E                     JG 0x004910ae
00491080  68 78 BA 7A 00            PUSH 0x7aba78
00491085  68 CC 4C 7A 00            PUSH 0x7a4ccc
0049108A  6A 00                     PUSH 0x0
0049108C  6A 00                     PUSH 0x0
0049108E  68 96 4F 00 00            PUSH 0x4f96
00491093  68 3C 9D 7A 00            PUSH 0x7a9d3c
00491098  E8 33 C4 21 00            CALL 0x006ad4d0
0049109D  83 C4 18                  ADD ESP,0x18
004910A0  85 C0                     TEST EAX,EAX
004910A2  0F 84 87 00 00 00         JZ 0x0049112f
004910A8  CC                        INT3
LAB_004910ae:
004910AE  48                        DEC EAX
004910AF  85 C0                     TEST EAX,EAX
004910B1  89 86 C2 07 00 00         MOV dword ptr [ESI + 0x7c2],EAX
004910B7  75 59                     JNZ 0x00491112
004910B9  89 86 A2 05 00 00         MOV dword ptr [ESI + 0x5a2],EAX
004910BF  8D 8E CC 02 00 00         LEA ECX,[ESI + 0x2cc]
LAB_004910c5:
004910C5  83 39 01                  CMP dword ptr [ECX],0x1
004910C8  74 09                     JZ 0x004910d3
004910CA  40                        INC EAX
004910CB  83 C1 04                  ADD ECX,0x4
004910CE  83 F8 17                  CMP EAX,0x17
004910D1  7C F2                     JL 0x004910c5
LAB_004910d3:
004910D3  83 BE 5D 04 00 00 14      CMP dword ptr [ESI + 0x45d],0x14
004910DA  75 20                     JNZ 0x004910fc
004910DC  83 F8 17                  CMP EAX,0x17
004910DF  75 1B                     JNZ 0x004910fc
004910E1  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004910E6  8D 55 08                  LEA EDX,[EBP + 0x8]
004910E9  52                        PUSH EDX
004910EA  6A 03                     PUSH 0x3
004910EC  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
004910F2  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
004910F5  8B CE                     MOV ECX,ESI
004910F7  E8 2A 10 F7 FF            CALL 0x00402126
LAB_004910fc:
004910FC  C7 86 14 03 00 00 00 00 00 00  MOV dword ptr [ESI + 0x314],0x0
00491106  C7 46 76 01 00 00 00      MOV dword ptr [ESI + 0x76],0x1
0049110D  5E                        POP ESI
0049110E  5D                        POP EBP
0049110F  C2 04 00                  RET 0x4
LAB_00491112:
00491112  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00491115  8B 06                     MOV EAX,dword ptr [ESI]
00491117  51                        PUSH ECX
00491118  8B CE                     MOV ECX,ESI
0049111A  FF 90 AC 00 00 00         CALL dword ptr [EAX + 0xac]
00491120  83 F8 01                  CMP EAX,0x1
00491123  75 0A                     JNZ 0x0049112f
00491125  C7 86 C0 05 00 00 02 00 00 00  MOV dword ptr [ESI + 0x5c0],0x2
LAB_0049112f:
0049112F  5E                        POP ESI
00491130  5D                        POP EBP
00491131  C2 04 00                  RET 0x4
