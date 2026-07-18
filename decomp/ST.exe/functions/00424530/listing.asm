FUN_00424530:
00424530  55                        PUSH EBP
00424531  8B EC                     MOV EBP,ESP
00424533  51                        PUSH ECX
00424534  53                        PUSH EBX
00424535  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00424538  56                        PUSH ESI
00424539  8B F1                     MOV ESI,ECX
0042453B  F6 C3 01                  TEST BL,0x1
0042453E  8B 46 29                  MOV EAX,dword ptr [ESI + 0x29]
00424541  57                        PUSH EDI
00424542  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00424545  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00424548  74 0C                     JZ 0x00424556
0042454A  8B 46 35                  MOV EAX,dword ptr [ESI + 0x35]
0042454D  A8 01                     TEST AL,0x1
0042454F  75 05                     JNZ 0x00424556
00424551  0C 01                     OR AL,0x1
00424553  89 46 35                  MOV dword ptr [ESI + 0x35],EAX
LAB_00424556:
00424556  F6 C3 02                  TEST BL,0x2
00424559  74 0C                     JZ 0x00424567
0042455B  8B 46 35                  MOV EAX,dword ptr [ESI + 0x35]
0042455E  A8 02                     TEST AL,0x2
00424560  75 05                     JNZ 0x00424567
00424562  0C 02                     OR AL,0x2
00424564  89 46 35                  MOV dword ptr [ESI + 0x35],EAX
LAB_00424567:
00424567  F6 C3 04                  TEST BL,0x4
0042456A  74 0C                     JZ 0x00424578
0042456C  8B 46 35                  MOV EAX,dword ptr [ESI + 0x35]
0042456F  A8 04                     TEST AL,0x4
00424571  75 05                     JNZ 0x00424578
00424573  0C 04                     OR AL,0x4
00424575  89 46 35                  MOV dword ptr [ESI + 0x35],EAX
LAB_00424578:
00424578  F6 C3 08                  TEST BL,0x8
0042457B  74 0C                     JZ 0x00424589
0042457D  8B 46 35                  MOV EAX,dword ptr [ESI + 0x35]
00424580  A8 08                     TEST AL,0x8
00424582  75 05                     JNZ 0x00424589
00424584  0C 08                     OR AL,0x8
00424586  89 46 35                  MOV dword ptr [ESI + 0x35],EAX
LAB_00424589:
00424589  F6 C3 10                  TEST BL,0x10
0042458C  74 0C                     JZ 0x0042459a
0042458E  8B 46 35                  MOV EAX,dword ptr [ESI + 0x35]
00424591  A8 10                     TEST AL,0x10
00424593  75 05                     JNZ 0x0042459a
00424595  0C 10                     OR AL,0x10
00424597  89 46 35                  MOV dword ptr [ESI + 0x35],EAX
LAB_0042459a:
0042459A  33 FF                     XOR EDI,EDI
0042459C  85 C9                     TEST ECX,ECX
0042459E  76 44                     JBE 0x004245e4
004245A0  33 D2                     XOR EDX,EDX
LAB_004245a2:
004245A2  8D 4D 08                  LEA ECX,[EBP + 0x8]
004245A5  51                        PUSH ECX
004245A6  8B 4E 29                  MOV ECX,dword ptr [ESI + 0x29]
004245A9  E8 C2 86 28 00            CALL 0x006acc70
004245AE  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004245B1  66 3D FF FF               CMP AX,0xffff
004245B5  74 1D                     JZ 0x004245d4
004245B7  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
004245BA  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004245C0  6A 01                     PUSH 0x1
004245C2  50                        PUSH EAX
004245C3  52                        PUSH EDX
004245C4  E8 F1 E2 FD FF            CALL 0x004028ba
004245C9  8B 10                     MOV EDX,dword ptr [EAX]
004245CB  53                        PUSH EBX
004245CC  8B C8                     MOV ECX,EAX
004245CE  FF 92 00 01 00 00         CALL dword ptr [EDX + 0x100]
LAB_004245d4:
004245D4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004245D7  47                        INC EDI
004245D8  8B D7                     MOV EDX,EDI
004245DA  81 E2 FF FF 00 00         AND EDX,0xffff
004245E0  3B D0                     CMP EDX,EAX
004245E2  72 BE                     JC 0x004245a2
LAB_004245e4:
004245E4  5F                        POP EDI
004245E5  5E                        POP ESI
004245E6  5B                        POP EBX
004245E7  8B E5                     MOV ESP,EBP
004245E9  5D                        POP EBP
004245EA  C2 04 00                  RET 0x4
