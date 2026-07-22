TLOBaseTy::sub_004C56B0:
004C56B0  55                        PUSH EBP
004C56B1  8B EC                     MOV EBP,ESP
004C56B3  83 EC 18                  SUB ESP,0x18
004C56B6  53                        PUSH EBX
004C56B7  8D 45 FC                  LEA EAX,[EBP + -0x4]
004C56BA  33 D2                     XOR EDX,EDX
004C56BC  33 DB                     XOR EBX,EBX
004C56BE  56                        PUSH ESI
004C56BF  57                        PUSH EDI
004C56C0  85 C0                     TEST EAX,EAX
004C56C2  8B F1                     MOV ESI,ECX
004C56C4  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
004C56C7  74 08                     JZ 0x004c56d1
004C56C9  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
004C56CD  66 89 4D FC               MOV word ptr [EBP + -0x4],CX
LAB_004c56d1:
004C56D1  8D 45 08                  LEA EAX,[EBP + 0x8]
004C56D4  85 C0                     TEST EAX,EAX
004C56D6  74 04                     JZ 0x004c56dc
004C56D8  66 8B 5E 43               MOV BX,word ptr [ESI + 0x43]
LAB_004c56dc:
004C56DC  8D 4D 08                  LEA ECX,[EBP + 0x8]
004C56DF  85 C9                     TEST ECX,ECX
004C56E1  74 04                     JZ 0x004c56e7
004C56E3  66 8B 56 45               MOV DX,word ptr [ESI + 0x45]
LAB_004c56e7:
004C56E7  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004C56EA  8B C8                     MOV ECX,EAX
004C56EC  C1 E1 07                  SHL ECX,0x7
004C56EF  8D 3C 31                  LEA EDI,[ECX + ESI*0x1]
004C56F2  8B 8C 31 CD 02 00 00      MOV ECX,dword ptr [ECX + ESI*0x1 + 0x2cd]
004C56F9  3B 8F D1 02 00 00         CMP ECX,dword ptr [EDI + 0x2d1]
004C56FF  0F 8D D8 01 00 00         JGE 0x004c58dd
004C5705  8B 8E 35 02 00 00         MOV ECX,dword ptr [ESI + 0x235]
004C570B  8D 04 48                  LEA EAX,[EAX + ECX*0x2]
004C570E  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
004C5711  81 3C 8D A0 2C 79 00 B3 00 00 00  CMP dword ptr [ECX*0x4 + 0x792ca0],0xb3
004C571C  0F 85 AE 00 00 00         JNZ 0x004c57d0
004C5722  8B 86 EC 04 00 00         MOV EAX,dword ptr [ESI + 0x4ec]
004C5728  C7 45 08 00 00 00 00      MOV dword ptr [EBP + 0x8],0x0
004C572F  85 C0                     TEST EAX,EAX
004C5731  0F 84 A6 01 00 00         JZ 0x004c58dd
004C5737  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004C573D  8D 55 08                  LEA EDX,[EBP + 0x8]
004C5740  52                        PUSH EDX
004C5741  50                        PUSH EAX
004C5742  E8 89 0B 22 00            CALL 0x006e62d0
004C5747  85 C0                     TEST EAX,EAX
004C5749  0F 85 8E 01 00 00         JNZ 0x004c58dd
004C574F  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
004C5752  8D 4D E8                  LEA ECX,[EBP + -0x18]
004C5755  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
004C575B  05 39 30 00 00            ADD EAX,0x3039
004C5760  8D 55 F0                  LEA EDX,[EBP + -0x10]
004C5763  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
004C5766  C1 E8 10                  SHR EAX,0x10
004C5769  50                        PUSH EAX
004C576A  51                        PUSH ECX
004C576B  8D 45 F8                  LEA EAX,[EBP + -0x8]
004C576E  52                        PUSH EDX
004C576F  8D 4D EC                  LEA ECX,[EBP + -0x14]
004C5772  50                        PUSH EAX
004C5773  8D 55 F4                  LEA EDX,[EBP + -0xc]
004C5776  51                        PUSH ECX
004C5777  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004C577A  8D 45 FC                  LEA EAX,[EBP + -0x4]
004C577D  52                        PUSH EDX
004C577E  50                        PUSH EAX
004C577F  E8 A7 BA F3 FF            CALL 0x0040122b
004C5784  85 C0                     TEST EAX,EAX
004C5786  0F 84 51 01 00 00         JZ 0x004c58dd
004C578C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004C578F  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004C5792  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004C5795  89 8F A5 02 00 00         MOV dword ptr [EDI + 0x2a5],ECX
004C579B  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004C579E  89 96 F4 04 00 00         MOV dword ptr [ESI + 0x4f4],EDX
004C57A4  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
004C57A7  89 87 A9 02 00 00         MOV dword ptr [EDI + 0x2a9],EAX
004C57AD  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
004C57B0  89 8E F8 04 00 00         MOV dword ptr [ESI + 0x4f8],ECX
004C57B6  89 97 AD 02 00 00         MOV dword ptr [EDI + 0x2ad],EDX
004C57BC  89 86 FC 04 00 00         MOV dword ptr [ESI + 0x4fc],EAX
004C57C2  5F                        POP EDI
004C57C3  5E                        POP ESI
004C57C4  B8 01 00 00 00            MOV EAX,0x1
004C57C9  5B                        POP EBX
004C57CA  8B E5                     MOV ESP,EBP
004C57CC  5D                        POP EBP
004C57CD  C2 04 00                  RET 0x4
LAB_004c57d0:
004C57D0  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004C57D3  0F BF D2                  MOVSX EDX,DX
004C57D6  8D 0C 48                  LEA ECX,[EAX + ECX*0x2]
004C57D9  D1 E1                     SHL ECX,0x1
004C57DB  0F BF 81 D8 32 79 00      MOVSX EAX,word ptr [ECX + 0x7932d8]
004C57E2  03 D0                     ADD EDX,EAX
004C57E4  B8 1F 85 EB 51            MOV EAX,0x51eb851f
004C57E9  85 D2                     TEST EDX,EDX
004C57EB  7C 11                     JL 0x004c57fe
004C57ED  F7 EA                     IMUL EDX
004C57EF  C1 FA 06                  SAR EDX,0x6
004C57F2  8B C2                     MOV EAX,EDX
004C57F4  C1 E8 1F                  SHR EAX,0x1f
004C57F7  03 D0                     ADD EDX,EAX
004C57F9  0F BF FA                  MOVSX EDI,DX
004C57FC  EB 10                     JMP 0x004c580e
LAB_004c57fe:
004C57FE  F7 EA                     IMUL EDX
004C5800  C1 FA 06                  SAR EDX,0x6
004C5803  8B C2                     MOV EAX,EDX
004C5805  C1 E8 1F                  SHR EAX,0x1f
004C5808  03 D0                     ADD EDX,EAX
004C580A  0F BF FA                  MOVSX EDI,DX
004C580D  4F                        DEC EDI
LAB_004c580e:
004C580E  0F BF 91 D6 32 79 00      MOVSX EDX,word ptr [ECX + 0x7932d6]
004C5815  0F BF C3                  MOVSX EAX,BX
004C5818  03 D0                     ADD EDX,EAX
004C581A  B8 79 19 8C 02            MOV EAX,0x28c1979
004C581F  85 D2                     TEST EDX,EDX
004C5821  7C 10                     JL 0x004c5833
004C5823  F7 EA                     IMUL EDX
004C5825  D1 FA                     SAR EDX,0x1
004C5827  8B C2                     MOV EAX,EDX
004C5829  C1 E8 1F                  SHR EAX,0x1f
004C582C  03 D0                     ADD EDX,EAX
004C582E  0F BF F2                  MOVSX ESI,DX
004C5831  EB 0F                     JMP 0x004c5842
LAB_004c5833:
004C5833  F7 EA                     IMUL EDX
004C5835  D1 FA                     SAR EDX,0x1
004C5837  8B C2                     MOV EAX,EDX
004C5839  C1 E8 1F                  SHR EAX,0x1f
004C583C  03 D0                     ADD EDX,EAX
004C583E  0F BF F2                  MOVSX ESI,DX
004C5841  4E                        DEC ESI
LAB_004c5842:
004C5842  0F BF 89 D4 32 79 00      MOVSX ECX,word ptr [ECX + 0x7932d4]
004C5849  0F BF 55 FC               MOVSX EDX,word ptr [EBP + -0x4]
004C584D  03 CA                     ADD ECX,EDX
004C584F  B8 79 19 8C 02            MOV EAX,0x28c1979
004C5854  85 C9                     TEST ECX,ECX
004C5856  7C 10                     JL 0x004c5868
004C5858  F7 E9                     IMUL ECX
004C585A  D1 FA                     SAR EDX,0x1
004C585C  8B C2                     MOV EAX,EDX
004C585E  C1 E8 1F                  SHR EAX,0x1f
004C5861  03 D0                     ADD EDX,EAX
004C5863  0F BF C2                  MOVSX EAX,DX
004C5866  EB 0F                     JMP 0x004c5877
LAB_004c5868:
004C5868  F7 E9                     IMUL ECX
004C586A  D1 FA                     SAR EDX,0x1
004C586C  8B CA                     MOV ECX,EDX
004C586E  C1 E9 1F                  SHR ECX,0x1f
004C5871  03 D1                     ADD EDX,ECX
004C5873  0F BF C2                  MOVSX EAX,DX
004C5876  48                        DEC EAX
LAB_004c5877:
004C5877  66 85 C0                  TEST AX,AX
004C587A  7C 53                     JL 0x004c58cf
004C587C  66 8B 0D 40 B2 7F 00      MOV CX,word ptr [0x007fb240]
004C5883  66 3B C1                  CMP AX,CX
004C5886  7D 47                     JGE 0x004c58cf
004C5888  66 85 F6                  TEST SI,SI
004C588B  7C 42                     JL 0x004c58cf
004C588D  66 3B 35 42 B2 7F 00      CMP SI,word ptr [0x007fb242]
004C5894  7D 39                     JGE 0x004c58cf
004C5896  66 85 FF                  TEST DI,DI
004C5899  7C 34                     JL 0x004c58cf
004C589B  66 3B 3D 44 B2 7F 00      CMP DI,word ptr [0x007fb244]
004C58A2  7D 2B                     JGE 0x004c58cf
004C58A4  0F BF D6                  MOVSX EDX,SI
004C58A7  0F BF 35 46 B2 7F 00      MOVSX ESI,word ptr [0x007fb246]
004C58AE  0F BF C9                  MOVSX ECX,CX
004C58B1  0F AF D1                  IMUL EDX,ECX
004C58B4  0F BF CF                  MOVSX ECX,DI
004C58B7  0F AF CE                  IMUL ECX,ESI
004C58BA  0F BF C0                  MOVSX EAX,AX
004C58BD  03 D1                     ADD EDX,ECX
004C58BF  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
004C58C5  03 D0                     ADD EDX,EAX
004C58C7  8B 44 D1 04               MOV EAX,dword ptr [ECX + EDX*0x8 + 0x4]
004C58CB  85 C0                     TEST EAX,EAX
004C58CD  75 0E                     JNZ 0x004c58dd
LAB_004c58cf:
004C58CF  5F                        POP EDI
004C58D0  5E                        POP ESI
004C58D1  B8 01 00 00 00            MOV EAX,0x1
004C58D6  5B                        POP EBX
004C58D7  8B E5                     MOV ESP,EBP
004C58D9  5D                        POP EBP
004C58DA  C2 04 00                  RET 0x4
LAB_004c58dd:
004C58DD  5F                        POP EDI
004C58DE  5E                        POP ESI
004C58DF  33 C0                     XOR EAX,EAX
004C58E1  5B                        POP EBX
004C58E2  8B E5                     MOV ESP,EBP
004C58E4  5D                        POP EBP
004C58E5  C2 04 00                  RET 0x4
