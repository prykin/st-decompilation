FUN_0053fee0:
0053FEE0  55                        PUSH EBP
0053FEE1  8B EC                     MOV EBP,ESP
0053FEE3  83 EC 54                  SUB ESP,0x54
0053FEE6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0053FEE9  53                        PUSH EBX
0053FEEA  56                        PUSH ESI
0053FEEB  8B 71 3C                  MOV ESI,dword ptr [ECX + 0x3c]
0053FEEE  8B 40 14                  MOV EAX,dword ptr [EAX + 0x14]
0053FEF1  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0053FEF8  57                        PUSH EDI
0053FEF9  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0053FEFC  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
0053FEFF  2B D6                     SUB EDX,ESI
0053FF01  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0053FF04  8B 51 5C                  MOV EDX,dword ptr [ECX + 0x5c]
0053FF07  85 D2                     TEST EDX,EDX
0053FF09  75 10                     JNZ 0x0053ff1b
0053FF0B  8B 40 10                  MOV EAX,dword ptr [EAX + 0x10]
0053FF0E  8B 0D 34 67 80 00         MOV ECX,dword ptr [0x00806734]
0053FF14  2B C1                     SUB EAX,ECX
0053FF16  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0053FF19  EB 0B                     JMP 0x0053ff26
LAB_0053ff1b:
0053FF1B  8B 50 10                  MOV EDX,dword ptr [EAX + 0x10]
0053FF1E  8B 41 44                  MOV EAX,dword ptr [ECX + 0x44]
0053FF21  2B D0                     SUB EDX,EAX
0053FF23  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_0053ff26:
0053FF26  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0053FF29  85 C0                     TEST EAX,EAX
0053FF2B  0F 84 44 01 00 00         JZ 0x00540075
0053FF31  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0053FF36  8D 55 B0                  LEA EDX,[EBP + -0x50]
0053FF39  8D 4D AC                  LEA ECX,[EBP + -0x54]
0053FF3C  6A 00                     PUSH 0x0
0053FF3E  52                        PUSH EDX
0053FF3F  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
0053FF42  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053FF48  E8 A3 D8 1E 00            CALL 0x0072d7f0
0053FF4D  8B F0                     MOV ESI,EAX
0053FF4F  83 C4 08                  ADD ESP,0x8
0053FF52  85 F6                     TEST ESI,ESI
0053FF54  0F 85 DD 00 00 00         JNZ 0x00540037
0053FF5A  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0053FF5D  6A 01                     PUSH 0x1
0053FF5F  50                        PUSH EAX
0053FF60  57                        PUSH EDI
0053FF61  FF 55 0C                  CALL dword ptr [EBP + 0xc]
0053FF64  83 C4 04                  ADD ESP,0x4
0053FF67  50                        PUSH EAX
0053FF68  6A 02                     PUSH 0x2
0053FF6A  56                        PUSH ESI
0053FF6B  68 74 23 7C 00            PUSH 0x7c2374
0053FF70  E8 07 58 EC FF            CALL 0x0040577c
0053FF75  83 C4 08                  ADD ESP,0x8
0053FF78  50                        PUSH EAX
0053FF79  E8 82 2C 1B 00            CALL 0x006f2c00
0053FF7E  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
0053FF84  83 C4 0C                  ADD ESP,0xc
0053FF87  50                        PUSH EAX
0053FF88  6A 01                     PUSH 0x1
0053FF8A  E8 51 1D 1B 00            CALL 0x006f1ce0
0053FF8F  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
0053FF92  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
0053FF95  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0053FF98  50                        PUSH EAX
0053FF99  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0053FF9C  8B 4E 68                  MOV ECX,dword ptr [ESI + 0x68]
0053FF9F  6A 01                     PUSH 0x1
0053FFA1  53                        PUSH EBX
0053FFA2  50                        PUSH EAX
0053FFA3  51                        PUSH ECX
0053FFA4  E8 80 32 EC FF            CALL 0x00403229
0053FFA9  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
0053FFAF  83 C4 14                  ADD ESP,0x14
0053FFB2  8D 55 FC                  LEA EDX,[EBP + -0x4]
0053FFB5  52                        PUSH EDX
0053FFB6  E8 25 21 1B 00            CALL 0x006f20e0
0053FFBB  8B 47 14                  MOV EAX,dword ptr [EDI + 0x14]
0053FFBE  83 78 04 03               CMP dword ptr [EAX + 0x4],0x3
0053FFC2  75 47                     JNZ 0x0054000b
0053FFC4  6A 01                     PUSH 0x1
0053FFC6  6A 00                     PUSH 0x0
0053FFC8  6A 00                     PUSH 0x0
0053FFCA  68 84 23 7C 00            PUSH 0x7c2384
0053FFCF  E8 A8 57 EC FF            CALL 0x0040577c
0053FFD4  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
0053FFDA  83 C4 08                  ADD ESP,0x8
0053FFDD  50                        PUSH EAX
0053FFDE  6A 06                     PUSH 0x6
0053FFE0  E8 FB 1C 1B 00            CALL 0x006f1ce0
0053FFE5  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0053FFE8  8B 56 68                  MOV EDX,dword ptr [ESI + 0x68]
0053FFEB  50                        PUSH EAX
0053FFEC  6A 06                     PUSH 0x6
0053FFEE  53                        PUSH EBX
0053FFEF  51                        PUSH ECX
0053FFF0  52                        PUSH EDX
0053FFF1  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0053FFF4  E8 30 32 EC FF            CALL 0x00403229
0053FFF9  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
0053FFFF  83 C4 14                  ADD ESP,0x14
00540002  8D 45 FC                  LEA EAX,[EBP + -0x4]
00540005  50                        PUSH EAX
00540006  E8 D5 20 1B 00            CALL 0x006f20e0
LAB_0054000b:
0054000B  8B 4E 44                  MOV ECX,dword ptr [ESI + 0x44]
0054000E  8B 56 3C                  MOV EDX,dword ptr [ESI + 0x3c]
00540011  8B 46 60                  MOV EAX,dword ptr [ESI + 0x60]
00540014  51                        PUSH ECX
00540015  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0054001B  52                        PUSH EDX
0054001C  6A FF                     PUSH -0x1
0054001E  50                        PUSH EAX
0054001F  51                        PUSH ECX
00540020  E8 1B 36 17 00            CALL 0x006b3640
00540025  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
00540028  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0054002E  5F                        POP EDI
0054002F  5E                        POP ESI
00540030  5B                        POP EBX
00540031  8B E5                     MOV ESP,EBP
00540033  5D                        POP EBP
00540034  C2 08 00                  RET 0x8
LAB_00540037:
00540037  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
0054003A  68 C8 7A 7C 00            PUSH 0x7c7ac8
0054003F  68 CC 4C 7A 00            PUSH 0x7a4ccc
00540044  56                        PUSH ESI
00540045  6A 00                     PUSH 0x0
00540047  68 70 02 00 00            PUSH 0x270
0054004C  68 70 78 7C 00            PUSH 0x7c7870
00540051  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00540056  E8 75 D4 16 00            CALL 0x006ad4d0
0054005B  83 C4 18                  ADD ESP,0x18
0054005E  85 C0                     TEST EAX,EAX
00540060  74 01                     JZ 0x00540063
00540062  CC                        INT3
LAB_00540063:
00540063  68 70 02 00 00            PUSH 0x270
00540068  68 70 78 7C 00            PUSH 0x7c7870
0054006D  6A 00                     PUSH 0x0
0054006F  56                        PUSH ESI
00540070  E8 CB 5D 16 00            CALL 0x006a5e40
LAB_00540075:
00540075  5F                        POP EDI
00540076  5E                        POP ESI
00540077  5B                        POP EBX
00540078  8B E5                     MOV ESP,EBP
0054007A  5D                        POP EBP
0054007B  C2 08 00                  RET 0x8
