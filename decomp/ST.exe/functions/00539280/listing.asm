FUN_00539280:
00539280  55                        PUSH EBP
00539281  8B EC                     MOV EBP,ESP
00539283  83 EC 48                  SUB ESP,0x48
00539286  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0053928B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0053928E  56                        PUSH ESI
0053928F  8D 55 BC                  LEA EDX,[EBP + -0x44]
00539292  8D 4D B8                  LEA ECX,[EBP + -0x48]
00539295  6A 00                     PUSH 0x0
00539297  52                        PUSH EDX
00539298  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0053929B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005392A1  E8 4A 45 1F 00            CALL 0x0072d7f0
005392A6  8B F0                     MOV ESI,EAX
005392A8  83 C4 08                  ADD ESP,0x8
005392AB  85 F6                     TEST ESI,ESI
005392AD  0F 85 21 01 00 00         JNZ 0x005393d4
005392B3  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005392B6  A1 30 67 80 00            MOV EAX,[0x00806730]
005392BB  89 35 E0 16 80 00         MOV dword ptr [0x008016e0],ESI
005392C1  83 C0 E4                  ADD EAX,-0x1c
005392C4  8B 4E 40                  MOV ECX,dword ptr [ESI + 0x40]
005392C7  89 46 3C                  MOV dword ptr [ESI + 0x3c],EAX
005392CA  8B 15 30 67 80 00         MOV EDX,dword ptr [0x00806730]
005392D0  2B C8                     SUB ECX,EAX
005392D2  03 CA                     ADD ECX,EDX
005392D4  89 8E 74 01 00 00         MOV dword ptr [ESI + 0x174],ECX
005392DA  8B 15 28 2A 80 00         MOV EDX,dword ptr [0x00802a28]
005392E0  8B 42 28                  MOV EAX,dword ptr [EDX + 0x28]
005392E3  50                        PUSH EAX
005392E4  68 9D 01 00 00            PUSH 0x19d
005392E9  E8 12 4C 1D 00            CALL 0x0070df00
005392EE  83 C4 08                  ADD ESP,0x8
005392F1  89 86 7C 01 00 00         MOV dword ptr [ESI + 0x17c],EAX
005392F7  C7 40 58 00 00 00 00      MOV dword ptr [EAX + 0x58],0x0
005392FE  C7 40 5C 00 00 00 00      MOV dword ptr [EAX + 0x5c],0x0
00539305  6A 01                     PUSH 0x1
00539307  6A 00                     PUSH 0x0
00539309  6A 00                     PUSH 0x0
0053930B  68 D8 74 7C 00            PUSH 0x7c74d8
00539310  E8 67 C4 EC FF            CALL 0x0040577c
00539315  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
0053931B  83 C4 08                  ADD ESP,0x8
0053931E  50                        PUSH EAX
0053931F  6A 01                     PUSH 0x1
00539321  E8 BA 89 1B 00            CALL 0x006f1ce0
00539326  8B 4E 68                  MOV ECX,dword ptr [ESI + 0x68]
00539329  50                        PUSH EAX
0053932A  6A 01                     PUSH 0x1
0053932C  6A 00                     PUSH 0x0
0053932E  6A 00                     PUSH 0x0
00539330  51                        PUSH ECX
00539331  89 86 80 01 00 00         MOV dword ptr [ESI + 0x180],EAX
00539337  E8 ED 9E EC FF            CALL 0x00403229
0053933C  8B 56 68                  MOV EDX,dword ptr [ESI + 0x68]
0053933F  83 C4 14                  ADD ESP,0x14
00539342  8B 8E 7C 01 00 00         MOV ECX,dword ptr [ESI + 0x17c]
00539348  6A 0C                     PUSH 0xc
0053934A  68 D1 00 00 00            PUSH 0xd1
0053934F  6A 02                     PUSH 0x2
00539351  6A 52                     PUSH 0x52
00539353  6A 00                     PUSH 0x0
00539355  52                        PUSH EDX
00539356  E8 35 77 1D 00            CALL 0x00710a90
0053935B  A1 18 76 80 00            MOV EAX,[0x00807618]
00539360  6A FF                     PUSH -0x1
00539362  6A FF                     PUSH -0x1
00539364  6A 00                     PUSH 0x0
00539366  6A FF                     PUSH -0x1
00539368  6A FE                     PUSH -0x2
0053936A  50                        PUSH EAX
0053936B  68 16 27 00 00            PUSH 0x2716
00539370  E8 CB 6D 17 00            CALL 0x006b0140
00539375  8B 8E 7C 01 00 00         MOV ECX,dword ptr [ESI + 0x17c]
0053937B  50                        PUSH EAX
0053937C  E8 EF 87 1D 00            CALL 0x00711b70
00539381  6A 00                     PUSH 0x0
00539383  68 94 38 7C 00            PUSH 0x7c3894
00539388  E8 EF C3 EC FF            CALL 0x0040577c
0053938D  83 C4 08                  ADD ESP,0x8
00539390  8B CE                     MOV ECX,ESI
00539392  6A 01                     PUSH 0x1
00539394  6A 00                     PUSH 0x0
00539396  6A 00                     PUSH 0x0
00539398  6A 00                     PUSH 0x0
0053939A  6A 00                     PUSH 0x0
0053939C  68 00 C0 00 00            PUSH 0xc000
005393A1  68 FF BF 00 00            PUSH 0xbfff
005393A6  50                        PUSH EAX
005393A7  6A 01                     PUSH 0x1
005393A9  6A 00                     PUSH 0x0
005393AB  6A 01                     PUSH 0x1
005393AD  68 8B 00 00 00            PUSH 0x8b
005393B2  68 15 01 00 00            PUSH 0x115
005393B7  6A 01                     PUSH 0x1
005393B9  6A 00                     PUSH 0x0
005393BB  E8 4D 9C EC FF            CALL 0x0040300d
005393C0  89 86 84 01 00 00         MOV dword ptr [ESI + 0x184],EAX
005393C6  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005393C9  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005393CF  5E                        POP ESI
005393D0  8B E5                     MOV ESP,EBP
005393D2  5D                        POP EBP
005393D3  C3                        RET
LAB_005393d4:
005393D4  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005393D7  68 B4 74 7C 00            PUSH 0x7c74b4
005393DC  68 CC 4C 7A 00            PUSH 0x7a4ccc
005393E1  56                        PUSH ESI
005393E2  6A 00                     PUSH 0x0
005393E4  6A 28                     PUSH 0x28
005393E6  68 90 74 7C 00            PUSH 0x7c7490
005393EB  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005393F1  E8 DA 40 17 00            CALL 0x006ad4d0
005393F6  83 C4 18                  ADD ESP,0x18
005393F9  85 C0                     TEST EAX,EAX
005393FB  74 01                     JZ 0x005393fe
005393FD  CC                        INT3
LAB_005393fe:
005393FE  6A 28                     PUSH 0x28
00539400  68 90 74 7C 00            PUSH 0x7c7490
00539405  6A 00                     PUSH 0x0
00539407  56                        PUSH ESI
00539408  E8 33 CA 16 00            CALL 0x006a5e40
0053940D  5E                        POP ESI
0053940E  8B E5                     MOV ESP,EBP
00539410  5D                        POP EBP
00539411  C3                        RET
