MAdvTy::InitMAdv:
00590170  55                        PUSH EBP
00590171  8B EC                     MOV EBP,ESP
00590173  83 EC 48                  SUB ESP,0x48
00590176  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0059017B  53                        PUSH EBX
0059017C  56                        PUSH ESI
0059017D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00590180  57                        PUSH EDI
00590181  8D 55 BC                  LEA EDX,[EBP + -0x44]
00590184  8D 4D B8                  LEA ECX,[EBP + -0x48]
00590187  6A 00                     PUSH 0x0
00590189  52                        PUSH EDX
0059018A  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0059018D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00590193  E8 58 D6 19 00            CALL 0x0072d7f0
00590198  8B F0                     MOV ESI,EAX
0059019A  83 C4 08                  ADD ESP,0x8
0059019D  85 F6                     TEST ESI,ESI
0059019F  0F 85 99 01 00 00         JNZ 0x0059033e
005901A5  A1 30 2A 80 00            MOV EAX,[0x00802a30]
005901AA  85 C0                     TEST EAX,EAX
005901AC  74 2A                     JZ 0x005901d8
005901AE  8B 88 A9 00 00 00         MOV ECX,dword ptr [EAX + 0xa9]
005901B4  85 C9                     TEST ECX,ECX
005901B6  74 14                     JZ 0x005901cc
005901B8  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
005901BB  83 F9 FF                  CMP ECX,-0x1
005901BE  74 18                     JZ 0x005901d8
005901C0  8B 40 60                  MOV EAX,dword ptr [EAX + 0x60]
005901C3  51                        PUSH ECX
005901C4  50                        PUSH EAX
005901C5  E8 26 39 12 00            CALL 0x006b3af0
005901CA  EB 0C                     JMP 0x005901d8
LAB_005901cc:
005901CC  8B 88 AD 00 00 00         MOV ECX,dword ptr [EAX + 0xad]
005901D2  51                        PUSH ECX
005901D3  E8 38 89 12 00            CALL 0x006b8b10
LAB_005901d8:
005901D8  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
005901DB  33 D2                     XOR EDX,EDX
005901DD  6A 01                     PUSH 0x1
005901DF  6A 00                     PUSH 0x0
005901E1  8A 43 5D                  MOV AL,byte ptr [EBX + 0x5d]
005901E4  84 C0                     TEST AL,AL
005901E6  0F 95 C2                  SETNZ DL
005901E9  52                        PUSH EDX
005901EA  6A 01                     PUSH 0x1
005901EC  68 5C BC 7C 00            PUSH 0x7cbc5c
005901F1  E8 0A 2A 16 00            CALL 0x006f2c00
005901F6  83 C4 0C                  ADD ESP,0xc
005901F9  50                        PUSH EAX
005901FA  A1 80 67 80 00            MOV EAX,[0x00806780]
005901FF  50                        PUSH EAX
00590200  E8 EB A7 17 00            CALL 0x0070a9f0
00590205  8D 53 18                  LEA EDX,[EBX + 0x18]
00590208  89 43 5E                  MOV dword ptr [EBX + 0x5e],EAX
0059020B  B9 08 00 00 00            MOV ECX,0x8
00590210  33 C0                     XOR EAX,EAX
00590212  8B FA                     MOV EDI,EDX
00590214  83 C4 10                  ADD ESP,0x10
00590217  F3 AB                     STOSD.REP ES:EDI
00590219  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
0059021C  52                        PUSH EDX
0059021D  89 4B 2C                  MOV dword ptr [EBX + 0x2c],ECX
00590220  6A 01                     PUSH 0x1
00590222  6A 03                     PUSH 0x3
00590224  8B CB                     MOV ECX,EBX
00590226  C7 43 28 13 00 00 00      MOV dword ptr [EBX + 0x28],0x13
0059022D  E8 CE 5D 15 00            CALL 0x006e6000
00590232  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
00590238  8B 8A E6 02 00 00         MOV ECX,dword ptr [EDX + 0x2e6]
0059023E  85 C9                     TEST ECX,ECX
00590240  74 1B                     JZ 0x0059025d
00590242  6A 01                     PUSH 0x1
00590244  6A 00                     PUSH 0x0
00590246  6A 00                     PUSH 0x0
00590248  E8 58 1D E7 FF            CALL 0x00401fa5
0059024D  A1 6C 17 81 00            MOV EAX,[0x0081176c]
00590252  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
00590258  E8 D1 43 E7 FF            CALL 0x0040462e
LAB_0059025d:
0059025D  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
00590263  6A 00                     PUSH 0x0
00590265  6A 01                     PUSH 0x1
00590267  51                        PUSH ECX
00590268  E8 D6 1A E7 FF            CALL 0x00401d43
0059026D  83 C4 0C                  ADD ESP,0xc
00590270  8B CB                     MOV ECX,EBX
00590272  E8 3B 38 E7 FF            CALL 0x00403ab2
00590277  8B 53 5E                  MOV EDX,dword ptr [EBX + 0x5e]
0059027A  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0059027F  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
00590285  6A 00                     PUSH 0x0
00590287  6A 02                     PUSH 0x2
00590289  6A 0A                     PUSH 0xa
0059028B  52                        PUSH EDX
0059028C  50                        PUSH EAX
0059028D  51                        PUSH ECX
0059028E  E8 F7 41 E7 FF            CALL 0x0040448a
00590293  8B 35 30 2A 80 00         MOV ESI,dword ptr [0x00802a30]
00590299  83 C4 18                  ADD ESP,0x18
0059029C  85 F6                     TEST ESI,ESI
0059029E  74 4D                     JZ 0x005902ed
005902A0  8B 96 C9 00 00 00         MOV EDX,dword ptr [ESI + 0xc9]
005902A6  8B 86 C5 00 00 00         MOV EAX,dword ptr [ESI + 0xc5]
005902AC  52                        PUSH EDX
005902AD  50                        PUSH EAX
005902AE  6A 00                     PUSH 0x0
005902B0  8B CE                     MOV ECX,ESI
005902B2  C6 86 93 04 00 00 01      MOV byte ptr [ESI + 0x493],0x1
005902B9  66 C7 86 94 04 00 00 FF FF  MOV word ptr [ESI + 0x494],0xffff
005902C2  E8 B7 4D E7 FF            CALL 0x0040507e
005902C7  8B 8E C9 00 00 00         MOV ECX,dword ptr [ESI + 0xc9]
005902CD  8B 96 C5 00 00 00         MOV EDX,dword ptr [ESI + 0xc5]
005902D3  51                        PUSH ECX
005902D4  52                        PUSH EDX
005902D5  8B CE                     MOV ECX,ESI
005902D7  E8 42 21 E7 FF            CALL 0x0040241e
005902DC  C6 86 D2 00 00 00 00      MOV byte ptr [ESI + 0xd2],0x0
005902E3  C7 86 DF 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4df],0xffffffff
LAB_005902ed:
005902ED  6A 00                     PUSH 0x0
005902EF  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
005902F2  6A 00                     PUSH 0x0
005902F4  6A 00                     PUSH 0x0
005902F6  6A 00                     PUSH 0x0
005902F8  6A 00                     PUSH 0x0
005902FA  6A 00                     PUSH 0x0
005902FC  6A 01                     PUSH 0x1
005902FE  6A 02                     PUSH 0x2
00590300  6A 64                     PUSH 0x64
00590302  6A 02                     PUSH 0x2
00590304  50                        PUSH EAX
00590305  6A 01                     PUSH 0x1
00590307  E8 B3 2A E7 FF            CALL 0x00402dbf
0059030C  6A 00                     PUSH 0x0
0059030E  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
00590311  6A 00                     PUSH 0x0
00590313  6A 00                     PUSH 0x0
00590315  6A 00                     PUSH 0x0
00590317  6A 00                     PUSH 0x0
00590319  6A 00                     PUSH 0x0
0059031B  6A 1C                     PUSH 0x1c
0059031D  6A 02                     PUSH 0x2
0059031F  6A 62                     PUSH 0x62
00590321  6A 02                     PUSH 0x2
00590323  51                        PUSH ECX
00590324  6A 01                     PUSH 0x1
00590326  E8 94 2A E7 FF            CALL 0x00402dbf
0059032B  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0059032E  83 C4 60                  ADD ESP,0x60
00590331  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00590337  5F                        POP EDI
00590338  5E                        POP ESI
00590339  5B                        POP EBX
0059033A  8B E5                     MOV ESP,EBP
0059033C  5D                        POP EBP
0059033D  C3                        RET
LAB_0059033e:
0059033E  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00590341  68 48 BC 7C 00            PUSH 0x7cbc48
00590346  68 CC 4C 7A 00            PUSH 0x7a4ccc
0059034B  56                        PUSH ESI
0059034C  6A 00                     PUSH 0x0
0059034E  6A 1F                     PUSH 0x1f
00590350  68 24 BC 7C 00            PUSH 0x7cbc24
00590355  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0059035A  E8 71 D1 11 00            CALL 0x006ad4d0
0059035F  83 C4 18                  ADD ESP,0x18
00590362  85 C0                     TEST EAX,EAX
00590364  74 01                     JZ 0x00590367
00590366  CC                        INT3
LAB_00590367:
00590367  6A 1F                     PUSH 0x1f
00590369  68 24 BC 7C 00            PUSH 0x7cbc24
0059036E  6A 00                     PUSH 0x0
00590370  56                        PUSH ESI
00590371  E8 CA 5A 11 00            CALL 0x006a5e40
00590376  5F                        POP EDI
00590377  5E                        POP ESI
00590378  5B                        POP EBX
00590379  8B E5                     MOV ESP,EBP
0059037B  5D                        POP EBP
0059037C  C3                        RET
