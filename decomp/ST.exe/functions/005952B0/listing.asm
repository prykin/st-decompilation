FSGSTy::OutSGlProc:
005952B0  55                        PUSH EBP
005952B1  8B EC                     MOV EBP,ESP
005952B3  83 EC 4C                  SUB ESP,0x4c
005952B6  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
005952B9  53                        PUSH EBX
005952BA  56                        PUSH ESI
005952BB  57                        PUSH EDI
005952BC  85 C0                     TEST EAX,EAX
005952BE  0F 84 1C 03 00 00         JZ 0x005955e0
005952C4  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005952C9  8D 55 B8                  LEA EDX,[EBP + -0x48]
005952CC  8D 4D B4                  LEA ECX,[EBP + -0x4c]
005952CF  6A 00                     PUSH 0x0
005952D1  52                        PUSH EDX
005952D2  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
005952D5  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005952DB  E8 10 85 19 00            CALL 0x0072d7f0
005952E0  8B F0                     MOV ESI,EAX
005952E2  83 C4 08                  ADD ESP,0x8
005952E5  85 F6                     TEST ESI,ESI
005952E7  0F 85 B4 02 00 00         JNZ 0x005955a1
005952ED  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005952F2  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
005952F5  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
005952F8  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
005952FB  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
005952FE  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00595301  05 40 01 00 00            ADD EAX,0x140
00595306  50                        PUSH EAX
00595307  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0059530A  51                        PUSH ECX
0059530B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0059530E  52                        PUSH EDX
0059530F  56                        PUSH ESI
00595310  53                        PUSH EBX
00595311  50                        PUSH EAX
00595312  51                        PUSH ECX
00595313  57                        PUSH EDI
00595314  E8 80 DD E6 FF            CALL 0x00403099
00595319  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
0059531F  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
00595325  6A 02                     PUSH 0x2
00595327  83 C3 0A                  ADD EBX,0xa
0059532A  8B 42 34                  MOV EAX,dword ptr [EDX + 0x34]
0059532D  50                        PUSH EAX
0059532E  6A FF                     PUSH -0x1
00595330  6A 00                     PUSH 0x0
00595332  51                        PUSH ECX
00595333  68 6F 25 00 00            PUSH 0x256f
00595338  E8 03 AE 11 00            CALL 0x006b0140
0059533D  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00595340  50                        PUSH EAX
00595341  6A 14                     PUSH 0x14
00595343  8D 42 EC                  LEA EAX,[EDX + -0x14]
00595346  50                        PUSH EAX
00595347  8D 46 0A                  LEA EAX,[ESI + 0xa]
0059534A  50                        PUSH EAX
0059534B  53                        PUSH EBX
0059534C  6A 00                     PUSH 0x0
0059534E  E8 DA F8 E6 FF            CALL 0x00404c2d
00595353  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
00595359  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0059535C  83 C4 28                  ADD ESP,0x28
0059535F  83 C0 EC                  ADD EAX,-0x14
00595362  8B 91 40 01 00 00         MOV EDX,dword ptr [ECX + 0x140]
00595368  8D 4E 1E                  LEA ECX,[ESI + 0x1e]
0059536B  52                        PUSH EDX
0059536C  68 8E 00 00 00            PUSH 0x8e
00595371  50                        PUSH EAX
00595372  51                        PUSH ECX
00595373  53                        PUSH EBX
00595374  57                        PUSH EDI
00595375  E8 D6 14 13 00            CALL 0x006c6850
0059537A  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
00595380  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
00595386  6A 02                     PUSH 0x2
00595388  8B 42 34                  MOV EAX,dword ptr [EDX + 0x34]
0059538B  50                        PUSH EAX
0059538C  6A FF                     PUSH -0x1
0059538E  6A 00                     PUSH 0x0
00595390  51                        PUSH ECX
00595391  68 6B 25 00 00            PUSH 0x256b
00595396  E8 A5 AD 11 00            CALL 0x006b0140
0059539B  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
0059539E  50                        PUSH EAX
0059539F  6A 14                     PUSH 0x14
005953A1  8D 42 EC                  LEA EAX,[EDX + -0x14]
005953A4  50                        PUSH EAX
005953A5  8D 86 B4 00 00 00         LEA EAX,[ESI + 0xb4]
005953AB  50                        PUSH EAX
005953AC  53                        PUSH EBX
005953AD  6A 00                     PUSH 0x0
005953AF  E8 79 F8 E6 FF            CALL 0x00404c2d
005953B4  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005953BA  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
005953BD  83 C4 28                  ADD ESP,0x28
005953C0  83 C0 EC                  ADD EAX,-0x14
005953C3  8B 91 40 01 00 00         MOV EDX,dword ptr [ECX + 0x140]
005953C9  8D 8E C8 00 00 00         LEA ECX,[ESI + 0xc8]
005953CF  52                        PUSH EDX
005953D0  6A 19                     PUSH 0x19
005953D2  50                        PUSH EAX
005953D3  51                        PUSH ECX
005953D4  53                        PUSH EBX
005953D5  57                        PUSH EDI
005953D6  E8 75 14 13 00            CALL 0x006c6850
005953DB  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005953E1  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005953E7  6A 02                     PUSH 0x2
005953E9  8B 42 34                  MOV EAX,dword ptr [EDX + 0x34]
005953EC  50                        PUSH EAX
005953ED  6A FF                     PUSH -0x1
005953EF  6A 00                     PUSH 0x0
005953F1  51                        PUSH ECX
005953F2  68 6C 25 00 00            PUSH 0x256c
005953F7  E8 44 AD 11 00            CALL 0x006b0140
005953FC  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
005953FF  50                        PUSH EAX
00595400  6A 14                     PUSH 0x14
00595402  8D 42 EC                  LEA EAX,[EDX + -0x14]
00595405  50                        PUSH EAX
00595406  8D 86 E1 00 00 00         LEA EAX,[ESI + 0xe1]
0059540C  50                        PUSH EAX
0059540D  53                        PUSH EBX
0059540E  6A 00                     PUSH 0x0
00595410  E8 18 F8 E6 FF            CALL 0x00404c2d
00595415  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
0059541B  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0059541E  83 C4 28                  ADD ESP,0x28
00595421  83 C0 EC                  ADD EAX,-0x14
00595424  8B 91 40 01 00 00         MOV EDX,dword ptr [ECX + 0x140]
0059542A  8D 8E F5 00 00 00         LEA ECX,[ESI + 0xf5]
00595430  52                        PUSH EDX
00595431  6A 19                     PUSH 0x19
00595433  50                        PUSH EAX
00595434  51                        PUSH ECX
00595435  53                        PUSH EBX
00595436  57                        PUSH EDI
00595437  E8 14 14 13 00            CALL 0x006c6850
0059543C  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
0059543F  6A 02                     PUSH 0x2
00595441  8D 42 E2                  LEA EAX,[EDX + -0x1e]
00595444  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00595447  99                        CDQ
00595448  2B C2                     SUB EAX,EDX
0059544A  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
00595450  D1 F8                     SAR EAX,0x1
00595452  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00595455  A1 6C 17 81 00            MOV EAX,[0x0081176c]
0059545A  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
0059545D  51                        PUSH ECX
0059545E  6A FF                     PUSH -0x1
00595460  6A 00                     PUSH 0x0
00595462  52                        PUSH EDX
00595463  68 6D 25 00 00            PUSH 0x256d
00595468  E8 D3 AC 11 00            CALL 0x006b0140
0059546D  50                        PUSH EAX
0059546E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00595471  83 C0 D8                  ADD EAX,-0x28
00595474  6A 14                     PUSH 0x14
00595476  8D 8E 1A 01 00 00         LEA ECX,[ESI + 0x11a]
0059547C  50                        PUSH EAX
0059547D  51                        PUSH ECX
0059547E  53                        PUSH EBX
0059547F  6A 00                     PUSH 0x0
00595481  E8 A7 F7 E6 FF            CALL 0x00404c2d
00595486  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
0059548C  83 C4 28                  ADD ESP,0x28
0059548F  8B 82 40 01 00 00         MOV EAX,dword ptr [EDX + 0x140]
00595495  8D 96 1C 01 00 00         LEA EDX,[ESI + 0x11c]
0059549B  50                        PUSH EAX
0059549C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0059549F  6A 04                     PUSH 0x4
005954A1  6A 19                     PUSH 0x19
005954A3  8D 48 28                  LEA ECX,[EAX + 0x28]
005954A6  51                        PUSH ECX
005954A7  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
005954AA  52                        PUSH EDX
005954AB  8D 54 08 EC               LEA EDX,[EAX + ECX*0x1 + -0x14]
005954AF  52                        PUSH EDX
005954B0  57                        PUSH EDI
005954B1  E8 BA 0F 13 00            CALL 0x006c6470
005954B6  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005954BB  8B 88 40 01 00 00         MOV ECX,dword ptr [EAX + 0x140]
005954C1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005954C4  51                        PUSH ECX
005954C5  6A 04                     PUSH 0x4
005954C7  8D 50 24                  LEA EDX,[EAX + 0x24]
005954CA  6A 15                     PUSH 0x15
005954CC  52                        PUSH EDX
005954CD  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
005954D0  8D 8E 1E 01 00 00         LEA ECX,[ESI + 0x11e]
005954D6  8D 44 10 EE               LEA EAX,[EAX + EDX*0x1 + -0x12]
005954DA  51                        PUSH ECX
005954DB  50                        PUSH EAX
005954DC  57                        PUSH EDI
005954DD  E8 8E 0F 13 00            CALL 0x006c6470
005954E2  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005954E8  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
005954EB  83 C0 EC                  ADD EAX,-0x14
005954EE  8B 91 40 01 00 00         MOV EDX,dword ptr [ECX + 0x140]
005954F4  8D 8E 38 01 00 00         LEA ECX,[ESI + 0x138]
005954FA  52                        PUSH EDX
005954FB  6A 04                     PUSH 0x4
005954FD  6A 19                     PUSH 0x19
005954FF  50                        PUSH EAX
00595500  51                        PUSH ECX
00595501  53                        PUSH EBX
00595502  57                        PUSH EDI
00595503  E8 68 0F 13 00            CALL 0x006c6470
00595508  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
0059550E  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00595511  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
00595514  83 C1 E8                  ADD ECX,-0x18
00595517  8B 82 40 01 00 00         MOV EAX,dword ptr [EDX + 0x140]
0059551D  8D 96 3A 01 00 00         LEA EDX,[ESI + 0x13a]
00595523  50                        PUSH EAX
00595524  6A 04                     PUSH 0x4
00595526  6A 15                     PUSH 0x15
00595528  51                        PUSH ECX
00595529  8D 43 0C                  LEA EAX,[EBX + 0xc]
0059552C  52                        PUSH EDX
0059552D  50                        PUSH EAX
0059552E  57                        PUSH EDI
0059552F  E8 3C 0F 13 00            CALL 0x006c6470
00595534  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00595537  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
0059553D  99                        CDQ
0059553E  83 E2 03                  AND EDX,0x3
00595541  03 C2                     ADD EAX,EDX
00595543  8B 91 40 01 00 00         MOV EDX,dword ptr [ECX + 0x140]
00595549  C1 F8 02                  SAR EAX,0x2
0059554C  03 D8                     ADD EBX,EAX
0059554E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00595551  52                        PUSH EDX
00595552  6A 04                     PUSH 0x4
00595554  6A 19                     PUSH 0x19
00595556  8D 8E 57 01 00 00         LEA ECX,[ESI + 0x157]
0059555C  50                        PUSH EAX
0059555D  8D 53 0F                  LEA EDX,[EBX + 0xf]
00595560  51                        PUSH ECX
00595561  52                        PUSH EDX
00595562  57                        PUSH EDI
00595563  E8 08 0F 13 00            CALL 0x006c6470
00595568  A1 6C 17 81 00            MOV EAX,[0x0081176c]
0059556D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00595570  83 C2 FC                  ADD EDX,-0x4
00595573  81 C6 59 01 00 00         ADD ESI,0x159
00595579  8B 88 40 01 00 00         MOV ECX,dword ptr [EAX + 0x140]
0059557F  83 C3 11                  ADD EBX,0x11
00595582  51                        PUSH ECX
00595583  6A 04                     PUSH 0x4
00595585  6A 15                     PUSH 0x15
00595587  52                        PUSH EDX
00595588  56                        PUSH ESI
00595589  53                        PUSH EBX
0059558A  57                        PUSH EDI
0059558B  E8 E0 0E 13 00            CALL 0x006c6470
00595590  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
00595593  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00595598  5F                        POP EDI
00595599  5E                        POP ESI
0059559A  5B                        POP EBX
0059559B  8B E5                     MOV ESP,EBP
0059559D  5D                        POP EBP
0059559E  C2 20 00                  RET 0x20
LAB_005955a1:
005955A1  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
005955A4  68 C8 BF 7C 00            PUSH 0x7cbfc8
005955A9  68 CC 4C 7A 00            PUSH 0x7a4ccc
005955AE  56                        PUSH ESI
005955AF  6A 00                     PUSH 0x0
005955B1  68 B3 00 00 00            PUSH 0xb3
005955B6  68 70 BF 7C 00            PUSH 0x7cbf70
005955BB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005955C1  E8 0A 7F 11 00            CALL 0x006ad4d0
005955C6  83 C4 18                  ADD ESP,0x18
005955C9  85 C0                     TEST EAX,EAX
005955CB  74 01                     JZ 0x005955ce
005955CD  CC                        INT3
LAB_005955ce:
005955CE  68 B3 00 00 00            PUSH 0xb3
005955D3  68 70 BF 7C 00            PUSH 0x7cbf70
005955D8  6A 00                     PUSH 0x0
005955DA  56                        PUSH ESI
005955DB  E8 60 08 11 00            CALL 0x006a5e40
LAB_005955e0:
005955E0  5F                        POP EDI
005955E1  5E                        POP ESI
005955E2  5B                        POP EBX
005955E3  8B E5                     MOV ESP,EBP
005955E5  5D                        POP EBP
005955E6  C2 20 00                  RET 0x20
