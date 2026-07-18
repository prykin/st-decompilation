CampaignTy::DoneCampaign:
005916F0  55                        PUSH EBP
005916F1  8B EC                     MOV EBP,ESP
005916F3  83 EC 48                  SUB ESP,0x48
005916F6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005916FB  53                        PUSH EBX
005916FC  56                        PUSH ESI
005916FD  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00591700  57                        PUSH EDI
00591701  8D 55 BC                  LEA EDX,[EBP + -0x44]
00591704  8D 4D B8                  LEA ECX,[EBP + -0x48]
00591707  6A 00                     PUSH 0x0
00591709  52                        PUSH EDX
0059170A  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0059170D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00591713  E8 D8 C0 19 00            CALL 0x0072d7f0
00591718  8B F0                     MOV ESI,EAX
0059171A  83 C4 08                  ADD ESP,0x8
0059171D  85 F6                     TEST ESI,ESI
0059171F  0F 85 48 01 00 00         JNZ 0x0059186d
00591725  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00591728  8B CE                     MOV ECX,ESI
0059172A  E8 5F 2E E7 FF            CALL 0x0040458e
0059172F  A1 30 2A 80 00            MOV EAX,[0x00802a30]
00591734  85 C0                     TEST EAX,EAX
00591736  74 2A                     JZ 0x00591762
00591738  8B 88 A9 00 00 00         MOV ECX,dword ptr [EAX + 0xa9]
0059173E  85 C9                     TEST ECX,ECX
00591740  74 14                     JZ 0x00591756
00591742  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
00591745  83 F9 FF                  CMP ECX,-0x1
00591748  74 18                     JZ 0x00591762
0059174A  8B 40 60                  MOV EAX,dword ptr [EAX + 0x60]
0059174D  51                        PUSH ECX
0059174E  50                        PUSH EAX
0059174F  E8 9C 23 12 00            CALL 0x006b3af0
00591754  EB 0C                     JMP 0x00591762
LAB_00591756:
00591756  8B 88 AD 00 00 00         MOV ECX,dword ptr [EAX + 0xad]
0059175C  51                        PUSH ECX
0059175D  E8 AE 73 12 00            CALL 0x006b8b10
LAB_00591762:
00591762  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
00591768  6A 02                     PUSH 0x2
0059176A  6A 0A                     PUSH 0xa
0059176C  52                        PUSH EDX
0059176D  E8 D1 05 E7 FF            CALL 0x00401d43
00591772  83 C4 0C                  ADD ESP,0xc
00591775  B9 58 76 80 00            MOV ECX,0x807658
0059177A  6A 01                     PUSH 0x1
0059177C  E8 1B 1B E7 FF            CALL 0x0040329c
00591781  A1 6C 17 81 00            MOV EAX,[0x0081176c]
00591786  83 C0 2C                  ADD EAX,0x2c
00591789  83 38 00                  CMP dword ptr [EAX],0x0
0059178C  74 0C                     JZ 0x0059179a
0059178E  8B 0D 80 67 80 00         MOV ECX,dword ptr [0x00806780]
00591794  50                        PUSH EAX
00591795  E8 46 09 16 00            CALL 0x006f20e0
LAB_0059179a:
0059179A  8B 8E 5B 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a5b]
005917A0  8B 89 E6 02 00 00         MOV ECX,dword ptr [ECX + 0x2e6]
005917A6  85 C9                     TEST ECX,ECX
005917A8  74 1B                     JZ 0x005917c5
005917AA  E8 7F 2E E7 FF            CALL 0x0040462e
005917AF  8B 96 5B 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a5b]
005917B5  8B 82 E6 02 00 00         MOV EAX,dword ptr [EDX + 0x2e6]
005917BB  C7 80 AB 1C 00 00 00 00 00 00  MOV dword ptr [EAX + 0x1cab],0x0
LAB_005917c5:
005917C5  81 C6 13 1B 00 00         ADD ESI,0x1b13
005917CB  BB 03 00 00 00            MOV EBX,0x3
LAB_005917d0:
005917D0  BF 0F 00 00 00            MOV EDI,0xf
LAB_005917d5:
005917D5  8B 06                     MOV EAX,dword ptr [ESI]
005917D7  85 C0                     TEST EAX,EAX
005917D9  74 0C                     JZ 0x005917e7
005917DB  50                        PUSH EAX
005917DC  E8 8F 32 13 00            CALL 0x006c4a70
005917E1  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
LAB_005917e7:
005917E7  8B 8E 4C FF FF FF         MOV ECX,dword ptr [ESI + 0xffffff4c]
005917ED  8D 86 4C FF FF FF         LEA EAX,[ESI + 0xffffff4c]
005917F3  85 C9                     TEST ECX,ECX
005917F5  74 0C                     JZ 0x00591803
005917F7  8B 0D 80 67 80 00         MOV ECX,dword ptr [0x00806780]
005917FD  50                        PUSH EAX
005917FE  E8 DD 08 16 00            CALL 0x006f20e0
LAB_00591803:
00591803  83 C6 04                  ADD ESI,0x4
00591806  4F                        DEC EDI
00591807  75 CC                     JNZ 0x005917d5
00591809  4B                        DEC EBX
0059180A  75 C4                     JNZ 0x005917d0
0059180C  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0059180F  BF 04 00 00 00            MOV EDI,0x4
00591814  8D B3 D7 1B 00 00         LEA ESI,[EBX + 0x1bd7]
LAB_0059181a:
0059181A  8B 06                     MOV EAX,dword ptr [ESI]
0059181C  85 C0                     TEST EAX,EAX
0059181E  74 0C                     JZ 0x0059182c
00591820  50                        PUSH EAX
00591821  E8 4A 32 13 00            CALL 0x006c4a70
00591826  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
LAB_0059182c:
0059182C  8B 4E F0                  MOV ECX,dword ptr [ESI + -0x10]
0059182F  8D 46 F0                  LEA EAX,[ESI + -0x10]
00591832  85 C9                     TEST ECX,ECX
00591834  74 0C                     JZ 0x00591842
00591836  8B 0D 80 67 80 00         MOV ECX,dword ptr [0x00806780]
0059183C  50                        PUSH EAX
0059183D  E8 9E 08 16 00            CALL 0x006f20e0
LAB_00591842:
00591842  83 C6 04                  ADD ESI,0x4
00591845  4F                        DEC EDI
00591846  75 D2                     JNZ 0x0059181a
00591848  8B 43 4D                  MOV EAX,dword ptr [EBX + 0x4d]
0059184B  85 C0                     TEST EAX,EAX
0059184D  74 0E                     JZ 0x0059185d
0059184F  83 C3 3D                  ADD EBX,0x3d
00591852  B9 20 76 80 00            MOV ECX,0x807620
00591857  53                        PUSH EBX
00591858  E8 F3 22 15 00            CALL 0x006e3b50
LAB_0059185d:
0059185D  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00591860  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00591866  5F                        POP EDI
00591867  5E                        POP ESI
00591868  5B                        POP EBX
00591869  8B E5                     MOV ESP,EBP
0059186B  5D                        POP EBP
0059186C  C3                        RET
LAB_0059186d:
0059186D  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
00591870  68 D0 BD 7C 00            PUSH 0x7cbdd0
00591875  68 CC 4C 7A 00            PUSH 0x7a4ccc
0059187A  56                        PUSH ESI
0059187B  6A 00                     PUSH 0x0
0059187D  68 9D 00 00 00            PUSH 0x9d
00591882  68 D4 BC 7C 00            PUSH 0x7cbcd4
00591887  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0059188D  E8 3E BC 11 00            CALL 0x006ad4d0
00591892  83 C4 18                  ADD ESP,0x18
00591895  85 C0                     TEST EAX,EAX
00591897  74 01                     JZ 0x0059189a
00591899  CC                        INT3
LAB_0059189a:
0059189A  68 9D 00 00 00            PUSH 0x9d
0059189F  68 D4 BC 7C 00            PUSH 0x7cbcd4
005918A4  6A 00                     PUSH 0x0
005918A6  56                        PUSH ESI
005918A7  E8 94 45 11 00            CALL 0x006a5e40
005918AC  5F                        POP EDI
005918AD  5E                        POP ESI
005918AE  5B                        POP EBX
005918AF  8B E5                     MOV ESP,EBP
005918B1  5D                        POP EBP
005918B2  C3                        RET
