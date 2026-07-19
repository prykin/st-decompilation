Visible::PrepareAfterSave:
005585F0  55                        PUSH EBP
005585F1  8B EC                     MOV EBP,ESP
005585F3  83 EC 54                  SUB ESP,0x54
005585F6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005585FB  53                        PUSH EBX
005585FC  56                        PUSH ESI
005585FD  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00558600  57                        PUSH EDI
00558601  8D 55 B0                  LEA EDX,[EBP + -0x50]
00558604  8D 4D AC                  LEA ECX,[EBP + -0x54]
00558607  6A 00                     PUSH 0x0
00558609  52                        PUSH EDX
0055860A  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
0055860D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00558613  E8 D8 51 1D 00            CALL 0x0072d7f0
00558618  8B D8                     MOV EBX,EAX
0055861A  83 C4 08                  ADD ESP,0x8
0055861D  85 DB                     TEST EBX,EBX
0055861F  0F 85 2A 01 00 00         JNZ 0x0055874f
00558625  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00558628  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
0055862B  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
0055862E  89 4B 20                  MOV dword ptr [EBX + 0x20],ECX
00558631  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
00558634  89 53 24                  MOV dword ptr [EBX + 0x24],EDX
00558637  8B 48 20                  MOV ECX,dword ptr [EAX + 0x20]
0055863A  89 4B 28                  MOV dword ptr [EBX + 0x28],ECX
0055863D  8B 50 24                  MOV EDX,dword ptr [EAX + 0x24]
00558640  89 53 2C                  MOV dword ptr [EBX + 0x2c],EDX
00558643  8B 48 28                  MOV ECX,dword ptr [EAX + 0x28]
00558646  89 4B 30                  MOV dword ptr [EBX + 0x30],ECX
00558649  8B 50 2C                  MOV EDX,dword ptr [EAX + 0x2c]
0055864C  89 53 34                  MOV dword ptr [EBX + 0x34],EDX
0055864F  8B 48 30                  MOV ECX,dword ptr [EAX + 0x30]
00558652  89 4B 1C                  MOV dword ptr [EBX + 0x1c],ECX
00558655  8B 50 40                  MOV EDX,dword ptr [EAX + 0x40]
00558658  89 93 14 01 00 00         MOV dword ptr [EBX + 0x114],EDX
0055865E  8B 48 44                  MOV ECX,dword ptr [EAX + 0x44]
00558661  8D 50 48                  LEA EDX,[EAX + 0x48]
00558664  89 8B F8 00 00 00         MOV dword ptr [EBX + 0xf8],ECX
0055866A  8D 8B FC 00 00 00         LEA ECX,[EBX + 0xfc]
00558670  8B 32                     MOV ESI,dword ptr [EDX]
00558672  89 31                     MOV dword ptr [ECX],ESI
00558674  8B 52 04                  MOV EDX,dword ptr [EDX + 0x4]
00558677  89 51 04                  MOV dword ptr [ECX + 0x4],EDX
0055867A  8B 8B 14 01 00 00         MOV ECX,dword ptr [EBX + 0x114]
00558680  85 C9                     TEST ECX,ECX
00558682  0F 84 B5 00 00 00         JZ 0x0055873d
00558688  05 80 00 00 00            ADD EAX,0x80
0055868D  8D 4B 3C                  LEA ECX,[EBX + 0x3c]
00558690  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00558693  8B 43 2C                  MOV EAX,dword ptr [EBX + 0x2c]
00558696  0F AF 43 28               IMUL EAX,dword ptr [EBX + 0x28]
0055869A  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0055869D  C7 45 F4 04 00 00 00      MOV dword ptr [EBP + -0xc],0x4
LAB_005586a4:
005586A4  50                        PUSH EAX
005586A5  E8 66 25 15 00            CALL 0x006aac10
005586AA  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005586AD  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005586B0  8B F8                     MOV EDI,EAX
005586B2  89 02                     MOV dword ptr [EDX],EAX
005586B4  8B 4B 2C                  MOV ECX,dword ptr [EBX + 0x2c]
005586B7  0F AF 4B 28               IMUL ECX,dword ptr [EBX + 0x28]
005586BB  8B C1                     MOV EAX,ECX
005586BD  83 C2 04                  ADD EDX,0x4
005586C0  C1 E9 02                  SHR ECX,0x2
005586C3  F3 A5                     MOVSD.REP ES:EDI,ESI
005586C5  8B C8                     MOV ECX,EAX
005586C7  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
005586CA  83 E1 03                  AND ECX,0x3
005586CD  F3 A4                     MOVSB.REP ES:EDI,ESI
005586CF  8B 43 2C                  MOV EAX,dword ptr [EBX + 0x2c]
005586D2  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005586D5  0F AF 43 28               IMUL EAX,dword ptr [EBX + 0x28]
005586D9  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005586DC  03 F0                     ADD ESI,EAX
005586DE  49                        DEC ECX
005586DF  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
005586E2  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
005586E5  75 BD                     JNZ 0x005586a4
005586E7  8B 4B 20                  MOV ECX,dword ptr [EBX + 0x20]
005586EA  0F AF 4B 24               IMUL ECX,dword ptr [EBX + 0x24]
005586EE  D1 E1                     SHL ECX,0x1
005586F0  51                        PUSH ECX
005586F1  E8 1A 25 15 00            CALL 0x006aac10
005586F6  8B 53 30                  MOV EDX,dword ptr [EBX + 0x30]
005586F9  89 43 38                  MOV dword ptr [EBX + 0x38],EAX
005586FC  0F AF 53 34               IMUL EDX,dword ptr [EBX + 0x34]
00558700  52                        PUSH EDX
00558701  E8 0A 25 15 00            CALL 0x006aac10
00558706  89 43 4C                  MOV dword ptr [EBX + 0x4c],EAX
00558709  8B 43 30                  MOV EAX,dword ptr [EBX + 0x30]
0055870C  0F AF 43 34               IMUL EAX,dword ptr [EBX + 0x34]
00558710  D1 E0                     SHL EAX,0x1
00558712  50                        PUSH EAX
00558713  E8 F8 24 15 00            CALL 0x006aac10
00558718  56                        PUSH ESI
00558719  6A 00                     PUSH 0x0
0055871B  89 43 50                  MOV dword ptr [EBX + 0x50],EAX
0055871E  E8 3D 79 15 00            CALL 0x006b0060
00558723  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00558726  89 83 F4 00 00 00         MOV dword ptr [EBX + 0xf4],EAX
0055872C  03 71 38                  ADD ESI,dword ptr [ECX + 0x38]
0055872F  56                        PUSH ESI
00558730  6A 00                     PUSH 0x0
00558732  E8 29 79 15 00            CALL 0x006b0060
00558737  89 83 10 01 00 00         MOV dword ptr [EBX + 0x110],EAX
LAB_0055873d:
0055873D  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
00558740  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00558746  5F                        POP EDI
00558747  5E                        POP ESI
00558748  5B                        POP EBX
00558749  8B E5                     MOV ESP,EBP
0055874B  5D                        POP EBP
0055874C  C2 04 00                  RET 0x4
LAB_0055874f:
0055874F  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00558752  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
00558755  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0055875A  BF 04 00 00 00            MOV EDI,0x4
0055875F  8D 71 3C                  LEA ESI,[ECX + 0x3c]
LAB_00558762:
00558762  83 3E 00                  CMP dword ptr [ESI],0x0
00558765  74 06                     JZ 0x0055876d
00558767  56                        PUSH ESI
00558768  E8 F3 28 15 00            CALL 0x006ab060
LAB_0055876d:
0055876D  83 C6 04                  ADD ESI,0x4
00558770  4F                        DEC EDI
00558771  75 EF                     JNZ 0x00558762
00558773  68 58 93 7C 00            PUSH 0x7c9358
00558778  68 CC 4C 7A 00            PUSH 0x7a4ccc
0055877D  53                        PUSH EBX
0055877E  6A 00                     PUSH 0x0
00558780  68 32 01 00 00            PUSH 0x132
00558785  68 CC 92 7C 00            PUSH 0x7c92cc
0055878A  E8 41 4D 15 00            CALL 0x006ad4d0
0055878F  83 C4 18                  ADD ESP,0x18
00558792  85 C0                     TEST EAX,EAX
00558794  74 01                     JZ 0x00558797
00558796  CC                        INT3
LAB_00558797:
00558797  68 33 01 00 00            PUSH 0x133
0055879C  68 CC 92 7C 00            PUSH 0x7c92cc
005587A1  6A 00                     PUSH 0x0
005587A3  53                        PUSH EBX
005587A4  E8 97 D6 14 00            CALL 0x006a5e40
005587A9  5F                        POP EDI
005587AA  5E                        POP ESI
005587AB  5B                        POP EBX
005587AC  8B E5                     MOV ESP,EBP
005587AE  5D                        POP EBP
005587AF  C2 04 00                  RET 0x4
