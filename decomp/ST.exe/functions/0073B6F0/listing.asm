FUN_0073b6f0:
0073B6F0  55                        PUSH EBP
0073B6F1  8B EC                     MOV EBP,ESP
0073B6F3  81 EC A8 02 00 00         SUB ESP,0x2a8
0073B6F9  53                        PUSH EBX
0073B6FA  56                        PUSH ESI
0073B6FB  57                        PUSH EDI
0073B6FC  C7 45 DC 00 00 00 00      MOV dword ptr [EBP + -0x24],0x0
0073B703  C7 85 D4 FD FF FF 00 00 00 00  MOV dword ptr [EBP + 0xfffffdd4],0x0
0073B70D  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
switchD_0073b7a9::default:
0073B714  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0073B717  8A 08                     MOV CL,byte ptr [EAX]
0073B719  88 4D D8                  MOV byte ptr [EBP + -0x28],CL
0073B71C  0F BE 55 D8               MOVSX EDX,byte ptr [EBP + -0x28]
0073B720  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0073B723  83 C0 01                  ADD EAX,0x1
0073B726  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
0073B729  85 D2                     TEST EDX,EDX
0073B72B  0F 84 D6 0B 00 00         JZ 0x0073c307
0073B731  83 BD D4 FD FF FF 00      CMP dword ptr [EBP + 0xfffffdd4],0x0
0073B738  0F 8C C9 0B 00 00         JL 0x0073c307
0073B73E  0F BE 4D D8               MOVSX ECX,byte ptr [EBP + -0x28]
0073B742  83 F9 20                  CMP ECX,0x20
0073B745  7C 1F                     JL 0x0073b766
0073B747  0F BE 55 D8               MOVSX EDX,byte ptr [EBP + -0x28]
0073B74B  83 FA 78                  CMP EDX,0x78
0073B74E  7F 16                     JG 0x0073b766
0073B750  0F BE 45 D8               MOVSX EAX,byte ptr [EBP + -0x28]
0073B754  0F BE 88 A8 09 7A 00      MOVSX ECX,byte ptr [EAX + 0x7a09a8]
0073B75B  83 E1 0F                  AND ECX,0xf
0073B75E  89 8D 70 FD FF FF         MOV dword ptr [EBP + 0xfffffd70],ECX
0073B764  EB 0A                     JMP 0x0073b770
LAB_0073b766:
0073B766  C7 85 70 FD FF FF 00 00 00 00  MOV dword ptr [EBP + 0xfffffd70],0x0
LAB_0073b770:
0073B770  8B 95 70 FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffd70]
0073B776  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0073B779  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0073B77C  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0073B77F  0F BE 94 C1 C8 09 7A 00   MOVSX EDX,byte ptr [ECX + EAX*0x8 + 0x7a09c8]
0073B787  C1 FA 04                  SAR EDX,0x4
0073B78A  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
0073B78D  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0073B790  89 85 6C FD FF FF         MOV dword ptr [EBP + 0xfffffd6c],EAX
0073B796  83 BD 6C FD FF FF 07      CMP dword ptr [EBP + 0xfffffd6c],0x7
0073B79D  0F 87 5F 0B 00 00         JA 0x0073c302
0073B7A3  8B 8D 6C FD FF FF         MOV ECX,dword ptr [EBP + 0xfffffd6c]
switchD_0073b7a9::switchD:
0073B7A9  FF 24 8D 14 C3 73 00      JMP dword ptr [ECX*0x4 + 0x73c314]
switchD_0073b7a9::caseD_0:
0073B7B0  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
0073B7B7  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
0073B7BA  81 E2 FF 00 00 00         AND EDX,0xff
0073B7C0  A1 80 12 7F 00            MOV EAX,[0x007f1280]
0073B7C5  33 C9                     XOR ECX,ECX
0073B7C7  66 8B 0C 50               MOV CX,word ptr [EAX + EDX*0x2]
0073B7CB  81 E1 00 80 00 00         AND ECX,0x8000
0073B7D1  85 C9                     TEST ECX,ECX
0073B7D3  74 58                     JZ 0x0073b82d
0073B7D5  8D 95 D4 FD FF FF         LEA EDX,[EBP + 0xfffffdd4]
0073B7DB  52                        PUSH EDX
0073B7DC  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073B7DF  50                        PUSH EAX
0073B7E0  0F BE 4D D8               MOVSX ECX,byte ptr [EBP + -0x28]
0073B7E4  51                        PUSH ECX
0073B7E5  E8 36 0C 00 00            CALL 0x0073c420
0073B7EA  83 C4 0C                  ADD ESP,0xc
0073B7ED  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0073B7F0  8A 02                     MOV AL,byte ptr [EDX]
0073B7F2  88 45 D8                  MOV byte ptr [EBP + -0x28],AL
0073B7F5  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0073B7F8  83 C1 01                  ADD ECX,0x1
0073B7FB  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
LAB_0073b7fe:
0073B7FE  0F BE 55 D8               MOVSX EDX,byte ptr [EBP + -0x28]
0073B802  85 D2                     TEST EDX,EDX
0073B804  75 21                     JNZ 0x0073b827
0073B806  68 48 0A 7A 00            PUSH 0x7a0a48
0073B80B  6A 00                     PUSH 0x0
0073B80D  68 86 01 00 00            PUSH 0x186
0073B812  68 3C 0A 7A 00            PUSH 0x7a0a3c
0073B817  6A 02                     PUSH 0x2
0073B819  E8 82 57 FF FF            CALL 0x00730fa0
0073B81E  83 C4 14                  ADD ESP,0x14
0073B821  83 F8 01                  CMP EAX,0x1
0073B824  75 01                     JNZ 0x0073b827
0073B826  CC                        INT3
LAB_0073b827:
0073B827  33 C0                     XOR EAX,EAX
0073B829  85 C0                     TEST EAX,EAX
0073B82B  75 D1                     JNZ 0x0073b7fe
LAB_0073b82d:
0073B82D  8D 8D D4 FD FF FF         LEA ECX,[EBP + 0xfffffdd4]
0073B833  51                        PUSH ECX
0073B834  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0073B837  52                        PUSH EDX
0073B838  0F BE 45 D8               MOVSX EAX,byte ptr [EBP + -0x28]
0073B83C  50                        PUSH EAX
0073B83D  E8 DE 0B 00 00            CALL 0x0073c420
0073B842  83 C4 0C                  ADD ESP,0xc
0073B845  E9 B8 0A 00 00            JMP 0x0073c302
switchD_0073b7a9::caseD_1:
0073B84A  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0073B851  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0073B854  89 8D C4 FD FF FF         MOV dword ptr [EBP + 0xfffffdc4],ECX
0073B85A  8B 95 C4 FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffdc4]
0073B860  89 95 BC FD FF FF         MOV dword ptr [EBP + 0xfffffdbc],EDX
0073B866  8B 85 BC FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffdbc]
0073B86C  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0073B86F  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0073B876  C7 85 CC FD FF FF FF FF FF FF  MOV dword ptr [EBP + 0xfffffdcc],0xffffffff
0073B880  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
0073B887  E9 76 0A 00 00            JMP 0x0073c302
switchD_0073b7a9::caseD_2:
0073B88C  0F BE 4D D8               MOVSX ECX,byte ptr [EBP + -0x28]
0073B890  89 8D 68 FD FF FF         MOV dword ptr [EBP + 0xfffffd68],ECX
0073B896  8B 95 68 FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffd68]
0073B89C  83 EA 20                  SUB EDX,0x20
0073B89F  89 95 68 FD FF FF         MOV dword ptr [EBP + 0xfffffd68],EDX
0073B8A5  83 BD 68 FD FF FF 10      CMP dword ptr [EBP + 0xfffffd68],0x10
0073B8AC  77 48                     JA 0x0073b8f6
0073B8AE  8B 8D 68 FD FF FF         MOV ECX,dword ptr [EBP + 0xfffffd68]
0073B8B4  33 C0                     XOR EAX,EAX
0073B8B6  8A 81 4C C3 73 00         MOV AL,byte ptr [ECX + 0x73c34c]
switchD_0073b8bc::switchD:
0073B8BC  FF 24 85 34 C3 73 00      JMP dword ptr [EAX*0x4 + 0x73c334]
switchD_0073b8bc::caseD_2d:
0073B8C3  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073B8C6  83 CA 04                  OR EDX,0x4
0073B8C9  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0073B8CC  EB 28                     JMP 0x0073b8f6
switchD_0073b8bc::caseD_2b:
0073B8CE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073B8D1  0C 01                     OR AL,0x1
0073B8D3  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0073B8D6  EB 1E                     JMP 0x0073b8f6
switchD_0073b8bc::caseD_20:
0073B8D8  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073B8DB  83 C9 02                  OR ECX,0x2
0073B8DE  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0073B8E1  EB 13                     JMP 0x0073b8f6
switchD_0073b8bc::caseD_23:
0073B8E3  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073B8E6  80 CA 80                  OR DL,0x80
0073B8E9  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0073B8EC  EB 08                     JMP 0x0073b8f6
switchD_0073b8bc::caseD_30:
0073B8EE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073B8F1  0C 08                     OR AL,0x8
0073B8F3  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
switchD_0073b8bc::caseD_21:
0073B8F6  E9 07 0A 00 00            JMP 0x0073c302
switchD_0073b7a9::caseD_3:
0073B8FB  0F BE 4D D8               MOVSX ECX,byte ptr [EBP + -0x28]
0073B8FF  83 F9 2A                  CMP ECX,0x2a
0073B902  75 33                     JNZ 0x0073b937
0073B904  8D 55 10                  LEA EDX,[EBP + 0x10]
0073B907  52                        PUSH EDX
0073B908  E8 23 0C 00 00            CALL 0x0073c530
0073B90D  83 C4 04                  ADD ESP,0x4
0073B910  89 85 BC FD FF FF         MOV dword ptr [EBP + 0xfffffdbc],EAX
0073B916  83 BD BC FD FF FF 00      CMP dword ptr [EBP + 0xfffffdbc],0x0
0073B91D  7D 16                     JGE 0x0073b935
0073B91F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073B922  0C 04                     OR AL,0x4
0073B924  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0073B927  8B 8D BC FD FF FF         MOV ECX,dword ptr [EBP + 0xfffffdbc]
0073B92D  F7 D9                     NEG ECX
0073B92F  89 8D BC FD FF FF         MOV dword ptr [EBP + 0xfffffdbc],ECX
LAB_0073b935:
0073B935  EB 17                     JMP 0x0073b94e
LAB_0073b937:
0073B937  8B 95 BC FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffdbc]
0073B93D  6B D2 0A                  IMUL EDX,EDX,0xa
0073B940  0F BE 45 D8               MOVSX EAX,byte ptr [EBP + -0x28]
0073B944  8D 4C 02 D0               LEA ECX,[EDX + EAX*0x1 + -0x30]
0073B948  89 8D BC FD FF FF         MOV dword ptr [EBP + 0xfffffdbc],ECX
LAB_0073b94e:
0073B94E  E9 AF 09 00 00            JMP 0x0073c302
switchD_0073b7a9::caseD_4:
0073B953  C7 85 CC FD FF FF 00 00 00 00  MOV dword ptr [EBP + 0xfffffdcc],0x0
0073B95D  E9 A0 09 00 00            JMP 0x0073c302
switchD_0073b7a9::caseD_5:
0073B962  0F BE 55 D8               MOVSX EDX,byte ptr [EBP + -0x28]
0073B966  83 FA 2A                  CMP EDX,0x2a
0073B969  75 27                     JNZ 0x0073b992
0073B96B  8D 45 10                  LEA EAX,[EBP + 0x10]
0073B96E  50                        PUSH EAX
0073B96F  E8 BC 0B 00 00            CALL 0x0073c530
0073B974  83 C4 04                  ADD ESP,0x4
0073B977  89 85 CC FD FF FF         MOV dword ptr [EBP + 0xfffffdcc],EAX
0073B97D  83 BD CC FD FF FF 00      CMP dword ptr [EBP + 0xfffffdcc],0x0
0073B984  7D 0A                     JGE 0x0073b990
0073B986  C7 85 CC FD FF FF FF FF FF FF  MOV dword ptr [EBP + 0xfffffdcc],0xffffffff
LAB_0073b990:
0073B990  EB 17                     JMP 0x0073b9a9
LAB_0073b992:
0073B992  8B 8D CC FD FF FF         MOV ECX,dword ptr [EBP + 0xfffffdcc]
0073B998  6B C9 0A                  IMUL ECX,ECX,0xa
0073B99B  0F BE 55 D8               MOVSX EDX,byte ptr [EBP + -0x28]
0073B99F  8D 44 11 D0               LEA EAX,[ECX + EDX*0x1 + -0x30]
0073B9A3  89 85 CC FD FF FF         MOV dword ptr [EBP + 0xfffffdcc],EAX
LAB_0073b9a9:
0073B9A9  E9 54 09 00 00            JMP 0x0073c302
switchD_0073b7a9::caseD_6:
0073B9AE  0F BE 4D D8               MOVSX ECX,byte ptr [EBP + -0x28]
0073B9B2  89 8D 64 FD FF FF         MOV dword ptr [EBP + 0xfffffd64],ECX
0073B9B8  8B 95 64 FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffd64]
0073B9BE  83 EA 49                  SUB EDX,0x49
0073B9C1  89 95 64 FD FF FF         MOV dword ptr [EBP + 0xfffffd64],EDX
0073B9C7  83 BD 64 FD FF FF 2E      CMP dword ptr [EBP + 0xfffffd64],0x2e
0073B9CE  77 6C                     JA 0x0073ba3c
0073B9D0  8B 8D 64 FD FF FF         MOV ECX,dword ptr [EBP + 0xfffffd64]
0073B9D6  33 C0                     XOR EAX,EAX
0073B9D8  8A 81 71 C3 73 00         MOV AL,byte ptr [ECX + 0x73c371]
switchD_0073b9de::switchD:
0073B9DE  FF 24 85 5D C3 73 00      JMP dword ptr [EAX*0x4 + 0x73c35d]
switchD_0073b9de::caseD_6c:
0073B9E5  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073B9E8  83 CA 10                  OR EDX,0x10
0073B9EB  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0073B9EE  EB 4C                     JMP 0x0073ba3c
switchD_0073b9de::caseD_49:
0073B9F0  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0073B9F3  0F BE 08                  MOVSX ECX,byte ptr [EAX]
0073B9F6  83 F9 36                  CMP ECX,0x36
0073B9F9  75 20                     JNZ 0x0073ba1b
0073B9FB  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0073B9FE  0F BE 42 01               MOVSX EAX,byte ptr [EDX + 0x1]
0073BA02  83 F8 34                  CMP EAX,0x34
0073BA05  75 14                     JNZ 0x0073ba1b
0073BA07  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0073BA0A  83 C1 02                  ADD ECX,0x2
0073BA0D  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
0073BA10  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073BA13  80 CE 80                  OR DH,0x80
0073BA16  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0073BA19  EB 0C                     JMP 0x0073ba27
LAB_0073ba1b:
0073BA1B  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
0073BA22  E9 89 FD FF FF            JMP 0x0073b7b0
LAB_0073ba27:
0073BA27  EB 13                     JMP 0x0073ba3c
switchD_0073b9de::caseD_68:
0073BA29  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073BA2C  0C 20                     OR AL,0x20
0073BA2E  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0073BA31  EB 09                     JMP 0x0073ba3c
switchD_0073b9de::caseD_77:
0073BA33  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073BA36  80 CD 08                  OR CH,0x8
0073BA39  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
switchD_0073b9de::caseD_4a:
0073BA3C  E9 C1 08 00 00            JMP 0x0073c302
switchD_0073b7a9::caseD_7:
0073BA41  0F BE 55 D8               MOVSX EDX,byte ptr [EBP + -0x28]
0073BA45  89 95 60 FD FF FF         MOV dword ptr [EBP + 0xfffffd60],EDX
0073BA4B  8B 85 60 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffd60]
0073BA51  83 E8 43                  SUB EAX,0x43
0073BA54  89 85 60 FD FF FF         MOV dword ptr [EBP + 0xfffffd60],EAX
0073BA5A  83 BD 60 FD FF FF 35      CMP dword ptr [EBP + 0xfffffd60],0x35
0073BA61  0F 87 C0 06 00 00         JA 0x0073c127
0073BA67  8B 95 60 FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffd60]
0073BA6D  33 C9                     XOR ECX,ECX
0073BA6F  8A 8A DC C3 73 00         MOV CL,byte ptr [EDX + 0x73c3dc]
switchD_0073ba75::switchD:
0073BA75  FF 24 8D A0 C3 73 00      JMP dword ptr [ECX*0x4 + 0x73c3a0]
switchD_0073ba75::caseD_43:
0073BA7C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073BA7F  25 30 08 00 00            AND EAX,0x830
0073BA84  85 C0                     TEST EAX,EAX
0073BA86  75 09                     JNZ 0x0073ba91
0073BA88  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073BA8B  80 CD 08                  OR CH,0x8
0073BA8E  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
switchD_0073ba75::caseD_63:
0073BA91  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073BA94  81 E2 10 08 00 00         AND EDX,0x810
0073BA9A  85 D2                     TEST EDX,EDX
0073BA9C  74 39                     JZ 0x0073bad7
0073BA9E  8D 45 10                  LEA EAX,[EBP + 0x10]
0073BAA1  50                        PUSH EAX
0073BAA2  E8 C9 0A 00 00            CALL 0x0073c570
0073BAA7  83 C4 04                  ADD ESP,0x4
0073BAAA  66 89 45 EC               MOV word ptr [EBP + -0x14],AX
0073BAAE  66 8B 4D EC               MOV CX,word ptr [EBP + -0x14]
0073BAB2  51                        PUSH ECX
0073BAB3  8D 95 D8 FD FF FF         LEA EDX,[EBP + 0xfffffdd8]
0073BAB9  52                        PUSH EDX
0073BABA  E8 51 74 00 00            CALL 0x00742f10
0073BABF  83 C4 08                  ADD ESP,0x8
0073BAC2  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0073BAC5  83 7D DC 00               CMP dword ptr [EBP + -0x24],0x0
0073BAC9  7D 0A                     JGE 0x0073bad5
0073BACB  C7 85 C4 FD FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffffdc4],0x1
LAB_0073bad5:
0073BAD5  EB 26                     JMP 0x0073bafd
LAB_0073bad7:
0073BAD7  8D 45 10                  LEA EAX,[EBP + 0x10]
0073BADA  50                        PUSH EAX
0073BADB  E8 50 0A 00 00            CALL 0x0073c530
0073BAE0  83 C4 04                  ADD ESP,0x4
0073BAE3  66 89 85 B8 FD FF FF      MOV word ptr [EBP + 0xfffffdb8],AX
0073BAEA  8A 8D B8 FD FF FF         MOV CL,byte ptr [EBP + 0xfffffdb8]
0073BAF0  88 8D D8 FD FF FF         MOV byte ptr [EBP + 0xfffffdd8],CL
0073BAF6  C7 45 DC 01 00 00 00      MOV dword ptr [EBP + -0x24],0x1
LAB_0073bafd:
0073BAFD  8D 95 D8 FD FF FF         LEA EDX,[EBP + 0xfffffdd8]
0073BB03  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
0073BB06  E9 1C 06 00 00            JMP 0x0073c127
switchD_0073ba75::caseD_5a:
0073BB0B  8D 45 10                  LEA EAX,[EBP + 0x10]
0073BB0E  50                        PUSH EAX
0073BB0F  E8 1C 0A 00 00            CALL 0x0073c530
0073BB14  83 C4 04                  ADD ESP,0x4
0073BB17  89 85 B4 FD FF FF         MOV dword ptr [EBP + 0xfffffdb4],EAX
0073BB1D  83 BD B4 FD FF FF 00      CMP dword ptr [EBP + 0xfffffdb4],0x0
0073BB24  74 0C                     JZ 0x0073bb32
0073BB26  8B 8D B4 FD FF FF         MOV ECX,dword ptr [EBP + 0xfffffdb4]
0073BB2C  83 79 04 00               CMP dword ptr [ECX + 0x4],0x0
0073BB30  75 1A                     JNZ 0x0073bb4c
LAB_0073bb32:
0073BB32  8B 15 58 1F 7F 00         MOV EDX,dword ptr [0x007f1f58]
0073BB38  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
0073BB3B  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0073BB3E  50                        PUSH EAX
0073BB3F  E8 CC B0 FF FF            CALL 0x00736c10
0073BB44  83 C4 04                  ADD ESP,0x4
0073BB47  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0073BB4A  EB 4F                     JMP 0x0073bb9b
LAB_0073bb4c:
0073BB4C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073BB4F  81 E1 00 08 00 00         AND ECX,0x800
0073BB55  85 C9                     TEST ECX,ECX
0073BB57  74 23                     JZ 0x0073bb7c
0073BB59  8B 95 B4 FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffdb4]
0073BB5F  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
0073BB62  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0073BB65  8B 8D B4 FD FF FF         MOV ECX,dword ptr [EBP + 0xfffffdb4]
0073BB6B  0F BF 11                  MOVSX EDX,word ptr [ECX]
0073BB6E  D1 EA                     SHR EDX,0x1
0073BB70  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
0073BB73  C7 45 E4 01 00 00 00      MOV dword ptr [EBP + -0x1c],0x1
0073BB7A  EB 1F                     JMP 0x0073bb9b
LAB_0073bb7c:
0073BB7C  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
0073BB83  8B 85 B4 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffdb4]
0073BB89  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
0073BB8C  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
0073BB8F  8B 95 B4 FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffdb4]
0073BB95  0F BF 02                  MOVSX EAX,word ptr [EDX]
0073BB98  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
LAB_0073bb9b:
0073BB9B  E9 87 05 00 00            JMP 0x0073c127
switchD_0073ba75::caseD_53:
0073BBA0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073BBA3  81 E1 30 08 00 00         AND ECX,0x830
0073BBA9  85 C9                     TEST ECX,ECX
0073BBAB  75 09                     JNZ 0x0073bbb6
0073BBAD  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073BBB0  80 CE 08                  OR DH,0x8
0073BBB3  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
switchD_0073ba75::caseD_73:
0073BBB6  83 BD CC FD FF FF FF      CMP dword ptr [EBP + 0xfffffdcc],-0x1
0073BBBD  75 0C                     JNZ 0x0073bbcb
0073BBBF  C7 85 5C FD FF FF FF FF FF 7F  MOV dword ptr [EBP + 0xfffffd5c],0x7fffffff
0073BBC9  EB 0C                     JMP 0x0073bbd7
LAB_0073bbcb:
0073BBCB  8B 85 CC FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffdcc]
0073BBD1  89 85 5C FD FF FF         MOV dword ptr [EBP + 0xfffffd5c],EAX
LAB_0073bbd7:
0073BBD7  8B 8D 5C FD FF FF         MOV ECX,dword ptr [EBP + 0xfffffd5c]
0073BBDD  89 8D A8 FD FF FF         MOV dword ptr [EBP + 0xfffffda8],ECX
0073BBE3  8D 55 10                  LEA EDX,[EBP + 0x10]
0073BBE6  52                        PUSH EDX
0073BBE7  E8 44 09 00 00            CALL 0x0073c530
0073BBEC  83 C4 04                  ADD ESP,0x4
0073BBEF  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0073BBF2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073BBF5  25 10 08 00 00            AND EAX,0x810
0073BBFA  85 C0                     TEST EAX,EAX
0073BBFC  74 68                     JZ 0x0073bc66
0073BBFE  83 7D E0 00               CMP dword ptr [EBP + -0x20],0x0
0073BC02  75 09                     JNZ 0x0073bc0d
0073BC04  8B 0D 5C 1F 7F 00         MOV ECX,dword ptr [0x007f1f5c]
0073BC0A  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
LAB_0073bc0d:
0073BC0D  C7 45 E4 01 00 00 00      MOV dword ptr [EBP + -0x1c],0x1
0073BC14  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
0073BC17  89 95 AC FD FF FF         MOV dword ptr [EBP + 0xfffffdac],EDX
LAB_0073bc1d:
0073BC1D  8B 85 A8 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffda8]
0073BC23  8B 8D A8 FD FF FF         MOV ECX,dword ptr [EBP + 0xfffffda8]
0073BC29  83 E9 01                  SUB ECX,0x1
0073BC2C  89 8D A8 FD FF FF         MOV dword ptr [EBP + 0xfffffda8],ECX
0073BC32  85 C0                     TEST EAX,EAX
0073BC34  74 20                     JZ 0x0073bc56
0073BC36  8B 95 AC FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffdac]
0073BC3C  33 C0                     XOR EAX,EAX
0073BC3E  66 8B 02                  MOV AX,word ptr [EDX]
0073BC41  85 C0                     TEST EAX,EAX
0073BC43  74 11                     JZ 0x0073bc56
0073BC45  8B 8D AC FD FF FF         MOV ECX,dword ptr [EBP + 0xfffffdac]
0073BC4B  83 C1 02                  ADD ECX,0x2
0073BC4E  89 8D AC FD FF FF         MOV dword ptr [EBP + 0xfffffdac],ECX
0073BC54  EB C7                     JMP 0x0073bc1d
LAB_0073bc56:
0073BC56  8B 95 AC FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffdac]
0073BC5C  2B 55 E0                  SUB EDX,dword ptr [EBP + -0x20]
0073BC5F  D1 FA                     SAR EDX,0x1
0073BC61  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
0073BC64  EB 5A                     JMP 0x0073bcc0
LAB_0073bc66:
0073BC66  83 7D E0 00               CMP dword ptr [EBP + -0x20],0x0
0073BC6A  75 08                     JNZ 0x0073bc74
0073BC6C  A1 58 1F 7F 00            MOV EAX,[0x007f1f58]
0073BC71  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
LAB_0073bc74:
0073BC74  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0073BC77  89 8D B0 FD FF FF         MOV dword ptr [EBP + 0xfffffdb0],ECX
LAB_0073bc7d:
0073BC7D  8B 95 A8 FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffda8]
0073BC83  8B 85 A8 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffda8]
0073BC89  83 E8 01                  SUB EAX,0x1
0073BC8C  89 85 A8 FD FF FF         MOV dword ptr [EBP + 0xfffffda8],EAX
0073BC92  85 D2                     TEST EDX,EDX
0073BC94  74 1E                     JZ 0x0073bcb4
0073BC96  8B 8D B0 FD FF FF         MOV ECX,dword ptr [EBP + 0xfffffdb0]
0073BC9C  0F BE 11                  MOVSX EDX,byte ptr [ECX]
0073BC9F  85 D2                     TEST EDX,EDX
0073BCA1  74 11                     JZ 0x0073bcb4
0073BCA3  8B 85 B0 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffdb0]
0073BCA9  83 C0 01                  ADD EAX,0x1
0073BCAC  89 85 B0 FD FF FF         MOV dword ptr [EBP + 0xfffffdb0],EAX
0073BCB2  EB C9                     JMP 0x0073bc7d
LAB_0073bcb4:
0073BCB4  8B 8D B0 FD FF FF         MOV ECX,dword ptr [EBP + 0xfffffdb0]
0073BCBA  2B 4D E0                  SUB ECX,dword ptr [EBP + -0x20]
0073BCBD  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
LAB_0073bcc0:
0073BCC0  E9 62 04 00 00            JMP 0x0073c127
switchD_0073ba75::caseD_6e:
0073BCC5  8D 55 10                  LEA EDX,[EBP + 0x10]
0073BCC8  52                        PUSH EDX
0073BCC9  E8 62 08 00 00            CALL 0x0073c530
0073BCCE  83 C4 04                  ADD ESP,0x4
0073BCD1  89 85 A4 FD FF FF         MOV dword ptr [EBP + 0xfffffda4],EAX
0073BCD7  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073BCDA  83 E0 20                  AND EAX,0x20
0073BCDD  85 C0                     TEST EAX,EAX
0073BCDF  74 12                     JZ 0x0073bcf3
0073BCE1  8B 8D A4 FD FF FF         MOV ECX,dword ptr [EBP + 0xfffffda4]
0073BCE7  66 8B 95 D4 FD FF FF      MOV DX,word ptr [EBP + 0xfffffdd4]
0073BCEE  66 89 11                  MOV word ptr [ECX],DX
0073BCF1  EB 0E                     JMP 0x0073bd01
LAB_0073bcf3:
0073BCF3  8B 85 A4 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffda4]
0073BCF9  8B 8D D4 FD FF FF         MOV ECX,dword ptr [EBP + 0xfffffdd4]
0073BCFF  89 08                     MOV dword ptr [EAX],ECX
LAB_0073bd01:
0073BD01  C7 85 C4 FD FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffffdc4],0x1
0073BD0B  E9 17 04 00 00            JMP 0x0073c127
switchD_0073ba75::caseD_45:
0073BD10  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
0073BD17  8A 55 D8                  MOV DL,byte ptr [EBP + -0x28]
0073BD1A  80 C2 20                  ADD DL,0x20
0073BD1D  88 55 D8                  MOV byte ptr [EBP + -0x28],DL
switchD_0073ba75::caseD_65:
0073BD20  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073BD23  0C 40                     OR AL,0x40
0073BD25  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0073BD28  8D 8D D8 FD FF FF         LEA ECX,[EBP + 0xfffffdd8]
0073BD2E  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
0073BD31  83 BD CC FD FF FF 00      CMP dword ptr [EBP + 0xfffffdcc],0x0
0073BD38  7D 0C                     JGE 0x0073bd46
0073BD3A  C7 85 CC FD FF FF 06 00 00 00  MOV dword ptr [EBP + 0xfffffdcc],0x6
0073BD44  EB 1C                     JMP 0x0073bd62
LAB_0073bd46:
0073BD46  83 BD CC FD FF FF 00      CMP dword ptr [EBP + 0xfffffdcc],0x0
0073BD4D  75 13                     JNZ 0x0073bd62
0073BD4F  0F BE 55 D8               MOVSX EDX,byte ptr [EBP + -0x28]
0073BD53  83 FA 67                  CMP EDX,0x67
0073BD56  75 0A                     JNZ 0x0073bd62
0073BD58  C7 85 CC FD FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffffdcc],0x1
LAB_0073bd62:
0073BD62  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0073BD65  83 C0 08                  ADD EAX,0x8
0073BD68  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
0073BD6B  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0073BD6E  83 E9 08                  SUB ECX,0x8
0073BD71  8B 11                     MOV EDX,dword ptr [ECX]
0073BD73  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
0073BD76  89 95 9C FD FF FF         MOV dword ptr [EBP + 0xfffffd9c],EDX
0073BD7C  89 85 A0 FD FF FF         MOV dword ptr [EBP + 0xfffffda0],EAX
0073BD82  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0073BD85  51                        PUSH ECX
0073BD86  8B 95 CC FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffdcc]
0073BD8C  52                        PUSH EDX
0073BD8D  0F BE 45 D8               MOVSX EAX,byte ptr [EBP + -0x28]
0073BD91  50                        PUSH EAX
0073BD92  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0073BD95  51                        PUSH ECX
0073BD96  8D 95 9C FD FF FF         LEA EDX,[EBP + 0xfffffd9c]
0073BD9C  52                        PUSH EDX
0073BD9D  FF 15 30 15 7F 00         CALL dword ptr [0x007f1530]
0073BDA3  83 C4 14                  ADD ESP,0x14
0073BDA6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073BDA9  25 80 00 00 00            AND EAX,0x80
0073BDAE  85 C0                     TEST EAX,EAX
0073BDB0  74 16                     JZ 0x0073bdc8
0073BDB2  83 BD CC FD FF FF 00      CMP dword ptr [EBP + 0xfffffdcc],0x0
0073BDB9  75 0D                     JNZ 0x0073bdc8
0073BDBB  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0073BDBE  51                        PUSH ECX
0073BDBF  FF 15 3C 15 7F 00         CALL dword ptr [0x007f153c]
0073BDC5  83 C4 04                  ADD ESP,0x4
LAB_0073bdc8:
0073BDC8  0F BE 55 D8               MOVSX EDX,byte ptr [EBP + -0x28]
0073BDCC  83 FA 67                  CMP EDX,0x67
0073BDCF  75 19                     JNZ 0x0073bdea
0073BDD1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073BDD4  25 80 00 00 00            AND EAX,0x80
0073BDD9  85 C0                     TEST EAX,EAX
0073BDDB  75 0D                     JNZ 0x0073bdea
0073BDDD  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0073BDE0  51                        PUSH ECX
0073BDE1  FF 15 34 15 7F 00         CALL dword ptr [0x007f1534]
0073BDE7  83 C4 04                  ADD ESP,0x4
LAB_0073bdea:
0073BDEA  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
0073BDED  0F BE 02                  MOVSX EAX,byte ptr [EDX]
0073BDF0  83 F8 2D                  CMP EAX,0x2d
0073BDF3  75 12                     JNZ 0x0073be07
0073BDF5  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073BDF8  80 CD 01                  OR CH,0x1
0073BDFB  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0073BDFE  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
0073BE01  83 C2 01                  ADD EDX,0x1
0073BE04  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
LAB_0073be07:
0073BE07  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0073BE0A  50                        PUSH EAX
0073BE0B  E8 00 AE FF FF            CALL 0x00736c10
0073BE10  83 C4 04                  ADD ESP,0x4
0073BE13  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0073BE16  E9 0C 03 00 00            JMP 0x0073c127
switchD_0073ba75::caseD_64:
0073BE1B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073BE1E  83 C9 40                  OR ECX,0x40
0073BE21  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0073BE24  C7 85 C8 FD FF FF 0A 00 00 00  MOV dword ptr [EBP + 0xfffffdc8],0xa
0073BE2E  E9 82 00 00 00            JMP 0x0073beb5
switchD_0073ba75::caseD_75:
0073BE33  C7 85 C8 FD FF FF 0A 00 00 00  MOV dword ptr [EBP + 0xfffffdc8],0xa
0073BE3D  EB 76                     JMP 0x0073beb5
switchD_0073ba75::caseD_70:
0073BE3F  C7 85 CC FD FF FF 08 00 00 00  MOV dword ptr [EBP + 0xfffffdcc],0x8
switchD_0073ba75::caseD_58:
0073BE49  C7 85 D0 FD FF FF 07 00 00 00  MOV dword ptr [EBP + 0xfffffdd0],0x7
0073BE53  EB 0A                     JMP 0x0073be5f
switchD_0073ba75::caseD_78:
0073BE55  C7 85 D0 FD FF FF 27 00 00 00  MOV dword ptr [EBP + 0xfffffdd0],0x27
LAB_0073be5f:
0073BE5F  C7 85 C8 FD FF FF 10 00 00 00  MOV dword ptr [EBP + 0xfffffdc8],0x10
0073BE69  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073BE6C  81 E2 80 00 00 00         AND EDX,0x80
0073BE72  85 D2                     TEST EDX,EDX
0073BE74  74 1D                     JZ 0x0073be93
0073BE76  C6 85 C0 FD FF FF 30      MOV byte ptr [EBP + 0xfffffdc0],0x30
0073BE7D  8B 85 D0 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffdd0]
0073BE83  83 C0 51                  ADD EAX,0x51
0073BE86  88 85 C1 FD FF FF         MOV byte ptr [EBP + 0xfffffdc1],AL
0073BE8C  C7 45 F0 02 00 00 00      MOV dword ptr [EBP + -0x10],0x2
LAB_0073be93:
0073BE93  EB 20                     JMP 0x0073beb5
switchD_0073ba75::caseD_6f:
0073BE95  C7 85 C8 FD FF FF 08 00 00 00  MOV dword ptr [EBP + 0xfffffdc8],0x8
0073BE9F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073BEA2  81 E1 80 00 00 00         AND ECX,0x80
0073BEA8  85 C9                     TEST ECX,ECX
0073BEAA  74 09                     JZ 0x0073beb5
0073BEAC  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073BEAF  80 CE 02                  OR DH,0x2
0073BEB2  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_0073beb5:
0073BEB5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073BEB8  25 00 80 00 00            AND EAX,0x8000
0073BEBD  85 C0                     TEST EAX,EAX
0073BEBF  74 1D                     JZ 0x0073bede
0073BEC1  8D 4D 10                  LEA ECX,[EBP + 0x10]
0073BEC4  51                        PUSH ECX
0073BEC5  E8 86 06 00 00            CALL 0x0073c550
0073BECA  83 C4 04                  ADD ESP,0x4
0073BECD  89 85 88 FD FF FF         MOV dword ptr [EBP + 0xfffffd88],EAX
0073BED3  89 95 8C FD FF FF         MOV dword ptr [EBP + 0xfffffd8c],EDX
0073BED9  E9 91 00 00 00            JMP 0x0073bf6f
LAB_0073bede:
0073BEDE  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073BEE1  83 E2 20                  AND EDX,0x20
0073BEE4  85 D2                     TEST EDX,EDX
0073BEE6  74 48                     JZ 0x0073bf30
0073BEE8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073BEEB  83 E0 40                  AND EAX,0x40
0073BEEE  85 C0                     TEST EAX,EAX
0073BEF0  74 1E                     JZ 0x0073bf10
0073BEF2  8D 4D 10                  LEA ECX,[EBP + 0x10]
0073BEF5  51                        PUSH ECX
0073BEF6  E8 35 06 00 00            CALL 0x0073c530
0073BEFB  83 C4 04                  ADD ESP,0x4
0073BEFE  0F BF C0                  MOVSX EAX,AX
0073BF01  99                        CDQ
0073BF02  89 85 88 FD FF FF         MOV dword ptr [EBP + 0xfffffd88],EAX
0073BF08  89 95 8C FD FF FF         MOV dword ptr [EBP + 0xfffffd8c],EDX
0073BF0E  EB 1E                     JMP 0x0073bf2e
LAB_0073bf10:
0073BF10  8D 55 10                  LEA EDX,[EBP + 0x10]
0073BF13  52                        PUSH EDX
0073BF14  E8 17 06 00 00            CALL 0x0073c530
0073BF19  83 C4 04                  ADD ESP,0x4
0073BF1C  25 FF FF 00 00            AND EAX,0xffff
0073BF21  99                        CDQ
0073BF22  89 85 88 FD FF FF         MOV dword ptr [EBP + 0xfffffd88],EAX
0073BF28  89 95 8C FD FF FF         MOV dword ptr [EBP + 0xfffffd8c],EDX
LAB_0073bf2e:
0073BF2E  EB 3F                     JMP 0x0073bf6f
LAB_0073bf30:
0073BF30  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073BF33  83 E0 40                  AND EAX,0x40
0073BF36  85 C0                     TEST EAX,EAX
0073BF38  74 1B                     JZ 0x0073bf55
0073BF3A  8D 4D 10                  LEA ECX,[EBP + 0x10]
0073BF3D  51                        PUSH ECX
0073BF3E  E8 ED 05 00 00            CALL 0x0073c530
0073BF43  83 C4 04                  ADD ESP,0x4
0073BF46  99                        CDQ
0073BF47  89 85 88 FD FF FF         MOV dword ptr [EBP + 0xfffffd88],EAX
0073BF4D  89 95 8C FD FF FF         MOV dword ptr [EBP + 0xfffffd8c],EDX
0073BF53  EB 1A                     JMP 0x0073bf6f
LAB_0073bf55:
0073BF55  8D 55 10                  LEA EDX,[EBP + 0x10]
0073BF58  52                        PUSH EDX
0073BF59  E8 D2 05 00 00            CALL 0x0073c530
0073BF5E  83 C4 04                  ADD ESP,0x4
0073BF61  33 C9                     XOR ECX,ECX
0073BF63  89 85 88 FD FF FF         MOV dword ptr [EBP + 0xfffffd88],EAX
0073BF69  89 8D 8C FD FF FF         MOV dword ptr [EBP + 0xfffffd8c],ECX
LAB_0073bf6f:
0073BF6F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073BF72  83 E2 40                  AND EDX,0x40
0073BF75  85 D2                     TEST EDX,EDX
0073BF77  74 3E                     JZ 0x0073bfb7
0073BF79  83 BD 8C FD FF FF 00      CMP dword ptr [EBP + 0xfffffd8c],0x0
0073BF80  7F 35                     JG 0x0073bfb7
0073BF82  7C 09                     JL 0x0073bf8d
0073BF84  83 BD 88 FD FF FF 00      CMP dword ptr [EBP + 0xfffffd88],0x0
0073BF8B  73 2A                     JNC 0x0073bfb7
LAB_0073bf8d:
0073BF8D  8B 85 88 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffd88]
0073BF93  F7 D8                     NEG EAX
0073BF95  8B 8D 8C FD FF FF         MOV ECX,dword ptr [EBP + 0xfffffd8c]
0073BF9B  83 D1 00                  ADC ECX,0x0
0073BF9E  F7 D9                     NEG ECX
0073BFA0  89 85 94 FD FF FF         MOV dword ptr [EBP + 0xfffffd94],EAX
0073BFA6  89 8D 98 FD FF FF         MOV dword ptr [EBP + 0xfffffd98],ECX
0073BFAC  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073BFAF  80 CE 01                  OR DH,0x1
0073BFB2  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0073BFB5  EB 18                     JMP 0x0073bfcf
LAB_0073bfb7:
0073BFB7  8B 85 88 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffd88]
0073BFBD  89 85 94 FD FF FF         MOV dword ptr [EBP + 0xfffffd94],EAX
0073BFC3  8B 8D 8C FD FF FF         MOV ECX,dword ptr [EBP + 0xfffffd8c]
0073BFC9  89 8D 98 FD FF FF         MOV dword ptr [EBP + 0xfffffd98],ECX
LAB_0073bfcf:
0073BFCF  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073BFD2  81 E2 00 80 00 00         AND EDX,0x8000
0073BFD8  85 D2                     TEST EDX,EDX
0073BFDA  75 1B                     JNZ 0x0073bff7
0073BFDC  8B 85 94 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffd94]
0073BFE2  8B 8D 98 FD FF FF         MOV ECX,dword ptr [EBP + 0xfffffd98]
0073BFE8  83 E1 00                  AND ECX,0x0
0073BFEB  89 85 94 FD FF FF         MOV dword ptr [EBP + 0xfffffd94],EAX
0073BFF1  89 8D 98 FD FF FF         MOV dword ptr [EBP + 0xfffffd98],ECX
LAB_0073bff7:
0073BFF7  83 BD CC FD FF FF 00      CMP dword ptr [EBP + 0xfffffdcc],0x0
0073BFFE  7D 0C                     JGE 0x0073c00c
0073C000  C7 85 CC FD FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffffdcc],0x1
0073C00A  EB 09                     JMP 0x0073c015
LAB_0073c00c:
0073C00C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073C00F  83 E2 F7                  AND EDX,0xfffffff7
0073C012  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_0073c015:
0073C015  8B 85 94 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffd94]
0073C01B  0B 85 98 FD FF FF         OR EAX,dword ptr [EBP + 0xfffffd98]
0073C021  85 C0                     TEST EAX,EAX
0073C023  75 07                     JNZ 0x0073c02c
0073C025  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
LAB_0073c02c:
0073C02C  8D 4D D7                  LEA ECX,[EBP + -0x29]
0073C02F  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
LAB_0073c032:
0073C032  8B 95 CC FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffdcc]
0073C038  8B 85 CC FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffdcc]
0073C03E  83 E8 01                  SUB EAX,0x1
0073C041  89 85 CC FD FF FF         MOV dword ptr [EBP + 0xfffffdcc],EAX
0073C047  85 D2                     TEST EDX,EDX
0073C049  7F 14                     JG 0x0073c05f
0073C04B  8B 8D 94 FD FF FF         MOV ECX,dword ptr [EBP + 0xfffffd94]
0073C051  0B 8D 98 FD FF FF         OR ECX,dword ptr [EBP + 0xfffffd98]
0073C057  85 C9                     TEST ECX,ECX
0073C059  0F 84 81 00 00 00         JZ 0x0073c0e0
LAB_0073c05f:
0073C05F  8B 85 C8 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffdc8]
0073C065  99                        CDQ
0073C066  52                        PUSH EDX
0073C067  50                        PUSH EAX
0073C068  8B 95 98 FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffd98]
0073C06E  52                        PUSH EDX
0073C06F  8B 85 94 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffd94]
0073C075  50                        PUSH EAX
0073C076  E8 15 92 FF FF            CALL 0x00735290
0073C07B  83 C0 30                  ADD EAX,0x30
0073C07E  89 85 90 FD FF FF         MOV dword ptr [EBP + 0xfffffd90],EAX
0073C084  8B 85 C8 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffdc8]
0073C08A  99                        CDQ
0073C08B  52                        PUSH EDX
0073C08C  50                        PUSH EAX
0073C08D  8B 8D 98 FD FF FF         MOV ECX,dword ptr [EBP + 0xfffffd98]
0073C093  51                        PUSH ECX
0073C094  8B 95 94 FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffd94]
0073C09A  52                        PUSH EDX
0073C09B  E8 80 91 FF FF            CALL 0x00735220
0073C0A0  89 85 94 FD FF FF         MOV dword ptr [EBP + 0xfffffd94],EAX
0073C0A6  89 95 98 FD FF FF         MOV dword ptr [EBP + 0xfffffd98],EDX
0073C0AC  83 BD 90 FD FF FF 39      CMP dword ptr [EBP + 0xfffffd90],0x39
0073C0B3  7E 12                     JLE 0x0073c0c7
0073C0B5  8B 85 90 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffd90]
0073C0BB  03 85 D0 FD FF FF         ADD EAX,dword ptr [EBP + 0xfffffdd0]
0073C0C1  89 85 90 FD FF FF         MOV dword ptr [EBP + 0xfffffd90],EAX
LAB_0073c0c7:
0073C0C7  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0073C0CA  8A 95 90 FD FF FF         MOV DL,byte ptr [EBP + 0xfffffd90]
0073C0D0  88 11                     MOV byte ptr [ECX],DL
0073C0D2  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0073C0D5  83 E8 01                  SUB EAX,0x1
0073C0D8  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0073C0DB  E9 52 FF FF FF            JMP 0x0073c032
LAB_0073c0e0:
0073C0E0  8D 4D D7                  LEA ECX,[EBP + -0x29]
0073C0E3  2B 4D E0                  SUB ECX,dword ptr [EBP + -0x20]
0073C0E6  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
0073C0E9  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
0073C0EC  83 C2 01                  ADD EDX,0x1
0073C0EF  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
0073C0F2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073C0F5  25 00 02 00 00            AND EAX,0x200
0073C0FA  85 C0                     TEST EAX,EAX
0073C0FC  74 29                     JZ 0x0073c127
0073C0FE  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0073C101  0F BE 11                  MOVSX EDX,byte ptr [ECX]
0073C104  83 FA 30                  CMP EDX,0x30
0073C107  75 06                     JNZ 0x0073c10f
0073C109  83 7D DC 00               CMP dword ptr [EBP + -0x24],0x0
0073C10D  75 18                     JNZ 0x0073c127
LAB_0073c10f:
0073C10F  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0073C112  83 E8 01                  SUB EAX,0x1
0073C115  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0073C118  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0073C11B  C6 01 30                  MOV byte ptr [ECX],0x30
0073C11E  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
0073C121  83 C2 01                  ADD EDX,0x1
0073C124  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
switchD_0073ba75::caseD_44:
0073C127  83 BD C4 FD FF FF 00      CMP dword ptr [EBP + 0xfffffdc4],0x0
0073C12E  0F 85 CE 01 00 00         JNZ 0x0073c302
0073C134  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073C137  83 E0 40                  AND EAX,0x40
0073C13A  85 C0                     TEST EAX,EAX
0073C13C  74 4F                     JZ 0x0073c18d
0073C13E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073C141  81 E1 00 01 00 00         AND ECX,0x100
0073C147  85 C9                     TEST ECX,ECX
0073C149  74 10                     JZ 0x0073c15b
0073C14B  C6 85 C0 FD FF FF 2D      MOV byte ptr [EBP + 0xfffffdc0],0x2d
0073C152  C7 45 F0 01 00 00 00      MOV dword ptr [EBP + -0x10],0x1
0073C159  EB 32                     JMP 0x0073c18d
LAB_0073c15b:
0073C15B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073C15E  83 E2 01                  AND EDX,0x1
0073C161  85 D2                     TEST EDX,EDX
0073C163  74 10                     JZ 0x0073c175
0073C165  C6 85 C0 FD FF FF 2B      MOV byte ptr [EBP + 0xfffffdc0],0x2b
0073C16C  C7 45 F0 01 00 00 00      MOV dword ptr [EBP + -0x10],0x1
0073C173  EB 18                     JMP 0x0073c18d
LAB_0073c175:
0073C175  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073C178  83 E0 02                  AND EAX,0x2
0073C17B  85 C0                     TEST EAX,EAX
0073C17D  74 0E                     JZ 0x0073c18d
0073C17F  C6 85 C0 FD FF FF 20      MOV byte ptr [EBP + 0xfffffdc0],0x20
0073C186  C7 45 F0 01 00 00 00      MOV dword ptr [EBP + -0x10],0x1
LAB_0073c18d:
0073C18D  8B 8D BC FD FF FF         MOV ECX,dword ptr [EBP + 0xfffffdbc]
0073C193  2B 4D DC                  SUB ECX,dword ptr [EBP + -0x24]
0073C196  2B 4D F0                  SUB ECX,dword ptr [EBP + -0x10]
0073C199  89 8D 84 FD FF FF         MOV dword ptr [EBP + 0xfffffd84],ECX
0073C19F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073C1A2  83 E2 0C                  AND EDX,0xc
0073C1A5  85 D2                     TEST EDX,EDX
0073C1A7  75 1C                     JNZ 0x0073c1c5
0073C1A9  8D 85 D4 FD FF FF         LEA EAX,[EBP + 0xfffffdd4]
0073C1AF  50                        PUSH EAX
0073C1B0  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0073C1B3  51                        PUSH ECX
0073C1B4  8B 95 84 FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffd84]
0073C1BA  52                        PUSH EDX
0073C1BB  6A 20                     PUSH 0x20
0073C1BD  E8 DE 02 00 00            CALL 0x0073c4a0
0073C1C2  83 C4 10                  ADD ESP,0x10
LAB_0073c1c5:
0073C1C5  8D 85 D4 FD FF FF         LEA EAX,[EBP + 0xfffffdd4]
0073C1CB  50                        PUSH EAX
0073C1CC  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0073C1CF  51                        PUSH ECX
0073C1D0  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0073C1D3  52                        PUSH EDX
0073C1D4  8D 85 C0 FD FF FF         LEA EAX,[EBP + 0xfffffdc0]
0073C1DA  50                        PUSH EAX
0073C1DB  E8 00 03 00 00            CALL 0x0073c4e0
0073C1E0  83 C4 10                  ADD ESP,0x10
0073C1E3  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073C1E6  83 E1 08                  AND ECX,0x8
0073C1E9  85 C9                     TEST ECX,ECX
0073C1EB  74 26                     JZ 0x0073c213
0073C1ED  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073C1F0  83 E2 04                  AND EDX,0x4
0073C1F3  85 D2                     TEST EDX,EDX
0073C1F5  75 1C                     JNZ 0x0073c213
0073C1F7  8D 85 D4 FD FF FF         LEA EAX,[EBP + 0xfffffdd4]
0073C1FD  50                        PUSH EAX
0073C1FE  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0073C201  51                        PUSH ECX
0073C202  8B 95 84 FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffd84]
0073C208  52                        PUSH EDX
0073C209  6A 30                     PUSH 0x30
0073C20B  E8 90 02 00 00            CALL 0x0073c4a0
0073C210  83 C4 10                  ADD ESP,0x10
LAB_0073c213:
0073C213  83 7D E4 00               CMP dword ptr [EBP + -0x1c],0x0
0073C217  0F 84 A4 00 00 00         JZ 0x0073c2c1
0073C21D  83 7D DC 00               CMP dword ptr [EBP + -0x24],0x0
0073C221  0F 8E 9A 00 00 00         JLE 0x0073c2c1
0073C227  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0073C22A  89 85 80 FD FF FF         MOV dword ptr [EBP + 0xfffffd80],EAX
0073C230  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
0073C233  89 8D 7C FD FF FF         MOV dword ptr [EBP + 0xfffffd7c],ECX
LAB_0073c239:
0073C239  8B 95 7C FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffd7c]
0073C23F  8B 85 7C FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffd7c]
0073C245  83 E8 01                  SUB EAX,0x1
0073C248  89 85 7C FD FF FF         MOV dword ptr [EBP + 0xfffffd7c],EAX
0073C24E  85 D2                     TEST EDX,EDX
0073C250  74 6D                     JZ 0x0073c2bf
0073C252  8B 8D 80 FD FF FF         MOV ECX,dword ptr [EBP + 0xfffffd80]
0073C258  66 8B 11                  MOV DX,word ptr [ECX]
0073C25B  66 89 95 5A FD FF FF      MOV word ptr [EBP + 0xfffffd5a],DX
0073C262  66 8B 85 5A FD FF FF      MOV AX,word ptr [EBP + 0xfffffd5a]
0073C269  50                        PUSH EAX
0073C26A  8D 8D 78 FD FF FF         LEA ECX,[EBP + 0xfffffd78]
0073C270  51                        PUSH ECX
0073C271  8B 95 80 FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffd80]
0073C277  83 C2 02                  ADD EDX,0x2
0073C27A  89 95 80 FD FF FF         MOV dword ptr [EBP + 0xfffffd80],EDX
0073C280  E8 8B 6C 00 00            CALL 0x00742f10
0073C285  83 C4 08                  ADD ESP,0x8
0073C288  89 85 74 FD FF FF         MOV dword ptr [EBP + 0xfffffd74],EAX
0073C28E  83 BD 74 FD FF FF 00      CMP dword ptr [EBP + 0xfffffd74],0x0
0073C295  7F 02                     JG 0x0073c299
0073C297  EB 26                     JMP 0x0073c2bf
LAB_0073c299:
0073C299  8D 85 D4 FD FF FF         LEA EAX,[EBP + 0xfffffdd4]
0073C29F  50                        PUSH EAX
0073C2A0  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0073C2A3  51                        PUSH ECX
0073C2A4  8B 95 74 FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffd74]
0073C2AA  52                        PUSH EDX
0073C2AB  8D 85 78 FD FF FF         LEA EAX,[EBP + 0xfffffd78]
0073C2B1  50                        PUSH EAX
0073C2B2  E8 29 02 00 00            CALL 0x0073c4e0
0073C2B7  83 C4 10                  ADD ESP,0x10
0073C2BA  E9 7A FF FF FF            JMP 0x0073c239
LAB_0073c2bf:
0073C2BF  EB 1B                     JMP 0x0073c2dc
LAB_0073c2c1:
0073C2C1  8D 8D D4 FD FF FF         LEA ECX,[EBP + 0xfffffdd4]
0073C2C7  51                        PUSH ECX
0073C2C8  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0073C2CB  52                        PUSH EDX
0073C2CC  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0073C2CF  50                        PUSH EAX
0073C2D0  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0073C2D3  51                        PUSH ECX
0073C2D4  E8 07 02 00 00            CALL 0x0073c4e0
0073C2D9  83 C4 10                  ADD ESP,0x10
LAB_0073c2dc:
0073C2DC  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073C2DF  83 E2 04                  AND EDX,0x4
0073C2E2  85 D2                     TEST EDX,EDX
0073C2E4  74 1C                     JZ 0x0073c302
0073C2E6  8D 85 D4 FD FF FF         LEA EAX,[EBP + 0xfffffdd4]
0073C2EC  50                        PUSH EAX
0073C2ED  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0073C2F0  51                        PUSH ECX
0073C2F1  8B 95 84 FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffd84]
0073C2F7  52                        PUSH EDX
0073C2F8  6A 20                     PUSH 0x20
0073C2FA  E8 A1 01 00 00            CALL 0x0073c4a0
0073C2FF  83 C4 10                  ADD ESP,0x10
LAB_0073c302:
0073C302  E9 0D F4 FF FF            JMP 0x0073b714
LAB_0073c307:
0073C307  8B 85 D4 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffdd4]
0073C30D  5F                        POP EDI
0073C30E  5E                        POP ESI
0073C30F  5B                        POP EBX
0073C310  8B E5                     MOV ESP,EBP
0073C312  5D                        POP EBP
0073C313  C3                        RET
