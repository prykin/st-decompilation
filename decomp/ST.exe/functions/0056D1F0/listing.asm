STAppC::CommonFunction:
0056D1F0  55                        PUSH EBP
0056D1F1  8B EC                     MOV EBP,ESP
0056D1F3  83 EC 48                  SUB ESP,0x48
0056D1F6  8B 81 FA 4E 00 00         MOV EAX,dword ptr [ECX + 0x4efa]
0056D1FC  56                        PUSH ESI
0056D1FD  85 C0                     TEST EAX,EAX
0056D1FF  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0056D202  74 07                     JZ 0x0056d20b
0056D204  33 C0                     XOR EAX,EAX
0056D206  5E                        POP ESI
0056D207  8B E5                     MOV ESP,EBP
0056D209  5D                        POP EBP
0056D20A  C3                        RET
LAB_0056d20b:
0056D20B  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0056D210  8D 55 BC                  LEA EDX,[EBP + -0x44]
0056D213  8D 4D B8                  LEA ECX,[EBP + -0x48]
0056D216  6A 00                     PUSH 0x0
0056D218  52                        PUSH EDX
0056D219  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0056D21C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0056D222  E8 C9 05 1C 00            CALL 0x0072d7f0
0056D227  8B F0                     MOV ESI,EAX
0056D229  83 C4 08                  ADD ESP,0x8
0056D22C  85 F6                     TEST ESI,ESI
0056D22E  0F 85 A5 00 00 00         JNZ 0x0056d2d9
0056D234  A1 4C 67 80 00            MOV EAX,[0x0080674c]
0056D239  85 C0                     TEST EAX,EAX
0056D23B  75 1B                     JNZ 0x0056d258
0056D23D  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0056D242  56                        PUSH ESI
0056D243  50                        PUSH EAX
0056D244  E8 F7 04 15 00            CALL 0x006bd740
0056D249  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0056D24C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0056D251  33 C0                     XOR EAX,EAX
0056D253  5E                        POP ESI
0056D254  8B E5                     MOV ESP,EBP
0056D256  5D                        POP EBP
0056D257  C3                        RET
LAB_0056d258:
0056D258  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0056D25B  8B 81 F6 4E 00 00         MOV EAX,dword ptr [ECX + 0x4ef6]
0056D261  85 C0                     TEST EAX,EAX
0056D263  74 65                     JZ 0x0056d2ca
0056D265  A1 3C 67 80 00            MOV EAX,[0x0080673c]
0056D26A  48                        DEC EAX
0056D26B  85 C0                     TEST EAX,EAX
0056D26D  A3 3C 67 80 00            MOV [0x0080673c],EAX
0056D272  7F 56                     JG 0x0056d2ca
0056D274  33 C0                     XOR EAX,EAX
0056D276  A0 3B 73 80 00            MOV AL,[0x0080733b]
0056D27B  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
0056D27E  8B 04 D5 F0 2A 7C 00      MOV EAX,dword ptr [EDX*0x8 + 0x7c2af0]
0056D285  A3 3C 67 80 00            MOV [0x0080673c],EAX
0056D28A  A1 30 2A 80 00            MOV EAX,[0x00802a30]
0056D28F  85 C0                     TEST EAX,EAX
0056D291  74 1E                     JZ 0x0056d2b1
0056D293  8B 88 A9 00 00 00         MOV ECX,dword ptr [EAX + 0xa9]
0056D299  85 C9                     TEST ECX,ECX
0056D29B  75 14                     JNZ 0x0056d2b1
0056D29D  8B 88 AD 00 00 00         MOV ECX,dword ptr [EAX + 0xad]
0056D2A3  6A 00                     PUSH 0x0
0056D2A5  6A 00                     PUSH 0x0
0056D2A7  6A 00                     PUSH 0x0
0056D2A9  6A 00                     PUSH 0x0
0056D2AB  51                        PUSH ECX
0056D2AC  E8 9F BA 14 00            CALL 0x006b8d50
LAB_0056d2b1:
0056D2B1  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0056D2B7  E8 44 FE 17 00            CALL 0x006ed100
0056D2BC  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
0056D2C2  6A 00                     PUSH 0x0
0056D2C4  52                        PUSH EDX
0056D2C5  E8 76 04 15 00            CALL 0x006bd740
LAB_0056d2ca:
0056D2CA  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0056D2CD  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0056D2D2  33 C0                     XOR EAX,EAX
0056D2D4  5E                        POP ESI
0056D2D5  8B E5                     MOV ESP,EBP
0056D2D7  5D                        POP EBP
0056D2D8  C3                        RET
LAB_0056d2d9:
0056D2D9  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0056D2DC  68 14 A1 7C 00            PUSH 0x7ca114
0056D2E1  68 CC 4C 7A 00            PUSH 0x7a4ccc
0056D2E6  56                        PUSH ESI
0056D2E7  6A 00                     PUSH 0x0
0056D2E9  68 E6 03 00 00            PUSH 0x3e6
0056D2EE  68 C8 A0 7C 00            PUSH 0x7ca0c8
0056D2F3  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0056D2F9  E8 D2 01 14 00            CALL 0x006ad4d0
0056D2FE  83 C4 18                  ADD ESP,0x18
0056D301  85 C0                     TEST EAX,EAX
0056D303  74 01                     JZ 0x0056d306
0056D305  CC                        INT3
LAB_0056d306:
0056D306  68 E7 03 00 00            PUSH 0x3e7
0056D30B  68 C8 A0 7C 00            PUSH 0x7ca0c8
0056D310  6A 00                     PUSH 0x0
0056D312  56                        PUSH ESI
0056D313  E8 28 8B 13 00            CALL 0x006a5e40
0056D318  83 C8 FF                  OR EAX,0xffffffff
0056D31B  5E                        POP ESI
0056D31C  8B E5                     MOV ESP,EBP
0056D31E  5D                        POP EBP
0056D31F  C3                        RET
