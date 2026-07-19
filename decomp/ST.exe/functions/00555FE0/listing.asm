TraksClassTy::PrepareToSave:
00555FE0  55                        PUSH EBP
00555FE1  8B EC                     MOV EBP,ESP
00555FE3  83 EC 54                  SUB ESP,0x54
00555FE6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00555FEB  56                        PUSH ESI
00555FEC  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00555FEF  57                        PUSH EDI
00555FF0  8D 55 B0                  LEA EDX,[EBP + -0x50]
00555FF3  8D 4D AC                  LEA ECX,[EBP + -0x54]
00555FF6  6A 00                     PUSH 0x0
00555FF8  52                        PUSH EDX
00555FF9  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00556000  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
00556007  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
0055600E  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
00556011  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00556017  E8 D4 77 1D 00            CALL 0x0072d7f0
0055601C  8B F0                     MOV ESI,EAX
0055601E  83 C4 08                  ADD ESP,0x8
00556021  85 F6                     TEST ESI,ESI
00556023  0F 85 8C 00 00 00         JNZ 0x005560b5
00556029  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
0055602C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0055602F  8D 47 5D                  LEA EAX,[EDI + 0x5d]
00556032  50                        PUSH EAX
00556033  89 01                     MOV dword ptr [ECX],EAX
00556035  E8 D6 4B 15 00            CALL 0x006aac10
0055603A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0055603D  C7 00 46 00 00 00         MOV dword ptr [EAX],0x46
00556043  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00556046  C7 42 04 FF 00 00 00      MOV dword ptr [EDX + 0x4],0xff
0055604D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00556050  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00556053  C7 40 08 02 00 00 00      MOV dword ptr [EAX + 0x8],0x2
0055605A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0055605D  C7 41 14 01 00 00 00      MOV dword ptr [ECX + 0x14],0x1
00556064  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00556067  8B 42 1C                  MOV EAX,dword ptr [EDX + 0x1c]
0055606A  89 41 18                  MOV dword ptr [ECX + 0x18],EAX
0055606D  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00556070  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00556073  85 C9                     TEST ECX,ECX
00556075  0F 95 C2                  SETNZ DL
00556078  88 50 1C                  MOV byte ptr [EAX + 0x1c],DL
0055607B  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0055607E  85 F6                     TEST ESI,ESI
00556080  74 1F                     JZ 0x005560a1
00556082  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00556085  8B CF                     MOV ECX,EDI
00556087  8B C1                     MOV EAX,ECX
00556089  8D 7A 5C                  LEA EDI,[EDX + 0x5c]
0055608C  C1 E9 02                  SHR ECX,0x2
0055608F  F3 A5                     MOVSD.REP ES:EDI,ESI
00556091  8B C8                     MOV ECX,EAX
00556093  83 E1 03                  AND ECX,0x3
00556096  F3 A4                     MOVSB.REP ES:EDI,ESI
00556098  8D 4D F8                  LEA ECX,[EBP + -0x8]
0055609B  51                        PUSH ECX
0055609C  E8 BF 4F 15 00            CALL 0x006ab060
LAB_005560a1:
005560A1  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
005560A4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005560A7  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005560AD  5F                        POP EDI
005560AE  5E                        POP ESI
005560AF  8B E5                     MOV ESP,EBP
005560B1  5D                        POP EBP
005560B2  C2 04 00                  RET 0x4
LAB_005560b5:
005560B5  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
005560B8  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005560BD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005560C0  85 C0                     TEST EAX,EAX
005560C2  74 09                     JZ 0x005560cd
005560C4  8D 4D FC                  LEA ECX,[EBP + -0x4]
005560C7  51                        PUSH ECX
005560C8  E8 93 4F 15 00            CALL 0x006ab060
LAB_005560cd:
005560CD  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005560D0  85 C0                     TEST EAX,EAX
005560D2  74 09                     JZ 0x005560dd
005560D4  8D 55 F8                  LEA EDX,[EBP + -0x8]
005560D7  52                        PUSH EDX
005560D8  E8 83 4F 15 00            CALL 0x006ab060
LAB_005560dd:
005560DD  68 A8 91 7C 00            PUSH 0x7c91a8
005560E2  68 CC 4C 7A 00            PUSH 0x7a4ccc
005560E7  56                        PUSH ESI
005560E8  6A 00                     PUSH 0x0
005560EA  68 ED 00 00 00            PUSH 0xed
005560EF  68 04 91 7C 00            PUSH 0x7c9104
005560F4  E8 D7 73 15 00            CALL 0x006ad4d0
005560F9  83 C4 18                  ADD ESP,0x18
005560FC  85 C0                     TEST EAX,EAX
005560FE  74 01                     JZ 0x00556101
00556100  CC                        INT3
LAB_00556101:
00556101  68 EE 00 00 00            PUSH 0xee
00556106  68 04 91 7C 00            PUSH 0x7c9104
0055610B  6A 00                     PUSH 0x0
0055610D  56                        PUSH ESI
0055610E  E8 2D FD 14 00            CALL 0x006a5e40
00556113  5F                        POP EDI
00556114  33 C0                     XOR EAX,EAX
00556116  5E                        POP ESI
00556117  8B E5                     MOV ESP,EBP
00556119  5D                        POP EBP
0055611A  C2 04 00                  RET 0x4
