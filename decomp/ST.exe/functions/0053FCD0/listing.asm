FUN_0053fcd0:
0053FCD0  55                        PUSH EBP
0053FCD1  8B EC                     MOV EBP,ESP
0053FCD3  83 EC 54                  SUB ESP,0x54
0053FCD6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0053FCD9  53                        PUSH EBX
0053FCDA  56                        PUSH ESI
0053FCDB  8B 71 3C                  MOV ESI,dword ptr [ECX + 0x3c]
0053FCDE  8B 40 14                  MOV EAX,dword ptr [EAX + 0x14]
0053FCE1  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0053FCE8  57                        PUSH EDI
0053FCE9  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0053FCEC  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
0053FCEF  2B D6                     SUB EDX,ESI
0053FCF1  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0053FCF4  8B 51 5C                  MOV EDX,dword ptr [ECX + 0x5c]
0053FCF7  85 D2                     TEST EDX,EDX
0053FCF9  75 10                     JNZ 0x0053fd0b
0053FCFB  8B 40 10                  MOV EAX,dword ptr [EAX + 0x10]
0053FCFE  8B 0D 34 67 80 00         MOV ECX,dword ptr [0x00806734]
0053FD04  2B C1                     SUB EAX,ECX
0053FD06  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0053FD09  EB 0B                     JMP 0x0053fd16
LAB_0053fd0b:
0053FD0B  8B 50 10                  MOV EDX,dword ptr [EAX + 0x10]
0053FD0E  8B 41 44                  MOV EAX,dword ptr [ECX + 0x44]
0053FD11  2B D0                     SUB EDX,EAX
0053FD13  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_0053fd16:
0053FD16  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0053FD19  85 C0                     TEST EAX,EAX
0053FD1B  0F 84 44 01 00 00         JZ 0x0053fe65
0053FD21  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0053FD26  8D 55 B0                  LEA EDX,[EBP + -0x50]
0053FD29  8D 4D AC                  LEA ECX,[EBP + -0x54]
0053FD2C  6A 00                     PUSH 0x0
0053FD2E  52                        PUSH EDX
0053FD2F  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
0053FD32  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053FD38  E8 B3 DA 1E 00            CALL 0x0072d7f0
0053FD3D  8B F0                     MOV ESI,EAX
0053FD3F  83 C4 08                  ADD ESP,0x8
0053FD42  85 F6                     TEST ESI,ESI
0053FD44  0F 85 DD 00 00 00         JNZ 0x0053fe27
0053FD4A  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0053FD4D  6A 01                     PUSH 0x1
0053FD4F  50                        PUSH EAX
0053FD50  57                        PUSH EDI
0053FD51  FF 55 0C                  CALL dword ptr [EBP + 0xc]
0053FD54  83 C4 04                  ADD ESP,0x4
0053FD57  50                        PUSH EAX
0053FD58  6A 02                     PUSH 0x2
0053FD5A  56                        PUSH ESI
0053FD5B  68 F4 7A 7C 00            PUSH 0x7c7af4
0053FD60  E8 17 5A EC FF            CALL 0x0040577c
0053FD65  83 C4 08                  ADD ESP,0x8
0053FD68  50                        PUSH EAX
0053FD69  E8 92 2E 1B 00            CALL 0x006f2c00
0053FD6E  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
0053FD74  83 C4 0C                  ADD ESP,0xc
0053FD77  50                        PUSH EAX
0053FD78  6A 01                     PUSH 0x1
0053FD7A  E8 61 1F 1B 00            CALL 0x006f1ce0
0053FD7F  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
0053FD82  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
0053FD85  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0053FD88  50                        PUSH EAX
0053FD89  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0053FD8C  8B 4E 68                  MOV ECX,dword ptr [ESI + 0x68]
0053FD8F  6A 01                     PUSH 0x1
0053FD91  53                        PUSH EBX
0053FD92  50                        PUSH EAX
0053FD93  51                        PUSH ECX
0053FD94  E8 90 34 EC FF            CALL 0x00403229
0053FD99  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
0053FD9F  83 C4 14                  ADD ESP,0x14
0053FDA2  8D 55 FC                  LEA EDX,[EBP + -0x4]
0053FDA5  52                        PUSH EDX
0053FDA6  E8 35 23 1B 00            CALL 0x006f20e0
0053FDAB  8B 47 14                  MOV EAX,dword ptr [EDI + 0x14]
0053FDAE  83 78 04 03               CMP dword ptr [EAX + 0x4],0x3
0053FDB2  75 47                     JNZ 0x0053fdfb
0053FDB4  6A 01                     PUSH 0x1
0053FDB6  6A 00                     PUSH 0x0
0053FDB8  6A 00                     PUSH 0x0
0053FDBA  68 E4 7A 7C 00            PUSH 0x7c7ae4
0053FDBF  E8 B8 59 EC FF            CALL 0x0040577c
0053FDC4  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
0053FDCA  83 C4 08                  ADD ESP,0x8
0053FDCD  50                        PUSH EAX
0053FDCE  6A 06                     PUSH 0x6
0053FDD0  E8 0B 1F 1B 00            CALL 0x006f1ce0
0053FDD5  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0053FDD8  8B 56 68                  MOV EDX,dword ptr [ESI + 0x68]
0053FDDB  50                        PUSH EAX
0053FDDC  6A 06                     PUSH 0x6
0053FDDE  53                        PUSH EBX
0053FDDF  51                        PUSH ECX
0053FDE0  52                        PUSH EDX
0053FDE1  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0053FDE4  E8 40 34 EC FF            CALL 0x00403229
0053FDE9  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
0053FDEF  83 C4 14                  ADD ESP,0x14
0053FDF2  8D 45 FC                  LEA EAX,[EBP + -0x4]
0053FDF5  50                        PUSH EAX
0053FDF6  E8 E5 22 1B 00            CALL 0x006f20e0
LAB_0053fdfb:
0053FDFB  8B 4E 44                  MOV ECX,dword ptr [ESI + 0x44]
0053FDFE  8B 56 3C                  MOV EDX,dword ptr [ESI + 0x3c]
0053FE01  8B 46 60                  MOV EAX,dword ptr [ESI + 0x60]
0053FE04  51                        PUSH ECX
0053FE05  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0053FE0B  52                        PUSH EDX
0053FE0C  6A FF                     PUSH -0x1
0053FE0E  50                        PUSH EAX
0053FE0F  51                        PUSH ECX
0053FE10  E8 2B 38 17 00            CALL 0x006b3640
0053FE15  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
0053FE18  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0053FE1E  5F                        POP EDI
0053FE1F  5E                        POP ESI
0053FE20  5B                        POP EBX
0053FE21  8B E5                     MOV ESP,EBP
0053FE23  5D                        POP EBP
0053FE24  C2 08 00                  RET 0x8
LAB_0053fe27:
0053FE27  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
0053FE2A  68 C8 7A 7C 00            PUSH 0x7c7ac8
0053FE2F  68 CC 4C 7A 00            PUSH 0x7a4ccc
0053FE34  56                        PUSH ESI
0053FE35  6A 00                     PUSH 0x0
0053FE37  68 55 02 00 00            PUSH 0x255
0053FE3C  68 70 78 7C 00            PUSH 0x7c7870
0053FE41  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0053FE46  E8 85 D6 16 00            CALL 0x006ad4d0
0053FE4B  83 C4 18                  ADD ESP,0x18
0053FE4E  85 C0                     TEST EAX,EAX
0053FE50  74 01                     JZ 0x0053fe53
0053FE52  CC                        INT3
LAB_0053fe53:
0053FE53  68 55 02 00 00            PUSH 0x255
0053FE58  68 70 78 7C 00            PUSH 0x7c7870
0053FE5D  6A 00                     PUSH 0x0
0053FE5F  56                        PUSH ESI
0053FE60  E8 DB 5F 16 00            CALL 0x006a5e40
LAB_0053fe65:
0053FE65  5F                        POP EDI
0053FE66  5E                        POP ESI
0053FE67  5B                        POP EBX
0053FE68  8B E5                     MOV ESP,EBP
0053FE6A  5D                        POP EBP
0053FE6B  C2 08 00                  RET 0x8
