FUN_005b7540:
005B7540  55                        PUSH EBP
005B7541  8B EC                     MOV EBP,ESP
005B7543  81 EC B8 00 00 00         SUB ESP,0xb8
005B7549  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005B754E  53                        PUSH EBX
005B754F  56                        PUSH ESI
005B7550  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
005B7553  33 F6                     XOR ESI,ESI
005B7555  57                        PUSH EDI
005B7556  8D 95 4C FF FF FF         LEA EDX,[EBP + 0xffffff4c]
005B755C  8D 8D 48 FF FF FF         LEA ECX,[EBP + 0xffffff48]
005B7562  56                        PUSH ESI
005B7563  52                        PUSH EDX
005B7564  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
005B756B  89 85 48 FF FF FF         MOV dword ptr [EBP + 0xffffff48],EAX
005B7571  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B7577  E8 74 62 17 00            CALL 0x0072d7f0
005B757C  8B F8                     MOV EDI,EAX
005B757E  83 C4 08                  ADD ESP,0x8
005B7581  3B FE                     CMP EDI,ESI
005B7583  0F 85 25 07 00 00         JNZ 0x005b7cae
005B7589  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
005B758C  33 C0                     XOR EAX,EAX
005B758E  8A 43 65                  MOV AL,byte ptr [EBX + 0x65]
005B7591  48                        DEC EAX
005B7592  0F 84 72 06 00 00         JZ 0x005b7c0a
005B7598  83 E8 02                  SUB EAX,0x2
005B759B  0F 84 6D 03 00 00         JZ 0x005b790e
005B75A1  48                        DEC EAX
005B75A2  0F 85 F4 06 00 00         JNZ 0x005b7c9c
005B75A8  39 B3 D0 1C 00 00         CMP dword ptr [EBX + 0x1cd0],ESI
005B75AE  74 41                     JZ 0x005b75f1
005B75B0  8B 83 FF 1C 00 00         MOV EAX,dword ptr [EBX + 0x1cff]
005B75B6  3B C6                     CMP EAX,ESI
005B75B8  7E 37                     JLE 0x005b75f1
005B75BA  48                        DEC EAX
005B75BB  89 83 FF 1C 00 00         MOV dword ptr [EBX + 0x1cff],EAX
005B75C1  8B 83 FB 1C 00 00         MOV EAX,dword ptr [EBX + 0x1cfb]
005B75C7  83 F8 FF                  CMP EAX,-0x1
005B75CA  74 22                     JZ 0x005b75ee
005B75CC  8B 8B 17 1D 00 00         MOV ECX,dword ptr [EBX + 0x1d17]
005B75D2  8B 93 13 1D 00 00         MOV EDX,dword ptr [EBX + 0x1d13]
005B75D8  51                        PUSH ECX
005B75D9  8B 8B FF 1C 00 00         MOV ECX,dword ptr [EBX + 0x1cff]
005B75DF  52                        PUSH EDX
005B75E0  8B 93 3F 1D 00 00         MOV EDX,dword ptr [EBX + 0x1d3f]
005B75E6  51                        PUSH ECX
005B75E7  50                        PUSH EAX
005B75E8  52                        PUSH EDX
005B75E9  E8 42 C1 0F 00            CALL 0x006b3730
LAB_005b75ee:
005B75EE  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
LAB_005b75f1:
005B75F1  8A 83 9A 00 00 00         MOV AL,byte ptr [EBX + 0x9a]
005B75F7  84 C0                     TEST AL,AL
005B75F9  76 72                     JBE 0x005b766d
005B75FB  B8 64 E3 FF FF            MOV EAX,0xffffe364
005B7600  8D B3 9C 1C 00 00         LEA ESI,[EBX + 0x1c9c]
005B7606  2B C3                     SUB EAX,EBX
005B7608  8D BB FF 00 00 00         LEA EDI,[EBX + 0xff]
005B760E  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_005b7611:
005B7611  80 3E 00                  CMP byte ptr [ESI],0x0
005B7614  74 3F                     JZ 0x005b7655
005B7616  8B 43 61                  MOV EAX,dword ptr [EBX + 0x61]
005B7619  8B 57 28                  MOV EDX,dword ptr [EDI + 0x28]
005B761C  8B 4F 24                  MOV ECX,dword ptr [EDI + 0x24]
005B761F  2B C2                     SUB EAX,EDX
005B7621  3B C1                     CMP EAX,ECX
005B7623  72 29                     JC 0x005b764e
005B7625  8B 47 EC                  MOV EAX,dword ptr [EDI + -0x14]
005B7628  85 C0                     TEST EAX,EAX
005B762A  0F 8E A4 00 00 00         JLE 0x005b76d4
005B7630  48                        DEC EAX
005B7631  89 47 EC                  MOV dword ptr [EDI + -0x14],EAX
005B7634  8B 4F E8                  MOV ECX,dword ptr [EDI + -0x18]
005B7637  83 F9 FF                  CMP ECX,-0x1
005B763A  74 12                     JZ 0x005b764e
005B763C  8B 57 04                  MOV EDX,dword ptr [EDI + 0x4]
005B763F  52                        PUSH EDX
005B7640  8B 17                     MOV EDX,dword ptr [EDI]
005B7642  52                        PUSH EDX
005B7643  50                        PUSH EAX
005B7644  8B 47 2C                  MOV EAX,dword ptr [EDI + 0x2c]
005B7647  51                        PUSH ECX
005B7648  50                        PUSH EAX
005B7649  E8 E2 C0 0F 00            CALL 0x006b3730
LAB_005b764e:
005B764E  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
LAB_005b7655:
005B7655  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
005B7658  81 C7 FB 01 00 00         ADD EDI,0x1fb
005B765E  46                        INC ESI
005B765F  33 D2                     XOR EDX,EDX
005B7661  8A 93 9A 00 00 00         MOV DL,byte ptr [EBX + 0x9a]
005B7667  03 CE                     ADD ECX,ESI
005B7669  3B CA                     CMP ECX,EDX
005B766B  7C A4                     JL 0x005b7611
LAB_005b766d:
005B766D  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005B7670  85 C0                     TEST EAX,EAX
005B7672  0F 84 24 06 00 00         JZ 0x005b7c9c
005B7678  8A 83 A9 1C 00 00         MOV AL,byte ptr [EBX + 0x1ca9]
005B767E  C6 43 65 02               MOV byte ptr [EBX + 0x65],0x2
005B7682  84 C0                     TEST AL,AL
005B7684  0F 84 F8 01 00 00         JZ 0x005b7882
005B768A  8A 83 AA 1C 00 00         MOV AL,byte ptr [EBX + 0x1caa]
005B7690  84 C0                     TEST AL,AL
005B7692  74 59                     JZ 0x005b76ed
005B7694  8D 8B 9C 1C 00 00         LEA ECX,[EBX + 0x1c9c]
005B769A  B8 01 01 01 01            MOV EAX,0x1010101
005B769F  6A FF                     PUSH -0x1
005B76A1  6A 00                     PUSH 0x0
005B76A3  89 01                     MOV dword ptr [ECX],EAX
005B76A5  6A 05                     PUSH 0x5
005B76A7  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
005B76AA  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
005B76AD  88 41 0C                  MOV byte ptr [ECX + 0xc],AL
005B76B0  8B CB                     MOV ECX,EBX
005B76B2  C6 43 65 03               MOV byte ptr [EBX + 0x65],0x3
005B76B6  E8 36 D5 E4 FF            CALL 0x00404bf1
005B76BB  8B 85 48 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff48]
005B76C1  C6 83 AA 1C 00 00 00      MOV byte ptr [EBX + 0x1caa],0x0
005B76C8  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005B76CD  5F                        POP EDI
005B76CE  5E                        POP ESI
005B76CF  5B                        POP EBX
005B76D0  8B E5                     MOV ESP,EBP
005B76D2  5D                        POP EBP
005B76D3  C3                        RET
LAB_005b76d4:
005B76D4  8A 83 AA 1C 00 00         MOV AL,byte ptr [EBX + 0x1caa]
005B76DA  84 C0                     TEST AL,AL
005B76DC  75 07                     JNZ 0x005b76e5
005B76DE  C7 47 BD 00 00 00 00      MOV dword ptr [EDI + -0x43],0x0
LAB_005b76e5:
005B76E5  C6 06 00                  MOV byte ptr [ESI],0x0
005B76E8  E9 68 FF FF FF            JMP 0x005b7655
LAB_005b76ed:
005B76ED  8A 8B 5A 1A 00 00         MOV CL,byte ptr [EBX + 0x1a5a]
005B76F3  80 F9 FF                  CMP CL,0xff
005B76F6  74 34                     JZ 0x005b772c
005B76F8  81 E1 FF 00 00 00         AND ECX,0xff
005B76FE  8D 04 CD 00 00 00 00      LEA EAX,[ECX*0x8 + 0x0]
005B7705  2B C1                     SUB EAX,ECX
005B7707  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
005B770A  8D 04 D1                  LEA EAX,[ECX + EDX*0x8]
005B770D  8D 0C 43                  LEA ECX,[EBX + EAX*0x2]
005B7710  03 C1                     ADD EAX,ECX
005B7712  8B 88 D1 00 00 00         MOV ECX,dword ptr [EAX + 0xd1]
005B7718  85 C9                     TEST ECX,ECX
005B771A  74 10                     JZ 0x005b772c
005B771C  05 C1 00 00 00            ADD EAX,0xc1
005B7721  B9 20 76 80 00            MOV ECX,0x807620
005B7726  50                        PUSH EAX
005B7727  E8 24 C4 12 00            CALL 0x006e3b50
LAB_005b772c:
005B772C  8B 93 AB 1C 00 00         MOV EDX,dword ptr [EBX + 0x1cab]
005B7732  85 D2                     TEST EDX,EDX
005B7734  74 29                     JZ 0x005b775f
005B7736  B9 08 00 00 00            MOV ECX,0x8
005B773B  33 C0                     XOR EAX,EAX
005B773D  8D 7D 8C                  LEA EDI,[EBP + -0x74]
005B7740  F3 AB                     STOSD.REP ES:EDI
005B7742  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
005B7745  89 55 94                  MOV dword ptr [EBP + -0x6c],EDX
005B7748  C7 45 98 02 00 00 00      MOV dword ptr [EBP + -0x68],0x2
005B774F  C7 45 9C 3F 69 00 00      MOV dword ptr [EBP + -0x64],0x693f
005B7756  8B 11                     MOV EDX,dword ptr [ECX]
005B7758  8D 45 8C                  LEA EAX,[EBP + -0x74]
005B775B  50                        PUSH EAX
005B775C  FF 52 18                  CALL dword ptr [EDX + 0x18]
LAB_005b775f:
005B775F  8A 83 5F 1A 00 00         MOV AL,byte ptr [EBX + 0x1a5f]
005B7765  84 C0                     TEST AL,AL
005B7767  0F 84 FC 00 00 00         JZ 0x005b7869
005B776D  B9 09 00 00 00            MOV ECX,0x9
005B7772  8D B3 60 1A 00 00         LEA ESI,[EBX + 0x1a60]
005B7778  8D BB D0 1C 00 00         LEA EDI,[EBX + 0x1cd0]
005B777E  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
005B7785  F3 A5                     MOVSD.REP ES:EDI,ESI
005B7787  66 A5                     MOVSW ES:EDI,ESI
005B7789  A4                        MOVSB ES:EDI,ESI
005B778A  8A 83 9A 00 00 00         MOV AL,byte ptr [EBX + 0x9a]
005B7790  84 C0                     TEST AL,AL
005B7792  0F 86 A2 00 00 00         JBE 0x005b783a
005B7798  8D 93 BC 00 00 00         LEA EDX,[EBX + 0xbc]
005B779E  8D 8B 87 1A 00 00         LEA ECX,[EBX + 0x1a87]
005B77A4  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
005B77A7  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_005b77aa:
005B77AA  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
005B77AD  B9 09 00 00 00            MOV ECX,0x9
005B77B2  8B FA                     MOV EDI,EDX
005B77B4  F3 A5                     MOVSD.REP ES:EDI,ESI
005B77B6  66 A5                     MOVSW ES:EDI,ESI
005B77B8  A4                        MOVSB ES:EDI,ESI
005B77B9  8B 02                     MOV EAX,dword ptr [EDX]
005B77BB  85 C0                     TEST EAX,EAX
005B77BD  74 52                     JZ 0x005b7811
005B77BF  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005B77C2  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005B77C8  6A FF                     PUSH -0x1
005B77CA  6A 07                     PUSH 0x7
005B77CC  6A FF                     PUSH -0x1
005B77CE  8B BA B8 00 00 00         MOV EDI,dword ptr [EDX + 0xb8]
005B77D4  6A FF                     PUSH -0x1
005B77D6  6A 01                     PUSH 0x1
005B77D8  6A FF                     PUSH -0x1
005B77DA  6A FE                     PUSH -0x2
005B77DC  6A 1E                     PUSH 0x1e
005B77DE  8D B2 B8 00 00 00         LEA ESI,[EDX + 0xb8]
005B77E4  6A 7D                     PUSH 0x7d
005B77E6  51                        PUSH ECX
005B77E7  50                        PUSH EAX
005B77E8  E8 53 89 0F 00            CALL 0x006b0140
005B77ED  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005B77F3  50                        PUSH EAX
005B77F4  8B 4A 30                  MOV ECX,dword ptr [EDX + 0x30]
005B77F7  E8 84 BC 15 00            CALL 0x00713480
005B77FC  50                        PUSH EAX
005B77FD  8B CE                     MOV ECX,ESI
005B77FF  FF 57 08                  CALL dword ptr [EDI + 0x8]
005B7802  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005B7805  8B D0                     MOV EDX,EAX
005B7807  C7 80 C0 00 00 00 00 00 00 00  MOV dword ptr [EAX + 0xc0],0x0
LAB_005b7811:
005B7811  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
005B7814  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
005B7817  33 C9                     XOR ECX,ECX
005B7819  46                        INC ESI
005B781A  8A 8B 9A 00 00 00         MOV CL,byte ptr [EBX + 0x9a]
005B7820  83 C7 27                  ADD EDI,0x27
005B7823  81 C2 FB 01 00 00         ADD EDX,0x1fb
005B7829  3B F1                     CMP ESI,ECX
005B782B  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
005B782E  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
005B7831  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
005B7834  0F 8C 70 FF FF FF         JL 0x005b77aa
LAB_005b783a:
005B783A  8A 83 5F 1A 00 00         MOV AL,byte ptr [EBX + 0x1a5f]
005B7840  3C 03                     CMP AL,0x3
005B7842  74 04                     JZ 0x005b7848
005B7844  3C 01                     CMP AL,0x1
005B7846  75 1A                     JNZ 0x005b7862
LAB_005b7848:
005B7848  8D 83 9C 1C 00 00         LEA EAX,[EBX + 0x1c9c]
005B784E  BA 01 01 01 01            MOV EDX,0x1010101
005B7853  89 10                     MOV dword ptr [EAX],EDX
005B7855  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
005B7858  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
005B785B  88 50 0C                  MOV byte ptr [EAX + 0xc],DL
005B785E  C6 43 65 03               MOV byte ptr [EBX + 0x65],0x3
LAB_005b7862:
005B7862  C6 83 5F 1A 00 00 00      MOV byte ptr [EBX + 0x1a5f],0x0
LAB_005b7869:
005B7869  8B 85 48 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff48]
005B786F  C6 83 A9 1C 00 00 00      MOV byte ptr [EBX + 0x1ca9],0x0
005B7876  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005B787B  5F                        POP EDI
005B787C  5E                        POP ESI
005B787D  5B                        POP EBX
005B787E  8B E5                     MOV ESP,EBP
005B7880  5D                        POP EBP
005B7881  C3                        RET
LAB_005b7882:
005B7882  8B 93 AB 1C 00 00         MOV EDX,dword ptr [EBX + 0x1cab]
005B7888  85 D2                     TEST EDX,EDX
005B788A  74 29                     JZ 0x005b78b5
005B788C  B9 08 00 00 00            MOV ECX,0x8
005B7891  33 C0                     XOR EAX,EAX
005B7893  8D 7D CC                  LEA EDI,[EBP + -0x34]
005B7896  F3 AB                     STOSD.REP ES:EDI
005B7898  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
005B789B  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
005B789E  C7 45 D8 02 00 00 00      MOV dword ptr [EBP + -0x28],0x2
005B78A5  C7 45 DC 3F 69 00 00      MOV dword ptr [EBP + -0x24],0x693f
005B78AC  8B 11                     MOV EDX,dword ptr [ECX]
005B78AE  8D 45 CC                  LEA EAX,[EBP + -0x34]
005B78B1  50                        PUSH EAX
005B78B2  FF 52 18                  CALL dword ptr [EDX + 0x18]
LAB_005b78b5:
005B78B5  8A 8B 5A 1A 00 00         MOV CL,byte ptr [EBX + 0x1a5a]
005B78BB  80 F9 FF                  CMP CL,0xff
005B78BE  0F 84 D8 03 00 00         JZ 0x005b7c9c
005B78C4  81 E1 FF 00 00 00         AND ECX,0xff
005B78CA  8D 04 CD 00 00 00 00      LEA EAX,[ECX*0x8 + 0x0]
005B78D1  2B C1                     SUB EAX,ECX
005B78D3  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
005B78D6  8D 04 D1                  LEA EAX,[ECX + EDX*0x8]
005B78D9  8D 0C 43                  LEA ECX,[EBX + EAX*0x2]
005B78DC  03 C1                     ADD EAX,ECX
005B78DE  8B 88 D1 00 00 00         MOV ECX,dword ptr [EAX + 0xd1]
005B78E4  85 C9                     TEST ECX,ECX
005B78E6  0F 84 B0 03 00 00         JZ 0x005b7c9c
005B78EC  05 C1 00 00 00            ADD EAX,0xc1
005B78F1  B9 20 76 80 00            MOV ECX,0x807620
005B78F6  50                        PUSH EAX
005B78F7  E8 54 C2 12 00            CALL 0x006e3b50
005B78FC  8B 85 48 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff48]
005B7902  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005B7907  5F                        POP EDI
005B7908  5E                        POP ESI
005B7909  5B                        POP EBX
005B790A  8B E5                     MOV ESP,EBP
005B790C  5D                        POP EBP
005B790D  C3                        RET
LAB_005b790e:
005B790E  39 B3 D0 1C 00 00         CMP dword ptr [EBX + 0x1cd0],ESI
005B7914  0F 84 D3 00 00 00         JZ 0x005b79ed
005B791A  8B 93 03 1D 00 00         MOV EDX,dword ptr [EBX + 0x1d03]
005B7920  8B 83 FF 1C 00 00         MOV EAX,dword ptr [EBX + 0x1cff]
005B7926  4A                        DEC EDX
005B7927  3B C2                     CMP EAX,EDX
005B7929  7D 3C                     JGE 0x005b7967
005B792B  40                        INC EAX
005B792C  89 83 FF 1C 00 00         MOV dword ptr [EBX + 0x1cff],EAX
005B7932  8B 83 FB 1C 00 00         MOV EAX,dword ptr [EBX + 0x1cfb]
005B7938  83 F8 FF                  CMP EAX,-0x1
005B793B  74 22                     JZ 0x005b795f
005B793D  8B 8B 17 1D 00 00         MOV ECX,dword ptr [EBX + 0x1d17]
005B7943  8B 93 13 1D 00 00         MOV EDX,dword ptr [EBX + 0x1d13]
005B7949  51                        PUSH ECX
005B794A  8B 8B FF 1C 00 00         MOV ECX,dword ptr [EBX + 0x1cff]
005B7950  52                        PUSH EDX
005B7951  8B 93 3F 1D 00 00         MOV EDX,dword ptr [EBX + 0x1d3f]
005B7957  51                        PUSH ECX
005B7958  50                        PUSH EAX
005B7959  52                        PUSH EDX
005B795A  E8 D1 BD 0F 00            CALL 0x006b3730
LAB_005b795f:
005B795F  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
005B7962  E9 86 00 00 00            JMP 0x005b79ed
LAB_005b7967:
005B7967  8B 8B 94 1D 00 00         MOV ECX,dword ptr [EBX + 0x1d94]
005B796D  8B 83 90 1D 00 00         MOV EAX,dword ptr [EBX + 0x1d90]
005B7973  83 E9 03                  SUB ECX,0x3
005B7976  3B C1                     CMP EAX,ECX
005B7978  7D 73                     JGE 0x005b79ed
005B797A  3B C6                     CMP EAX,ESI
005B797C  75 28                     JNZ 0x005b79a6
005B797E  8B 83 8C 1D 00 00         MOV EAX,dword ptr [EBX + 0x1d8c]
005B7984  83 F8 FF                  CMP EAX,-0x1
005B7987  74 1D                     JZ 0x005b79a6
005B7989  8B 93 A8 1D 00 00         MOV EDX,dword ptr [EBX + 0x1da8]
005B798F  8B 8B A4 1D 00 00         MOV ECX,dword ptr [EBX + 0x1da4]
005B7995  52                        PUSH EDX
005B7996  8B 93 D0 1D 00 00         MOV EDX,dword ptr [EBX + 0x1dd0]
005B799C  51                        PUSH ECX
005B799D  6A FE                     PUSH -0x2
005B799F  50                        PUSH EAX
005B79A0  52                        PUSH EDX
005B79A1  E8 2A BB 0F 00            CALL 0x006b34d0
LAB_005b79a6:
005B79A6  8B 93 90 1D 00 00         MOV EDX,dword ptr [EBX + 0x1d90]
005B79AC  42                        INC EDX
005B79AD  89 93 90 1D 00 00         MOV dword ptr [EBX + 0x1d90],EDX
005B79B3  8B 83 8C 1D 00 00         MOV EAX,dword ptr [EBX + 0x1d8c]
005B79B9  83 F8 FF                  CMP EAX,-0x1
005B79BC  74 22                     JZ 0x005b79e0
005B79BE  8B 8B A8 1D 00 00         MOV ECX,dword ptr [EBX + 0x1da8]
005B79C4  8B 93 A4 1D 00 00         MOV EDX,dword ptr [EBX + 0x1da4]
005B79CA  51                        PUSH ECX
005B79CB  8B 8B 90 1D 00 00         MOV ECX,dword ptr [EBX + 0x1d90]
005B79D1  52                        PUSH EDX
005B79D2  8B 93 D0 1D 00 00         MOV EDX,dword ptr [EBX + 0x1dd0]
005B79D8  51                        PUSH ECX
005B79D9  50                        PUSH EAX
005B79DA  52                        PUSH EDX
005B79DB  E8 50 BD 0F 00            CALL 0x006b3730
LAB_005b79e0:
005B79E0  6A FF                     PUSH -0x1
005B79E2  6A 01                     PUSH 0x1
005B79E4  6A 1E                     PUSH 0x1e
005B79E6  8B CB                     MOV ECX,EBX
005B79E8  E8 04 D2 E4 FF            CALL 0x00404bf1
LAB_005b79ed:
005B79ED  8A 83 9A 00 00 00         MOV AL,byte ptr [EBX + 0x9a]
005B79F3  33 F6                     XOR ESI,ESI
005B79F5  84 C0                     TEST AL,AL
005B79F7  0F 86 F3 00 00 00         JBE 0x005b7af0
005B79FD  8D BB FF 00 00 00         LEA EDI,[EBX + 0xff]
LAB_005b7a03:
005B7A03  8A 84 33 9C 1C 00 00      MOV AL,byte ptr [EBX + ESI*0x1 + 0x1c9c]
005B7A0A  84 C0                     TEST AL,AL
005B7A0C  0F 84 C7 00 00 00         JZ 0x005b7ad9
005B7A12  8B 47 BD                  MOV EAX,dword ptr [EDI + -0x43]
005B7A15  85 C0                     TEST EAX,EAX
005B7A17  0F 84 BC 00 00 00         JZ 0x005b7ad9
005B7A1D  8B 43 61                  MOV EAX,dword ptr [EBX + 0x61]
005B7A20  8B 57 28                  MOV EDX,dword ptr [EDI + 0x28]
005B7A23  8B 4F 24                  MOV ECX,dword ptr [EDI + 0x24]
005B7A26  2B C2                     SUB EAX,EDX
005B7A28  3B C1                     CMP EAX,ECX
005B7A2A  0F 82 A2 00 00 00         JC 0x005b7ad2
005B7A30  8B 4F F0                  MOV ECX,dword ptr [EDI + -0x10]
005B7A33  8B 47 EC                  MOV EAX,dword ptr [EDI + -0x14]
005B7A36  49                        DEC ECX
005B7A37  3B C1                     CMP EAX,ECX
005B7A39  7D 24                     JGE 0x005b7a5f
005B7A3B  40                        INC EAX
005B7A3C  89 47 EC                  MOV dword ptr [EDI + -0x14],EAX
005B7A3F  8B 4F E8                  MOV ECX,dword ptr [EDI + -0x18]
005B7A42  83 F9 FF                  CMP ECX,-0x1
005B7A45  0F 84 87 00 00 00         JZ 0x005b7ad2
005B7A4B  8B 57 04                  MOV EDX,dword ptr [EDI + 0x4]
005B7A4E  52                        PUSH EDX
005B7A4F  8B 17                     MOV EDX,dword ptr [EDI]
005B7A51  52                        PUSH EDX
005B7A52  50                        PUSH EAX
005B7A53  8B 47 2C                  MOV EAX,dword ptr [EDI + 0x2c]
005B7A56  51                        PUSH ECX
005B7A57  50                        PUSH EAX
005B7A58  E8 D3 BC 0F 00            CALL 0x006b3730
005B7A5D  EB 73                     JMP 0x005b7ad2
LAB_005b7a5f:
005B7A5F  8B 8F 81 00 00 00         MOV ECX,dword ptr [EDI + 0x81]
005B7A65  8B 47 7D                  MOV EAX,dword ptr [EDI + 0x7d]
005B7A68  83 E9 03                  SUB ECX,0x3
005B7A6B  3B C1                     CMP EAX,ECX
005B7A6D  7D 6A                     JGE 0x005b7ad9
005B7A6F  85 C0                     TEST EAX,EAX
005B7A71  75 25                     JNZ 0x005b7a98
005B7A73  8B 47 79                  MOV EAX,dword ptr [EDI + 0x79]
005B7A76  83 F8 FF                  CMP EAX,-0x1
005B7A79  74 1D                     JZ 0x005b7a98
005B7A7B  8B 97 95 00 00 00         MOV EDX,dword ptr [EDI + 0x95]
005B7A81  8B 8F 91 00 00 00         MOV ECX,dword ptr [EDI + 0x91]
005B7A87  52                        PUSH EDX
005B7A88  8B 97 BD 00 00 00         MOV EDX,dword ptr [EDI + 0xbd]
005B7A8E  51                        PUSH ECX
005B7A8F  6A FE                     PUSH -0x2
005B7A91  50                        PUSH EAX
005B7A92  52                        PUSH EDX
005B7A93  E8 38 BA 0F 00            CALL 0x006b34d0
LAB_005b7a98:
005B7A98  8B 47 7D                  MOV EAX,dword ptr [EDI + 0x7d]
005B7A9B  40                        INC EAX
005B7A9C  89 47 7D                  MOV dword ptr [EDI + 0x7d],EAX
005B7A9F  8B C8                     MOV ECX,EAX
005B7AA1  8B 47 79                  MOV EAX,dword ptr [EDI + 0x79]
005B7AA4  83 F8 FF                  CMP EAX,-0x1
005B7AA7  74 1C                     JZ 0x005b7ac5
005B7AA9  8B 97 95 00 00 00         MOV EDX,dword ptr [EDI + 0x95]
005B7AAF  52                        PUSH EDX
005B7AB0  8B 97 91 00 00 00         MOV EDX,dword ptr [EDI + 0x91]
005B7AB6  52                        PUSH EDX
005B7AB7  51                        PUSH ECX
005B7AB8  50                        PUSH EAX
005B7AB9  8B 87 BD 00 00 00         MOV EAX,dword ptr [EDI + 0xbd]
005B7ABF  50                        PUSH EAX
005B7AC0  E8 6B BC 0F 00            CALL 0x006b3730
LAB_005b7ac5:
005B7AC5  6A FF                     PUSH -0x1
005B7AC7  6A 01                     PUSH 0x1
005B7AC9  6A 1E                     PUSH 0x1e
005B7ACB  8B CB                     MOV ECX,EBX
005B7ACD  E8 1F D1 E4 FF            CALL 0x00404bf1
LAB_005b7ad2:
005B7AD2  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
LAB_005b7ad9:
005B7AD9  33 C9                     XOR ECX,ECX
005B7ADB  46                        INC ESI
005B7ADC  8A 8B 9A 00 00 00         MOV CL,byte ptr [EBX + 0x9a]
005B7AE2  81 C7 FB 01 00 00         ADD EDI,0x1fb
005B7AE8  3B F1                     CMP ESI,ECX
005B7AEA  0F 8C 13 FF FF FF         JL 0x005b7a03
LAB_005b7af0:
005B7AF0  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005B7AF3  85 C0                     TEST EAX,EAX
005B7AF5  0F 84 A1 01 00 00         JZ 0x005b7c9c
005B7AFB  8A 83 9A 00 00 00         MOV AL,byte ptr [EBX + 0x9a]
005B7B01  C6 43 65 01               MOV byte ptr [EBX + 0x65],0x1
005B7B05  84 C0                     TEST AL,AL
005B7B07  0F 86 A4 00 00 00         JBE 0x005b7bb1
005B7B0D  8D 53 66                  LEA EDX,[EBX + 0x66]
005B7B10  8D 83 82 1C 00 00         LEA EAX,[EBX + 0x1c82]
005B7B16  BE FF 68 00 00            MOV ESI,0x68ff
005B7B1B  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
005B7B1E  8D BB A7 00 00 00         LEA EDI,[EBX + 0xa7]
005B7B24  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_005b7b27:
005B7B27  8B 47 15                  MOV EAX,dword ptr [EDI + 0x15]
005B7B2A  85 C0                     TEST EAX,EAX
005B7B2C  74 54                     JZ 0x005b7b82
005B7B2E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005B7B31  83 39 00                  CMP dword ptr [ECX],0x0
005B7B34  75 4C                     JNZ 0x005b7b82
005B7B36  8A 83 A9 1C 00 00         MOV AL,byte ptr [EBX + 0x1ca9]
005B7B3C  84 C0                     TEST AL,AL
005B7B3E  74 07                     JZ 0x005b7b47
005B7B40  B8 01 00 00 00            MOV EAX,0x1
005B7B45  EB 0B                     JMP 0x005b7b52
LAB_005b7b47:
005B7B47  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
005B7B4A  33 C0                     XOR EAX,EAX
005B7B4C  66 39 02                  CMP word ptr [EDX],AX
005B7B4F  0F 9D C0                  SETGE AL
LAB_005b7b52:
005B7B52  8B 17                     MOV EDX,dword ptr [EDI]
005B7B54  8D 8E 80 00 00 00         LEA ECX,[ESI + 0x80]
005B7B5A  51                        PUSH ECX
005B7B5B  8B 4F FC                  MOV ECX,dword ptr [EDI + -0x4]
005B7B5E  56                        PUSH ESI
005B7B5F  52                        PUSH EDX
005B7B60  8B 57 5C                  MOV EDX,dword ptr [EDI + 0x5c]
005B7B63  51                        PUSH ECX
005B7B64  8B 4F F8                  MOV ECX,dword ptr [EDI + -0x8]
005B7B67  03 D1                     ADD EDX,ECX
005B7B69  8B 4F 58                  MOV ECX,dword ptr [EDI + 0x58]
005B7B6C  52                        PUSH EDX
005B7B6D  8B 57 F4                  MOV EDX,dword ptr [EDI + -0xc]
005B7B70  03 CA                     ADD ECX,EDX
005B7B72  51                        PUSH ECX
005B7B73  50                        PUSH EAX
005B7B74  6A 01                     PUSH 0x1
005B7B76  8B CB                     MOV ECX,EBX
005B7B78  E8 9E BA E4 FF            CALL 0x0040361b
005B7B7D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005B7B80  89 02                     MOV dword ptr [EDX],EAX
LAB_005b7b82:
005B7B82  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005B7B85  33 C9                     XOR ECX,ECX
005B7B87  83 C0 02                  ADD EAX,0x2
005B7B8A  8A 8B 9A 00 00 00         MOV CL,byte ptr [EBX + 0x9a]
005B7B90  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005B7B93  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005B7B96  46                        INC ESI
005B7B97  83 C0 04                  ADD EAX,0x4
005B7B9A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005B7B9D  81 C7 FB 01 00 00         ADD EDI,0x1fb
005B7BA3  8D 86 01 97 FF FF         LEA EAX,[ESI + 0xffff9701]
005B7BA9  3B C1                     CMP EAX,ECX
005B7BAB  0F 8C 76 FF FF FF         JL 0x005b7b27
LAB_005b7bb1:
005B7BB1  8A 83 A9 1C 00 00         MOV AL,byte ptr [EBX + 0x1ca9]
005B7BB7  84 C0                     TEST AL,AL
005B7BB9  0F 85 DD 00 00 00         JNZ 0x005b7c9c
005B7BBF  8B 93 AB 1C 00 00         MOV EDX,dword ptr [EBX + 0x1cab]
005B7BC5  85 D2                     TEST EDX,EDX
005B7BC7  0F 84 CF 00 00 00         JZ 0x005b7c9c
005B7BCD  8B 5B 0C                  MOV EBX,dword ptr [EBX + 0xc]
005B7BD0  B9 08 00 00 00            MOV ECX,0x8
005B7BD5  33 C0                     XOR EAX,EAX
005B7BD7  8D 7D AC                  LEA EDI,[EBP + -0x54]
005B7BDA  F3 AB                     STOSD.REP ES:EDI
005B7BDC  89 55 B4                  MOV dword ptr [EBP + -0x4c],EDX
005B7BDF  C7 45 B8 02 00 00 00      MOV dword ptr [EBP + -0x48],0x2
005B7BE6  C7 45 BC 3F 69 00 00      MOV dword ptr [EBP + -0x44],0x693f
005B7BED  8B 13                     MOV EDX,dword ptr [EBX]
005B7BEF  8D 45 AC                  LEA EAX,[EBP + -0x54]
005B7BF2  8B CB                     MOV ECX,EBX
005B7BF4  50                        PUSH EAX
005B7BF5  FF 52 18                  CALL dword ptr [EDX + 0x18]
005B7BF8  8B 85 48 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff48]
005B7BFE  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005B7C03  5F                        POP EDI
005B7C04  5E                        POP ESI
005B7C05  5B                        POP EBX
005B7C06  8B E5                     MOV ESP,EBP
005B7C08  5D                        POP EBP
005B7C09  C3                        RET
LAB_005b7c0a:
005B7C0A  39 B3 D0 1C 00 00         CMP dword ptr [EBX + 0x1cd0],ESI
005B7C10  0F 84 86 00 00 00         JZ 0x005b7c9c
005B7C16  8B 8B 94 1D 00 00         MOV ECX,dword ptr [EBX + 0x1d94]
005B7C1C  8B 83 90 1D 00 00         MOV EAX,dword ptr [EBX + 0x1d90]
005B7C22  83 E9 03                  SUB ECX,0x3
005B7C25  3B C1                     CMP EAX,ECX
005B7C27  7D 73                     JGE 0x005b7c9c
005B7C29  3B C6                     CMP EAX,ESI
005B7C2B  75 28                     JNZ 0x005b7c55
005B7C2D  8B 83 8C 1D 00 00         MOV EAX,dword ptr [EBX + 0x1d8c]
005B7C33  83 F8 FF                  CMP EAX,-0x1
005B7C36  74 1D                     JZ 0x005b7c55
005B7C38  8B 93 A8 1D 00 00         MOV EDX,dword ptr [EBX + 0x1da8]
005B7C3E  8B 8B A4 1D 00 00         MOV ECX,dword ptr [EBX + 0x1da4]
005B7C44  52                        PUSH EDX
005B7C45  8B 93 D0 1D 00 00         MOV EDX,dword ptr [EBX + 0x1dd0]
005B7C4B  51                        PUSH ECX
005B7C4C  6A FE                     PUSH -0x2
005B7C4E  50                        PUSH EAX
005B7C4F  52                        PUSH EDX
005B7C50  E8 7B B8 0F 00            CALL 0x006b34d0
LAB_005b7c55:
005B7C55  8B 93 90 1D 00 00         MOV EDX,dword ptr [EBX + 0x1d90]
005B7C5B  42                        INC EDX
005B7C5C  89 93 90 1D 00 00         MOV dword ptr [EBX + 0x1d90],EDX
005B7C62  8B 83 8C 1D 00 00         MOV EAX,dword ptr [EBX + 0x1d8c]
005B7C68  83 F8 FF                  CMP EAX,-0x1
005B7C6B  74 22                     JZ 0x005b7c8f
005B7C6D  8B 8B A8 1D 00 00         MOV ECX,dword ptr [EBX + 0x1da8]
005B7C73  8B 93 A4 1D 00 00         MOV EDX,dword ptr [EBX + 0x1da4]
005B7C79  51                        PUSH ECX
005B7C7A  8B 8B 90 1D 00 00         MOV ECX,dword ptr [EBX + 0x1d90]
005B7C80  52                        PUSH EDX
005B7C81  8B 93 D0 1D 00 00         MOV EDX,dword ptr [EBX + 0x1dd0]
005B7C87  51                        PUSH ECX
005B7C88  50                        PUSH EAX
005B7C89  52                        PUSH EDX
005B7C8A  E8 A1 BA 0F 00            CALL 0x006b3730
LAB_005b7c8f:
005B7C8F  6A FF                     PUSH -0x1
005B7C91  6A 01                     PUSH 0x1
005B7C93  6A 1E                     PUSH 0x1e
005B7C95  8B CB                     MOV ECX,EBX
005B7C97  E8 55 CF E4 FF            CALL 0x00404bf1
LAB_005b7c9c:
005B7C9C  8B 85 48 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff48]
005B7CA2  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005B7CA7  5F                        POP EDI
005B7CA8  5E                        POP ESI
005B7CA9  5B                        POP EBX
005B7CAA  8B E5                     MOV ESP,EBP
005B7CAC  5D                        POP EBP
005B7CAD  C3                        RET
LAB_005b7cae:
005B7CAE  8B 8D 48 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff48]
005B7CB4  68 78 CC 7C 00            PUSH 0x7ccc78
005B7CB9  68 CC 4C 7A 00            PUSH 0x7a4ccc
005B7CBE  57                        PUSH EDI
005B7CBF  56                        PUSH ESI
005B7CC0  68 E4 00 00 00            PUSH 0xe4
005B7CC5  68 74 CB 7C 00            PUSH 0x7ccb74
005B7CCA  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B7CD0  E8 FB 57 0F 00            CALL 0x006ad4d0
005B7CD5  83 C4 18                  ADD ESP,0x18
005B7CD8  85 C0                     TEST EAX,EAX
005B7CDA  74 01                     JZ 0x005b7cdd
005B7CDC  CC                        INT3
LAB_005b7cdd:
005B7CDD  68 E4 00 00 00            PUSH 0xe4
005B7CE2  68 74 CB 7C 00            PUSH 0x7ccb74
005B7CE7  56                        PUSH ESI
005B7CE8  57                        PUSH EDI
005B7CE9  E8 52 E1 0E 00            CALL 0x006a5e40
005B7CEE  5F                        POP EDI
005B7CEF  5E                        POP ESI
005B7CF0  5B                        POP EBX
005B7CF1  8B E5                     MOV ESP,EBP
005B7CF3  5D                        POP EBP
005B7CF4  C3                        RET
