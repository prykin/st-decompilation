MAdvTy::DoneMAdv:
00590410  55                        PUSH EBP
00590411  8B EC                     MOV EBP,ESP
00590413  83 EC 48                  SUB ESP,0x48
00590416  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0059041B  56                        PUSH ESI
0059041C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0059041F  57                        PUSH EDI
00590420  8D 55 BC                  LEA EDX,[EBP + -0x44]
00590423  8D 4D B8                  LEA ECX,[EBP + -0x48]
00590426  6A 00                     PUSH 0x0
00590428  52                        PUSH EDX
00590429  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0059042C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00590432  E8 B9 D3 19 00            CALL 0x0072d7f0
00590437  8B F0                     MOV ESI,EAX
00590439  83 C4 08                  ADD ESP,0x8
0059043C  85 F6                     TEST ESI,ESI
0059043E  0F 85 AA 00 00 00         JNZ 0x005904ee
00590444  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00590447  50                        PUSH EAX
00590448  50                        PUSH EAX
00590449  50                        PUSH EAX
0059044A  50                        PUSH EAX
0059044B  50                        PUSH EAX
0059044C  50                        PUSH EAX
0059044D  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00590450  6A 01                     PUSH 0x1
00590452  6A 02                     PUSH 0x2
00590454  6A 64                     PUSH 0x64
00590456  6A 02                     PUSH 0x2
00590458  50                        PUSH EAX
00590459  6A 00                     PUSH 0x0
0059045B  E8 5F 29 E7 FF            CALL 0x00402dbf
00590460  6A 00                     PUSH 0x0
00590462  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
00590465  6A 00                     PUSH 0x0
00590467  6A 00                     PUSH 0x0
00590469  6A 00                     PUSH 0x0
0059046B  6A 00                     PUSH 0x0
0059046D  6A 00                     PUSH 0x0
0059046F  6A 1C                     PUSH 0x1c
00590471  6A 02                     PUSH 0x2
00590473  6A 62                     PUSH 0x62
00590475  6A 02                     PUSH 0x2
00590477  51                        PUSH ECX
00590478  6A 00                     PUSH 0x0
0059047A  E8 40 29 E7 FF            CALL 0x00402dbf
0059047F  8D 56 18                  LEA EDX,[ESI + 0x18]
00590482  83 C4 60                  ADD ESP,0x60
00590485  B9 08 00 00 00            MOV ECX,0x8
0059048A  33 C0                     XOR EAX,EAX
0059048C  8B FA                     MOV EDI,EDX
0059048E  52                        PUSH EDX
0059048F  F3 AB                     STOSD.REP ES:EDI
00590491  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00590494  6A 01                     PUSH 0x1
00590496  6A 03                     PUSH 0x3
00590498  8B CE                     MOV ECX,ESI
0059049A  C7 46 28 14 00 00 00      MOV dword ptr [ESI + 0x28],0x14
005904A1  89 46 2C                  MOV dword ptr [ESI + 0x2c],EAX
005904A4  E8 57 5B 15 00            CALL 0x006e6000
005904A9  8D 4E 5E                  LEA ECX,[ESI + 0x5e]
005904AC  51                        PUSH ECX
005904AD  8B 0D 80 67 80 00         MOV ECX,dword ptr [0x00806780]
005904B3  E8 28 1C 16 00            CALL 0x006f20e0
005904B8  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
005904BE  6A 02                     PUSH 0x2
005904C0  6A 0A                     PUSH 0xa
005904C2  52                        PUSH EDX
005904C3  E8 7B 18 E7 FF            CALL 0x00401d43
005904C8  8B 46 48                  MOV EAX,dword ptr [ESI + 0x48]
005904CB  83 C4 0C                  ADD ESP,0xc
005904CE  85 C0                     TEST EAX,EAX
005904D0  74 0E                     JZ 0x005904e0
005904D2  83 C6 38                  ADD ESI,0x38
005904D5  B9 20 76 80 00            MOV ECX,0x807620
005904DA  56                        PUSH ESI
005904DB  E8 70 36 15 00            CALL 0x006e3b50
LAB_005904e0:
005904E0  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005904E3  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005904E8  5F                        POP EDI
005904E9  5E                        POP ESI
005904EA  8B E5                     MOV ESP,EBP
005904EC  5D                        POP EBP
005904ED  C3                        RET
LAB_005904ee:
005904EE  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005904F1  68 60 BC 7C 00            PUSH 0x7cbc60
005904F6  68 CC 4C 7A 00            PUSH 0x7a4ccc
005904FB  56                        PUSH ESI
005904FC  6A 00                     PUSH 0x0
005904FE  6A 36                     PUSH 0x36
00590500  68 24 BC 7C 00            PUSH 0x7cbc24
00590505  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0059050B  E8 C0 CF 11 00            CALL 0x006ad4d0
00590510  83 C4 18                  ADD ESP,0x18
00590513  85 C0                     TEST EAX,EAX
00590515  74 01                     JZ 0x00590518
00590517  CC                        INT3
LAB_00590518:
00590518  6A 36                     PUSH 0x36
0059051A  68 24 BC 7C 00            PUSH 0x7cbc24
0059051F  6A 00                     PUSH 0x0
00590521  56                        PUSH ESI
00590522  E8 19 59 11 00            CALL 0x006a5e40
00590527  5F                        POP EDI
00590528  5E                        POP ESI
00590529  8B E5                     MOV ESP,EBP
0059052B  5D                        POP EBP
0059052C  C3                        RET
