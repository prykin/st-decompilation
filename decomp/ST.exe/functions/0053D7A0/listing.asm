UPanelTy::PaintBut:
0053D7A0  55                        PUSH EBP
0053D7A1  8B EC                     MOV EBP,ESP
0053D7A3  83 EC 54                  SUB ESP,0x54
0053D7A6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0053D7A9  56                        PUSH ESI
0053D7AA  8B 71 3C                  MOV ESI,dword ptr [ECX + 0x3c]
0053D7AD  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0053D7B4  8B 40 18                  MOV EAX,dword ptr [EAX + 0x18]
0053D7B7  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0053D7BA  8B 10                     MOV EDX,dword ptr [EAX]
0053D7BC  2B D6                     SUB EDX,ESI
0053D7BE  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0053D7C1  8B 51 5C                  MOV EDX,dword ptr [ECX + 0x5c]
0053D7C4  85 D2                     TEST EDX,EDX
0053D7C6  75 0D                     JNZ 0x0053d7d5
0053D7C8  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
0053D7CB  8B 51 48                  MOV EDX,dword ptr [ECX + 0x48]
0053D7CE  03 C2                     ADD EAX,EDX
0053D7D0  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0053D7D3  EB 0B                     JMP 0x0053d7e0
LAB_0053d7d5:
0053D7D5  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0053D7D8  8B 41 44                  MOV EAX,dword ptr [ECX + 0x44]
0053D7DB  2B D0                     SUB EDX,EAX
0053D7DD  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_0053d7e0:
0053D7E0  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0053D7E3  85 C0                     TEST EAX,EAX
0053D7E5  0F 84 DB 00 00 00         JZ 0x0053d8c6
0053D7EB  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0053D7F0  8D 55 B0                  LEA EDX,[EBP + -0x50]
0053D7F3  8D 4D AC                  LEA ECX,[EBP + -0x54]
0053D7F6  6A 00                     PUSH 0x0
0053D7F8  52                        PUSH EDX
0053D7F9  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
0053D7FC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053D802  E8 E9 FF 1E 00            CALL 0x0072d7f0
0053D807  8B F0                     MOV ESI,EAX
0053D809  83 C4 08                  ADD ESP,0x8
0053D80C  85 F6                     TEST ESI,ESI
0053D80E  75 7D                     JNZ 0x0053d88d
0053D810  6A 01                     PUSH 0x1
0053D812  50                        PUSH EAX
0053D813  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0053D816  50                        PUSH EAX
0053D817  FF 55 14                  CALL dword ptr [EBP + 0x14]
0053D81A  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0053D81D  50                        PUSH EAX
0053D81E  6A 01                     PUSH 0x1
0053D820  51                        PUSH ECX
0053D821  E8 DA 53 1B 00            CALL 0x006f2c00
0053D826  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0053D829  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
0053D82F  83 C4 10                  ADD ESP,0x10
0053D832  50                        PUSH EAX
0053D833  56                        PUSH ESI
0053D834  E8 A7 44 1B 00            CALL 0x006f1ce0
0053D839  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0053D83C  50                        PUSH EAX
0053D83D  56                        PUSH ESI
0053D83E  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
0053D841  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0053D844  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0053D847  8B 4E 68                  MOV ECX,dword ptr [ESI + 0x68]
0053D84A  52                        PUSH EDX
0053D84B  50                        PUSH EAX
0053D84C  51                        PUSH ECX
0053D84D  E8 D7 59 EC FF            CALL 0x00403229
0053D852  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
0053D858  83 C4 14                  ADD ESP,0x14
0053D85B  8D 55 FC                  LEA EDX,[EBP + -0x4]
0053D85E  52                        PUSH EDX
0053D85F  E8 7C 48 1B 00            CALL 0x006f20e0
0053D864  8B 46 44                  MOV EAX,dword ptr [ESI + 0x44]
0053D867  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
0053D86A  8B 56 60                  MOV EDX,dword ptr [ESI + 0x60]
0053D86D  50                        PUSH EAX
0053D86E  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0053D873  51                        PUSH ECX
0053D874  6A FF                     PUSH -0x1
0053D876  52                        PUSH EDX
0053D877  50                        PUSH EAX
0053D878  E8 C3 5D 17 00            CALL 0x006b3640
0053D87D  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
0053D880  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053D886  5E                        POP ESI
0053D887  8B E5                     MOV ESP,EBP
0053D889  5D                        POP EBP
0053D88A  C2 10 00                  RET 0x10
LAB_0053d88d:
0053D88D  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
0053D890  68 98 78 7C 00            PUSH 0x7c7898
0053D895  68 CC 4C 7A 00            PUSH 0x7a4ccc
0053D89A  56                        PUSH ESI
0053D89B  6A 00                     PUSH 0x0
0053D89D  6A 24                     PUSH 0x24
0053D89F  68 70 78 7C 00            PUSH 0x7c7870
0053D8A4  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0053D8AA  E8 21 FC 16 00            CALL 0x006ad4d0
0053D8AF  83 C4 18                  ADD ESP,0x18
0053D8B2  85 C0                     TEST EAX,EAX
0053D8B4  74 01                     JZ 0x0053d8b7
0053D8B6  CC                        INT3
LAB_0053d8b7:
0053D8B7  6A 24                     PUSH 0x24
0053D8B9  68 70 78 7C 00            PUSH 0x7c7870
0053D8BE  6A 00                     PUSH 0x0
0053D8C0  56                        PUSH ESI
0053D8C1  E8 7A 85 16 00            CALL 0x006a5e40
LAB_0053d8c6:
0053D8C6  5E                        POP ESI
0053D8C7  8B E5                     MOV ESP,EBP
0053D8C9  5D                        POP EBP
0053D8CA  C2 10 00                  RET 0x10
