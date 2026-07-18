STT3DSprC::StartShow:
004AC1A0  55                        PUSH EBP
004AC1A1  8B EC                     MOV EBP,ESP
004AC1A3  83 EC 4C                  SUB ESP,0x4c
004AC1A6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004AC1AB  53                        PUSH EBX
004AC1AC  56                        PUSH ESI
004AC1AD  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004AC1B0  57                        PUSH EDI
004AC1B1  8D 55 B8                  LEA EDX,[EBP + -0x48]
004AC1B4  8D 4D B4                  LEA ECX,[EBP + -0x4c]
004AC1B7  6A 00                     PUSH 0x0
004AC1B9  52                        PUSH EDX
004AC1BA  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
004AC1BD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004AC1C3  E8 28 16 28 00            CALL 0x0072d7f0
004AC1C8  83 C4 08                  ADD ESP,0x8
004AC1CB  85 C0                     TEST EAX,EAX
004AC1CD  0F 85 7B 01 00 00         JNZ 0x004ac34e
004AC1D3  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
004AC1D6  83 7E 18 FF               CMP dword ptr [ESI + 0x18],-0x1
004AC1DA  75 17                     JNZ 0x004ac1f3
004AC1DC  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004AC1E1  68 CE 00 00 00            PUSH 0xce
004AC1E6  68 38 C6 7A 00            PUSH 0x7ac638
004AC1EB  50                        PUSH EAX
004AC1EC  6A FF                     PUSH -0x1
004AC1EE  E8 4D 9C 1F 00            CALL 0x006a5e40
LAB_004ac1f3:
004AC1F3  8A 5D 08                  MOV BL,byte ptr [EBP + 0x8]
004AC1F6  84 DB                     TEST BL,BL
004AC1F8  7C 0B                     JL 0x004ac205
004AC1FA  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
004AC1FD  0F BE D3                  MOVSX EDX,BL
004AC200  49                        DEC ECX
004AC201  3B D1                     CMP EDX,ECX
004AC203  7E 17                     JLE 0x004ac21c
LAB_004ac205:
004AC205  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004AC20A  68 CF 00 00 00            PUSH 0xcf
004AC20F  68 38 C6 7A 00            PUSH 0x7ac638
004AC214  50                        PUSH EAX
004AC215  6A FF                     PUSH -0x1
004AC217  E8 24 9C 1F 00            CALL 0x006a5e40
LAB_004ac21c:
004AC21C  8B 4E 20                  MOV ECX,dword ptr [ESI + 0x20]
004AC21F  0F BE FB                  MOVSX EDI,BL
004AC222  8D 1C FF                  LEA EBX,[EDI + EDI*0x8]
004AC225  C1 E3 02                  SHL EBX,0x2
004AC228  83 3C 19 00               CMP dword ptr [ECX + EBX*0x1],0x0
004AC22C  75 18                     JNZ 0x004ac246
004AC22E  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004AC234  68 D0 00 00 00            PUSH 0xd0
004AC239  68 38 C6 7A 00            PUSH 0x7ac638
004AC23E  52                        PUSH EDX
004AC23F  6A FF                     PUSH -0x1
004AC241  E8 FA 9B 1F 00            CALL 0x006a5e40
LAB_004ac246:
004AC246  B8 01 00 00 00            MOV EAX,0x1
004AC24B  8B CF                     MOV ECX,EDI
004AC24D  D3 E0                     SHL EAX,CL
004AC24F  85 46 1C                  TEST dword ptr [ESI + 0x1c],EAX
004AC252  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004AC255  74 17                     JZ 0x004ac26e
004AC257  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004AC25C  68 D1 00 00 00            PUSH 0xd1
004AC261  68 38 C6 7A 00            PUSH 0x7ac638
004AC266  50                        PUSH EAX
004AC267  6A FF                     PUSH -0x1
004AC269  E8 D2 9B 1F 00            CALL 0x006a5e40
LAB_004ac26e:
004AC26E  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
004AC271  57                        PUSH EDI
004AC272  51                        PUSH ECX
004AC273  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
004AC276  E8 35 DA 23 00            CALL 0x006e9cb0
004AC27B  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004AC27E  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
004AC281  0B C2                     OR EAX,EDX
004AC283  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
004AC286  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
004AC289  03 C3                     ADD EAX,EBX
004AC28B  8B 48 20                  MOV ECX,dword ptr [EAX + 0x20]
004AC28E  85 C9                     TEST ECX,ECX
004AC290  75 13                     JNZ 0x004ac2a5
004AC292  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
004AC295  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
004AC298  51                        PUSH ECX
004AC299  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
004AC29C  57                        PUSH EDI
004AC29D  52                        PUSH EDX
004AC29E  E8 CD DF 23 00            CALL 0x006ea270
004AC2A3  EB 0D                     JMP 0x004ac2b2
LAB_004ac2a5:
004AC2A5  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
004AC2A8  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
004AC2AB  57                        PUSH EDI
004AC2AC  50                        PUSH EAX
004AC2AD  E8 8E DA 23 00            CALL 0x006e9d40
LAB_004ac2b2:
004AC2B2  8A 46 12                  MOV AL,byte ptr [ESI + 0x12]
004AC2B5  84 C0                     TEST AL,AL
004AC2B7  75 0E                     JNZ 0x004ac2c7
004AC2B9  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
004AC2BC  6A 00                     PUSH 0x0
004AC2BE  51                        PUSH ECX
004AC2BF  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
004AC2C2  E8 D9 E7 23 00            CALL 0x006eaaa0
LAB_004ac2c7:
004AC2C7  8A 46 11                  MOV AL,byte ptr [ESI + 0x11]
004AC2CA  84 C0                     TEST AL,AL
004AC2CC  75 62                     JNZ 0x004ac330
004AC2CE  8A 46 10                  MOV AL,byte ptr [ESI + 0x10]
004AC2D1  84 C0                     TEST AL,AL
004AC2D3  75 24                     JNZ 0x004ac2f9
004AC2D5  8B 56 20                  MOV EDX,dword ptr [ESI + 0x20]
004AC2D8  8B 0C 1A                  MOV ECX,dword ptr [EDX + EBX*0x1]
004AC2DB  8D 04 1A                  LEA EAX,[EDX + EBX*0x1]
004AC2DE  8B 51 29                  MOV EDX,dword ptr [ECX + 0x29]
004AC2E1  85 D2                     TEST EDX,EDX
004AC2E3  74 4B                     JZ 0x004ac330
004AC2E5  8A 55 08                  MOV DL,byte ptr [EBP + 0x8]
004AC2E8  56                        PUSH ESI
004AC2E9  88 56 13                  MOV byte ptr [ESI + 0x13],DL
004AC2EC  8B 40 18                  MOV EAX,dword ptr [EAX + 0x18]
004AC2EF  89 46 30                  MOV dword ptr [ESI + 0x30],EAX
004AC2F2  68 99 49 40 00            PUSH 0x404999
004AC2F7  EB 27                     JMP 0x004ac320
LAB_004ac2f9:
004AC2F9  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
004AC2FC  85 C0                     TEST EAX,EAX
004AC2FE  74 30                     JZ 0x004ac330
004AC300  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
004AC303  03 C3                     ADD EAX,EBX
004AC305  8B 08                     MOV ECX,dword ptr [EAX]
004AC307  8B 51 29                  MOV EDX,dword ptr [ECX + 0x29]
004AC30A  85 D2                     TEST EDX,EDX
004AC30C  74 22                     JZ 0x004ac330
004AC30E  8A 55 08                  MOV DL,byte ptr [EBP + 0x8]
004AC311  56                        PUSH ESI
004AC312  88 56 13                  MOV byte ptr [ESI + 0x13],DL
004AC315  8B 40 18                  MOV EAX,dword ptr [EAX + 0x18]
004AC318  89 46 30                  MOV dword ptr [ESI + 0x30],EAX
004AC31B  68 64 5B 40 00            PUSH 0x405b64
LAB_004ac320:
004AC320  8B 4E 34                  MOV ECX,dword ptr [ESI + 0x34]
004AC323  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
004AC326  51                        PUSH ECX
004AC327  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
004AC32A  52                        PUSH EDX
004AC32B  E8 F0 D1 23 00            CALL 0x006e9520
LAB_004ac330:
004AC330  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
004AC333  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004AC336  89 4C 18 1C               MOV dword ptr [EAX + EBX*0x1 + 0x1c],ECX
004AC33A  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
004AC33D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004AC343  33 C0                     XOR EAX,EAX
004AC345  5F                        POP EDI
004AC346  5E                        POP ESI
004AC347  5B                        POP EBX
004AC348  8B E5                     MOV ESP,EBP
004AC34A  5D                        POP EBP
004AC34B  C2 08 00                  RET 0x8
LAB_004ac34e:
004AC34E  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
004AC351  68 DC C6 7A 00            PUSH 0x7ac6dc
004AC356  68 CC 4C 7A 00            PUSH 0x7a4ccc
004AC35B  50                        PUSH EAX
004AC35C  6A 00                     PUSH 0x0
004AC35E  68 F1 00 00 00            PUSH 0xf1
004AC363  68 38 C6 7A 00            PUSH 0x7ac638
004AC368  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004AC36E  E8 5D 11 20 00            CALL 0x006ad4d0
004AC373  83 C4 18                  ADD ESP,0x18
004AC376  85 C0                     TEST EAX,EAX
004AC378  74 01                     JZ 0x004ac37b
004AC37A  CC                        INT3
LAB_004ac37b:
004AC37B  5F                        POP EDI
004AC37C  5E                        POP ESI
004AC37D  83 C8 FF                  OR EAX,0xffffffff
004AC380  5B                        POP EBX
004AC381  8B E5                     MOV ESP,EBP
004AC383  5D                        POP EBP
004AC384  C2 08 00                  RET 0x8
