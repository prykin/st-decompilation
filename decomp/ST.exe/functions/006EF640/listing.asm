FUN_006ef640:
006EF640  55                        PUSH EBP
006EF641  8B EC                     MOV EBP,ESP
006EF643  83 EC 60                  SUB ESP,0x60
006EF646  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006EF64B  53                        PUSH EBX
006EF64C  56                        PUSH ESI
006EF64D  57                        PUSH EDI
006EF64E  33 FF                     XOR EDI,EDI
006EF650  8D 55 A4                  LEA EDX,[EBP + -0x5c]
006EF653  8D 4D A0                  LEA ECX,[EBP + -0x60]
006EF656  57                        PUSH EDI
006EF657  52                        PUSH EDX
006EF658  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
006EF65B  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
006EF65E  C6 45 FF 00               MOV byte ptr [EBP + -0x1],0x0
006EF662  C6 45 FE 00               MOV byte ptr [EBP + -0x2],0x0
006EF666  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
006EF669  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006EF66F  E8 7C E1 03 00            CALL 0x0072d7f0
006EF674  8B F0                     MOV ESI,EAX
006EF676  83 C4 08                  ADD ESP,0x8
006EF679  3B F7                     CMP ESI,EDI
006EF67B  0F 85 EB 02 00 00         JNZ 0x006ef96c
006EF681  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006EF684  3B DF                     CMP EBX,EDI
006EF686  75 17                     JNZ 0x006ef69f
006EF688  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006EF68D  68 8B 00 00 00            PUSH 0x8b
006EF692  68 88 EF 7E 00            PUSH 0x7eef88
006EF697  50                        PUSH EAX
006EF698  6A CC                     PUSH -0x34
006EF69A  E8 A1 67 FB FF            CALL 0x006a5e40
LAB_006ef69f:
006EF69F  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006EF6A2  3B F7                     CMP ESI,EDI
006EF6A4  75 05                     JNZ 0x006ef6ab
006EF6A6  8B F3                     MOV ESI,EBX
006EF6A8  89 75 10                  MOV dword ptr [EBP + 0x10],ESI
LAB_006ef6ab:
006EF6AB  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
006EF6AE  85 FF                     TEST EDI,EDI
006EF6B0  75 05                     JNZ 0x006ef6b7
006EF6B2  8B FE                     MOV EDI,ESI
006EF6B4  89 7D 14                  MOV dword ptr [EBP + 0x14],EDI
LAB_006ef6b7:
006EF6B7  8D 4D FF                  LEA ECX,[EBP + -0x1]
006EF6BA  8D 55 FE                  LEA EDX,[EBP + -0x2]
006EF6BD  51                        PUSH ECX
006EF6BE  52                        PUSH EDX
006EF6BF  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006EF6C2  8D 45 FC                  LEA EAX,[EBP + -0x4]
006EF6C5  6A 00                     PUSH 0x0
006EF6C7  8D 4D FA                  LEA ECX,[EBP + -0x6]
006EF6CA  50                        PUSH EAX
006EF6CB  51                        PUSH ECX
006EF6CC  52                        PUSH EDX
006EF6CD  53                        PUSH EBX
006EF6CE  E8 2D FC FF FF            CALL 0x006ef300
006EF6D3  8B D8                     MOV EBX,EAX
006EF6D5  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006EF6D8  83 C4 1C                  ADD ESP,0x1c
006EF6DB  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
006EF6DE  85 C0                     TEST EAX,EAX
006EF6E0  74 0A                     JZ 0x006ef6ec
006EF6E2  8B CB                     MOV ECX,EBX
006EF6E4  F7 D9                     NEG ECX
006EF6E6  51                        PUSH ECX
006EF6E7  FF D0                     CALL EAX
006EF6E9  83 C4 04                  ADD ESP,0x4
LAB_006ef6ec:
006EF6EC  0F BF 45 FA               MOVSX EAX,word ptr [EBP + -0x6]
006EF6F0  99                        CDQ
006EF6F1  2B C2                     SUB EAX,EDX
006EF6F3  8B C8                     MOV ECX,EAX
006EF6F5  0F BF 45 FC               MOVSX EAX,word ptr [EBP + -0x4]
006EF6F9  99                        CDQ
006EF6FA  2B C2                     SUB EAX,EDX
006EF6FC  D1 F9                     SAR ECX,0x1
006EF6FE  D1 F8                     SAR EAX,0x1
006EF700  0F AF C8                  IMUL ECX,EAX
006EF703  8D 14 49                  LEA EDX,[ECX + ECX*0x2]
006EF706  8D 04 D5 5D 04 00 00      LEA EAX,[EDX*0x8 + 0x45d]
006EF70D  50                        PUSH EAX
006EF70E  E8 FD B4 FB FF            CALL 0x006aac10
006EF713  66 8B 4D FA               MOV CX,word ptr [EBP + -0x6]
006EF717  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006EF71A  66 89 08                  MOV word ptr [EAX],CX
006EF71D  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006EF720  66 8B 45 FC               MOV AX,word ptr [EBP + -0x4]
006EF724  66 89 42 02               MOV word ptr [EDX + 0x2],AX
006EF728  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006EF72B  8A 55 FE                  MOV DL,byte ptr [EBP + -0x2]
006EF72E  88 51 04                  MOV byte ptr [ECX + 0x4],DL
006EF731  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006EF734  89 70 05                  MOV dword ptr [EAX + 0x5],ESI
006EF737  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006EF73A  89 79 09                  MOV dword ptr [ECX + 0x9],EDI
006EF73D  0F BF 45 FA               MOVSX EAX,word ptr [EBP + -0x6]
006EF741  99                        CDQ
006EF742  2B C2                     SUB EAX,EDX
006EF744  8B C8                     MOV ECX,EAX
006EF746  0F BF 45 FC               MOVSX EAX,word ptr [EBP + -0x4]
006EF74A  99                        CDQ
006EF74B  2B C2                     SUB EAX,EDX
006EF74D  D1 F9                     SAR ECX,0x1
006EF74F  D1 F8                     SAR EAX,0x1
006EF751  0F AF C8                  IMUL ECX,EAX
006EF754  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006EF757  8D 14 49                  LEA EDX,[ECX + ECX*0x2]
006EF75A  D1 E2                     SHL EDX,0x1
006EF75C  89 90 55 04 00 00         MOV dword ptr [EAX + 0x455],EDX
006EF762  33 F6                     XOR ESI,ESI
LAB_006ef764:
006EF764  6A 01                     PUSH 0x1
006EF766  6A 00                     PUSH 0x0
006EF768  56                        PUSH ESI
006EF769  6A 03                     PUSH 0x3
006EF76B  68 E4 EF 7E 00            PUSH 0x7eefe4
006EF770  E8 8B 34 00 00            CALL 0x006f2c00
006EF775  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006EF778  83 C4 0C                  ADD ESP,0xc
006EF77B  8B 51 05                  MOV EDX,dword ptr [ECX + 0x5]
006EF77E  50                        PUSH EAX
006EF77F  52                        PUSH EDX
006EF780  E8 AB B2 01 00            CALL 0x0070aa30
006EF785  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006EF788  83 C4 10                  ADD ESP,0x10
006EF78B  89 84 B1 0D 04 00 00      MOV dword ptr [ECX + ESI*0x4 + 0x40d],EAX
006EF792  46                        INC ESI
006EF793  83 FE 10                  CMP ESI,0x10
006EF796  7C CC                     JL 0x006ef764
006EF798  80 7D FF 05               CMP byte ptr [EBP + -0x1],0x5
006EF79C  73 18                     JNC 0x006ef7b6
006EF79E  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006EF7A4  68 9E 00 00 00            PUSH 0x9e
006EF7A9  68 88 EF 7E 00            PUSH 0x7eef88
006EF7AE  52                        PUSH EDX
006EF7AF  6A FB                     PUSH -0x5
006EF7B1  E8 8A 66 FB FF            CALL 0x006a5e40
LAB_006ef7b6:
006EF7B6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006EF7B9  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006EF7BC  6A 01                     PUSH 0x1
006EF7BE  6A 00                     PUSH 0x0
006EF7C0  50                        PUSH EAX
006EF7C1  6A 0F                     PUSH 0xf
006EF7C3  E8 18 25 00 00            CALL 0x006f1ce0
006EF7C8  85 DB                     TEST EBX,EBX
006EF7CA  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006EF7CD  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
006EF7D4  0F 8E 74 01 00 00         JLE 0x006ef94e
006EF7DA  33 F6                     XOR ESI,ESI
LAB_006ef7dc:
006EF7DC  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006EF7DF  6A 50                     PUSH 0x50
006EF7E1  8D 3C 0E                  LEA EDI,[ESI + ECX*0x1]
006EF7E4  E8 27 B4 FB FF            CALL 0x006aac10
006EF7E9  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006EF7EC  8B D8                     MOV EBX,EAX
006EF7EE  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
006EF7F1  0F BF 41 02               MOVSX EAX,word ptr [ECX + 0x2]
006EF7F5  99                        CDQ
006EF7F6  2B C2                     SUB EAX,EDX
006EF7F8  33 D2                     XOR EDX,EDX
006EF7FA  8A 17                     MOV DL,byte ptr [EDI]
006EF7FC  8B D8                     MOV EBX,EAX
006EF7FE  D1 FB                     SAR EBX,0x1
006EF800  0F AF DA                  IMUL EBX,EDX
006EF803  33 C0                     XOR EAX,EAX
006EF805  8A 47 02                  MOV AL,byte ptr [EDI + 0x2]
006EF808  D1 E8                     SHR EAX,0x1
006EF80A  03 D8                     ADD EBX,EAX
006EF80C  0F BF 01                  MOVSX EAX,word ptr [ECX]
006EF80F  99                        CDQ
006EF810  2B C2                     SUB EAX,EDX
006EF812  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006EF815  D1 F8                     SAR EAX,0x1
006EF817  0F AF D8                  IMUL EBX,EAX
006EF81A  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006EF81D  33 C9                     XOR ECX,ECX
006EF81F  8A 4F 01                  MOV CL,byte ptr [EDI + 0x1]
006EF822  D1 E9                     SHR ECX,0x1
006EF824  03 D9                     ADD EBX,ECX
006EF826  89 84 9A 59 04 00 00      MOV dword ptr [EDX + EBX*0x4 + 0x459],EAX
006EF82D  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
006EF830  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006EF833  0F BF 47 02               MOVSX EAX,word ptr [EDI + 0x2]
006EF837  99                        CDQ
006EF838  2B C2                     SUB EAX,EDX
006EF83A  33 D2                     XOR EDX,EDX
006EF83C  8A 14 0E                  MOV DL,byte ptr [ESI + ECX*0x1]
006EF83F  8B D8                     MOV EBX,EAX
006EF841  D1 FB                     SAR EBX,0x1
006EF843  0F AF DA                  IMUL EBX,EDX
006EF846  33 C0                     XOR EAX,EAX
006EF848  8A 44 0E 02               MOV AL,byte ptr [ESI + ECX*0x1 + 0x2]
006EF84C  D1 E8                     SHR EAX,0x1
006EF84E  03 D8                     ADD EBX,EAX
006EF850  0F BF 07                  MOVSX EAX,word ptr [EDI]
006EF853  99                        CDQ
006EF854  2B C2                     SUB EAX,EDX
006EF856  33 D2                     XOR EDX,EDX
006EF858  D1 F8                     SAR EAX,0x1
006EF85A  8A 54 0E 01               MOV DL,byte ptr [ESI + ECX*0x1 + 0x1]
006EF85E  0F AF D8                  IMUL EBX,EAX
006EF861  D1 EA                     SHR EDX,0x1
006EF863  03 DA                     ADD EBX,EDX
006EF865  8D 44 0E 03               LEA EAX,[ESI + ECX*0x1 + 0x3]
006EF869  8B BC 9F 59 04 00 00      MOV EDI,dword ptr [EDI + EBX*0x4 + 0x459]
006EF870  8B 10                     MOV EDX,dword ptr [EAX]
006EF872  8D 4F 4A                  LEA ECX,[EDI + 0x4a]
006EF875  89 57 4A                  MOV dword ptr [EDI + 0x4a],EDX
006EF878  66 8B 40 04               MOV AX,word ptr [EAX + 0x4]
006EF87C  66 89 41 04               MOV word ptr [ECX + 0x4],AX
006EF880  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006EF883  66 0F B6 54 0E 01         MOVZX DX,byte ptr [ESI + ECX*0x1 + 0x1]
006EF889  66 89 57 04               MOV word ptr [EDI + 0x4],DX
006EF88D  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006EF890  66 0F B6 4C 06 02         MOVZX CX,byte ptr [ESI + EAX*0x1 + 0x2]
006EF896  66 89 4F 06               MOV word ptr [EDI + 0x6],CX
006EF89A  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006EF89D  66 0F B6 04 16            MOVZX AX,byte ptr [ESI + EDX*0x1]
006EF8A2  66 89 47 08               MOV word ptr [EDI + 0x8],AX
006EF8A6  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006EF8A9  66 8B 44 0E 05            MOV AX,word ptr [ESI + ECX*0x1 + 0x5]
006EF8AE  66 85 C0                  TEST AX,AX
006EF8B1  74 19                     JZ 0x006ef8cc
006EF8B3  25 FF 7F 00 00            AND EAX,0x7fff
006EF8B8  50                        PUSH EAX
006EF8B9  6A 03                     PUSH 0x3
006EF8BB  68 B4 FA 7D 00            PUSH 0x7dfab4
006EF8C0  E8 3B 33 00 00            CALL 0x006f2c00
006EF8C5  83 C4 0C                  ADD ESP,0xc
006EF8C8  8B D8                     MOV EBX,EAX
006EF8CA  EB 02                     JMP 0x006ef8ce
LAB_006ef8cc:
006EF8CC  33 DB                     XOR EBX,EBX
LAB_006ef8ce:
006EF8CE  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006EF8D1  66 8B 44 16 03            MOV AX,word ptr [ESI + EDX*0x1 + 0x3]
006EF8D6  66 85 C0                  TEST AX,AX
006EF8D9  74 17                     JZ 0x006ef8f2
006EF8DB  25 FF 7F 00 00            AND EAX,0x7fff
006EF8E0  50                        PUSH EAX
006EF8E1  6A 03                     PUSH 0x3
006EF8E3  68 B4 FA 7D 00            PUSH 0x7dfab4
006EF8E8  E8 13 33 00 00            CALL 0x006f2c00
006EF8ED  83 C4 0C                  ADD ESP,0xc
006EF8F0  EB 02                     JMP 0x006ef8f4
LAB_006ef8f2:
006EF8F2  33 C0                     XOR EAX,EAX
LAB_006ef8f4:
006EF8F4  53                        PUSH EBX
006EF8F5  50                        PUSH EAX
006EF8F6  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006EF8F9  57                        PUSH EDI
006EF8FA  50                        PUSH EAX
006EF8FB  E8 40 FB FF FF            CALL 0x006ef440
006EF900  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006EF903  66 8B 54 0E 07            MOV DX,word ptr [ESI + ECX*0x1 + 0x7]
006EF908  81 E2 FF 7F 00 00         AND EDX,0x7fff
006EF90E  52                        PUSH EDX
006EF90F  6A 03                     PUSH 0x3
006EF911  68 C0 FA 7D 00            PUSH 0x7dfac0
006EF916  E8 E5 32 00 00            CALL 0x006f2c00
006EF91B  50                        PUSH EAX
006EF91C  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006EF91F  57                        PUSH EDI
006EF920  50                        PUSH EAX
006EF921  E8 0A FC FF FF            CALL 0x006ef530
006EF926  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006EF929  83 C4 28                  ADD ESP,0x28
006EF92C  85 C0                     TEST EAX,EAX
006EF92E  74 09                     JZ 0x006ef939
006EF930  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006EF933  51                        PUSH ECX
006EF934  FF D0                     CALL EAX
006EF936  83 C4 04                  ADD ESP,0x4
LAB_006ef939:
006EF939  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006EF93C  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
006EF93F  40                        INC EAX
006EF940  83 C6 09                  ADD ESI,0x9
006EF943  3B C1                     CMP EAX,ECX
006EF945  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006EF948  0F 8C 8E FE FF FF         JL 0x006ef7dc
LAB_006ef94e:
006EF94E  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006EF951  8D 55 F0                  LEA EDX,[EBP + -0x10]
006EF954  52                        PUSH EDX
006EF955  E8 86 27 00 00            CALL 0x006f20e0
006EF95A  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
006EF95D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006EF962  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006EF965  5F                        POP EDI
006EF966  5E                        POP ESI
006EF967  5B                        POP EBX
006EF968  8B E5                     MOV ESP,EBP
006EF96A  5D                        POP EBP
006EF96B  C3                        RET
LAB_006ef96c:
006EF96C  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
006EF96F  68 D8 EF 7E 00            PUSH 0x7eefd8
006EF974  68 CC 4C 7A 00            PUSH 0x7a4ccc
006EF979  56                        PUSH ESI
006EF97A  57                        PUSH EDI
006EF97B  68 BA 00 00 00            PUSH 0xba
006EF980  68 88 EF 7E 00            PUSH 0x7eef88
006EF985  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006EF98B  E8 40 DB FB FF            CALL 0x006ad4d0
006EF990  83 C4 18                  ADD ESP,0x18
006EF993  85 C0                     TEST EAX,EAX
006EF995  74 01                     JZ 0x006ef998
006EF997  CC                        INT3
LAB_006ef998:
006EF998  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006EF99B  8D 55 F0                  LEA EDX,[EBP + -0x10]
006EF99E  52                        PUSH EDX
006EF99F  E8 3C 27 00 00            CALL 0x006f20e0
006EF9A4  8D 45 F4                  LEA EAX,[EBP + -0xc]
006EF9A7  50                        PUSH EAX
006EF9A8  E8 C3 01 00 00            CALL 0x006efb70
006EF9AD  83 C4 04                  ADD ESP,0x4
006EF9B0  68 BF 00 00 00            PUSH 0xbf
006EF9B5  68 88 EF 7E 00            PUSH 0x7eef88
006EF9BA  57                        PUSH EDI
006EF9BB  56                        PUSH ESI
006EF9BC  E8 7F 64 FB FF            CALL 0x006a5e40
006EF9C1  5F                        POP EDI
006EF9C2  5E                        POP ESI
006EF9C3  33 C0                     XOR EAX,EAX
006EF9C5  5B                        POP EBX
006EF9C6  8B E5                     MOV ESP,EBP
006EF9C8  5D                        POP EBP
006EF9C9  C3                        RET
