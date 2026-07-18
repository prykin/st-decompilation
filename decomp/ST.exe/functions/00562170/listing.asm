FUN_00562170:
00562170  55                        PUSH EBP
00562171  8B EC                     MOV EBP,ESP
00562173  83 EC 14                  SUB ESP,0x14
00562176  A1 8C 33 80 00            MOV EAX,[0x0080338c]
0056217B  53                        PUSH EBX
0056217C  56                        PUSH ESI
0056217D  33 F6                     XOR ESI,ESI
0056217F  33 DB                     XOR EBX,EBX
00562181  3B C6                     CMP EAX,ESI
00562183  57                        PUSH EDI
00562184  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
00562187  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0056218A  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
0056218D  0F 8E AA 00 00 00         JLE 0x0056223d
00562193  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
LAB_00562196:
00562196  A1 10 33 80 00            MOV EAX,[0x00803310]
0056219B  8B 4C 06 04               MOV ECX,dword ptr [ESI + EAX*0x1 + 0x4]
0056219F  8B 14 06                  MOV EDX,dword ptr [ESI + EAX*0x1]
005621A2  A1 08 33 80 00            MOV EAX,[0x00803308]
005621A7  51                        PUSH ECX
005621A8  8B 0D 04 33 80 00         MOV ECX,dword ptr [0x00803304]
005621AE  52                        PUSH EDX
005621AF  50                        PUSH EAX
005621B0  51                        PUSH ECX
005621B1  E8 5A 97 17 00            CALL 0x006db910
005621B6  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005621B9  8B F8                     MOV EDI,EAX
005621BB  85 C9                     TEST ECX,ECX
005621BD  7E 61                     JLE 0x00562220
005621BF  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005621C2  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005621C5  03 C1                     ADD EAX,ECX
005621C7  8B D9                     MOV EBX,ECX
005621C9  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_005621cc:
005621CC  8B 06                     MOV EAX,dword ptr [ESI]
005621CE  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
005621D1  A1 00 33 80 00            MOV EAX,[0x00803300]
005621D6  8B 4C 90 04               MOV ECX,dword ptr [EAX + EDX*0x4 + 0x4]
005621DA  8D 04 90                  LEA EAX,[EAX + EDX*0x4]
005621DD  51                        PUSH ECX
005621DE  8B 0D 04 33 80 00         MOV ECX,dword ptr [0x00803304]
005621E4  8B 10                     MOV EDX,dword ptr [EAX]
005621E6  A1 08 33 80 00            MOV EAX,[0x00803308]
005621EB  52                        PUSH EDX
005621EC  50                        PUSH EAX
005621ED  51                        PUSH ECX
005621EE  E8 1D 97 17 00            CALL 0x006db910
005621F3  2B C7                     SUB EAX,EDI
005621F5  99                        CDQ
005621F6  33 C2                     XOR EAX,EDX
005621F8  2B C2                     SUB EAX,EDX
005621FA  3D B4 00 00 00            CMP EAX,0xb4
005621FF  7E 09                     JLE 0x0056220a
00562201  BA 68 01 00 00            MOV EDX,0x168
00562206  2B D0                     SUB EDX,EAX
00562208  8B C2                     MOV EAX,EDX
LAB_0056220a:
0056220A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0056220D  83 C6 04                  ADD ESI,0x4
00562210  03 D0                     ADD EDX,EAX
00562212  4B                        DEC EBX
00562213  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00562216  75 B4                     JNZ 0x005621cc
00562218  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
0056221B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0056221E  8B DA                     MOV EBX,EDX
LAB_00562220:
00562220  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00562223  8B 15 8C 33 80 00         MOV EDX,dword ptr [0x0080338c]
00562229  40                        INC EAX
0056222A  83 C6 14                  ADD ESI,0x14
0056222D  3B C2                     CMP EAX,EDX
0056222F  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00562232  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
00562235  0F 8C 5B FF FF FF         JL 0x00562196
0056223B  EB 03                     JMP 0x00562240
LAB_0056223d:
0056223D  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
LAB_00562240:
00562240  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00562243  8B 35 00 33 80 00         MOV ESI,dword ptr [0x00803300]
00562249  BF 01 00 00 00            MOV EDI,0x1
0056224E  8B 02                     MOV EAX,dword ptr [EDX]
00562250  3B CF                     CMP ECX,EDI
00562252  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00562255  8B 74 86 0C               MOV ESI,dword ptr [ESI + EAX*0x4 + 0xc]
00562259  0F 8E BD 00 00 00         JLE 0x0056231c
0056225F  83 C2 04                  ADD EDX,0x4
00562262  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
LAB_00562265:
00562265  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00562268  8B 01                     MOV EAX,dword ptr [ECX]
0056226A  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0056226D  A1 00 33 80 00            MOV EAX,[0x00803300]
00562272  8B 5C 90 0C               MOV EBX,dword ptr [EAX + EDX*0x4 + 0xc]
00562276  8B 0C 90                  MOV ECX,dword ptr [EAX + EDX*0x4]
00562279  8D 04 90                  LEA EAX,[EAX + EDX*0x4]
0056227C  8B 15 04 33 80 00         MOV EDX,dword ptr [0x00803304]
00562282  03 F3                     ADD ESI,EBX
00562284  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
00562287  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
0056228A  50                        PUSH EAX
0056228B  51                        PUSH ECX
0056228C  8B 0D 08 33 80 00         MOV ECX,dword ptr [0x00803308]
00562292  51                        PUSH ECX
00562293  52                        PUSH EDX
00562294  E8 77 96 17 00            CALL 0x006db910
00562299  85 FF                     TEST EDI,EDI
0056229B  8B D8                     MOV EBX,EAX
0056229D  7E 65                     JLE 0x00562304
0056229F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005622A2  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005622A5  03 C7                     ADD EAX,EDI
005622A7  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
005622AA  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_005622ad:
005622AD  8B 06                     MOV EAX,dword ptr [ESI]
005622AF  8B 0D 00 33 80 00         MOV ECX,dword ptr [0x00803300]
005622B5  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005622B8  8B 54 81 04               MOV EDX,dword ptr [ECX + EAX*0x4 + 0x4]
005622BC  8D 04 81                  LEA EAX,[ECX + EAX*0x4]
005622BF  8B 0D 08 33 80 00         MOV ECX,dword ptr [0x00803308]
005622C5  52                        PUSH EDX
005622C6  8B 00                     MOV EAX,dword ptr [EAX]
005622C8  8B 15 04 33 80 00         MOV EDX,dword ptr [0x00803304]
005622CE  50                        PUSH EAX
005622CF  51                        PUSH ECX
005622D0  52                        PUSH EDX
005622D1  E8 3A 96 17 00            CALL 0x006db910
005622D6  2B C3                     SUB EAX,EBX
005622D8  99                        CDQ
005622D9  33 C2                     XOR EAX,EDX
005622DB  2B C2                     SUB EAX,EDX
005622DD  3D B4 00 00 00            CMP EAX,0xb4
005622E2  7E 09                     JLE 0x005622ed
005622E4  B9 68 01 00 00            MOV ECX,0x168
005622E9  2B C8                     SUB ECX,EAX
005622EB  8B C1                     MOV EAX,ECX
LAB_005622ed:
005622ED  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005622F0  83 C6 04                  ADD ESI,0x4
005622F3  03 D0                     ADD EDX,EAX
005622F5  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
005622F8  48                        DEC EAX
005622F9  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
005622FC  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
005622FF  75 AC                     JNZ 0x005622ad
00562301  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
LAB_00562304:
00562304  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00562307  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0056230A  47                        INC EDI
0056230B  83 C1 04                  ADD ECX,0x4
0056230E  3B F8                     CMP EDI,EAX
00562310  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00562313  0F 8C 4C FF FF FF         JL 0x00562265
00562319  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_0056231c:
0056231C  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0056231F  85 C9                     TEST ECX,ECX
00562321  7E 0D                     JLE 0x00562330
00562323  A1 28 33 80 00            MOV EAX,[0x00803328]
00562328  0F AF C3                  IMUL EAX,EBX
0056232B  99                        CDQ
0056232C  F7 F9                     IDIV ECX
0056232E  03 D8                     ADD EBX,EAX
LAB_00562330:
00562330  8D 04 1E                  LEA EAX,[ESI + EBX*0x1]
00562333  5F                        POP EDI
00562334  5E                        POP ESI
00562335  5B                        POP EBX
00562336  8B E5                     MOV ESP,EBP
00562338  5D                        POP EBP
00562339  C2 08 00                  RET 0x8
