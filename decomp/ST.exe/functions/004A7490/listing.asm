STGroupBoatC::ReMakePatrolPoints:
004A7490  55                        PUSH EBP
004A7491  8B EC                     MOV EBP,ESP
004A7493  83 EC 48                  SUB ESP,0x48
004A7496  53                        PUSH EBX
004A7497  56                        PUSH ESI
004A7498  8B F1                     MOV ESI,ECX
004A749A  57                        PUSH EDI
004A749B  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
004A749E  66 8B 46 27               MOV AX,word ptr [ESI + 0x27]
004A74A2  66 3D 0A 00               CMP AX,0xa
004A74A6  73 0C                     JNC 0x004a74b4
004A74A8  C7 86 42 02 00 00 02 00 00 00  MOV dword ptr [ESI + 0x242],0x2
004A74B2  EB 40                     JMP 0x004a74f4
LAB_004a74b4:
004A74B4  66 3D 28 00               CMP AX,0x28
004A74B8  73 0C                     JNC 0x004a74c6
004A74BA  C7 86 42 02 00 00 04 00 00 00  MOV dword ptr [ESI + 0x242],0x4
004A74C4  EB 2E                     JMP 0x004a74f4
LAB_004a74c6:
004A74C6  66 3D 64 00               CMP AX,0x64
004A74CA  73 0C                     JNC 0x004a74d8
004A74CC  C7 86 42 02 00 00 06 00 00 00  MOV dword ptr [ESI + 0x242],0x6
004A74D6  EB 1C                     JMP 0x004a74f4
LAB_004a74d8:
004A74D8  66 3D F0 00               CMP AX,0xf0
004A74DC  73 0C                     JNC 0x004a74ea
004A74DE  C7 86 42 02 00 00 08 00 00 00  MOV dword ptr [ESI + 0x242],0x8
004A74E8  EB 0A                     JMP 0x004a74f4
LAB_004a74ea:
004A74EA  C7 86 42 02 00 00 0A 00 00 00  MOV dword ptr [ESI + 0x242],0xa
LAB_004a74f4:
004A74F4  8B 86 26 02 00 00         MOV EAX,dword ptr [ESI + 0x226]
004A74FA  6A 01                     PUSH 0x1
004A74FC  6A 0E                     PUSH 0xe
004A74FE  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
004A7501  51                        PUSH ECX
004A7502  6A 00                     PUSH 0x0
004A7504  E8 87 6D 20 00            CALL 0x006ae290
004A7509  8B 8E 26 02 00 00         MOV ECX,dword ptr [ESI + 0x226]
004A750F  8B D8                     MOV EBX,EAX
004A7511  33 FF                     XOR EDI,EDI
004A7513  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
004A7516  85 C0                     TEST EAX,EAX
004A7518  7E 42                     JLE 0x004a755c
LAB_004a751a:
004A751A  8D 55 E8                  LEA EDX,[EBP + -0x18]
004A751D  52                        PUSH EDX
004A751E  8B D7                     MOV EDX,EDI
004A7520  E8 4B 57 20 00            CALL 0x006acc70
004A7525  66 8B 45 E8               MOV AX,word ptr [EBP + -0x18]
004A7529  66 8B 4D EA               MOV CX,word ptr [EBP + -0x16]
004A752D  66 8B 55 EC               MOV DX,word ptr [EBP + -0x14]
004A7531  66 89 45 D8               MOV word ptr [EBP + -0x28],AX
004A7535  33 C0                     XOR EAX,EAX
004A7537  66 89 4D DA               MOV word ptr [EBP + -0x26],CX
004A753B  89 45 E2                  MOV dword ptr [EBP + -0x1e],EAX
004A753E  89 45 DE                  MOV dword ptr [EBP + -0x22],EAX
004A7541  8D 45 D8                  LEA EAX,[EBP + -0x28]
004A7544  66 89 55 DC               MOV word ptr [EBP + -0x24],DX
004A7548  50                        PUSH EAX
004A7549  57                        PUSH EDI
004A754A  53                        PUSH EBX
004A754B  E8 F0 6B 20 00            CALL 0x006ae140
004A7550  8B 8E 26 02 00 00         MOV ECX,dword ptr [ESI + 0x226]
004A7556  47                        INC EDI
004A7557  3B 79 0C                  CMP EDI,dword ptr [ECX + 0xc]
004A755A  7C BE                     JL 0x004a751a
LAB_004a755c:
004A755C  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
004A755F  83 F8 01                  CMP EAX,0x1
004A7562  0F 86 BC 03 00 00         JBE 0x004a7924
004A7568  48                        DEC EAX
004A7569  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
004A7570  85 C0                     TEST EAX,EAX
004A7572  0F 8E AB 01 00 00         JLE 0x004a7723
004A7578  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
LAB_004a757f:
004A757F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A7582  8D 4D D8                  LEA ECX,[EBP + -0x28]
004A7585  51                        PUSH ECX
004A7586  8B CB                     MOV ECX,EBX
004A7588  E8 E3 56 20 00            CALL 0x006acc70
004A758D  8D 55 C8                  LEA EDX,[EBP + -0x38]
004A7590  8B CB                     MOV ECX,EBX
004A7592  52                        PUSH EDX
004A7593  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004A7596  E8 D5 56 20 00            CALL 0x006acc70
004A759B  0F BF 4D CC               MOVSX ECX,word ptr [EBP + -0x34]
004A759F  0F BF 55 CA               MOVSX EDX,word ptr [EBP + -0x36]
004A75A3  6A 00                     PUSH 0x0
004A75A5  6A 00                     PUSH 0x0
004A75A7  8D 45 F0                  LEA EAX,[EBP + -0x10]
004A75AA  6A 00                     PUSH 0x0
004A75AC  50                        PUSH EAX
004A75AD  6A 00                     PUSH 0x0
004A75AF  0F BF 45 C8               MOVSX EAX,word ptr [EBP + -0x38]
004A75B3  51                        PUSH ECX
004A75B4  52                        PUSH EDX
004A75B5  0F BF 4D DC               MOVSX ECX,word ptr [EBP + -0x24]
004A75B9  0F BF 55 DA               MOVSX EDX,word ptr [EBP + -0x26]
004A75BD  50                        PUSH EAX
004A75BE  51                        PUSH ECX
004A75BF  0F BF 45 D8               MOVSX EAX,word ptr [EBP + -0x28]
004A75C3  0F BF 0D 7C B2 7F 00      MOVSX ECX,word ptr [0x007fb27c]
004A75CA  52                        PUSH EDX
004A75CB  50                        PUSH EAX
004A75CC  0F BF 15 7A B2 7F 00      MOVSX EDX,word ptr [0x007fb27a]
004A75D3  0F BF 05 78 B2 7F 00      MOVSX EAX,word ptr [0x007fb278]
004A75DA  51                        PUSH ECX
004A75DB  8B 0D 80 B2 7F 00         MOV ECX,dword ptr [0x007fb280]
004A75E1  52                        PUSH EDX
004A75E2  50                        PUSH EAX
004A75E3  51                        PUSH ECX
004A75E4  E8 A7 1B 20 00            CALL 0x006a9190
004A75E9  8B C8                     MOV ECX,EAX
004A75EB  85 C9                     TEST ECX,ECX
004A75ED  74 1F                     JZ 0x004a760e
004A75EF  0F BF 51 06               MOVSX EDX,word ptr [ECX + 0x6]
004A75F3  B8 56 55 55 55            MOV EAX,0x55555556
004A75F8  51                        PUSH ECX
004A75F9  F7 EA                     IMUL EDX
004A75FB  8B C2                     MOV EAX,EDX
004A75FD  C1 E8 1F                  SHR EAX,0x1f
004A7600  03 D0                     ADD EDX,EAX
004A7602  8B FA                     MOV EDI,EDX
004A7604  E8 87 E8 1F 00            CALL 0x006a5e90
004A7609  E9 BA 00 00 00            JMP 0x004a76c8
LAB_004a760e:
004A760E  0F BF 0D 78 B2 7F 00      MOVSX ECX,word ptr [0x007fb278]
004A7615  0F BF 15 7A B2 7F 00      MOVSX EDX,word ptr [0x007fb27a]
004A761C  0F BF 05 7C B2 7F 00      MOVSX EAX,word ptr [0x007fb27c]
004A7623  0F AF CA                  IMUL ECX,EDX
004A7626  0F AF C8                  IMUL ECX,EAX
004A7629  8B 35 80 B2 7F 00         MOV ESI,dword ptr [0x007fb280]
004A762F  8B 3D 38 B2 7F 00         MOV EDI,dword ptr [0x007fb238]
004A7635  D1 E1                     SHL ECX,0x1
004A7637  8B D1                     MOV EDX,ECX
004A7639  C1 E9 02                  SHR ECX,0x2
004A763C  F3 A5                     MOVSD.REP ES:EDI,ESI
004A763E  8B CA                     MOV ECX,EDX
004A7640  83 E1 03                  AND ECX,0x3
004A7643  F3 A4                     MOVSB.REP ES:EDI,ESI
004A7645  0F BF 45 CC               MOVSX EAX,word ptr [EBP + -0x34]
004A7649  0F BF 4D CA               MOVSX ECX,word ptr [EBP + -0x36]
004A764D  0F BF 55 C8               MOVSX EDX,word ptr [EBP + -0x38]
004A7651  50                        PUSH EAX
004A7652  51                        PUSH ECX
004A7653  0F BF 45 DC               MOVSX EAX,word ptr [EBP + -0x24]
004A7657  0F BF 4D DA               MOVSX ECX,word ptr [EBP + -0x26]
004A765B  52                        PUSH EDX
004A765C  50                        PUSH EAX
004A765D  0F BF 55 D8               MOVSX EDX,word ptr [EBP + -0x28]
004A7661  0F BF 05 7C B2 7F 00      MOVSX EAX,word ptr [0x007fb27c]
004A7668  51                        PUSH ECX
004A7669  52                        PUSH EDX
004A766A  0F BF 0D 7A B2 7F 00      MOVSX ECX,word ptr [0x007fb27a]
004A7671  0F BF 15 78 B2 7F 00      MOVSX EDX,word ptr [0x007fb278]
004A7678  50                        PUSH EAX
004A7679  A1 38 B2 7F 00            MOV EAX,[0x007fb238]
004A767E  51                        PUSH ECX
004A767F  52                        PUSH EDX
004A7680  50                        PUSH EAX
004A7681  E8 0A 3A 20 00            CALL 0x006ab090
004A7686  0F BF 0D 7E B2 7F 00      MOVSX ECX,word ptr [0x007fb27e]
004A768D  0F BF 55 CC               MOVSX EDX,word ptr [EBP + -0x34]
004A7691  0F BF 05 78 B2 7F 00      MOVSX EAX,word ptr [0x007fb278]
004A7698  0F AF CA                  IMUL ECX,EDX
004A769B  0F BF 55 CA               MOVSX EDX,word ptr [EBP + -0x36]
004A769F  0F AF C2                  IMUL EAX,EDX
004A76A2  8B 15 38 B2 7F 00         MOV EDX,dword ptr [0x007fb238]
004A76A8  03 C8                     ADD ECX,EAX
004A76AA  0F BF 45 C8               MOVSX EAX,word ptr [EBP + -0x38]
004A76AE  03 C8                     ADD ECX,EAX
004A76B0  B8 56 55 55 55            MOV EAX,0x55555556
004A76B5  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
004A76B8  0F BF 0C 4A               MOVSX ECX,word ptr [EDX + ECX*0x2]
004A76BC  49                        DEC ECX
004A76BD  F7 E9                     IMUL ECX
004A76BF  8B C2                     MOV EAX,EDX
004A76C1  C1 E8 1F                  SHR EAX,0x1f
004A76C4  03 D0                     ADD EDX,EAX
004A76C6  8B FA                     MOV EDI,EDX
LAB_004a76c8:
004A76C8  3B BE 42 02 00 00         CMP EDI,dword ptr [ESI + 0x242]
004A76CE  7D 17                     JGE 0x004a76e7
004A76D0  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
004A76D3  57                        PUSH EDI
004A76D4  53                        PUSH EBX
004A76D5  E8 96 95 20 00            CALL 0x006b0c70
004A76DA  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A76DD  49                        DEC ECX
004A76DE  4F                        DEC EDI
004A76DF  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004A76E2  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
004A76E5  EB 22                     JMP 0x004a7709
LAB_004a76e7:
004A76E7  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A76EA  8D 4D D8                  LEA ECX,[EBP + -0x28]
004A76ED  51                        PUSH ECX
004A76EE  52                        PUSH EDX
004A76EF  53                        PUSH EBX
004A76F0  89 7D D2                  MOV dword ptr [EBP + -0x2e],EDI
004A76F3  89 7D DE                  MOV dword ptr [EBP + -0x22],EDI
004A76F6  E8 45 6A 20 00            CALL 0x006ae140
004A76FB  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004A76FE  8D 45 C8                  LEA EAX,[EBP + -0x38]
004A7701  50                        PUSH EAX
004A7702  51                        PUSH ECX
004A7703  53                        PUSH EBX
004A7704  E8 37 6A 20 00            CALL 0x006ae140
LAB_004a7709:
004A7709  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004A770C  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004A770F  8B 53 0C                  MOV EDX,dword ptr [EBX + 0xc]
004A7712  40                        INC EAX
004A7713  41                        INC ECX
004A7714  4A                        DEC EDX
004A7715  3B C2                     CMP EAX,EDX
004A7717  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004A771A  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
004A771D  0F 8C 5C FE FF FF         JL 0x004a757f
LAB_004a7723:
004A7723  8B 96 32 02 00 00         MOV EDX,dword ptr [ESI + 0x232]
004A7729  83 FA FF                  CMP EDX,-0x1
004A772C  0F 84 F2 01 00 00         JZ 0x004a7924
004A7732  8B 8E 2A 02 00 00         MOV ECX,dword ptr [ESI + 0x22a]
004A7738  8D 45 B8                  LEA EAX,[EBP + -0x48]
004A773B  50                        PUSH EAX
004A773C  E8 2F 55 20 00            CALL 0x006acc70
004A7741  8B 8E 26 02 00 00         MOV ECX,dword ptr [ESI + 0x226]
004A7747  33 FF                     XOR EDI,EDI
004A7749  C7 45 F8 FF FF FF FF      MOV dword ptr [EBP + -0x8],0xffffffff
004A7750  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
004A7753  85 C0                     TEST EAX,EAX
004A7755  7E 3F                     JLE 0x004a7796
LAB_004a7757:
004A7757  8D 55 E8                  LEA EDX,[EBP + -0x18]
004A775A  52                        PUSH EDX
004A775B  8B D7                     MOV EDX,EDI
004A775D  E8 0E 55 20 00            CALL 0x006acc70
004A7762  66 8B 45 E8               MOV AX,word ptr [EBP + -0x18]
004A7766  66 3B 45 B8               CMP AX,word ptr [EBP + -0x48]
004A776A  75 14                     JNZ 0x004a7780
004A776C  66 8B 4D EA               MOV CX,word ptr [EBP + -0x16]
004A7770  66 3B 4D BA               CMP CX,word ptr [EBP + -0x46]
004A7774  75 0A                     JNZ 0x004a7780
004A7776  66 8B 55 EC               MOV DX,word ptr [EBP + -0x14]
004A777A  66 3B 55 BC               CMP DX,word ptr [EBP + -0x44]
004A777E  74 0E                     JZ 0x004a778e
LAB_004a7780:
004A7780  8B 8E 26 02 00 00         MOV ECX,dword ptr [ESI + 0x226]
004A7786  47                        INC EDI
004A7787  3B 79 0C                  CMP EDI,dword ptr [ECX + 0xc]
004A778A  7C CB                     JL 0x004a7757
004A778C  EB 08                     JMP 0x004a7796
LAB_004a778e:
004A778E  83 FF FF                  CMP EDI,-0x1
004A7791  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
004A7794  75 25                     JNZ 0x004a77bb
LAB_004a7796:
004A7796  68 50 C4 7A 00            PUSH 0x7ac450
004A779B  68 CC 4C 7A 00            PUSH 0x7a4ccc
004A77A0  6A 00                     PUSH 0x0
004A77A2  6A 00                     PUSH 0x0
004A77A4  68 ED 15 00 00            PUSH 0x15ed
004A77A9  68 3C BE 7A 00            PUSH 0x7abe3c
004A77AE  E8 1D 5D 20 00            CALL 0x006ad4d0
004A77B3  83 C4 18                  ADD ESP,0x18
004A77B6  85 C0                     TEST EAX,EAX
004A77B8  74 01                     JZ 0x004a77bb
004A77BA  CC                        INT3
LAB_004a77bb:
004A77BB  8B 86 36 02 00 00         MOV EAX,dword ptr [ESI + 0x236]
004A77C1  C7 86 32 02 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x232],0xffffffff
004A77CB  83 F8 01                  CMP EAX,0x1
004A77CE  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004A77D1  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004A77D4  0F 85 98 00 00 00         JNZ 0x004a7872
004A77DA  8B 8E 26 02 00 00         MOV ECX,dword ptr [ESI + 0x226]
004A77E0  3B 41 0C                  CMP EAX,dword ptr [ECX + 0xc]
004A77E3  7D 6D                     JGE 0x004a7852
LAB_004a77e5:
004A77E5  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A77E8  8D 45 E8                  LEA EAX,[EBP + -0x18]
004A77EB  50                        PUSH EAX
004A77EC  E8 7F 54 20 00            CALL 0x006acc70
004A77F1  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
004A77F4  33 FF                     XOR EDI,EDI
004A77F6  85 C0                     TEST EAX,EAX
004A77F8  7E 3B                     JLE 0x004a7835
LAB_004a77fa:
004A77FA  8D 4D D8                  LEA ECX,[EBP + -0x28]
004A77FD  8B D7                     MOV EDX,EDI
004A77FF  51                        PUSH ECX
004A7800  8B CB                     MOV ECX,EBX
004A7802  E8 69 54 20 00            CALL 0x006acc70
004A7807  66 8B 55 E8               MOV DX,word ptr [EBP + -0x18]
004A780B  66 3B 55 D8               CMP DX,word ptr [EBP + -0x28]
004A780F  75 14                     JNZ 0x004a7825
004A7811  66 8B 45 EA               MOV AX,word ptr [EBP + -0x16]
004A7815  66 3B 45 DA               CMP AX,word ptr [EBP + -0x26]
004A7819  75 0A                     JNZ 0x004a7825
004A781B  66 8B 4D EC               MOV CX,word ptr [EBP + -0x14]
004A781F  66 3B 4D DC               CMP CX,word ptr [EBP + -0x24]
004A7823  74 0A                     JZ 0x004a782f
LAB_004a7825:
004A7825  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
004A7828  47                        INC EDI
004A7829  3B F8                     CMP EDI,EAX
004A782B  7C CD                     JL 0x004a77fa
004A782D  EB 06                     JMP 0x004a7835
LAB_004a782f:
004A782F  89 BE 32 02 00 00         MOV dword ptr [ESI + 0x232],EDI
LAB_004a7835:
004A7835  83 BE 32 02 00 00 FF      CMP dword ptr [ESI + 0x232],-0x1
004A783C  75 14                     JNZ 0x004a7852
004A783E  8B 8E 26 02 00 00         MOV ECX,dword ptr [ESI + 0x226]
004A7844  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004A7847  40                        INC EAX
004A7848  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
004A784B  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004A784E  3B C2                     CMP EAX,EDX
004A7850  7C 93                     JL 0x004a77e5
LAB_004a7852:
004A7852  8B 8E 32 02 00 00         MOV ECX,dword ptr [ESI + 0x232]
004A7858  83 C8 FF                  OR EAX,0xffffffff
004A785B  3B C8                     CMP ECX,EAX
004A785D  0F 85 CB 00 00 00         JNZ 0x004a792e
004A7863  8B 53 0C                  MOV EDX,dword ptr [EBX + 0xc]
004A7866  4A                        DEC EDX
004A7867  89 96 32 02 00 00         MOV dword ptr [ESI + 0x232],EDX
004A786D  E9 83 00 00 00            JMP 0x004a78f5
LAB_004a7872:
004A7872  85 C0                     TEST EAX,EAX
004A7874  7C 68                     JL 0x004a78de
LAB_004a7876:
004A7876  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A7879  8B 8E 26 02 00 00         MOV ECX,dword ptr [ESI + 0x226]
004A787F  8D 45 E8                  LEA EAX,[EBP + -0x18]
004A7882  50                        PUSH EAX
004A7883  E8 E8 53 20 00            CALL 0x006acc70
004A7888  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
004A788B  33 FF                     XOR EDI,EDI
004A788D  85 C0                     TEST EAX,EAX
004A788F  7E 3B                     JLE 0x004a78cc
LAB_004a7891:
004A7891  8D 4D D8                  LEA ECX,[EBP + -0x28]
004A7894  8B D7                     MOV EDX,EDI
004A7896  51                        PUSH ECX
004A7897  8B CB                     MOV ECX,EBX
004A7899  E8 D2 53 20 00            CALL 0x006acc70
004A789E  66 8B 55 E8               MOV DX,word ptr [EBP + -0x18]
004A78A2  66 3B 55 D8               CMP DX,word ptr [EBP + -0x28]
004A78A6  75 14                     JNZ 0x004a78bc
004A78A8  66 8B 45 EA               MOV AX,word ptr [EBP + -0x16]
004A78AC  66 3B 45 DA               CMP AX,word ptr [EBP + -0x26]
004A78B0  75 0A                     JNZ 0x004a78bc
004A78B2  66 8B 4D EC               MOV CX,word ptr [EBP + -0x14]
004A78B6  66 3B 4D DC               CMP CX,word ptr [EBP + -0x24]
004A78BA  74 0A                     JZ 0x004a78c6
LAB_004a78bc:
004A78BC  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
004A78BF  47                        INC EDI
004A78C0  3B F8                     CMP EDI,EAX
004A78C2  7C CD                     JL 0x004a7891
004A78C4  EB 06                     JMP 0x004a78cc
LAB_004a78c6:
004A78C6  89 BE 32 02 00 00         MOV dword ptr [ESI + 0x232],EDI
LAB_004a78cc:
004A78CC  83 BE 32 02 00 00 FF      CMP dword ptr [ESI + 0x232],-0x1
004A78D3  75 09                     JNZ 0x004a78de
004A78D5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004A78D8  48                        DEC EAX
004A78D9  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004A78DC  79 98                     JNS 0x004a7876
LAB_004a78de:
004A78DE  8B 8E 32 02 00 00         MOV ECX,dword ptr [ESI + 0x232]
004A78E4  83 C8 FF                  OR EAX,0xffffffff
004A78E7  3B C8                     CMP ECX,EAX
004A78E9  75 43                     JNZ 0x004a792e
004A78EB  C7 86 32 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x232],0x0
LAB_004a78f5:
004A78F5  39 86 32 02 00 00         CMP dword ptr [ESI + 0x232],EAX
004A78FB  75 31                     JNZ 0x004a792e
004A78FD  68 18 C4 7A 00            PUSH 0x7ac418
004A7902  68 CC 4C 7A 00            PUSH 0x7a4ccc
004A7907  6A 00                     PUSH 0x0
004A7909  6A 00                     PUSH 0x0
004A790B  68 0E 16 00 00            PUSH 0x160e
004A7910  68 3C BE 7A 00            PUSH 0x7abe3c
004A7915  E8 B6 5B 20 00            CALL 0x006ad4d0
004A791A  83 C4 18                  ADD ESP,0x18
004A791D  85 C0                     TEST EAX,EAX
004A791F  74 0D                     JZ 0x004a792e
004A7921  CC                        INT3
LAB_004a7924:
004A7924  C7 86 32 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x232],0x0
LAB_004a792e:
004A792E  8B 86 2A 02 00 00         MOV EAX,dword ptr [ESI + 0x22a]
004A7934  85 C0                     TEST EAX,EAX
004A7936  74 10                     JZ 0x004a7948
004A7938  50                        PUSH EAX
004A7939  E8 D2 67 20 00            CALL 0x006ae110
004A793E  C7 86 2A 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x22a],0x0
LAB_004a7948:
004A7948  8B 53 0C                  MOV EDX,dword ptr [EBX + 0xc]
004A794B  6A 01                     PUSH 0x1
004A794D  6A 0E                     PUSH 0xe
004A794F  52                        PUSH EDX
004A7950  6A 00                     PUSH 0x0
004A7952  E8 39 69 20 00            CALL 0x006ae290
004A7957  89 86 2A 02 00 00         MOV dword ptr [ESI + 0x22a],EAX
004A795D  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
004A7960  33 FF                     XOR EDI,EDI
004A7962  85 C0                     TEST EAX,EAX
004A7964  7E 26                     JLE 0x004a798c
LAB_004a7966:
004A7966  8D 45 D8                  LEA EAX,[EBP + -0x28]
004A7969  8B D7                     MOV EDX,EDI
004A796B  50                        PUSH EAX
004A796C  8B CB                     MOV ECX,EBX
004A796E  E8 FD 52 20 00            CALL 0x006acc70
004A7973  8B 96 2A 02 00 00         MOV EDX,dword ptr [ESI + 0x22a]
004A7979  8D 4D D8                  LEA ECX,[EBP + -0x28]
004A797C  51                        PUSH ECX
004A797D  57                        PUSH EDI
004A797E  52                        PUSH EDX
004A797F  E8 BC 67 20 00            CALL 0x006ae140
004A7984  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
004A7987  47                        INC EDI
004A7988  3B F8                     CMP EDI,EAX
004A798A  7C DA                     JL 0x004a7966
LAB_004a798c:
004A798C  53                        PUSH EBX
004A798D  E8 7E 67 20 00            CALL 0x006ae110
004A7992  5F                        POP EDI
004A7993  5E                        POP ESI
004A7994  5B                        POP EBX
004A7995  8B E5                     MOV ESP,EBP
004A7997  5D                        POP EBP
004A7998  C3                        RET
