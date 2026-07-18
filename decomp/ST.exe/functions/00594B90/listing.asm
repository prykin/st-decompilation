FSGSTy::OutChSlProc:
00594B90  55                        PUSH EBP
00594B91  8B EC                     MOV EBP,ESP
00594B93  83 EC 4C                  SUB ESP,0x4c
00594B96  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
00594B99  53                        PUSH EBX
00594B9A  56                        PUSH ESI
00594B9B  57                        PUSH EDI
00594B9C  85 C0                     TEST EAX,EAX
00594B9E  0F 84 33 01 00 00         JZ 0x00594cd7
00594BA4  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00594BA7  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00594BAC  8D 55 B8                  LEA EDX,[EBP + -0x48]
00594BAF  8D 4D B4                  LEA ECX,[EBP + -0x4c]
00594BB2  6A 00                     PUSH 0x0
00594BB4  52                        PUSH EDX
00594BB5  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00594BB8  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00594BBE  E8 2D 8C 19 00            CALL 0x0072d7f0
00594BC3  8B F0                     MOV ESI,EAX
00594BC5  83 C4 08                  ADD ESP,0x8
00594BC8  85 F6                     TEST ESI,ESI
00594BCA  0F 85 CE 00 00 00         JNZ 0x00594c9e
00594BD0  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00594BD3  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
00594BD6  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00594BD9  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
00594BDC  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00594BDF  8D 43 04                  LEA EAX,[EBX + 0x4]
00594BE2  50                        PUSH EAX
00594BE3  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00594BE6  51                        PUSH ECX
00594BE7  52                        PUSH EDX
00594BE8  50                        PUSH EAX
00594BE9  56                        PUSH ESI
00594BEA  57                        PUSH EDI
00594BEB  E8 00 1D 13 00            CALL 0x006c68f0
00594BF0  8B 0B                     MOV ECX,dword ptr [EBX]
00594BF2  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
00594BF5  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00594BF8  51                        PUSH ECX
00594BF9  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00594BFC  52                        PUSH EDX
00594BFD  50                        PUSH EAX
00594BFE  51                        PUSH ECX
00594BFF  56                        PUSH ESI
00594C00  57                        PUSH EDI
00594C01  E8 4A 1C 13 00            CALL 0x006c6850
00594C06  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
00594C09  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00594C0C  6A 00                     PUSH 0x0
00594C0E  6A 03                     PUSH 0x3
00594C10  8D 42 9E                  LEA EAX,[EDX + -0x62]
00594C13  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00594C16  83 C1 26                  ADD ECX,0x26
00594C19  50                        PUSH EAX
00594C1A  8D 54 16 EB               LEA EDX,[ESI + EDX*0x1 + -0x15]
00594C1E  6A 07                     PUSH 0x7
00594C20  51                        PUSH ECX
00594C21  52                        PUSH EDX
00594C22  57                        PUSH EDI
00594C23  E8 38 1A 13 00            CALL 0x006c6660
00594C28  8B 03                     MOV EAX,dword ptr [EBX]
00594C2A  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
00594C2D  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00594C30  50                        PUSH EAX
00594C31  8D 41 9E                  LEA EAX,[ECX + -0x62]
00594C34  6A 03                     PUSH 0x3
00594C36  50                        PUSH EAX
00594C37  8D 42 26                  LEA EAX,[EDX + 0x26]
00594C3A  6A 07                     PUSH 0x7
00594C3C  50                        PUSH EAX
00594C3D  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00594C40  8D 44 06 EB               LEA EAX,[ESI + EAX*0x1 + -0x15]
00594C44  50                        PUSH EAX
00594C45  57                        PUSH EDI
00594C46  E8 25 18 13 00            CALL 0x006c6470
00594C4B  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00594C4E  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
00594C51  8D 44 11 EA               LEA EAX,[ECX + EDX*0x1 + -0x16]
00594C55  8B 0B                     MOV ECX,dword ptr [EBX]
00594C57  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00594C5A  51                        PUSH ECX
00594C5B  50                        PUSH EAX
00594C5C  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00594C5F  8D 4C 16 FF               LEA ECX,[ESI + EDX*0x1 + -0x1]
00594C63  51                        PUSH ECX
00594C64  50                        PUSH EAX
00594C65  56                        PUSH ESI
00594C66  57                        PUSH EDI
00594C67  E8 44 07 13 00            CALL 0x006c53b0
00594C6C  8B 13                     MOV EDX,dword ptr [EBX]
00594C6E  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00594C71  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
00594C74  52                        PUSH EDX
00594C75  81 C6 68 01 00 00         ADD ESI,0x168
00594C7B  8D 54 08 FF               LEA EDX,[EAX + ECX*0x1 + -0x1]
00594C7F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00594C82  52                        PUSH EDX
00594C83  56                        PUSH ESI
00594C84  50                        PUSH EAX
00594C85  56                        PUSH ESI
00594C86  57                        PUSH EDI
00594C87  E8 24 07 13 00            CALL 0x006c53b0
00594C8C  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
00594C8F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00594C95  5F                        POP EDI
00594C96  5E                        POP ESI
00594C97  5B                        POP EBX
00594C98  8B E5                     MOV ESP,EBP
00594C9A  5D                        POP EBP
00594C9B  C2 20 00                  RET 0x20
LAB_00594c9e:
00594C9E  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00594CA1  68 98 BF 7C 00            PUSH 0x7cbf98
00594CA6  68 CC 4C 7A 00            PUSH 0x7a4ccc
00594CAB  56                        PUSH ESI
00594CAC  6A 00                     PUSH 0x0
00594CAE  6A 66                     PUSH 0x66
00594CB0  68 70 BF 7C 00            PUSH 0x7cbf70
00594CB5  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00594CBB  E8 10 88 11 00            CALL 0x006ad4d0
00594CC0  83 C4 18                  ADD ESP,0x18
00594CC3  85 C0                     TEST EAX,EAX
00594CC5  74 01                     JZ 0x00594cc8
00594CC7  CC                        INT3
LAB_00594cc8:
00594CC8  6A 66                     PUSH 0x66
00594CCA  68 70 BF 7C 00            PUSH 0x7cbf70
00594CCF  6A 00                     PUSH 0x0
00594CD1  56                        PUSH ESI
00594CD2  E8 69 11 11 00            CALL 0x006a5e40
LAB_00594cd7:
00594CD7  5F                        POP EDI
00594CD8  5E                        POP ESI
00594CD9  5B                        POP EBX
00594CDA  8B E5                     MOV ESP,EBP
00594CDC  5D                        POP EBP
00594CDD  C2 20 00                  RET 0x20
