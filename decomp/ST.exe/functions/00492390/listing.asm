STBoatC::sub_00492390:
00492390  55                        PUSH EBP
00492391  8B EC                     MOV EBP,ESP
00492393  51                        PUSH ECX
00492394  8B 81 5D 04 00 00         MOV EAX,dword ptr [ECX + 0x45d]
0049239A  83 F8 0F                  CMP EAX,0xf
0049239D  74 05                     JZ 0x004923a4
0049239F  83 F8 0E                  CMP EAX,0xe
004923A2  75 55                     JNZ 0x004923f9
LAB_004923a4:
004923A4  8B 81 C6 07 00 00         MOV EAX,dword ptr [ECX + 0x7c6]
004923AA  85 C0                     TEST EAX,EAX
004923AC  75 4B                     JNZ 0x004923f9
004923AE  C7 81 C6 07 00 00 01 00 00 00  MOV dword ptr [ECX + 0x7c6],0x1
004923B8  8B 89 8E 05 00 00         MOV ECX,dword ptr [ECX + 0x58e]
004923BE  8D 45 FC                  LEA EAX,[EBP + -0x4]
004923C1  50                        PUSH EAX
004923C2  51                        PUSH ECX
004923C3  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004923C9  E8 02 3F 25 00            CALL 0x006e62d0
004923CE  83 F8 FC                  CMP EAX,-0x4
004923D1  75 1B                     JNZ 0x004923ee
004923D3  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004923D9  68 00 51 00 00            PUSH 0x5100
004923DE  68 3C 9D 7A 00            PUSH 0x7a9d3c
004923E3  52                        PUSH EDX
004923E4  68 03 00 FE AF            PUSH 0xaffe0003
004923E9  E8 52 3A 21 00            CALL 0x006a5e40
LAB_004923ee:
004923EE  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004923F1  8B 01                     MOV EAX,dword ptr [ECX]
004923F3  FF 90 9C 00 00 00         CALL dword ptr [EAX + 0x9c]
LAB_004923f9:
004923F9  8B E5                     MOV ESP,EBP
004923FB  5D                        POP EBP
004923FC  C3                        RET
