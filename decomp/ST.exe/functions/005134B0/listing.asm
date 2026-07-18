FUN_005134b0:
005134B0  55                        PUSH EBP
005134B1  8B EC                     MOV EBP,ESP
005134B3  83 EC 54                  SUB ESP,0x54
005134B6  8A 81 A1 01 00 00         MOV AL,byte ptr [ECX + 0x1a1]
005134BC  8B 91 A3 01 00 00         MOV EDX,dword ptr [ECX + 0x1a3]
005134C2  88 45 F0                  MOV byte ptr [EBP + -0x10],AL
005134C5  8B 81 A7 01 00 00         MOV EAX,dword ptr [ECX + 0x1a7]
005134CB  89 45 F5                  MOV dword ptr [EBP + -0xb],EAX
005134CE  8B 81 CB 01 00 00         MOV EAX,dword ptr [ECX + 0x1cb]
005134D4  56                        PUSH ESI
005134D5  57                        PUSH EDI
005134D6  85 C0                     TEST EAX,EAX
005134D8  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005134DB  89 55 F1                  MOV dword ptr [EBP + -0xf],EDX
005134DE  0F 84 C2 00 00 00         JZ 0x005135a6
005134E4  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
005134EA  8D 45 B0                  LEA EAX,[EBP + -0x50]
005134ED  8D 55 AC                  LEA EDX,[EBP + -0x54]
005134F0  6A 00                     PUSH 0x0
005134F2  50                        PUSH EAX
005134F3  89 4D AC                  MOV dword ptr [EBP + -0x54],ECX
005134F6  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005134FC  E8 EF A2 21 00            CALL 0x0072d7f0
00513501  8B F0                     MOV ESI,EAX
00513503  83 C4 08                  ADD ESP,0x8
00513506  85 F6                     TEST ESI,ESI
00513508  75 5D                     JNZ 0x00513567
0051350A  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0051350D  8B 86 CF 01 00 00         MOV EAX,dword ptr [ESI + 0x1cf]
00513513  85 C0                     TEST EAX,EAX
00513515  7C 22                     JL 0x00513539
LAB_00513517:
00513517  8B 8E CB 01 00 00         MOV ECX,dword ptr [ESI + 0x1cb]
0051351D  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
00513520  8D 7A FF                  LEA EDI,[EDX + -0x1]
00513523  3B C7                     CMP EAX,EDI
00513525  7D 12                     JGE 0x00513539
00513527  4A                        DEC EDX
00513528  52                        PUSH EDX
00513529  51                        PUSH ECX
0051352A  E8 41 D7 19 00            CALL 0x006b0c70
0051352F  8B 86 CF 01 00 00         MOV EAX,dword ptr [ESI + 0x1cf]
00513535  85 C0                     TEST EAX,EAX
00513537  7D DE                     JGE 0x00513517
LAB_00513539:
00513539  8B BE CF 01 00 00         MOV EDI,dword ptr [ESI + 0x1cf]
0051353F  8B 96 CB 01 00 00         MOV EDX,dword ptr [ESI + 0x1cb]
00513545  47                        INC EDI
00513546  8D 4D F0                  LEA ECX,[EBP + -0x10]
00513549  8B C7                     MOV EAX,EDI
0051354B  51                        PUSH ECX
0051354C  50                        PUSH EAX
0051354D  52                        PUSH EDX
0051354E  89 BE CF 01 00 00         MOV dword ptr [ESI + 0x1cf],EDI
00513554  E8 E7 AB 19 00            CALL 0x006ae140
00513559  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
0051355C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00513561  5F                        POP EDI
00513562  5E                        POP ESI
00513563  8B E5                     MOV ESP,EBP
00513565  5D                        POP EBP
00513566  C3                        RET
LAB_00513567:
00513567  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
0051356A  68 48 3A 7C 00            PUSH 0x7c3a48
0051356F  68 CC 4C 7A 00            PUSH 0x7a4ccc
00513574  56                        PUSH ESI
00513575  6A 00                     PUSH 0x0
00513577  68 7C 02 00 00            PUSH 0x27c
0051357C  68 3C 38 7C 00            PUSH 0x7c383c
00513581  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00513587  E8 44 9F 19 00            CALL 0x006ad4d0
0051358C  83 C4 18                  ADD ESP,0x18
0051358F  85 C0                     TEST EAX,EAX
00513591  74 01                     JZ 0x00513594
00513593  CC                        INT3
LAB_00513594:
00513594  68 7C 02 00 00            PUSH 0x27c
00513599  68 3C 38 7C 00            PUSH 0x7c383c
0051359E  6A 00                     PUSH 0x0
005135A0  56                        PUSH ESI
005135A1  E8 9A 28 19 00            CALL 0x006a5e40
LAB_005135a6:
005135A6  5F                        POP EDI
005135A7  5E                        POP ESI
005135A8  8B E5                     MOV ESP,EBP
005135AA  5D                        POP EBP
005135AB  C3                        RET
