FUN_005ebd80:
005EBD80  55                        PUSH EBP
005EBD81  8B EC                     MOV EBP,ESP
005EBD83  83 EC 10                  SUB ESP,0x10
005EBD86  53                        PUSH EBX
005EBD87  56                        PUSH ESI
005EBD88  8B F1                     MOV ESI,ECX
005EBD8A  33 DB                     XOR EBX,EBX
005EBD8C  57                        PUSH EDI
005EBD8D  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
005EBD90  66 8B 86 4A 03 00 00      MOV AX,word ptr [ESI + 0x34a]
005EBD97  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
005EBD9A  66 3B C3                  CMP AX,BX
005EBD9D  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
005EBDA0  0F BF C8                  MOVSX ECX,AX
005EBDA3  B8 79 19 8C 02            MOV EAX,0x28c1979
005EBDA8  7C 10                     JL 0x005ebdba
005EBDAA  F7 E9                     IMUL ECX
005EBDAC  D1 FA                     SAR EDX,0x1
005EBDAE  8B C2                     MOV EAX,EDX
005EBDB0  C1 E8 1F                  SHR EAX,0x1f
005EBDB3  03 D0                     ADD EDX,EAX
005EBDB5  0F BF C2                  MOVSX EAX,DX
005EBDB8  EB 0F                     JMP 0x005ebdc9
LAB_005ebdba:
005EBDBA  F7 E9                     IMUL ECX
005EBDBC  D1 FA                     SAR EDX,0x1
005EBDBE  8B CA                     MOV ECX,EDX
005EBDC0  C1 E9 1F                  SHR ECX,0x1f
005EBDC3  03 D1                     ADD EDX,ECX
005EBDC5  0F BF C2                  MOVSX EAX,DX
005EBDC8  48                        DEC EAX
LAB_005ebdc9:
005EBDC9  66 89 86 42 02 00 00      MOV word ptr [ESI + 0x242],AX
005EBDD0  66 8B 86 4C 03 00 00      MOV AX,word ptr [ESI + 0x34c]
005EBDD7  66 3B C3                  CMP AX,BX
005EBDDA  0F BF C8                  MOVSX ECX,AX
005EBDDD  B8 79 19 8C 02            MOV EAX,0x28c1979
005EBDE2  7C 10                     JL 0x005ebdf4
005EBDE4  F7 E9                     IMUL ECX
005EBDE6  D1 FA                     SAR EDX,0x1
005EBDE8  8B C2                     MOV EAX,EDX
005EBDEA  C1 E8 1F                  SHR EAX,0x1f
005EBDED  03 D0                     ADD EDX,EAX
005EBDEF  0F BF C2                  MOVSX EAX,DX
005EBDF2  EB 0F                     JMP 0x005ebe03
LAB_005ebdf4:
005EBDF4  F7 E9                     IMUL ECX
005EBDF6  D1 FA                     SAR EDX,0x1
005EBDF8  8B CA                     MOV ECX,EDX
005EBDFA  C1 E9 1F                  SHR ECX,0x1f
005EBDFD  03 D1                     ADD EDX,ECX
005EBDFF  0F BF C2                  MOVSX EAX,DX
005EBE02  48                        DEC EAX
LAB_005ebe03:
005EBE03  66 89 86 44 02 00 00      MOV word ptr [ESI + 0x244],AX
005EBE0A  66 8B 86 4E 03 00 00      MOV AX,word ptr [ESI + 0x34e]
005EBE11  66 3B C3                  CMP AX,BX
005EBE14  0F BF C8                  MOVSX ECX,AX
005EBE17  B8 1F 85 EB 51            MOV EAX,0x51eb851f
005EBE1C  7C 11                     JL 0x005ebe2f
005EBE1E  F7 E9                     IMUL ECX
005EBE20  C1 FA 06                  SAR EDX,0x6
005EBE23  8B C2                     MOV EAX,EDX
005EBE25  C1 E8 1F                  SHR EAX,0x1f
005EBE28  03 D0                     ADD EDX,EAX
005EBE2A  0F BF C2                  MOVSX EAX,DX
005EBE2D  EB 10                     JMP 0x005ebe3f
LAB_005ebe2f:
005EBE2F  F7 E9                     IMUL ECX
005EBE31  C1 FA 06                  SAR EDX,0x6
005EBE34  8B CA                     MOV ECX,EDX
005EBE36  C1 E9 1F                  SHR ECX,0x1f
005EBE39  03 D1                     ADD EDX,ECX
005EBE3B  0F BF C2                  MOVSX EAX,DX
005EBE3E  48                        DEC EAX
LAB_005ebe3f:
005EBE3F  66 89 86 46 02 00 00      MOV word ptr [ESI + 0x246],AX
005EBE46  66 8B 96 6B 04 00 00      MOV DX,word ptr [ESI + 0x46b]
005EBE4D  66 69 D2 C9 00            IMUL DX,DX,0xc9
005EBE52  66 8B 8E 6F 04 00 00      MOV CX,word ptr [ESI + 0x46f]
005EBE59  83 C2 64                  ADD EDX,0x64
005EBE5C  0F BF C2                  MOVSX EAX,DX
005EBE5F  66 69 C9 C9 00            IMUL CX,CX,0xc9
005EBE64  66 8B 96 73 04 00 00      MOV DX,word ptr [ESI + 0x473]
005EBE6B  C7 86 31 02 00 00 FD 00 00 00  MOV dword ptr [ESI + 0x231],0xfd
005EBE75  66 69 D2 C8 00            IMUL DX,DX,0xc8
005EBE7A  0F BF BE 4A 03 00 00      MOVSX EDI,word ptr [ESI + 0x34a]
005EBE81  83 C1 64                  ADD ECX,0x64
005EBE84  83 C2 64                  ADD EDX,0x64
005EBE87  3B C7                     CMP EAX,EDI
005EBE89  0F BF C9                  MOVSX ECX,CX
005EBE8C  0F BF D2                  MOVSX EDX,DX
005EBE8F  75 16                     JNZ 0x005ebea7
005EBE91  0F BF 86 4C 03 00 00      MOVSX EAX,word ptr [ESI + 0x34c]
005EBE98  3B C8                     CMP ECX,EAX
005EBE9A  75 0B                     JNZ 0x005ebea7
005EBE9C  0F BF 8E 4E 03 00 00      MOVSX ECX,word ptr [ESI + 0x34e]
005EBEA3  3B D1                     CMP EDX,ECX
005EBEA5  74 31                     JZ 0x005ebed8
LAB_005ebea7:
005EBEA7  66 8B 96 6B 04 00 00      MOV DX,word ptr [ESI + 0x46b]
005EBEAE  66 8B 86 6F 04 00 00      MOV AX,word ptr [ESI + 0x46f]
005EBEB5  66 8B 8E 73 04 00 00      MOV CX,word ptr [ESI + 0x473]
005EBEBC  66 89 96 42 02 00 00      MOV word ptr [ESI + 0x242],DX
005EBEC3  66 89 86 44 02 00 00      MOV word ptr [ESI + 0x244],AX
005EBECA  66 89 8E 46 02 00 00      MOV word ptr [ESI + 0x246],CX
005EBED1  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
LAB_005ebed8:
005EBED8  0F BF 86 42 02 00 00      MOVSX EAX,word ptr [ESI + 0x242]
005EBEDF  0F BF 96 44 02 00 00      MOVSX EDX,word ptr [ESI + 0x244]
005EBEE6  0F BF 8E 46 02 00 00      MOVSX ECX,word ptr [ESI + 0x246]
005EBEED  66 3B C3                  CMP AX,BX
005EBEF0  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
005EBEF3  7C 56                     JL 0x005ebf4b
005EBEF5  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
005EBEFC  7D 4D                     JGE 0x005ebf4b
005EBEFE  66 3B D3                  CMP DX,BX
005EBF01  7C 48                     JL 0x005ebf4b
005EBF03  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
005EBF0A  7D 3F                     JGE 0x005ebf4b
005EBF0C  66 3B CB                  CMP CX,BX
005EBF0F  7C 3A                     JL 0x005ebf4b
005EBF11  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
005EBF18  7D 31                     JGE 0x005ebf4b
005EBF1A  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
005EBF21  0F BF D9                  MOVSX EBX,CX
005EBF24  0F AF FB                  IMUL EDI,EBX
005EBF27  0F BF 1D 40 B2 7F 00      MOVSX EBX,word ptr [0x007fb240]
005EBF2E  0F BF D2                  MOVSX EDX,DX
005EBF31  0F AF DA                  IMUL EBX,EDX
005EBF34  0F BF D0                  MOVSX EDX,AX
005EBF37  03 FB                     ADD EDI,EBX
005EBF39  33 DB                     XOR EBX,EBX
005EBF3B  03 FA                     ADD EDI,EDX
005EBF3D  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
005EBF43  39 1C FA                  CMP dword ptr [EDX + EDI*0x8],EBX
005EBF46  75 39                     JNZ 0x005ebf81
005EBF48  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
LAB_005ebf4b:
005EBF4B  8B 7E 18                  MOV EDI,dword ptr [ESI + 0x18]
005EBF4E  57                        PUSH EDI
005EBF4F  56                        PUSH ESI
005EBF50  53                        PUSH EBX
005EBF51  51                        PUSH ECX
005EBF52  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
005EBF58  52                        PUSH EDX
005EBF59  50                        PUSH EAX
005EBF5A  E8 C6 53 E1 FF            CALL 0x00401325
005EBF5F  85 C0                     TEST EAX,EAX
005EBF61  75 1E                     JNZ 0x005ebf81
005EBF63  8A 86 52 02 00 00         MOV AL,byte ptr [ESI + 0x252]
005EBF69  FE C0                     INC AL
005EBF6B  88 86 52 02 00 00         MOV byte ptr [ESI + 0x252],AL
005EBF71  B8 01 00 00 00            MOV EAX,0x1
005EBF76  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005EBF79  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005EBF7C  E9 24 01 00 00            JMP 0x005ec0a5
LAB_005ebf81:
005EBF81  66 8B 86 42 02 00 00      MOV AX,word ptr [ESI + 0x242]
005EBF88  66 8B 8E 46 02 00 00      MOV CX,word ptr [ESI + 0x246]
005EBF8F  66 8B 96 44 02 00 00      MOV DX,word ptr [ESI + 0x244]
005EBF96  66 3B C3                  CMP AX,BX
005EBF99  0F 8C 88 02 00 00         JL 0x005ec227
005EBF9F  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
005EBFA6  0F 8D 7B 02 00 00         JGE 0x005ec227
005EBFAC  66 3B D3                  CMP DX,BX
005EBFAF  0F 8C 72 02 00 00         JL 0x005ec227
005EBFB5  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
005EBFBC  0F 8D 65 02 00 00         JGE 0x005ec227
005EBFC2  66 3B CB                  CMP CX,BX
005EBFC5  0F 8C 5C 02 00 00         JL 0x005ec227
005EBFCB  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
005EBFD2  0F 8D 4F 02 00 00         JGE 0x005ec227
005EBFD8  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
005EBFDF  0F BF C9                  MOVSX ECX,CX
005EBFE2  0F AF F9                  IMUL EDI,ECX
005EBFE5  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
005EBFEC  0F BF D2                  MOVSX EDX,DX
005EBFEF  0F AF CA                  IMUL ECX,EDX
005EBFF2  0F BF C0                  MOVSX EAX,AX
005EBFF5  03 F9                     ADD EDI,ECX
005EBFF7  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
005EBFFD  03 F8                     ADD EDI,EAX
005EBFFF  8B 3C F9                  MOV EDI,dword ptr [ECX + EDI*0x8]
005EC002  3B FB                     CMP EDI,EBX
005EC004  0F 84 1D 02 00 00         JZ 0x005ec227
005EC00A  8B 17                     MOV EDX,dword ptr [EDI]
005EC00C  8B CF                     MOV ECX,EDI
005EC00E  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
005EC011  83 F8 1B                  CMP EAX,0x1b
005EC014  74 0E                     JZ 0x005ec024
005EC016  83 F8 07                  CMP EAX,0x7
005EC019  74 09                     JZ 0x005ec024
005EC01B  83 F8 13                  CMP EAX,0x13
005EC01E  0F 85 03 02 00 00         JNZ 0x005ec227
LAB_005ec024:
005EC024  8B 07                     MOV EAX,dword ptr [EDI]
005EC026  68 FE 00 00 00            PUSH 0xfe
005EC02B  8B CF                     MOV ECX,EDI
005EC02D  FF 90 14 01 00 00         CALL dword ptr [EAX + 0x114]
005EC033  85 C0                     TEST EAX,EAX
005EC035  0F 84 EC 01 00 00         JZ 0x005ec227
005EC03B  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
005EC03E  8B 17                     MOV EDX,dword ptr [EDI]
005EC040  50                        PUSH EAX
005EC041  8B CF                     MOV ECX,EDI
005EC043  FF 92 18 01 00 00         CALL dword ptr [EDX + 0x118]
005EC049  8B 4F 24                  MOV ECX,dword ptr [EDI + 0x24]
005EC04C  89 8E A3 02 00 00         MOV dword ptr [ESI + 0x2a3],ECX
005EC052  66 8B 57 32               MOV DX,word ptr [EDI + 0x32]
005EC056  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
005EC05C  66 89 96 AB 02 00 00      MOV word ptr [ESI + 0x2ab],DX
005EC063  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
005EC066  3B CB                     CMP ECX,EBX
005EC068  89 86 A7 02 00 00         MOV dword ptr [ESI + 0x2a7],EAX
005EC06E  C6 86 4E 02 00 00 01      MOV byte ptr [ESI + 0x24e],0x1
005EC075  C6 86 4F 02 00 00 01      MOV byte ptr [ESI + 0x24f],0x1
005EC07C  C7 86 3A 02 00 00 04 00 00 00  MOV dword ptr [ESI + 0x23a],0x4
005EC086  74 13                     JZ 0x005ec09b
005EC088  8B 97 ED 01 00 00         MOV EDX,dword ptr [EDI + 0x1ed]
005EC08E  8B 86 ED 01 00 00         MOV EAX,dword ptr [ESI + 0x1ed]
005EC094  52                        PUSH EDX
005EC095  50                        PUSH EAX
005EC096  E8 C5 E3 0F 00            CALL 0x006ea460
LAB_005ec09b:
005EC09B  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
005EC09E  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
LAB_005ec0a5:
005EC0A5  8A 96 50 03 00 00         MOV DL,byte ptr [ESI + 0x350]
005EC0AB  B8 89 88 88 88            MOV EAX,0x88888889
005EC0B0  88 96 51 02 00 00         MOV byte ptr [ESI + 0x251],DL
005EC0B6  8B 96 50 03 00 00         MOV EDX,dword ptr [ESI + 0x350]
005EC0BC  F7 EA                     IMUL EDX
005EC0BE  8B 86 50 03 00 00         MOV EAX,dword ptr [ESI + 0x350]
005EC0C4  C7 86 36 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x236],0x0
005EC0CE  0F BF 8E 4A 03 00 00      MOVSX ECX,word ptr [ESI + 0x34a]
005EC0D5  0F BF BE 4C 03 00 00      MOVSX EDI,word ptr [ESI + 0x34c]
005EC0DC  0F BF 9E 4E 03 00 00      MOVSX EBX,word ptr [ESI + 0x34e]
005EC0E3  03 D0                     ADD EDX,EAX
005EC0E5  89 8E 77 02 00 00         MOV dword ptr [ESI + 0x277],ECX
005EC0EB  C1 FA 03                  SAR EDX,0x3
005EC0EE  8B C2                     MOV EAX,EDX
005EC0F0  89 8E BE 02 00 00         MOV dword ptr [ESI + 0x2be],ECX
005EC0F6  8B 8E 3E 03 00 00         MOV ECX,dword ptr [ESI + 0x33e]
005EC0FC  89 BE 7B 02 00 00         MOV dword ptr [ESI + 0x27b],EDI
005EC102  C1 E8 1F                  SHR EAX,0x1f
005EC105  03 D0                     ADD EDX,EAX
005EC107  51                        PUSH ECX
005EC108  8B CE                     MOV ECX,ESI
005EC10A  89 9E 7F 02 00 00         MOV dword ptr [ESI + 0x27f],EBX
005EC110  89 96 BA 02 00 00         MOV dword ptr [ESI + 0x2ba],EDX
005EC116  89 BE C2 02 00 00         MOV dword ptr [ESI + 0x2c2],EDI
005EC11C  89 9E C6 02 00 00         MOV dword ptr [ESI + 0x2c6],EBX
005EC122  E8 FB 6D E1 FF            CALL 0x00402f22
005EC127  8A 96 32 03 00 00         MOV DL,byte ptr [ESI + 0x332]
005EC12D  89 86 B1 02 00 00         MOV dword ptr [ESI + 0x2b1],EAX
005EC133  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005EC136  88 96 35 02 00 00         MOV byte ptr [ESI + 0x235],DL
005EC13C  85 C0                     TEST EAX,EAX
005EC13E  C7 86 3E 02 00 00 D0 07 00 00  MOV dword ptr [ESI + 0x23e],0x7d0
005EC148  0F 84 B9 00 00 00         JZ 0x005ec207
005EC14E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005EC151  85 C0                     TEST EAX,EAX
005EC153  75 59                     JNZ 0x005ec1ae
005EC155  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
005EC158  33 D2                     XOR EDX,EDX
005EC15A  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
005EC160  05 39 30 00 00            ADD EAX,0x3039
005EC165  B9 0B 00 00 00            MOV ECX,0xb
005EC16A  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
005EC16D  C1 E8 10                  SHR EAX,0x10
005EC170  F7 F1                     DIV ECX
005EC172  8B 8E 50 03 00 00         MOV ECX,dword ptr [ESI + 0x350]
005EC178  B8 1E 00 00 00            MOV EAX,0x1e
005EC17D  2B C2                     SUB EAX,EDX
005EC17F  8B 96 7F 02 00 00         MOV EDX,dword ptr [ESI + 0x27f]
005EC185  50                        PUSH EAX
005EC186  8B 86 7B 02 00 00         MOV EAX,dword ptr [ESI + 0x27b]
005EC18C  6A 00                     PUSH 0x0
005EC18E  83 EA 1E                  SUB EDX,0x1e
005EC191  51                        PUSH ECX
005EC192  8B 8E 77 02 00 00         MOV ECX,dword ptr [ESI + 0x277]
005EC198  52                        PUSH EDX
005EC199  50                        PUSH EAX
005EC19A  51                        PUSH ECX
005EC19B  8B CE                     MOV ECX,ESI
005EC19D  E8 24 7E E1 FF            CALL 0x00403fc6
005EC1A2  C7 86 3A 02 00 00 01 00 00 00  MOV dword ptr [ESI + 0x23a],0x1
005EC1AC  EB 59                     JMP 0x005ec207
LAB_005ec1ae:
005EC1AE  66 8B 86 46 02 00 00      MOV AX,word ptr [ESI + 0x246]
005EC1B5  8B 96 50 03 00 00         MOV EDX,dword ptr [ESI + 0x350]
005EC1BB  66 69 C0 C8 00            IMUL AX,AX,0xc8
005EC1C0  83 C0 64                  ADD EAX,0x64
005EC1C3  6A 1E                     PUSH 0x1e
005EC1C5  0F BF C8                  MOVSX ECX,AX
005EC1C8  6A 01                     PUSH 0x1
005EC1CA  52                        PUSH EDX
005EC1CB  66 8B 96 44 02 00 00      MOV DX,word ptr [ESI + 0x244]
005EC1D2  51                        PUSH ECX
005EC1D3  66 8B 8E 42 02 00 00      MOV CX,word ptr [ESI + 0x242]
005EC1DA  66 69 D2 C9 00            IMUL DX,DX,0xc9
005EC1DF  66 69 C9 C9 00            IMUL CX,CX,0xc9
005EC1E4  83 C2 64                  ADD EDX,0x64
005EC1E7  83 C1 64                  ADD ECX,0x64
005EC1EA  0F BF C2                  MOVSX EAX,DX
005EC1ED  0F BF D1                  MOVSX EDX,CX
005EC1F0  50                        PUSH EAX
005EC1F1  52                        PUSH EDX
005EC1F2  8B CE                     MOV ECX,ESI
005EC1F4  E8 CD 7D E1 FF            CALL 0x00403fc6
005EC1F9  85 C0                     TEST EAX,EAX
005EC1FB  74 0A                     JZ 0x005ec207
005EC1FD  C7 86 3A 02 00 00 02 00 00 00  MOV dword ptr [ESI + 0x23a],0x2
LAB_005ec207:
005EC207  83 C8 FF                  OR EAX,0xffffffff
005EC20A  89 86 D6 02 00 00         MOV dword ptr [ESI + 0x2d6],EAX
005EC210  89 86 D2 02 00 00         MOV dword ptr [ESI + 0x2d2],EAX
005EC216  A1 38 2A 80 00            MOV EAX,[0x00802a38]
005EC21B  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
005EC221  89 8E E0 02 00 00         MOV dword ptr [ESI + 0x2e0],ECX
LAB_005ec227:
005EC227  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005EC22A  5F                        POP EDI
005EC22B  5E                        POP ESI
005EC22C  5B                        POP EBX
005EC22D  8B E5                     MOV ESP,EBP
005EC22F  5D                        POP EBP
005EC230  C3                        RET
