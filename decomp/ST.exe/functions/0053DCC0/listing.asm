UPanelTy::PaintLBut:
0053DCC0  55                        PUSH EBP
0053DCC1  8B EC                     MOV EBP,ESP
0053DCC3  83 EC 54                  SUB ESP,0x54
0053DCC6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0053DCC9  53                        PUSH EBX
0053DCCA  56                        PUSH ESI
0053DCCB  8B 71 3C                  MOV ESI,dword ptr [ECX + 0x3c]
0053DCCE  8B 40 18                  MOV EAX,dword ptr [EAX + 0x18]
0053DCD1  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0053DCD8  57                        PUSH EDI
0053DCD9  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0053DCDC  8B 10                     MOV EDX,dword ptr [EAX]
0053DCDE  2B D6                     SUB EDX,ESI
0053DCE0  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0053DCE3  8B 51 5C                  MOV EDX,dword ptr [ECX + 0x5c]
0053DCE6  85 D2                     TEST EDX,EDX
0053DCE8  75 0D                     JNZ 0x0053dcf7
0053DCEA  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
0053DCED  8B 51 48                  MOV EDX,dword ptr [ECX + 0x48]
0053DCF0  03 C2                     ADD EAX,EDX
0053DCF2  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0053DCF5  EB 0B                     JMP 0x0053dd02
LAB_0053dcf7:
0053DCF7  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0053DCFA  8B 41 44                  MOV EAX,dword ptr [ECX + 0x44]
0053DCFD  2B D0                     SUB EDX,EAX
0053DCFF  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_0053dd02:
0053DD02  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0053DD05  85 C0                     TEST EAX,EAX
0053DD07  0F 84 22 01 00 00         JZ 0x0053de2f
0053DD0D  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0053DD12  8D 55 B0                  LEA EDX,[EBP + -0x50]
0053DD15  8D 4D AC                  LEA ECX,[EBP + -0x54]
0053DD18  6A 00                     PUSH 0x0
0053DD1A  52                        PUSH EDX
0053DD1B  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
0053DD1E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053DD24  E8 C7 FA 1E 00            CALL 0x0072d7f0
0053DD29  8B F0                     MOV ESI,EAX
0053DD2B  83 C4 08                  ADD ESP,0x8
0053DD2E  85 F6                     TEST ESI,ESI
0053DD30  0F 85 C0 00 00 00         JNZ 0x0053ddf6
0053DD36  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0053DD39  57                        PUSH EDI
0053DD3A  FF 55 18                  CALL dword ptr [EBP + 0x18]
0053DD3D  50                        PUSH EAX
0053DD3E  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0053DD41  6A 01                     PUSH 0x1
0053DD43  50                        PUSH EAX
0053DD44  E8 B7 4E 1B 00            CALL 0x006f2c00
0053DD49  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0053DD4C  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
0053DD52  83 C4 10                  ADD ESP,0x10
0053DD55  6A 01                     PUSH 0x1
0053DD57  56                        PUSH ESI
0053DD58  50                        PUSH EAX
0053DD59  53                        PUSH EBX
0053DD5A  E8 81 3F 1B 00            CALL 0x006f1ce0
0053DD5F  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
0053DD62  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0053DD65  50                        PUSH EAX
0053DD66  53                        PUSH EBX
0053DD67  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
0053DD6A  8B 56 68                  MOV EDX,dword ptr [ESI + 0x68]
0053DD6D  53                        PUSH EBX
0053DD6E  51                        PUSH ECX
0053DD6F  52                        PUSH EDX
0053DD70  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0053DD73  E8 B1 54 EC FF            CALL 0x00403229
0053DD78  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
0053DD7E  83 C4 14                  ADD ESP,0x14
0053DD81  8D 45 FC                  LEA EAX,[EBP + -0x4]
0053DD84  50                        PUSH EAX
0053DD85  E8 56 43 1B 00            CALL 0x006f20e0
0053DD8A  83 7F 14 03               CMP dword ptr [EDI + 0x14],0x3
0053DD8E  75 3B                     JNZ 0x0053ddcb
0053DD90  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0053DD93  6A 01                     PUSH 0x1
0053DD95  6A 00                     PUSH 0x0
0053DD97  51                        PUSH ECX
0053DD98  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
0053DD9E  6A 06                     PUSH 0x6
0053DDA0  E8 3B 3F 1B 00            CALL 0x006f1ce0
0053DDA5  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0053DDA8  50                        PUSH EAX
0053DDA9  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0053DDAC  8B 46 68                  MOV EAX,dword ptr [ESI + 0x68]
0053DDAF  6A 06                     PUSH 0x6
0053DDB1  53                        PUSH EBX
0053DDB2  52                        PUSH EDX
0053DDB3  50                        PUSH EAX
0053DDB4  E8 70 54 EC FF            CALL 0x00403229
0053DDB9  83 C4 14                  ADD ESP,0x14
0053DDBC  8D 4D FC                  LEA ECX,[EBP + -0x4]
0053DDBF  51                        PUSH ECX
0053DDC0  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
0053DDC6  E8 15 43 1B 00            CALL 0x006f20e0
LAB_0053ddcb:
0053DDCB  8B 56 44                  MOV EDX,dword ptr [ESI + 0x44]
0053DDCE  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
0053DDD1  8B 4E 60                  MOV ECX,dword ptr [ESI + 0x60]
0053DDD4  52                        PUSH EDX
0053DDD5  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
0053DDDB  50                        PUSH EAX
0053DDDC  6A FF                     PUSH -0x1
0053DDDE  51                        PUSH ECX
0053DDDF  52                        PUSH EDX
0053DDE0  E8 5B 58 17 00            CALL 0x006b3640
0053DDE5  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
0053DDE8  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0053DDED  5F                        POP EDI
0053DDEE  5E                        POP ESI
0053DDEF  5B                        POP EBX
0053DDF0  8B E5                     MOV ESP,EBP
0053DDF2  5D                        POP EBP
0053DDF3  C2 14 00                  RET 0x14
LAB_0053ddf6:
0053DDF6  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
0053DDF9  68 E4 78 7C 00            PUSH 0x7c78e4
0053DDFE  68 CC 4C 7A 00            PUSH 0x7a4ccc
0053DE03  56                        PUSH ESI
0053DE04  6A 00                     PUSH 0x0
0053DE06  6A 74                     PUSH 0x74
0053DE08  68 70 78 7C 00            PUSH 0x7c7870
0053DE0D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053DE13  E8 B8 F6 16 00            CALL 0x006ad4d0
0053DE18  83 C4 18                  ADD ESP,0x18
0053DE1B  85 C0                     TEST EAX,EAX
0053DE1D  74 01                     JZ 0x0053de20
0053DE1F  CC                        INT3
LAB_0053de20:
0053DE20  6A 74                     PUSH 0x74
0053DE22  68 70 78 7C 00            PUSH 0x7c7870
0053DE27  6A 00                     PUSH 0x0
0053DE29  56                        PUSH ESI
0053DE2A  E8 11 80 16 00            CALL 0x006a5e40
LAB_0053de2f:
0053DE2F  5F                        POP EDI
0053DE30  5E                        POP ESI
0053DE31  5B                        POP EBX
0053DE32  8B E5                     MOV ESP,EBP
0053DE34  5D                        POP EBP
0053DE35  C2 14 00                  RET 0x14
