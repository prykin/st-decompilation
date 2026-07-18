CursorClassTy::DelOpticAcc:
00544800  55                        PUSH EBP
00544801  8B EC                     MOV EBP,ESP
00544803  81 EC B4 00 00 00         SUB ESP,0xb4
00544809  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0054480E  56                        PUSH ESI
0054480F  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00544812  57                        PUSH EDI
00544813  8D 95 50 FF FF FF         LEA EDX,[EBP + 0xffffff50]
00544819  8D 8D 4C FF FF FF         LEA ECX,[EBP + 0xffffff4c]
0054481F  6A 00                     PUSH 0x0
00544821  52                        PUSH EDX
00544822  89 85 4C FF FF FF         MOV dword ptr [EBP + 0xffffff4c],EAX
00544828  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0054482E  E8 BD 8F 1E 00            CALL 0x0072d7f0
00544833  8B F0                     MOV ESI,EAX
00544835  83 C4 08                  ADD ESP,0x8
00544838  85 F6                     TEST ESI,ESI
0054483A  75 77                     JNZ 0x005448b3
0054483C  B9 08 00 00 00            MOV ECX,0x8
00544841  8D 7D DC                  LEA EDI,[EBP + -0x24]
00544844  F3 AB                     STOSD.REP ES:EDI
00544846  B9 13 00 00 00            MOV ECX,0x13
0054484B  8D 7D 90                  LEA EDI,[EBP + -0x70]
0054484E  F3 AB                     STOSD.REP ES:EDI
00544850  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00544853  8D 4D 90                  LEA ECX,[EBP + -0x70]
00544856  C7 45 90 08 00 00 00      MOV dword ptr [EBP + -0x70],0x8
0054485D  C7 45 A8 02 00 00 00      MOV dword ptr [EBP + -0x58],0x2
00544864  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
00544867  C7 45 EC 11 00 00 00      MOV dword ptr [EBP + -0x14],0x11
0054486E  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
00544871  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00544874  BE 36 81 80 00            MOV ESI,0x808136
LAB_00544879:
00544879  8B 96 C0 FE FF FF         MOV EDX,dword ptr [ESI + 0xfffffec0]
0054487F  8B 06                     MOV EAX,dword ptr [ESI]
00544881  8D 4D DC                  LEA ECX,[EBP + -0x24]
00544884  89 55 94                  MOV dword ptr [EBP + -0x6c],EDX
00544887  51                        PUSH ECX
00544888  6A 01                     PUSH 0x1
0054488A  6A 03                     PUSH 0x3
0054488C  8B CF                     MOV ECX,EDI
0054488E  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
00544891  E8 6A 17 1A 00            CALL 0x006e6000
00544896  83 C6 04                  ADD ESI,0x4
00544899  81 FE 46 81 80 00         CMP ESI,0x808146
0054489F  7C D8                     JL 0x00544879
005448A1  8B 95 4C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff4c]
005448A7  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005448AD  5F                        POP EDI
005448AE  5E                        POP ESI
005448AF  8B E5                     MOV ESP,EBP
005448B1  5D                        POP EBP
005448B2  C3                        RET
LAB_005448b3:
005448B3  8B 85 4C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff4c]
005448B9  68 EC 7E 7C 00            PUSH 0x7c7eec
005448BE  68 CC 4C 7A 00            PUSH 0x7a4ccc
005448C3  56                        PUSH ESI
005448C4  6A 00                     PUSH 0x0
005448C6  68 8F 01 00 00            PUSH 0x18f
005448CB  68 60 7D 7C 00            PUSH 0x7c7d60
005448D0  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005448D5  E8 F6 8B 16 00            CALL 0x006ad4d0
005448DA  83 C4 18                  ADD ESP,0x18
005448DD  85 C0                     TEST EAX,EAX
005448DF  74 01                     JZ 0x005448e2
005448E1  CC                        INT3
LAB_005448e2:
005448E2  68 90 01 00 00            PUSH 0x190
005448E7  68 60 7D 7C 00            PUSH 0x7c7d60
005448EC  6A 00                     PUSH 0x0
005448EE  56                        PUSH ESI
005448EF  E8 4C 15 16 00            CALL 0x006a5e40
005448F4  5F                        POP EDI
005448F5  5E                        POP ESI
005448F6  8B E5                     MOV ESP,EBP
005448F8  5D                        POP EBP
005448F9  C3                        RET
