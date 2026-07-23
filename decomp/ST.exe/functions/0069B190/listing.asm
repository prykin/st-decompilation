CGenerate::sub_0069B190:
0069B190  55                        PUSH EBP
0069B191  8B EC                     MOV EBP,ESP
0069B193  83 EC 1C                  SUB ESP,0x1c
0069B196  33 C0                     XOR EAX,EAX
0069B198  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0069B19B  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0069B19E  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0069B1A1  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0069B1A4  53                        PUSH EBX
0069B1A5  56                        PUSH ESI
0069B1A6  57                        PUSH EDI
0069B1A7  8D 58 01                  LEA EBX,[EAX + 0x1]
0069B1AA  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0069B1AD  8B F8                     MOV EDI,EAX
0069B1AF  8B F3                     MOV ESI,EBX
0069B1B1  0F AF FA                  IMUL EDI,EDX
0069B1B4  0F AF F0                  IMUL ESI,EAX
0069B1B7  89 B9 2F 58 00 00         MOV dword ptr [ECX + 0x582f],EDI
0069B1BD  8D B9 4F 58 00 00         LEA EDI,[ECX + 0x584f]
0069B1C3  57                        PUSH EDI
0069B1C4  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0069B1C7  0F AF F2                  IMUL ESI,EDX
0069B1CA  89 81 33 58 00 00         MOV dword ptr [ECX + 0x5833],EAX
0069B1D0  89 91 37 58 00 00         MOV dword ptr [ECX + 0x5837],EDX
0069B1D6  E8 85 FE 00 00            CALL 0x006ab060
0069B1DB  03 F6                     ADD ESI,ESI
0069B1DD  56                        PUSH ESI
0069B1DE  E8 8D FA 00 00            CALL 0x006aac70
0069B1E3  8B D0                     MOV EDX,EAX
0069B1E5  8B CE                     MOV ECX,ESI
0069B1E7  89 17                     MOV dword ptr [EDI],EDX
0069B1E9  8B FA                     MOV EDI,EDX
0069B1EB  8B D1                     MOV EDX,ECX
0069B1ED  33 C0                     XOR EAX,EAX
0069B1EF  C1 E9 02                  SHR ECX,0x2
0069B1F2  F3 AB                     STOSD.REP ES:EDI
0069B1F4  8B CA                     MOV ECX,EDX
0069B1F6  53                        PUSH EBX
0069B1F7  83 E1 03                  AND ECX,0x3
0069B1FA  F3 AA                     STOSB.REP ES:EDI
0069B1FC  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0069B1FF  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
0069B202  05 4F 58 00 00            ADD EAX,0x584f
0069B207  8B 08                     MOV ECX,dword ptr [EAX]
0069B209  51                        PUSH ECX
0069B20A  8B CF                     MOV ECX,EDI
0069B20C  E8 FC AA D6 FF            CALL 0x00405d0d
0069B211  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0069B214  85 C0                     TEST EAX,EAX
0069B216  0F 8E 58 01 00 00         JLE 0x0069b374
LAB_0069b21c:
0069B21C  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
0069B21F  8B 87 37 58 00 00         MOV EAX,dword ptr [EDI + 0x5837]
0069B225  0F AF 9F 2F 58 00 00      IMUL EBX,dword ptr [EDI + 0x582f]
0069B22C  33 F6                     XOR ESI,ESI
0069B22E  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
0069B231  85 C0                     TEST EAX,EAX
0069B233  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
0069B236  0F 8C 26 01 00 00         JL 0x0069b362
LAB_0069b23c:
0069B23C  8B 87 33 58 00 00         MOV EAX,dword ptr [EDI + 0x5833]
0069B242  33 C9                     XOR ECX,ECX
0069B244  8B D0                     MOV EDX,EAX
0069B246  0F AF D6                  IMUL EDX,ESI
0069B249  85 C0                     TEST EAX,EAX
0069B24B  0F 8C FF 00 00 00         JL 0x0069b350
0069B251  03 D3                     ADD EDX,EBX
0069B253  8D 5A 01                  LEA EBX,[EDX + 0x1]
0069B256  03 D2                     ADD EDX,EDX
0069B258  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
0069B25B  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
LAB_0069b25e:
0069B25E  41                        INC ECX
0069B25F  3B C8                     CMP ECX,EAX
0069B261  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0069B264  7D 04                     JGE 0x0069b26a
0069B266  8B F3                     MOV ESI,EBX
0069B268  EB 03                     JMP 0x0069b26d
LAB_0069b26a:
0069B26A  83 CE FF                  OR ESI,0xffffffff
LAB_0069b26d:
0069B26D  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0069B270  8B 8F 37 58 00 00         MOV ECX,dword ptr [EDI + 0x5837]
0069B276  40                        INC EAX
0069B277  3B C1                     CMP EAX,ECX
0069B279  7F 1C                     JG 0x0069b297
0069B27B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0069B27E  85 F6                     TEST ESI,ESI
0069B280  8D 4C 18 FF               LEA ECX,[EAX + EBX*0x1 + -0x1]
0069B284  7C 08                     JL 0x0069b28e
0069B286  8D 14 03                  LEA EDX,[EBX + EAX*0x1]
0069B289  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0069B28C  EB 0F                     JMP 0x0069b29d
LAB_0069b28e:
0069B28E  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
0069B295  EB 06                     JMP 0x0069b29d
LAB_0069b297:
0069B297  83 C9 FF                  OR ECX,0xffffffff
0069B29A  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_0069b29d:
0069B29D  8D 53 FF                  LEA EDX,[EBX + -0x1]
0069B2A0  85 D2                     TEST EDX,EDX
0069B2A2  0F 8C 84 00 00 00         JL 0x0069b32c
0069B2A8  8B 87 4F 58 00 00         MOV EAX,dword ptr [EDI + 0x584f]
0069B2AE  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0069B2B1  03 C3                     ADD EAX,EBX
0069B2B3  66 83 38 FF               CMP word ptr [EAX],-0x1
0069B2B7  75 0C                     JNZ 0x0069b2c5
0069B2B9  66 C7 00 01 00            MOV word ptr [EAX],0x1
0069B2BE  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0069B2C1  40                        INC EAX
0069B2C2  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_0069b2c5:
0069B2C5  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
0069B2C8  85 D2                     TEST EDX,EDX
0069B2CA  7E 60                     JLE 0x0069b32c
0069B2CC  85 F6                     TEST ESI,ESI
0069B2CE  7E 5C                     JLE 0x0069b32c
0069B2D0  85 C9                     TEST ECX,ECX
0069B2D2  7E 58                     JLE 0x0069b32c
0069B2D4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0069B2D7  85 C0                     TEST EAX,EAX
0069B2D9  7E 51                     JLE 0x0069b32c
0069B2DB  8B 87 4F 58 00 00         MOV EAX,dword ptr [EDI + 0x584f]
0069B2E1  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0069B2E4  66 8B 14 02               MOV DX,word ptr [EDX + EAX*0x1]
0069B2E8  66 83 FA FF               CMP DX,-0x1
0069B2EC  74 05                     JZ 0x0069b2f3
0069B2EE  66 85 D2                  TEST DX,DX
0069B2F1  7E 39                     JLE 0x0069b32c
LAB_0069b2f3:
0069B2F3  66 8B 14 70               MOV DX,word ptr [EAX + ESI*0x2]
0069B2F7  66 83 FA FF               CMP DX,-0x1
0069B2FB  74 05                     JZ 0x0069b302
0069B2FD  66 85 D2                  TEST DX,DX
0069B300  7E 2A                     JLE 0x0069b32c
LAB_0069b302:
0069B302  66 8B 14 48               MOV DX,word ptr [EAX + ECX*0x2]
0069B306  66 83 FA FF               CMP DX,-0x1
0069B30A  74 05                     JZ 0x0069b311
0069B30C  66 85 D2                  TEST DX,DX
0069B30F  7E 1B                     JLE 0x0069b32c
LAB_0069b311:
0069B311  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0069B314  66 8B 14 48               MOV DX,word ptr [EAX + ECX*0x2]
0069B318  66 83 FA FF               CMP DX,-0x1
0069B31C  74 05                     JZ 0x0069b323
0069B31E  66 85 D2                  TEST DX,DX
0069B321  7E 09                     JLE 0x0069b32c
LAB_0069b323:
0069B323  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0069B326  66 C7 04 02 04 00         MOV word ptr [EDX + EAX*0x1],0x4
LAB_0069b32c:
0069B32C  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0069B32F  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0069B332  83 C0 02                  ADD EAX,0x2
0069B335  43                        INC EBX
0069B336  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
0069B339  8B 87 33 58 00 00         MOV EAX,dword ptr [EDI + 0x5833]
0069B33F  3B C8                     CMP ECX,EAX
0069B341  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
0069B344  0F 8E 14 FF FF FF         JLE 0x0069b25e
0069B34A  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
0069B34D  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
LAB_0069b350:
0069B350  8B 87 37 58 00 00         MOV EAX,dword ptr [EDI + 0x5837]
0069B356  46                        INC ESI
0069B357  3B F0                     CMP ESI,EAX
0069B359  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
0069B35C  0F 8E DA FE FF FF         JLE 0x0069b23c
LAB_0069b362:
0069B362  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0069B365  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0069B368  40                        INC EAX
0069B369  3B C1                     CMP EAX,ECX
0069B36B  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0069B36E  0F 8C A8 FE FF FF         JL 0x0069b21c
LAB_0069b374:
0069B374  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0069B377  5F                        POP EDI
0069B378  5E                        POP ESI
0069B379  5B                        POP EBX
0069B37A  8B E5                     MOV ESP,EBP
0069B37C  5D                        POP EBP
0069B37D  C2 0C 00                  RET 0xc
