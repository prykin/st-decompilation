FUN_005395b0:
005395B0  55                        PUSH EBP
005395B1  8B EC                     MOV EBP,ESP
005395B3  83 EC 48                  SUB ESP,0x48
005395B6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005395BB  56                        PUSH ESI
005395BC  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005395BF  57                        PUSH EDI
005395C0  8D 55 BC                  LEA EDX,[EBP + -0x44]
005395C3  8D 4D B8                  LEA ECX,[EBP + -0x48]
005395C6  6A 00                     PUSH 0x0
005395C8  52                        PUSH EDX
005395C9  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005395CC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005395D2  E8 19 42 1F 00            CALL 0x0072d7f0
005395D7  8B F0                     MOV ESI,EAX
005395D9  83 C4 08                  ADD ESP,0x8
005395DC  85 F6                     TEST ESI,ESI
005395DE  75 67                     JNZ 0x00539647
005395E0  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005395E3  66 8B 86 72 01 00 00      MOV AX,word ptr [ESI + 0x172]
005395EA  48                        DEC EAX
005395EB  83 F8 03                  CMP EAX,0x3
005395EE  77 47                     JA 0x00539637
005395F0  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
switchD_005395f3::switchD:
005395F3  FF 24 85 88 96 53 00      JMP dword ptr [EAX*0x4 + 0x539688]
switchD_005395f3::caseD_1:
005395FA  85 FF                     TEST EDI,EDI
005395FC  75 39                     JNZ 0x00539637
005395FE  57                        PUSH EDI
005395FF  8B CE                     MOV ECX,ESI
00539601  E8 9D B8 EC FF            CALL 0x00404ea3
switchD_005395f3::caseD_3:
00539606  85 FF                     TEST EDI,EDI
00539608  75 2D                     JNZ 0x00539637
0053960A  66 C7 86 72 01 00 00 04 00  MOV word ptr [ESI + 0x172],0x4
00539613  68 B0 00 00 00            PUSH 0xb0
00539618  EB 15                     JMP 0x0053962f
switchD_005395f3::caseD_2:
0053961A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0053961D  85 C0                     TEST EAX,EAX
0053961F  74 16                     JZ 0x00539637
00539621  66 C7 86 72 01 00 00 03 00  MOV word ptr [ESI + 0x172],0x3
0053962A  68 AF 00 00 00            PUSH 0xaf
LAB_0053962f:
0053962F  E8 FB C7 EC FF            CALL 0x00405e2f
00539634  83 C4 04                  ADD ESP,0x4
switchD_005395f3::default:
00539637  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0053963A  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0053963F  5F                        POP EDI
00539640  5E                        POP ESI
00539641  8B E5                     MOV ESP,EBP
00539643  5D                        POP EBP
00539644  C2 04 00                  RET 0x4
LAB_00539647:
00539647  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0053964A  68 08 75 7C 00            PUSH 0x7c7508
0053964F  68 CC 4C 7A 00            PUSH 0x7a4ccc
00539654  56                        PUSH ESI
00539655  6A 00                     PUSH 0x0
00539657  6A 54                     PUSH 0x54
00539659  68 90 74 7C 00            PUSH 0x7c7490
0053965E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00539664  E8 67 3E 17 00            CALL 0x006ad4d0
00539669  83 C4 18                  ADD ESP,0x18
0053966C  85 C0                     TEST EAX,EAX
0053966E  74 01                     JZ 0x00539671
00539670  CC                        INT3
LAB_00539671:
00539671  6A 54                     PUSH 0x54
00539673  68 90 74 7C 00            PUSH 0x7c7490
00539678  6A 00                     PUSH 0x0
0053967A  56                        PUSH ESI
0053967B  E8 C0 C7 16 00            CALL 0x006a5e40
00539680  5F                        POP EDI
00539681  5E                        POP ESI
00539682  8B E5                     MOV ESP,EBP
00539684  5D                        POP EBP
00539685  C2 04 00                  RET 0x4
