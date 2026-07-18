PanelTy::GetMessage:
005384A0  55                        PUSH EBP
005384A1  8B EC                     MOV EBP,ESP
005384A3  83 EC 48                  SUB ESP,0x48
005384A6  56                        PUSH ESI
005384A7  8B F1                     MOV ESI,ECX
005384A9  57                        PUSH EDI
005384AA  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
005384AD  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
005384B0  E8 FB CC 1A 00            CALL 0x006e51b0
005384B5  89 46 38                  MOV dword ptr [ESI + 0x38],EAX
005384B8  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005384BD  8D 55 BC                  LEA EDX,[EBP + -0x44]
005384C0  8D 4D B8                  LEA ECX,[EBP + -0x48]
005384C3  6A 00                     PUSH 0x0
005384C5  52                        PUSH EDX
005384C6  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005384C9  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005384CF  E8 1C 53 1F 00            CALL 0x0072d7f0
005384D4  8B F0                     MOV ESI,EAX
005384D6  83 C4 08                  ADD ESP,0x8
005384D9  85 F6                     TEST ESI,ESI
005384DB  75 5A                     JNZ 0x00538537
005384DD  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
005384E0  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005384E3  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
005384E6  83 E8 02                  SUB EAX,0x2
005384E9  74 2C                     JZ 0x00538517
005384EB  48                        DEC EAX
005384EC  74 20                     JZ 0x0053850e
005384EE  83 E8 02                  SUB EAX,0x2
005384F1  75 2B                     JNZ 0x0053851e
005384F3  8B 46 44                  MOV EAX,dword ptr [ESI + 0x44]
005384F6  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
005384F9  8B 56 60                  MOV EDX,dword ptr [ESI + 0x60]
005384FC  50                        PUSH EAX
005384FD  A1 A8 75 80 00            MOV EAX,[0x008075a8]
00538502  51                        PUSH ECX
00538503  6A FF                     PUSH -0x1
00538505  52                        PUSH EDX
00538506  50                        PUSH EAX
00538507  E8 34 B1 17 00            CALL 0x006b3640
0053850C  EB 10                     JMP 0x0053851e
LAB_0053850e:
0053850E  8B CE                     MOV ECX,ESI
00538510  E8 C4 C5 EC FF            CALL 0x00404ad9
00538515  EB 07                     JMP 0x0053851e
LAB_00538517:
00538517  8B CE                     MOV ECX,ESI
00538519  E8 E3 98 EC FF            CALL 0x00401e01
LAB_0053851e:
0053851E  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00538521  57                        PUSH EDI
00538522  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00538528  8B CE                     MOV ECX,ESI
0053852A  E8 A1 DA 1A 00            CALL 0x006e5fd0
0053852F  5F                        POP EDI
00538530  5E                        POP ESI
00538531  8B E5                     MOV ESP,EBP
00538533  5D                        POP EBP
00538534  C2 04 00                  RET 0x4
LAB_00538537:
00538537  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0053853A  68 E4 73 7C 00            PUSH 0x7c73e4
0053853F  68 CC 4C 7A 00            PUSH 0x7a4ccc
00538544  56                        PUSH ESI
00538545  6A 00                     PUSH 0x0
00538547  6A 52                     PUSH 0x52
00538549  68 90 73 7C 00            PUSH 0x7c7390
0053854E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00538554  E8 77 4F 17 00            CALL 0x006ad4d0
00538559  83 C4 18                  ADD ESP,0x18
0053855C  85 C0                     TEST EAX,EAX
0053855E  74 01                     JZ 0x00538561
00538560  CC                        INT3
LAB_00538561:
00538561  6A 52                     PUSH 0x52
00538563  68 90 73 7C 00            PUSH 0x7c7390
00538568  6A 00                     PUSH 0x0
0053856A  56                        PUSH ESI
0053856B  E8 D0 D8 16 00            CALL 0x006a5e40
00538570  5F                        POP EDI
00538571  B8 FF FF 00 00            MOV EAX,0xffff
00538576  5E                        POP ESI
00538577  8B E5                     MOV ESP,EBP
00538579  5D                        POP EBP
0053857A  C2 04 00                  RET 0x4
