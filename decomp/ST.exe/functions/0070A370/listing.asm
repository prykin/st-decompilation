FUN_0070a370:
0070A370  55                        PUSH EBP
0070A371  8B EC                     MOV EBP,ESP
0070A373  83 EC 74                  SUB ESP,0x74
0070A376  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0070A37B  56                        PUSH ESI
0070A37C  8D 55 90                  LEA EDX,[EBP + -0x70]
0070A37F  8D 4D 8C                  LEA ECX,[EBP + -0x74]
0070A382  6A 00                     PUSH 0x0
0070A384  52                        PUSH EDX
0070A385  89 45 8C                  MOV dword ptr [EBP + -0x74],EAX
0070A388  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070A38E  E8 5D 34 02 00            CALL 0x0072d7f0
0070A393  8B F0                     MOV ESI,EAX
0070A395  83 C4 08                  ADD ESP,0x8
0070A398  85 F6                     TEST ESI,ESI
0070A39A  75 7D                     JNZ 0x0070a419
0070A39C  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0070A39F  85 F6                     TEST ESI,ESI
0070A3A1  74 64                     JZ 0x0070a407
0070A3A3  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
0070A3A6  85 C0                     TEST EAX,EAX
0070A3A8  74 4D                     JZ 0x0070a3f7
0070A3AA  C7 40 04 00 00 00 00      MOV dword ptr [EAX + 0x4],0x0
0070A3B1  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
0070A3B4  8D 55 D0                  LEA EDX,[EBP + -0x30]
0070A3B7  E8 D4 6D FA FF            CALL 0x006b1190
0070A3BC  85 C0                     TEST EAX,EAX
0070A3BE  7C 27                     JL 0x0070a3e7
LAB_0070a3c0:
0070A3C0  8B 45 F9                  MOV EAX,dword ptr [EBP + -0x7]
0070A3C3  85 C0                     TEST EAX,EAX
0070A3C5  74 11                     JZ 0x0070a3d8
0070A3C7  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
0070A3CA  8D 45 F9                  LEA EAX,[EBP + -0x7]
0070A3CD  50                        PUSH EAX
0070A3CE  51                        PUSH ECX
0070A3CF  56                        PUSH ESI
0070A3D0  E8 3B F6 FF FF            CALL 0x00709a10
0070A3D5  83 C4 0C                  ADD ESP,0xc
LAB_0070a3d8:
0070A3D8  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
0070A3DB  8D 55 D0                  LEA EDX,[EBP + -0x30]
0070A3DE  E8 AD 6D FA FF            CALL 0x006b1190
0070A3E3  85 C0                     TEST EAX,EAX
0070A3E5  7D D9                     JGE 0x0070a3c0
LAB_0070a3e7:
0070A3E7  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
0070A3EA  52                        PUSH EDX
0070A3EB  E8 20 3D FA FF            CALL 0x006ae110
0070A3F0  C7 46 04 00 00 00 00      MOV dword ptr [ESI + 0x4],0x0
LAB_0070a3f7:
0070A3F7  6A 14                     PUSH 0x14
0070A3F9  6A 2D                     PUSH 0x2d
0070A3FB  6A 14                     PUSH 0x14
0070A3FD  6A 00                     PUSH 0x0
0070A3FF  E8 8C 3E FA FF            CALL 0x006ae290
0070A404  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
LAB_0070a407:
0070A407  8B 45 8C                  MOV EAX,dword ptr [EBP + -0x74]
0070A40A  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0070A40F  B8 01 00 00 00            MOV EAX,0x1
0070A414  5E                        POP ESI
0070A415  8B E5                     MOV ESP,EBP
0070A417  5D                        POP EBP
0070A418  C3                        RET
LAB_0070a419:
0070A419  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
0070A41C  68 BC FF 7E 00            PUSH 0x7effbc
0070A421  68 CC 4C 7A 00            PUSH 0x7a4ccc
0070A426  56                        PUSH ESI
0070A427  6A 00                     PUSH 0x0
0070A429  68 8D 01 00 00            PUSH 0x18d
0070A42E  68 5C FF 7E 00            PUSH 0x7eff5c
0070A433  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070A439  E8 92 30 FA FF            CALL 0x006ad4d0
0070A43E  83 C4 18                  ADD ESP,0x18
0070A441  85 C0                     TEST EAX,EAX
0070A443  74 01                     JZ 0x0070a446
0070A445  CC                        INT3
LAB_0070a446:
0070A446  68 8F 01 00 00            PUSH 0x18f
0070A44B  68 5C FF 7E 00            PUSH 0x7eff5c
0070A450  6A 00                     PUSH 0x0
0070A452  56                        PUSH ESI
0070A453  E8 E8 B9 F9 FF            CALL 0x006a5e40
0070A458  33 C0                     XOR EAX,EAX
0070A45A  5E                        POP ESI
0070A45B  8B E5                     MOV ESP,EBP
0070A45D  5D                        POP EBP
0070A45E  C3                        RET
