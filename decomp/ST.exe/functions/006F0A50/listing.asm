FUN_006f0a50:
006F0A50  55                        PUSH EBP
006F0A51  8B EC                     MOV EBP,ESP
006F0A53  83 EC 58                  SUB ESP,0x58
006F0A56  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006F0A5B  53                        PUSH EBX
006F0A5C  56                        PUSH ESI
006F0A5D  57                        PUSH EDI
006F0A5E  8D 55 AC                  LEA EDX,[EBP + -0x54]
006F0A61  8D 4D A8                  LEA ECX,[EBP + -0x58]
006F0A64  6A 00                     PUSH 0x0
006F0A66  52                        PUSH EDX
006F0A67  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
006F0A6A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006F0A70  E8 7B CD 03 00            CALL 0x0072d7f0
006F0A75  8B F0                     MOV ESI,EAX
006F0A77  83 C4 08                  ADD ESP,0x8
006F0A7A  85 F6                     TEST ESI,ESI
006F0A7C  0F 85 37 01 00 00         JNZ 0x006f0bb9
006F0A82  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006F0A85  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
006F0A88  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006F0A8B  85 C0                     TEST EAX,EAX
006F0A8D  74 0D                     JZ 0x006f0a9c
006F0A8F  85 DB                     TEST EBX,EBX
006F0A91  74 09                     JZ 0x006f0a9c
006F0A93  85 F6                     TEST ESI,ESI
006F0A95  7C 05                     JL 0x006f0a9c
006F0A97  83 FE 06                  CMP ESI,0x6
006F0A9A  7C 17                     JL 0x006f0ab3
LAB_006f0a9c:
006F0A9C  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006F0AA1  68 79 02 00 00            PUSH 0x279
006F0AA6  68 88 EF 7E 00            PUSH 0x7eef88
006F0AAB  50                        PUSH EAX
006F0AAC  6A CC                     PUSH -0x34
006F0AAE  E8 8D 53 FB FF            CALL 0x006a5e40
LAB_006f0ab3:
006F0AB3  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F0AB6  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006F0AB9  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
006F0ABC  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006F0ABF  8D 44 0A FF               LEA EAX,[EDX + ECX*0x1 + -0x1]
006F0AC3  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006F0AC6  3B D0                     CMP EDX,EAX
006F0AC8  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006F0ACB  8D 4C 0F FF               LEA ECX,[EDI + ECX*0x1 + -0x1]
006F0ACF  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
006F0AD2  0F 8F CF 00 00 00         JG 0x006f0ba7
006F0AD8  8D 04 12                  LEA EAX,[EDX + EDX*0x1]
006F0ADB  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_006f0ade:
006F0ADE  3B F9                     CMP EDI,ECX
006F0AE0  0F 8F A9 00 00 00         JG 0x006f0b8f
006F0AE6  8D 0C 3F                  LEA ECX,[EDI + EDI*0x1]
006F0AE9  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_006f0aec:
006F0AEC  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006F0AEF  85 C0                     TEST EAX,EAX
006F0AF1  0F 8C 80 00 00 00         JL 0x006f0b77
006F0AF7  8B 0B                     MOV ECX,dword ptr [EBX]
006F0AF9  3B D1                     CMP EDX,ECX
006F0AFB  7D 7A                     JGE 0x006f0b77
006F0AFD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F0B00  85 C0                     TEST EAX,EAX
006F0B02  7C 73                     JL 0x006f0b77
006F0B04  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
006F0B07  3B F8                     CMP EDI,EAX
006F0B09  7D 6C                     JGE 0x006f0b77
006F0B0B  85 F6                     TEST ESI,ESI
006F0B0D  7C 68                     JL 0x006f0b77
006F0B0F  83 FE 06                  CMP ESI,0x6
006F0B12  7D 63                     JGE 0x006f0b77
006F0B14  0F AF C6                  IMUL EAX,ESI
006F0B17  03 C7                     ADD EAX,EDI
006F0B19  0F AF C1                  IMUL EAX,ECX
006F0B1C  03 C2                     ADD EAX,EDX
006F0B1E  8D 54 40 06               LEA EDX,[EAX + EAX*0x2 + 0x6]
006F0B22  66 8B 0C 53               MOV CX,word ptr [EBX + EDX*0x2]
006F0B26  66 85 C9                  TEST CX,CX
006F0B29  74 34                     JZ 0x006f0b5f
006F0B2B  F6 C5 0F                  TEST CH,0xf
006F0B2E  74 2F                     JZ 0x006f0b5f
006F0B30  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006F0B33  83 EC 08                  SUB ESP,0x8
006F0B36  8B D4                     MOV EDX,ESP
006F0B38  8D 4C 43 08               LEA ECX,[EBX + EAX*0x2 + 0x8]
006F0B3C  56                        PUSH ESI
006F0B3D  8B 01                     MOV EAX,dword ptr [ECX]
006F0B3F  89 02                     MOV dword ptr [EDX],EAX
006F0B41  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006F0B44  66 8B 49 04               MOV CX,word ptr [ECX + 0x4]
006F0B48  66 89 4A 04               MOV word ptr [EDX + 0x4],CX
006F0B4C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F0B4F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006F0B52  52                        PUSH EDX
006F0B53  50                        PUSH EAX
006F0B54  51                        PUSH ECX
006F0B55  E8 36 F4 FF FF            CALL 0x006eff90
006F0B5A  83 C4 18                  ADD ESP,0x18
006F0B5D  EB 15                     JMP 0x006f0b74
LAB_006f0b5f:
006F0B5F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F0B62  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006F0B65  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006F0B68  56                        PUSH ESI
006F0B69  52                        PUSH EDX
006F0B6A  50                        PUSH EAX
006F0B6B  51                        PUSH ECX
006F0B6C  E8 2F F6 FF FF            CALL 0x006f01a0
006F0B71  83 C4 10                  ADD ESP,0x10
LAB_006f0b74:
006F0B74  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
LAB_006f0b77:
006F0B77  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006F0B7A  47                        INC EDI
006F0B7B  83 C1 02                  ADD ECX,0x2
006F0B7E  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006F0B81  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006F0B84  3B F9                     CMP EDI,ECX
006F0B86  0F 8E 60 FF FF FF         JLE 0x006f0aec
006F0B8C  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
LAB_006f0b8f:
006F0B8F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006F0B92  42                        INC EDX
006F0B93  83 C0 02                  ADD EAX,0x2
006F0B96  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006F0B99  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006F0B9C  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006F0B9F  3B D0                     CMP EDX,EAX
006F0BA1  0F 8E 37 FF FF FF         JLE 0x006f0ade
LAB_006f0ba7:
006F0BA7  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
006F0BAA  33 C0                     XOR EAX,EAX
006F0BAC  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006F0BB2  5F                        POP EDI
006F0BB3  5E                        POP ESI
006F0BB4  5B                        POP EBX
006F0BB5  8B E5                     MOV ESP,EBP
006F0BB7  5D                        POP EBP
006F0BB8  C3                        RET
LAB_006f0bb9:
006F0BB9  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
006F0BBC  68 64 F0 7E 00            PUSH 0x7ef064
006F0BC1  68 CC 4C 7A 00            PUSH 0x7a4ccc
006F0BC6  56                        PUSH ESI
006F0BC7  6A 00                     PUSH 0x0
006F0BC9  68 8B 02 00 00            PUSH 0x28b
006F0BCE  68 88 EF 7E 00            PUSH 0x7eef88
006F0BD3  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006F0BD8  E8 F3 C8 FB FF            CALL 0x006ad4d0
006F0BDD  83 C4 18                  ADD ESP,0x18
006F0BE0  85 C0                     TEST EAX,EAX
006F0BE2  74 01                     JZ 0x006f0be5
006F0BE4  CC                        INT3
LAB_006f0be5:
006F0BE5  68 8D 02 00 00            PUSH 0x28d
006F0BEA  68 88 EF 7E 00            PUSH 0x7eef88
006F0BEF  6A 00                     PUSH 0x0
006F0BF1  56                        PUSH ESI
006F0BF2  E8 49 52 FB FF            CALL 0x006a5e40
006F0BF7  8B C6                     MOV EAX,ESI
006F0BF9  5F                        POP EDI
006F0BFA  5E                        POP ESI
006F0BFB  5B                        POP EBX
006F0BFC  8B E5                     MOV ESP,EBP
006F0BFE  5D                        POP EBP
006F0BFF  C3                        RET
