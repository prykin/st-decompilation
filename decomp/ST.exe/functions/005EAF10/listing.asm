STArtiafactC::GetMessage:
005EAF10  55                        PUSH EBP
005EAF11  8B EC                     MOV EBP,ESP
005EAF13  83 EC 5C                  SUB ESP,0x5c
005EAF16  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005EAF19  53                        PUSH EBX
005EAF1A  56                        PUSH ESI
005EAF1B  57                        PUSH EDI
005EAF1C  50                        PUSH EAX
005EAF1D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005EAF20  E8 E2 9F E1 FF            CALL 0x00404f07
005EAF25  3D FF FF 00 00            CMP EAX,0xffff
005EAF2A  0F 84 3B 0A 00 00         JZ 0x005eb96b
005EAF30  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
005EAF36  8D 45 A8                  LEA EAX,[EBP + -0x58]
005EAF39  8D 55 A4                  LEA EDX,[EBP + -0x5c]
005EAF3C  6A 00                     PUSH 0x0
005EAF3E  50                        PUSH EAX
005EAF3F  89 4D A4                  MOV dword ptr [EBP + -0x5c],ECX
005EAF42  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005EAF48  E8 A3 28 14 00            CALL 0x0072d7f0
005EAF4D  8B F0                     MOV ESI,EAX
005EAF4F  83 C4 08                  ADD ESP,0x8
005EAF52  85 F6                     TEST ESI,ESI
005EAF54  0F 85 D2 09 00 00         JNZ 0x005eb92c
005EAF5A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005EAF5D  8B 41 10                  MOV EAX,dword ptr [ECX + 0x10]
005EAF60  3D 10 01 00 00            CMP EAX,0x110
005EAF65  0F 87 2C 06 00 00         JA 0x005eb597
005EAF6B  0F 84 B0 05 00 00         JZ 0x005eb521
005EAF71  83 F8 03                  CMP EAX,0x3
005EAF74  0F 87 30 05 00 00         JA 0x005eb4aa
005EAF7A  0F 84 9D 04 00 00         JZ 0x005eb41d
005EAF80  2B C6                     SUB EAX,ESI
005EAF82  0F 84 BB 03 00 00         JZ 0x005eb343
005EAF88  83 E8 02                  SUB EAX,0x2
005EAF8B  0F 85 88 09 00 00         JNZ 0x005eb919
005EAF91  8B 41 14                  MOV EAX,dword ptr [ECX + 0x14]
005EAF94  83 78 0C 02               CMP dword ptr [EAX + 0xc],0x2
005EAF98  0F 84 74 01 00 00         JZ 0x005eb112
005EAF9E  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
005EAFA1  B9 54 00 00 00            MOV ECX,0x54
005EAFA6  8B F0                     MOV ESI,EAX
005EAFA8  8D BB 26 03 00 00         LEA EDI,[EBX + 0x326]
005EAFAE  F3 A5                     MOVSD.REP ES:EDI,ESI
005EAFB0  A4                        MOVSB ES:EDI,ESI
005EAFB1  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005EAFB4  85 C9                     TEST ECX,ECX
005EAFB6  75 69                     JNZ 0x005eb021
005EAFB8  0F BF 8B 4A 03 00 00      MOVSX ECX,word ptr [EBX + 0x34a]
005EAFBF  89 8B 6B 04 00 00         MOV dword ptr [EBX + 0x46b],ECX
005EAFC5  0F BF 93 4C 03 00 00      MOVSX EDX,word ptr [EBX + 0x34c]
005EAFCC  89 93 6F 04 00 00         MOV dword ptr [EBX + 0x46f],EDX
005EAFD2  0F BF 83 4E 03 00 00      MOVSX EAX,word ptr [EBX + 0x34e]
005EAFD9  89 83 73 04 00 00         MOV dword ptr [EBX + 0x473],EAX
005EAFDF  66 8B 8B 4A 03 00 00      MOV CX,word ptr [EBX + 0x34a]
005EAFE6  66 69 C9 C9 00            IMUL CX,CX,0xc9
005EAFEB  83 C1 64                  ADD ECX,0x64
005EAFEE  66 89 8B 4A 03 00 00      MOV word ptr [EBX + 0x34a],CX
005EAFF5  66 8B 93 4C 03 00 00      MOV DX,word ptr [EBX + 0x34c]
005EAFFC  66 69 D2 C9 00            IMUL DX,DX,0xc9
005EB001  83 C2 64                  ADD EDX,0x64
005EB004  66 89 93 4C 03 00 00      MOV word ptr [EBX + 0x34c],DX
005EB00B  66 8B 83 4E 03 00 00      MOV AX,word ptr [EBX + 0x34e]
005EB012  66 69 C0 C8 00            IMUL AX,AX,0xc8
005EB017  83 C0 64                  ADD EAX,0x64
005EB01A  66 89 83 4E 03 00 00      MOV word ptr [EBX + 0x34e],AX
LAB_005eb021:
005EB021  8B CB                     MOV ECX,EBX
005EB023  E8 C1 94 E1 FF            CALL 0x004044e9
005EB028  85 C0                     TEST EAX,EAX
005EB02A  75 1A                     JNZ 0x005eb046
005EB02C  8B CB                     MOV ECX,EBX
005EB02E  E8 2F 94 E1 FF            CALL 0x00404462
005EB033  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
005EB036  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005EB03B  33 C0                     XOR EAX,EAX
005EB03D  5F                        POP EDI
005EB03E  5E                        POP ESI
005EB03F  5B                        POP EBX
005EB040  8B E5                     MOV ESP,EBP
005EB042  5D                        POP EBP
005EB043  C2 04 00                  RET 0x4
LAB_005eb046:
005EB046  6A 00                     PUSH 0x0
005EB048  6A 00                     PUSH 0x0
005EB04A  8B CB                     MOV ECX,EBX
005EB04C  E8 DC 6E E1 FF            CALL 0x00401f2d
005EB051  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
005EB057  85 C9                     TEST ECX,ECX
005EB059  74 37                     JZ 0x005eb092
005EB05B  53                        PUSH EBX
005EB05C  68 FF FF 00 00            PUSH 0xffff
005EB061  E8 A7 93 E1 FF            CALL 0x0040440d
005EB066  85 C0                     TEST EAX,EAX
005EB068  74 1A                     JZ 0x005eb084
005EB06A  8B CB                     MOV ECX,EBX
005EB06C  E8 F1 93 E1 FF            CALL 0x00404462
005EB071  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
005EB074  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005EB079  33 C0                     XOR EAX,EAX
005EB07B  5F                        POP EDI
005EB07C  5E                        POP ESI
005EB07D  5B                        POP EBX
005EB07E  8B E5                     MOV ESP,EBP
005EB080  5D                        POP EBP
005EB081  C2 04 00                  RET 0x4
LAB_005eb084:
005EB084  8B CB                     MOV ECX,EBX
005EB086  C6 83 E4 02 00 00 01      MOV byte ptr [EBX + 0x2e4],0x1
005EB08D  E8 FA AA E1 FF            CALL 0x00405b8c
LAB_005eb092:
005EB092  8B 83 46 03 00 00         MOV EAX,dword ptr [EBX + 0x346]
005EB098  83 E8 03                  SUB EAX,0x3
005EB09B  74 37                     JZ 0x005eb0d4
005EB09D  83 E8 02                  SUB EAX,0x2
005EB0A0  0F 85 73 08 00 00         JNZ 0x005eb919
005EB0A6  8B 0D 24 67 80 00         MOV ECX,dword ptr [0x00806724]
005EB0AC  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
005EB0AF  0F BF 51 23               MOVSX EDX,word ptr [ECX + 0x23]
005EB0B3  4A                        DEC EDX
005EB0B4  89 93 D2 02 00 00         MOV dword ptr [EBX + 0x2d2],EDX
005EB0BA  C7 83 B5 02 00 00 01 00 00 00  MOV dword ptr [EBX + 0x2b5],0x1
005EB0C4  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005EB0C9  33 C0                     XOR EAX,EAX
005EB0CB  5F                        POP EDI
005EB0CC  5E                        POP ESI
005EB0CD  5B                        POP EBX
005EB0CE  8B E5                     MOV ESP,EBP
005EB0D0  5D                        POP EBP
005EB0D1  C2 04 00                  RET 0x4
LAB_005eb0d4:
005EB0D4  0F BF 83 4E 03 00 00      MOVSX EAX,word ptr [EBX + 0x34e]
005EB0DB  0F BF 8B 4C 03 00 00      MOVSX ECX,word ptr [EBX + 0x34c]
005EB0E2  0F BF 93 4A 03 00 00      MOVSX EDX,word ptr [EBX + 0x34a]
005EB0E9  6A 13                     PUSH 0x13
005EB0EB  50                        PUSH EAX
005EB0EC  8B 83 ED 01 00 00         MOV EAX,dword ptr [EBX + 0x1ed]
005EB0F2  51                        PUSH ECX
005EB0F3  52                        PUSH EDX
005EB0F4  6A 01                     PUSH 0x1
005EB0F6  50                        PUSH EAX
005EB0F7  E8 A9 A0 E1 FF            CALL 0x004051a5
005EB0FC  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
005EB0FF  83 C4 18                  ADD ESP,0x18
005EB102  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005EB107  33 C0                     XOR EAX,EAX
005EB109  5F                        POP EDI
005EB10A  5E                        POP ESI
005EB10B  5B                        POP EBX
005EB10C  8B E5                     MOV ESP,EBP
005EB10E  5D                        POP EBP
005EB10F  C2 04 00                  RET 0x4
LAB_005eb112:
005EB112  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005EB115  50                        PUSH EAX
005EB116  8B CE                     MOV ECX,ESI
005EB118  E8 A6 78 E1 FF            CALL 0x004029c3
005EB11D  85 C0                     TEST EAX,EAX
005EB11F  0F 8C F4 07 00 00         JL 0x005eb919
005EB125  8A 86 52 02 00 00         MOV AL,byte ptr [ESI + 0x252]
005EB12B  84 C0                     TEST AL,AL
005EB12D  0F 86 A4 01 00 00         JBE 0x005eb2d7
005EB133  0F BF 86 42 02 00 00      MOVSX EAX,word ptr [ESI + 0x242]
005EB13A  0F BF 96 44 02 00 00      MOVSX EDX,word ptr [ESI + 0x244]
005EB141  0F BF 8E 46 02 00 00      MOVSX ECX,word ptr [ESI + 0x246]
005EB148  BB 01 00 00 00            MOV EBX,0x1
005EB14D  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
005EB150  66 85 C0                  TEST AX,AX
005EB153  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
005EB156  7C 57                     JL 0x005eb1af
005EB158  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
005EB15F  7D 4E                     JGE 0x005eb1af
005EB161  66 85 D2                  TEST DX,DX
005EB164  7C 49                     JL 0x005eb1af
005EB166  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
005EB16D  7D 40                     JGE 0x005eb1af
005EB16F  66 85 C9                  TEST CX,CX
005EB172  7C 3B                     JL 0x005eb1af
005EB174  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
005EB17B  7D 32                     JGE 0x005eb1af
005EB17D  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
005EB184  0F BF D9                  MOVSX EBX,CX
005EB187  0F AF FB                  IMUL EDI,EBX
005EB18A  0F BF 1D 40 B2 7F 00      MOVSX EBX,word ptr [0x007fb240]
005EB191  0F BF D2                  MOVSX EDX,DX
005EB194  0F AF DA                  IMUL EBX,EDX
005EB197  0F BF D0                  MOVSX EDX,AX
005EB19A  03 FB                     ADD EDI,EBX
005EB19C  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
005EB19F  03 FA                     ADD EDI,EDX
005EB1A1  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
005EB1A7  8B 3C FA                  MOV EDI,dword ptr [EDX + EDI*0x8]
005EB1AA  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
005EB1AD  EB 02                     JMP 0x005eb1b1
LAB_005eb1af:
005EB1AF  33 FF                     XOR EDI,EDI
LAB_005eb1b1:
005EB1B1  85 FF                     TEST EDI,EDI
005EB1B3  75 21                     JNZ 0x005eb1d6
005EB1B5  8B 7E 18                  MOV EDI,dword ptr [ESI + 0x18]
005EB1B8  57                        PUSH EDI
005EB1B9  56                        PUSH ESI
005EB1BA  6A 00                     PUSH 0x0
005EB1BC  51                        PUSH ECX
005EB1BD  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
005EB1C3  52                        PUSH EDX
005EB1C4  50                        PUSH EAX
005EB1C5  E8 5B 61 E1 FF            CALL 0x00401325
005EB1CA  85 C0                     TEST EAX,EAX
005EB1CC  75 08                     JNZ 0x005eb1d6
005EB1CE  FE 86 52 02 00 00         INC byte ptr [ESI + 0x252]
005EB1D4  EB 02                     JMP 0x005eb1d8
LAB_005eb1d6:
005EB1D6  33 DB                     XOR EBX,EBX
LAB_005eb1d8:
005EB1D8  85 DB                     TEST EBX,EBX
005EB1DA  75 1A                     JNZ 0x005eb1f6
005EB1DC  8B CE                     MOV ECX,ESI
005EB1DE  E8 7F 92 E1 FF            CALL 0x00404462
005EB1E3  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
005EB1E6  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005EB1EB  33 C0                     XOR EAX,EAX
005EB1ED  5F                        POP EDI
005EB1EE  5E                        POP ESI
005EB1EF  5B                        POP EBX
005EB1F0  8B E5                     MOV ESP,EBP
005EB1F2  5D                        POP EBP
005EB1F3  C2 04 00                  RET 0x4
LAB_005eb1f6:
005EB1F6  8A 8E 52 02 00 00         MOV CL,byte ptr [ESI + 0x252]
005EB1FC  FE C9                     DEC CL
005EB1FE  8A C1                     MOV AL,CL
005EB200  88 8E 52 02 00 00         MOV byte ptr [ESI + 0x252],CL
005EB206  3C 01                     CMP AL,0x1
005EB208  0F 86 C9 00 00 00         JBE 0x005eb2d7
005EB20E  0F BF 86 48 02 00 00      MOVSX EAX,word ptr [ESI + 0x248]
005EB215  0F BF 96 4A 02 00 00      MOVSX EDX,word ptr [ESI + 0x24a]
005EB21C  0F BF 8E 4C 02 00 00      MOVSX ECX,word ptr [ESI + 0x24c]
005EB223  BB 01 00 00 00            MOV EBX,0x1
005EB228  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
005EB22B  66 85 C0                  TEST AX,AX
005EB22E  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
005EB231  7C 57                     JL 0x005eb28a
005EB233  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
005EB23A  7D 4E                     JGE 0x005eb28a
005EB23C  66 85 D2                  TEST DX,DX
005EB23F  7C 49                     JL 0x005eb28a
005EB241  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
005EB248  7D 40                     JGE 0x005eb28a
005EB24A  66 85 C9                  TEST CX,CX
005EB24D  7C 3B                     JL 0x005eb28a
005EB24F  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
005EB256  7D 32                     JGE 0x005eb28a
005EB258  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
005EB25F  0F BF D9                  MOVSX EBX,CX
005EB262  0F AF FB                  IMUL EDI,EBX
005EB265  0F BF 1D 40 B2 7F 00      MOVSX EBX,word ptr [0x007fb240]
005EB26C  0F BF D2                  MOVSX EDX,DX
005EB26F  0F AF DA                  IMUL EBX,EDX
005EB272  0F BF D0                  MOVSX EDX,AX
005EB275  03 FB                     ADD EDI,EBX
005EB277  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
005EB27A  03 FA                     ADD EDI,EDX
005EB27C  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
005EB282  8B 3C FA                  MOV EDI,dword ptr [EDX + EDI*0x8]
005EB285  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
005EB288  EB 02                     JMP 0x005eb28c
LAB_005eb28a:
005EB28A  33 FF                     XOR EDI,EDI
LAB_005eb28c:
005EB28C  85 FF                     TEST EDI,EDI
005EB28E  75 21                     JNZ 0x005eb2b1
005EB290  8B 7E 18                  MOV EDI,dword ptr [ESI + 0x18]
005EB293  57                        PUSH EDI
005EB294  56                        PUSH ESI
005EB295  6A 00                     PUSH 0x0
005EB297  51                        PUSH ECX
005EB298  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
005EB29E  52                        PUSH EDX
005EB29F  50                        PUSH EAX
005EB2A0  E8 80 60 E1 FF            CALL 0x00401325
005EB2A5  85 C0                     TEST EAX,EAX
005EB2A7  75 08                     JNZ 0x005eb2b1
005EB2A9  FE 86 52 02 00 00         INC byte ptr [ESI + 0x252]
005EB2AF  EB 02                     JMP 0x005eb2b3
LAB_005eb2b1:
005EB2B1  33 DB                     XOR EBX,EBX
LAB_005eb2b3:
005EB2B3  85 DB                     TEST EBX,EBX
005EB2B5  75 1A                     JNZ 0x005eb2d1
005EB2B7  8B CE                     MOV ECX,ESI
005EB2B9  E8 A4 91 E1 FF            CALL 0x00404462
005EB2BE  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
005EB2C1  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005EB2C6  33 C0                     XOR EAX,EAX
005EB2C8  5F                        POP EDI
005EB2C9  5E                        POP ESI
005EB2CA  5B                        POP EBX
005EB2CB  8B E5                     MOV ESP,EBP
005EB2CD  5D                        POP EBP
005EB2CE  C2 04 00                  RET 0x4
LAB_005eb2d1:
005EB2D1  FE 8E 52 02 00 00         DEC byte ptr [ESI + 0x252]
LAB_005eb2d7:
005EB2D7  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
005EB2DD  85 C9                     TEST ECX,ECX
005EB2DF  74 16                     JZ 0x005eb2f7
005EB2E1  66 8B 46 32               MOV AX,word ptr [ESI + 0x32]
005EB2E5  56                        PUSH ESI
005EB2E6  50                        PUSH EAX
005EB2E7  E8 21 91 E1 FF            CALL 0x0040440d
005EB2EC  85 C0                     TEST EAX,EAX
005EB2EE  74 07                     JZ 0x005eb2f7
005EB2F0  8B CE                     MOV ECX,ESI
005EB2F2  E8 6B 91 E1 FF            CALL 0x00404462
LAB_005eb2f7:
005EB2F7  8B CE                     MOV ECX,ESI
005EB2F9  E8 05 96 E1 FF            CALL 0x00404903
005EB2FE  6A 00                     PUSH 0x0
005EB300  8B CE                     MOV ECX,ESI
005EB302  E8 07 68 E1 FF            CALL 0x00401b0e
005EB307  8A 86 B9 02 00 00         MOV AL,byte ptr [ESI + 0x2b9]
005EB30D  84 C0                     TEST AL,AL
005EB30F  0F 84 04 06 00 00         JZ 0x005eb919
005EB315  6A 00                     PUSH 0x0
005EB317  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
005EB31D  E8 60 76 E1 FF            CALL 0x00402982
005EB322  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
005EB325  C6 86 B9 02 00 00 01      MOV byte ptr [ESI + 0x2b9],0x1
005EB32C  C6 86 DE 02 00 00 00      MOV byte ptr [ESI + 0x2de],0x0
005EB333  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005EB338  33 C0                     XOR EAX,EAX
005EB33A  5F                        POP EDI
005EB33B  5E                        POP ESI
005EB33C  5B                        POP EBX
005EB33D  8B E5                     MOV ESP,EBP
005EB33F  5D                        POP EBP
005EB340  C2 04 00                  RET 0x4
LAB_005eb343:
005EB343  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005EB346  BF 06 00 00 00            MOV EDI,0x6
005EB34B  8B CE                     MOV ECX,ESI
005EB34D  39 BE 3A 02 00 00         CMP dword ptr [ESI + 0x23a],EDI
005EB353  75 18                     JNZ 0x005eb36d
005EB355  E8 08 91 E1 FF            CALL 0x00404462
005EB35A  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
005EB35D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005EB362  33 C0                     XOR EAX,EAX
005EB364  5F                        POP EDI
005EB365  5E                        POP ESI
005EB366  5B                        POP EBX
005EB367  8B E5                     MOV ESP,EBP
005EB369  5D                        POP EBP
005EB36A  C2 04 00                  RET 0x4
LAB_005eb36d:
005EB36D  E8 77 AA E1 FF            CALL 0x00405de9
005EB372  84 C0                     TEST AL,AL
005EB374  88 86 DE 02 00 00         MOV byte ptr [ESI + 0x2de],AL
005EB37A  74 7B                     JZ 0x005eb3f7
005EB37C  8B 8E 77 02 00 00         MOV ECX,dword ptr [ESI + 0x277]
005EB382  8B 96 7B 02 00 00         MOV EDX,dword ptr [ESI + 0x27b]
005EB388  8B 86 7F 02 00 00         MOV EAX,dword ptr [ESI + 0x27f]
005EB38E  89 8E BE 02 00 00         MOV dword ptr [ESI + 0x2be],ECX
005EB394  8B CE                     MOV ECX,ESI
005EB396  89 96 C2 02 00 00         MOV dword ptr [ESI + 0x2c2],EDX
005EB39C  89 86 C6 02 00 00         MOV dword ptr [ESI + 0x2c6],EAX
005EB3A2  E8 EF 5C E1 FF            CALL 0x00401096
005EB3A7  8B 86 D2 02 00 00         MOV EAX,dword ptr [ESI + 0x2d2]
005EB3AD  85 C0                     TEST EAX,EAX
005EB3AF  7C 15                     JL 0x005eb3c6
005EB3B1  8B CE                     MOV ECX,ESI
005EB3B3  E8 2D A9 E1 FF            CALL 0x00405ce5
005EB3B8  85 C0                     TEST EAX,EAX
005EB3BA  74 0A                     JZ 0x005eb3c6
005EB3BC  C7 86 D2 02 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x2d2],0xffffffff
LAB_005eb3c6:
005EB3C6  6A 00                     PUSH 0x0
005EB3C8  8B CE                     MOV ECX,ESI
005EB3CA  E8 3F 67 E1 FF            CALL 0x00401b0e
005EB3CF  8A 86 20 03 00 00         MOV AL,byte ptr [ESI + 0x320]
005EB3D5  84 C0                     TEST AL,AL
005EB3D7  0F 84 3C 05 00 00         JZ 0x005eb919
005EB3DD  8B CE                     MOV ECX,ESI
005EB3DF  E8 ED 8F E1 FF            CALL 0x004043d1
005EB3E4  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
005EB3E7  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005EB3EC  33 C0                     XOR EAX,EAX
005EB3EE  5F                        POP EDI
005EB3EF  5E                        POP ESI
005EB3F0  5B                        POP EBX
005EB3F1  8B E5                     MOV ESP,EBP
005EB3F3  5D                        POP EBP
005EB3F4  C2 04 00                  RET 0x4
LAB_005eb3f7:
005EB3F7  39 BE 3A 02 00 00         CMP dword ptr [ESI + 0x23a],EDI
005EB3FD  0F 85 16 05 00 00         JNZ 0x005eb919
005EB403  8B CE                     MOV ECX,ESI
005EB405  E8 58 90 E1 FF            CALL 0x00404462
005EB40A  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
005EB40D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005EB412  33 C0                     XOR EAX,EAX
005EB414  5F                        POP EDI
005EB415  5E                        POP ESI
005EB416  5B                        POP EBX
005EB417  8B E5                     MOV ESP,EBP
005EB419  5D                        POP EBP
005EB41A  C2 04 00                  RET 0x4
LAB_005eb41d:
005EB41D  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005EB420  8B 7E 18                  MOV EDI,dword ptr [ESI + 0x18]
005EB423  0F BF 86 46 02 00 00      MOVSX EAX,word ptr [ESI + 0x246]
005EB42A  0F BF 8E 44 02 00 00      MOVSX ECX,word ptr [ESI + 0x244]
005EB431  0F BF 96 42 02 00 00      MOVSX EDX,word ptr [ESI + 0x242]
005EB438  57                        PUSH EDI
005EB439  56                        PUSH ESI
005EB43A  6A 00                     PUSH 0x0
005EB43C  50                        PUSH EAX
005EB43D  51                        PUSH ECX
005EB43E  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
005EB444  52                        PUSH EDX
005EB445  E8 77 9A E1 FF            CALL 0x00404ec1
005EB44A  85 C0                     TEST EAX,EAX
005EB44C  75 06                     JNZ 0x005eb454
005EB44E  FE 8E 52 02 00 00         DEC byte ptr [ESI + 0x252]
LAB_005eb454:
005EB454  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
005EB45A  E8 76 6D E1 FF            CALL 0x004021d5
005EB45F  8A 86 E4 02 00 00         MOV AL,byte ptr [ESI + 0x2e4]
005EB465  84 C0                     TEST AL,AL
005EB467  0F 84 AC 04 00 00         JZ 0x005eb919
005EB46D  A1 74 A1 7F 00            MOV EAX,[0x007fa174]
005EB472  85 C0                     TEST EAX,EAX
005EB474  0F 84 9F 04 00 00         JZ 0x005eb919
005EB47A  8B CE                     MOV ECX,ESI
005EB47C  E8 59 72 E1 FF            CALL 0x004026da
005EB481  66 8B 4E 32               MOV CX,word ptr [ESI + 0x32]
005EB485  68 FE 00 00 00            PUSH 0xfe
005EB48A  56                        PUSH ESI
005EB48B  51                        PUSH ECX
005EB48C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
005EB492  E8 C6 85 E1 FF            CALL 0x00403a5d
005EB497  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
005EB49A  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005EB49F  33 C0                     XOR EAX,EAX
005EB4A1  5F                        POP EDI
005EB4A2  5E                        POP ESI
005EB4A3  5B                        POP EBX
005EB4A4  8B E5                     MOV ESP,EBP
005EB4A6  5D                        POP EBP
005EB4A7  C2 04 00                  RET 0x4
LAB_005eb4aa:
005EB4AA  2D 08 01 00 00            SUB EAX,0x108
005EB4AF  74 4A                     JZ 0x005eb4fb
005EB4B1  83 E8 07                  SUB EAX,0x7
005EB4B4  0F 85 5F 04 00 00         JNZ 0x005eb919
005EB4BA  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005EB4BD  8D 55 F8                  LEA EDX,[EBP + -0x8]
005EB4C0  52                        PUSH EDX
005EB4C1  8B CE                     MOV ECX,ESI
005EB4C3  E8 14 98 E1 FF            CALL 0x00404cdc
005EB4C8  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005EB4CB  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
005EB4CE  51                        PUSH ECX
005EB4CF  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005EB4D5  50                        PUSH EAX
005EB4D6  52                        PUSH EDX
005EB4D7  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005EB4DA  E8 1A 71 E1 FF            CALL 0x004025f9
005EB4DF  8D 45 F4                  LEA EAX,[EBP + -0xc]
005EB4E2  50                        PUSH EAX
005EB4E3  E8 78 FB 0B 00            CALL 0x006ab060
005EB4E8  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
005EB4EB  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005EB4F0  33 C0                     XOR EAX,EAX
005EB4F2  5F                        POP EDI
005EB4F3  5E                        POP ESI
005EB4F4  5B                        POP EBX
005EB4F5  8B E5                     MOV ESP,EBP
005EB4F7  5D                        POP EBP
005EB4F8  C2 04 00                  RET 0x4
LAB_005eb4fb:
005EB4FB  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005EB4FE  8B CE                     MOV ECX,ESI
005EB500  E8 FE 93 E1 FF            CALL 0x00404903
005EB505  6A 00                     PUSH 0x0
005EB507  8B CE                     MOV ECX,ESI
005EB509  E8 00 66 E1 FF            CALL 0x00401b0e
005EB50E  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
005EB511  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005EB516  33 C0                     XOR EAX,EAX
005EB518  5F                        POP EDI
005EB519  5E                        POP ESI
005EB51A  5B                        POP EBX
005EB51B  8B E5                     MOV ESP,EBP
005EB51D  5D                        POP EBP
005EB51E  C2 04 00                  RET 0x4
LAB_005eb521:
005EB521  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005EB524  8B 79 14                  MOV EDI,dword ptr [ECX + 0x14]
005EB527  8B 86 3A 02 00 00         MOV EAX,dword ptr [ESI + 0x23a]
005EB52D  83 F8 05                  CMP EAX,0x5
005EB530  0F 84 E3 03 00 00         JZ 0x005eb919
005EB536  83 F8 06                  CMP EAX,0x6
005EB539  0F 84 DA 03 00 00         JZ 0x005eb919
005EB53F  8B 07                     MOV EAX,dword ptr [EDI]
005EB541  8B 16                     MOV EDX,dword ptr [ESI]
005EB543  50                        PUSH EAX
005EB544  8B CE                     MOV ECX,ESI
005EB546  FF 92 24 01 00 00         CALL dword ptr [EDX + 0x124]
005EB54C  85 C0                     TEST EAX,EAX
005EB54E  0F 84 C5 03 00 00         JZ 0x005eb919
005EB554  6A 00                     PUSH 0x0
005EB556  6A 01                     PUSH 0x1
005EB558  8B CE                     MOV ECX,ESI
005EB55A  E8 CE 69 E1 FF            CALL 0x00401f2d
005EB55F  8A 4F 08                  MOV CL,byte ptr [EDI + 0x8]
005EB562  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
005EB565  88 8E 0E 03 00 00         MOV byte ptr [ESI + 0x30e],CL
005EB56B  66 8B 57 0C               MOV DX,word ptr [EDI + 0xc]
005EB56F  66 89 96 0F 03 00 00      MOV word ptr [ESI + 0x30f],DX
005EB576  C6 86 0D 03 00 00 01      MOV byte ptr [ESI + 0x30d],0x1
005EB57D  C7 86 3A 02 00 00 05 00 00 00  MOV dword ptr [ESI + 0x23a],0x5
005EB587  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005EB58C  33 C0                     XOR EAX,EAX
005EB58E  5F                        POP EDI
005EB58F  5E                        POP ESI
005EB590  5B                        POP EBX
005EB591  8B E5                     MOV ESP,EBP
005EB593  5D                        POP EBP
005EB594  C2 04 00                  RET 0x4
LAB_005eb597:
005EB597  05 EE FE FF FF            ADD EAX,0xfffffeee
005EB59C  83 F8 17                  CMP EAX,0x17
005EB59F  0F 87 74 03 00 00         JA 0x005eb919
005EB5A5  33 D2                     XOR EDX,EDX
005EB5A7  8A 90 90 B9 5E 00         MOV DL,byte ptr [EAX + 0x5eb990]
switchD_005eb5ad::switchD:
005EB5AD  FF 24 95 7C B9 5E 00      JMP dword ptr [EDX*0x4 + 0x5eb97c]
switchD_005eb5ad::caseD_128:
005EB5B4  8B 79 14                  MOV EDI,dword ptr [ECX + 0x14]
005EB5B7  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005EB5BA  8A 47 18                  MOV AL,byte ptr [EDI + 0x18]
005EB5BD  88 86 15 03 00 00         MOV byte ptr [ESI + 0x315],AL
005EB5C3  8A 86 4E 02 00 00         MOV AL,byte ptr [ESI + 0x24e]
005EB5C9  84 C0                     TEST AL,AL
005EB5CB  74 4B                     JZ 0x005eb618
005EB5CD  66 8B 86 AB 02 00 00      MOV AX,word ptr [ESI + 0x2ab]
005EB5D4  66 3D FF FF               CMP AX,0xffff
005EB5D8  74 3E                     JZ 0x005eb618
005EB5DA  8B 9E AD 02 00 00         MOV EBX,dword ptr [ESI + 0x2ad]
005EB5E0  85 DB                     TEST EBX,EBX
005EB5E2  75 1B                     JNZ 0x005eb5ff
005EB5E4  8A 8E A3 02 00 00         MOV CL,byte ptr [ESI + 0x2a3]
005EB5EA  6A 01                     PUSH 0x1
005EB5EC  50                        PUSH EAX
005EB5ED  51                        PUSH ECX
005EB5EE  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
005EB5F4  E8 C1 72 E1 FF            CALL 0x004028ba
005EB5F9  8B D8                     MOV EBX,EAX
005EB5FB  85 DB                     TEST EBX,EBX
005EB5FD  74 19                     JZ 0x005eb618
LAB_005eb5ff:
005EB5FF  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
005EB602  8B CB                     MOV ECX,EBX
005EB604  52                        PUSH EDX
005EB605  E8 63 74 E1 FF            CALL 0x00402a6d
005EB60A  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
005EB60D  8B 06                     MOV EAX,dword ptr [ESI]
005EB60F  51                        PUSH ECX
005EB610  8B CE                     MOV ECX,ESI
005EB612  FF 90 AC 00 00 00         CALL dword ptr [EAX + 0xac]
LAB_005eb618:
005EB618  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
005EB61B  83 C0 FE                  ADD EAX,-0x2
005EB61E  83 F8 03                  CMP EAX,0x3
005EB621  0F 87 26 01 00 00         JA 0x005eb74d
switchD_005eb627::switchD:
005EB627  FF 24 85 A8 B9 5E 00      JMP dword ptr [EAX*0x4 + 0x5eb9a8]
switchD_005eb627::caseD_2:
005EB62E  8B 16                     MOV EDX,dword ptr [ESI]
005EB630  68 20 4E 00 00            PUSH 0x4e20
005EB635  8B CE                     MOV ECX,ESI
005EB637  FF 92 24 01 00 00         CALL dword ptr [EDX + 0x124]
005EB63D  85 C0                     TEST EAX,EAX
005EB63F  0F 84 D4 02 00 00         JZ 0x005eb919
005EB645  6A 00                     PUSH 0x0
005EB647  6A 01                     PUSH 0x1
005EB649  8B CE                     MOV ECX,ESI
005EB64B  E8 DD 68 E1 FF            CALL 0x00401f2d
005EB650  83 7F 18 04               CMP dword ptr [EDI + 0x18],0x4
005EB654  75 14                     JNZ 0x005eb66a
005EB656  8B 86 ED 01 00 00         MOV EAX,dword ptr [ESI + 0x1ed]
005EB65C  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
005EB662  6A 08                     PUSH 0x8
005EB664  50                        PUSH EAX
005EB665  E8 D6 E6 0F 00            CALL 0x006e9d40
LAB_005eb66a:
005EB66A  8A 4F 08                  MOV CL,byte ptr [EDI + 0x8]
005EB66D  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
005EB670  88 8E 0E 03 00 00         MOV byte ptr [ESI + 0x30e],CL
005EB676  66 8B 57 0C               MOV DX,word ptr [EDI + 0xc]
005EB67A  66 89 96 0F 03 00 00      MOV word ptr [ESI + 0x30f],DX
005EB681  C7 86 3A 02 00 00 05 00 00 00  MOV dword ptr [ESI + 0x23a],0x5
005EB68B  C6 86 0D 03 00 00 01      MOV byte ptr [ESI + 0x30d],0x1
005EB692  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005EB697  33 C0                     XOR EAX,EAX
005EB699  5F                        POP EDI
005EB69A  5E                        POP ESI
005EB69B  5B                        POP EBX
005EB69C  8B E5                     MOV ESP,EBP
005EB69E  5D                        POP EBP
005EB69F  C2 04 00                  RET 0x4
switchD_005eb627::caseD_3:
005EB6A2  8A 47 08                  MOV AL,byte ptr [EDI + 0x8]
005EB6A5  6A 00                     PUSH 0x0
005EB6A7  88 86 0E 03 00 00         MOV byte ptr [ESI + 0x30e],AL
005EB6AD  66 8B 4F 0C               MOV CX,word ptr [EDI + 0xc]
005EB6B1  66 89 8E 0F 03 00 00      MOV word ptr [ESI + 0x30f],CX
005EB6B8  8B 8E C6 02 00 00         MOV ECX,dword ptr [ESI + 0x2c6]
005EB6BE  C6 86 0D 03 00 00 01      MOV byte ptr [ESI + 0x30d],0x1
005EB6C5  C7 86 3A 02 00 00 05 00 00 00  MOV dword ptr [ESI + 0x23a],0x5
005EB6CF  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
005EB6D5  51                        PUSH ECX
005EB6D6  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
005EB6DC  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
005EB6E2  8B 96 C2 02 00 00         MOV EDX,dword ptr [ESI + 0x2c2]
005EB6E8  83 C0 15                  ADD EAX,0x15
005EB6EB  52                        PUSH EDX
005EB6EC  89 86 E0 02 00 00         MOV dword ptr [ESI + 0x2e0],EAX
005EB6F2  8B 86 BE 02 00 00         MOV EAX,dword ptr [ESI + 0x2be]
005EB6F8  50                        PUSH EAX
005EB6F9  6A 01                     PUSH 0x1
005EB6FB  E8 CC 9B E1 FF            CALL 0x004052cc
005EB700  50                        PUSH EAX
005EB701  E8 9F 9A E1 FF            CALL 0x004051a5
005EB706  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
005EB709  83 C4 18                  ADD ESP,0x18
005EB70C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005EB711  33 C0                     XOR EAX,EAX
005EB713  5F                        POP EDI
005EB714  5E                        POP ESI
005EB715  5B                        POP EBX
005EB716  8B E5                     MOV ESP,EBP
005EB718  5D                        POP EBP
005EB719  C2 04 00                  RET 0x4
switchD_005eb627::caseD_5:
005EB71C  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
005EB71F  C7 86 D2 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x2d2],0x0
005EB729  C7 86 B5 02 00 00 03 00 00 00  MOV dword ptr [ESI + 0x2b5],0x3
005EB733  C7 86 3A 02 00 00 05 00 00 00  MOV dword ptr [ESI + 0x23a],0x5
005EB73D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005EB742  33 C0                     XOR EAX,EAX
005EB744  5F                        POP EDI
005EB745  5E                        POP ESI
005EB746  5B                        POP EBX
005EB747  8B E5                     MOV ESP,EBP
005EB749  5D                        POP EBP
005EB74A  C2 04 00                  RET 0x4
switchD_005eb627::default:
005EB74D  8A 4F 08                  MOV CL,byte ptr [EDI + 0x8]
005EB750  8B 86 D6 02 00 00         MOV EAX,dword ptr [ESI + 0x2d6]
005EB756  88 8E 0E 03 00 00         MOV byte ptr [ESI + 0x30e],CL
005EB75C  66 8B 57 0C               MOV DX,word ptr [EDI + 0xc]
005EB760  85 C0                     TEST EAX,EAX
005EB762  66 89 96 0F 03 00 00      MOV word ptr [ESI + 0x30f],DX
005EB769  C6 86 0D 03 00 00 01      MOV byte ptr [ESI + 0x30d],0x1
005EB770  7C 0B                     JL 0x005eb77d
005EB772  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
005EB778  E8 92 85 E1 FF            CALL 0x00403d0f
LAB_005eb77d:
005EB77D  8B CE                     MOV ECX,ESI
005EB77F  E8 DE 8C E1 FF            CALL 0x00404462
005EB784  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
005EB787  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005EB78C  33 C0                     XOR EAX,EAX
005EB78E  5F                        POP EDI
005EB78F  5E                        POP ESI
005EB790  5B                        POP EBX
005EB791  8B E5                     MOV ESP,EBP
005EB793  5D                        POP EBP
005EB794  C2 04 00                  RET 0x4
switchD_005eb5ad::caseD_112:
005EB797  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005EB79A  8B 88 D6 02 00 00         MOV ECX,dword ptr [EAX + 0x2d6]
005EB7A0  85 C9                     TEST ECX,ECX
005EB7A2  0F 8C 71 01 00 00         JL 0x005eb919
005EB7A8  8D 88 D5 01 00 00         LEA ECX,[EAX + 0x1d5]
005EB7AE  E8 DD 72 E1 FF            CALL 0x00402a90
005EB7B3  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
005EB7B6  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005EB7BB  33 C0                     XOR EAX,EAX
005EB7BD  5F                        POP EDI
005EB7BE  5E                        POP ESI
005EB7BF  5B                        POP EBX
005EB7C0  8B E5                     MOV ESP,EBP
005EB7C2  5D                        POP EBP
005EB7C3  C2 04 00                  RET 0x4
switchD_005eb5ad::caseD_113:
005EB7C6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005EB7C9  8B 88 D6 02 00 00         MOV ECX,dword ptr [EAX + 0x2d6]
005EB7CF  85 C9                     TEST ECX,ECX
005EB7D1  0F 8C 42 01 00 00         JL 0x005eb919
005EB7D7  8D 88 D5 01 00 00         LEA ECX,[EAX + 0x1d5]
005EB7DD  8B 80 D5 01 00 00         MOV EAX,dword ptr [EAX + 0x1d5]
005EB7E3  FF 10                     CALL dword ptr [EAX]
005EB7E5  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
005EB7E8  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005EB7ED  33 C0                     XOR EAX,EAX
005EB7EF  5F                        POP EDI
005EB7F0  5E                        POP ESI
005EB7F1  5B                        POP EBX
005EB7F2  8B E5                     MOV ESP,EBP
005EB7F4  5D                        POP EBP
005EB7F5  C2 04 00                  RET 0x4
switchD_005eb5ad::caseD_129:
005EB7F8  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
005EB7FB  83 BB 3A 02 00 00 04      CMP dword ptr [EBX + 0x23a],0x4
005EB802  0F 85 11 01 00 00         JNZ 0x005eb919
005EB808  8B 83 A7 02 00 00         MOV EAX,dword ptr [EBX + 0x2a7]
005EB80E  85 C0                     TEST EAX,EAX
005EB810  0F 84 03 01 00 00         JZ 0x005eb919
005EB816  8A 8B 4F 02 00 00         MOV CL,byte ptr [EBX + 0x24f]
005EB81C  84 C9                     TEST CL,CL
005EB81E  0F 84 F5 00 00 00         JZ 0x005eb919
005EB824  66 81 BB AB 02 00 00 FF FF  CMP word ptr [EBX + 0x2ab],0xffff
005EB82D  75 23                     JNZ 0x005eb852
005EB82F  8D 4D F0                  LEA ECX,[EBP + -0x10]
005EB832  51                        PUSH ECX
005EB833  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005EB839  50                        PUSH EAX
005EB83A  E8 91 AA 0F 00            CALL 0x006e62d0
005EB83F  83 F8 FC                  CMP EAX,-0x4
005EB842  74 0E                     JZ 0x005eb852
005EB844  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
005EB847  66 8B 42 32               MOV AX,word ptr [EDX + 0x32]
005EB84B  66 89 83 AB 02 00 00      MOV word ptr [EBX + 0x2ab],AX
LAB_005eb852:
005EB852  66 8B 83 AB 02 00 00      MOV AX,word ptr [EBX + 0x2ab]
005EB859  66 3D FF FF               CMP AX,0xffff
005EB85D  0F 84 B6 00 00 00         JZ 0x005eb919
005EB863  8B B3 AD 02 00 00         MOV ESI,dword ptr [EBX + 0x2ad]
005EB869  85 F6                     TEST ESI,ESI
005EB86B  75 1B                     JNZ 0x005eb888
005EB86D  8A 8B A3 02 00 00         MOV CL,byte ptr [EBX + 0x2a3]
005EB873  6A 01                     PUSH 0x1
005EB875  50                        PUSH EAX
005EB876  51                        PUSH ECX
005EB877  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
005EB87D  E8 38 70 E1 FF            CALL 0x004028ba
005EB882  8B F0                     MOV ESI,EAX
005EB884  85 F6                     TEST ESI,ESI
005EB886  74 7C                     JZ 0x005eb904
LAB_005eb888:
005EB888  0F BF 56 41               MOVSX EDX,word ptr [ESI + 0x41]
005EB88C  89 93 77 02 00 00         MOV dword ptr [EBX + 0x277],EDX
005EB892  8D 7B 34                  LEA EDI,[EBX + 0x34]
005EB895  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
005EB899  89 83 7B 02 00 00         MOV dword ptr [EBX + 0x27b],EAX
005EB89F  B8 89 88 88 88            MOV EAX,0x88888889
005EB8A4  0F BF 4E 45               MOVSX ECX,word ptr [ESI + 0x45]
005EB8A8  89 8B 7F 02 00 00         MOV dword ptr [EBX + 0x27f],ECX
005EB8AE  0F BF 4E 6C               MOVSX ECX,word ptr [ESI + 0x6c]
005EB8B2  F7 E9                     IMUL ECX
005EB8B4  03 D1                     ADD EDX,ECX
005EB8B6  B9 17 00 00 00            MOV ECX,0x17
005EB8BB  C1 FA 03                  SAR EDX,0x3
005EB8BE  8B C2                     MOV EAX,EDX
005EB8C0  C1 E8 1F                  SHR EAX,0x1f
005EB8C3  03 D0                     ADD EDX,EAX
005EB8C5  83 C6 34                  ADD ESI,0x34
005EB8C8  89 93 BA 02 00 00         MOV dword ptr [EBX + 0x2ba],EDX
005EB8CE  F3 A5                     MOVSD.REP ES:EDI,ESI
005EB8D0  66 A5                     MOVSW ES:EDI,ESI
005EB8D2  A4                        MOVSB ES:EDI,ESI
005EB8D3  8B 8B 77 02 00 00         MOV ECX,dword ptr [EBX + 0x277]
005EB8D9  8B 93 7B 02 00 00         MOV EDX,dword ptr [EBX + 0x27b]
005EB8DF  8B 83 7F 02 00 00         MOV EAX,dword ptr [EBX + 0x27f]
005EB8E5  C7 43 76 00 00 00 00      MOV dword ptr [EBX + 0x76],0x0
005EB8EC  66 C7 43 6E 2F 00         MOV word ptr [EBX + 0x6e],0x2f
005EB8F2  89 8B BE 02 00 00         MOV dword ptr [EBX + 0x2be],ECX
005EB8F8  89 93 C2 02 00 00         MOV dword ptr [EBX + 0x2c2],EDX
005EB8FE  89 83 C6 02 00 00         MOV dword ptr [EBX + 0x2c6],EAX
LAB_005eb904:
005EB904  8B CB                     MOV ECX,EBX
005EB906  E8 F8 8F E1 FF            CALL 0x00404903
005EB90B  8B 13                     MOV EDX,dword ptr [EBX]
005EB90D  8B CB                     MOV ECX,EBX
005EB90F  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
005EB915  85 C0                     TEST EAX,EAX
005EB917  75 52                     JNZ 0x005eb96b
switchD_005eb5ad::caseD_114:
005EB919  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
005EB91C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005EB921  33 C0                     XOR EAX,EAX
005EB923  5F                        POP EDI
005EB924  5E                        POP ESI
005EB925  5B                        POP EBX
005EB926  8B E5                     MOV ESP,EBP
005EB928  5D                        POP EBP
005EB929  C2 04 00                  RET 0x4
LAB_005eb92c:
005EB92C  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
005EB92F  68 10 E5 7C 00            PUSH 0x7ce510
005EB934  68 CC 4C 7A 00            PUSH 0x7a4ccc
005EB939  56                        PUSH ESI
005EB93A  6A 00                     PUSH 0x0
005EB93C  68 B2 01 00 00            PUSH 0x1b2
005EB941  68 EC E4 7C 00            PUSH 0x7ce4ec
005EB946  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005EB94C  E8 7F 1B 0C 00            CALL 0x006ad4d0
005EB951  83 C4 18                  ADD ESP,0x18
005EB954  85 C0                     TEST EAX,EAX
005EB956  74 01                     JZ 0x005eb959
005EB958  CC                        INT3
LAB_005eb959:
005EB959  68 B4 01 00 00            PUSH 0x1b4
005EB95E  68 EC E4 7C 00            PUSH 0x7ce4ec
005EB963  6A 00                     PUSH 0x0
005EB965  56                        PUSH ESI
005EB966  E8 D5 A4 0B 00            CALL 0x006a5e40
LAB_005eb96b:
005EB96B  5F                        POP EDI
005EB96C  5E                        POP ESI
005EB96D  B8 FF FF 00 00            MOV EAX,0xffff
005EB972  5B                        POP EBX
005EB973  8B E5                     MOV ESP,EBP
005EB975  5D                        POP EBP
005EB976  C2 04 00                  RET 0x4
