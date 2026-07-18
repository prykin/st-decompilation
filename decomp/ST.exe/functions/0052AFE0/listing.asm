FUN_0052afe0:
0052AFE0  55                        PUSH EBP
0052AFE1  8B EC                     MOV EBP,ESP
0052AFE3  83 EC 2C                  SUB ESP,0x2c
0052AFE6  D9 45 0C                  FLD float ptr [EBP + 0xc]
0052AFE9  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
0052AFEF  D9 45 0C                  FLD float ptr [EBP + 0xc]
0052AFF2  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
0052AFF8  B8 02 00 00 00            MOV EAX,0x2
0052AFFD  53                        PUSH EBX
0052AFFE  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0052B001  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0052B004  56                        PUSH ESI
0052B005  57                        PUSH EDI
0052B006  DF E0                     FNSTSW AX
0052B008  BB 01 00 00 00            MOV EBX,0x1
0052B00D  33 FF                     XOR EDI,EDI
0052B00F  84 E3                     TEST BL,AH
0052B011  8B F1                     MOV ESI,ECX
0052B013  89 5D D4                  MOV dword ptr [EBP + -0x2c],EBX
0052B016  89 7D D8                  MOV dword ptr [EBP + -0x28],EDI
0052B019  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
0052B01C  89 5D E0                  MOV dword ptr [EBP + -0x20],EBX
0052B01F  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
0052B022  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
0052B025  75 0A                     JNZ 0x0052b031
0052B027  E8 5C 32 20 00            CALL 0x0072e288
0052B02C  0F BF C0                  MOVSX EAX,AX
0052B02F  EB 09                     JMP 0x0052b03a
LAB_0052b031:
0052B031  E8 52 32 20 00            CALL 0x0072e288
0052B036  0F BF C0                  MOVSX EAX,AX
0052B039  48                        DEC EAX
LAB_0052b03a:
0052B03A  D9 45 10                  FLD float ptr [EBP + 0x10]
0052B03D  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
0052B043  D9 45 10                  FLD float ptr [EBP + 0x10]
0052B046  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
0052B04C  89 86 37 02 00 00         MOV dword ptr [ESI + 0x237],EAX
0052B052  DF E0                     FNSTSW AX
0052B054  F6 C4 01                  TEST AH,0x1
0052B057  75 0A                     JNZ 0x0052b063
0052B059  E8 2A 32 20 00            CALL 0x0072e288
0052B05E  0F BF C0                  MOVSX EAX,AX
0052B061  EB 09                     JMP 0x0052b06c
LAB_0052b063:
0052B063  E8 20 32 20 00            CALL 0x0072e288
0052B068  0F BF C0                  MOVSX EAX,AX
0052B06B  48                        DEC EAX
LAB_0052b06c:
0052B06C  89 86 3B 02 00 00         MOV dword ptr [ESI + 0x23b],EAX
0052B072  8B 86 B3 0D 00 00         MOV EAX,dword ptr [ESI + 0xdb3]
0052B078  85 C0                     TEST EAX,EAX
0052B07A  0F 85 9E 01 00 00         JNZ 0x0052b21e
0052B080  A1 50 67 80 00            MOV EAX,[0x00806750]
0052B085  0F BF 08                  MOVSX ECX,word ptr [EAX]
0052B088  0F BF 50 02               MOVSX EDX,word ptr [EAX + 0x2]
0052B08C  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0052B08F  33 C9                     XOR ECX,ECX
0052B091  DB 45 F4                  FILD dword ptr [EBP + -0xc]
0052B094  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0052B097  8D 55 D4                  LEA EDX,[EBP + -0x2c]
0052B09A  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0052B0A0  D9 5D F8                  FSTP float ptr [EBP + -0x8]
0052B0A3  DB 45 F4                  FILD dword ptr [EBP + -0xc]
0052B0A6  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0052B0AC  D9 5D F4                  FSTP float ptr [EBP + -0xc]
0052B0AF  D9 05 4C 03 79 00         FLD float ptr [0x0079034c]
LAB_0052b0b5:
0052B0B5  DB 42 04                  FILD dword ptr [EDX + 0x4]
0052B0B8  D8 4D F4                  FMUL float ptr [EBP + -0xc]
0052B0BB  D8 0D 84 07 79 00         FMUL float ptr [0x00790784]
0052B0C1  D8 6D 10                  FSUBR float ptr [EBP + 0x10]
0052B0C4  DB 02                     FILD dword ptr [EDX]
0052B0C6  D8 4D F8                  FMUL float ptr [EBP + -0x8]
0052B0C9  D8 0D 84 07 79 00         FMUL float ptr [0x00790784]
0052B0CF  D8 6D 0C                  FSUBR float ptr [EBP + 0xc]
0052B0D2  D9 C1                     FLD ST1
0052B0D4  D8 CA                     FMUL ST2
0052B0D6  D9 C1                     FLD ST1
0052B0D8  D8 CA                     FMUL ST2
0052B0DA  DE C1                     FADDP
0052B0DC  D9 5D FC                  FSTP float ptr [EBP + -0x4]
0052B0DF  DD D8                     FSTP ST0
0052B0E1  DD D8                     FSTP ST0
0052B0E3  D8 55 FC                  FCOM float ptr [EBP + -0x4]
0052B0E6  DF E0                     FNSTSW AX
0052B0E8  F6 C4 01                  TEST AH,0x1
0052B0EB  74 07                     JZ 0x0052b0f4
0052B0ED  DD D8                     FSTP ST0
0052B0EF  D9 45 FC                  FLD float ptr [EBP + -0x4]
0052B0F2  8B F9                     MOV EDI,ECX
LAB_0052b0f4:
0052B0F4  41                        INC ECX
0052B0F5  83 C2 08                  ADD EDX,0x8
0052B0F8  83 F9 04                  CMP ECX,0x4
0052B0FB  7C B8                     JL 0x0052b0b5
0052B0FD  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
0052B103  DF E0                     FNSTSW AX
0052B105  F6 C4 40                  TEST AH,0x40
0052B108  0F 85 5D 01 00 00         JNZ 0x0052b26b
0052B10E  53                        PUSH EBX
0052B10F  6A 00                     PUSH 0x0
0052B111  68 96 00 00 00            PUSH 0x96
0052B116  68 97 00 00 00            PUSH 0x97
0052B11B  53                        PUSH EBX
0052B11C  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0052B11F  8B C3                     MOV EAX,EBX
0052B121  25 FF 00 00 00            AND EAX,0xff
0052B126  8D 8C 86 B7 0D 00 00      LEA ECX,[ESI + EAX*0x4 + 0xdb7]
0052B12D  51                        PUSH ECX
0052B12E  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0052B134  E8 27 B3 1B 00            CALL 0x006e6460
0052B139  DB 44 FD D4               FILD dword ptr [EBP + EDI*0x8 + -0x2c]
0052B13D  6A FF                     PUSH -0x1
0052B13F  89 86 B3 0D 00 00         MOV dword ptr [ESI + 0xdb3],EAX
0052B145  88 9E CC 0D 00 00         MOV byte ptr [ESI + 0xdcc],BL
0052B14B  C6 86 C7 0D 00 00 01      MOV byte ptr [ESI + 0xdc7],0x1
0052B152  D8 4D F8                  FMUL float ptr [EBP + -0x8]
0052B155  C7 86 C8 0D 00 00 00 00 00 00  MOV dword ptr [ESI + 0xdc8],0x0
0052B15F  C6 86 CD 0D 00 00 00      MOV byte ptr [ESI + 0xdcd],0x0
0052B166  DC 0D C0 01 79 00         FMUL double ptr [0x007901c0]
0052B16C  D9 5D FC                  FSTP float ptr [EBP + -0x4]
0052B16F  DB 44 FD D8               FILD dword ptr [EBP + EDI*0x8 + -0x28]
0052B173  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0052B176  89 96 D6 0D 00 00         MOV dword ptr [ESI + 0xdd6],EDX
0052B17C  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0052B17F  D8 4D F4                  FMUL float ptr [EBP + -0xc]
0052B182  89 96 CE 0D 00 00         MOV dword ptr [ESI + 0xdce],EDX
0052B188  DC 0D C0 01 79 00         FMUL double ptr [0x007901c0]
0052B18E  D9 5D 08                  FSTP float ptr [EBP + 0x8]
0052B191  D9 45 0C                  FLD float ptr [EBP + 0xc]
0052B194  D8 65 FC                  FSUB float ptr [EBP + -0x4]
0052B197  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0052B19A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0052B19D  89 8E DA 0D 00 00         MOV dword ptr [ESI + 0xdda],ECX
0052B1A3  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0052B1A6  DC 0D D8 AC 79 00         FMUL double ptr [0x0079acd8]
0052B1AC  89 8E D2 0D 00 00         MOV dword ptr [ESI + 0xdd2],ECX
0052B1B2  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0052B1B5  52                        PUSH EDX
0052B1B6  51                        PUSH ECX
0052B1B7  DC 0D C8 AC 79 00         FMUL double ptr [0x0079acc8]
0052B1BD  50                        PUSH EAX
0052B1BE  D9 96 DE 0D 00 00         FST float ptr [ESI + 0xdde]
0052B1C4  D8 0D C0 AC 79 00         FMUL float ptr [0x0079acc0]
0052B1CA  D9 9E E6 0D 00 00         FSTP float ptr [ESI + 0xde6]
0052B1D0  D9 45 10                  FLD float ptr [EBP + 0x10]
0052B1D3  D8 65 08                  FSUB float ptr [EBP + 0x8]
0052B1D6  D8 0D BC AC 79 00         FMUL float ptr [0x0079acbc]
0052B1DC  D9 96 E2 0D 00 00         FST float ptr [ESI + 0xde2]
0052B1E2  D8 0D B8 AC 79 00         FMUL float ptr [0x0079acb8]
0052B1E8  D9 9E EA 0D 00 00         FSTP float ptr [ESI + 0xdea]
0052B1EE  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0052B1F4  E8 47 B3 1B 00            CALL 0x006e6540
0052B1F9  8A 9E CC 0D 00 00         MOV BL,byte ptr [ESI + 0xdcc]
0052B1FF  33 D2                     XOR EDX,EDX
0052B201  84 DB                     TEST BL,BL
0052B203  0F 95 C2                  SETNZ DL
0052B206  81 C2 B8 00 00 00         ADD EDX,0xb8
0052B20C  52                        PUSH EDX
0052B20D  E8 1D AC ED FF            CALL 0x00405e2f
0052B212  83 C4 04                  ADD ESP,0x4
0052B215  5F                        POP EDI
0052B216  5E                        POP ESI
0052B217  5B                        POP EBX
0052B218  8B E5                     MOV ESP,EBP
0052B21A  5D                        POP EBP
0052B21B  C2 0C 00                  RET 0xc
LAB_0052b21e:
0052B21E  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0052B221  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0052B224  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0052B227  8B C3                     MOV EAX,EBX
0052B229  6A 01                     PUSH 0x1
0052B22B  25 FF 00 00 00            AND EAX,0xff
0052B230  6A 05                     PUSH 0x5
0052B232  6A 05                     PUSH 0x5
0052B234  51                        PUSH ECX
0052B235  8B 8C 86 C8 09 00 00      MOV ECX,dword ptr [ESI + EAX*0x4 + 0x9c8]
0052B23C  8B 84 86 BF 0D 00 00      MOV EAX,dword ptr [ESI + EAX*0x4 + 0xdbf]
0052B243  52                        PUSH EDX
0052B244  0F BF 51 23               MOVSX EDX,word ptr [ECX + 0x23]
0052B248  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0052B24E  52                        PUSH EDX
0052B24F  50                        PUSH EAX
0052B250  E8 6B B3 1B 00            CALL 0x006e65c0
0052B255  33 C9                     XOR ECX,ECX
0052B257  84 DB                     TEST BL,BL
0052B259  0F 95 C1                  SETNZ CL
0052B25C  81 C1 B6 00 00 00         ADD ECX,0xb6
0052B262  51                        PUSH ECX
0052B263  E8 C7 AB ED FF            CALL 0x00405e2f
0052B268  83 C4 04                  ADD ESP,0x4
LAB_0052b26b:
0052B26B  5F                        POP EDI
0052B26C  5E                        POP ESI
0052B26D  5B                        POP EBX
0052B26E  8B E5                     MOV ESP,EBP
0052B270  5D                        POP EBP
0052B271  C2 0C 00                  RET 0xc
