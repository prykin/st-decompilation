FUN_004c7460:
004C7460  55                        PUSH EBP
004C7461  8B EC                     MOV EBP,ESP
004C7463  83 EC 24                  SUB ESP,0x24
004C7466  53                        PUSH EBX
004C7467  56                        PUSH ESI
004C7468  8B F1                     MOV ESI,ECX
004C746A  33 DB                     XOR EBX,EBX
004C746C  57                        PUSH EDI
004C746D  8B 86 61 03 00 00         MOV EAX,dword ptr [ESI + 0x361]
004C7473  3B C3                     CMP EAX,EBX
004C7475  75 3B                     JNZ 0x004c74b2
004C7477  39 9E D4 03 00 00         CMP dword ptr [ESI + 0x3d4],EBX
004C747D  75 33                     JNZ 0x004c74b2
004C747F  8B 86 65 03 00 00         MOV EAX,dword ptr [ESI + 0x365]
004C7485  8B 04 85 70 4D 79 00      MOV EAX,dword ptr [EAX*0x4 + 0x794d70]
004C748C  83 F8 FF                  CMP EAX,-0x1
004C748F  0F 84 F8 01 00 00         JZ 0x004c768d
004C7495  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
004C7498  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
004C749B  51                        PUSH ECX
004C749C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C74A2  50                        PUSH EAX
004C74A3  52                        PUSH EDX
004C74A4  E8 42 DD F3 FF            CALL 0x004051eb
004C74A9  5F                        POP EDI
004C74AA  5E                        POP ESI
004C74AB  33 C0                     XOR EAX,EAX
004C74AD  5B                        POP EBX
004C74AE  8B E5                     MOV ESP,EBP
004C74B0  5D                        POP EBP
004C74B1  C3                        RET
LAB_004c74b2:
004C74B2  3B C3                     CMP EAX,EBX
004C74B4  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
004C74B7  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
004C74BA  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
004C74BD  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
004C74C0  0F 84 D8 00 00 00         JZ 0x004c759e
004C74C6  83 F8 05                  CMP EAX,0x5
004C74C9  75 29                     JNZ 0x004c74f4
004C74CB  8B 86 98 03 00 00         MOV EAX,dword ptr [ESI + 0x398]
004C74D1  8B 8E 9C 03 00 00         MOV ECX,dword ptr [ESI + 0x39c]
004C74D7  8B 96 A0 03 00 00         MOV EDX,dword ptr [ESI + 0x3a0]
004C74DD  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004C74E0  8B 86 A4 03 00 00         MOV EAX,dword ptr [ESI + 0x3a4]
004C74E6  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
004C74E9  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
004C74EC  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004C74EF  E9 AA 00 00 00            JMP 0x004c759e
LAB_004c74f4:
004C74F4  8B 96 94 03 00 00         MOV EDX,dword ptr [ESI + 0x394]
004C74FA  8B 9E 98 03 00 00         MOV EBX,dword ptr [ESI + 0x398]
004C7500  B9 64 00 00 00            MOV ECX,0x64
004C7505  B8 1F 85 EB 51            MOV EAX,0x51eb851f
004C750A  2B CA                     SUB ECX,EDX
004C750C  8B BE 6D 03 00 00         MOV EDI,dword ptr [ESI + 0x36d]
004C7512  8B D1                     MOV EDX,ECX
004C7514  4F                        DEC EDI
004C7515  0F AF D3                  IMUL EDX,EBX
004C7518  F7 EA                     IMUL EDX
004C751A  C1 FA 05                  SAR EDX,0x5
004C751D  8B C2                     MOV EAX,EDX
004C751F  C1 E8 1F                  SHR EAX,0x1f
004C7522  03 D0                     ADD EDX,EAX
004C7524  8B C7                     MOV EAX,EDI
004C7526  0F AF C3                  IMUL EAX,EBX
004C7529  8B 9E 9C 03 00 00         MOV EBX,dword ptr [ESI + 0x39c]
004C752F  03 D0                     ADD EDX,EAX
004C7531  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
004C7534  8B D1                     MOV EDX,ECX
004C7536  0F AF D3                  IMUL EDX,EBX
004C7539  B8 1F 85 EB 51            MOV EAX,0x51eb851f
004C753E  F7 EA                     IMUL EDX
004C7540  C1 FA 05                  SAR EDX,0x5
004C7543  8B C2                     MOV EAX,EDX
004C7545  C1 E8 1F                  SHR EAX,0x1f
004C7548  03 D0                     ADD EDX,EAX
004C754A  8B C7                     MOV EAX,EDI
004C754C  0F AF C3                  IMUL EAX,EBX
004C754F  8B 9E A0 03 00 00         MOV EBX,dword ptr [ESI + 0x3a0]
004C7555  03 D0                     ADD EDX,EAX
004C7557  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
004C755A  8B D1                     MOV EDX,ECX
004C755C  0F AF D3                  IMUL EDX,EBX
004C755F  B8 1F 85 EB 51            MOV EAX,0x51eb851f
004C7564  F7 EA                     IMUL EDX
004C7566  C1 FA 05                  SAR EDX,0x5
004C7569  8B C2                     MOV EAX,EDX
004C756B  C1 E8 1F                  SHR EAX,0x1f
004C756E  03 D0                     ADD EDX,EAX
004C7570  8B C7                     MOV EAX,EDI
004C7572  0F AF C3                  IMUL EAX,EBX
004C7575  8B 9E A4 03 00 00         MOV EBX,dword ptr [ESI + 0x3a4]
004C757B  03 D0                     ADD EDX,EAX
004C757D  0F AF CB                  IMUL ECX,EBX
004C7580  0F AF FB                  IMUL EDI,EBX
004C7583  B8 1F 85 EB 51            MOV EAX,0x51eb851f
004C7588  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
004C758B  F7 E9                     IMUL ECX
004C758D  C1 FA 05                  SAR EDX,0x5
004C7590  8B CA                     MOV ECX,EDX
004C7592  C1 E9 1F                  SHR ECX,0x1f
004C7595  03 D1                     ADD EDX,ECX
004C7597  03 D7                     ADD EDX,EDI
004C7599  33 DB                     XOR EBX,EBX
004C759B  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_004c759e:
004C759E  8B 86 D4 03 00 00         MOV EAX,dword ptr [ESI + 0x3d4]
004C75A4  3B C3                     CMP EAX,EBX
004C75A6  0F 84 83 00 00 00         JZ 0x004c762f
004C75AC  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
004C75AF  7E 7E                     JLE 0x004c762f
004C75B1  8B 8E 07 06 00 00         MOV ECX,dword ptr [ESI + 0x607]
004C75B7  33 FF                     XOR EDI,EDI
LAB_004c75b9:
004C75B9  8D 55 DC                  LEA EDX,[EBP + -0x24]
004C75BC  8D 45 E0                  LEA EAX,[EBP + -0x20]
004C75BF  52                        PUSH EDX
004C75C0  50                        PUSH EAX
004C75C1  8D 55 E4                  LEA EDX,[EBP + -0x1c]
004C75C4  8D 45 E8                  LEA EAX,[EBP + -0x18]
004C75C7  52                        PUSH EDX
004C75C8  8B 54 0F 04               MOV EDX,dword ptr [EDI + ECX*0x1 + 0x4]
004C75CC  50                        PUSH EAX
004C75CD  8B 04 0F                  MOV EAX,dword ptr [EDI + ECX*0x1]
004C75D0  52                        PUSH EDX
004C75D1  50                        PUSH EAX
004C75D2  8B CE                     MOV ECX,ESI
004C75D4  E8 06 C0 F3 FF            CALL 0x004035df
004C75D9  8B 8E 07 06 00 00         MOV ECX,dword ptr [ESI + 0x607]
004C75DF  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
004C75E2  8B 44 0F 08               MOV EAX,dword ptr [EDI + ECX*0x1 + 0x8]
004C75E6  83 C7 27                  ADD EDI,0x27
004C75E9  8B D0                     MOV EDX,EAX
004C75EB  0F AF 55 E8               IMUL EDX,dword ptr [EBP + -0x18]
004C75EF  03 DA                     ADD EBX,EDX
004C75F1  8B D0                     MOV EDX,EAX
004C75F3  0F AF 55 E4               IMUL EDX,dword ptr [EBP + -0x1c]
004C75F7  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
004C75FA  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
004C75FD  03 DA                     ADD EBX,EDX
004C75FF  8B D0                     MOV EDX,EAX
004C7601  0F AF 55 E0               IMUL EDX,dword ptr [EBP + -0x20]
004C7605  0F AF 45 DC               IMUL EAX,dword ptr [EBP + -0x24]
004C7609  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
004C760C  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
004C760F  03 DA                     ADD EBX,EDX
004C7611  8B 96 D4 03 00 00         MOV EDX,dword ptr [ESI + 0x3d4]
004C7617  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
004C761A  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
004C761D  03 D8                     ADD EBX,EAX
004C761F  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
004C7622  40                        INC EAX
004C7623  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
004C7626  3B C2                     CMP EAX,EDX
004C7628  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
004C762B  7C 8C                     JL 0x004c75b9
004C762D  33 DB                     XOR EBX,EBX
LAB_004c762f:
004C762F  8B BE 61 03 00 00         MOV EDI,dword ptr [ESI + 0x361]
004C7635  3B FB                     CMP EDI,EBX
004C7637  75 08                     JNZ 0x004c7641
004C7639  8B 86 07 06 00 00         MOV EAX,dword ptr [ESI + 0x607]
004C763F  8B 38                     MOV EDI,dword ptr [EAX]
LAB_004c7641:
004C7641  83 3C BD 70 4D 79 00 FF   CMP dword ptr [EDI*0x4 + 0x794d70],-0x1
004C7649  74 42                     JZ 0x004c768d
004C764B  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004C764E  51                        PUSH ECX
004C764F  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C7655  E8 5D D3 F3 FF            CALL 0x004049b7
004C765A  3C 03                     CMP AL,0x3
004C765C  75 04                     JNZ 0x004c7662
004C765E  33 C0                     XOR EAX,EAX
004C7660  EB 03                     JMP 0x004c7665
LAB_004c7662:
004C7662  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_004c7665:
004C7665  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004C7668  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004C766B  52                        PUSH EDX
004C766C  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
004C766F  51                        PUSH ECX
004C7670  8B 0C BD 70 4D 79 00      MOV ECX,dword ptr [EDI*0x4 + 0x794d70]
004C7677  52                        PUSH EDX
004C7678  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
004C767B  50                        PUSH EAX
004C767C  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
004C767F  50                        PUSH EAX
004C7680  51                        PUSH ECX
004C7681  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C7687  52                        PUSH EDX
004C7688  E8 EE D2 F3 FF            CALL 0x0040497b
LAB_004c768d:
004C768D  5F                        POP EDI
004C768E  5E                        POP ESI
004C768F  33 C0                     XOR EAX,EAX
004C7691  5B                        POP EBX
004C7692  8B E5                     MOV ESP,EBP
004C7694  5D                        POP EBP
004C7695  C3                        RET
