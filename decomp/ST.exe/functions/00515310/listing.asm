HelpPanelTy::DrawTitle:
00515310  55                        PUSH EBP
00515311  8B EC                     MOV EBP,ESP
00515313  83 EC 4C                  SUB ESP,0x4c
00515316  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0051531B  53                        PUSH EBX
0051531C  56                        PUSH ESI
0051531D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00515320  57                        PUSH EDI
00515321  8D 55 B8                  LEA EDX,[EBP + -0x48]
00515324  8D 4D B4                  LEA ECX,[EBP + -0x4c]
00515327  6A 00                     PUSH 0x0
00515329  52                        PUSH EDX
0051532A  C7 45 FC 16 00 00 00      MOV dword ptr [EBP + -0x4],0x16
00515331  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00515334  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0051533A  E8 B1 84 21 00            CALL 0x0072d7f0
0051533F  8B F0                     MOV ESI,EAX
00515341  83 C4 08                  ADD ESP,0x8
00515344  85 F6                     TEST ESI,ESI
00515346  0F 85 04 02 00 00         JNZ 0x00515550
0051534C  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
0051534F  8B 83 9C 01 00 00         MOV EAX,dword ptr [EBX + 0x19c]
00515355  85 C0                     TEST EAX,EAX
00515357  74 09                     JZ 0x00515362
00515359  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
0051535C  50                        PUSH EAX
0051535D  E8 4E 03 1D 00            CALL 0x006e56b0
LAB_00515362:
00515362  8B 83 D7 01 00 00         MOV EAX,dword ptr [EBX + 0x1d7]
00515368  68 18 01 00 00            PUSH 0x118
0051536D  68 B8 01 00 00            PUSH 0x1b8
00515372  6A 16                     PUSH 0x16
00515374  C7 40 0C 00 00 00 00      MOV dword ptr [EAX + 0xc],0x0
0051537B  8B 8B DC 01 00 00         MOV ECX,dword ptr [EBX + 0x1dc]
00515381  8B 53 68                  MOV EDX,dword ptr [EBX + 0x68]
00515384  6A 21                     PUSH 0x21
00515386  6A 00                     PUSH 0x0
00515388  51                        PUSH ECX
00515389  6A 16                     PUSH 0x16
0051538B  6A 21                     PUSH 0x21
0051538D  6A 00                     PUSH 0x0
0051538F  52                        PUSH EDX
00515390  C6 83 DB 01 00 00 00      MOV byte ptr [EBX + 0x1db],0x0
00515397  E8 54 02 1A 00            CALL 0x006b55f0
0051539C  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0051539F  8B 43 68                  MOV EAX,dword ptr [EBX + 0x68]
005153A2  8B 8B E4 01 00 00         MOV ECX,dword ptr [EBX + 0x1e4]
005153A8  6A 14                     PUSH 0x14
005153AA  68 9C 01 00 00            PUSH 0x19c
005153AF  56                        PUSH ESI
005153B0  6A 21                     PUSH 0x21
005153B2  6A 00                     PUSH 0x0
005153B4  50                        PUSH EAX
005153B5  E8 D6 B6 1F 00            CALL 0x00710a90
005153BA  A0 4E 87 80 00            MOV AL,[0x0080874e]
005153BF  3C 03                     CMP AL,0x3
005153C1  75 07                     JNZ 0x005153ca
005153C3  B8 05 00 00 00            MOV EAX,0x5
005153C8  EB 0A                     JMP 0x005153d4
LAB_005153ca:
005153CA  FE C8                     DEC AL
005153CC  F6 D8                     NEG AL
005153CE  1B C0                     SBB EAX,EAX
005153D0  83 E0 06                  AND EAX,0x6
005153D3  40                        INC EAX
LAB_005153d4:
005153D4  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005153DA  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005153DD  50                        PUSH EAX
005153DE  6A FF                     PUSH -0x1
005153E0  6A FF                     PUSH -0x1
005153E2  51                        PUSH ECX
005153E3  52                        PUSH EDX
005153E4  E8 57 AD 19 00            CALL 0x006b0140
005153E9  8B 8B E4 01 00 00         MOV ECX,dword ptr [EBX + 0x1e4]
005153EF  50                        PUSH EAX
005153F0  E8 CB C5 1F 00            CALL 0x007119c0
005153F5  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005153F8  83 C6 14                  ADD ESI,0x14
005153FB  85 C0                     TEST EAX,EAX
005153FD  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00515400  74 59                     JZ 0x0051545b
00515402  48                        DEC EAX
00515403  74 11                     JZ 0x00515416
00515405  48                        DEC EAX
00515406  74 07                     JZ 0x0051540f
00515408  BF 06 56 00 00            MOV EDI,0x5606
0051540D  EB 0C                     JMP 0x0051541b
LAB_0051540f:
0051540F  BF 05 56 00 00            MOV EDI,0x5605
00515414  EB 05                     JMP 0x0051541b
LAB_00515416:
00515416  BF 04 56 00 00            MOV EDI,0x5604
LAB_0051541b:
0051541B  8B 43 68                  MOV EAX,dword ptr [EBX + 0x68]
0051541E  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00515424  6A 0F                     PUSH 0xf
00515426  68 9C 01 00 00            PUSH 0x19c
0051542B  56                        PUSH ESI
0051542C  6A 21                     PUSH 0x21
0051542E  6A 00                     PUSH 0x0
00515430  50                        PUSH EAX
00515431  E8 5A B6 1F 00            CALL 0x00710a90
00515436  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0051543C  6A 03                     PUSH 0x3
0051543E  6A FF                     PUSH -0x1
00515440  6A FF                     PUSH -0x1
00515442  51                        PUSH ECX
00515443  57                        PUSH EDI
00515444  E8 F7 AC 19 00            CALL 0x006b0140
00515449  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051544F  50                        PUSH EAX
00515450  E8 6B C5 1F 00            CALL 0x007119c0
00515455  83 C6 0F                  ADD ESI,0xf
00515458  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
LAB_0051545b:
0051545B  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0051545E  85 FF                     TEST EDI,EDI
00515460  0F 84 99 00 00 00         JZ 0x005154ff
00515466  8B 53 68                  MOV EDX,dword ptr [EBX + 0x68]
00515469  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051546F  6A 0F                     PUSH 0xf
00515471  68 9C 01 00 00            PUSH 0x19c
00515476  56                        PUSH ESI
00515477  6A 21                     PUSH 0x21
00515479  6A 00                     PUSH 0x0
0051547B  52                        PUSH EDX
0051547C  E8 0F B6 1F 00            CALL 0x00710a90
00515481  A1 18 76 80 00            MOV EAX,[0x00807618]
00515486  50                        PUSH EAX
00515487  57                        PUSH EDI
00515488  E8 B3 AC 19 00            CALL 0x006b0140
0051548D  8B F8                     MOV EDI,EAX
0051548F  83 C9 FF                  OR ECX,0xffffffff
00515492  33 C0                     XOR EAX,EAX
00515494  6A 0A                     PUSH 0xa
00515496  F2 AE                     SCASB.REPNE ES:EDI
00515498  F7 D1                     NOT ECX
0051549A  2B F9                     SUB EDI,ECX
0051549C  68 3A F3 80 00            PUSH 0x80f33a
005154A1  8B D1                     MOV EDX,ECX
005154A3  8B F7                     MOV ESI,EDI
005154A5  BF 3A F3 80 00            MOV EDI,0x80f33a
005154AA  C1 E9 02                  SHR ECX,0x2
005154AD  F3 A5                     MOVSD.REP ES:EDI,ESI
005154AF  8B CA                     MOV ECX,EDX
005154B1  83 E1 03                  AND ECX,0x3
005154B4  F3 A4                     MOVSB.REP ES:EDI,ESI
005154B6  E8 A5 90 21 00            CALL 0x0072e560
005154BB  83 C4 08                  ADD ESP,0x8
005154BE  85 C0                     TEST EAX,EAX
005154C0  74 12                     JZ 0x005154d4
LAB_005154c2:
005154C2  6A 0A                     PUSH 0xa
005154C4  50                        PUSH EAX
005154C5  C6 00 20                  MOV byte ptr [EAX],0x20
005154C8  E8 93 90 21 00            CALL 0x0072e560
005154CD  83 C4 08                  ADD ESP,0x8
005154D0  85 C0                     TEST EAX,EAX
005154D2  75 EE                     JNZ 0x005154c2
LAB_005154d4:
005154D4  8A 0D 4E 87 80 00         MOV CL,byte ptr [0x0080874e]
005154DA  33 C0                     XOR EAX,EAX
005154DC  80 F9 03                  CMP CL,0x3
005154DF  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
005154E5  0F 95 C0                  SETNZ AL
005154E8  48                        DEC EAX
005154E9  83 E0 05                  AND EAX,0x5
005154EC  50                        PUSH EAX
005154ED  6A FF                     PUSH -0x1
005154EF  6A FF                     PUSH -0x1
005154F1  68 3A F3 80 00            PUSH 0x80f33a
005154F6  E8 C5 C4 1F 00            CALL 0x007119c0
005154FB  83 45 FC 0F               ADD dword ptr [EBP + -0x4],0xf
LAB_005154ff:
005154FF  8B 9B 18 02 00 00         MOV EBX,dword ptr [EBX + 0x218]
00515505  8B 73 14                  MOV ESI,dword ptr [EBX + 0x14]
00515508  85 F6                     TEST ESI,ESI
0051550A  75 18                     JNZ 0x00515524
0051550C  66 8B 73 0E               MOV SI,word ptr [EBX + 0xe]
00515510  0F AF 73 04               IMUL ESI,dword ptr [EBX + 0x4]
00515514  83 C6 1F                  ADD ESI,0x1f
00515517  C1 EE 03                  SHR ESI,0x3
0051551A  81 E6 FC FF FF 1F         AND ESI,0x1ffffffc
00515520  0F AF 73 08               IMUL ESI,dword ptr [EBX + 0x8]
LAB_00515524:
00515524  53                        PUSH EBX
00515525  E8 76 FA 19 00            CALL 0x006b4fa0
0051552A  8B CE                     MOV ECX,ESI
0051552C  8B F8                     MOV EDI,EAX
0051552E  8B D1                     MOV EDX,ECX
00515530  83 C8 FF                  OR EAX,0xffffffff
00515533  C1 E9 02                  SHR ECX,0x2
00515536  F3 AB                     STOSD.REP ES:EDI
00515538  8B CA                     MOV ECX,EDX
0051553A  83 E1 03                  AND ECX,0x3
0051553D  F3 AA                     STOSB.REP ES:EDI
0051553F  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
00515542  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00515547  5F                        POP EDI
00515548  5E                        POP ESI
00515549  5B                        POP EBX
0051554A  8B E5                     MOV ESP,EBP
0051554C  5D                        POP EBP
0051554D  C2 0C 00                  RET 0xc
LAB_00515550:
00515550  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
00515553  68 6C 3B 7C 00            PUSH 0x7c3b6c
00515558  68 CC 4C 7A 00            PUSH 0x7a4ccc
0051555D  56                        PUSH ESI
0051555E  6A 00                     PUSH 0x0
00515560  68 D3 03 00 00            PUSH 0x3d3
00515565  68 3C 38 7C 00            PUSH 0x7c383c
0051556A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00515570  E8 5B 7F 19 00            CALL 0x006ad4d0
00515575  83 C4 18                  ADD ESP,0x18
00515578  85 C0                     TEST EAX,EAX
0051557A  74 01                     JZ 0x0051557d
0051557C  CC                        INT3
LAB_0051557d:
0051557D  68 D3 03 00 00            PUSH 0x3d3
00515582  68 3C 38 7C 00            PUSH 0x7c383c
00515587  6A 00                     PUSH 0x0
00515589  56                        PUSH ESI
0051558A  E8 B1 08 19 00            CALL 0x006a5e40
0051558F  5F                        POP EDI
00515590  5E                        POP ESI
00515591  5B                        POP EBX
00515592  8B E5                     MOV ESP,EBP
00515594  5D                        POP EBP
00515595  C2 0C 00                  RET 0xc
