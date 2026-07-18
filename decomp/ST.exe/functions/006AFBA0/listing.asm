FUN_006afba0:
006AFBA0  55                        PUSH EBP
006AFBA1  8B EC                     MOV EBP,ESP
006AFBA3  51                        PUSH ECX
006AFBA4  8B 45 30                  MOV EAX,dword ptr [EBP + 0x30]
006AFBA7  53                        PUSH EBX
006AFBA8  56                        PUSH ESI
006AFBA9  57                        PUSH EDI
006AFBAA  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
006AFBB0  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006AFBB3  85 C0                     TEST EAX,EAX
006AFBB5  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006AFBBC  0F 8C 18 01 00 00         JL 0x006afcda
006AFBC2  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006AFBC5  3B C6                     CMP EAX,ESI
006AFBC7  0F 8D 0D 01 00 00         JGE 0x006afcda
006AFBCD  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006AFBD0  85 C0                     TEST EAX,EAX
006AFBD2  0F 8C 02 01 00 00         JL 0x006afcda
006AFBD8  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006AFBDB  3B C2                     CMP EAX,EDX
006AFBDD  0F 8D F7 00 00 00         JGE 0x006afcda
006AFBE3  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006AFBE6  85 C0                     TEST EAX,EAX
006AFBE8  0F 8C EC 00 00 00         JL 0x006afcda
006AFBEE  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
006AFBF1  3B C7                     CMP EAX,EDI
006AFBF3  0F 8D E1 00 00 00         JGE 0x006afcda
006AFBF9  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006AFBFC  85 C0                     TEST EAX,EAX
006AFBFE  0F 8C D6 00 00 00         JL 0x006afcda
006AFC04  3B C6                     CMP EAX,ESI
006AFC06  0F 8D CE 00 00 00         JGE 0x006afcda
006AFC0C  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006AFC0F  85 C9                     TEST ECX,ECX
006AFC11  0F 8C C3 00 00 00         JL 0x006afcda
006AFC17  3B CA                     CMP ECX,EDX
006AFC19  0F 8D BB 00 00 00         JGE 0x006afcda
006AFC1F  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006AFC22  85 C0                     TEST EAX,EAX
006AFC24  0F 8C B0 00 00 00         JL 0x006afcda
006AFC2A  3B C7                     CMP EAX,EDI
006AFC2C  0F 8D A8 00 00 00         JGE 0x006afcda
006AFC32  8B FE                     MOV EDI,ESI
006AFC34  0F AF FA                  IMUL EDI,EDX
006AFC37  8B DF                     MOV EBX,EDI
006AFC39  8B D6                     MOV EDX,ESI
006AFC3B  0F AF D8                  IMUL EBX,EAX
006AFC3E  0F AF D1                  IMUL EDX,ECX
006AFC41  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006AFC44  03 CB                     ADD ECX,EBX
006AFC46  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006AFC49  03 D1                     ADD EDX,ECX
006AFC4B  66 83 3C 53 FD            CMP word ptr [EBX + EDX*0x2],-0x3
006AFC50  8D 0C 53                  LEA ECX,[EBX + EDX*0x2]
006AFC53  75 08                     JNZ 0x006afc5d
006AFC55  66 C7 01 00 00            MOV word ptr [ECX],0x0
006AFC5A  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
LAB_006afc5d:
006AFC5D  F6 45 34 02               TEST byte ptr [EBP + 0x34],0x2
006AFC61  74 37                     JZ 0x006afc9a
006AFC63  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006AFC66  6A 00                     PUSH 0x0
006AFC68  8D 55 FC                  LEA EDX,[EBP + -0x4]
006AFC6B  6A 00                     PUSH 0x0
006AFC6D  52                        PUSH EDX
006AFC6E  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006AFC71  50                        PUSH EAX
006AFC72  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006AFC75  50                        PUSH EAX
006AFC76  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006AFC79  51                        PUSH ECX
006AFC7A  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006AFC7D  52                        PUSH EDX
006AFC7E  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006AFC81  50                        PUSH EAX
006AFC82  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006AFC85  51                        PUSH ECX
006AFC86  52                        PUSH EDX
006AFC87  50                        PUSH EAX
006AFC88  56                        PUSH ESI
006AFC89  53                        PUSH EBX
006AFC8A  E8 41 EB FF FF            CALL 0x006ae7d0
006AFC8F  85 C0                     TEST EAX,EAX
006AFC91  0F 85 8D 01 00 00         JNZ 0x006afe24
006AFC97  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
LAB_006afc9a:
006AFC9A  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006AFC9D  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006AFCA0  50                        PUSH EAX
006AFCA1  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006AFCA4  51                        PUSH ECX
006AFCA5  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006AFCA8  52                        PUSH EDX
006AFCA9  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006AFCAC  50                        PUSH EAX
006AFCAD  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006AFCB0  51                        PUSH ECX
006AFCB1  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006AFCB4  52                        PUSH EDX
006AFCB5  50                        PUSH EAX
006AFCB6  51                        PUSH ECX
006AFCB7  56                        PUSH ESI
006AFCB8  53                        PUSH EBX
006AFCB9  E8 02 92 01 00            CALL 0x006c8ec0
006AFCBE  85 C0                     TEST EAX,EAX
006AFCC0  74 23                     JZ 0x006afce5
006AFCC2  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006AFCC8  68 AF 02 00 00            PUSH 0x2af
006AFCCD  68 5C DA 7E 00            PUSH 0x7eda5c
006AFCD2  52                        PUSH EDX
006AFCD3  6A FE                     PUSH -0x2
006AFCD5  E8 66 61 FF FF            CALL 0x006a5e40
LAB_006afcda:
006AFCDA  5F                        POP EDI
006AFCDB  5E                        POP ESI
006AFCDC  33 C0                     XOR EAX,EAX
006AFCDE  5B                        POP EBX
006AFCDF  8B E5                     MOV ESP,EBP
006AFCE1  5D                        POP EBP
006AFCE2  C2 30 00                  RET 0x30
LAB_006afce5:
006AFCE5  8B C7                     MOV EAX,EDI
006AFCE7  8B CE                     MOV ECX,ESI
006AFCE9  0F AF 45 2C               IMUL EAX,dword ptr [EBP + 0x2c]
006AFCED  0F AF 4D 28               IMUL ECX,dword ptr [EBP + 0x28]
006AFCF1  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006AFCF4  03 D0                     ADD EDX,EAX
006AFCF6  03 CA                     ADD ECX,EDX
006AFCF8  0F BF 04 4B               MOVSX EAX,word ptr [EBX + ECX*0x2]
006AFCFC  85 C0                     TEST EAX,EAX
006AFCFE  7D 78                     JGE 0x006afd78
006AFD00  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006AFD03  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006AFD06  2B C1                     SUB EAX,ECX
006AFD08  99                        CDQ
006AFD09  8B C8                     MOV ECX,EAX
006AFD0B  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006AFD0E  33 CA                     XOR ECX,EDX
006AFD10  2B CA                     SUB ECX,EDX
006AFD12  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006AFD15  2B C2                     SUB EAX,EDX
006AFD17  99                        CDQ
006AFD18  33 C2                     XOR EAX,EDX
006AFD1A  2B C2                     SUB EAX,EDX
006AFD1C  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006AFD1F  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
006AFD22  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006AFD25  2B C2                     SUB EAX,EDX
006AFD27  99                        CDQ
006AFD28  33 C2                     XOR EAX,EDX
006AFD2A  2B C2                     SUB EAX,EDX
006AFD2C  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006AFD2F  3B CA                     CMP ECX,EDX
006AFD31  7C 08                     JL 0x006afd3b
006AFD33  3B C8                     CMP ECX,EAX
006AFD35  7C 0A                     JL 0x006afd41
006AFD37  8B C1                     MOV EAX,ECX
006AFD39  EB 06                     JMP 0x006afd41
LAB_006afd3b:
006AFD3B  3B D0                     CMP EDX,EAX
006AFD3D  7C 02                     JL 0x006afd41
006AFD3F  8B C2                     MOV EAX,EDX
LAB_006afd41:
006AFD41  8D 4D 2C                  LEA ECX,[EBP + 0x2c]
006AFD44  8D 55 28                  LEA EDX,[EBP + 0x28]
006AFD47  51                        PUSH ECX
006AFD48  8D 4D 24                  LEA ECX,[EBP + 0x24]
006AFD4B  52                        PUSH EDX
006AFD4C  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006AFD4F  51                        PUSH ECX
006AFD50  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006AFD53  50                        PUSH EAX
006AFD54  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006AFD57  6A 00                     PUSH 0x0
006AFD59  52                        PUSH EDX
006AFD5A  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006AFD5D  50                        PUSH EAX
006AFD5E  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006AFD61  51                        PUSH ECX
006AFD62  52                        PUSH EDX
006AFD63  50                        PUSH EAX
006AFD64  56                        PUSH ESI
006AFD65  53                        PUSH EBX
006AFD66  E8 65 79 FF FF            CALL 0x006a76d0
006AFD6B  85 C0                     TEST EAX,EAX
006AFD6D  75 0F                     JNZ 0x006afd7e
006AFD6F  5F                        POP EDI
006AFD70  5E                        POP ESI
006AFD71  5B                        POP EBX
006AFD72  8B E5                     MOV ESP,EBP
006AFD74  5D                        POP EBP
006AFD75  C2 30 00                  RET 0x30
LAB_006afd78:
006AFD78  0F 84 5C FF FF FF         JZ 0x006afcda
LAB_006afd7e:
006AFD7E  8B CF                     MOV ECX,EDI
006AFD80  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006AFD83  0F AF 4D 20               IMUL ECX,dword ptr [EBP + 0x20]
006AFD87  0F AF 7D 2C               IMUL EDI,dword ptr [EBP + 0x2c]
006AFD8B  8B D6                     MOV EDX,ESI
006AFD8D  03 C1                     ADD EAX,ECX
006AFD8F  0F AF 55 1C               IMUL EDX,dword ptr [EBP + 0x1c]
006AFD93  8B CE                     MOV ECX,ESI
006AFD95  03 D0                     ADD EDX,EAX
006AFD97  0F AF 4D 28               IMUL ECX,dword ptr [EBP + 0x28]
006AFD9B  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006AFD9E  0F BF 14 53               MOVSX EDX,word ptr [EBX + EDX*0x2]
006AFDA2  03 C7                     ADD EAX,EDI
006AFDA4  03 C8                     ADD ECX,EAX
006AFDA6  B8 56 55 55 55            MOV EAX,0x55555556
006AFDAB  0F BF 0C 4B               MOVSX ECX,word ptr [EBX + ECX*0x2]
006AFDAF  2B CA                     SUB ECX,EDX
006AFDB1  83 C1 02                  ADD ECX,0x2
006AFDB4  F7 E9                     IMUL ECX
006AFDB6  8B C2                     MOV EAX,EDX
006AFDB8  C1 E8 1F                  SHR EAX,0x1f
006AFDBB  03 D0                     ADD EDX,EAX
006AFDBD  8B CA                     MOV ECX,EDX
006AFDBF  8B C1                     MOV EAX,ECX
006AFDC1  99                        CDQ
006AFDC2  2B C2                     SUB EAX,EDX
006AFDC4  D1 F8                     SAR EAX,0x1
006AFDC6  8D 44 01 03               LEA EAX,[ECX + EAX*0x1 + 0x3]
006AFDCA  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006AFDCD  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
006AFDD4  51                        PUSH ECX
006AFDD5  E8 96 AE FF FF            CALL 0x006aac70
006AFDDA  85 C0                     TEST EAX,EAX
006AFDDC  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
006AFDDF  74 40                     JZ 0x006afe21
006AFDE1  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006AFDE4  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
006AFDE7  52                        PUSH EDX
006AFDE8  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006AFDEB  50                        PUSH EAX
006AFDEC  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006AFDEF  51                        PUSH ECX
006AFDF0  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006AFDF3  52                        PUSH EDX
006AFDF4  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006AFDF7  50                        PUSH EAX
006AFDF8  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006AFDFB  51                        PUSH ECX
006AFDFC  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006AFDFF  52                        PUSH EDX
006AFE00  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006AFE03  50                        PUSH EAX
006AFE04  51                        PUSH ECX
006AFE05  52                        PUSH EDX
006AFE06  56                        PUSH ESI
006AFE07  53                        PUSH EBX
006AFE08  E8 A3 E5 FF FF            CALL 0x006ae3b0
006AFE0D  8B 55 30                  MOV EDX,dword ptr [EBP + 0x30]
006AFE10  8B C8                     MOV ECX,EAX
006AFE12  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006AFE15  41                        INC ECX
006AFE16  5F                        POP EDI
006AFE17  5E                        POP ESI
006AFE18  89 0A                     MOV dword ptr [EDX],ECX
006AFE1A  5B                        POP EBX
006AFE1B  8B E5                     MOV ESP,EBP
006AFE1D  5D                        POP EBP
006AFE1E  C2 30 00                  RET 0x30
LAB_006afe21:
006AFE21  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_006afe24:
006AFE24  8B 55 30                  MOV EDX,dword ptr [EBP + 0x30]
006AFE27  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006AFE2A  5F                        POP EDI
006AFE2B  5E                        POP ESI
006AFE2C  89 0A                     MOV dword ptr [EDX],ECX
006AFE2E  5B                        POP EBX
006AFE2F  8B E5                     MOV ESP,EBP
006AFE31  5D                        POP EBP
006AFE32  C2 30 00                  RET 0x30
