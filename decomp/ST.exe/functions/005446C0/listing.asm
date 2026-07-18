FUN_005446c0:
005446C0  55                        PUSH EBP
005446C1  8B EC                     MOV EBP,ESP
005446C3  81 EC B4 00 00 00         SUB ESP,0xb4
005446C9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005446CE  56                        PUSH ESI
005446CF  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005446D2  57                        PUSH EDI
005446D3  8D 95 50 FF FF FF         LEA EDX,[EBP + 0xffffff50]
005446D9  8D 8D 4C FF FF FF         LEA ECX,[EBP + 0xffffff4c]
005446DF  6A 00                     PUSH 0x0
005446E1  52                        PUSH EDX
005446E2  89 85 4C FF FF FF         MOV dword ptr [EBP + 0xffffff4c],EAX
005446E8  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005446EE  E8 FD 90 1E 00            CALL 0x0072d7f0
005446F3  8B F0                     MOV ESI,EAX
005446F5  83 C4 08                  ADD ESP,0x8
005446F8  85 F6                     TEST ESI,ESI
005446FA  75 77                     JNZ 0x00544773
005446FC  B9 08 00 00 00            MOV ECX,0x8
00544701  8D 7D DC                  LEA EDI,[EBP + -0x24]
00544704  F3 AB                     STOSD.REP ES:EDI
00544706  B9 13 00 00 00            MOV ECX,0x13
0054470B  8D 7D 90                  LEA EDI,[EBP + -0x70]
0054470E  F3 AB                     STOSD.REP ES:EDI
00544710  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00544713  8D 4D 90                  LEA ECX,[EBP + -0x70]
00544716  C7 45 90 08 00 00 00      MOV dword ptr [EBP + -0x70],0x8
0054471D  C7 45 A8 02 00 00 00      MOV dword ptr [EBP + -0x58],0x2
00544724  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
00544727  C7 45 EC 10 00 00 00      MOV dword ptr [EBP + -0x14],0x10
0054472E  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
00544731  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00544734  BE 36 81 80 00            MOV ESI,0x808136
LAB_00544739:
00544739  8B 96 C0 FE FF FF         MOV EDX,dword ptr [ESI + 0xfffffec0]
0054473F  8B 06                     MOV EAX,dword ptr [ESI]
00544741  8D 4D DC                  LEA ECX,[EBP + -0x24]
00544744  89 55 94                  MOV dword ptr [EBP + -0x6c],EDX
00544747  51                        PUSH ECX
00544748  6A 01                     PUSH 0x1
0054474A  6A 03                     PUSH 0x3
0054474C  8B CF                     MOV ECX,EDI
0054474E  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
00544751  E8 AA 18 1A 00            CALL 0x006e6000
00544756  83 C6 04                  ADD ESI,0x4
00544759  81 FE 46 81 80 00         CMP ESI,0x808146
0054475F  7C D8                     JL 0x00544739
00544761  8B 95 4C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff4c]
00544767  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0054476D  5F                        POP EDI
0054476E  5E                        POP ESI
0054476F  8B E5                     MOV ESP,EBP
00544771  5D                        POP EBP
00544772  C3                        RET
LAB_00544773:
00544773  8B 85 4C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff4c]
00544779  68 CC 7E 7C 00            PUSH 0x7c7ecc
0054477E  68 CC 4C 7A 00            PUSH 0x7a4ccc
00544783  56                        PUSH ESI
00544784  6A 00                     PUSH 0x0
00544786  68 75 01 00 00            PUSH 0x175
0054478B  68 60 7D 7C 00            PUSH 0x7c7d60
00544790  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00544795  E8 36 8D 16 00            CALL 0x006ad4d0
0054479A  83 C4 18                  ADD ESP,0x18
0054479D  85 C0                     TEST EAX,EAX
0054479F  74 01                     JZ 0x005447a2
005447A1  CC                        INT3
LAB_005447a2:
005447A2  68 76 01 00 00            PUSH 0x176
005447A7  68 60 7D 7C 00            PUSH 0x7c7d60
005447AC  6A 00                     PUSH 0x0
005447AE  56                        PUSH ESI
005447AF  E8 8C 16 16 00            CALL 0x006a5e40
005447B4  5F                        POP EDI
005447B5  5E                        POP ESI
005447B6  8B E5                     MOV ESP,EBP
005447B8  5D                        POP EBP
005447B9  C3                        RET
