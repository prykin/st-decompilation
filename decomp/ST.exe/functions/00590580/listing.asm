FUN_00590580:
00590580  55                        PUSH EBP
00590581  8B EC                     MOV EBP,ESP
00590583  83 EC 48                  SUB ESP,0x48
00590586  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0059058B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0059058E  56                        PUSH ESI
0059058F  8D 55 BC                  LEA EDX,[EBP + -0x44]
00590592  8D 4D B8                  LEA ECX,[EBP + -0x48]
00590595  6A 00                     PUSH 0x0
00590597  52                        PUSH EDX
00590598  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0059059B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005905A1  E8 4A D2 19 00            CALL 0x0072d7f0
005905A6  8B F0                     MOV ESI,EAX
005905A8  83 C4 08                  ADD ESP,0x8
005905AB  85 F6                     TEST ESI,ESI
005905AD  0F 85 56 01 00 00         JNZ 0x00590709
005905B3  A1 34 67 80 00            MOV EAX,[0x00806734]
005905B8  8B 0D 30 67 80 00         MOV ECX,dword ptr [0x00806730]
005905BE  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005905C4  50                        PUSH EAX
005905C5  51                        PUSH ECX
005905C6  56                        PUSH ESI
005905C7  56                        PUSH ESI
005905C8  52                        PUSH EDX
005905C9  E8 B2 59 12 00            CALL 0x006b5f80
005905CE  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005905D1  8B 46 5E                  MOV EAX,dword ptr [ESI + 0x5e]
005905D4  50                        PUSH EAX
005905D5  6A 01                     PUSH 0x1
005905D7  6A 00                     PUSH 0x0
005905D9  6A 00                     PUSH 0x0
005905DB  E8 58 31 E7 FF            CALL 0x00403738
005905E0  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005905E6  8A 46 5D                  MOV AL,byte ptr [ESI + 0x5d]
005905E9  83 C4 10                  ADD ESP,0x10
005905EC  8B 51 30                  MOV EDX,dword ptr [ECX + 0x30]
005905EF  6A 01                     PUSH 0x1
005905F1  52                        PUSH EDX
005905F2  84 C0                     TEST AL,AL
005905F4  6A FF                     PUSH -0x1
005905F6  0F 84 98 00 00 00         JZ 0x00590694
005905FC  A1 18 76 80 00            MOV EAX,[0x00807618]
00590601  6A FF                     PUSH -0x1
00590603  50                        PUSH EAX
00590604  68 E5 25 00 00            PUSH 0x25e5
00590609  E8 32 FB 11 00            CALL 0x006b0140
0059060E  50                        PUSH EAX
0059060F  6A 32                     PUSH 0x32
00590611  68 0C 03 00 00            PUSH 0x30c
00590616  6A 0A                     PUSH 0xa
00590618  6A 0A                     PUSH 0xa
0059061A  6A 00                     PUSH 0x0
0059061C  E8 0C 46 E7 FF            CALL 0x00404c2d
00590621  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
00590627  A1 18 76 80 00            MOV EAX,[0x00807618]
0059062C  83 C4 28                  ADD ESP,0x28
0059062F  8B 51 30                  MOV EDX,dword ptr [ECX + 0x30]
00590632  6A 01                     PUSH 0x1
00590634  52                        PUSH EDX
00590635  6A FF                     PUSH -0x1
00590637  6A 00                     PUSH 0x0
00590639  50                        PUSH EAX
0059063A  68 E6 25 00 00            PUSH 0x25e6
0059063F  E8 FC FA 11 00            CALL 0x006b0140
00590644  50                        PUSH EAX
00590645  68 FA 00 00 00            PUSH 0xfa
0059064A  68 0D 02 00 00            PUSH 0x20d
0059064F  6A 3C                     PUSH 0x3c
00590651  68 0E 01 00 00            PUSH 0x10e
00590656  6A 00                     PUSH 0x0
00590658  E8 D0 45 E7 FF            CALL 0x00404c2d
0059065D  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
00590663  A1 18 76 80 00            MOV EAX,[0x00807618]
00590668  83 C4 28                  ADD ESP,0x28
0059066B  8B 51 30                  MOV EDX,dword ptr [ECX + 0x30]
0059066E  6A 01                     PUSH 0x1
00590670  52                        PUSH EDX
00590671  6A FF                     PUSH -0x1
00590673  6A 00                     PUSH 0x0
00590675  50                        PUSH EAX
00590676  68 E7 25 00 00            PUSH 0x25e7
0059067B  E8 C0 FA 11 00            CALL 0x006b0140
00590680  50                        PUSH EAX
00590681  68 E6 00 00 00            PUSH 0xe6
00590686  68 02 03 00 00            PUSH 0x302
0059068B  68 72 01 00 00            PUSH 0x172
00590690  6A 14                     PUSH 0x14
00590692  EB 5D                     JMP 0x005906f1
LAB_00590694:
00590694  A1 18 76 80 00            MOV EAX,[0x00807618]
00590699  6A FE                     PUSH -0x2
0059069B  50                        PUSH EAX
0059069C  68 E4 25 00 00            PUSH 0x25e4
005906A1  E8 9A FA 11 00            CALL 0x006b0140
005906A6  50                        PUSH EAX
005906A7  6A 14                     PUSH 0x14
005906A9  68 20 03 00 00            PUSH 0x320
005906AE  68 B8 01 00 00            PUSH 0x1b8
005906B3  6A 00                     PUSH 0x0
005906B5  6A 00                     PUSH 0x0
005906B7  E8 71 45 E7 FF            CALL 0x00404c2d
005906BC  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005906C2  A1 18 76 80 00            MOV EAX,[0x00807618]
005906C7  83 C4 28                  ADD ESP,0x28
005906CA  8B 51 30                  MOV EDX,dword ptr [ECX + 0x30]
005906CD  6A 01                     PUSH 0x1
005906CF  52                        PUSH EDX
005906D0  6A FF                     PUSH -0x1
005906D2  6A FF                     PUSH -0x1
005906D4  50                        PUSH EAX
005906D5  68 E8 25 00 00            PUSH 0x25e8
005906DA  E8 61 FA 11 00            CALL 0x006b0140
005906DF  50                        PUSH EAX
005906E0  68 8C 00 00 00            PUSH 0x8c
005906E5  68 20 03 00 00            PUSH 0x320
005906EA  68 CC 01 00 00            PUSH 0x1cc
005906EF  6A 00                     PUSH 0x0
LAB_005906f1:
005906F1  6A 00                     PUSH 0x0
005906F3  E8 35 45 E7 FF            CALL 0x00404c2d
005906F8  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005906FB  83 C4 28                  ADD ESP,0x28
005906FE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00590704  5E                        POP ESI
00590705  8B E5                     MOV ESP,EBP
00590707  5D                        POP EBP
00590708  C3                        RET
LAB_00590709:
00590709  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0059070C  68 74 BC 7C 00            PUSH 0x7cbc74
00590711  68 CC 4C 7A 00            PUSH 0x7a4ccc
00590716  56                        PUSH ESI
00590717  6A 00                     PUSH 0x0
00590719  6A 4D                     PUSH 0x4d
0059071B  68 24 BC 7C 00            PUSH 0x7cbc24
00590720  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00590726  E8 A5 CD 11 00            CALL 0x006ad4d0
0059072B  83 C4 18                  ADD ESP,0x18
0059072E  85 C0                     TEST EAX,EAX
00590730  74 01                     JZ 0x00590733
00590732  CC                        INT3
LAB_00590733:
00590733  6A 4D                     PUSH 0x4d
00590735  68 24 BC 7C 00            PUSH 0x7cbc24
0059073A  6A 00                     PUSH 0x0
0059073C  56                        PUSH ESI
0059073D  E8 FE 56 11 00            CALL 0x006a5e40
00590742  5E                        POP ESI
00590743  8B E5                     MOV ESP,EBP
00590745  5D                        POP EBP
00590746  C3                        RET
