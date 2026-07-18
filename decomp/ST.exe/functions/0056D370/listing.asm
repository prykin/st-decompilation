STAppC::OpenGameDBs:
0056D370  55                        PUSH EBP
0056D371  8B EC                     MOV EBP,ESP
0056D373  83 EC 48                  SUB ESP,0x48
0056D376  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0056D37B  53                        PUSH EBX
0056D37C  56                        PUSH ESI
0056D37D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0056D380  57                        PUSH EDI
0056D381  8D 55 BC                  LEA EDX,[EBP + -0x44]
0056D384  8D 4D B8                  LEA ECX,[EBP + -0x48]
0056D387  6A 00                     PUSH 0x0
0056D389  52                        PUSH EDX
0056D38A  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0056D38D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0056D393  E8 58 04 1C 00            CALL 0x0072d7f0
0056D398  8B F0                     MOV ESI,EAX
0056D39A  83 C4 08                  ADD ESP,0x8
0056D39D  85 F6                     TEST ESI,ESI
0056D39F  0F 85 18 01 00 00         JNZ 0x0056d4bd
0056D3A5  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0056D3A8  8B 1D E8 BD 85 00         MOV EBX,dword ptr [0x0085bde8]
0056D3AE  68 6C A1 7C 00            PUSH 0x7ca16c
0056D3B3  8D BE 70 04 00 00         LEA EDI,[ESI + 0x470]
0056D3B9  81 C6 1A 7D 00 00         ADD ESI,0x7d1a
0056D3BF  57                        PUSH EDI
0056D3C0  68 E4 6E 7C 00            PUSH 0x7c6ee4
0056D3C5  56                        PUSH ESI
0056D3C6  FF D3                     CALL EBX
0056D3C8  6A 00                     PUSH 0x0
0056D3CA  6A 00                     PUSH 0x0
0056D3CC  6A 00                     PUSH 0x0
0056D3CE  56                        PUSH ESI
0056D3CF  68 45 03 00 00            PUSH 0x345
0056D3D4  E8 E7 3A 18 00            CALL 0x006f0ec0
0056D3D9  50                        PUSH EAX
0056D3DA  A3 68 67 80 00            MOV [0x00806768],EAX
0056D3DF  E8 DC C3 19 00            CALL 0x007097c0
0056D3E4  68 64 A1 7C 00            PUSH 0x7ca164
0056D3E9  57                        PUSH EDI
0056D3EA  68 E4 6E 7C 00            PUSH 0x7c6ee4
0056D3EF  56                        PUSH ESI
0056D3F0  A3 6C 67 80 00            MOV [0x0080676c],EAX
0056D3F5  FF D3                     CALL EBX
0056D3F7  6A 00                     PUSH 0x0
0056D3F9  6A 00                     PUSH 0x0
0056D3FB  6A 00                     PUSH 0x0
0056D3FD  56                        PUSH ESI
0056D3FE  68 45 03 00 00            PUSH 0x345
0056D403  E8 B8 3A 18 00            CALL 0x006f0ec0
0056D408  83 C4 4C                  ADD ESP,0x4c
0056D40B  A3 70 67 80 00            MOV [0x00806770],EAX
0056D410  50                        PUSH EAX
0056D411  E8 AA C3 19 00            CALL 0x007097c0
0056D416  68 5C A1 7C 00            PUSH 0x7ca15c
0056D41B  57                        PUSH EDI
0056D41C  68 E4 6E 7C 00            PUSH 0x7c6ee4
0056D421  56                        PUSH ESI
0056D422  A3 74 67 80 00            MOV [0x00806774],EAX
0056D427  FF D3                     CALL EBX
0056D429  6A 00                     PUSH 0x0
0056D42B  6A 00                     PUSH 0x0
0056D42D  6A 00                     PUSH 0x0
0056D42F  56                        PUSH ESI
0056D430  68 45 03 00 00            PUSH 0x345
0056D435  E8 86 3A 18 00            CALL 0x006f0ec0
0056D43A  50                        PUSH EAX
0056D43B  A3 78 67 80 00            MOV [0x00806778],EAX
0056D440  E8 7B C3 19 00            CALL 0x007097c0
0056D445  68 50 A1 7C 00            PUSH 0x7ca150
0056D44A  57                        PUSH EDI
0056D44B  68 E4 6E 7C 00            PUSH 0x7c6ee4
0056D450  56                        PUSH ESI
0056D451  A3 7C 67 80 00            MOV [0x0080677c],EAX
0056D456  FF D3                     CALL EBX
0056D458  6A 00                     PUSH 0x0
0056D45A  6A 00                     PUSH 0x0
0056D45C  6A 00                     PUSH 0x0
0056D45E  56                        PUSH ESI
0056D45F  68 45 03 00 00            PUSH 0x345
0056D464  E8 57 3A 18 00            CALL 0x006f0ec0
0056D469  83 C4 50                  ADD ESP,0x50
0056D46C  A3 90 67 80 00            MOV [0x00806790],EAX
0056D471  50                        PUSH EAX
0056D472  E8 49 C3 19 00            CALL 0x007097c0
0056D477  68 48 A1 7C 00            PUSH 0x7ca148
0056D47C  57                        PUSH EDI
0056D47D  68 E4 6E 7C 00            PUSH 0x7c6ee4
0056D482  56                        PUSH ESI
0056D483  A3 94 67 80 00            MOV [0x00806794],EAX
0056D488  FF D3                     CALL EBX
0056D48A  6A 00                     PUSH 0x0
0056D48C  6A 00                     PUSH 0x0
0056D48E  6A 00                     PUSH 0x0
0056D490  56                        PUSH ESI
0056D491  68 45 03 00 00            PUSH 0x345
0056D496  E8 25 3A 18 00            CALL 0x006f0ec0
0056D49B  50                        PUSH EAX
0056D49C  A3 88 67 80 00            MOV [0x00806788],EAX
0056D4A1  E8 1A C3 19 00            CALL 0x007097c0
0056D4A6  83 C4 2C                  ADD ESP,0x2c
0056D4A9  A3 8C 67 80 00            MOV [0x0080678c],EAX
0056D4AE  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0056D4B1  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0056D4B6  5F                        POP EDI
0056D4B7  5E                        POP ESI
0056D4B8  5B                        POP EBX
0056D4B9  8B E5                     MOV ESP,EBP
0056D4BB  5D                        POP EBP
0056D4BC  C3                        RET
LAB_0056d4bd:
0056D4BD  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0056D4C0  68 30 A1 7C 00            PUSH 0x7ca130
0056D4C5  68 CC 4C 7A 00            PUSH 0x7a4ccc
0056D4CA  56                        PUSH ESI
0056D4CB  6A 00                     PUSH 0x0
0056D4CD  68 00 04 00 00            PUSH 0x400
0056D4D2  68 C8 A0 7C 00            PUSH 0x7ca0c8
0056D4D7  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0056D4DD  E8 EE FF 13 00            CALL 0x006ad4d0
0056D4E2  83 C4 18                  ADD ESP,0x18
0056D4E5  85 C0                     TEST EAX,EAX
0056D4E7  74 01                     JZ 0x0056d4ea
0056D4E9  CC                        INT3
LAB_0056d4ea:
0056D4EA  68 00 04 00 00            PUSH 0x400
0056D4EF  68 C8 A0 7C 00            PUSH 0x7ca0c8
0056D4F4  6A 00                     PUSH 0x0
0056D4F6  56                        PUSH ESI
0056D4F7  E8 44 89 13 00            CALL 0x006a5e40
0056D4FC  5F                        POP EDI
0056D4FD  5E                        POP ESI
0056D4FE  5B                        POP EBX
0056D4FF  8B E5                     MOV ESP,EBP
0056D501  5D                        POP EBP
0056D502  C3                        RET
