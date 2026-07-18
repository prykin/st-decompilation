FUN_006a9190:
006A9190  55                        PUSH EBP
006A9191  8B EC                     MOV EBP,ESP
006A9193  81 EC 9C 00 00 00         SUB ESP,0x9c
006A9199  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
006A919C  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006A919F  53                        PUSH EBX
006A91A0  56                        PUSH ESI
006A91A1  85 D2                     TEST EDX,EDX
006A91A3  57                        PUSH EDI
006A91A4  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
006A91AA  0F 8C 67 0A 00 00         JL 0x006a9c17
006A91B0  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006A91B3  3B D0                     CMP EDX,EAX
006A91B5  0F 8D 5C 0A 00 00         JGE 0x006a9c17
006A91BB  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006A91BE  85 C9                     TEST ECX,ECX
006A91C0  0F 8C 51 0A 00 00         JL 0x006a9c17
006A91C6  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006A91C9  3B CF                     CMP ECX,EDI
006A91CB  0F 8D 46 0A 00 00         JGE 0x006a9c17
006A91D1  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
006A91D4  85 DB                     TEST EBX,EBX
006A91D6  0F 8C 3B 0A 00 00         JL 0x006a9c17
006A91DC  3B 5D 14                  CMP EBX,dword ptr [EBP + 0x14]
006A91DF  0F 8D 32 0A 00 00         JGE 0x006a9c17
006A91E5  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006A91E8  85 C9                     TEST ECX,ECX
006A91EA  0F 8C 27 0A 00 00         JL 0x006a9c17
006A91F0  3B C8                     CMP ECX,EAX
006A91F2  0F 8D 1F 0A 00 00         JGE 0x006a9c17
006A91F8  8B 75 28                  MOV ESI,dword ptr [EBP + 0x28]
006A91FB  85 F6                     TEST ESI,ESI
006A91FD  0F 8C 14 0A 00 00         JL 0x006a9c17
006A9203  3B F7                     CMP ESI,EDI
006A9205  0F 8D 0C 0A 00 00         JGE 0x006a9c17
006A920B  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
006A920E  85 FF                     TEST EDI,EDI
006A9210  0F 8C 01 0A 00 00         JL 0x006a9c17
006A9216  3B 7D 14                  CMP EDI,dword ptr [EBP + 0x14]
006A9219  0F 8D F8 09 00 00         JGE 0x006a9c17
006A921F  0F AF 45 10               IMUL EAX,dword ptr [EBP + 0x10]
006A9223  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
006A9226  8B C1                     MOV EAX,ECX
006A9228  2B C2                     SUB EAX,EDX
006A922A  89 85 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EAX
006A9230  99                        CDQ
006A9231  8B C8                     MOV ECX,EAX
006A9233  8B C6                     MOV EAX,ESI
006A9235  33 CA                     XOR ECX,EDX
006A9237  2B CA                     SUB ECX,EDX
006A9239  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A923C  2B C2                     SUB EAX,EDX
006A923E  89 8D 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],ECX
006A9244  89 45 90                  MOV dword ptr [EBP + -0x70],EAX
006A9247  99                        CDQ
006A9248  8B F0                     MOV ESI,EAX
006A924A  8B C7                     MOV EAX,EDI
006A924C  33 F2                     XOR ESI,EDX
006A924E  2B C3                     SUB EAX,EBX
006A9250  2B F2                     SUB ESI,EDX
006A9252  89 45 8C                  MOV dword ptr [EBP + -0x74],EAX
006A9255  99                        CDQ
006A9256  33 C2                     XOR EAX,EDX
006A9258  89 75 84                  MOV dword ptr [EBP + -0x7c],ESI
006A925B  2B C2                     SUB EAX,EDX
006A925D  3B CE                     CMP ECX,ESI
006A925F  89 85 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EAX
006A9265  7C 08                     JL 0x006a926f
006A9267  3B C8                     CMP ECX,EAX
006A9269  7C 0A                     JL 0x006a9275
006A926B  8B C1                     MOV EAX,ECX
006A926D  EB 06                     JMP 0x006a9275
LAB_006a926f:
006A926F  3B F0                     CMP ESI,EAX
006A9271  7C 02                     JL 0x006a9275
006A9273  8B C6                     MOV EAX,ESI
LAB_006a9275:
006A9275  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
006A9278  83 E1 04                  AND ECX,0x4
006A927B  89 8D 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],ECX
006A9281  74 02                     JZ 0x006a9285
006A9283  03 C0                     ADD EAX,EAX
LAB_006a9285:
006A9285  83 C0 08                  ADD EAX,0x8
006A9288  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
006A928B  8D 34 C0                  LEA ESI,[EAX + EAX*0x8]
006A928E  C1 E6 03                  SHL ESI,0x3
006A9291  56                        PUSH ESI
006A9292  E8 D9 19 00 00            CALL 0x006aac70
006A9297  8B F8                     MOV EDI,EAX
006A9299  85 FF                     TEST EDI,EDI
006A929B  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006A929E  0F 84 58 19 00 00         JZ 0x006aabfc
006A92A4  8B CE                     MOV ECX,ESI
006A92A6  83 C8 FF                  OR EAX,0xffffffff
006A92A9  8B D1                     MOV EDX,ECX
006A92AB  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006A92AE  C1 E9 02                  SHR ECX,0x2
006A92B1  F3 AB                     STOSD.REP ES:EDI
006A92B3  8B CA                     MOV ECX,EDX
006A92B5  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006A92B8  83 E1 03                  AND ECX,0x3
006A92BB  C7 45 E8 01 00 00 00      MOV dword ptr [EBP + -0x18],0x1
006A92C2  F3 AA                     STOSB.REP ES:EDI
006A92C4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006A92C7  C7 85 70 FF FF FF FF FF FF FF  MOV dword ptr [EBP + 0xffffff70],0xffffffff
006A92D1  66 89 30                  MOV word ptr [EAX],SI
006A92D4  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006A92D7  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006A92DA  66 89 59 02               MOV word ptr [ECX + 0x2],BX
006A92DE  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006A92E1  33 C9                     XOR ECX,ECX
006A92E3  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006A92E6  66 89 42 04               MOV word ptr [EDX + 0x4],AX
006A92EA  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006A92ED  89 4D B0                  MOV dword ptr [EBP + -0x50],ECX
006A92F0  89 4D A4                  MOV dword ptr [EBP + -0x5c],ECX
006A92F3  89 4D 88                  MOV dword ptr [EBP + -0x78],ECX
006A92F6  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
006A92F9  51                        PUSH ECX
006A92FA  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006A92FD  52                        PUSH EDX
006A92FE  51                        PUSH ECX
006A92FF  50                        PUSH EAX
006A9300  53                        PUSH EBX
006A9301  56                        PUSH ESI
006A9302  E8 C9 1A 00 00            CALL 0x006aadd0
006A9307  3B 45 30                  CMP EAX,dword ptr [EBP + 0x30]
006A930A  0F 8E 20 14 00 00         JLE 0x006aa730
006A9310  8B 55 38                  MOV EDX,dword ptr [EBP + 0x38]
006A9313  85 D2                     TEST EDX,EDX
006A9315  0F 84 0E 10 00 00         JZ 0x006aa329
006A931B  8B 7D 3C                  MOV EDI,dword ptr [EBP + 0x3c]
006A931E  85 FF                     TEST EDI,EDI
006A9320  0F 8E 03 10 00 00         JLE 0x006aa329
006A9326  8D 44 3F 01               LEA EAX,[EDI + EDI*0x1 + 0x1]
006A932A  89 7D C8                  MOV dword ptr [EBP + -0x38],EDI
006A932D  8B C8                     MOV ECX,EAX
006A932F  0F AF C8                  IMUL ECX,EAX
006A9332  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
006A9335  8D 4C 01 01               LEA ECX,[ECX + EAX*0x1 + 0x1]
006A9339  0F AF CF                  IMUL ECX,EDI
006A933C  8D 14 4A                  LEA EDX,[EDX + ECX*0x2]
006A933F  8B 8D 64 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff64]
006A9345  3B CF                     CMP ECX,EDI
006A9347  89 55 A8                  MOV dword ptr [EBP + -0x58],EDX
006A934A  7F 37                     JG 0x006a9383
006A934C  39 7D 84                  CMP dword ptr [EBP + -0x7c],EDI
006A934F  7F 32                     JG 0x006a9383
006A9351  39 BD 7C FF FF FF         CMP dword ptr [EBP + 0xffffff7c],EDI
006A9357  7F 2A                     JG 0x006a9383
006A9359  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
006A935C  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
006A935F  0F AF 4D B4               IMUL ECX,dword ptr [EBP + -0x4c]
006A9363  0F AF D0                  IMUL EDX,EAX
006A9366  03 CA                     ADD ECX,EDX
006A9368  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006A936B  8B C6                     MOV EAX,ESI
006A936D  2B C8                     SUB ECX,EAX
006A936F  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
006A9372  03 CA                     ADD ECX,EDX
006A9374  66 83 3C 48 FD            CMP word ptr [EAX + ECX*0x2],-0x3
006A9379  8D 04 48                  LEA EAX,[EAX + ECX*0x2]
006A937C  75 05                     JNZ 0x006a9383
006A937E  66 C7 00 00 00            MOV word ptr [EAX],0x0
LAB_006a9383:
006A9383  8B 85 6C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff6c]
006A9389  85 C0                     TEST EAX,EAX
006A938B  74 1D                     JZ 0x006a93aa
006A938D  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006A9390  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006A9393  8D 4D B0                  LEA ECX,[EBP + -0x50]
006A9396  51                        PUSH ECX
006A9397  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006A939A  52                        PUSH EDX
006A939B  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006A939E  50                        PUSH EAX
006A939F  51                        PUSH ECX
006A93A0  52                        PUSH EDX
006A93A1  53                        PUSH EBX
006A93A2  56                        PUSH ESI
006A93A3  E8 58 CD FF FF            CALL 0x006a6100
006A93A8  EB 1B                     JMP 0x006a93c5
LAB_006a93aa:
006A93AA  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
006A93AD  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006A93B0  8D 45 B0                  LEA EAX,[EBP + -0x50]
006A93B3  50                        PUSH EAX
006A93B4  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006A93B7  51                        PUSH ECX
006A93B8  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006A93BB  52                        PUSH EDX
006A93BC  50                        PUSH EAX
006A93BD  51                        PUSH ECX
006A93BE  53                        PUSH EBX
006A93BF  56                        PUSH ESI
006A93C0  E8 5B CB FF FF            CALL 0x006a5f20
LAB_006a93c5:
006A93C5  83 F8 1A                  CMP EAX,0x1a
006A93C8  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
006A93CB  0F 8D 9F 05 00 00         JGE 0x006a9970
006A93D1  8B 8D 70 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff70]
006A93D7  85 C9                     TEST ECX,ECX
006A93D9  7C 32                     JL 0x006a940d
006A93DB  3B C8                     CMP ECX,EAX
006A93DD  74 2E                     JZ 0x006a940d
006A93DF  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006A93E2  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006A93E5  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
006A93E8  C1 E0 03                  SHL EAX,0x3
006A93EB  66 89 34 10               MOV word ptr [EAX + EDX*0x1],SI
006A93EF  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006A93F2  66 89 5C 08 02            MOV word ptr [EAX + ECX*0x1 + 0x2],BX
006A93F7  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006A93FA  66 8B 4D F8               MOV CX,word ptr [EBP + -0x8]
006A93FE  66 89 4C 10 04            MOV word ptr [EAX + EDX*0x1 + 0x4],CX
006A9403  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006A9406  40                        INC EAX
006A9407  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006A940A  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
LAB_006a940d:
006A940D  0F BF 14 C5 70 D5 7E 00   MOVSX EDX,word ptr [EAX*0x8 + 0x7ed570]
006A9415  0F BF 0C C5 72 D5 7E 00   MOVSX ECX,word ptr [EAX*0x8 + 0x7ed572]
006A941D  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006A9420  89 85 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EAX
006A9426  0F BF 14 C5 74 D5 7E 00   MOVSX EDX,word ptr [EAX*0x8 + 0x7ed574]
006A942E  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
006A9431  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
006A9434  85 C0                     TEST EAX,EAX
006A9436  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
006A9439  0F 8E 15 05 00 00         JLE 0x006a9954
006A943F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006A9442  8B CB                     MOV ECX,EBX
006A9444  0F AF 45 BC               IMUL EAX,dword ptr [EBP + -0x44]
006A9448  0F AF 4D 0C               IMUL ECX,dword ptr [EBP + 0xc]
006A944C  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006A944F  8D 14 01                  LEA EDX,[ECX + EAX*0x1]
006A9452  03 D6                     ADD EDX,ESI
006A9454  89 85 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EAX
006A945A  8B 45 3C                  MOV EAX,dword ptr [EBP + 0x3c]
006A945D  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
006A9460  8D 14 57                  LEA EDX,[EDI + EDX*0x2]
006A9463  89 55 AC                  MOV dword ptr [EBP + -0x54],EDX
006A9466  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
006A9469  8D 3C D2                  LEA EDI,[EDX + EDX*0x8]
006A946C  C1 E7 03                  SHL EDI,0x3
006A946F  89 7D 9C                  MOV dword ptr [EBP + -0x64],EDI
006A9472  8B 7D C4                  MOV EDI,dword ptr [EBP + -0x3c]
006A9475  8D 3C FF                  LEA EDI,[EDI + EDI*0x8]
006A9478  C1 E7 03                  SHL EDI,0x3
006A947B  42                        INC EDX
006A947C  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
006A947F  89 55 B8                  MOV dword ptr [EBP + -0x48],EDX
006A9482  8D 54 00 01               LEA EDX,[EAX + EAX*0x1 + 0x1]
006A9486  8B C2                     MOV EAX,EDX
006A9488  8B 7D B4                  MOV EDI,dword ptr [EBP + -0x4c]
006A948B  0F AF 45 1C               IMUL EAX,dword ptr [EBP + 0x1c]
006A948F  89 45 94                  MOV dword ptr [EBP + -0x6c],EAX
006A9492  8B C7                     MOV EAX,EDI
006A9494  0F AF 7D 20               IMUL EDI,dword ptr [EBP + 0x20]
006A9498  0F AF 45 F8               IMUL EAX,dword ptr [EBP + -0x8]
006A949C  89 BD 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EDI
006A94A2  8B 7D C0                  MOV EDI,dword ptr [EBP + -0x40]
006A94A5  0F AF 7D 0C               IMUL EDI,dword ptr [EBP + 0xc]
006A94A9  8B CA                     MOV ECX,EDX
006A94AB  0F AF 55 C0               IMUL EDX,dword ptr [EBP + -0x40]
006A94AF  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
006A94B2  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
006A94B5  0F AF 7D BC               IMUL EDI,dword ptr [EBP + -0x44]
006A94B9  0F AF CB                  IMUL ECX,EBX
006A94BC  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
006A94BF  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
006A94C2  0F AF 55 E4               IMUL EDX,dword ptr [EBP + -0x1c]
006A94C6  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
006A94C9  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
006A94CC  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
006A94CF  89 55 98                  MOV dword ptr [EBP + -0x68],EDX
006A94D2  EB 06                     JMP 0x006a94da
LAB_006a94d4:
006A94D4  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
006A94D7  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
LAB_006a94da:
006A94DA  8B BD 78 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff78]
006A94E0  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
006A94E3  2B C7                     SUB EAX,EDI
006A94E5  8B 7D 94                  MOV EDI,dword ptr [EBP + -0x6c]
006A94E8  2B CF                     SUB ECX,EDI
006A94EA  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006A94ED  2B C7                     SUB EAX,EDI
006A94EF  8B 7D C0                  MOV EDI,dword ptr [EBP + -0x40]
006A94F2  03 C1                     ADD EAX,ECX
006A94F4  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
006A94F7  03 C6                     ADD EAX,ESI
006A94F9  03 DF                     ADD EBX,EDI
006A94FB  8B 7D D8                  MOV EDI,dword ptr [EBP + -0x28]
006A94FE  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
006A9501  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
006A9504  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
006A9507  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006A950A  03 F0                     ADD ESI,EAX
006A950C  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006A950F  03 F9                     ADD EDI,ECX
006A9511  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
006A9514  03 C8                     ADD ECX,EAX
006A9516  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006A9519  01 45 F8                  ADD dword ptr [EBP + -0x8],EAX
006A951C  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
006A951F  01 45 DC                  ADD dword ptr [EBP + -0x24],EAX
006A9522  8B 85 74 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff74]
006A9528  03 45 E0                  ADD EAX,dword ptr [EBP + -0x20]
006A952B  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
006A952E  89 7D D8                  MOV dword ptr [EBP + -0x28],EDI
006A9531  89 85 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EAX
006A9537  03 C1                     ADD EAX,ECX
006A9539  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006A953C  03 C6                     ADD EAX,ESI
006A953E  66 83 3C 41 00            CMP word ptr [ECX + EAX*0x2],0x0
006A9543  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
006A9546  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
006A9549  0F 8C 15 04 00 00         JL 0x006a9964
006A954F  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
006A9552  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
006A9558  2B C1                     SUB EAX,ECX
006A955A  8B 4D 94                  MOV ECX,dword ptr [EBP + -0x6c]
006A955D  2B F9                     SUB EDI,ECX
006A955F  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006A9562  2B C1                     SUB EAX,ECX
006A9564  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
006A9567  03 C7                     ADD EAX,EDI
006A9569  03 C6                     ADD EAX,ESI
006A956B  66 83 3C 41 00            CMP word ptr [ECX + EAX*0x2],0x0
006A9570  0F 8C EE 03 00 00         JL 0x006a9964
006A9576  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
006A9579  66 8B 04 C5 76 D5 7E 00   MOV AX,word ptr [EAX*0x8 + 0x7ed576]
006A9581  A8 01                     TEST AL,0x1
006A9583  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
006A9586  0F 84 44 02 00 00         JZ 0x006a97d0
006A958C  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006A958F  66 8B 0C 42               MOV CX,word ptr [EDX + EAX*0x2]
006A9593  81 E1 00 C0 00 00         AND ECX,0xc000
006A9599  81 F9 00 C0 00 00         CMP ECX,0xc000
006A959F  0F 84 BF 03 00 00         JZ 0x006a9964
006A95A5  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006A95A8  66 8B 0C 4A               MOV CX,word ptr [EDX + ECX*0x2]
006A95AC  81 E1 00 C0 00 00         AND ECX,0xc000
006A95B2  81 F9 00 C0 00 00         CMP ECX,0xc000
006A95B8  0F 84 A6 03 00 00         JZ 0x006a9964
006A95BE  8B 7D D4                  MOV EDI,dword ptr [EBP + -0x2c]
006A95C1  66 8B 0C 47               MOV CX,word ptr [EDI + EAX*0x2]
006A95C5  81 E1 00 C0 00 00         AND ECX,0xc000
006A95CB  81 F9 00 C0 00 00         CMP ECX,0xc000
006A95D1  0F 84 8D 03 00 00         JZ 0x006a9964
006A95D7  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
006A95DA  66 8B 0C 4F               MOV CX,word ptr [EDI + ECX*0x2]
006A95DE  81 E1 00 C0 00 00         AND ECX,0xc000
006A95E4  81 F9 00 C0 00 00         CMP ECX,0xc000
006A95EA  0F 84 74 03 00 00         JZ 0x006a9964
006A95F0  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
006A95F3  81 E1 00 40 00 00         AND ECX,0x4000
006A95F9  66 85 C9                  TEST CX,CX
006A95FC  0F 84 E8 00 00 00         JZ 0x006a96ea
006A9602  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
006A9605  8D 0C 00                  LEA ECX,[EAX + EAX*0x1]
006A9608  8B C2                     MOV EAX,EDX
006A960A  2B C1                     SUB EAX,ECX
006A960C  66 8B 08                  MOV CX,word ptr [EAX]
006A960F  81 E1 00 C0 00 00         AND ECX,0xc000
006A9615  81 F9 00 C0 00 00         CMP ECX,0xc000
006A961B  0F 84 43 03 00 00         JZ 0x006a9964
006A9621  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006A9624  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
006A9627  2B C8                     SUB ECX,EAX
006A9629  66 8B 0C 4A               MOV CX,word ptr [EDX + ECX*0x2]
006A962D  81 E1 00 C0 00 00         AND ECX,0xc000
006A9633  81 F9 00 C0 00 00         CMP ECX,0xc000
006A9639  0F 84 25 03 00 00         JZ 0x006a9964
006A963F  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006A9642  2B C8                     SUB ECX,EAX
006A9644  66 8B 04 4A               MOV AX,word ptr [EDX + ECX*0x2]
006A9648  25 00 C0 00 00            AND EAX,0xc000
006A964D  3D 00 C0 00 00            CMP EAX,0xc000
006A9652  0F 84 0C 03 00 00         JZ 0x006a9964
006A9658  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006A965B  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006A965E  03 C8                     ADD ECX,EAX
006A9660  66 8B 0C 4A               MOV CX,word ptr [EDX + ECX*0x2]
006A9664  81 E1 00 C0 00 00         AND ECX,0xc000
006A966A  81 F9 00 C0 00 00         CMP ECX,0xc000
006A9670  0F 84 EE 02 00 00         JZ 0x006a9964
006A9676  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
006A9679  8D 0C 00                  LEA ECX,[EAX + EAX*0x1]
006A967C  8B C7                     MOV EAX,EDI
006A967E  2B C1                     SUB EAX,ECX
006A9680  66 8B 08                  MOV CX,word ptr [EAX]
006A9683  81 E1 00 C0 00 00         AND ECX,0xc000
006A9689  81 F9 00 C0 00 00         CMP ECX,0xc000
006A968F  0F 84 CF 02 00 00         JZ 0x006a9964
006A9695  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006A9698  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
006A969B  2B C8                     SUB ECX,EAX
006A969D  66 8B 0C 4F               MOV CX,word ptr [EDI + ECX*0x2]
006A96A1  81 E1 00 C0 00 00         AND ECX,0xc000
006A96A7  81 F9 00 C0 00 00         CMP ECX,0xc000
006A96AD  0F 84 B1 02 00 00         JZ 0x006a9964
006A96B3  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
006A96B6  2B C8                     SUB ECX,EAX
006A96B8  66 8B 04 4F               MOV AX,word ptr [EDI + ECX*0x2]
006A96BC  25 00 C0 00 00            AND EAX,0xc000
006A96C1  3D 00 C0 00 00            CMP EAX,0xc000
006A96C6  0F 84 98 02 00 00         JZ 0x006a9964
006A96CC  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
006A96CF  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006A96D2  03 C8                     ADD ECX,EAX
006A96D4  66 8B 0C 4F               MOV CX,word ptr [EDI + ECX*0x2]
006A96D8  81 E1 00 C0 00 00         AND ECX,0xc000
006A96DE  81 F9 00 C0 00 00         CMP ECX,0xc000
006A96E4  0F 84 7A 02 00 00         JZ 0x006a9964
LAB_006a96ea:
006A96EA  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
006A96ED  81 E1 00 20 00 00         AND ECX,0x2000
006A96F3  66 85 C9                  TEST CX,CX
006A96F6  66 89 4D 80               MOV word ptr [EBP + -0x80],CX
006A96FA  0F 84 89 01 00 00         JZ 0x006a9889
006A9700  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
006A9703  66 8B 0C 4A               MOV CX,word ptr [EDX + ECX*0x2]
006A9707  81 E1 00 C0 00 00         AND ECX,0xc000
006A970D  81 F9 00 C0 00 00         CMP ECX,0xc000
006A9713  0F 84 4B 02 00 00         JZ 0x006a9964
006A9719  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
006A971C  03 C1                     ADD EAX,ECX
006A971E  66 8B 04 42               MOV AX,word ptr [EDX + EAX*0x2]
006A9722  25 00 C0 00 00            AND EAX,0xc000
006A9727  3D 00 C0 00 00            CMP EAX,0xc000
006A972C  0F 84 32 02 00 00         JZ 0x006a9964
006A9732  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006A9735  03 C8                     ADD ECX,EAX
006A9737  66 8B 0C 4A               MOV CX,word ptr [EDX + ECX*0x2]
006A973B  81 E1 00 C0 00 00         AND ECX,0xc000
006A9741  81 F9 00 C0 00 00         CMP ECX,0xc000
006A9747  0F 84 17 02 00 00         JZ 0x006a9964
006A974D  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006A9750  03 C1                     ADD EAX,ECX
006A9752  66 8B 14 42               MOV DX,word ptr [EDX + EAX*0x2]
006A9756  81 E2 00 C0 00 00         AND EDX,0xc000
006A975C  81 FA 00 C0 00 00         CMP EDX,0xc000
006A9762  0F 84 FC 01 00 00         JZ 0x006a9964
006A9768  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
006A976B  66 8B 14 47               MOV DX,word ptr [EDI + EAX*0x2]
006A976F  81 E2 00 C0 00 00         AND EDX,0xc000
006A9775  81 FA 00 C0 00 00         CMP EDX,0xc000
006A977B  0F 84 E3 01 00 00         JZ 0x006a9964
006A9781  8D 14 08                  LEA EDX,[EAX + ECX*0x1]
006A9784  66 8B 14 57               MOV DX,word ptr [EDI + EDX*0x2]
006A9788  81 E2 00 C0 00 00         AND EDX,0xc000
006A978E  81 FA 00 C0 00 00         CMP EDX,0xc000
006A9794  0F 84 CA 01 00 00         JZ 0x006a9964
006A979A  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
006A979D  03 C2                     ADD EAX,EDX
006A979F  66 8B 04 47               MOV AX,word ptr [EDI + EAX*0x2]
006A97A3  25 00 C0 00 00            AND EAX,0xc000
006A97A8  3D 00 C0 00 00            CMP EAX,0xc000
006A97AD  0F 84 B1 01 00 00         JZ 0x006a9964
006A97B3  03 D1                     ADD EDX,ECX
006A97B5  66 8B 0C 57               MOV CX,word ptr [EDI + EDX*0x2]
006A97B9  81 E1 00 C0 00 00         AND ECX,0xc000
006A97BF  81 F9 00 C0 00 00         CMP ECX,0xc000
006A97C5  0F 84 99 01 00 00         JZ 0x006a9964
006A97CB  E9 B9 00 00 00            JMP 0x006a9889
LAB_006a97d0:
006A97D0  8B C8                     MOV ECX,EAX
006A97D2  81 E1 00 60 00 00         AND ECX,0x6000
006A97D8  66 85 C9                  TEST CX,CX
006A97DB  0F 84 A8 00 00 00         JZ 0x006a9889
006A97E1  80 E4 9F                  AND AH,0x9f
006A97E4  66 3D FE 0F               CMP AX,0xffe
006A97E8  0F 84 9B 00 00 00         JZ 0x006a9889
006A97EE  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006A97F1  66 8B 0C 42               MOV CX,word ptr [EDX + EAX*0x2]
006A97F5  81 E1 00 C0 00 00         AND ECX,0xc000
006A97FB  81 F9 00 C0 00 00         CMP ECX,0xc000
006A9801  0F 84 5D 01 00 00         JZ 0x006a9964
006A9807  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
006A980A  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
006A980D  66 8B 04 41               MOV AX,word ptr [ECX + EAX*0x2]
006A9811  25 00 C0 00 00            AND EAX,0xc000
006A9816  3D 00 C0 00 00            CMP EAX,0xc000
006A981B  0F 84 43 01 00 00         JZ 0x006a9964
006A9821  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
006A9824  85 C0                     TEST EAX,EAX
006A9826  75 2F                     JNZ 0x006a9857
006A9828  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006A982B  66 8B 14 42               MOV DX,word ptr [EDX + EAX*0x2]
006A982F  81 E2 00 C0 00 00         AND EDX,0xc000
006A9835  81 FA 00 C0 00 00         CMP EDX,0xc000
006A983B  0F 84 23 01 00 00         JZ 0x006a9964
006A9841  66 8B 04 41               MOV AX,word ptr [ECX + EAX*0x2]
006A9845  25 00 C0 00 00            AND EAX,0xc000
006A984A  3D 00 C0 00 00            CMP EAX,0xc000
006A984F  0F 84 0F 01 00 00         JZ 0x006a9964
006A9855  EB 32                     JMP 0x006a9889
LAB_006a9857:
006A9857  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006A985A  66 8B 14 42               MOV DX,word ptr [EDX + EAX*0x2]
006A985E  81 E2 00 C0 00 00         AND EDX,0xc000
006A9864  81 FA 00 C0 00 00         CMP EDX,0xc000
006A986A  0F 84 F4 00 00 00         JZ 0x006a9964
006A9870  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
006A9873  66 8B 0C 41               MOV CX,word ptr [ECX + EAX*0x2]
006A9877  81 E1 00 C0 00 00         AND ECX,0xc000
006A987D  81 F9 00 C0 00 00         CMP ECX,0xc000
006A9883  0F 84 DB 00 00 00         JZ 0x006a9964
LAB_006a9889:
006A9889  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
006A988C  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
006A988F  3B D0                     CMP EDX,EAX
006A9891  7C 40                     JL 0x006a98d3
006A9893  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006A9896  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006A9899  05 D0 02 00 00            ADD EAX,0x2d0
006A989E  50                        PUSH EAX
006A989F  51                        PUSH ECX
006A98A0  E8 AB 36 00 00            CALL 0x006acf50
006A98A5  8B F8                     MOV EDI,EAX
006A98A7  85 FF                     TEST EDI,EDI
006A98A9  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006A98AC  0F 84 4A 13 00 00         JZ 0x006aabfc
006A98B2  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006A98B5  B9 B4 00 00 00            MOV ECX,0xb4
006A98BA  83 C8 FF                  OR EAX,0xffffffff
006A98BD  03 FA                     ADD EDI,EDX
006A98BF  F3 AB                     STOSD.REP ES:EDI
006A98C1  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
006A98C4  83 C1 0A                  ADD ECX,0xa
006A98C7  81 C2 D0 02 00 00         ADD EDX,0x2d0
006A98CD  89 4D C4                  MOV dword ptr [EBP + -0x3c],ECX
006A98D0  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
LAB_006a98d3:
006A98D3  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006A98D6  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
006A98D9  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
006A98DC  66 89 34 10               MOV word ptr [EAX + EDX*0x1],SI
006A98E0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006A98E3  47                        INC EDI
006A98E4  66 89 5C 08 02            MOV word ptr [EAX + ECX*0x1 + 0x2],BX
006A98E9  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006A98EC  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006A98EF  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
006A98F2  66 89 4C 10 04            MOV word ptr [EAX + EDX*0x1 + 0x4],CX
006A98F7  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
006A98FA  83 C0 48                  ADD EAX,0x48
006A98FD  42                        INC EDX
006A98FE  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
006A9901  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006A9904  89 55 B8                  MOV dword ptr [EBP + -0x48],EDX
006A9907  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006A990A  50                        PUSH EAX
006A990B  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006A990E  52                        PUSH EDX
006A990F  50                        PUSH EAX
006A9910  51                        PUSH ECX
006A9911  53                        PUSH EBX
006A9912  56                        PUSH ESI
006A9913  E8 B8 14 00 00            CALL 0x006aadd0
006A9918  8B 55 30                  MOV EDX,dword ptr [EBP + 0x30]
006A991B  33 C9                     XOR ECX,ECX
006A991D  3B C2                     CMP EAX,EDX
006A991F  0F 9E C1                  SETLE CL
006A9922  8B C1                     MOV EAX,ECX
006A9924  83 F8 01                  CMP EAX,0x1
006A9927  89 45 88                  MOV dword ptr [EBP + -0x78],EAX
006A992A  74 1D                     JZ 0x006a9949
006A992C  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
006A992F  49                        DEC ECX
006A9930  89 4D B0                  MOV dword ptr [EBP + -0x50],ECX
006A9933  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
006A9936  49                        DEC ECX
006A9937  85 C9                     TEST ECX,ECX
006A9939  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
006A993C  7E 0B                     JLE 0x006a9949
006A993E  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
006A9941  85 C9                     TEST ECX,ECX
006A9943  0F 8F 8B FB FF FF         JG 0x006a94d4
LAB_006a9949:
006A9949  85 C0                     TEST EAX,EAX
006A994B  0F 85 07 0E 00 00         JNZ 0x006aa758
006A9951  8B 7D 3C                  MOV EDI,dword ptr [EBP + 0x3c]
LAB_006a9954:
006A9954  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
006A9957  85 C0                     TEST EAX,EAX
006A9959  0F 8E CA 09 00 00         JLE 0x006aa329
006A995F  E9 1F FA FF FF            JMP 0x006a9383
LAB_006a9964:
006A9964  8D 55 FC                  LEA EDX,[EBP + -0x4]
006A9967  52                        PUSH EDX
006A9968  E8 F3 16 00 00            CALL 0x006ab060
006A996D  8B 7D 3C                  MOV EDI,dword ptr [EBP + 0x3c]
LAB_006a9970:
006A9970  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006A9973  8B C7                     MOV EAX,EDI
006A9975  3B CF                     CMP ECX,EDI
006A9977  7D 02                     JGE 0x006a997b
006A9979  8B C1                     MOV EAX,ECX
LAB_006a997b:
006A997B  F7 D8                     NEG EAX
006A997D  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
006A9980  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006A9983  8D 14 39                  LEA EDX,[ECX + EDI*0x1]
006A9986  3B D0                     CMP EDX,EAX
006A9988  7D 05                     JGE 0x006a998f
006A998A  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
006A998D  EB 06                     JMP 0x006a9995
LAB_006a998f:
006A998F  2B C1                     SUB EAX,ECX
006A9991  48                        DEC EAX
006A9992  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
LAB_006a9995:
006A9995  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006A9998  8B C7                     MOV EAX,EDI
006A999A  3B CF                     CMP ECX,EDI
006A999C  7D 02                     JGE 0x006a99a0
006A999E  8B C1                     MOV EAX,ECX
LAB_006a99a0:
006A99A0  F7 D8                     NEG EAX
006A99A2  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006A99A5  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006A99A8  8D 14 39                  LEA EDX,[ECX + EDI*0x1]
006A99AB  3B D0                     CMP EDX,EAX
006A99AD  7D 05                     JGE 0x006a99b4
006A99AF  89 7D D8                  MOV dword ptr [EBP + -0x28],EDI
006A99B2  EB 06                     JMP 0x006a99ba
LAB_006a99b4:
006A99B4  2B C1                     SUB EAX,ECX
006A99B6  48                        DEC EAX
006A99B7  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
LAB_006a99ba:
006A99BA  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006A99BD  8B C7                     MOV EAX,EDI
006A99BF  3B CF                     CMP ECX,EDI
006A99C1  7D 02                     JGE 0x006a99c5
006A99C3  8B C1                     MOV EAX,ECX
LAB_006a99c5:
006A99C5  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
006A99C8  F7 D8                     NEG EAX
006A99CA  8B F0                     MOV ESI,EAX
006A99CC  8D 04 39                  LEA EAX,[ECX + EDI*0x1]
006A99CF  3B C3                     CMP EAX,EBX
006A99D1  89 75 A0                  MOV dword ptr [EBP + -0x60],ESI
006A99D4  7D 04                     JGE 0x006a99da
006A99D6  8B DF                     MOV EBX,EDI
006A99D8  EB 03                     JMP 0x006a99dd
LAB_006a99da:
006A99DA  2B D9                     SUB EBX,ECX
006A99DC  4B                        DEC EBX
LAB_006a99dd:
006A99DD  8B CE                     MOV ECX,ESI
006A99DF  89 5D AC                  MOV dword ptr [EBP + -0x54],EBX
006A99E2  F7 D9                     NEG ECX
006A99E4  3B CF                     CMP ECX,EDI
006A99E6  7D 16                     JGE 0x006a99fe
006A99E8  8D 14 3E                  LEA EDX,[ESI + EDI*0x1]
006A99EB  8B 45 38                  MOV EAX,dword ptr [EBP + 0x38]
006A99EE  0F AF 55 B4               IMUL EDX,dword ptr [EBP + -0x4c]
006A99F2  68 FF FF 00 00            PUSH 0xffff
006A99F7  52                        PUSH EDX
006A99F8  50                        PUSH EAX
006A99F9  E8 C2 4C 02 00            CALL 0x006ce6c0
LAB_006a99fe:
006A99FE  3B DF                     CMP EBX,EDI
006A9A00  7D 23                     JGE 0x006a9a25
006A9A02  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
006A9A05  8B CF                     MOV ECX,EDI
006A9A07  2B CB                     SUB ECX,EBX
006A9A09  8D 54 3B 01               LEA EDX,[EBX + EDI*0x1 + 0x1]
006A9A0D  0F AF C8                  IMUL ECX,EAX
006A9A10  0F AF D0                  IMUL EDX,EAX
006A9A13  8B 45 38                  MOV EAX,dword ptr [EBP + 0x38]
006A9A16  68 FF FF 00 00            PUSH 0xffff
006A9A1B  51                        PUSH ECX
006A9A1C  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
006A9A1F  51                        PUSH ECX
006A9A20  E8 9B 4C 02 00            CALL 0x006ce6c0
LAB_006a9a25:
006A9A25  3B F3                     CMP ESI,EBX
006A9A27  0F 8F B6 01 00 00         JG 0x006a9be3
006A9A2D  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006A9A30  8B C1                     MOV EAX,ECX
006A9A32  8B D9                     MOV EBX,ECX
006A9A34  F7 D8                     NEG EAX
006A9A36  89 45 80                  MOV dword ptr [EBP + -0x80],EAX
006A9A39  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
006A9A3C  8D 4C 3F 01               LEA ECX,[EDI + EDI*0x1 + 0x1]
006A9A40  8D 14 00                  LEA EDX,[EAX + EAX*0x1]
006A9A43  0F AF D9                  IMUL EBX,ECX
006A9A46  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
006A9A49  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
006A9A4C  03 D2                     ADD EDX,EDX
006A9A4E  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
006A9A51  89 95 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EDX
006A9A57  8B D6                     MOV EDX,ESI
006A9A59  0F AF D0                  IMUL EDX,EAX
006A9A5C  03 D3                     ADD EDX,EBX
006A9A5E  8B 5D AC                  MOV EBX,dword ptr [EBP + -0x54]
006A9A61  2B DE                     SUB EBX,ESI
006A9A63  8D 14 51                  LEA EDX,[ECX + EDX*0x2]
006A9A66  8D 0C 3E                  LEA ECX,[ESI + EDI*0x1]
006A9A69  0F AF C8                  IMUL ECX,EAX
006A9A6C  89 55 B8                  MOV dword ptr [EBP + -0x48],EDX
006A9A6F  8B 55 38                  MOV EDX,dword ptr [EBP + 0x38]
006A9A72  8D 04 4A                  LEA EAX,[EDX + ECX*0x2]
006A9A75  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006A9A78  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
006A9A7B  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006A9A7E  8D 14 0E                  LEA EDX,[ESI + ECX*0x1]
006A9A81  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006A9A84  0F AF 55 BC               IMUL EDX,dword ptr [EBP + -0x44]
006A9A88  03 C8                     ADD ECX,EAX
006A9A8A  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006A9A8D  0F AF 4D 0C               IMUL ECX,dword ptr [EBP + 0xc]
006A9A91  03 C2                     ADD EAX,EDX
006A9A93  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006A9A96  03 C8                     ADD ECX,EAX
006A9A98  43                        INC EBX
006A9A99  89 5D 94                  MOV dword ptr [EBP + -0x6c],EBX
006A9A9C  8D 04 4A                  LEA EAX,[EDX + ECX*0x2]
006A9A9F  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
LAB_006a9aa2:
006A9AA2  39 7D 80                  CMP dword ptr [EBP + -0x80],EDI
006A9AA5  7D 1B                     JGE 0x006a9ac2
006A9AA7  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006A9AAA  8D 44 3F 01               LEA EAX,[EDI + EDI*0x1 + 0x1]
006A9AAE  03 CF                     ADD ECX,EDI
006A9AB0  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
006A9AB3  0F AF C8                  IMUL ECX,EAX
006A9AB6  68 FF FF 00 00            PUSH 0xffff
006A9ABB  51                        PUSH ECX
006A9ABC  52                        PUSH EDX
006A9ABD  E8 FE 4B 02 00            CALL 0x006ce6c0
LAB_006a9ac2:
006A9AC2  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006A9AC5  3B C7                     CMP EAX,EDI
006A9AC7  7D 26                     JGE 0x006a9aef
006A9AC9  8B D7                     MOV EDX,EDI
006A9ACB  8B C8                     MOV ECX,EAX
006A9ACD  2B D1                     SUB EDX,ECX
006A9ACF  8D 44 3F 01               LEA EAX,[EDI + EDI*0x1 + 0x1]
006A9AD3  0F AF D0                  IMUL EDX,EAX
006A9AD6  8D 4C 39 01               LEA ECX,[ECX + EDI*0x1 + 0x1]
006A9ADA  68 FF FF 00 00            PUSH 0xffff
006A9ADF  0F AF C8                  IMUL ECX,EAX
006A9AE2  52                        PUSH EDX
006A9AE3  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
006A9AE6  8D 04 4A                  LEA EAX,[EDX + ECX*0x2]
006A9AE9  50                        PUSH EAX
006A9AEA  E8 D1 4B 02 00            CALL 0x006ce6c0
LAB_006a9aef:
006A9AEF  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
006A9AF2  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006A9AF5  8B 75 C8                  MOV ESI,dword ptr [EBP + -0x38]
006A9AF8  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
006A9AFB  3B C1                     CMP EAX,ECX
006A9AFD  89 75 9C                  MOV dword ptr [EBP + -0x64],ESI
006A9B00  0F 8F B2 00 00 00         JG 0x006a9bb8
006A9B06  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006A9B09  8B D9                     MOV EBX,ECX
006A9B0B  2B 5D EC                  SUB EBX,dword ptr [EBP + -0x14]
006A9B0E  F7 D8                     NEG EAX
006A9B10  43                        INC EBX
006A9B11  89 85 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EAX
006A9B17  89 5D 98                  MOV dword ptr [EBP + -0x68],EBX
006A9B1A  EB 06                     JMP 0x006a9b22
LAB_006a9b1c:
006A9B1C  8B 85 78 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff78]
LAB_006a9b22:
006A9B22  3B C7                     CMP EAX,EDI
006A9B24  7D 1F                     JGE 0x006a9b45
006A9B26  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
006A9B29  8B C7                     MOV EAX,EDI
006A9B2B  F7 D8                     NEG EAX
006A9B2D  3B C1                     CMP EAX,ECX
006A9B2F  7D 14                     JGE 0x006a9b45
006A9B31  8D 3C 42                  LEA EDI,[EDX + EAX*0x2]
006A9B34  2B C8                     SUB ECX,EAX
006A9B36  83 C8 FF                  OR EAX,0xffffffff
006A9B39  D1 E9                     SHR ECX,0x1
006A9B3B  F3 AB                     STOSD.REP ES:EDI
006A9B3D  13 C9                     ADC ECX,ECX
006A9B3F  66 F3 AB                  STOSW.REP ES:EDI
006A9B42  8B 7D 3C                  MOV EDI,dword ptr [EBP + 0x3c]
LAB_006a9b45:
006A9B45  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
006A9B48  3B CF                     CMP ECX,EDI
006A9B4A  7D 22                     JGE 0x006a9b6e
006A9B4C  8D 41 01                  LEA EAX,[ECX + 0x1]
006A9B4F  3B C7                     CMP EAX,EDI
006A9B51  7F 1B                     JG 0x006a9b6e
006A9B53  8B 4D 3C                  MOV ECX,dword ptr [EBP + 0x3c]
006A9B56  8D 3C 42                  LEA EDI,[EDX + EAX*0x2]
006A9B59  2B C8                     SUB ECX,EAX
006A9B5B  83 C8 FF                  OR EAX,0xffffffff
006A9B5E  41                        INC ECX
006A9B5F  D1 E9                     SHR ECX,0x1
006A9B61  F3 AB                     STOSD.REP ES:EDI
006A9B63  13 C9                     ADC ECX,ECX
006A9B65  66 F3 AB                  STOSW.REP ES:EDI
006A9B68  8B 7D 3C                  MOV EDI,dword ptr [EBP + 0x3c]
006A9B6B  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
LAB_006a9b6e:
006A9B6E  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006A9B71  3B C1                     CMP EAX,ECX
006A9B73  7F 26                     JG 0x006a9b9b
006A9B75  8B D8                     MOV EBX,EAX
006A9B77  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
006A9B7A  2B C3                     SUB EAX,EBX
006A9B7C  2B F2                     SUB ESI,EDX
006A9B7E  8D 0C 5A                  LEA ECX,[EDX + EBX*0x2]
006A9B81  40                        INC EAX
LAB_006a9b82:
006A9B82  66 83 39 00               CMP word ptr [ECX],0x0
006A9B86  75 07                     JNZ 0x006a9b8f
006A9B88  66 8B 1C 0E               MOV BX,word ptr [ESI + ECX*0x1]
006A9B8C  66 89 19                  MOV word ptr [ECX],BX
LAB_006a9b8f:
006A9B8F  83 C1 02                  ADD ECX,0x2
006A9B92  48                        DEC EAX
006A9B93  75 ED                     JNZ 0x006a9b82
006A9B95  8B 5D 98                  MOV EBX,dword ptr [EBP + -0x68]
006A9B98  8B 75 9C                  MOV ESI,dword ptr [EBP + -0x64]
LAB_006a9b9b:
006A9B9B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006A9B9E  4B                        DEC EBX
006A9B9F  89 5D 98                  MOV dword ptr [EBP + -0x68],EBX
006A9BA2  8D 34 46                  LEA ESI,[ESI + EAX*0x2]
006A9BA5  8D 44 3F 01               LEA EAX,[EDI + EDI*0x1 + 0x1]
006A9BA9  89 75 9C                  MOV dword ptr [EBP + -0x64],ESI
006A9BAC  8D 14 42                  LEA EDX,[EDX + EAX*0x2]
006A9BAF  0F 85 67 FF FF FF         JNZ 0x006a9b1c
006A9BB5  8B 5D 94                  MOV EBX,dword ptr [EBP + -0x6c]
LAB_006a9bb8:
006A9BB8  8B 8D 74 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff74]
006A9BBE  8B 75 C8                  MOV ESI,dword ptr [EBP + -0x38]
006A9BC1  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
006A9BC4  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
006A9BC7  03 F1                     ADD ESI,ECX
006A9BC9  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
006A9BCC  03 D0                     ADD EDX,EAX
006A9BCE  03 C8                     ADD ECX,EAX
006A9BD0  4B                        DEC EBX
006A9BD1  89 75 C8                  MOV dword ptr [EBP + -0x38],ESI
006A9BD4  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
006A9BD7  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
006A9BDA  89 5D 94                  MOV dword ptr [EBP + -0x6c],EBX
006A9BDD  0F 85 BF FE FF FF         JNZ 0x006a9aa2
LAB_006a9be3:
006A9BE3  8B 55 38                  MOV EDX,dword ptr [EBP + 0x38]
006A9BE6  6A FF                     PUSH -0x1
006A9BE8  6A FF                     PUSH -0x1
006A9BEA  6A FF                     PUSH -0x1
006A9BEC  57                        PUSH EDI
006A9BED  57                        PUSH EDI
006A9BEE  8D 74 3F 01               LEA ESI,[EDI + EDI*0x1 + 0x1]
006A9BF2  57                        PUSH EDI
006A9BF3  56                        PUSH ESI
006A9BF4  56                        PUSH ESI
006A9BF5  56                        PUSH ESI
006A9BF6  52                        PUSH EDX
006A9BF7  E8 94 14 00 00            CALL 0x006ab090
006A9BFC  85 C0                     TEST EAX,EAX
006A9BFE  74 22                     JZ 0x006a9c22
006A9C00  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006A9C05  68 16 01 00 00            PUSH 0x116
006A9C0A  68 30 D7 7E 00            PUSH 0x7ed730
006A9C0F  50                        PUSH EAX
006A9C10  6A FE                     PUSH -0x2
006A9C12  E8 29 C2 FF FF            CALL 0x006a5e40
LAB_006a9c17:
006A9C17  5F                        POP EDI
006A9C18  5E                        POP ESI
006A9C19  33 C0                     XOR EAX,EAX
006A9C1B  5B                        POP EBX
006A9C1C  8B E5                     MOV ESP,EBP
006A9C1E  5D                        POP EBP
006A9C1F  C2 3C 00                  RET 0x3c
LAB_006a9c22:
006A9C22  8B 9D 68 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff68]
006A9C28  8B 4D 90                  MOV ECX,dword ptr [EBP + -0x70]
006A9C2B  8B C3                     MOV EAX,EBX
006A9C2D  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
006A9C30  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
006A9C33  89 5D C0                  MOV dword ptr [EBP + -0x40],EBX
006A9C36  99                        CDQ
006A9C37  33 C2                     XOR EAX,EDX
006A9C39  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006A9C3C  2B C2                     SUB EAX,EDX
006A9C3E  3B C7                     CMP EAX,EDI
006A9C40  7F 48                     JG 0x006a9c8a
006A9C42  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
006A9C45  99                        CDQ
006A9C46  33 C2                     XOR EAX,EDX
006A9C48  2B C2                     SUB EAX,EDX
006A9C4A  3B C7                     CMP EAX,EDI
006A9C4C  7F 3C                     JG 0x006a9c8a
006A9C4E  8B C1                     MOV EAX,ECX
006A9C50  99                        CDQ
006A9C51  33 C2                     XOR EAX,EDX
006A9C53  2B C2                     SUB EAX,EDX
006A9C55  3B C7                     CMP EAX,EDI
006A9C57  7F 31                     JG 0x006a9c8a
006A9C59  0F AF 4D B4               IMUL ECX,dword ptr [EBP + -0x4c]
006A9C5D  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
006A9C60  8B C3                     MOV EAX,EBX
006A9C62  0F AF D6                  IMUL EDX,ESI
006A9C65  03 C1                     ADD EAX,ECX
006A9C67  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
006A9C6A  03 D0                     ADD EDX,EAX
006A9C6C  66 83 3C 51 00            CMP word ptr [ECX + EDX*0x2],0x0
006A9C71  0F 8E E1 0A 00 00         JLE 0x006aa758
006A9C77  33 FF                     XOR EDI,EDI
006A9C79  C7 45 88 01 00 00 00      MOV dword ptr [EBP + -0x78],0x1
006A9C80  33 F6                     XOR ESI,ESI
006A9C82  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
006A9C85  E9 5C 05 00 00            JMP 0x006aa1e6
LAB_006a9c8a:
006A9C8A  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
006A9C8D  8B 7D 20                  MOV EDI,dword ptr [EBP + 0x20]
006A9C90  33 D2                     XOR EDX,EDX
006A9C92  BE 00 7D 00 00            MOV ESI,0x7d00
006A9C97  8D 04 39                  LEA EAX,[ECX + EDI*0x1]
006A9C9A  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
006A9C9D  3B C2                     CMP EAX,EDX
006A9C9F  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
006A9CA2  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
006A9CA5  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006A9CA8  89 45 90                  MOV dword ptr [EBP + -0x70],EAX
006A9CAB  8D 59 01                  LEA EBX,[ECX + 0x1]
006A9CAE  7F 02                     JG 0x006a9cb2
006A9CB0  8B D9                     MOV EBX,ECX
LAB_006a9cb2:
006A9CB2  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
006A9CB5  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006A9CB8  49                        DEC ECX
006A9CB9  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006A9CBC  8D 04 3A                  LEA EAX,[EDX + EDI*0x1]
006A9CBF  89 4D 98                  MOV dword ptr [EBP + -0x68],ECX
006A9CC2  3B C1                     CMP EAX,ECX
006A9CC4  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
006A9CC7  7D 01                     JGE 0x006a9cca
006A9CC9  4A                        DEC EDX
LAB_006a9cca:
006A9CCA  3B DA                     CMP EBX,EDX
006A9CCC  89 55 8C                  MOV dword ptr [EBP + -0x74],EDX
006A9CCF  0F 8F 23 03 00 00         JG 0x006a9ff8
006A9CD5  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006A9CD8  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006A9CDB  99                        CDQ
006A9CDC  33 C2                     XOR EAX,EDX
006A9CDE  2B C2                     SUB EAX,EDX
006A9CE0  8D 14 39                  LEA EDX,[ECX + EDI*0x1]
006A9CE3  89 85 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EAX
006A9CE9  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
006A9CEC  0F AF C1                  IMUL EAX,ECX
006A9CEF  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
006A9CF2  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
LAB_006a9cf5:
006A9CF5  8B 4D 3C                  MOV ECX,dword ptr [EBP + 0x3c]
006A9CF8  8B 85 68 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff68]
006A9CFE  3B C1                     CMP EAX,ECX
006A9D00  0F 85 9B 00 00 00         JNZ 0x006a9da1
006A9D06  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006A9D09  8D 44 09 01               LEA EAX,[ECX + ECX*0x1 + 0x1]
006A9D0D  0F AF D0                  IMUL EDX,EAX
006A9D10  8B 7D D4                  MOV EDI,dword ptr [EBP + -0x2c]
006A9D13  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
006A9D16  03 D7                     ADD EDX,EDI
006A9D18  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
006A9D1B  8B DF                     MOV EBX,EDI
006A9D1D  8D 04 50                  LEA EAX,[EAX + EDX*0x2]
006A9D20  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
006A9D23  3B FA                     CMP EDI,EDX
006A9D25  7F 7D                     JG 0x006a9da4
006A9D27  8D 0C 78                  LEA ECX,[EAX + EDI*0x2]
006A9D2A  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
LAB_006a9d2d:
006A9D2D  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
006A9D30  0F BF 3A                  MOVSX EDI,word ptr [EDX]
006A9D33  85 FF                     TEST EDI,EDI
006A9D35  7E 56                     JLE 0x006a9d8d
006A9D37  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006A9D3A  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006A9D3D  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006A9D40  50                        PUSH EAX
006A9D41  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006A9D44  51                        PUSH ECX
006A9D45  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006A9D48  52                        PUSH EDX
006A9D49  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A9D4C  50                        PUSH EAX
006A9D4D  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006A9D50  03 CA                     ADD ECX,EDX
006A9D52  51                        PUSH ECX
006A9D53  8D 0C 03                  LEA ECX,[EBX + EAX*0x1]
006A9D56  51                        PUSH ECX
006A9D57  E8 04 11 00 00            CALL 0x006aae60
006A9D5C  8D 44 38 FF               LEA EAX,[EAX + EDI*0x1 + -0x1]
006A9D60  3B C6                     CMP EAX,ESI
006A9D62  7C 15                     JL 0x006a9d79
006A9D64  75 27                     JNZ 0x006a9d8d
006A9D66  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
006A9D69  3B F9                     CMP EDI,ECX
006A9D6B  7C 0C                     JL 0x006a9d79
006A9D6D  75 1E                     JNZ 0x006a9d8d
006A9D6F  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006A9D72  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006A9D75  3B CA                     CMP ECX,EDX
006A9D77  7E 14                     JLE 0x006a9d8d
LAB_006a9d79:
006A9D79  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006A9D7C  8B F0                     MOV ESI,EAX
006A9D7E  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006A9D81  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
006A9D84  89 5D C0                  MOV dword ptr [EBP + -0x40],EBX
006A9D87  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
006A9D8A  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_006a9d8d:
006A9D8D  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
006A9D90  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
006A9D93  43                        INC EBX
006A9D94  83 C1 02                  ADD ECX,0x2
006A9D97  3B D8                     CMP EBX,EAX
006A9D99  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
006A9D9C  7E 8F                     JLE 0x006a9d2d
006A9D9E  8B 4D 3C                  MOV ECX,dword ptr [EBP + 0x3c]
LAB_006a9da1:
006A9DA1  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
LAB_006a9da4:
006A9DA4  8B C7                     MOV EAX,EDI
006A9DA6  99                        CDQ
006A9DA7  33 C2                     XOR EAX,EDX
006A9DA9  2B C2                     SUB EAX,EDX
006A9DAB  3B C1                     CMP EAX,ECX
006A9DAD  0F 85 B6 00 00 00         JNZ 0x006a9e69
006A9DB3  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006A9DB6  8B 5D D4                  MOV EBX,dword ptr [EBP + -0x2c]
006A9DB9  8D 42 01                  LEA EAX,[EDX + 0x1]
006A9DBC  89 45 80                  MOV dword ptr [EBP + -0x80],EAX
006A9DBF  8B D0                     MOV EDX,EAX
006A9DC1  8D 44 09 01               LEA EAX,[ECX + ECX*0x1 + 0x1]
006A9DC5  0F AF D0                  IMUL EDX,EAX
006A9DC8  03 D3                     ADD EDX,EBX
006A9DCA  8B 5D A8                  MOV EBX,dword ptr [EBP + -0x58]
006A9DCD  8D 14 53                  LEA EDX,[EBX + EDX*0x2]
006A9DD0  8B 5D 80                  MOV EBX,dword ptr [EBP + -0x80]
006A9DD3  3B 5D D8                  CMP EBX,dword ptr [EBP + -0x28]
006A9DD6  0F 8D 8D 00 00 00         JGE 0x006a9e69
006A9DDC  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006A9DDF  03 C0                     ADD EAX,EAX
006A9DE1  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
006A9DE4  8D 04 0B                  LEA EAX,[EBX + ECX*0x1]
006A9DE7  8D 0C 7A                  LEA ECX,[EDX + EDI*0x2]
006A9DEA  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006A9DED  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
006A9DF0  8B C1                     MOV EAX,ECX
LAB_006a9df2:
006A9DF2  0F BF 38                  MOVSX EDI,word ptr [EAX]
006A9DF5  85 FF                     TEST EDI,EDI
006A9DF7  7E 53                     JLE 0x006a9e4c
006A9DF9  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006A9DFC  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006A9DFF  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006A9E02  52                        PUSH EDX
006A9E03  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006A9E06  50                        PUSH EAX
006A9E07  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
006A9E0A  51                        PUSH ECX
006A9E0B  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006A9E0E  52                        PUSH EDX
006A9E0F  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
006A9E12  50                        PUSH EAX
006A9E13  03 D1                     ADD EDX,ECX
006A9E15  52                        PUSH EDX
006A9E16  E8 45 10 00 00            CALL 0x006aae60
006A9E1B  8D 44 38 FF               LEA EAX,[EAX + EDI*0x1 + -0x1]
006A9E1F  3B C6                     CMP EAX,ESI
006A9E21  7C 15                     JL 0x006a9e38
006A9E23  75 27                     JNZ 0x006a9e4c
006A9E25  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
006A9E28  3B F9                     CMP EDI,ECX
006A9E2A  7C 0C                     JL 0x006a9e38
006A9E2C  75 1E                     JNZ 0x006a9e4c
006A9E2E  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006A9E31  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006A9E34  3B D1                     CMP EDX,ECX
006A9E36  7E 14                     JLE 0x006a9e4c
LAB_006a9e38:
006A9E38  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
006A9E3B  8B F0                     MOV ESI,EAX
006A9E3D  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006A9E40  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
006A9E43  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
006A9E46  89 5D CC                  MOV dword ptr [EBP + -0x34],EBX
006A9E49  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_006a9e4c:
006A9E4C  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
006A9E4F  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
006A9E52  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
006A9E55  03 C1                     ADD EAX,ECX
006A9E57  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
006A9E5A  43                        INC EBX
006A9E5B  42                        INC EDX
006A9E5C  3B D9                     CMP EBX,ECX
006A9E5E  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
006A9E61  89 55 B8                  MOV dword ptr [EBP + -0x48],EDX
006A9E64  7C 8C                     JL 0x006a9df2
006A9E66  8B 4D 3C                  MOV ECX,dword ptr [EBP + 0x3c]
LAB_006a9e69:
006A9E69  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
006A9E6C  99                        CDQ
006A9E6D  33 C2                     XOR EAX,EDX
006A9E6F  2B C2                     SUB EAX,EDX
006A9E71  3B C1                     CMP EAX,ECX
006A9E73  0F 85 B5 00 00 00         JNZ 0x006a9f2e
006A9E79  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006A9E7C  8D 44 09 01               LEA EAX,[ECX + ECX*0x1 + 0x1]
006A9E80  8B 7D D4                  MOV EDI,dword ptr [EBP + -0x2c]
006A9E83  8D 5A 01                  LEA EBX,[EDX + 0x1]
006A9E86  8B D3                     MOV EDX,EBX
006A9E88  0F AF D0                  IMUL EDX,EAX
006A9E8B  03 D7                     ADD EDX,EDI
006A9E8D  8B 7D A8                  MOV EDI,dword ptr [EBP + -0x58]
006A9E90  8D 14 57                  LEA EDX,[EDI + EDX*0x2]
006A9E93  8B 7D D8                  MOV EDI,dword ptr [EBP + -0x28]
006A9E96  3B DF                     CMP EBX,EDI
006A9E98  0F 8D 90 00 00 00         JGE 0x006a9f2e
006A9E9E  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006A9EA1  03 C0                     ADD EAX,EAX
006A9EA3  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
006A9EA6  8D 04 0B                  LEA EAX,[EBX + ECX*0x1]
006A9EA9  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
006A9EAC  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006A9EAF  8D 14 4A                  LEA EDX,[EDX + ECX*0x2]
006A9EB2  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
006A9EB5  8B C2                     MOV EAX,EDX
LAB_006a9eb7:
006A9EB7  0F BF 38                  MOVSX EDI,word ptr [EAX]
006A9EBA  85 FF                     TEST EDI,EDI
006A9EBC  7E 53                     JLE 0x006a9f11
006A9EBE  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006A9EC1  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006A9EC4  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006A9EC7  50                        PUSH EAX
006A9EC8  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006A9ECB  51                        PUSH ECX
006A9ECC  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
006A9ECF  52                        PUSH EDX
006A9ED0  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006A9ED3  50                        PUSH EAX
006A9ED4  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
006A9ED7  51                        PUSH ECX
006A9ED8  03 C2                     ADD EAX,EDX
006A9EDA  50                        PUSH EAX
006A9EDB  E8 80 0F 00 00            CALL 0x006aae60
006A9EE0  8D 44 38 FF               LEA EAX,[EAX + EDI*0x1 + -0x1]
006A9EE4  3B C6                     CMP EAX,ESI
006A9EE6  7C 15                     JL 0x006a9efd
006A9EE8  75 27                     JNZ 0x006a9f11
006A9EEA  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
006A9EED  3B F9                     CMP EDI,ECX
006A9EEF  7C 0C                     JL 0x006a9efd
006A9EF1  75 1E                     JNZ 0x006a9f11
006A9EF3  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006A9EF6  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006A9EF9  3B D1                     CMP EDX,ECX
006A9EFB  7E 14                     JLE 0x006a9f11
LAB_006a9efd:
006A9EFD  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
006A9F00  8B F0                     MOV ESI,EAX
006A9F02  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006A9F05  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
006A9F08  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
006A9F0B  89 5D CC                  MOV dword ptr [EBP + -0x34],EBX
006A9F0E  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_006a9f11:
006A9F11  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
006A9F14  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
006A9F17  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
006A9F1A  03 C1                     ADD EAX,ECX
006A9F1C  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
006A9F1F  43                        INC EBX
006A9F20  42                        INC EDX
006A9F21  3B D9                     CMP EBX,ECX
006A9F23  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
006A9F26  89 55 B8                  MOV dword ptr [EBP + -0x48],EDX
006A9F29  7C 8C                     JL 0x006a9eb7
006A9F2B  8B 4D 3C                  MOV ECX,dword ptr [EBP + 0x3c]
LAB_006a9f2e:
006A9F2E  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006A9F31  99                        CDQ
006A9F32  33 C2                     XOR EAX,EDX
006A9F34  2B C2                     SUB EAX,EDX
006A9F36  3B C1                     CMP EAX,ECX
006A9F38  0F 85 96 00 00 00         JNZ 0x006a9fd4
006A9F3E  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006A9F41  8D 44 09 01               LEA EAX,[ECX + ECX*0x1 + 0x1]
006A9F45  0F AF D0                  IMUL EDX,EAX
006A9F48  8B 7D D4                  MOV EDI,dword ptr [EBP + -0x2c]
006A9F4B  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
006A9F4E  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
006A9F51  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
006A9F54  03 D7                     ADD EDX,EDI
006A9F56  3B D9                     CMP EBX,ECX
006A9F58  8D 04 50                  LEA EAX,[EAX + EDX*0x2]
006A9F5B  7F 77                     JG 0x006a9fd4
006A9F5D  8D 0C 58                  LEA ECX,[EAX + EBX*0x2]
006A9F60  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
LAB_006a9f63:
006A9F63  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
006A9F66  0F BF 3A                  MOVSX EDI,word ptr [EDX]
006A9F69  85 FF                     TEST EDI,EDI
006A9F6B  7E 56                     JLE 0x006a9fc3
006A9F6D  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006A9F70  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006A9F73  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006A9F76  50                        PUSH EAX
006A9F77  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006A9F7A  51                        PUSH ECX
006A9F7B  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
006A9F7E  52                        PUSH EDX
006A9F7F  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A9F82  50                        PUSH EAX
006A9F83  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006A9F86  03 CA                     ADD ECX,EDX
006A9F88  51                        PUSH ECX
006A9F89  8D 0C 03                  LEA ECX,[EBX + EAX*0x1]
006A9F8C  51                        PUSH ECX
006A9F8D  E8 CE 0E 00 00            CALL 0x006aae60
006A9F92  8D 44 38 FF               LEA EAX,[EAX + EDI*0x1 + -0x1]
006A9F96  3B C6                     CMP EAX,ESI
006A9F98  7C 15                     JL 0x006a9faf
006A9F9A  75 27                     JNZ 0x006a9fc3
006A9F9C  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
006A9F9F  3B F9                     CMP EDI,ECX
006A9FA1  7C 0C                     JL 0x006a9faf
006A9FA3  75 1E                     JNZ 0x006a9fc3
006A9FA5  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006A9FA8  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006A9FAB  3B CA                     CMP ECX,EDX
006A9FAD  7E 14                     JLE 0x006a9fc3
LAB_006a9faf:
006A9FAF  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006A9FB2  8B F0                     MOV ESI,EAX
006A9FB4  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006A9FB7  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
006A9FBA  89 5D C0                  MOV dword ptr [EBP + -0x40],EBX
006A9FBD  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
006A9FC0  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_006a9fc3:
006A9FC3  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
006A9FC6  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
006A9FC9  43                        INC EBX
006A9FCA  83 C1 02                  ADD ECX,0x2
006A9FCD  3B D8                     CMP EBX,EAX
006A9FCF  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
006A9FD2  7E 8F                     JLE 0x006a9f63
LAB_006a9fd4:
006A9FD4  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
006A9FD7  8B 7D D4                  MOV EDI,dword ptr [EBP + -0x2c]
006A9FDA  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006A9FDD  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
006A9FE0  03 FA                     ADD EDI,EDX
006A9FE2  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006A9FE5  40                        INC EAX
006A9FE6  42                        INC EDX
006A9FE7  3B C1                     CMP EAX,ECX
006A9FE9  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006A9FEC  89 7D D4                  MOV dword ptr [EBP + -0x2c],EDI
006A9FEF  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
006A9FF2  0F 8E FD FC FF FF         JLE 0x006a9cf5
LAB_006a9ff8:
006A9FF8  8B 45 90                  MOV EAX,dword ptr [EBP + -0x70]
006A9FFB  85 C0                     TEST EAX,EAX
006A9FFD  0F 8E DF 00 00 00         JLE 0x006aa0e2
006AA003  8B 45 3C                  MOV EAX,dword ptr [EBP + 0x3c]
006AA006  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006AA009  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
006AA00C  8B F9                     MOV EDI,ECX
006AA00E  0F AF 55 B4               IMUL EDX,dword ptr [EBP + -0x4c]
006AA012  8D 44 00 01               LEA EAX,[EAX + EAX*0x1 + 0x1]
006AA016  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
006AA019  0F AF F8                  IMUL EDI,EAX
006AA01C  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
006AA01F  03 D7                     ADD EDX,EDI
006AA021  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
006AA024  8D 04 50                  LEA EAX,[EAX + EDX*0x2]
006AA027  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006AA02A  3B CA                     CMP ECX,EDX
006AA02C  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
006AA02F  0F 8F B3 00 00 00         JG 0x006aa0e8
006AA035  8B 7D DC                  MOV EDI,dword ptr [EBP + -0x24]
LAB_006aa038:
006AA038  3B DF                     CMP EBX,EDI
006AA03A  0F 8F 80 00 00 00         JG 0x006aa0c0
006AA040  8D 0C 58                  LEA ECX,[EAX + EBX*0x2]
006AA043  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
LAB_006aa046:
006AA046  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
006AA049  0F BF 3A                  MOVSX EDI,word ptr [EDX]
006AA04C  85 FF                     TEST EDI,EDI
006AA04E  7E 56                     JLE 0x006aa0a6
006AA050  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006AA053  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006AA056  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006AA059  50                        PUSH EAX
006AA05A  8B 45 90                  MOV EAX,dword ptr [EBP + -0x70]
006AA05D  51                        PUSH ECX
006AA05E  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006AA061  52                        PUSH EDX
006AA062  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006AA065  50                        PUSH EAX
006AA066  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006AA069  03 D1                     ADD EDX,ECX
006AA06B  52                        PUSH EDX
006AA06C  8D 0C 03                  LEA ECX,[EBX + EAX*0x1]
006AA06F  51                        PUSH ECX
006AA070  E8 EB 0D 00 00            CALL 0x006aae60
006AA075  8D 44 38 FF               LEA EAX,[EAX + EDI*0x1 + -0x1]
006AA079  3B C6                     CMP EAX,ESI
006AA07B  7C 15                     JL 0x006aa092
006AA07D  75 27                     JNZ 0x006aa0a6
006AA07F  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
006AA082  3B F9                     CMP EDI,ECX
006AA084  7C 0C                     JL 0x006aa092
006AA086  75 1E                     JNZ 0x006aa0a6
006AA088  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006AA08B  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
006AA08E  3B CA                     CMP ECX,EDX
006AA090  7E 14                     JLE 0x006aa0a6
LAB_006aa092:
006AA092  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
006AA095  8B F0                     MOV ESI,EAX
006AA097  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006AA09A  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
006AA09D  89 5D C0                  MOV dword ptr [EBP + -0x40],EBX
006AA0A0  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
006AA0A3  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_006aa0a6:
006AA0A6  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
006AA0A9  8B 7D DC                  MOV EDI,dword ptr [EBP + -0x24]
006AA0AC  43                        INC EBX
006AA0AD  83 C1 02                  ADD ECX,0x2
006AA0B0  3B DF                     CMP EBX,EDI
006AA0B2  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
006AA0B5  7E 8F                     JLE 0x006aa046
006AA0B7  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006AA0BA  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
006AA0BD  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
LAB_006aa0c0:
006AA0C0  8B 55 3C                  MOV EDX,dword ptr [EBP + 0x3c]
006AA0C3  8D 54 12 01               LEA EDX,[EDX + EDX*0x1 + 0x1]
006AA0C7  8D 04 50                  LEA EAX,[EAX + EDX*0x2]
006AA0CA  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006AA0CD  42                        INC EDX
006AA0CE  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
006AA0D1  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
006AA0D4  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006AA0D7  39 55 F0                  CMP dword ptr [EBP + -0x10],EDX
006AA0DA  0F 8E 58 FF FF FF         JLE 0x006aa038
006AA0E0  EB 06                     JMP 0x006aa0e8
LAB_006aa0e2:
006AA0E2  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006AA0E5  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
LAB_006aa0e8:
006AA0E8  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
006AA0EB  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
006AA0EE  3B D0                     CMP EDX,EAX
006AA0F0  0F 8D CF 00 00 00         JGE 0x006aa1c5
006AA0F6  8B 45 3C                  MOV EAX,dword ptr [EBP + 0x3c]
006AA0F9  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
006AA0FC  0F AF 55 B4               IMUL EDX,dword ptr [EBP + -0x4c]
006AA100  8B F9                     MOV EDI,ECX
006AA102  8D 44 00 01               LEA EAX,[EAX + EAX*0x1 + 0x1]
006AA106  0F AF F8                  IMUL EDI,EAX
006AA109  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
006AA10C  03 D7                     ADD EDX,EDI
006AA10E  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
006AA111  8D 04 50                  LEA EAX,[EAX + EDX*0x2]
006AA114  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006AA117  3B CA                     CMP ECX,EDX
006AA119  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
006AA11C  0F 8F A3 00 00 00         JG 0x006aa1c5
006AA122  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
LAB_006aa125:
006AA125  3B DA                     CMP EBX,EDX
006AA127  7F 7D                     JG 0x006aa1a6
006AA129  8D 0C 58                  LEA ECX,[EAX + EBX*0x2]
006AA12C  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
LAB_006aa12f:
006AA12F  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
006AA132  0F BF 3A                  MOVSX EDI,word ptr [EDX]
006AA135  85 FF                     TEST EDI,EDI
006AA137  7E 56                     JLE 0x006aa18f
006AA139  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006AA13C  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006AA13F  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006AA142  50                        PUSH EAX
006AA143  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
006AA146  51                        PUSH ECX
006AA147  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006AA14A  52                        PUSH EDX
006AA14B  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006AA14E  50                        PUSH EAX
006AA14F  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006AA152  03 D1                     ADD EDX,ECX
006AA154  52                        PUSH EDX
006AA155  8D 0C 03                  LEA ECX,[EBX + EAX*0x1]
006AA158  51                        PUSH ECX
006AA159  E8 02 0D 00 00            CALL 0x006aae60
006AA15E  8D 44 38 FF               LEA EAX,[EAX + EDI*0x1 + -0x1]
006AA162  3B C6                     CMP EAX,ESI
006AA164  7C 15                     JL 0x006aa17b
006AA166  75 27                     JNZ 0x006aa18f
006AA168  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
006AA16B  3B F9                     CMP EDI,ECX
006AA16D  7C 0C                     JL 0x006aa17b
006AA16F  75 1E                     JNZ 0x006aa18f
006AA171  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006AA174  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
006AA177  3B CA                     CMP ECX,EDX
006AA179  7E 14                     JLE 0x006aa18f
LAB_006aa17b:
006AA17B  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
006AA17E  8B F0                     MOV ESI,EAX
006AA180  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006AA183  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
006AA186  89 5D C0                  MOV dword ptr [EBP + -0x40],EBX
006AA189  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
006AA18C  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_006aa18f:
006AA18F  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
006AA192  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
006AA195  43                        INC EBX
006AA196  83 C1 02                  ADD ECX,0x2
006AA199  3B DA                     CMP EBX,EDX
006AA19B  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
006AA19E  7E 8F                     JLE 0x006aa12f
006AA1A0  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
006AA1A3  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
LAB_006aa1a6:
006AA1A6  8B 4D 3C                  MOV ECX,dword ptr [EBP + 0x3c]
006AA1A9  8B 7D D8                  MOV EDI,dword ptr [EBP + -0x28]
006AA1AC  8D 4C 09 01               LEA ECX,[ECX + ECX*0x1 + 0x1]
006AA1B0  8D 04 48                  LEA EAX,[EAX + ECX*0x2]
006AA1B3  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006AA1B6  41                        INC ECX
006AA1B7  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
006AA1BA  3B CF                     CMP ECX,EDI
006AA1BC  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
006AA1BF  0F 8E 60 FF FF FF         JLE 0x006aa125
LAB_006aa1c5:
006AA1C5  81 FE 30 75 00 00         CMP ESI,0x7530
006AA1CB  0F 8D 87 05 00 00         JGE 0x006aa758
006AA1D1  8B 95 7C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff7c]
006AA1D7  8B B5 64 FF FF FF         MOV ESI,dword ptr [EBP + 0xffffff64]
006AA1DD  8B 7D 84                  MOV EDI,dword ptr [EBP + -0x7c]
006AA1E0  8B 5D C0                  MOV EBX,dword ptr [EBP + -0x40]
006AA1E3  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
LAB_006aa1e6:
006AA1E6  8B 45 3C                  MOV EAX,dword ptr [EBP + 0x3c]
006AA1E9  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006AA1EC  0F AF 4D B4               IMUL ECX,dword ptr [EBP + -0x4c]
006AA1F0  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
006AA1F3  8D 44 00 01               LEA EAX,[EAX + EAX*0x1 + 0x1]
006AA1F7  0F AF D0                  IMUL EDX,EAX
006AA1FA  8B C3                     MOV EAX,EBX
006AA1FC  03 C1                     ADD EAX,ECX
006AA1FE  03 D0                     ADD EDX,EAX
006AA200  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
006AA203  0F BF 0C 50               MOVSX ECX,word ptr [EAX + EDX*0x2]
006AA207  0F BF 10                  MOVSX EDX,word ptr [EAX]
006AA20A  2B CA                     SUB ECX,EDX
006AA20C  B8 56 55 55 55            MOV EAX,0x55555556
006AA211  83 C1 02                  ADD ECX,0x2
006AA214  F7 E9                     IMUL ECX
006AA216  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
006AA219  8B C2                     MOV EAX,EDX
006AA21B  C1 E8 1F                  SHR EAX,0x1f
006AA21E  03 D0                     ADD EDX,EAX
006AA220  03 CA                     ADD ECX,EDX
006AA222  8B C1                     MOV EAX,ECX
006AA224  99                        CDQ
006AA225  2B C2                     SUB EAX,EDX
006AA227  D1 F8                     SAR EAX,0x1
006AA229  03 C8                     ADD ECX,EAX
006AA22B  3B F7                     CMP ESI,EDI
006AA22D  89 4D C4                  MOV dword ptr [EBP + -0x3c],ECX
006AA230  7C 0B                     JL 0x006aa23d
006AA232  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006AA235  3B F0                     CMP ESI,EAX
006AA237  7D 0D                     JGE 0x006aa246
006AA239  8B F0                     MOV ESI,EAX
006AA23B  EB 09                     JMP 0x006aa246
LAB_006aa23d:
006AA23D  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
006AA240  3B FE                     CMP EDI,ESI
006AA242  7C 02                     JL 0x006aa246
006AA244  8B F7                     MOV ESI,EDI
LAB_006aa246:
006AA246  8B 85 6C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff6c]
006AA24C  85 C0                     TEST EAX,EAX
006AA24E  74 02                     JZ 0x006aa252
006AA250  03 F6                     ADD ESI,ESI
LAB_006aa252:
006AA252  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
006AA255  8D 44 31 08               LEA EAX,[ECX + ESI*0x1 + 0x8]
006AA259  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
006AA25C  8D 34 C0                  LEA ESI,[EAX + EAX*0x8]
006AA25F  C1 E6 03                  SHL ESI,0x3
006AA262  56                        PUSH ESI
006AA263  E8 08 0A 00 00            CALL 0x006aac70
006AA268  8B F8                     MOV EDI,EAX
006AA26A  85 FF                     TEST EDI,EDI
006AA26C  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006AA26F  0F 84 87 09 00 00         JZ 0x006aabfc
006AA275  8B CE                     MOV ECX,ESI
006AA277  83 C8 FF                  OR EAX,0xffffffff
006AA27A  8B D1                     MOV EDX,ECX
006AA27C  8B 75 3C                  MOV ESI,dword ptr [EBP + 0x3c]
006AA27F  C1 E9 02                  SHR ECX,0x2
006AA282  F3 AB                     STOSD.REP ES:EDI
006AA284  8B CA                     MOV ECX,EDX
006AA286  03 DE                     ADD EBX,ESI
006AA288  83 E1 03                  AND ECX,0x3
006AA28B  F3 AA                     STOSB.REP ES:EDI
006AA28D  8B 45 40                  MOV EAX,dword ptr [EBP + 0x40]
006AA290  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
006AA293  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006AA296  50                        PUSH EAX
006AA297  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006AA29A  51                        PUSH ECX
006AA29B  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
006AA29E  03 C6                     ADD EAX,ESI
006AA2A0  52                        PUSH EDX
006AA2A1  03 CE                     ADD ECX,ESI
006AA2A3  8B 55 38                  MOV EDX,dword ptr [EBP + 0x38]
006AA2A6  50                        PUSH EAX
006AA2A7  51                        PUSH ECX
006AA2A8  53                        PUSH EBX
006AA2A9  56                        PUSH ESI
006AA2AA  56                        PUSH ESI
006AA2AB  8D 44 36 01               LEA EAX,[ESI + ESI*0x1 + 0x1]
006AA2AF  56                        PUSH ESI
006AA2B0  50                        PUSH EAX
006AA2B1  50                        PUSH EAX
006AA2B2  50                        PUSH EAX
006AA2B3  52                        PUSH EDX
006AA2B4  E8 97 DA FF FF            CALL 0x006a7d50
006AA2B9  85 C0                     TEST EAX,EAX
006AA2BB  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006AA2BE  7C 33                     JL 0x006aa2f3
006AA2C0  8B 7D 20                  MOV EDI,dword ptr [EBP + 0x20]
006AA2C3  33 C9                     XOR ECX,ECX
006AA2C5  8D 50 01                  LEA EDX,[EAX + 0x1]
LAB_006aa2c8:
006AA2C8  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006AA2CB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006AA2CE  2B DE                     SUB EBX,ESI
006AA2D0  66 01 1C 01               ADD word ptr [ECX + EAX*0x1],BX
006AA2D4  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006AA2D7  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006AA2DA  2B DE                     SUB EBX,ESI
006AA2DC  66 01 5C 01 02            ADD word ptr [ECX + EAX*0x1 + 0x2],BX
006AA2E1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006AA2E4  8B DF                     MOV EBX,EDI
006AA2E6  83 C1 48                  ADD ECX,0x48
006AA2E9  2B DE                     SUB EBX,ESI
006AA2EB  66 01 5C 01 BC            ADD word ptr [ECX + EAX*0x1 + -0x44],BX
006AA2F0  4A                        DEC EDX
006AA2F1  75 D5                     JNZ 0x006aa2c8
LAB_006aa2f3:
006AA2F3  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006AA2F6  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
006AA2F9  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006AA2FC  C7 45 B0 00 00 00 00      MOV dword ptr [EBP + -0x50],0x0
006AA303  8D 34 01                  LEA ESI,[ECX + EAX*0x1]
006AA306  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
006AA309  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006AA30C  8D 1C 10                  LEA EBX,[EAX + EDX*0x1]
006AA30F  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006AA312  8B 45 88                  MOV EAX,dword ptr [EBP + -0x78]
006AA315  03 CA                     ADD ECX,EDX
006AA317  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006AA31A  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006AA31D  41                        INC ECX
006AA31E  85 C0                     TEST EAX,EAX
006AA320  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
006AA323  0F 85 2F 04 00 00         JNZ 0x006aa758
LAB_006aa329:
006AA329  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
006AA32C  85 C0                     TEST EAX,EAX
006AA32E  7F 4A                     JG 0x006aa37a
006AA330  8B 85 6C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff6c]
006AA336  85 C0                     TEST EAX,EAX
006AA338  74 20                     JZ 0x006aa35a
006AA33A  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
006AA33D  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006AA340  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
006AA343  8D 45 B0                  LEA EAX,[EBP + -0x50]
006AA346  50                        PUSH EAX
006AA347  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006AA34A  51                        PUSH ECX
006AA34B  52                        PUSH EDX
006AA34C  50                        PUSH EAX
006AA34D  57                        PUSH EDI
006AA34E  53                        PUSH EBX
006AA34F  56                        PUSH ESI
006AA350  E8 AB BD FF FF            CALL 0x006a6100
006AA355  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
006AA358  EB 26                     JMP 0x006aa380
LAB_006aa35a:
006AA35A  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006AA35D  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006AA360  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
006AA363  8D 4D B0                  LEA ECX,[EBP + -0x50]
006AA366  51                        PUSH ECX
006AA367  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006AA36A  52                        PUSH EDX
006AA36B  50                        PUSH EAX
006AA36C  51                        PUSH ECX
006AA36D  57                        PUSH EDI
006AA36E  53                        PUSH EBX
006AA36F  56                        PUSH ESI
006AA370  E8 AB BB FF FF            CALL 0x006a5f20
006AA375  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
006AA378  EB 06                     JMP 0x006aa380
LAB_006aa37a:
006AA37A  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
006AA37D  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
LAB_006aa380:
006AA380  83 F8 1A                  CMP EAX,0x1a
006AA383  0F 8D 9C 03 00 00         JGE 0x006aa725
006AA389  8B 8D 70 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff70]
006AA38F  85 C9                     TEST ECX,ECX
006AA391  7C 2B                     JL 0x006aa3be
006AA393  3B C8                     CMP ECX,EAX
006AA395  74 27                     JZ 0x006aa3be
006AA397  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
006AA39A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006AA39D  8D 0C D2                  LEA ECX,[EDX + EDX*0x8]
006AA3A0  C1 E1 03                  SHL ECX,0x3
006AA3A3  42                        INC EDX
006AA3A4  66 89 34 01               MOV word ptr [ECX + EAX*0x1],SI
006AA3A8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006AA3AB  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
006AA3AE  66 89 5C 01 02            MOV word ptr [ECX + EAX*0x1 + 0x2],BX
006AA3B3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006AA3B6  66 89 7C 01 04            MOV word ptr [ECX + EAX*0x1 + 0x4],DI
006AA3BB  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
LAB_006aa3be:
006AA3BE  0F BF 0C C5 70 D5 7E 00   MOVSX ECX,word ptr [EAX*0x8 + 0x7ed570]
006AA3C6  0F BF 14 C5 72 D5 7E 00   MOVSX EDX,word ptr [EAX*0x8 + 0x7ed572]
006AA3CE  89 85 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EAX
006AA3D4  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006AA3D7  0F BF 04 C5 74 D5 7E 00   MOVSX EAX,word ptr [EAX*0x8 + 0x7ed574]
006AA3DF  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006AA3E2  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
006AA3E5  48                        DEC EAX
006AA3E6  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
006AA3E9  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
006AA3EC  0F 88 08 03 00 00         JS 0x006aa6fa
006AA3F2  8B C7                     MOV EAX,EDI
006AA3F4  8B CB                     MOV ECX,EBX
006AA3F6  0F AF 45 BC               IMUL EAX,dword ptr [EBP + -0x44]
006AA3FA  0F AF 4D 0C               IMUL ECX,dword ptr [EBP + 0xc]
006AA3FE  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006AA401  8D 14 01                  LEA EDX,[ECX + EAX*0x1]
006AA404  03 D6                     ADD EDX,ESI
006AA406  89 4D 3C                  MOV dword ptr [EBP + 0x3c],ECX
006AA409  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
006AA40C  89 45 20                  MOV dword ptr [EBP + 0x20],EAX
006AA40F  8D 14 57                  LEA EDX,[EDI + EDX*0x2]
006AA412  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
006AA415  89 55 AC                  MOV dword ptr [EBP + -0x54],EDX
006AA418  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
006AA41B  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006AA41E  0F AF 4D 0C               IMUL ECX,dword ptr [EBP + 0xc]
006AA422  8D 14 D2                  LEA EDX,[EDX + EDX*0x8]
006AA425  8D 3C FF                  LEA EDI,[EDI + EDI*0x8]
006AA428  C1 E2 03                  SHL EDX,0x3
006AA42B  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
006AA42E  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
006AA431  C1 E7 03                  SHL EDI,0x3
006AA434  42                        INC EDX
006AA435  0F AF 45 BC               IMUL EAX,dword ptr [EBP + -0x44]
006AA439  89 7D 38                  MOV dword ptr [EBP + 0x38],EDI
006AA43C  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
006AA43F  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
006AA442  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
006AA445  EB 03                     JMP 0x006aa44a
LAB_006aa447:
006AA447  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
LAB_006aa44a:
006AA44A  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006AA44D  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
006AA450  03 F2                     ADD ESI,EDX
006AA452  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
006AA455  03 DA                     ADD EBX,EDX
006AA457  8B 55 3C                  MOV EDX,dword ptr [EBP + 0x3c]
006AA45A  03 D1                     ADD EDX,ECX
006AA45C  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
006AA45F  89 55 3C                  MOV dword ptr [EBP + 0x3c],EDX
006AA462  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006AA465  03 D1                     ADD EDX,ECX
006AA467  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006AA46A  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006AA46D  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
006AA470  03 CA                     ADD ECX,EDX
006AA472  8B 55 3C                  MOV EDX,dword ptr [EBP + 0x3c]
006AA475  89 4D 20                  MOV dword ptr [EBP + 0x20],ECX
006AA478  03 CA                     ADD ECX,EDX
006AA47A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006AA47D  03 CE                     ADD ECX,ESI
006AA47F  66 83 3C 4A 00            CMP word ptr [EDX + ECX*0x2],0x0
006AA484  8D 0C 4A                  LEA ECX,[EDX + ECX*0x2]
006AA487  89 4D AC                  MOV dword ptr [EBP + -0x54],ECX
006AA48A  0F 8C 76 02 00 00         JL 0x006aa706
006AA490  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
006AA493  66 8B 0C CD 76 D5 7E 00   MOV CX,word ptr [ECX*0x8 + 0x7ed576]
006AA49B  F6 C1 01                  TEST CL,0x1
006AA49E  89 4D A0                  MOV dword ptr [EBP + -0x60],ECX
006AA4A1  0F 84 34 01 00 00         JZ 0x006aa5db
006AA4A7  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006AA4AA  66 8B 14 50               MOV DX,word ptr [EAX + EDX*0x2]
006AA4AE  81 E2 00 C0 00 00         AND EDX,0xc000
006AA4B4  81 FA 00 C0 00 00         CMP EDX,0xc000
006AA4BA  0F 84 5A 02 00 00         JZ 0x006aa71a
006AA4C0  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006AA4C3  66 8B 14 50               MOV DX,word ptr [EAX + EDX*0x2]
006AA4C7  81 E2 00 C0 00 00         AND EDX,0xc000
006AA4CD  81 FA 00 C0 00 00         CMP EDX,0xc000
006AA4D3  0F 84 41 02 00 00         JZ 0x006aa71a
006AA4D9  8B D1                     MOV EDX,ECX
006AA4DB  81 E2 00 40 00 00         AND EDX,0x4000
006AA4E1  66 85 D2                  TEST DX,DX
006AA4E4  74 79                     JZ 0x006aa55f
006AA4E6  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
006AA4E9  8D 14 09                  LEA EDX,[ECX + ECX*0x1]
006AA4EC  8B C8                     MOV ECX,EAX
006AA4EE  2B CA                     SUB ECX,EDX
006AA4F0  66 8B 11                  MOV DX,word ptr [ECX]
006AA4F3  81 E2 00 C0 00 00         AND EDX,0xc000
006AA4F9  81 FA 00 C0 00 00         CMP EDX,0xc000
006AA4FF  0F 84 15 02 00 00         JZ 0x006aa71a
006AA505  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006AA508  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
006AA50B  2B D1                     SUB EDX,ECX
006AA50D  66 8B 14 50               MOV DX,word ptr [EAX + EDX*0x2]
006AA511  81 E2 00 C0 00 00         AND EDX,0xc000
006AA517  81 FA 00 C0 00 00         CMP EDX,0xc000
006AA51D  0F 84 F7 01 00 00         JZ 0x006aa71a
006AA523  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006AA526  2B D1                     SUB EDX,ECX
006AA528  66 8B 0C 50               MOV CX,word ptr [EAX + EDX*0x2]
006AA52C  81 E1 00 C0 00 00         AND ECX,0xc000
006AA532  81 F9 00 C0 00 00         CMP ECX,0xc000
006AA538  0F 84 DC 01 00 00         JZ 0x006aa71a
006AA53E  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006AA541  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006AA544  03 D1                     ADD EDX,ECX
006AA546  66 8B 14 50               MOV DX,word ptr [EAX + EDX*0x2]
006AA54A  81 E2 00 C0 00 00         AND EDX,0xc000
006AA550  81 FA 00 C0 00 00         CMP EDX,0xc000
006AA556  0F 84 BE 01 00 00         JZ 0x006aa71a
006AA55C  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
LAB_006aa55f:
006AA55F  81 E1 00 20 00 00         AND ECX,0x2000
006AA565  66 85 C9                  TEST CX,CX
006AA568  0F 84 D8 00 00 00         JZ 0x006aa646
006AA56E  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
006AA571  66 8B 14 48               MOV DX,word ptr [EAX + ECX*0x2]
006AA575  81 E2 00 C0 00 00         AND EDX,0xc000
006AA57B  81 FA 00 C0 00 00         CMP EDX,0xc000
006AA581  0F 84 93 01 00 00         JZ 0x006aa71a
006AA587  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006AA58A  03 D1                     ADD EDX,ECX
006AA58C  66 8B 0C 50               MOV CX,word ptr [EAX + EDX*0x2]
006AA590  81 E1 00 C0 00 00         AND ECX,0xc000
006AA596  81 F9 00 C0 00 00         CMP ECX,0xc000
006AA59C  0F 84 78 01 00 00         JZ 0x006aa71a
006AA5A2  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006AA5A5  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
006AA5A8  03 D1                     ADD EDX,ECX
006AA5AA  66 8B 14 50               MOV DX,word ptr [EAX + EDX*0x2]
006AA5AE  81 E2 00 C0 00 00         AND EDX,0xc000
006AA5B4  81 FA 00 C0 00 00         CMP EDX,0xc000
006AA5BA  0F 84 5A 01 00 00         JZ 0x006aa71a
006AA5C0  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006AA5C3  03 CA                     ADD ECX,EDX
006AA5C5  66 8B 04 48               MOV AX,word ptr [EAX + ECX*0x2]
006AA5C9  25 00 C0 00 00            AND EAX,0xc000
006AA5CE  3D 00 C0 00 00            CMP EAX,0xc000
006AA5D3  0F 84 41 01 00 00         JZ 0x006aa71a
006AA5D9  EB 6B                     JMP 0x006aa646
LAB_006aa5db:
006AA5DB  8B D1                     MOV EDX,ECX
006AA5DD  81 E2 00 60 00 00         AND EDX,0x6000
006AA5E3  66 85 D2                  TEST DX,DX
006AA5E6  74 5E                     JZ 0x006aa646
006AA5E8  80 E5 9F                  AND CH,0x9f
006AA5EB  66 81 F9 FE 0F            CMP CX,0xffe
006AA5F0  74 54                     JZ 0x006aa646
006AA5F2  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
006AA5F5  66 8B 14 48               MOV DX,word ptr [EAX + ECX*0x2]
006AA5F9  81 E2 00 C0 00 00         AND EDX,0xc000
006AA5FF  81 FA 00 C0 00 00         CMP EDX,0xc000
006AA605  0F 84 0F 01 00 00         JZ 0x006aa71a
006AA60B  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
006AA60E  85 C9                     TEST ECX,ECX
006AA610  75 1B                     JNZ 0x006aa62d
006AA612  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006AA615  66 8B 14 48               MOV DX,word ptr [EAX + ECX*0x2]
006AA619  81 E2 00 C0 00 00         AND EDX,0xc000
006AA61F  81 FA 00 C0 00 00         CMP EDX,0xc000
006AA625  0F 84 EF 00 00 00         JZ 0x006aa71a
006AA62B  EB 19                     JMP 0x006aa646
LAB_006aa62d:
006AA62D  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006AA630  66 8B 14 48               MOV DX,word ptr [EAX + ECX*0x2]
006AA634  81 E2 00 C0 00 00         AND EDX,0xc000
006AA63A  81 FA 00 C0 00 00         CMP EDX,0xc000
006AA640  0F 84 D4 00 00 00         JZ 0x006aa71a
LAB_006aa646:
006AA646  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
006AA649  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006AA64C  3B C8                     CMP ECX,EAX
006AA64E  7C 44                     JL 0x006aa694
006AA650  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006AA653  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006AA656  81 C1 D0 02 00 00         ADD ECX,0x2d0
006AA65C  51                        PUSH ECX
006AA65D  52                        PUSH EDX
006AA65E  E8 ED 28 00 00            CALL 0x006acf50
006AA663  8B F8                     MOV EDI,EAX
006AA665  85 FF                     TEST EDI,EDI
006AA667  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006AA66A  0F 84 8C 05 00 00         JZ 0x006aabfc
006AA670  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006AA673  B9 B4 00 00 00            MOV ECX,0xb4
006AA678  83 C8 FF                  OR EAX,0xffffffff
006AA67B  03 FA                     ADD EDI,EDX
006AA67D  F3 AB                     STOSD.REP ES:EDI
006AA67F  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
006AA682  8B 7D 38                  MOV EDI,dword ptr [EBP + 0x38]
006AA685  83 C1 0A                  ADD ECX,0xa
006AA688  81 C2 D0 02 00 00         ADD EDX,0x2d0
006AA68E  89 4D C4                  MOV dword ptr [EBP + -0x3c],ECX
006AA691  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
LAB_006aa694:
006AA694  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006AA697  83 C7 48                  ADD EDI,0x48
006AA69A  89 7D 38                  MOV dword ptr [EBP + 0x38],EDI
006AA69D  66 89 74 07 B8            MOV word ptr [EDI + EAX*0x1 + -0x48],SI
006AA6A2  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006AA6A5  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006AA6A8  66 89 5C 0F BA            MOV word ptr [EDI + ECX*0x1 + -0x46],BX
006AA6AD  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006AA6B0  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006AA6B3  66 89 44 17 BC            MOV word ptr [EDI + EDX*0x1 + -0x44],AX
006AA6B8  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006AA6BB  41                        INC ECX
006AA6BC  42                        INC EDX
006AA6BD  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
006AA6C0  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
006AA6C3  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
006AA6C6  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006AA6C9  51                        PUSH ECX
006AA6CA  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006AA6CD  52                        PUSH EDX
006AA6CE  51                        PUSH ECX
006AA6CF  50                        PUSH EAX
006AA6D0  53                        PUSH EBX
006AA6D1  56                        PUSH ESI
006AA6D2  E8 F9 06 00 00            CALL 0x006aadd0
006AA6D7  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
006AA6DA  33 D2                     XOR EDX,EDX
006AA6DC  3B C1                     CMP EAX,ECX
006AA6DE  0F 9E C2                  SETLE DL
006AA6E1  8B C2                     MOV EAX,EDX
006AA6E3  83 F8 01                  CMP EAX,0x1
006AA6E6  89 45 88                  MOV dword ptr [EBP + -0x78],EAX
006AA6E9  74 12                     JZ 0x006aa6fd
006AA6EB  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
006AA6EE  49                        DEC ECX
006AA6EF  89 4D B0                  MOV dword ptr [EBP + -0x50],ECX
006AA6F2  0F 89 4F FD FF FF         JNS 0x006aa447
006AA6F8  EB 03                     JMP 0x006aa6fd
LAB_006aa6fa:
006AA6FA  8B 45 88                  MOV EAX,dword ptr [EBP + -0x78]
LAB_006aa6fd:
006AA6FD  85 C0                     TEST EAX,EAX
006AA6FF  75 57                     JNZ 0x006aa758
006AA701  E9 23 FC FF FF            JMP 0x006aa329
LAB_006aa706:
006AA706  3B 75 24                  CMP ESI,dword ptr [EBP + 0x24]
006AA709  75 0F                     JNZ 0x006aa71a
006AA70B  3B 5D 28                  CMP EBX,dword ptr [EBP + 0x28]
006AA70E  75 0A                     JNZ 0x006aa71a
006AA710  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006AA713  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006AA716  3B C8                     CMP ECX,EAX
006AA718  74 3E                     JZ 0x006aa758
LAB_006aa71a:
006AA71A  8D 55 FC                  LEA EDX,[EBP + -0x4]
006AA71D  52                        PUSH EDX
006AA71E  E8 3D 09 00 00            CALL 0x006ab060
006AA723  EB 33                     JMP 0x006aa758
LAB_006aa725:
006AA725  8D 4D FC                  LEA ECX,[EBP + -0x4]
006AA728  51                        PUSH ECX
006AA729  E8 32 09 00 00            CALL 0x006ab060
006AA72E  EB 28                     JMP 0x006aa758
LAB_006aa730:
006AA730  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006AA733  66 8B 4D 18               MOV CX,word ptr [EBP + 0x18]
006AA737  C7 45 E8 02 00 00 00      MOV dword ptr [EBP + -0x18],0x2
006AA73E  66 89 48 48               MOV word ptr [EAX + 0x48],CX
006AA742  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006AA745  66 8B 45 1C               MOV AX,word ptr [EBP + 0x1c]
006AA749  66 89 42 4A               MOV word ptr [EDX + 0x4a],AX
006AA74D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006AA750  66 8B 55 20               MOV DX,word ptr [EBP + 0x20]
006AA754  66 89 51 4C               MOV word ptr [ECX + 0x4c],DX
LAB_006aa758:
006AA758  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
006AA75B  85 FF                     TEST EDI,EDI
006AA75D  0F 84 99 04 00 00         JZ 0x006aabfc
006AA763  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006AA766  83 F8 01                  CMP EAX,0x1
006AA769  75 25                     JNZ 0x006aa790
006AA76B  66 8B 07                  MOV AX,word ptr [EDI]
006AA76E  66 89 47 48               MOV word ptr [EDI + 0x48],AX
006AA772  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006AA775  66 8B 48 02               MOV CX,word ptr [EAX + 0x2]
006AA779  66 89 48 4A               MOV word ptr [EAX + 0x4a],CX
006AA77D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006AA780  66 8B 50 04               MOV DX,word ptr [EAX + 0x4]
006AA784  66 89 50 4C               MOV word ptr [EAX + 0x4c],DX
006AA788  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
006AA78B  B8 02 00 00 00            MOV EAX,0x2
LAB_006aa790:
006AA790  48                        DEC EAX
006AA791  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006AA794  8B 45 30                  MOV EAX,dword ptr [EBP + 0x30]
006AA797  85 C0                     TEST EAX,EAX
006AA799  7E 4C                     JLE 0x006aa7e7
006AA79B  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006AA79E  83 F8 01                  CMP EAX,0x1
006AA7A1  7E 44                     JLE 0x006aa7e7
006AA7A3  8D 34 C0                  LEA ESI,[EAX + EAX*0x8]
006AA7A6  8B D8                     MOV EBX,EAX
006AA7A8  C1 E6 03                  SHL ESI,0x3
006AA7AB  EB 03                     JMP 0x006aa7b0
LAB_006aa7ad:
006AA7AD  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_006aa7b0:
006AA7B0  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006AA7B3  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006AA7B6  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006AA7B9  50                        PUSH EAX
006AA7BA  0F BF 44 3E BC            MOVSX EAX,word ptr [ESI + EDI*0x1 + -0x44]
006AA7BF  51                        PUSH ECX
006AA7C0  52                        PUSH EDX
006AA7C1  0F BF 4C 3E BA            MOVSX ECX,word ptr [ESI + EDI*0x1 + -0x46]
006AA7C6  0F BF 54 3E B8            MOVSX EDX,word ptr [ESI + EDI*0x1 + -0x48]
006AA7CB  50                        PUSH EAX
006AA7CC  51                        PUSH ECX
006AA7CD  52                        PUSH EDX
006AA7CE  E8 FD 05 00 00            CALL 0x006aadd0
006AA7D3  3B 45 30                  CMP EAX,dword ptr [EBP + 0x30]
006AA7D6  7F 0C                     JG 0x006aa7e4
006AA7D8  4B                        DEC EBX
006AA7D9  83 EE 48                  SUB ESI,0x48
006AA7DC  83 FB 01                  CMP EBX,0x1
006AA7DF  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
006AA7E2  7F C9                     JG 0x006aa7ad
LAB_006aa7e4:
006AA7E4  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_006aa7e7:
006AA7E7  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006AA7EA  33 DB                     XOR EBX,EBX
006AA7EC  8D 04 C9                  LEA EAX,[ECX + ECX*0x8]
006AA7EF  8D 71 01                  LEA ESI,[ECX + 0x1]
006AA7F2  49                        DEC ECX
006AA7F3  89 75 C4                  MOV dword ptr [EBP + -0x3c],ESI
006AA7F6  66 89 5C C7 06            MOV word ptr [EDI + EAX*0x8 + 0x6],BX
006AA7FB  78 60                     JS 0x006aa85d
006AA7FD  8D 04 C9                  LEA EAX,[ECX + ECX*0x8]
006AA800  C1 E0 03                  SHL EAX,0x3
006AA803  41                        INC ECX
006AA804  89 4D 3C                  MOV dword ptr [EBP + 0x3c],ECX
LAB_006aa807:
006AA807  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006AA80A  0F BF 54 08 4C            MOVSX EDX,word ptr [EAX + ECX*0x1 + 0x4c]
006AA80F  0F BF 7C 08 04            MOVSX EDI,word ptr [EAX + ECX*0x1 + 0x4]
006AA814  2B D7                     SUB EDX,EDI
006AA816  0F BF 7C 08 02            MOVSX EDI,word ptr [EAX + ECX*0x1 + 0x2]
006AA81B  8D 14 52                  LEA EDX,[EDX + EDX*0x2]
006AA81E  2B D7                     SUB EDX,EDI
006AA820  0F BF 7C 08 4A            MOVSX EDI,word ptr [EAX + ECX*0x1 + 0x4a]
006AA825  03 D7                     ADD EDX,EDI
006AA827  0F BF 7C 08 48            MOVSX EDI,word ptr [EAX + ECX*0x1 + 0x48]
006AA82C  8D 14 52                  LEA EDX,[EDX + EDX*0x2]
006AA82F  03 D7                     ADD EDX,EDI
006AA831  0F BF 3C 08               MOVSX EDI,word ptr [EAX + ECX*0x1]
006AA835  2B D7                     SUB EDX,EDI
006AA837  8B 3D 6C D5 7E 00         MOV EDI,dword ptr [0x007ed56c]
006AA83D  8B 14 97                  MOV EDX,dword ptr [EDI + EDX*0x4]
006AA840  83 FA 1A                  CMP EDX,0x1a
006AA843  7D 07                     JGE 0x006aa84c
006AA845  03 1C 95 40 D6 7E 00      ADD EBX,dword ptr [EDX*0x4 + 0x7ed640]
LAB_006aa84c:
006AA84C  66 89 5C 08 06            MOV word ptr [EAX + ECX*0x1 + 0x6],BX
006AA851  8B 4D 3C                  MOV ECX,dword ptr [EBP + 0x3c]
006AA854  83 E8 48                  SUB EAX,0x48
006AA857  49                        DEC ECX
006AA858  89 4D 3C                  MOV dword ptr [EBP + 0x3c],ECX
006AA85B  75 AA                     JNZ 0x006aa807
LAB_006aa85d:
006AA85D  F6 45 40 01               TEST byte ptr [EBP + 0x40],0x1
006AA861  0F 84 92 03 00 00         JZ 0x006aabf9
006AA867  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
006AA86A  8D 04 F6                  LEA EAX,[ESI + ESI*0x8]
006AA86D  C1 E0 03                  SHL EAX,0x3
006AA870  0F BF 4C 38 BA            MOVSX ECX,word ptr [EAX + EDI*0x1 + -0x46]
006AA875  0F BF 9C 38 74 FF FF FF   MOVSX EBX,word ptr [EAX + EDI*0x1 + 0xffffff74]
006AA87D  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
006AA880  0F BF 4C 38 BC            MOVSX ECX,word ptr [EAX + EDI*0x1 + -0x44]
006AA885  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006AA888  2B CB                     SUB ECX,EBX
006AA88A  0F BF 9C 38 72 FF FF FF   MOVSX EBX,word ptr [EAX + EDI*0x1 + 0xffffff72]
006AA892  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
006AA895  2B CB                     SUB ECX,EBX
006AA897  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
006AA89A  0F BF 54 38 B8            MOVSX EDX,word ptr [EAX + EDI*0x1 + -0x48]
006AA89F  03 CB                     ADD ECX,EBX
006AA8A1  8D 5C F6 EE               LEA EBX,[ESI + ESI*0x8 + -0x12]
006AA8A5  0F BF 1C DF               MOVSX EBX,word ptr [EDI + EBX*0x8]
006AA8A9  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
006AA8AC  2B CB                     SUB ECX,EBX
006AA8AE  8B 1D 6C D5 7E 00         MOV EBX,dword ptr [0x007ed56c]
006AA8B4  03 CA                     ADD ECX,EDX
006AA8B6  83 3C 8B 05               CMP dword ptr [EBX + ECX*0x4],0x5
006AA8BA  7E 37                     JLE 0x006aa8f3
006AA8BC  66 8B 4D F0               MOV CX,word ptr [EBP + -0x10]
006AA8C0  66 89 14 38               MOV word ptr [EAX + EDI*0x1],DX
006AA8C4  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006AA8C7  46                        INC ESI
006AA8C8  89 75 C4                  MOV dword ptr [EBP + -0x3c],ESI
006AA8CB  66 89 4C 10 02            MOV word ptr [EAX + EDX*0x1 + 0x2],CX
006AA8D0  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006AA8D3  66 8B 4D F8               MOV CX,word ptr [EBP + -0x8]
006AA8D7  66 89 4C 10 04            MOV word ptr [EAX + EDX*0x1 + 0x4],CX
006AA8DC  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006AA8DF  66 C7 44 10 06 00 00      MOV word ptr [EAX + EDX*0x1 + 0x6],0x0
006AA8E6  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006AA8E9  66 C7 44 08 0E FF 7F      MOV word ptr [EAX + ECX*0x1 + 0xe],0x7fff
006AA8F0  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_006aa8f3:
006AA8F3  8D 46 FF                  LEA EAX,[ESI + -0x1]
006AA8F6  C7 45 E8 01 00 00 00      MOV dword ptr [EBP + -0x18],0x1
006AA8FD  83 F8 01                  CMP EAX,0x1
006AA900  0F 8E F6 02 00 00         JLE 0x006aabfc
006AA906  BB 48 00 00 00            MOV EBX,0x48
006AA90B  C7 45 38 09 00 00 00      MOV dword ptr [EBP + 0x38],0x9
006AA912  89 5D 3C                  MOV dword ptr [EBP + 0x3c],EBX
LAB_006aa915:
006AA915  0F BF 54 3B 02            MOVSX EDX,word ptr [EBX + EDI*0x1 + 0x2]
006AA91A  0F BF 04 3B               MOVSX EAX,word ptr [EBX + EDI*0x1]
006AA91E  0F BF 4C 3B 04            MOVSX ECX,word ptr [EBX + EDI*0x1 + 0x4]
006AA923  0F BF 74 3B BA            MOVSX ESI,word ptr [EBX + EDI*0x1 + -0x46]
006AA928  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
006AA92B  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006AA92E  0F BF 54 3B B8            MOVSX EDX,word ptr [EBX + EDI*0x1 + -0x48]
006AA933  3B D0                     CMP EDX,EAX
006AA935  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006AA938  75 20                     JNZ 0x006aa95a
006AA93A  3B 75 F0                  CMP ESI,dword ptr [EBP + -0x10]
006AA93D  75 1B                     JNZ 0x006aa95a
006AA93F  0F BF 54 3B BC            MOVSX EDX,word ptr [EBX + EDI*0x1 + -0x44]
006AA944  3B D1                     CMP EDX,ECX
006AA946  75 12                     JNZ 0x006aa95a
006AA948  81 FB 90 00 00 00         CMP EBX,0x90
006AA94E  7C 0A                     JL 0x006aa95a
006AA950  0F BF 94 3B 76 FF FF FF   MOVSX EDX,word ptr [EBX + EDI*0x1 + 0xffffff76]
006AA958  EB 05                     JMP 0x006aa95f
LAB_006aa95a:
006AA95A  0F BF 54 3B BE            MOVSX EDX,word ptr [EBX + EDI*0x1 + -0x42]
LAB_006aa95f:
006AA95F  0F BF 74 3B 4A            MOVSX ESI,word ptr [EBX + EDI*0x1 + 0x4a]
006AA964  89 75 24                  MOV dword ptr [EBP + 0x24],ESI
006AA967  89 95 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EDX
006AA96D  0F BF 74 3B 4C            MOVSX ESI,word ptr [EBX + EDI*0x1 + 0x4c]
006AA972  0F BF 54 3B 48            MOVSX EDX,word ptr [EBX + EDI*0x1 + 0x48]
006AA977  89 75 18                  MOV dword ptr [EBP + 0x18],ESI
006AA97A  3B D0                     CMP EDX,EAX
006AA97C  0F BF 74 3B 4E            MOVSX ESI,word ptr [EBX + EDI*0x1 + 0x4e]
006AA981  89 55 30                  MOV dword ptr [EBP + 0x30],EDX
006AA984  89 75 40                  MOV dword ptr [EBP + 0x40],ESI
006AA987  75 48                     JNZ 0x006aa9d1
006AA989  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006AA98C  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
006AA98F  3B F0                     CMP ESI,EAX
006AA991  75 3E                     JNZ 0x006aa9d1
006AA993  39 4D 18                  CMP dword ptr [EBP + 0x18],ECX
006AA996  75 39                     JNZ 0x006aa9d1
006AA998  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
006AA99B  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
006AA99E  83 C0 FE                  ADD EAX,-0x2
006AA9A1  3B F0                     CMP ESI,EAX
006AA9A3  7D 2C                     JGE 0x006aa9d1
006AA9A5  0F BF 84 3B 92 00 00 00   MOVSX EAX,word ptr [EBX + EDI*0x1 + 0x92]
006AA9AD  0F BF 94 3B 90 00 00 00   MOVSX EDX,word ptr [EBX + EDI*0x1 + 0x90]
006AA9B5  89 45 24                  MOV dword ptr [EBP + 0x24],EAX
006AA9B8  89 55 30                  MOV dword ptr [EBP + 0x30],EDX
006AA9BB  0F BF 84 3B 94 00 00 00   MOVSX EAX,word ptr [EBX + EDI*0x1 + 0x94]
006AA9C3  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
006AA9C6  0F BF 84 3B 96 00 00 00   MOVSX EAX,word ptr [EBX + EDI*0x1 + 0x96]
006AA9CE  89 45 40                  MOV dword ptr [EBP + 0x40],EAX
LAB_006aa9d1:
006AA9D1  0F BF 74 3B BC            MOVSX ESI,word ptr [EBX + EDI*0x1 + -0x44]
006AA9D6  8B C1                     MOV EAX,ECX
006AA9D8  2B C6                     SUB EAX,ESI
006AA9DA  0F BF 74 3B BA            MOVSX ESI,word ptr [EBX + EDI*0x1 + -0x46]
006AA9DF  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006AA9E2  2B C6                     SUB EAX,ESI
006AA9E4  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
006AA9E7  03 C6                     ADD EAX,ESI
006AA9E9  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006AA9EC  8B F0                     MOV ESI,EAX
006AA9EE  0F BF 44 3B B8            MOVSX EAX,word ptr [EBX + EDI*0x1 + -0x48]
006AA9F3  2B F0                     SUB ESI,EAX
006AA9F5  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006AA9F8  03 F0                     ADD ESI,EAX
006AA9FA  8B C6                     MOV EAX,ESI
006AA9FC  8B 35 6C D5 7E 00         MOV ESI,dword ptr [0x007ed56c]
006AAA02  8B 04 86                  MOV EAX,dword ptr [ESI + EAX*0x4]
006AAA05  83 F8 1A                  CMP EAX,0x1a
006AAA08  7C 1F                     JL 0x006aaa29
006AAA0A  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006AAA0D  2B C1                     SUB EAX,ECX
006AAA0F  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006AAA12  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006AAA15  2B C1                     SUB EAX,ECX
006AAA17  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006AAA1A  03 C1                     ADD EAX,ECX
006AAA1C  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
006AAA1F  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006AAA22  2B C8                     SUB ECX,EAX
006AAA24  03 CA                     ADD ECX,EDX
006AAA26  8B 04 8E                  MOV EAX,dword ptr [ESI + ECX*0x4]
LAB_006aaa29:
006AAA29  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006AAA2C  C7 45 20 01 00 00 00      MOV dword ptr [EBP + 0x20],0x1
006AAA33  C1 E0 05                  SHL EAX,0x5
006AAA36  05 40 CB 7E 00            ADD EAX,0x7ecb40
006AAA3B  C7 45 84 00 00 00 00      MOV dword ptr [EBP + -0x7c],0x0
006AAA42  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
LAB_006aaa45:
006AAA45  8B 08                     MOV ECX,dword ptr [EAX]
006AAA47  83 F9 FE                  CMP ECX,-0x2
006AAA4A  0F 84 32 01 00 00         JZ 0x006aab82
006AAA50  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006AAA53  03 CA                     ADD ECX,EDX
006AAA55  85 C9                     TEST ECX,ECX
006AAA57  89 4D 28                  MOV dword ptr [EBP + 0x28],ECX
006AAA5A  0F 8C 0C 01 00 00         JL 0x006aab6c
006AAA60  3B 4D 0C                  CMP ECX,dword ptr [EBP + 0xc]
006AAA63  0F 8D 03 01 00 00         JGE 0x006aab6c
006AAA69  8B 70 04                  MOV ESI,dword ptr [EAX + 0x4]
006AAA6C  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006AAA6F  03 F1                     ADD ESI,ECX
006AAA71  0F 88 F5 00 00 00         JS 0x006aab6c
006AAA77  3B 75 10                  CMP ESI,dword ptr [EBP + 0x10]
006AAA7A  0F 8D EC 00 00 00         JGE 0x006aab6c
006AAA80  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
006AAA83  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006AAA86  03 D1                     ADD EDX,ECX
006AAA88  0F 88 DE 00 00 00         JS 0x006aab6c
006AAA8E  3B 55 14                  CMP EDX,dword ptr [EBP + 0x14]
006AAA91  0F 8D D5 00 00 00         JGE 0x006aab6c
006AAA97  8B C2                     MOV EAX,EDX
006AAA99  8B CE                     MOV ECX,ESI
006AAA9B  0F AF 45 BC               IMUL EAX,dword ptr [EBP + -0x44]
006AAA9F  0F AF 4D 0C               IMUL ECX,dword ptr [EBP + 0xc]
006AAAA3  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
006AAAA6  03 D8                     ADD EBX,EAX
006AAAA8  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006AAAAB  03 CB                     ADD ECX,EBX
006AAAAD  66 83 3C 48 00            CMP word ptr [EAX + ECX*0x2],0x0
006AAAB2  0F 8C AE 00 00 00         JL 0x006aab66
006AAAB8  8B 5D 30                  MOV EBX,dword ptr [EBP + 0x30]
006AAABB  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006AAABE  2B D9                     SUB EBX,ECX
006AAAC0  83 FB FF                  CMP EBX,-0x1
006AAAC3  0F 8C EE 00 00 00         JL 0x006aabb7
006AAAC9  83 FB 01                  CMP EBX,0x1
006AAACC  0F 8F E5 00 00 00         JG 0x006aabb7
006AAAD2  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006AAAD5  2B CE                     SUB ECX,ESI
006AAAD7  83 F9 FF                  CMP ECX,-0x1
006AAADA  0F 8C D7 00 00 00         JL 0x006aabb7
006AAAE0  83 F9 01                  CMP ECX,0x1
006AAAE3  0F 8F CE 00 00 00         JG 0x006aabb7
006AAAE9  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006AAAEC  2B C2                     SUB EAX,EDX
006AAAEE  83 F8 FF                  CMP EAX,-0x1
006AAAF1  0F 8C C0 00 00 00         JL 0x006aabb7
006AAAF7  83 F8 01                  CMP EAX,0x1
006AAAFA  0F 8F B7 00 00 00         JG 0x006aabb7
006AAB00  8D 0C 41                  LEA ECX,[ECX + EAX*0x2]
006AAB03  03 C1                     ADD EAX,ECX
006AAB05  8D 0C 43                  LEA ECX,[EBX + EAX*0x2]
006AAB08  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
006AAB0B  03 C1                     ADD EAX,ECX
006AAB0D  8B 0D 6C D5 7E 00         MOV ECX,dword ptr [0x007ed56c]
006AAB13  8B 04 81                  MOV EAX,dword ptr [ECX + EAX*0x4]
006AAB16  8B CB                     MOV ECX,EBX
006AAB18  83 F8 1A                  CMP EAX,0x1a
006AAB1B  7D 09                     JGE 0x006aab26
006AAB1D  8B 0C 85 40 D6 7E 00      MOV ECX,dword ptr [EAX*0x4 + 0x7ed640]
006AAB24  03 CB                     ADD ECX,EBX
LAB_006aab26:
006AAB26  8B 5D 3C                  MOV EBX,dword ptr [EBP + 0x3c]
LAB_006aab29:
006AAB29  3B 8D 7C FF FF FF         CMP ECX,dword ptr [EBP + 0xffffff7c]
006AAB2F  7F 38                     JG 0x006aab69
006AAB31  8B 45 38                  MOV EAX,dword ptr [EBP + 0x38]
006AAB34  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
006AAB37  03 C3                     ADD EAX,EBX
006AAB39  66 8B 5D 28               MOV BX,word ptr [EBP + 0x28]
006AAB3D  C1 E0 03                  SHL EAX,0x3
006AAB40  66 89 1C 38               MOV word ptr [EAX + EDI*0x1],BX
006AAB44  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
006AAB47  66 89 74 38 02            MOV word ptr [EAX + EDI*0x1 + 0x2],SI
006AAB4C  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006AAB4F  66 89 54 30 04            MOV word ptr [EAX + ESI*0x1 + 0x4],DX
006AAB54  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006AAB57  66 89 4C 10 06            MOV word ptr [EAX + EDX*0x1 + 0x6],CX
006AAB5C  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006AAB5F  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
006AAB62  40                        INC EAX
006AAB63  89 45 20                  MOV dword ptr [EBP + 0x20],EAX
LAB_006aab66:
006AAB66  8B 5D 3C                  MOV EBX,dword ptr [EBP + 0x3c]
LAB_006aab69:
006AAB69  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
LAB_006aab6c:
006AAB6C  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
006AAB6F  83 C0 0C                  ADD EAX,0xc
006AAB72  41                        INC ECX
006AAB73  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006AAB76  83 F9 08                  CMP ECX,0x8
006AAB79  89 4D 84                  MOV dword ptr [EBP + -0x7c],ECX
006AAB7C  0F 8C C3 FE FF FF         JL 0x006aaa45
LAB_006aab82:
006AAB82  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006AAB85  8B 75 38                  MOV ESI,dword ptr [EBP + 0x38]
006AAB88  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
006AAB8B  41                        INC ECX
006AAB8C  83 C3 48                  ADD EBX,0x48
006AAB8F  83 C6 09                  ADD ESI,0x9
006AAB92  48                        DEC EAX
006AAB93  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
006AAB96  3B C8                     CMP ECX,EAX
006AAB98  89 5D 3C                  MOV dword ptr [EBP + 0x3c],EBX
006AAB9B  89 75 38                  MOV dword ptr [EBP + 0x38],ESI
006AAB9E  0F 8C 71 FD FF FF         JL 0x006aa915
006AABA4  8B 55 34                  MOV EDX,dword ptr [EBP + 0x34]
006AABA7  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
006AABAA  8B C7                     MOV EAX,EDI
006AABAC  5F                        POP EDI
006AABAD  5E                        POP ESI
006AABAE  89 0A                     MOV dword ptr [EDX],ECX
006AABB0  5B                        POP EBX
006AABB1  8B E5                     MOV ESP,EBP
006AABB3  5D                        POP EBP
006AABB4  C2 3C 00                  RET 0x3c
LAB_006aabb7:
006AABB7  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006AABBA  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006AABBD  2B C2                     SUB EAX,EDX
006AABBF  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
006AABC2  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006AABC5  2B C6                     SUB EAX,ESI
006AABC7  03 C1                     ADD EAX,ECX
006AABC9  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
006AABCC  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006AABCF  2B C3                     SUB EAX,EBX
006AABD1  8B 5D 3C                  MOV EBX,dword ptr [EBP + 0x3c]
006AABD4  03 C1                     ADD EAX,ECX
006AABD6  8B 0D 6C D5 7E 00         MOV ECX,dword ptr [0x007ed56c]
006AABDC  8B 04 81                  MOV EAX,dword ptr [ECX + EAX*0x4]
006AABDF  0F BF 4C 3B 06            MOVSX ECX,word ptr [EBX + EDI*0x1 + 0x6]
006AABE4  83 F8 1A                  CMP EAX,0x1a
006AABE7  0F 8D 3C FF FF FF         JGE 0x006aab29
006AABED  03 0C 85 40 D6 7E 00      ADD ECX,dword ptr [EAX*0x4 + 0x7ed640]
006AABF4  E9 30 FF FF FF            JMP 0x006aab29
LAB_006aabf9:
006AABF9  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_006aabfc:
006AABFC  8B 55 34                  MOV EDX,dword ptr [EBP + 0x34]
006AABFF  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
006AAC02  8B C7                     MOV EAX,EDI
006AAC04  5F                        POP EDI
006AAC05  5E                        POP ESI
006AAC06  89 0A                     MOV dword ptr [EDX],ECX
006AAC08  5B                        POP EBX
006AAC09  8B E5                     MOV ESP,EBP
006AAC0B  5D                        POP EBP
006AAC0C  C2 3C 00                  RET 0x3c
