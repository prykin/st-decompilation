FUN_004e51b0:
004E51B0  55                        PUSH EBP
004E51B1  8B EC                     MOV EBP,ESP
004E51B3  83 EC 2C                  SUB ESP,0x2c
004E51B6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004E51B9  85 C0                     TEST EAX,EAX
004E51BB  0F 8C C0 05 00 00         JL 0x004e5781
004E51C1  83 F8 08                  CMP EAX,0x8
004E51C4  0F 8D B7 05 00 00         JGE 0x004e5781
004E51CA  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004E51CD  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004E51D0  3B D1                     CMP EDX,ECX
004E51D2  7D 03                     JGE 0x004e51d7
004E51D4  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
LAB_004e51d7:
004E51D7  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004E51DA  53                        PUSH EBX
004E51DB  56                        PUSH ESI
004E51DC  57                        PUSH EDI
004E51DD  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004E51E0  33 C9                     XOR ECX,ECX
004E51E2  BE D8 8F 79 00            MOV ESI,0x798fd8
004E51E7  8D 1C 50                  LEA EBX,[EAX + EDX*0x2]
004E51EA  33 D2                     XOR EDX,EDX
004E51EC  C1 E3 04                  SHL EBX,0x4
004E51EF  03 D8                     ADD EBX,EAX
004E51F1  D1 E3                     SHL EBX,0x1
004E51F3  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
004E51F6  8A 93 20 4E 7F 00         MOV DL,byte ptr [EBX + 0x7f4e20]
004E51FC  8D 83 0B 51 7F 00         LEA EAX,[EBX + 0x7f510b]
004E5202  8D BB 47 51 7F 00         LEA EDI,[EBX + 0x7f5147]
004E5208  4A                        DEC EDX
004E5209  89 08                     MOV dword ptr [EAX],ECX
004E520B  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
004E520E  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
004E5211  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
004E5214  89 48 0C                  MOV dword ptr [EAX + 0xc],ECX
004E5217  89 48 10                  MOV dword ptr [EAX + 0x10],ECX
004E521A  8D 83 1F 51 7F 00         LEA EAX,[EBX + 0x7f511f]
004E5220  89 8B 1F 51 7F 00         MOV dword ptr [EBX + 0x7f511f],ECX
004E5226  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
004E5229  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
004E522C  89 48 0C                  MOV dword ptr [EAX + 0xc],ECX
004E522F  89 48 10                  MOV dword ptr [EAX + 0x10],ECX
004E5232  B9 9B 00 00 00            MOV ECX,0x9b
004E5237  33 C0                     XOR EAX,EAX
004E5239  F3 AB                     STOSD.REP ES:EDI
004E523B  8D BB 5B 55 7F 00         LEA EDI,[EBX + 0x7f555b]
004E5241  B9 26 00 00 00            MOV ECX,0x26
004E5246  F3 A5                     MOVSD.REP ES:EDI,ESI
004E5248  66 A5                     MOVSW ES:EDI,ESI
004E524A  8B C2                     MOV EAX,EDX
004E524C  C1 E0 04                  SHL EAX,0x4
004E524F  A4                        MOVSB ES:EDI,ESI
004E5250  8B 88 30 0F 80 00         MOV ECX,dword ptr [EAX + 0x800f30]
004E5256  8B 90 B0 0F 80 00         MOV EDX,dword ptr [EAX + 0x800fb0]
004E525C  8B B0 34 0F 80 00         MOV ESI,dword ptr [EAX + 0x800f34]
004E5262  8B B8 B4 0F 80 00         MOV EDI,dword ptr [EAX + 0x800fb4]
004E5268  0B CA                     OR ECX,EDX
004E526A  8B 90 B8 0F 80 00         MOV EDX,dword ptr [EAX + 0x800fb8]
004E5270  0B F7                     OR ESI,EDI
004E5272  8B B8 38 0F 80 00         MOV EDI,dword ptr [EAX + 0x800f38]
004E5278  0B FA                     OR EDI,EDX
004E527A  8B 90 3C 0F 80 00         MOV EDX,dword ptr [EAX + 0x800f3c]
004E5280  0B 90 BC 0F 80 00         OR EDX,dword ptr [EAX + 0x800fbc]
004E5286  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
004E5289  B8 01 00 00 00            MOV EAX,0x1
004E528E  89 75 D8                  MOV dword ptr [EBP + -0x28],ESI
004E5291  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
004E5294  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004E5297  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
004E529A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004E529D  8D 0C 95 04 FC 7B 00      LEA ECX,[EDX*0x4 + 0x7bfc04]
004E52A4  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
LAB_004e52a7:
004E52A7  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
004E52AA  8B 09                     MOV ECX,dword ptr [ECX]
004E52AC  80 3C 01 00               CMP byte ptr [ECX + EAX*0x1],0x0
004E52B0  74 18                     JZ 0x004e52ca
004E52B2  8D 8B 0B 51 7F 00         LEA ECX,[EBX + 0x7f510b]
004E52B8  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
004E52BB  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
004E52BE  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004E52C1  80 F2 07                  XOR DL,0x7
004E52C4  0F AB 11                  BTS [ECX],EDX
004E52C7  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
LAB_004e52ca:
004E52CA  40                        INC EAX
004E52CB  3D 9B 00 00 00            CMP EAX,0x9b
004E52D0  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004E52D3  7C D2                     JL 0x004e52a7
004E52D5  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004E52D8  85 C9                     TEST ECX,ECX
004E52DA  7E 54                     JLE 0x004e5330
004E52DC  8D 04 92                  LEA EAX,[EDX + EDX*0x4]
004E52DF  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
004E52E2  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004E52E5  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
004E52E8  8D 04 45 74 90 79 00      LEA EAX,[EAX*0x2 + 0x799074]
004E52EF  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
LAB_004e52f2:
004E52F2  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
004E52F5  33 FF                     XOR EDI,EDI
LAB_004e52f7:
004E52F7  8B 06                     MOV EAX,dword ptr [ESI]
004E52F9  85 C0                     TEST EAX,EAX
004E52FB  74 1E                     JZ 0x004e531b
004E52FD  33 C9                     XOR ECX,ECX
004E52FF  8A 4E 04                  MOV CL,byte ptr [ESI + 0x4]
004E5302  39 8C 83 47 51 7F 00      CMP dword ptr [EBX + EAX*0x4 + 0x7f5147],ECX
004E5309  7D 07                     JGE 0x004e5312
004E530B  89 8C 83 47 51 7F 00      MOV dword ptr [EBX + EAX*0x4 + 0x7f5147],ECX
LAB_004e5312:
004E5312  47                        INC EDI
004E5313  83 C6 05                  ADD ESI,0x5
004E5316  83 FF 1E                  CMP EDI,0x1e
004E5319  7C DC                     JL 0x004e52f7
LAB_004e531b:
004E531B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004E531E  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004E5321  81 C1 96 00 00 00         ADD ECX,0x96
004E5327  48                        DEC EAX
004E5328  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
004E532B  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
004E532E  75 C2                     JNZ 0x004e52f2
LAB_004e5330:
004E5330  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004E5333  41                        INC ECX
004E5334  83 F9 03                  CMP ECX,0x3
004E5337  0F 8D BF 00 00 00         JGE 0x004e53fc
004E533D  8D 34 51                  LEA ESI,[ECX + EDX*0x2]
004E5340  8B C2                     MOV EAX,EDX
004E5342  03 C6                     ADD EAX,ESI
004E5344  BA 03 00 00 00            MOV EDX,0x3
004E5349  69 C0 96 00 00 00         IMUL EAX,EAX,0x96
004E534F  05 74 90 79 00            ADD EAX,0x799074
004E5354  2B D1                     SUB EDX,ECX
004E5356  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
004E5359  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
LAB_004e535c:
004E535C  8B C8                     MOV ECX,EAX
004E535E  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
004E5365  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
004E5368  EB 03                     JMP 0x004e536d
LAB_004e536a:
004E536A  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
LAB_004e536d:
004E536D  8B 31                     MOV ESI,dword ptr [ECX]
004E536F  85 F6                     TEST ESI,ESI
004E5371  74 74                     JZ 0x004e53e7
004E5373  33 C0                     XOR EAX,EAX
004E5375  89 75 10                  MOV dword ptr [EBP + 0x10],ESI
004E5378  8A 41 04                  MOV AL,byte ptr [ECX + 0x4]
004E537B  8A 8E D8 8F 79 00         MOV CL,byte ptr [ESI + 0x798fd8]
004E5381  80 F9 01                  CMP CL,0x1
004E5384  75 2C                     JNZ 0x004e53b2
004E5386  8D 83 0B 51 7F 00         LEA EAX,[EBX + 0x7f510b]
004E538C  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
004E538F  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
004E5392  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004E5395  80 F2 07                  XOR DL,0x7
004E5398  0F B3 11                  BTR [ECX],EDX
004E539B  8D 83 1F 51 7F 00         LEA EAX,[EBX + 0x7f511f]
004E53A1  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
004E53A4  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
004E53A7  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004E53AA  80 F2 07                  XOR DL,0x7
004E53AD  0F B3 11                  BTR [ECX],EDX
004E53B0  EB 1D                     JMP 0x004e53cf
LAB_004e53b2:
004E53B2  8D 78 FF                  LEA EDI,[EAX + -0x1]
004E53B5  85 FF                     TEST EDI,EDI
004E53B7  7C 16                     JL 0x004e53cf
004E53B9  33 D2                     XOR EDX,EDX
004E53BB  8A 94 33 5B 55 7F 00      MOV DL,byte ptr [EBX + ESI*0x1 + 0x7f555b]
004E53C2  3B FA                     CMP EDI,EDX
004E53C4  7D 09                     JGE 0x004e53cf
004E53C6  FE C8                     DEC AL
004E53C8  88 84 33 5B 55 7F 00      MOV byte ptr [EBX + ESI*0x1 + 0x7f555b],AL
LAB_004e53cf:
004E53CF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004E53D2  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004E53D5  40                        INC EAX
004E53D6  83 C2 05                  ADD EDX,0x5
004E53D9  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004E53DC  83 F8 1E                  CMP EAX,0x1e
004E53DF  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004E53E2  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
004E53E5  7C 83                     JL 0x004e536a
LAB_004e53e7:
004E53E7  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
004E53EA  05 96 00 00 00            ADD EAX,0x96
004E53EF  49                        DEC ECX
004E53F0  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
004E53F3  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
004E53F6  0F 85 60 FF FF FF         JNZ 0x004e535c
LAB_004e53fc:
004E53FC  C7 45 10 01 00 00 00      MOV dword ptr [EBP + 0x10],0x1
LAB_004e5403:
004E5403  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
004E5406  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004E5409  8B 08                     MOV ECX,dword ptr [EAX]
004E540B  80 3C 11 00               CMP byte ptr [ECX + EDX*0x1],0x0
004E540F  0F 84 F0 00 00 00         JZ 0x004e5505
004E5415  8D 83 0B 51 7F 00         LEA EAX,[EBX + 0x7f510b]
004E541B  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
004E541E  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004E5421  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004E5424  80 F2 07                  XOR DL,0x7
004E5427  33 C0                     XOR EAX,EAX
004E5429  0F A3 11                  BT [ECX],EDX
004E542C  D0 D0                     RCL AL,0x1
004E542E  85 C0                     TEST EAX,EAX
004E5430  0F 84 CF 00 00 00         JZ 0x004e5505
004E5436  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004E5439  33 C9                     XOR ECX,ECX
004E543B  8B B4 83 47 51 7F 00      MOV ESI,dword ptr [EBX + EAX*0x4 + 0x7f5147]
004E5442  8A 8C 03 5B 55 7F 00      MOV CL,byte ptr [EBX + EAX*0x1 + 0x7f555b]
004E5449  3B F1                     CMP ESI,ECX
004E544B  89 75 0C                  MOV dword ptr [EBP + 0xc],ESI
004E544E  7C 1A                     JL 0x004e546a
004E5450  8D 83 1F 51 7F 00         LEA EAX,[EBX + 0x7f511f]
004E5456  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
004E5459  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004E545C  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004E545F  80 F2 07                  XOR DL,0x7
004E5462  0F B3 11                  BTR [ECX],EDX
004E5465  E9 9B 00 00 00            JMP 0x004e5505
LAB_004e546a:
004E546A  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004E546D  33 C9                     XOR ECX,ECX
004E546F  8B 3C 95 C8 0D 7C 00      MOV EDI,dword ptr [EDX*0x4 + 0x7c0dc8]
004E5476  8B 07                     MOV EAX,dword ptr [EDI]
004E5478  85 C0                     TEST EAX,EAX
004E547A  0F 84 85 00 00 00         JZ 0x004e5505
004E5480  8B F7                     MOV ESI,EDI
LAB_004e5482:
004E5482  3B 45 10                  CMP EAX,dword ptr [EBP + 0x10]
004E5485  75 0D                     JNZ 0x004e5494
004E5487  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004E548A  33 C0                     XOR EAX,EAX
004E548C  8A 46 04                  MOV AL,byte ptr [ESI + 0x4]
004E548F  42                        INC EDX
004E5490  3B C2                     CMP EAX,EDX
004E5492  74 0D                     JZ 0x004e54a1
LAB_004e5494:
004E5494  8B 46 19                  MOV EAX,dword ptr [ESI + 0x19]
004E5497  83 C6 19                  ADD ESI,0x19
004E549A  41                        INC ECX
004E549B  85 C0                     TEST EAX,EAX
004E549D  75 E3                     JNZ 0x004e5482
004E549F  EB 64                     JMP 0x004e5505
LAB_004e54a1:
004E54A1  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
004E54A4  33 F6                     XOR ESI,ESI
004E54A6  8D 14 87                  LEA EDX,[EDI + EAX*0x4]
004E54A9  39 74 10 05               CMP dword ptr [EAX + EDX*0x1 + 0x5],ESI
004E54AD  74 2A                     JZ 0x004e54d9
004E54AF  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
004E54B2  8D 04 8F                  LEA EAX,[EDI + ECX*0x4]
004E54B5  8D 44 01 05               LEA EAX,[ECX + EAX*0x1 + 0x5]
LAB_004e54b9:
004E54B9  83 FE 04                  CMP ESI,0x4
004E54BC  7D 1B                     JGE 0x004e54d9
004E54BE  8B 08                     MOV ECX,dword ptr [EAX]
004E54C0  33 D2                     XOR EDX,EDX
004E54C2  8A 50 04                  MOV DL,byte ptr [EAX + 0x4]
004E54C5  39 94 8B 47 51 7F 00      CMP dword ptr [EBX + ECX*0x4 + 0x7f5147],EDX
004E54CC  7C 22                     JL 0x004e54f0
004E54CE  8B 48 05                  MOV ECX,dword ptr [EAX + 0x5]
004E54D1  83 C0 05                  ADD EAX,0x5
004E54D4  46                        INC ESI
004E54D5  85 C9                     TEST ECX,ECX
004E54D7  75 E0                     JNZ 0x004e54b9
LAB_004e54d9:
004E54D9  8D 83 1F 51 7F 00         LEA EAX,[EBX + 0x7f511f]
004E54DF  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
004E54E2  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004E54E5  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004E54E8  80 F2 07                  XOR DL,0x7
004E54EB  0F AB 11                  BTS [ECX],EDX
004E54EE  EB 15                     JMP 0x004e5505
LAB_004e54f0:
004E54F0  8D 83 1F 51 7F 00         LEA EAX,[EBX + 0x7f511f]
004E54F6  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
004E54F9  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004E54FC  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004E54FF  80 F2 07                  XOR DL,0x7
004E5502  0F B3 11                  BTR [ECX],EDX
LAB_004e5505:
004E5505  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004E5508  40                        INC EAX
004E5509  3D 9B 00 00 00            CMP EAX,0x9b
004E550E  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
004E5511  0F 8C EC FE FF FF         JL 0x004e5403
004E5517  8D 83 BB 54 7F 00         LEA EAX,[EBX + 0x7f54bb]
004E551D  C7 45 0C 01 00 00 00      MOV dword ptr [EBP + 0xc],0x1
004E5524  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
004E5527  BE D4 0D 7C 00            MOV ESI,0x7c0dd4
LAB_004e552c:
004E552C  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004E552F  6A FF                     PUSH -0x1
004E5531  83 C1 41                  ADD ECX,0x41
004E5534  8D 55 D4                  LEA EDX,[EBP + -0x2c]
004E5537  51                        PUSH ECX
004E5538  52                        PUSH EDX
004E5539  E8 92 BA 1C 00            CALL 0x006b0fd0
004E553E  83 C4 0C                  ADD ESP,0xc
004E5541  85 C0                     TEST EAX,EAX
004E5543  74 53                     JZ 0x004e5598
004E5545  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004E5548  BF 01 00 00 00            MOV EDI,0x1
004E554D  C7 00 01 00 00 00         MOV dword ptr [EAX],0x1
004E5553  8A 46 01                  MOV AL,byte ptr [ESI + 0x1]
004E5556  84 C0                     TEST AL,AL
004E5558  74 3E                     JZ 0x004e5598
LAB_004e555a:
004E555A  83 FF 03                  CMP EDI,0x3
004E555D  7D 39                     JGE 0x004e5598
004E555F  33 C9                     XOR ECX,ECX
004E5561  8D 83 0B 51 7F 00         LEA EAX,[EBX + 0x7f510b]
004E5567  8A 0C 3E                  MOV CL,byte ptr [ESI + EDI*0x1]
004E556A  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
004E556D  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
004E5570  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
004E5573  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
004E5576  80 F2 07                  XOR DL,0x7
004E5579  33 C0                     XOR EAX,EAX
004E557B  0F A3 11                  BT [ECX],EDX
004E557E  D0 D0                     RCL AL,0x1
004E5580  85 C0                     TEST EAX,EAX
004E5582  74 0B                     JZ 0x004e558f
004E5584  8A 44 3E 01               MOV AL,byte ptr [ESI + EDI*0x1 + 0x1]
004E5588  47                        INC EDI
004E5589  84 C0                     TEST AL,AL
004E558B  75 CD                     JNZ 0x004e555a
004E558D  EB 09                     JMP 0x004e5598
LAB_004e558f:
004E558F  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004E5592  C7 02 00 00 00 00         MOV dword ptr [EDX],0x0
LAB_004e5598:
004E5598  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
004E559B  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004E559E  83 C6 03                  ADD ESI,0x3
004E55A1  47                        INC EDI
004E55A2  83 C1 04                  ADD ECX,0x4
004E55A5  81 FE 4C 0E 7C 00         CMP ESI,0x7c0e4c
004E55AB  89 7D 0C                  MOV dword ptr [EBP + 0xc],EDI
004E55AE  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
004E55B1  0F 8C 75 FF FF FF         JL 0x004e552c
004E55B7  8D 83 B3 53 7F 00         LEA EAX,[EBX + 0x7f53b3]
004E55BD  C7 45 10 32 00 00 00      MOV dword ptr [EBP + 0x10],0x32
004E55C4  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
LAB_004e55c7:
004E55C7  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004E55CA  6A FF                     PUSH -0x1
004E55CC  83 C1 CE                  ADD ECX,-0x32
004E55CF  8D 55 D4                  LEA EDX,[EBP + -0x2c]
004E55D2  51                        PUSH ECX
004E55D3  52                        PUSH EDX
004E55D4  E8 F7 B9 1C 00            CALL 0x006b0fd0
004E55D9  83 C4 0C                  ADD ESP,0xc
004E55DC  85 C0                     TEST EAX,EAX
004E55DE  74 75                     JZ 0x004e5655
004E55E0  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
004E55E3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004E55E6  6B F6 42                  IMUL ESI,ESI,0x42
004E55E9  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004E55EC  C7 00 01 00 00 00         MOV dword ptr [EAX],0x1
004E55F2  BF 01 00 00 00            MOV EDI,0x1
004E55F7  8D 44 0E CE               LEA EAX,[ESI + ECX*0x1 + -0x32]
004E55FB  8A 8C 40 4D 0E 7C 00      MOV CL,byte ptr [EAX + EAX*0x2 + 0x7c0e4d]
004E5602  84 C9                     TEST CL,CL
004E5604  74 4F                     JZ 0x004e5655
LAB_004e5606:
004E5606  83 FF 03                  CMP EDI,0x3
004E5609  7D 4A                     JGE 0x004e5655
004E560B  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004E560E  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004E5611  8D 44 16 CE               LEA EAX,[ESI + EDX*0x1 + -0x32]
004E5615  8D 9C 40 4C 0E 7C 00      LEA EBX,[EAX + EAX*0x2 + 0x7c0e4c]
004E561C  33 C0                     XOR EAX,EAX
004E561E  8A 04 3B                  MOV AL,byte ptr [EBX + EDI*0x1]
004E5621  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
004E5624  8D 81 0B 51 7F 00         LEA EAX,[ECX + 0x7f510b]
004E562A  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
004E562D  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
004E5630  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
004E5633  80 F2 07                  XOR DL,0x7
004E5636  33 C0                     XOR EAX,EAX
004E5638  0F A3 11                  BT [ECX],EDX
004E563B  D0 D0                     RCL AL,0x1
004E563D  85 C0                     TEST EAX,EAX
004E563F  74 0B                     JZ 0x004e564c
004E5641  8A 44 3B 01               MOV AL,byte ptr [EBX + EDI*0x1 + 0x1]
004E5645  47                        INC EDI
004E5646  84 C0                     TEST AL,AL
004E5648  75 BC                     JNZ 0x004e5606
004E564A  EB 09                     JMP 0x004e5655
LAB_004e564c:
004E564C  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004E564F  C7 02 00 00 00 00         MOV dword ptr [EDX],0x0
LAB_004e5655:
004E5655  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004E5658  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004E565B  40                        INC EAX
004E565C  83 C2 04                  ADD EDX,0x4
004E565F  83 F8 74                  CMP EAX,0x74
004E5662  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
004E5665  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
004E5668  0F 8C 59 FF FF FF         JL 0x004e55c7
004E566E  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004E5671  8B 80 EE 57 7F 00         MOV EAX,dword ptr [EAX + 0x7f57ee]
004E5677  85 C0                     TEST EAX,EAX
004E5679  74 38                     JZ 0x004e56b3
004E567B  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
004E567E  C7 40 04 00 00 00 00      MOV dword ptr [EAX + 0x4],0x0
004E5685  8D 55 08                  LEA EDX,[EBP + 0x8]
004E5688  8B 8E EE 57 7F 00         MOV ECX,dword ptr [ESI + 0x7f57ee]
004E568E  E8 FD BA 1C 00            CALL 0x006b1190
004E5693  85 C0                     TEST EAX,EAX
004E5695  7C 1F                     JL 0x004e56b6
LAB_004e5697:
004E5697  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004E569A  E8 0D DB F1 FF            CALL 0x004031ac
004E569F  8B 8E EE 57 7F 00         MOV ECX,dword ptr [ESI + 0x7f57ee]
004E56A5  8D 55 08                  LEA EDX,[EBP + 0x8]
004E56A8  E8 E3 BA 1C 00            CALL 0x006b1190
004E56AD  85 C0                     TEST EAX,EAX
004E56AF  7D E6                     JGE 0x004e5697
004E56B1  EB 03                     JMP 0x004e56b6
LAB_004e56b3:
004E56B3  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
LAB_004e56b6:
004E56B6  8B 86 29 4E 7F 00         MOV EAX,dword ptr [ESI + 0x7f4e29]
004E56BC  85 C0                     TEST EAX,EAX
004E56BE  0F 84 B2 00 00 00         JZ 0x004e5776
004E56C4  C7 40 04 00 00 00 00      MOV dword ptr [EAX + 0x4],0x0
004E56CB  8B 8E 29 4E 7F 00         MOV ECX,dword ptr [ESI + 0x7f4e29]
004E56D1  8D 55 08                  LEA EDX,[EBP + 0x8]
004E56D4  E8 B7 BA 1C 00            CALL 0x006b1190
004E56D9  85 C0                     TEST EAX,EAX
004E56DB  0F 8C 95 00 00 00         JL 0x004e5776
LAB_004e56e1:
004E56E1  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004E56E4  85 C9                     TEST ECX,ECX
004E56E6  74 78                     JZ 0x004e5760
004E56E8  8B 11                     MOV EDX,dword ptr [ECX]
004E56EA  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004E56ED  83 F8 36                  CMP EAX,0x36
004E56F0  74 0D                     JZ 0x004e56ff
004E56F2  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004E56F5  8B 01                     MOV EAX,dword ptr [ECX]
004E56F7  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004E56FA  83 F8 5D                  CMP EAX,0x5d
004E56FD  75 08                     JNZ 0x004e5707
LAB_004e56ff:
004E56FF  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004E5702  E8 68 D6 F1 FF            CALL 0x00402d6f
LAB_004e5707:
004E5707  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004E570A  85 C9                     TEST ECX,ECX
004E570C  74 52                     JZ 0x004e5760
004E570E  8B 11                     MOV EDX,dword ptr [ECX]
004E5710  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004E5713  83 F8 5D                  CMP EAX,0x5d
004E5716  74 0D                     JZ 0x004e5725
004E5718  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004E571B  8B 01                     MOV EAX,dword ptr [ECX]
004E571D  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004E5720  83 F8 3D                  CMP EAX,0x3d
004E5723  75 08                     JNZ 0x004e572d
LAB_004e5725:
004E5725  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004E5728  E8 EB C3 F1 FF            CALL 0x00401b18
LAB_004e572d:
004E572D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004E5730  85 C9                     TEST ECX,ECX
004E5732  74 2C                     JZ 0x004e5760
004E5734  8B 11                     MOV EDX,dword ptr [ECX]
004E5736  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004E5739  83 F8 05                  CMP EAX,0x5
004E573C  74 1A                     JZ 0x004e5758
004E573E  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004E5741  8B 01                     MOV EAX,dword ptr [ECX]
004E5743  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004E5746  83 F8 21                  CMP EAX,0x21
004E5749  74 0D                     JZ 0x004e5758
004E574B  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004E574E  8B 11                     MOV EDX,dword ptr [ECX]
004E5750  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004E5753  83 F8 11                  CMP EAX,0x11
004E5756  75 08                     JNZ 0x004e5760
LAB_004e5758:
004E5758  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004E575B  E8 8A CE F1 FF            CALL 0x004025ea
LAB_004e5760:
004E5760  8B 8E 29 4E 7F 00         MOV ECX,dword ptr [ESI + 0x7f4e29]
004E5766  8D 55 08                  LEA EDX,[EBP + 0x8]
004E5769  E8 22 BA 1C 00            CALL 0x006b1190
004E576E  85 C0                     TEST EAX,EAX
004E5770  0F 8D 6B FF FF FF         JGE 0x004e56e1
LAB_004e5776:
004E5776  5F                        POP EDI
004E5777  5E                        POP ESI
004E5778  33 C0                     XOR EAX,EAX
004E577A  5B                        POP EBX
004E577B  8B E5                     MOV ESP,EBP
004E577D  5D                        POP EBP
004E577E  C2 0C 00                  RET 0xc
LAB_004e5781:
004E5781  33 C0                     XOR EAX,EAX
004E5783  8B E5                     MOV ESP,EBP
004E5785  5D                        POP EBP
004E5786  C2 0C 00                  RET 0xc
