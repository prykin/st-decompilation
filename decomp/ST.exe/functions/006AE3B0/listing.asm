FUN_006ae3b0:
006AE3B0  55                        PUSH EBP
006AE3B1  8B EC                     MOV EBP,ESP
006AE3B3  83 EC 44                  SUB ESP,0x44
006AE3B6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006AE3B9  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
006AE3BC  0F AF 45 10               IMUL EAX,dword ptr [EBP + 0x10]
006AE3C0  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
006AE3C3  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
006AE3C6  53                        PUSH EBX
006AE3C7  8B 5D 2C                  MOV EBX,dword ptr [EBP + 0x2c]
006AE3CA  48                        DEC EAX
006AE3CB  56                        PUSH ESI
006AE3CC  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
006AE3CF  57                        PUSH EDI
006AE3D0  8B 7D 28                  MOV EDI,dword ptr [EBP + 0x28]
006AE3D3  8D 54 C1 04               LEA EDX,[ECX + EAX*0x8 + 0x4]
006AE3D7  66 89 34 C1               MOV word ptr [ECX + EAX*0x8],SI
006AE3DB  66 89 7C C1 02            MOV word ptr [ECX + EAX*0x8 + 0x2],DI
006AE3E0  89 55 24                  MOV dword ptr [EBP + 0x24],EDX
006AE3E3  66 89 1A                  MOV word ptr [EDX],BX
006AE3E6  33 D2                     XOR EDX,EDX
006AE3E8  53                        PUSH EBX
006AE3E9  66 89 54 C1 06            MOV word ptr [ECX + EAX*0x8 + 0x6],DX
006AE3EE  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006AE3F1  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
006AE3F4  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
006AE3F7  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
006AE3FA  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006AE3FD  57                        PUSH EDI
006AE3FE  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006AE401  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006AE404  56                        PUSH ESI
006AE405  51                        PUSH ECX
006AE406  52                        PUSH EDX
006AE407  50                        PUSH EAX
006AE408  89 75 D4                  MOV dword ptr [EBP + -0x2c],ESI
006AE40B  89 7D 28                  MOV dword ptr [EBP + 0x28],EDI
006AE40E  89 5D 2C                  MOV dword ptr [EBP + 0x2c],EBX
006AE411  E8 4A 7F FF FF            CALL 0x006a6360
006AE416  50                        PUSH EAX
006AE417  E8 04 7F FF FF            CALL 0x006a6320
006AE41C  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
006AE41F  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
006AE422  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006AE425  3B F0                     CMP ESI,EAX
006AE427  75 28                     JNZ 0x006ae451
006AE429  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006AE42C  3B FE                     CMP EDI,ESI
006AE42E  75 21                     JNZ 0x006ae451
006AE430  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006AE433  3B D9                     CMP EBX,ECX
006AE435  75 1A                     JNZ 0x006ae451
006AE437  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006AE43A  8B 5D 30                  MOV EBX,dword ptr [EBP + 0x30]
006AE43D  4A                        DEC EDX
006AE43E  66 89 04 D3               MOV word ptr [EBX + EDX*0x8],AX
006AE442  66 89 74 D3 02            MOV word ptr [EBX + EDX*0x8 + 0x2],SI
006AE447  66 89 4C D3 04            MOV word ptr [EBX + EDX*0x8 + 0x4],CX
006AE44C  E9 45 03 00 00            JMP 0x006ae796
LAB_006ae451:
006AE451  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006AE454  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
LAB_006ae457:
006AE457  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006AE45A  8B 5D C4                  MOV EBX,dword ptr [EBP + -0x3c]
006AE45D  8B 75 28                  MOV ESI,dword ptr [EBP + 0x28]
006AE460  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
006AE463  0F AF 75 0C               IMUL ESI,dword ptr [EBP + 0xc]
006AE467  0F AF D3                  IMUL EDX,EBX
006AE46A  8B F9                     MOV EDI,ECX
006AE46C  C7 45 CC 30 75 00 00      MOV dword ptr [EBP + -0x34],0x7530
006AE473  03 FA                     ADD EDI,EDX
006AE475  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006AE478  03 F7                     ADD ESI,EDI
006AE47A  8D 34 72                  LEA ESI,[EDX + ESI*0x2]
006AE47D  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006AE480  52                        PUSH EDX
006AE481  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006AE484  52                        PUSH EDX
006AE485  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006AE488  51                        PUSH ECX
006AE489  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006AE48C  51                        PUSH ECX
006AE48D  52                        PUSH EDX
006AE48E  50                        PUSH EAX
006AE48F  E8 CC 7E FF FF            CALL 0x006a6360
006AE494  50                        PUSH EAX
006AE495  E8 86 7E FF FF            CALL 0x006a6320
006AE49A  BA 76 D5 7E 00            MOV EDX,0x7ed576
006AE49F  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
006AE4A2  C7 45 24 00 00 00 00      MOV dword ptr [EBP + 0x24],0x0
006AE4A9  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
006AE4AC  C7 45 F0 40 D6 7E 00      MOV dword ptr [EBP + -0x10],0x7ed640
LAB_006ae4b3:
006AE4B3  0F BF 7A FA               MOVSX EDI,word ptr [EDX + -0x6]
006AE4B7  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
006AE4BA  03 C7                     ADD EAX,EDI
006AE4BC  85 C0                     TEST EAX,EAX
006AE4BE  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
006AE4C1  0F 8C 2D 02 00 00         JL 0x006ae6f4
006AE4C7  3B 45 0C                  CMP EAX,dword ptr [EBP + 0xc]
006AE4CA  0F 8D 24 02 00 00         JGE 0x006ae6f4
006AE4D0  0F BF 4A FC               MOVSX ECX,word ptr [EDX + -0x4]
006AE4D4  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006AE4D7  03 C1                     ADD EAX,ECX
006AE4D9  85 C0                     TEST EAX,EAX
006AE4DB  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006AE4DE  0F 8C 10 02 00 00         JL 0x006ae6f4
006AE4E4  3B 45 10                  CMP EAX,dword ptr [EBP + 0x10]
006AE4E7  0F 8D 07 02 00 00         JGE 0x006ae6f4
006AE4ED  0F BF 52 FE               MOVSX EDX,word ptr [EDX + -0x2]
006AE4F1  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006AE4F4  03 C2                     ADD EAX,EDX
006AE4F6  85 C0                     TEST EAX,EAX
006AE4F8  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006AE4FB  0F 8C F3 01 00 00         JL 0x006ae6f4
006AE501  3B 45 14                  CMP EAX,dword ptr [EBP + 0x14]
006AE504  0F 8D EA 01 00 00         JGE 0x006ae6f4
006AE50A  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006AE50D  66 8B 00                  MOV AX,word ptr [EAX]
006AE510  A8 01                     TEST AL,0x1
006AE512  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
006AE515  0F 84 11 01 00 00         JZ 0x006ae62c
006AE51B  66 8B 14 7E               MOV DX,word ptr [ESI + EDI*0x2]
006AE51F  81 E2 00 C0 00 00         AND EDX,0xc000
006AE525  81 FA 00 C0 00 00         CMP EDX,0xc000
006AE52B  0F 84 C3 01 00 00         JZ 0x006ae6f4
006AE531  0F AF 4D 0C               IMUL ECX,dword ptr [EBP + 0xc]
006AE535  66 8B 14 4E               MOV DX,word ptr [ESI + ECX*0x2]
006AE539  81 E2 00 C0 00 00         AND EDX,0xc000
006AE53F  81 FA 00 C0 00 00         CMP EDX,0xc000
006AE545  0F 84 A9 01 00 00         JZ 0x006ae6f4
006AE54B  8B D0                     MOV EDX,EAX
006AE54D  81 E2 00 40 00 00         AND EDX,0x4000
006AE553  66 85 D2                  TEST DX,DX
006AE556  74 67                     JZ 0x006ae5bf
006AE558  8D 04 1B                  LEA EAX,[EBX + EBX*0x1]
006AE55B  8B D6                     MOV EDX,ESI
006AE55D  2B D0                     SUB EDX,EAX
006AE55F  66 8B 02                  MOV AX,word ptr [EDX]
006AE562  25 00 C0 00 00            AND EAX,0xc000
006AE567  3D 00 C0 00 00            CMP EAX,0xc000
006AE56C  0F 84 82 01 00 00         JZ 0x006ae6f4
006AE572  8B D7                     MOV EDX,EDI
006AE574  2B D3                     SUB EDX,EBX
006AE576  66 8B 04 56               MOV AX,word ptr [ESI + EDX*0x2]
006AE57A  25 00 C0 00 00            AND EAX,0xc000
006AE57F  3D 00 C0 00 00            CMP EAX,0xc000
006AE584  0F 84 6A 01 00 00         JZ 0x006ae6f4
006AE58A  8B D1                     MOV EDX,ECX
006AE58C  2B D3                     SUB EDX,EBX
006AE58E  66 8B 04 56               MOV AX,word ptr [ESI + EDX*0x2]
006AE592  25 00 C0 00 00            AND EAX,0xc000
006AE597  3D 00 C0 00 00            CMP EAX,0xc000
006AE59C  0F 84 52 01 00 00         JZ 0x006ae6f4
006AE5A2  03 CF                     ADD ECX,EDI
006AE5A4  66 8B 0C 4E               MOV CX,word ptr [ESI + ECX*0x2]
006AE5A8  81 E1 00 C0 00 00         AND ECX,0xc000
006AE5AE  81 F9 00 C0 00 00         CMP ECX,0xc000
006AE5B4  0F 85 D1 00 00 00         JNZ 0x006ae68b
006AE5BA  E9 35 01 00 00            JMP 0x006ae6f4
LAB_006ae5bf:
006AE5BF  25 00 20 00 00            AND EAX,0x2000
006AE5C4  66 85 C0                  TEST AX,AX
006AE5C7  0F 84 BE 00 00 00         JZ 0x006ae68b
006AE5CD  66 8B 14 5E               MOV DX,word ptr [ESI + EBX*0x2]
006AE5D1  81 E2 00 C0 00 00         AND EDX,0xc000
006AE5D7  81 FA 00 C0 00 00         CMP EDX,0xc000
006AE5DD  0F 84 11 01 00 00         JZ 0x006ae6f4
006AE5E3  8D 04 1F                  LEA EAX,[EDI + EBX*0x1]
006AE5E6  66 8B 14 46               MOV DX,word ptr [ESI + EAX*0x2]
006AE5EA  81 E2 00 C0 00 00         AND EDX,0xc000
006AE5F0  81 FA 00 C0 00 00         CMP EDX,0xc000
006AE5F6  0F 84 F8 00 00 00         JZ 0x006ae6f4
006AE5FC  8D 04 19                  LEA EAX,[ECX + EBX*0x1]
006AE5FF  66 8B 14 46               MOV DX,word ptr [ESI + EAX*0x2]
006AE603  81 E2 00 C0 00 00         AND EDX,0xc000
006AE609  81 FA 00 C0 00 00         CMP EDX,0xc000
006AE60F  0F 84 DF 00 00 00         JZ 0x006ae6f4
006AE615  03 CF                     ADD ECX,EDI
006AE617  66 8B 04 4E               MOV AX,word ptr [ESI + ECX*0x2]
006AE61B  25 00 C0 00 00            AND EAX,0xc000
006AE620  3D 00 C0 00 00            CMP EAX,0xc000
006AE625  75 64                     JNZ 0x006ae68b
006AE627  E9 C8 00 00 00            JMP 0x006ae6f4
LAB_006ae62c:
006AE62C  25 00 60 00 00            AND EAX,0x6000
006AE631  66 85 C0                  TEST AX,AX
006AE634  74 55                     JZ 0x006ae68b
006AE636  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
006AE639  80 E4 9F                  AND AH,0x9f
006AE63C  66 3D FE 0F               CMP AX,0xffe
006AE640  74 49                     JZ 0x006ae68b
006AE642  0F AF D3                  IMUL EDX,EBX
006AE645  66 8B 14 56               MOV DX,word ptr [ESI + EDX*0x2]
006AE649  81 E2 00 C0 00 00         AND EDX,0xc000
006AE64F  81 FA 00 C0 00 00         CMP EDX,0xc000
006AE655  0F 84 99 00 00 00         JZ 0x006ae6f4
006AE65B  85 C9                     TEST ECX,ECX
006AE65D  75 16                     JNZ 0x006ae675
006AE65F  66 8B 04 7E               MOV AX,word ptr [ESI + EDI*0x2]
006AE663  25 00 C0 00 00            AND EAX,0xc000
006AE668  3D 00 C0 00 00            CMP EAX,0xc000
006AE66D  0F 84 81 00 00 00         JZ 0x006ae6f4
006AE673  EB 16                     JMP 0x006ae68b
LAB_006ae675:
006AE675  0F AF 4D 0C               IMUL ECX,dword ptr [EBP + 0xc]
006AE679  66 8B 0C 4E               MOV CX,word ptr [ESI + ECX*0x2]
006AE67D  81 E1 00 C0 00 00         AND ECX,0xc000
006AE683  81 F9 00 C0 00 00         CMP ECX,0xc000
006AE689  74 69                     JZ 0x006ae6f4
LAB_006ae68b:
006AE68B  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006AE68E  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006AE691  0F AF 45 0C               IMUL EAX,dword ptr [EBP + 0xc]
006AE695  0F AF D3                  IMUL EDX,EBX
006AE698  8B 7D C0                  MOV EDI,dword ptr [EBP + -0x40]
006AE69B  8B CF                     MOV ECX,EDI
006AE69D  03 CA                     ADD ECX,EDX
006AE69F  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006AE6A2  03 C1                     ADD EAX,ECX
006AE6A4  0F BF 0C 42               MOVSX ECX,word ptr [EDX + EAX*0x2]
006AE6A8  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006AE6AB  3B F8                     CMP EDI,EAX
006AE6AD  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006AE6B0  75 0D                     JNZ 0x006ae6bf
006AE6B2  3B 45 1C                  CMP EAX,dword ptr [EBP + 0x1c]
006AE6B5  75 08                     JNZ 0x006ae6bf
006AE6B7  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006AE6BA  3B 55 20                  CMP EDX,dword ptr [EBP + 0x20]
006AE6BD  74 64                     JZ 0x006ae723
LAB_006ae6bf:
006AE6BF  85 C9                     TEST ECX,ECX
006AE6C1  7E 31                     JLE 0x006ae6f4
006AE6C3  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006AE6C6  03 0A                     ADD ECX,dword ptr [EDX]
006AE6C8  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
006AE6CB  3B CA                     CMP ECX,EDX
006AE6CD  7C 10                     JL 0x006ae6df
006AE6CF  75 23                     JNZ 0x006ae6f4
006AE6D1  0F BF 55 D0               MOVSX EDX,word ptr [EBP + -0x30]
006AE6D5  3B 55 C8                  CMP EDX,dword ptr [EBP + -0x38]
006AE6D8  74 05                     JZ 0x006ae6df
006AE6DA  3B 55 BC                  CMP EDX,dword ptr [EBP + -0x44]
006AE6DD  75 15                     JNZ 0x006ae6f4
LAB_006ae6df:
006AE6DF  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006AE6E2  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006AE6E5  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006AE6E8  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
006AE6EB  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
006AE6EE  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
006AE6F1  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
LAB_006ae6f4:
006AE6F4  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006AE6F7  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006AE6FA  42                        INC EDX
006AE6FB  83 C0 04                  ADD EAX,0x4
006AE6FE  89 55 24                  MOV dword ptr [EBP + 0x24],EDX
006AE701  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006AE704  83 C2 08                  ADD EDX,0x8
006AE707  3D A8 D6 7E 00            CMP EAX,0x7ed6a8
006AE70C  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006AE70F  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
006AE712  0F 8C 9B FD FF FF         JL 0x006ae4b3
006AE718  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
006AE71B  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
006AE71E  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
006AE721  EB 15                     JMP 0x006ae738
LAB_006ae723:
006AE723  8B F7                     MOV ESI,EDI
006AE725  8B D8                     MOV EBX,EAX
006AE727  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006AE72A  8B FA                     MOV EDI,EDX
006AE72C  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
006AE72F  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
006AE732  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
006AE735  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
LAB_006ae738:
006AE738  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006AE73B  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
006AE73E  48                        DEC EAX
006AE73F  0F BF 0C CD 76 D5 7E 00   MOVSX ECX,word ptr [ECX*0x8 + 0x7ed576]
006AE747  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006AE74A  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006AE74D  83 E8 08                  SUB EAX,0x8
006AE750  51                        PUSH ECX
006AE751  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
006AE754  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
006AE757  66 89 70 FC               MOV word ptr [EAX + -0x4],SI
006AE75B  66 89 58 FE               MOV word ptr [EAX + -0x2],BX
006AE75F  66 89 38                  MOV word ptr [EAX],DI
006AE762  E8 B9 7B FF FF            CALL 0x006a6320
006AE767  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006AE76A  66 89 42 0A               MOV word ptr [EDX + 0xa],AX
006AE76E  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006AE771  3B F0                     CMP ESI,EAX
006AE773  75 0A                     JNZ 0x006ae77f
006AE775  3B 5D 1C                  CMP EBX,dword ptr [EBP + 0x1c]
006AE778  75 05                     JNZ 0x006ae77f
006AE77A  3B 7D 20                  CMP EDI,dword ptr [EBP + 0x20]
006AE77D  74 11                     JZ 0x006ae790
LAB_006ae77f:
006AE77F  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006AE782  89 75 D4                  MOV dword ptr [EBP + -0x2c],ESI
006AE785  89 5D 28                  MOV dword ptr [EBP + 0x28],EBX
006AE788  89 7D 2C                  MOV dword ptr [EBP + 0x2c],EDI
006AE78B  E9 C7 FC FF FF            JMP 0x006ae457
LAB_006ae790:
006AE790  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006AE793  8B 5D 30                  MOV EBX,dword ptr [EBP + 0x30]
LAB_006ae796:
006AE796  8D 34 D3                  LEA ESI,[EBX + EDX*0x8]
006AE799  85 D2                     TEST EDX,EDX
006AE79B  66 C7 46 06 00 00         MOV word ptr [ESI + 0x6],0x0
006AE7A1  7E 18                     JLE 0x006ae7bb
006AE7A3  8B 4D 34                  MOV ECX,dword ptr [EBP + 0x34]
006AE7A6  8B FB                     MOV EDI,EBX
006AE7A8  2B CA                     SUB ECX,EDX
006AE7AA  C1 E1 03                  SHL ECX,0x3
006AE7AD  8B C1                     MOV EAX,ECX
006AE7AF  C1 E9 02                  SHR ECX,0x2
006AE7B2  F3 A5                     MOVSD.REP ES:EDI,ESI
006AE7B4  8B C8                     MOV ECX,EAX
006AE7B6  83 E1 03                  AND ECX,0x3
006AE7B9  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_006ae7bb:
006AE7BB  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
006AE7BE  5F                        POP EDI
006AE7BF  2B C2                     SUB EAX,EDX
006AE7C1  5E                        POP ESI
006AE7C2  48                        DEC EAX
006AE7C3  5B                        POP EBX
006AE7C4  8B E5                     MOV ESP,EBP
006AE7C6  5D                        POP EBP
006AE7C7  C2 30 00                  RET 0x30
