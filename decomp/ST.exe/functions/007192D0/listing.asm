FUN_007192d0:
007192D0  55                        PUSH EBP
007192D1  8B EC                     MOV EBP,ESP
007192D3  81 EC 4C 04 00 00         SUB ESP,0x44c
007192D9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
007192DE  53                        PUSH EBX
007192DF  56                        PUSH ESI
007192E0  57                        PUSH EDI
007192E1  8D 55 B8                  LEA EDX,[EBP + -0x48]
007192E4  8D 4D B4                  LEA ECX,[EBP + -0x4c]
007192E7  6A 00                     PUSH 0x0
007192E9  52                        PUSH EDX
007192EA  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
007192ED  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
007192F3  E8 F8 44 01 00            CALL 0x0072d7f0
007192F8  8B F0                     MOV ESI,EAX
007192FA  83 C4 08                  ADD ESP,0x8
007192FD  85 F6                     TEST ESI,ESI
007192FF  0F 85 9B 00 00 00         JNZ 0x007193a0
00719305  8B 35 DC BE 85 00         MOV ESI,dword ptr [0x0085bedc]
0071930B  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0071930E  FF D6                     CALL ESI
00719310  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00719313  8D 45 FC                  LEA EAX,[EBP + -0x4]
00719316  50                        PUSH EAX
00719317  FF D6                     CALL ESI
00719319  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
0071931C  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0071931F  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
00719322  50                        PUSH EAX
00719323  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00719326  8D 4D F8                  LEA ECX,[EBP + -0x8]
00719329  57                        PUSH EDI
0071932A  51                        PUSH ECX
0071932B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0071932E  52                        PUSH EDX
0071932F  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00719332  53                        PUSH EBX
00719333  50                        PUSH EAX
00719334  51                        PUSH ECX
00719335  52                        PUSH EDX
00719336  E8 55 FE FF FF            CALL 0x00719190
0071933B  83 C4 24                  ADD ESP,0x24
0071933E  85 C0                     TEST EAX,EAX
00719340  75 29                     JNZ 0x0071936b
LAB_00719342:
00719342  8D 45 FC                  LEA EAX,[EBP + -0x4]
00719345  50                        PUSH EAX
00719346  FF D6                     CALL ESI
00719348  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0071934B  50                        PUSH EAX
0071934C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0071934F  8D 4D F8                  LEA ECX,[EBP + -0x8]
00719352  57                        PUSH EDI
00719353  51                        PUSH ECX
00719354  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00719357  52                        PUSH EDX
00719358  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0071935B  53                        PUSH EBX
0071935C  50                        PUSH EAX
0071935D  51                        PUSH ECX
0071935E  52                        PUSH EDX
0071935F  E8 2C FE FF FF            CALL 0x00719190
00719364  83 C4 24                  ADD ESP,0x24
00719367  85 C0                     TEST EAX,EAX
00719369  74 D7                     JZ 0x00719342
LAB_0071936b:
0071936B  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0071936E  B9 00 01 00 00            MOV ECX,0x100
00719373  33 C0                     XOR EAX,EAX
00719375  8D BD B4 FB FF FF         LEA EDI,[EBP + 0xfffffbb4]
0071937B  F3 AB                     STOSD.REP ES:EDI
0071937D  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00719380  53                        PUSH EBX
00719381  8D 8D B4 FB FF FF         LEA ECX,[EBP + 0xfffffbb4]
00719387  50                        PUSH EAX
00719388  51                        PUSH ECX
00719389  52                        PUSH EDX
0071938A  E8 61 75 F9 FF            CALL 0x006b08f0
0071938F  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
00719392  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00719397  33 C0                     XOR EAX,EAX
00719399  5F                        POP EDI
0071939A  5E                        POP ESI
0071939B  5B                        POP EBX
0071939C  8B E5                     MOV ESP,EBP
0071939E  5D                        POP EBP
0071939F  C3                        RET
LAB_007193a0:
007193A0  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
007193A3  68 B0 07 7F 00            PUSH 0x7f07b0
007193A8  68 CC 4C 7A 00            PUSH 0x7a4ccc
007193AD  56                        PUSH ESI
007193AE  6A 00                     PUSH 0x0
007193B0  68 8F 01 00 00            PUSH 0x18f
007193B5  68 18 07 7F 00            PUSH 0x7f0718
007193BA  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
007193C0  E8 0B 41 F9 FF            CALL 0x006ad4d0
007193C5  83 C4 18                  ADD ESP,0x18
007193C8  85 C0                     TEST EAX,EAX
007193CA  74 01                     JZ 0x007193cd
007193CC  CC                        INT3
LAB_007193cd:
007193CD  68 90 01 00 00            PUSH 0x190
007193D2  68 18 07 7F 00            PUSH 0x7f0718
007193D7  6A 00                     PUSH 0x0
007193D9  56                        PUSH ESI
007193DA  E8 61 CA F8 FF            CALL 0x006a5e40
007193DF  8B C6                     MOV EAX,ESI
007193E1  5F                        POP EDI
007193E2  5E                        POP ESI
007193E3  5B                        POP EBX
007193E4  8B E5                     MOV ESP,EBP
007193E6  5D                        POP EBP
007193E7  C3                        RET
