FUN_005eeff0:
005EEFF0  55                        PUSH EBP
005EEFF1  8B EC                     MOV EBP,ESP
005EEFF3  83 EC 08                  SUB ESP,0x8
005EEFF6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005EEFF9  53                        PUSH EBX
005EEFFA  56                        PUSH ESI
005EEFFB  57                        PUSH EDI
005EEFFC  85 C0                     TEST EAX,EAX
005EEFFE  8B F1                     MOV ESI,ECX
005EF000  0F 85 DF 01 00 00         JNZ 0x005ef1e5
005EF006  8B 86 D6 02 00 00         MOV EAX,dword ptr [ESI + 0x2d6]
005EF00C  85 C0                     TEST EAX,EAX
005EF00E  7D 0B                     JGE 0x005ef01b
005EF010  6A 00                     PUSH 0x0
005EF012  6A 00                     PUSH 0x0
005EF014  E8 14 2F E1 FF            CALL 0x00401f2d
005EF019  EB 07                     JMP 0x005ef022
LAB_005ef01b:
005EF01B  8B CE                     MOV ECX,ESI
005EF01D  E8 E1 58 E1 FF            CALL 0x00404903
LAB_005ef022:
005EF022  8A 86 DE 02 00 00         MOV AL,byte ptr [ESI + 0x2de]
005EF028  84 C0                     TEST AL,AL
005EF02A  0F 84 11 03 00 00         JZ 0x005ef341
005EF030  8B 3D 88 2A 80 00         MOV EDI,dword ptr [0x00802a88]
005EF036  85 FF                     TEST EDI,EDI
005EF038  0F 84 03 03 00 00         JZ 0x005ef341
005EF03E  8B 8E 7F 02 00 00         MOV ECX,dword ptr [ESI + 0x27f]
005EF044  B8 1F 85 EB 51            MOV EAX,0x51eb851f
005EF049  85 C9                     TEST ECX,ECX
005EF04B  7C 14                     JL 0x005ef061
005EF04D  F7 E9                     IMUL ECX
005EF04F  C1 FA 06                  SAR EDX,0x6
005EF052  8B C2                     MOV EAX,EDX
005EF054  C1 E8 1F                  SHR EAX,0x1f
005EF057  03 D0                     ADD EDX,EAX
005EF059  0F BF CA                  MOVSX ECX,DX
005EF05C  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
005EF05F  EB 13                     JMP 0x005ef074
LAB_005ef061:
005EF061  F7 E9                     IMUL ECX
005EF063  C1 FA 06                  SAR EDX,0x6
005EF066  8B C2                     MOV EAX,EDX
005EF068  C1 E8 1F                  SHR EAX,0x1f
005EF06B  03 D0                     ADD EDX,EAX
005EF06D  0F BF C2                  MOVSX EAX,DX
005EF070  48                        DEC EAX
005EF071  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_005ef074:
005EF074  8B 8E 7B 02 00 00         MOV ECX,dword ptr [ESI + 0x27b]
005EF07A  B8 79 19 8C 02            MOV EAX,0x28c1979
005EF07F  85 C9                     TEST ECX,ECX
005EF081  7C 10                     JL 0x005ef093
005EF083  F7 E9                     IMUL ECX
005EF085  D1 FA                     SAR EDX,0x1
005EF087  8B CA                     MOV ECX,EDX
005EF089  C1 E9 1F                  SHR ECX,0x1f
005EF08C  03 D1                     ADD EDX,ECX
005EF08E  0F BF DA                  MOVSX EBX,DX
005EF091  EB 0F                     JMP 0x005ef0a2
LAB_005ef093:
005EF093  F7 E9                     IMUL ECX
005EF095  D1 FA                     SAR EDX,0x1
005EF097  8B C2                     MOV EAX,EDX
005EF099  C1 E8 1F                  SHR EAX,0x1f
005EF09C  03 D0                     ADD EDX,EAX
005EF09E  0F BF DA                  MOVSX EBX,DX
005EF0A1  4B                        DEC EBX
LAB_005ef0a2:
005EF0A2  8B 8E 77 02 00 00         MOV ECX,dword ptr [ESI + 0x277]
005EF0A8  B8 79 19 8C 02            MOV EAX,0x28c1979
005EF0AD  85 C9                     TEST ECX,ECX
005EF0AF  7C 10                     JL 0x005ef0c1
005EF0B1  F7 E9                     IMUL ECX
005EF0B3  D1 FA                     SAR EDX,0x1
005EF0B5  8B CA                     MOV ECX,EDX
005EF0B7  C1 E9 1F                  SHR ECX,0x1f
005EF0BA  03 D1                     ADD EDX,ECX
005EF0BC  0F BF C2                  MOVSX EAX,DX
005EF0BF  EB 0F                     JMP 0x005ef0d0
LAB_005ef0c1:
005EF0C1  F7 E9                     IMUL ECX
005EF0C3  D1 FA                     SAR EDX,0x1
005EF0C5  8B C2                     MOV EAX,EDX
005EF0C7  C1 E8 1F                  SHR EAX,0x1f
005EF0CA  03 D0                     ADD EDX,EAX
005EF0CC  0F BF C2                  MOVSX EAX,DX
005EF0CF  48                        DEC EAX
LAB_005ef0d0:
005EF0D0  80 3D 4D 87 80 00 FF      CMP byte ptr [0x0080874d],0xff
005EF0D7  74 6C                     JZ 0x005ef145
005EF0D9  8B 8F F8 00 00 00         MOV ECX,dword ptr [EDI + 0xf8]
005EF0DF  85 C9                     TEST ECX,ECX
005EF0E1  74 62                     JZ 0x005ef145
005EF0E3  8D 4D F8                  LEA ECX,[EBP + -0x8]
005EF0E6  8D 55 FC                  LEA EDX,[EBP + -0x4]
005EF0E9  51                        PUSH ECX
005EF0EA  52                        PUSH EDX
005EF0EB  53                        PUSH EBX
005EF0EC  50                        PUSH EAX
005EF0ED  8B 87 0C 01 00 00         MOV EAX,dword ptr [EDI + 0x10c]
005EF0F3  8B CF                     MOV ECX,EDI
005EF0F5  50                        PUSH EAX
005EF0F6  E8 58 4E E1 FF            CALL 0x00403f53
005EF0FB  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005EF0FE  85 C0                     TEST EAX,EAX
005EF100  7C 43                     JL 0x005ef145
005EF102  83 F8 05                  CMP EAX,0x5
005EF105  7D 3E                     JGE 0x005ef145
005EF107  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005EF10A  85 D2                     TEST EDX,EDX
005EF10C  7C 37                     JL 0x005ef145
005EF10E  8B 4F 30                  MOV ECX,dword ptr [EDI + 0x30]
005EF111  3B D1                     CMP EDX,ECX
005EF113  7D 30                     JGE 0x005ef145
005EF115  8B 04 85 D0 AE 79 00      MOV EAX,dword ptr [EAX*0x4 + 0x79aed0]
005EF11C  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
005EF11F  03 C3                     ADD EAX,EBX
005EF121  85 C0                     TEST EAX,EAX
005EF123  7C 20                     JL 0x005ef145
005EF125  3B 47 34                  CMP EAX,dword ptr [EDI + 0x34]
005EF128  7D 1B                     JGE 0x005ef145
005EF12A  8B 7F 4C                  MOV EDI,dword ptr [EDI + 0x4c]
005EF12D  85 FF                     TEST EDI,EDI
005EF12F  74 14                     JZ 0x005ef145
005EF131  0F AF C1                  IMUL EAX,ECX
005EF134  03 C7                     ADD EAX,EDI
005EF136  33 C9                     XOR ECX,ECX
005EF138  8A 0C 10                  MOV CL,byte ptr [EAX + EDX*0x1]
005EF13B  8B C1                     MOV EAX,ECX
005EF13D  85 C0                     TEST EAX,EAX
005EF13F  0F 84 8D 00 00 00         JZ 0x005ef1d2
LAB_005ef145:
005EF145  8B 16                     MOV EDX,dword ptr [ESI]
005EF147  8B CE                     MOV ECX,ESI
005EF149  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
005EF14F  DB 86 C6 02 00 00         FILD dword ptr [ESI + 0x2c6]
005EF155  51                        PUSH ECX
005EF156  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
005EF15C  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
005EF162  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
005EF168  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
005EF16E  D9 1C 24                  FSTP float ptr [ESP]
005EF171  DB 86 C2 02 00 00         FILD dword ptr [ESI + 0x2c2]
005EF177  51                        PUSH ECX
005EF178  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
005EF17E  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
005EF184  D9 1C 24                  FSTP float ptr [ESP]
005EF187  DB 86 BE 02 00 00         FILD dword ptr [ESI + 0x2be]
005EF18D  51                        PUSH ECX
005EF18E  8B CF                     MOV ECX,EDI
005EF190  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
005EF196  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
005EF19C  D9 1C 24                  FSTP float ptr [ESP]
005EF19F  E8 35 54 E1 FF            CALL 0x004045d9
005EF1A4  8A 86 B9 02 00 00         MOV AL,byte ptr [ESI + 0x2b9]
005EF1AA  84 C0                     TEST AL,AL
005EF1AC  0F 85 8F 01 00 00         JNZ 0x005ef341
005EF1B2  6A 00                     PUSH 0x0
005EF1B4  8B CF                     MOV ECX,EDI
LAB_005ef1b6:
005EF1B6  E8 C7 37 E1 FF            CALL 0x00402982
005EF1BB  C6 86 B9 02 00 00 01      MOV byte ptr [ESI + 0x2b9],0x1
005EF1C2  C6 86 DE 02 00 00 00      MOV byte ptr [ESI + 0x2de],0x0
005EF1C9  5F                        POP EDI
005EF1CA  5E                        POP ESI
005EF1CB  5B                        POP EBX
005EF1CC  8B E5                     MOV ESP,EBP
005EF1CE  5D                        POP EBP
005EF1CF  C2 04 00                  RET 0x4
LAB_005ef1d2:
005EF1D2  8A 86 B9 02 00 00         MOV AL,byte ptr [ESI + 0x2b9]
005EF1D8  84 C0                     TEST AL,AL
005EF1DA  0F 84 61 01 00 00         JZ 0x005ef341
005EF1E0  E9 4A 01 00 00            JMP 0x005ef32f
LAB_005ef1e5:
005EF1E5  8B 3D 88 2A 80 00         MOV EDI,dword ptr [0x00802a88]
005EF1EB  85 FF                     TEST EDI,EDI
005EF1ED  0F 84 4E 01 00 00         JZ 0x005ef341
005EF1F3  8B 86 D6 02 00 00         MOV EAX,dword ptr [ESI + 0x2d6]
005EF1F9  85 C0                     TEST EAX,EAX
005EF1FB  0F 8C 40 01 00 00         JL 0x005ef341
005EF201  8B 8E 7F 02 00 00         MOV ECX,dword ptr [ESI + 0x27f]
005EF207  B8 1F 85 EB 51            MOV EAX,0x51eb851f
005EF20C  85 C9                     TEST ECX,ECX
005EF20E  7C 14                     JL 0x005ef224
005EF210  F7 E9                     IMUL ECX
005EF212  C1 FA 06                  SAR EDX,0x6
005EF215  8B C2                     MOV EAX,EDX
005EF217  C1 E8 1F                  SHR EAX,0x1f
005EF21A  03 D0                     ADD EDX,EAX
005EF21C  0F BF CA                  MOVSX ECX,DX
005EF21F  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
005EF222  EB 13                     JMP 0x005ef237
LAB_005ef224:
005EF224  F7 E9                     IMUL ECX
005EF226  C1 FA 06                  SAR EDX,0x6
005EF229  8B C2                     MOV EAX,EDX
005EF22B  C1 E8 1F                  SHR EAX,0x1f
005EF22E  03 D0                     ADD EDX,EAX
005EF230  0F BF C2                  MOVSX EAX,DX
005EF233  48                        DEC EAX
005EF234  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_005ef237:
005EF237  8B 8E 7B 02 00 00         MOV ECX,dword ptr [ESI + 0x27b]
005EF23D  B8 79 19 8C 02            MOV EAX,0x28c1979
005EF242  85 C9                     TEST ECX,ECX
005EF244  7C 10                     JL 0x005ef256
005EF246  F7 E9                     IMUL ECX
005EF248  D1 FA                     SAR EDX,0x1
005EF24A  8B CA                     MOV ECX,EDX
005EF24C  C1 E9 1F                  SHR ECX,0x1f
005EF24F  03 D1                     ADD EDX,ECX
005EF251  0F BF DA                  MOVSX EBX,DX
005EF254  EB 0F                     JMP 0x005ef265
LAB_005ef256:
005EF256  F7 E9                     IMUL ECX
005EF258  D1 FA                     SAR EDX,0x1
005EF25A  8B C2                     MOV EAX,EDX
005EF25C  C1 E8 1F                  SHR EAX,0x1f
005EF25F  03 D0                     ADD EDX,EAX
005EF261  0F BF DA                  MOVSX EBX,DX
005EF264  4B                        DEC EBX
LAB_005ef265:
005EF265  8B 8E 77 02 00 00         MOV ECX,dword ptr [ESI + 0x277]
005EF26B  B8 79 19 8C 02            MOV EAX,0x28c1979
005EF270  85 C9                     TEST ECX,ECX
005EF272  7C 10                     JL 0x005ef284
005EF274  F7 E9                     IMUL ECX
005EF276  D1 FA                     SAR EDX,0x1
005EF278  8B CA                     MOV ECX,EDX
005EF27A  C1 E9 1F                  SHR ECX,0x1f
005EF27D  03 D1                     ADD EDX,ECX
005EF27F  0F BF C2                  MOVSX EAX,DX
005EF282  EB 0F                     JMP 0x005ef293
LAB_005ef284:
005EF284  F7 E9                     IMUL ECX
005EF286  D1 FA                     SAR EDX,0x1
005EF288  8B C2                     MOV EAX,EDX
005EF28A  C1 E8 1F                  SHR EAX,0x1f
005EF28D  03 D0                     ADD EDX,EAX
005EF28F  0F BF C2                  MOVSX EAX,DX
005EF292  48                        DEC EAX
LAB_005ef293:
005EF293  80 3D 4D 87 80 00 FF      CMP byte ptr [0x0080874d],0xff
005EF29A  74 68                     JZ 0x005ef304
005EF29C  8B 8F F8 00 00 00         MOV ECX,dword ptr [EDI + 0xf8]
005EF2A2  85 C9                     TEST ECX,ECX
005EF2A4  74 5E                     JZ 0x005ef304
005EF2A6  8D 4D FC                  LEA ECX,[EBP + -0x4]
005EF2A9  8D 55 F8                  LEA EDX,[EBP + -0x8]
005EF2AC  51                        PUSH ECX
005EF2AD  52                        PUSH EDX
005EF2AE  53                        PUSH EBX
005EF2AF  50                        PUSH EAX
005EF2B0  8B 87 0C 01 00 00         MOV EAX,dword ptr [EDI + 0x10c]
005EF2B6  8B CF                     MOV ECX,EDI
005EF2B8  50                        PUSH EAX
005EF2B9  E8 95 4C E1 FF            CALL 0x00403f53
005EF2BE  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005EF2C1  85 C0                     TEST EAX,EAX
005EF2C3  7C 3F                     JL 0x005ef304
005EF2C5  83 F8 05                  CMP EAX,0x5
005EF2C8  7D 3A                     JGE 0x005ef304
005EF2CA  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005EF2CD  85 D2                     TEST EDX,EDX
005EF2CF  7C 33                     JL 0x005ef304
005EF2D1  8B 4F 30                  MOV ECX,dword ptr [EDI + 0x30]
005EF2D4  3B D1                     CMP EDX,ECX
005EF2D6  7D 2C                     JGE 0x005ef304
005EF2D8  8B 04 85 D0 AE 79 00      MOV EAX,dword ptr [EAX*0x4 + 0x79aed0]
005EF2DF  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
005EF2E2  03 C3                     ADD EAX,EBX
005EF2E4  85 C0                     TEST EAX,EAX
005EF2E6  7C 1C                     JL 0x005ef304
005EF2E8  3B 47 34                  CMP EAX,dword ptr [EDI + 0x34]
005EF2EB  7D 17                     JGE 0x005ef304
005EF2ED  8B 7F 4C                  MOV EDI,dword ptr [EDI + 0x4c]
005EF2F0  85 FF                     TEST EDI,EDI
005EF2F2  74 10                     JZ 0x005ef304
005EF2F4  0F AF C1                  IMUL EAX,ECX
005EF2F7  03 C7                     ADD EAX,EDI
005EF2F9  33 C9                     XOR ECX,ECX
005EF2FB  8A 0C 10                  MOV CL,byte ptr [EAX + EDX*0x1]
005EF2FE  8B C1                     MOV EAX,ECX
005EF300  85 C0                     TEST EAX,EAX
005EF302  74 21                     JZ 0x005ef325
LAB_005ef304:
005EF304  8B 16                     MOV EDX,dword ptr [ESI]
005EF306  8B CE                     MOV ECX,ESI
005EF308  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
005EF30E  8A 86 B9 02 00 00         MOV AL,byte ptr [ESI + 0x2b9]
005EF314  84 C0                     TEST AL,AL
005EF316  75 29                     JNZ 0x005ef341
005EF318  6A 00                     PUSH 0x0
005EF31A  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
005EF320  E9 91 FE FF FF            JMP 0x005ef1b6
LAB_005ef325:
005EF325  8A 86 B9 02 00 00         MOV AL,byte ptr [ESI + 0x2b9]
005EF32B  84 C0                     TEST AL,AL
005EF32D  74 12                     JZ 0x005ef341
LAB_005ef32f:
005EF32F  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
005EF335  E8 D5 49 E1 FF            CALL 0x00403d0f
005EF33A  C6 86 B9 02 00 00 00      MOV byte ptr [ESI + 0x2b9],0x0
LAB_005ef341:
005EF341  5F                        POP EDI
005EF342  5E                        POP ESI
005EF343  5B                        POP EBX
005EF344  8B E5                     MOV ESP,EBP
005EF346  5D                        POP EBP
005EF347  C2 04 00                  RET 0x4
