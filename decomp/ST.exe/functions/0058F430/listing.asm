FUN_0058f430:
0058F430  55                        PUSH EBP
0058F431  8B EC                     MOV EBP,ESP
0058F433  83 EC 10                  SUB ESP,0x10
0058F436  56                        PUSH ESI
0058F437  8B F1                     MOV ESI,ECX
0058F439  C7 45 F0 FF 7F 00 00      MOV dword ptr [EBP + -0x10],0x7fff
0058F440  0F BF 46 47               MOVSX EAX,word ptr [ESI + 0x47]
0058F444  C7 86 3D 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x23d],0x0
0058F44E  C7 86 49 02 00 00 FF 00 00 00  MOV dword ptr [ESI + 0x249],0xff
0058F458  8D 48 FC                  LEA ECX,[EAX + -0x4]
0058F45B  83 C0 04                  ADD EAX,0x4
0058F45E  3B C8                     CMP ECX,EAX
0058F460  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0058F463  0F 8D 7D 01 00 00         JGE 0x0058f5e6
0058F469  53                        PUSH EBX
0058F46A  57                        PUSH EDI
LAB_0058f46b:
0058F46B  66 8B 15 40 B2 7F 00      MOV DX,word ptr [0x007fb240]
0058F472  0F BF C2                  MOVSX EAX,DX
0058F475  3B C8                     CMP ECX,EAX
0058F477  0F 8F 54 01 00 00         JG 0x0058f5d1
0058F47D  85 C9                     TEST ECX,ECX
0058F47F  0F 8C 4C 01 00 00         JL 0x0058f5d1
0058F485  0F BF 46 49               MOVSX EAX,word ptr [ESI + 0x49]
0058F489  8D 58 FC                  LEA EBX,[EAX + -0x4]
0058F48C  83 C0 04                  ADD EAX,0x4
0058F48F  3B D8                     CMP EBX,EAX
0058F491  0F 8D 3A 01 00 00         JGE 0x0058f5d1
LAB_0058f497:
0058F497  0F BF 05 42 B2 7F 00      MOVSX EAX,word ptr [0x007fb242]
0058F49E  3B D8                     CMP EBX,EAX
0058F4A0  0F 8F 1B 01 00 00         JG 0x0058f5c1
0058F4A6  85 DB                     TEST EBX,EBX
0058F4A8  0F 8C 13 01 00 00         JL 0x0058f5c1
0058F4AE  33 C0                     XOR EAX,EAX
0058F4B0  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_0058f4b3:
0058F4B3  66 85 C9                  TEST CX,CX
0058F4B6  0F 8C F1 00 00 00         JL 0x0058f5ad
0058F4BC  66 3B CA                  CMP CX,DX
0058F4BF  0F 8D E8 00 00 00         JGE 0x0058f5ad
0058F4C5  66 85 DB                  TEST BX,BX
0058F4C8  0F 8C DF 00 00 00         JL 0x0058f5ad
0058F4CE  66 3B 1D 42 B2 7F 00      CMP BX,word ptr [0x007fb242]
0058F4D5  0F 8D D2 00 00 00         JGE 0x0058f5ad
0058F4DB  66 85 C0                  TEST AX,AX
0058F4DE  0F 8C C9 00 00 00         JL 0x0058f5ad
0058F4E4  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
0058F4EB  0F 8D BC 00 00 00         JGE 0x0058f5ad
0058F4F1  0F BF FB                  MOVSX EDI,BX
0058F4F4  0F BF CA                  MOVSX ECX,DX
0058F4F7  0F AF F9                  IMUL EDI,ECX
0058F4FA  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
0058F501  0F BF D0                  MOVSX EDX,AX
0058F504  0F AF D1                  IMUL EDX,ECX
0058F507  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0058F50A  03 FA                     ADD EDI,EDX
0058F50C  0F BF D1                  MOVSX EDX,CX
0058F50F  03 FA                     ADD EDI,EDX
0058F511  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0058F517  8B 3C FA                  MOV EDI,dword ptr [EDX + EDI*0x8]
0058F51A  85 FF                     TEST EDI,EDI
0058F51C  0F 84 8B 00 00 00         JZ 0x0058f5ad
0058F522  83 7F 20 14               CMP dword ptr [EDI + 0x20],0x14
0058F526  0F 85 81 00 00 00         JNZ 0x0058f5ad
0058F52C  8B 07                     MOV EAX,dword ptr [EDI]
0058F52E  8B CF                     MOV ECX,EDI
0058F530  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0058F533  83 F8 15                  CMP EAX,0x15
0058F536  75 6F                     JNZ 0x0058f5a7
0058F538  0F BF 46 47               MOVSX EAX,word ptr [ESI + 0x47]
0058F53C  2B 45 FC                  SUB EAX,dword ptr [EBP + -0x4]
0058F53F  79 02                     JNS 0x0058f543
0058F541  F7 D8                     NEG EAX
LAB_0058f543:
0058F543  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0058F546  0F BF 46 49               MOVSX EAX,word ptr [ESI + 0x49]
0058F54A  2B C3                     SUB EAX,EBX
0058F54C  79 02                     JNS 0x0058f550
0058F54E  F7 D8                     NEG EAX
LAB_0058f550:
0058F550  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0058F553  8B D0                     MOV EDX,EAX
0058F555  0F BF 46 4B               MOVSX EAX,word ptr [ESI + 0x4b]
0058F559  2B C1                     SUB EAX,ECX
0058F55B  79 02                     JNS 0x0058f55f
0058F55D  F7 D8                     NEG EAX
LAB_0058f55f:
0058F55F  03 C2                     ADD EAX,EDX
0058F561  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0058F564  03 C2                     ADD EAX,EDX
0058F566  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0058F569  3B D0                     CMP EDX,EAX
0058F56B  7E 3A                     JLE 0x0058f5a7
0058F56D  66 8B 57 32               MOV DX,word ptr [EDI + 0x32]
0058F571  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0058F574  66 89 96 4D 02 00 00      MOV word ptr [ESI + 0x24d],DX
0058F57B  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
0058F57E  66 8B 55 FC               MOV DX,word ptr [EBP + -0x4]
0058F582  89 86 49 02 00 00         MOV dword ptr [ESI + 0x249],EAX
0058F588  66 89 96 31 02 00 00      MOV word ptr [ESI + 0x231],DX
0058F58F  66 89 9E 33 02 00 00      MOV word ptr [ESI + 0x233],BX
0058F596  66 89 8E 35 02 00 00      MOV word ptr [ESI + 0x235],CX
0058F59D  C7 86 3D 02 00 00 01 00 00 00  MOV dword ptr [ESI + 0x23d],0x1
LAB_0058f5a7:
0058F5A7  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0058F5AA  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_0058f5ad:
0058F5AD  66 8B 15 40 B2 7F 00      MOV DX,word ptr [0x007fb240]
0058F5B4  40                        INC EAX
0058F5B5  83 F8 05                  CMP EAX,0x5
0058F5B8  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0058F5BB  0F 8C F2 FE FF FF         JL 0x0058f4b3
LAB_0058f5c1:
0058F5C1  0F BF 46 49               MOVSX EAX,word ptr [ESI + 0x49]
0058F5C5  43                        INC EBX
0058F5C6  83 C0 04                  ADD EAX,0x4
0058F5C9  3B D8                     CMP EBX,EAX
0058F5CB  0F 8C C6 FE FF FF         JL 0x0058f497
LAB_0058f5d1:
0058F5D1  0F BF 56 47               MOVSX EDX,word ptr [ESI + 0x47]
0058F5D5  41                        INC ECX
0058F5D6  83 C2 04                  ADD EDX,0x4
0058F5D9  3B CA                     CMP ECX,EDX
0058F5DB  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0058F5DE  0F 8C 87 FE FF FF         JL 0x0058f46b
0058F5E4  5F                        POP EDI
0058F5E5  5B                        POP EBX
LAB_0058f5e6:
0058F5E6  8B 8E 3D 02 00 00         MOV ECX,dword ptr [ESI + 0x23d]
0058F5EC  33 C0                     XOR EAX,EAX
0058F5EE  85 C9                     TEST ECX,ECX
0058F5F0  0F 95 C0                  SETNZ AL
0058F5F3  5E                        POP ESI
0058F5F4  8B E5                     MOV ESP,EBP
0058F5F6  5D                        POP EBP
0058F5F7  C3                        RET
