FUN_00568850:
00568850  55                        PUSH EBP
00568851  8B EC                     MOV EBP,ESP
00568853  83 EC 4C                  SUB ESP,0x4c
00568856  8B 81 8B 0F 00 00         MOV EAX,dword ptr [ECX + 0xf8b]
0056885C  53                        PUSH EBX
0056885D  56                        PUSH ESI
0056885E  57                        PUSH EDI
0056885F  85 C0                     TEST EAX,EAX
00568861  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00568864  0F 84 96 00 00 00         JZ 0x00568900
0056886A  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0056886F  8D 55 B8                  LEA EDX,[EBP + -0x48]
00568872  8D 4D B4                  LEA ECX,[EBP + -0x4c]
00568875  6A 00                     PUSH 0x0
00568877  52                        PUSH EDX
00568878  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
0056887B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00568881  E8 6A 4F 1C 00            CALL 0x0072d7f0
00568886  83 C4 08                  ADD ESP,0x8
00568889  85 C0                     TEST EAX,EAX
0056888B  75 6A                     JNZ 0x005688f7
0056888D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00568890  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00568893  BE 02 00 00 00            MOV ESI,0x2
00568898  8D B8 2B 0E 00 00         LEA EDI,[EAX + 0xe2b]
LAB_0056889e:
0056889E  8D 4D F8                  LEA ECX,[EBP + -0x8]
005688A1  6A 00                     PUSH 0x0
005688A3  51                        PUSH ECX
005688A4  56                        PUSH ESI
005688A5  E8 56 96 15 00            CALL 0x006c1f00
005688AA  83 7D F8 01               CMP dword ptr [EBP + -0x8],0x1
005688AE  75 2D                     JNZ 0x005688dd
005688B0  83 FE 04                  CMP ESI,0x4
005688B3  7C 05                     JL 0x005688ba
005688B5  83 FE 0A                  CMP ESI,0xa
005688B8  7E 14                     JLE 0x005688ce
LAB_005688ba:
005688BA  83 FE 12                  CMP ESI,0x12
005688BD  7C 05                     JL 0x005688c4
005688BF  83 FE 14                  CMP ESI,0x14
005688C2  7E 0A                     JLE 0x005688ce
LAB_005688c4:
005688C4  83 FE 0B                  CMP ESI,0xb
005688C7  7C 14                     JL 0x005688dd
005688C9  83 FE 11                  CMP ESI,0x11
005688CC  7F 0F                     JG 0x005688dd
LAB_005688ce:
005688CE  8B 17                     MOV EDX,dword ptr [EDI]
005688D0  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
005688D3  3B D0                     CMP EDX,EAX
005688D5  75 06                     JNZ 0x005688dd
005688D7  56                        PUSH ESI
005688D8  E8 C3 92 15 00            CALL 0x006c1ba0
LAB_005688dd:
005688DD  46                        INC ESI
005688DE  83 C7 0C                  ADD EDI,0xc
005688E1  83 FE 20                  CMP ESI,0x20
005688E4  7C B8                     JL 0x0056889e
005688E6  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
005688E9  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005688EE  5F                        POP EDI
005688EF  5E                        POP ESI
005688F0  5B                        POP EBX
005688F1  8B E5                     MOV ESP,EBP
005688F3  5D                        POP EBP
005688F4  C2 04 00                  RET 0x4
LAB_005688f7:
005688F7  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
005688FA  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
LAB_00568900:
00568900  5F                        POP EDI
00568901  5E                        POP ESI
00568902  5B                        POP EBX
00568903  8B E5                     MOV ESP,EBP
00568905  5D                        POP EBP
00568906  C2 04 00                  RET 0x4
