FUN_005fa360:
005FA360  55                        PUSH EBP
005FA361  8B EC                     MOV EBP,ESP
005FA363  83 EC 1C                  SUB ESP,0x1c
005FA366  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
005FA369  53                        PUSH EBX
005FA36A  56                        PUSH ESI
005FA36B  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
005FA36E  57                        PUSH EDI
005FA36F  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
005FA372  8B D9                     MOV EBX,ECX
005FA374  57                        PUSH EDI
005FA375  56                        PUSH ESI
005FA376  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
005FA379  8B 8B 81 02 00 00         MOV ECX,dword ptr [EBX + 0x281]
005FA37F  8B 93 7D 02 00 00         MOV EDX,dword ptr [EBX + 0x27d]
005FA385  51                        PUSH ECX
005FA386  52                        PUSH EDX
005FA387  E8 04 2C 0B 00            CALL 0x006acf90
005FA38C  83 F8 06                  CMP EAX,0x6
005FA38F  7F 38                     JG 0x005fa3c9
005FA391  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
005FA394  8B 83 7D 02 00 00         MOV EAX,dword ptr [EBX + 0x27d]
005FA39A  5F                        POP EDI
005FA39B  5E                        POP ESI
005FA39C  89 01                     MOV dword ptr [ECX],EAX
005FA39E  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
005FA3A1  8B 93 81 02 00 00         MOV EDX,dword ptr [EBX + 0x281]
005FA3A7  89 10                     MOV dword ptr [EAX],EDX
005FA3A9  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
005FA3AC  8B 8B 85 02 00 00         MOV ECX,dword ptr [EBX + 0x285]
005FA3B2  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005FA3B5  89 0A                     MOV dword ptr [EDX],ECX
005FA3B7  5B                        POP EBX
005FA3B8  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
005FA3BE  B8 01 00 00 00            MOV EAX,0x1
005FA3C3  8B E5                     MOV ESP,EBP
005FA3C5  5D                        POP EBP
005FA3C6  C2 1C 00                  RET 0x1c
LAB_005fa3c9:
005FA3C9  8B 8B 81 02 00 00         MOV ECX,dword ptr [EBX + 0x281]
005FA3CF  8B 93 7D 02 00 00         MOV EDX,dword ptr [EBX + 0x27d]
005FA3D5  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
005FA3D8  51                        PUSH ECX
005FA3D9  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005FA3DC  52                        PUSH EDX
005FA3DD  50                        PUSH EAX
005FA3DE  51                        PUSH ECX
005FA3DF  8B CB                     MOV ECX,EBX
005FA3E1  E8 44 83 E0 FF            CALL 0x0040272a
005FA3E6  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
005FA3E9  33 C0                     XOR EAX,EAX
005FA3EB  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005FA3EE  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_005fa3f1:
005FA3F1  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005FA3F4  85 C0                     TEST EAX,EAX
005FA3F6  0F 85 28 01 00 00         JNZ 0x005fa524
LAB_005fa3fc:
005FA3FC  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005FA3FF  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
005FA402  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
005FA405  03 C2                     ADD EAX,EDX
005FA407  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
005FA40E  8D 0C 85 B0 E7 7C 00      LEA ECX,[EAX*0x4 + 0x7ce7b0]
005FA415  8D 14 85 B2 E7 7C 00      LEA EDX,[EAX*0x4 + 0x7ce7b2]
005FA41C  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
005FA41F  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
LAB_005fa422:
005FA422  83 FB 05                  CMP EBX,0x5
005FA425  7C 02                     JL 0x005fa429
005FA427  33 DB                     XOR EBX,EBX
LAB_005fa429:
005FA429  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
005FA42C  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
005FA42F  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
005FA432  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
005FA435  0F BF 30                  MOVSX ESI,word ptr [EAX]
005FA438  0F BF 39                  MOVSX EDI,word ptr [ECX]
005FA43B  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
005FA43E  03 F2                     ADD ESI,EDX
005FA440  03 F9                     ADD EDI,ECX
005FA442  85 F6                     TEST ESI,ESI
005FA444  0F 8C 98 00 00 00         JL 0x005fa4e2
005FA44A  0F BF 15 40 B2 7F 00      MOVSX EDX,word ptr [0x007fb240]
005FA451  3B F2                     CMP ESI,EDX
005FA453  0F 8D 89 00 00 00         JGE 0x005fa4e2
005FA459  85 FF                     TEST EDI,EDI
005FA45B  0F 8C 81 00 00 00         JL 0x005fa4e2
005FA461  0F BF 05 42 B2 7F 00      MOVSX EAX,word ptr [0x007fb242]
005FA468  3B F8                     CMP EDI,EAX
005FA46A  7D 76                     JGE 0x005fa4e2
005FA46C  85 DB                     TEST EBX,EBX
005FA46E  7C 72                     JL 0x005fa4e2
005FA470  0F BF 0D 44 B2 7F 00      MOVSX ECX,word ptr [0x007fb244]
005FA477  3B D9                     CMP EBX,ECX
005FA479  7D 67                     JGE 0x005fa4e2
005FA47B  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
005FA481  53                        PUSH EBX
005FA482  57                        PUSH EDI
005FA483  56                        PUSH ESI
005FA484  E8 B2 A8 E0 FF            CALL 0x00404d3b
005FA489  85 C0                     TEST EAX,EAX
005FA48B  74 55                     JZ 0x005fa4e2
005FA48D  66 A1 40 B2 7F 00         MOV AX,[0x007fb240]
005FA493  66 85 F6                  TEST SI,SI
005FA496  7C 5C                     JL 0x005fa4f4
005FA498  66 3B F0                  CMP SI,AX
005FA49B  7D 57                     JGE 0x005fa4f4
005FA49D  66 85 FF                  TEST DI,DI
005FA4A0  7C 52                     JL 0x005fa4f4
005FA4A2  66 3B 3D 42 B2 7F 00      CMP DI,word ptr [0x007fb242]
005FA4A9  7D 49                     JGE 0x005fa4f4
005FA4AB  66 85 DB                  TEST BX,BX
005FA4AE  7C 44                     JL 0x005fa4f4
005FA4B0  66 3B 1D 44 B2 7F 00      CMP BX,word ptr [0x007fb244]
005FA4B7  7D 3B                     JGE 0x005fa4f4
005FA4B9  0F BF 15 46 B2 7F 00      MOVSX EDX,word ptr [0x007fb246]
005FA4C0  0F BF CB                  MOVSX ECX,BX
005FA4C3  0F AF D1                  IMUL EDX,ECX
005FA4C6  0F BF C0                  MOVSX EAX,AX
005FA4C9  0F BF CF                  MOVSX ECX,DI
005FA4CC  0F AF C1                  IMUL EAX,ECX
005FA4CF  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
005FA4D5  03 D0                     ADD EDX,EAX
005FA4D7  0F BF C6                  MOVSX EAX,SI
005FA4DA  03 D0                     ADD EDX,EAX
005FA4DC  83 3C D1 00               CMP dword ptr [ECX + EDX*0x8],0x0
005FA4E0  74 12                     JZ 0x005fa4f4
LAB_005fa4e2:
005FA4E2  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005FA4E5  43                        INC EBX
005FA4E6  40                        INC EAX
005FA4E7  83 F8 05                  CMP EAX,0x5
005FA4EA  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005FA4ED  7D 0C                     JGE 0x005fa4fb
005FA4EF  E9 2E FF FF FF            JMP 0x005fa422
LAB_005fa4f4:
005FA4F4  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
LAB_005fa4fb:
005FA4FB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005FA4FE  85 C0                     TEST EAX,EAX
005FA500  74 0B                     JZ 0x005fa50d
005FA502  F7 D8                     NEG EAX
005FA504  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005FA507  0F 88 EF FE FF FF         JS 0x005fa3fc
LAB_005fa50d:
005FA50D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005FA510  40                        INC EAX
005FA511  83 F8 08                  CMP EAX,0x8
005FA514  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005FA517  0F 8C D4 FE FF FF         JL 0x005fa3f1
005FA51D  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005FA520  85 C0                     TEST EAX,EAX
005FA522  74 29                     JZ 0x005fa54d
LAB_005fa524:
005FA524  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
005FA527  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
005FA52A  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
005FA52D  89 32                     MOV dword ptr [EDX],ESI
005FA52F  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
005FA532  89 38                     MOV dword ptr [EAX],EDI
005FA534  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005FA537  89 11                     MOV dword ptr [ECX],EDX
005FA539  5F                        POP EDI
005FA53A  C7 00 01 00 00 00         MOV dword ptr [EAX],0x1
005FA540  5E                        POP ESI
005FA541  B8 01 00 00 00            MOV EAX,0x1
005FA546  5B                        POP EBX
005FA547  8B E5                     MOV ESP,EBP
005FA549  5D                        POP EBP
005FA54A  C2 1C 00                  RET 0x1c
LAB_005fa54d:
005FA54D  5F                        POP EDI
005FA54E  5E                        POP ESI
005FA54F  33 C0                     XOR EAX,EAX
005FA551  5B                        POP EBX
005FA552  8B E5                     MOV ESP,EBP
005FA554  5D                        POP EBP
005FA555  C2 1C 00                  RET 0x1c
