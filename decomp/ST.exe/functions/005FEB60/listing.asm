FUN_005feb60:
005FEB60  55                        PUSH EBP
005FEB61  8B EC                     MOV EBP,ESP
005FEB63  6A FF                     PUSH -0x1
005FEB65  68 A0 C9 79 00            PUSH 0x79c9a0
005FEB6A  68 64 D9 72 00            PUSH 0x72d964
005FEB6F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
005FEB75  50                        PUSH EAX
005FEB76  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
005FEB7D  83 EC 7C                  SUB ESP,0x7c
005FEB80  53                        PUSH EBX
005FEB81  56                        PUSH ESI
005FEB82  57                        PUSH EDI
005FEB83  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
005FEB86  8B F9                     MOV EDI,ECX
005FEB88  89 BD 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EDI
005FEB8E  33 DB                     XOR EBX,EBX
005FEB90  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
005FEB93  85 C9                     TEST ECX,ECX
005FEB95  B8 1F 85 EB 51            MOV EAX,0x51eb851f
005FEB9A  7C 14                     JL 0x005febb0
005FEB9C  F7 E9                     IMUL ECX
005FEB9E  C1 FA 06                  SAR EDX,0x6
005FEBA1  8B C2                     MOV EAX,EDX
005FEBA3  C1 E8 1F                  SHR EAX,0x1f
005FEBA6  03 D0                     ADD EDX,EAX
005FEBA8  0F BF CA                  MOVSX ECX,DX
005FEBAB  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
005FEBAE  EB 13                     JMP 0x005febc3
LAB_005febb0:
005FEBB0  F7 E9                     IMUL ECX
005FEBB2  C1 FA 06                  SAR EDX,0x6
005FEBB5  8B C2                     MOV EAX,EDX
005FEBB7  C1 E8 1F                  SHR EAX,0x1f
005FEBBA  03 D0                     ADD EDX,EAX
005FEBBC  0F BF C2                  MOVSX EAX,DX
005FEBBF  48                        DEC EAX
005FEBC0  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
LAB_005febc3:
005FEBC3  83 7D B4 01               CMP dword ptr [EBP + -0x4c],0x1
005FEBC7  7D 07                     JGE 0x005febd0
005FEBC9  33 C0                     XOR EAX,EAX
005FEBCB  E9 29 04 00 00            JMP 0x005feff9
LAB_005febd0:
005FEBD0  66 8B 87 1A 02 00 00      MOV AX,word ptr [EDI + 0x21a]
005FEBD7  66 85 C0                  TEST AX,AX
005FEBDA  0F BF C8                  MOVSX ECX,AX
005FEBDD  B8 79 19 8C 02            MOV EAX,0x28c1979
005FEBE2  7C 13                     JL 0x005febf7
005FEBE4  F7 E9                     IMUL ECX
005FEBE6  D1 FA                     SAR EDX,0x1
005FEBE8  8B CA                     MOV ECX,EDX
005FEBEA  C1 E9 1F                  SHR ECX,0x1f
005FEBED  03 D1                     ADD EDX,ECX
005FEBEF  0F BF D2                  MOVSX EDX,DX
005FEBF2  89 55 A0                  MOV dword ptr [EBP + -0x60],EDX
005FEBF5  EB 12                     JMP 0x005fec09
LAB_005febf7:
005FEBF7  F7 E9                     IMUL ECX
005FEBF9  D1 FA                     SAR EDX,0x1
005FEBFB  8B C2                     MOV EAX,EDX
005FEBFD  C1 E8 1F                  SHR EAX,0x1f
005FEC00  03 D0                     ADD EDX,EAX
005FEC02  0F BF C2                  MOVSX EAX,DX
005FEC05  48                        DEC EAX
005FEC06  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
LAB_005fec09:
005FEC09  66 8B 87 1C 02 00 00      MOV AX,word ptr [EDI + 0x21c]
005FEC10  66 85 C0                  TEST AX,AX
005FEC13  0F BF C8                  MOVSX ECX,AX
005FEC16  B8 79 19 8C 02            MOV EAX,0x28c1979
005FEC1B  7C 13                     JL 0x005fec30
005FEC1D  F7 E9                     IMUL ECX
005FEC1F  D1 FA                     SAR EDX,0x1
005FEC21  8B CA                     MOV ECX,EDX
005FEC23  C1 E9 1F                  SHR ECX,0x1f
005FEC26  03 D1                     ADD EDX,ECX
005FEC28  0F BF F2                  MOVSX ESI,DX
005FEC2B  89 75 94                  MOV dword ptr [EBP + -0x6c],ESI
005FEC2E  EB 14                     JMP 0x005fec44
LAB_005fec30:
005FEC30  F7 E9                     IMUL ECX
005FEC32  D1 FA                     SAR EDX,0x1
005FEC34  8B C2                     MOV EAX,EDX
005FEC36  C1 E8 1F                  SHR EAX,0x1f
005FEC39  03 D0                     ADD EDX,EAX
005FEC3B  0F BF C2                  MOVSX EAX,DX
005FEC3E  48                        DEC EAX
005FEC3F  89 45 94                  MOV dword ptr [EBP + -0x6c],EAX
005FEC42  8B F0                     MOV ESI,EAX
LAB_005fec44:
005FEC44  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
005FEC4B  B8 00 06 00 00            MOV EAX,0x600
005FEC50  E8 EB ED 12 00            CALL 0x0072da40
005FEC55  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
005FEC58  8B C4                     MOV EAX,ESP
005FEC5A  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
005FEC5D  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
005FEC64  33 C9                     XOR ECX,ECX
005FEC66  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
005FEC69  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
005FEC6C  85 C0                     TEST EAX,EAX
005FEC6E  0F 8E CD 02 00 00         JLE 0x005fef41
LAB_005fec74:
005FEC74  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
005FEC77  2B C1                     SUB EAX,ECX
005FEC79  8B CE                     MOV ECX,ESI
005FEC7B  2B C8                     SUB ECX,EAX
005FEC7D  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
005FEC80  2B D0                     SUB EDX,EAX
005FEC82  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
005FEC85  8D 54 30 01               LEA EDX,[EAX + ESI*0x1 + 0x1]
005FEC89  89 55 A4                  MOV dword ptr [EBP + -0x5c],EDX
005FEC8C  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
005FEC8F  8D 44 10 01               LEA EAX,[EAX + EDX*0x1 + 0x1]
005FEC93  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
005FEC96  33 C0                     XOR EAX,EAX
005FEC98  85 C0                     TEST EAX,EAX
005FEC9A  75 32                     JNZ 0x005fecce
005FEC9C  85 C9                     TEST ECX,ECX
005FEC9E  7D 02                     JGE 0x005feca2
005FECA0  33 C9                     XOR ECX,ECX
LAB_005feca2:
005FECA2  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
005FECA5  85 C0                     TEST EAX,EAX
005FECA7  7D 07                     JGE 0x005fecb0
005FECA9  C7 45 E0 00 00 00 00      MOV dword ptr [EBP + -0x20],0x0
LAB_005fecb0:
005FECB0  0F BF 05 42 B2 7F 00      MOVSX EAX,word ptr [0x007fb242]
005FECB7  39 45 A4                  CMP dword ptr [EBP + -0x5c],EAX
005FECBA  7E 03                     JLE 0x005fecbf
005FECBC  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
LAB_005fecbf:
005FECBF  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
005FECC6  39 45 AC                  CMP dword ptr [EBP + -0x54],EAX
005FECC9  7E 03                     JLE 0x005fecce
005FECCB  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
LAB_005fecce:
005FECCE  8B C1                     MOV EAX,ECX
005FECD0  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005FECD3  3B 4D A4                  CMP ECX,dword ptr [EBP + -0x5c]
005FECD6  0F 8D 55 02 00 00         JGE 0x005fef31
LAB_005fecdc:
005FECDC  8B 75 E0                  MOV ESI,dword ptr [EBP + -0x20]
005FECDF  89 75 8C                  MOV dword ptr [EBP + -0x74],ESI
005FECE2  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
005FECE5  8B D6                     MOV EDX,ESI
005FECE7  3B D1                     CMP EDX,ECX
005FECE9  0F 8D 32 02 00 00         JGE 0x005fef21
LAB_005fecef:
005FECEF  66 85 F6                  TEST SI,SI
005FECF2  7C 53                     JL 0x005fed47
005FECF4  66 8B 15 40 B2 7F 00      MOV DX,word ptr [0x007fb240]
005FECFB  66 3B F2                  CMP SI,DX
005FECFE  7D 47                     JGE 0x005fed47
005FED00  66 85 C0                  TEST AX,AX
005FED03  7C 42                     JL 0x005fed47
005FED05  66 3B 05 42 B2 7F 00      CMP AX,word ptr [0x007fb242]
005FED0C  7D 39                     JGE 0x005fed47
005FED0E  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
005FED11  66 85 C9                  TEST CX,CX
005FED14  7C 31                     JL 0x005fed47
005FED16  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
005FED1D  7D 28                     JGE 0x005fed47
005FED1F  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
005FED26  0F BF C9                  MOVSX ECX,CX
005FED29  0F AF F9                  IMUL EDI,ECX
005FED2C  0F BF D2                  MOVSX EDX,DX
005FED2F  0F BF C8                  MOVSX ECX,AX
005FED32  0F AF D1                  IMUL EDX,ECX
005FED35  03 FA                     ADD EDI,EDX
005FED37  0F BF D6                  MOVSX EDX,SI
005FED3A  03 FA                     ADD EDI,EDX
005FED3C  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
005FED42  8B 3C F9                  MOV EDI,dword ptr [ECX + EDI*0x8]
005FED45  EB 02                     JMP 0x005fed49
LAB_005fed47:
005FED47  33 FF                     XOR EDI,EDI
LAB_005fed49:
005FED49  85 FF                     TEST EDI,EDI
005FED4B  0F 84 BD 01 00 00         JZ 0x005fef0e
005FED51  8B 17                     MOV EDX,dword ptr [EDI]
005FED53  8B CF                     MOV ECX,EDI
005FED55  FF 92 F0 00 00 00         CALL dword ptr [EDX + 0xf0]
005FED5B  85 C0                     TEST EAX,EAX
005FED5D  0F 84 A8 01 00 00         JZ 0x005fef0b
005FED63  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
005FED66  83 F8 08                  CMP EAX,0x8
005FED69  0F 83 9C 01 00 00         JNC 0x005fef0b
005FED6F  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005FED75  85 C9                     TEST ECX,ECX
005FED77  74 11                     JZ 0x005fed8a
005FED79  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
005FED7C  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
005FED84  0F 83 81 01 00 00         JNC 0x005fef0b
LAB_005fed8a:
005FED8A  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
005FED8D  88 45 80                  MOV byte ptr [EBP + -0x80],AL
005FED90  8B 8D 74 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff74]
005FED96  8A 49 24                  MOV CL,byte ptr [ECX + 0x24]
005FED99  88 4D 84                  MOV byte ptr [EBP + -0x7c],CL
005FED9C  8A 15 8F 8A 80 00         MOV DL,byte ptr [0x00808a8f]
005FEDA2  84 D2                     TEST DL,DL
005FEDA4  74 30                     JZ 0x005fedd6
005FEDA6  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
005FEDA9  25 FF 00 00 00            AND EAX,0xff
005FEDAE  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
005FEDB1  8B 45 80                  MOV EAX,dword ptr [EBP + -0x80]
005FEDB4  25 FF 00 00 00            AND EAX,0xff
005FEDB9  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
005FEDBC  8A 94 C9 EA 87 80 00      MOV DL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
005FEDC3  33 C9                     XOR ECX,ECX
005FEDC5  3A 94 C0 EA 87 80 00      CMP DL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
005FEDCC  0F 95 C1                  SETNZ CL
005FEDCF  8B C1                     MOV EAX,ECX
005FEDD1  8B 75 8C                  MOV ESI,dword ptr [EBP + -0x74]
005FEDD4  EB 7A                     JMP 0x005fee50
LAB_005fedd6:
005FEDD6  3A C1                     CMP AL,CL
005FEDD8  74 6B                     JZ 0x005fee45
005FEDDA  8B 45 80                  MOV EAX,dword ptr [EBP + -0x80]
005FEDDD  25 FF 00 00 00            AND EAX,0xff
005FEDE2  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
005FEDE5  81 E1 FF 00 00 00         AND ECX,0xff
005FEDEB  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
005FEDF2  84 D2                     TEST DL,DL
005FEDF4  75 10                     JNZ 0x005fee06
005FEDF6  38 94 C8 4F 8A 80 00      CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],DL
005FEDFD  75 07                     JNZ 0x005fee06
005FEDFF  B8 FE FF FF FF            MOV EAX,0xfffffffe
005FEE04  EB 41                     JMP 0x005fee47
LAB_005fee06:
005FEE06  80 FA 01                  CMP DL,0x1
005FEE09  75 0F                     JNZ 0x005fee1a
005FEE0B  80 BC C8 4F 8A 80 00 00   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x0
005FEE13  75 05                     JNZ 0x005fee1a
005FEE15  83 C8 FF                  OR EAX,0xffffffff
005FEE18  EB 2D                     JMP 0x005fee47
LAB_005fee1a:
005FEE1A  84 D2                     TEST DL,DL
005FEE1C  75 11                     JNZ 0x005fee2f
005FEE1E  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
005FEE26  75 07                     JNZ 0x005fee2f
005FEE28  B8 01 00 00 00            MOV EAX,0x1
005FEE2D  EB 18                     JMP 0x005fee47
LAB_005fee2f:
005FEE2F  80 FA 01                  CMP DL,0x1
005FEE32  75 11                     JNZ 0x005fee45
005FEE34  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
005FEE3C  75 07                     JNZ 0x005fee45
005FEE3E  B8 02 00 00 00            MOV EAX,0x2
005FEE43  EB 02                     JMP 0x005fee47
LAB_005fee45:
005FEE45  33 C0                     XOR EAX,EAX
LAB_005fee47:
005FEE47  33 D2                     XOR EDX,EDX
005FEE49  85 C0                     TEST EAX,EAX
005FEE4B  0F 9C C2                  SETL DL
005FEE4E  8B C2                     MOV EAX,EDX
LAB_005fee50:
005FEE50  85 C0                     TEST EAX,EAX
005FEE52  0F 84 B3 00 00 00         JZ 0x005fef0b
005FEE58  8B 07                     MOV EAX,dword ptr [EDI]
005FEE5A  8B CF                     MOV ECX,EDI
005FEE5C  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
005FEE62  85 C0                     TEST EAX,EAX
005FEE64  0F 84 A1 00 00 00         JZ 0x005fef0b
005FEE6A  8D 4D D8                  LEA ECX,[EBP + -0x28]
005FEE6D  51                        PUSH ECX
005FEE6E  8D 55 D4                  LEA EDX,[EBP + -0x2c]
005FEE71  52                        PUSH EDX
005FEE72  8D 45 E4                  LEA EAX,[EBP + -0x1c]
005FEE75  50                        PUSH EAX
005FEE76  8B CF                     MOV ECX,EDI
005FEE78  E8 66 43 E0 FF            CALL 0x004031e3
005FEE7D  0F BF 4D D4               MOVSX ECX,word ptr [EBP + -0x2c]
005FEE81  51                        PUSH ECX
005FEE82  0F BF 55 E4               MOVSX EDX,word ptr [EBP + -0x1c]
005FEE86  52                        PUSH EDX
005FEE87  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005FEE8A  50                        PUSH EAX
005FEE8B  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005FEE8E  51                        PUSH ECX
005FEE8F  E8 FC E0 0A 00            CALL 0x006acf90
005FEE94  50                        PUSH EAX
005FEE95  0F BF 55 D8               MOVSX EDX,word ptr [EBP + -0x28]
005FEE99  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
005FEE9C  2B C2                     SUB EAX,EDX
005FEE9E  50                        PUSH EAX
005FEE9F  8B 8D 74 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff74]
005FEEA5  E8 F2 5C E0 FF            CALL 0x00404b9c
005FEEAA  85 C0                     TEST EAX,EAX
005FEEAC  74 5D                     JZ 0x005fef0b
005FEEAE  33 C0                     XOR EAX,EAX
005FEEB0  85 DB                     TEST EBX,EBX
005FEEB2  7E 20                     JLE 0x005feed4
LAB_005feeb4:
005FEEB4  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
005FEEB7  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
005FEEBA  8D 0C CA                  LEA ECX,[EDX + ECX*0x8]
005FEEBD  33 D2                     XOR EDX,EDX
005FEEBF  66 8B 57 32               MOV DX,word ptr [EDI + 0x32]
005FEEC3  3B 11                     CMP EDX,dword ptr [ECX]
005FEEC5  75 08                     JNZ 0x005feecf
005FEEC7  8B 57 24                  MOV EDX,dword ptr [EDI + 0x24]
005FEECA  3B 51 08                  CMP EDX,dword ptr [ECX + 0x8]
005FEECD  74 3C                     JZ 0x005fef0b
LAB_005feecf:
005FEECF  40                        INC EAX
005FEED0  3B C3                     CMP EAX,EBX
005FEED2  7C E0                     JL 0x005feeb4
LAB_005feed4:
005FEED4  8D 04 5B                  LEA EAX,[EBX + EBX*0x2]
005FEED7  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
005FEEDA  8D 34 C1                  LEA ESI,[ECX + EAX*0x8]
005FEEDD  8B 57 24                  MOV EDX,dword ptr [EDI + 0x24]
005FEEE0  89 56 08                  MOV dword ptr [ESI + 0x8],EDX
005FEEE3  33 C0                     XOR EAX,EAX
005FEEE5  66 8B 47 32               MOV AX,word ptr [EDI + 0x32]
005FEEE9  89 06                     MOV dword ptr [ESI],EAX
005FEEEB  8B 17                     MOV EDX,dword ptr [EDI]
005FEEED  8B CF                     MOV ECX,EDI
005FEEEF  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
005FEEF2  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
005FEEF5  8B 87 15 02 00 00         MOV EAX,dword ptr [EDI + 0x215]
005FEEFB  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
005FEEFE  8B 8F 19 02 00 00         MOV ECX,dword ptr [EDI + 0x219]
005FEF04  89 4E 10                  MOV dword ptr [ESI + 0x10],ECX
005FEF07  43                        INC EBX
005FEF08  8B 75 8C                  MOV ESI,dword ptr [EBP + -0x74]
LAB_005fef0b:
005FEF0B  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
LAB_005fef0e:
005FEF0E  46                        INC ESI
005FEF0F  89 75 8C                  MOV dword ptr [EBP + -0x74],ESI
005FEF12  3B 75 AC                  CMP ESI,dword ptr [EBP + -0x54]
005FEF15  0F 8C D4 FD FF FF         JL 0x005fecef
005FEF1B  8B BD 74 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff74]
LAB_005fef21:
005FEF21  40                        INC EAX
005FEF22  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005FEF25  3B 45 A4                  CMP EAX,dword ptr [EBP + -0x5c]
005FEF28  0F 8C AE FD FF FF         JL 0x005fecdc
005FEF2E  8B 75 94                  MOV ESI,dword ptr [EBP + -0x6c]
LAB_005fef31:
005FEF31  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
005FEF34  41                        INC ECX
005FEF35  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
005FEF38  3B 4D B4                  CMP ECX,dword ptr [EBP + -0x4c]
005FEF3B  0F 8C 33 FD FF FF         JL 0x005fec74
LAB_005fef41:
005FEF41  85 DB                     TEST EBX,EBX
005FEF43  0F 84 80 00 00 00         JZ 0x005fefc9
005FEF49  89 9F 37 02 00 00         MOV dword ptr [EDI + 0x237],EBX
005FEF4F  8D 34 5B                  LEA ESI,[EBX + EBX*0x2]
005FEF52  C1 E6 03                  SHL ESI,0x3
005FEF55  56                        PUSH ESI
005FEF56  E8 15 BD 0A 00            CALL 0x006aac70
005FEF5B  89 87 3B 02 00 00         MOV dword ptr [EDI + 0x23b],EAX
005FEF61  8D 14 9D 00 00 00 00      LEA EDX,[EBX*0x4 + 0x0]
005FEF68  52                        PUSH EDX
005FEF69  E8 02 BD 0A 00            CALL 0x006aac70
005FEF6E  89 87 3F 02 00 00         MOV dword ptr [EDI + 0x23f],EAX
005FEF74  8B CE                     MOV ECX,ESI
005FEF76  8B 75 98                  MOV ESI,dword ptr [EBP + -0x68]
005FEF79  8B BF 3B 02 00 00         MOV EDI,dword ptr [EDI + 0x23b]
005FEF7F  8B C1                     MOV EAX,ECX
005FEF81  C1 E9 02                  SHR ECX,0x2
005FEF84  F3 A5                     MOVSD.REP ES:EDI,ESI
005FEF86  8B C8                     MOV ECX,EAX
005FEF88  83 E1 03                  AND ECX,0x3
005FEF8B  F3 A4                     MOVSB.REP ES:EDI,ESI
005FEF8D  33 C0                     XOR EAX,EAX
005FEF8F  85 DB                     TEST EBX,EBX
005FEF91  7E 14                     JLE 0x005fefa7
LAB_005fef93:
005FEF93  8B 8D 74 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff74]
005FEF99  8B 91 3F 02 00 00         MOV EDX,dword ptr [ECX + 0x23f]
005FEF9F  89 04 82                  MOV dword ptr [EDX + EAX*0x4],EAX
005FEFA2  40                        INC EAX
005FEFA3  3B C3                     CMP EAX,EBX
005FEFA5  7C EC                     JL 0x005fef93
LAB_005fefa7:
005FEFA7  8B 8D 74 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff74]
005FEFAD  3B 99 26 02 00 00         CMP EBX,dword ptr [ECX + 0x226]
005FEFB3  7E 14                     JLE 0x005fefc9
005FEFB5  53                        PUSH EBX
005FEFB6  8B 81 3F 02 00 00         MOV EAX,dword ptr [ECX + 0x23f]
005FEFBC  50                        PUSH EAX
005FEFBD  8B 91 3B 02 00 00         MOV EDX,dword ptr [ECX + 0x23b]
005FEFC3  52                        PUSH EDX
005FEFC4  E8 94 40 E0 FF            CALL 0x0040305d
LAB_005fefc9:
005FEFC9  8B C3                     MOV EAX,EBX
005FEFCB  EB 2C                     JMP 0x005feff9
LAB_005feff9:
005FEFF9  8D A5 68 FF FF FF         LEA ESP,[EBP + 0xffffff68]
005FEFFF  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
005FF002  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
005FF009  5F                        POP EDI
005FF00A  5E                        POP ESI
005FF00B  5B                        POP EBX
005FF00C  8B E5                     MOV ESP,EBP
005FF00E  5D                        POP EBP
005FF00F  C2 0C 00                  RET 0xc
