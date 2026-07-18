STTorpC::SaveTorpData:
00645420  55                        PUSH EBP
00645421  8B EC                     MOV EBP,ESP
00645423  83 EC 68                  SUB ESP,0x68
00645426  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0064542B  53                        PUSH EBX
0064542C  56                        PUSH ESI
0064542D  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
00645430  57                        PUSH EDI
00645431  8D 55 9C                  LEA EDX,[EBP + -0x64]
00645434  8D 4D 98                  LEA ECX,[EBP + -0x68]
00645437  6A 00                     PUSH 0x0
00645439  52                        PUSH EDX
0064543A  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
0064543D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00645443  E8 A8 83 0E 00            CALL 0x0072d7f0
00645448  8B F0                     MOV ESI,EAX
0064544A  83 C4 08                  ADD ESP,0x8
0064544D  85 F6                     TEST ESI,ESI
0064544F  0F 85 82 01 00 00         JNZ 0x006455d7
00645455  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00645458  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
0064545B  8D 45 FC                  LEA EAX,[EBP + -0x4]
0064545E  C7 06 80 00 00 00         MOV dword ptr [ESI],0x80
00645464  8B 8F 41 02 00 00         MOV ECX,dword ptr [EDI + 0x241]
0064546A  50                        PUSH EAX
0064546B  51                        PUSH ECX
0064546C  E8 AF AB 06 00            CALL 0x006b0020
00645471  8D 55 F0                  LEA EDX,[EBP + -0x10]
00645474  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00645477  52                        PUSH EDX
00645478  E8 E3 5B 06 00            CALL 0x006ab060
0064547D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00645480  8B 0E                     MOV ECX,dword ptr [ESI]
00645482  03 C8                     ADD ECX,EAX
00645484  89 0E                     MOV dword ptr [ESI],ECX
00645486  8D 4D F8                  LEA ECX,[EBP + -0x8]
00645489  51                        PUSH ECX
0064548A  8D 8F D5 01 00 00         LEA ECX,[EDI + 0x1d5]
00645490  E8 3F C4 DB FF            CALL 0x004018d4
00645495  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00645498  8B 1E                     MOV EBX,dword ptr [ESI]
0064549A  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0064549D  8D 45 F4                  LEA EAX,[EBP + -0xc]
006454A0  03 DA                     ADD EBX,EDX
006454A2  50                        PUSH EAX
006454A3  8B CF                     MOV ECX,EDI
006454A5  89 1E                     MOV dword ptr [ESI],EBX
006454A7  E8 EE BC DB FF            CALL 0x0040119a
006454AC  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006454AF  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006454B2  8B 06                     MOV EAX,dword ptr [ESI]
006454B4  03 C1                     ADD EAX,ECX
006454B6  89 06                     MOV dword ptr [ESI],EAX
006454B8  8B F0                     MOV ESI,EAX
006454BA  56                        PUSH ESI
006454BB  E8 B0 57 06 00            CALL 0x006aac70
006454C0  8B 57 20                  MOV EDX,dword ptr [EDI + 0x20]
006454C3  8B D8                     MOV EBX,EAX
006454C5  8D B7 45 02 00 00         LEA ESI,[EDI + 0x245]
006454CB  89 5D DC                  MOV dword ptr [EBP + -0x24],EBX
006454CE  89 13                     MOV dword ptr [EBX],EDX
006454D0  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
006454D3  89 43 04                  MOV dword ptr [EBX + 0x4],EAX
006454D6  8B 4F 28                  MOV ECX,dword ptr [EDI + 0x28]
006454D9  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006454DC  89 4B 08                  MOV dword ptr [EBX + 0x8],ECX
006454DF  C7 43 0C 02 00 00 00      MOV dword ptr [EBX + 0xc],0x2
006454E6  8B 57 2C                  MOV EDX,dword ptr [EDI + 0x2c]
006454E9  8D 7B 14                  LEA EDI,[EBX + 0x14]
006454EC  B9 11 00 00 00            MOV ECX,0x11
006454F1  89 53 10                  MOV dword ptr [EBX + 0x10],EDX
006454F4  8D 53 58                  LEA EDX,[EBX + 0x58]
006454F7  F3 A5                     MOVSD.REP ES:EDI,ESI
006454F9  8D 88 31 02 00 00         LEA ECX,[EAX + 0x231]
006454FF  8B B0 31 02 00 00         MOV ESI,dword ptr [EAX + 0x231]
00645505  89 32                     MOV dword ptr [EDX],ESI
00645507  8B 71 04                  MOV ESI,dword ptr [ECX + 0x4]
0064550A  89 72 04                  MOV dword ptr [EDX + 0x4],ESI
0064550D  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
00645510  89 4A 08                  MOV dword ptr [EDX + 0x8],ECX
00645513  8B 90 3D 02 00 00         MOV EDX,dword ptr [EAX + 0x23d]
00645519  89 53 64                  MOV dword ptr [EBX + 0x64],EDX
0064551C  8B 90 41 02 00 00         MOV EDX,dword ptr [EAX + 0x241]
00645522  8D 4D FC                  LEA ECX,[EBP + -0x4]
00645525  51                        PUSH ECX
00645526  52                        PUSH EDX
00645527  E8 F4 AA 06 00            CALL 0x006b0020
0064552C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0064552F  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00645532  8B F0                     MOV ESI,EAX
00645534  8B C1                     MOV EAX,ECX
00645536  8D BB 80 00 00 00         LEA EDI,[EBX + 0x80]
0064553C  C1 E9 02                  SHR ECX,0x2
0064553F  F3 A5                     MOVSD.REP ES:EDI,ESI
00645541  8B C8                     MOV ECX,EAX
00645543  83 E1 03                  AND ECX,0x3
00645546  F3 A4                     MOVSB.REP ES:EDI,ESI
00645548  C7 43 68 80 00 00 00      MOV dword ptr [EBX + 0x68],0x80
0064554F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00645552  89 4B 6C                  MOV dword ptr [EBX + 0x6c],ECX
00645555  8D 55 F0                  LEA EDX,[EBP + -0x10]
00645558  52                        PUSH EDX
00645559  E8 02 5B 06 00            CALL 0x006ab060
0064555E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00645561  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00645564  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
00645567  05 80 00 00 00            ADD EAX,0x80
0064556C  8B D1                     MOV EDX,ECX
0064556E  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00645571  8D 3C 18                  LEA EDI,[EAX + EBX*0x1]
00645574  C1 E9 02                  SHR ECX,0x2
00645577  F3 A5                     MOVSD.REP ES:EDI,ESI
00645579  8B CA                     MOV ECX,EDX
0064557B  83 E1 03                  AND ECX,0x3
0064557E  F3 A4                     MOVSB.REP ES:EDI,ESI
00645580  89 43 70                  MOV dword ptr [EBX + 0x70],EAX
00645583  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00645586  8D 4D EC                  LEA ECX,[EBP + -0x14]
00645589  89 43 74                  MOV dword ptr [EBX + 0x74],EAX
0064558C  51                        PUSH ECX
0064558D  E8 CE 5A 06 00            CALL 0x006ab060
00645592  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00645595  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00645598  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0064559B  03 C6                     ADD EAX,ESI
0064559D  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
006455A0  8B D1                     MOV EDX,ECX
006455A2  8D 3C 18                  LEA EDI,[EAX + EBX*0x1]
006455A5  C1 E9 02                  SHR ECX,0x2
006455A8  F3 A5                     MOVSD.REP ES:EDI,ESI
006455AA  8B CA                     MOV ECX,EDX
006455AC  83 E1 03                  AND ECX,0x3
006455AF  F3 A4                     MOVSB.REP ES:EDI,ESI
006455B1  89 43 78                  MOV dword ptr [EBX + 0x78],EAX
006455B4  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006455B7  8D 4D E8                  LEA ECX,[EBP + -0x18]
006455BA  89 43 7C                  MOV dword ptr [EBX + 0x7c],EAX
006455BD  51                        PUSH ECX
006455BE  E8 9D 5A 06 00            CALL 0x006ab060
006455C3  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
006455C6  8B C3                     MOV EAX,EBX
006455C8  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006455CE  5F                        POP EDI
006455CF  5E                        POP ESI
006455D0  5B                        POP EBX
006455D1  8B E5                     MOV ESP,EBP
006455D3  5D                        POP EBP
006455D4  C2 04 00                  RET 0x4
LAB_006455d7:
006455D7  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
006455DA  68 38 26 7D 00            PUSH 0x7d2638
006455DF  68 CC 4C 7A 00            PUSH 0x7a4ccc
006455E4  56                        PUSH ESI
006455E5  6A 00                     PUSH 0x0
006455E7  68 D4 04 00 00            PUSH 0x4d4
006455EC  68 C0 25 7D 00            PUSH 0x7d25c0
006455F1  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006455F6  E8 D5 7E 06 00            CALL 0x006ad4d0
006455FB  83 C4 18                  ADD ESP,0x18
006455FE  85 C0                     TEST EAX,EAX
00645600  74 01                     JZ 0x00645603
00645602  CC                        INT3
LAB_00645603:
00645603  68 D5 04 00 00            PUSH 0x4d5
00645608  68 C0 25 7D 00            PUSH 0x7d25c0
0064560D  6A 00                     PUSH 0x0
0064560F  56                        PUSH ESI
00645610  E8 2B 08 06 00            CALL 0x006a5e40
00645615  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
00645618  5F                        POP EDI
00645619  5E                        POP ESI
0064561A  5B                        POP EBX
0064561B  8B E5                     MOV ESP,EBP
0064561D  5D                        POP EBP
0064561E  C2 04 00                  RET 0x4
