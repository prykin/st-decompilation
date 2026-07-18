FUN_00430620:
00430620  55                        PUSH EBP
00430621  8B EC                     MOV EBP,ESP
00430623  83 EC 4C                  SUB ESP,0x4c
00430626  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0043062B  56                        PUSH ESI
0043062C  8D 55 B8                  LEA EDX,[EBP + -0x48]
0043062F  8D 4D B4                  LEA ECX,[EBP + -0x4c]
00430632  6A 00                     PUSH 0x0
00430634  52                        PUSH EDX
00430635  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0043063C  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
0043063F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00430645  E8 A6 D1 2F 00            CALL 0x0072d7f0
0043064A  8B F0                     MOV ESI,EAX
0043064C  83 C4 08                  ADD ESP,0x8
0043064F  85 F6                     TEST ESI,ESI
00430651  75 5F                     JNZ 0x004306b2
00430653  0F BF 55 08               MOVSX EDX,word ptr [EBP + 0x8]
00430657  8B 0D 30 A1 7F 00         MOV ECX,dword ptr [0x007fa130]
0043065D  8D 45 FC                  LEA EAX,[EBP + -0x4]
00430660  50                        PUSH EAX
00430661  E8 0A C6 27 00            CALL 0x006acc70
00430666  83 F8 FC                  CMP EAX,-0x4
00430669  74 34                     JZ 0x0043069f
0043066B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0043066E  85 C0                     TEST EAX,EAX
00430670  75 1B                     JNZ 0x0043068d
00430672  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00430678  68 06 08 00 00            PUSH 0x806
0043067D  68 04 60 7A 00            PUSH 0x7a6004
00430682  51                        PUSH ECX
00430683  68 09 00 FE AF            PUSH 0xaffe0009
00430688  E8 B3 57 27 00            CALL 0x006a5e40
LAB_0043068d:
0043068D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00430690  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00430693  8B 42 18                  MOV EAX,dword ptr [EDX + 0x18]
00430696  3B C1                     CMP EAX,ECX
00430698  B8 01 00 00 00            MOV EAX,0x1
0043069D  74 03                     JZ 0x004306a2
LAB_0043069f:
0043069F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
LAB_004306a2:
004306A2  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
004306A5  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004306AB  5E                        POP ESI
004306AC  8B E5                     MOV ESP,EBP
004306AE  5D                        POP EBP
004306AF  C2 08 00                  RET 0x8
LAB_004306b2:
004306B2  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
004306B5  81 FE 09 00 FE AF         CMP ESI,0xaffe0009
004306BB  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004306C1  74 36                     JZ 0x004306f9
004306C3  68 40 67 7A 00            PUSH 0x7a6740
004306C8  68 CC 4C 7A 00            PUSH 0x7a4ccc
004306CD  56                        PUSH ESI
004306CE  6A 00                     PUSH 0x0
004306D0  68 0B 08 00 00            PUSH 0x80b
004306D5  68 04 60 7A 00            PUSH 0x7a6004
004306DA  E8 F1 CD 27 00            CALL 0x006ad4d0
004306DF  83 C4 18                  ADD ESP,0x18
004306E2  85 C0                     TEST EAX,EAX
004306E4  74 01                     JZ 0x004306e7
004306E6  CC                        INT3
LAB_004306e7:
004306E7  68 0C 08 00 00            PUSH 0x80c
004306EC  68 04 60 7A 00            PUSH 0x7a6004
004306F1  6A 00                     PUSH 0x0
004306F3  56                        PUSH ESI
004306F4  E8 47 57 27 00            CALL 0x006a5e40
LAB_004306f9:
004306F9  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004306FC  5E                        POP ESI
004306FD  8B E5                     MOV ESP,EBP
004306FF  5D                        POP EBP
00430700  C2 08 00                  RET 0x8
