STGameObjC::GetMessage:
0041AF40  55                        PUSH EBP
0041AF41  8B EC                     MOV EBP,ESP
0041AF43  83 EC 54                  SUB ESP,0x54
0041AF46  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0041AF4B  53                        PUSH EBX
0041AF4C  56                        PUSH ESI
0041AF4D  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0041AF50  57                        PUSH EDI
0041AF51  8D 55 B0                  LEA EDX,[EBP + -0x50]
0041AF54  8D 4D AC                  LEA ECX,[EBP + -0x54]
0041AF57  6A 00                     PUSH 0x0
0041AF59  52                        PUSH EDX
0041AF5A  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
0041AF5D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0041AF63  E8 88 28 31 00            CALL 0x0072d7f0
0041AF68  8B F0                     MOV ESI,EAX
0041AF6A  83 C4 08                  ADD ESP,0x8
0041AF6D  85 F6                     TEST ESI,ESI
0041AF6F  0F 85 08 0F 00 00         JNZ 0x0041be7d
0041AF75  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0041AF78  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
0041AF7B  56                        PUSH ESI
0041AF7C  8B CB                     MOV ECX,EBX
0041AF7E  E8 4D B0 2C 00            CALL 0x006e5fd0
0041AF83  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
0041AF86  83 E8 00                  SUB EAX,0x0
0041AF89  0F 84 8E 00 00 00         JZ 0x0041b01d
0041AF8F  83 E8 02                  SUB EAX,0x2
0041AF92  0F 85 D2 0E 00 00         JNZ 0x0041be6a
0041AF98  8B 76 14                  MOV ESI,dword ptr [ESI + 0x14]
0041AF9B  85 F6                     TEST ESI,ESI
0041AF9D  75 17                     JNZ 0x0041afb6
0041AF9F  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0041AFA4  68 78 06 00 00            PUSH 0x678
0041AFA9  68 0C 4E 7A 00            PUSH 0x7a4e0c
0041AFAE  50                        PUSH EAX
0041AFAF  6A FF                     PUSH -0x1
0041AFB1  E8 8A AE 28 00            CALL 0x006a5e40
LAB_0041afb6:
0041AFB6  8B 0E                     MOV ECX,dword ptr [ESI]
0041AFB8  89 4B 20                  MOV dword ptr [EBX + 0x20],ECX
0041AFBB  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
0041AFBE  89 53 24                  MOV dword ptr [EBX + 0x24],EDX
0041AFC1  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
0041AFC4  89 43 2C                  MOV dword ptr [EBX + 0x2c],EAX
0041AFC7  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0041AFCA  89 4B 28                  MOV dword ptr [EBX + 0x28],ECX
0041AFCD  8B 53 18                  MOV EDX,dword ptr [EBX + 0x18]
0041AFD0  0F AF 15 54 87 80 00      IMUL EDX,dword ptr [0x00808754]
0041AFD7  8B C2                     MOV EAX,EDX
0041AFD9  89 53 1C                  MOV dword ptr [EBX + 0x1c],EDX
0041AFDC  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0041AFE2  05 39 30 00 00            ADD EAX,0x3039
0041AFE7  33 D2                     XOR EDX,EDX
0041AFE9  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
0041AFEC  B9 1F 00 00 00            MOV ECX,0x1f
0041AFF1  C1 E8 10                  SHR EAX,0x10
0041AFF4  F7 F1                     DIV ECX
0041AFF6  8B CB                     MOV ECX,EBX
0041AFF8  83 C2 1E                  ADD EDX,0x1e
0041AFFB  66 89 93 F8 00 00 00      MOV word ptr [EBX + 0xf8],DX
0041B002  8B 13                     MOV EDX,dword ptr [EBX]
0041B004  FF 92 CC 00 00 00         CALL dword ptr [EDX + 0xcc]
0041B00A  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
0041B00D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0041B012  33 C0                     XOR EAX,EAX
0041B014  5F                        POP EDI
0041B015  5E                        POP ESI
0041B016  5B                        POP EBX
0041B017  8B E5                     MOV ESP,EBP
0041B019  5D                        POP EBP
0041B01A  C2 04 00                  RET 0x4
LAB_0041b01d:
0041B01D  8B 83 8F 00 00 00         MOV EAX,dword ptr [EBX + 0x8f]
0041B023  83 F8 FF                  CMP EAX,-0x1
0041B026  7E 07                     JLE 0x0041b02f
0041B028  40                        INC EAX
0041B029  89 83 8F 00 00 00         MOV dword ptr [EBX + 0x8f],EAX
LAB_0041b02f:
0041B02F  8B 03                     MOV EAX,dword ptr [EBX]
0041B031  8B CB                     MOV ECX,EBX
0041B033  FF 90 D0 00 00 00         CALL dword ptr [EAX + 0xd0]
0041B039  83 BB CD 01 00 00 01      CMP dword ptr [EBX + 0x1cd],0x1
0041B040  0F 85 24 0E 00 00         JNZ 0x0041be6a
0041B046  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
0041B049  3D AE 01 00 00            CMP EAX,0x1ae
0041B04E  0F 87 59 06 00 00         JA 0x0041b6ad
0041B054  0F 84 C9 04 00 00         JZ 0x0041b523
0041B05A  3D 72 01 00 00            CMP EAX,0x172
0041B05F  0F 87 AE 04 00 00         JA 0x0041b513
0041B065  0F 84 48 0D 00 00         JZ 0x0041bdb3
0041B06B  83 F8 14                  CMP EAX,0x14
0041B06E  74 0E                     JZ 0x0041b07e
0041B070  83 F8 5A                  CMP EAX,0x5a
0041B073  0F 84 3A 0D 00 00         JZ 0x0041bdb3
0041B079  E9 48 06 00 00            JMP 0x0041b6c6
LAB_0041b07e:
0041B07E  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
0041B084  85 C9                     TEST ECX,ECX
0041B086  0F 84 9C 00 00 00         JZ 0x0041b128
0041B08C  6A 01                     PUSH 0x1
0041B08E  E8 BE 8B FE FF            CALL 0x00403c51
0041B093  85 C0                     TEST EAX,EAX
0041B095  0F 84 8D 00 00 00         JZ 0x0041b128
0041B09B  8B 83 21 01 00 00         MOV EAX,dword ptr [EBX + 0x121]
0041B0A1  8B 13                     MOV EDX,dword ptr [EBX]
0041B0A3  50                        PUSH EAX
0041B0A4  8B CB                     MOV ECX,EBX
0041B0A6  FF 52 30                  CALL dword ptr [EDX + 0x30]
0041B0A9  8B BB 1D 01 00 00         MOV EDI,dword ptr [EBX + 0x11d]
0041B0AF  8B B3 21 01 00 00         MOV ESI,dword ptr [EBX + 0x121]
0041B0B5  B9 1B 00 00 00            MOV ECX,0x1b
0041B0BA  33 D2                     XOR EDX,EDX
0041B0BC  66 F3 A7                  CMPSW.REPE ES:EDI,ESI
0041B0BF  74 67                     JZ 0x0041b128
0041B0C1  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0041B0C7  52                        PUSH EDX
0041B0C8  52                        PUSH EDX
0041B0C9  E8 AD 7A FE FF            CALL 0x00402b7b
0041B0CE  66 3D 01 00               CMP AX,0x1
0041B0D2  75 0D                     JNZ 0x0041b0e1
0041B0D4  8B B3 21 01 00 00         MOV ESI,dword ptr [EBX + 0x121]
0041B0DA  B9 0D 00 00 00            MOV ECX,0xd
0041B0DF  EB 2E                     JMP 0x0041b10f
LAB_0041b0e1:
0041B0E1  8B 83 21 01 00 00         MOV EAX,dword ptr [EBX + 0x121]
0041B0E7  8B B3 1D 01 00 00         MOV ESI,dword ptr [EBX + 0x11d]
0041B0ED  8A 48 1B                  MOV CL,byte ptr [EAX + 0x1b]
0041B0F0  8A 56 1B                  MOV DL,byte ptr [ESI + 0x1b]
0041B0F3  3A CA                     CMP CL,DL
0041B0F5  75 11                     JNZ 0x0041b108
0041B0F7  8D 7E 2A                  LEA EDI,[ESI + 0x2a]
0041B0FA  B9 05 00 00 00            MOV ECX,0x5
0041B0FF  8D 70 2A                  LEA ESI,[EAX + 0x2a]
0041B102  33 D2                     XOR EDX,EDX
0041B104  F3 A6                     CMPSB.REPE ES:EDI,ESI
0041B106  74 20                     JZ 0x0041b128
LAB_0041b108:
0041B108  B9 0D 00 00 00            MOV ECX,0xd
0041B10D  8B F0                     MOV ESI,EAX
LAB_0041b10f:
0041B10F  8B BB 1D 01 00 00         MOV EDI,dword ptr [EBX + 0x11d]
0041B115  6A 00                     PUSH 0x0
0041B117  F3 A5                     MOVSD.REP ES:EDI,ESI
0041B119  66 A5                     MOVSW ES:EDI,ESI
0041B11B  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0041B121  6A 01                     PUSH 0x1
0041B123  E8 2D 9B FE FF            CALL 0x00404c55
LAB_0041b128:
0041B128  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
0041B12E  85 C9                     TEST ECX,ECX
0041B130  74 4F                     JZ 0x0041b181
0041B132  6A 02                     PUSH 0x2
0041B134  E8 18 8B FE FF            CALL 0x00403c51
0041B139  85 C0                     TEST EAX,EAX
0041B13B  74 44                     JZ 0x0041b181
0041B13D  8B 8B 29 01 00 00         MOV ECX,dword ptr [EBX + 0x129]
0041B143  8B 03                     MOV EAX,dword ptr [EBX]
0041B145  51                        PUSH ECX
0041B146  8B CB                     MOV ECX,EBX
0041B148  FF 50 34                  CALL dword ptr [EAX + 0x34]
0041B14B  8B 83 25 01 00 00         MOV EAX,dword ptr [EBX + 0x125]
0041B151  8B B3 29 01 00 00         MOV ESI,dword ptr [EBX + 0x129]
0041B157  B9 17 00 00 00            MOV ECX,0x17
0041B15C  8B F8                     MOV EDI,EAX
0041B15E  33 D2                     XOR EDX,EDX
0041B160  F3 A7                     CMPSD.REPE ES:EDI,ESI
0041B162  74 1D                     JZ 0x0041b181
0041B164  8B B3 29 01 00 00         MOV ESI,dword ptr [EBX + 0x129]
0041B16A  B9 17 00 00 00            MOV ECX,0x17
0041B16F  8B F8                     MOV EDI,EAX
0041B171  52                        PUSH EDX
0041B172  F3 A5                     MOVSD.REP ES:EDI,ESI
0041B174  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0041B17A  6A 02                     PUSH 0x2
0041B17C  E8 D4 9A FE FF            CALL 0x00404c55
LAB_0041b181:
0041B181  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
0041B187  85 C9                     TEST ECX,ECX
0041B189  0F 84 49 02 00 00         JZ 0x0041b3d8
0041B18F  6A 08                     PUSH 0x8
0041B191  E8 BB 8A FE FF            CALL 0x00403c51
0041B196  85 C0                     TEST EAX,EAX
0041B198  0F 84 3A 02 00 00         JZ 0x0041b3d8
0041B19E  8B 83 71 01 00 00         MOV EAX,dword ptr [EBX + 0x171]
0041B1A4  8D B3 71 01 00 00         LEA ESI,[EBX + 0x171]
0041B1AA  85 C0                     TEST EAX,EAX
0041B1AC  74 06                     JZ 0x0041b1b4
0041B1AE  50                        PUSH EAX
0041B1AF  E8 5C 2F 29 00            CALL 0x006ae110
LAB_0041b1b4:
0041B1B4  8B 83 75 01 00 00         MOV EAX,dword ptr [EBX + 0x175]
0041B1BA  85 C0                     TEST EAX,EAX
0041B1BC  74 06                     JZ 0x0041b1c4
0041B1BE  50                        PUSH EAX
0041B1BF  E8 4C 2F 29 00            CALL 0x006ae110
LAB_0041b1c4:
0041B1C4  8B 83 79 01 00 00         MOV EAX,dword ptr [EBX + 0x179]
0041B1CA  85 C0                     TEST EAX,EAX
0041B1CC  74 06                     JZ 0x0041b1d4
0041B1CE  50                        PUSH EAX
0041B1CF  E8 3C 2F 29 00            CALL 0x006ae110
LAB_0041b1d4:
0041B1D4  8B 83 7D 01 00 00         MOV EAX,dword ptr [EBX + 0x17d]
0041B1DA  85 C0                     TEST EAX,EAX
0041B1DC  74 06                     JZ 0x0041b1e4
0041B1DE  50                        PUSH EAX
0041B1DF  E8 2C 2F 29 00            CALL 0x006ae110
LAB_0041b1e4:
0041B1E4  8B 83 81 01 00 00         MOV EAX,dword ptr [EBX + 0x181]
0041B1EA  85 C0                     TEST EAX,EAX
0041B1EC  74 06                     JZ 0x0041b1f4
0041B1EE  50                        PUSH EAX
0041B1EF  E8 1C 2F 29 00            CALL 0x006ae110
LAB_0041b1f4:
0041B1F4  8B CE                     MOV ECX,ESI
0041B1F6  33 C0                     XOR EAX,EAX
0041B1F8  56                        PUSH ESI
0041B1F9  89 01                     MOV dword ptr [ECX],EAX
0041B1FB  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
0041B1FE  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
0041B201  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
0041B204  89 41 10                  MOV dword ptr [ECX + 0x10],EAX
0041B207  8B 13                     MOV EDX,dword ptr [EBX]
0041B209  8B CB                     MOV ECX,EBX
0041B20B  FF 52 40                  CALL dword ptr [EDX + 0x40]
0041B20E  8B 36                     MOV ESI,dword ptr [ESI]
0041B210  8B 93 5D 01 00 00         MOV EDX,dword ptr [EBX + 0x15d]
0041B216  33 C0                     XOR EAX,EAX
0041B218  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0041B21B  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0041B21E  8B 7A 0C                  MOV EDI,dword ptr [EDX + 0xc]
0041B221  3B CF                     CMP ECX,EDI
0041B223  75 12                     JNZ 0x0041b237
0041B225  8B 7A 1C                  MOV EDI,dword ptr [EDX + 0x1c]
0041B228  8B 76 1C                  MOV ESI,dword ptr [ESI + 0x1c]
0041B22B  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
0041B22E  C1 E1 04                  SHL ECX,0x4
0041B231  33 D2                     XOR EDX,EDX
0041B233  F3 A6                     CMPSB.REPE ES:EDI,ESI
0041B235  74 05                     JZ 0x0041b23c
LAB_0041b237:
0041B237  B8 01 00 00 00            MOV EAX,0x1
LAB_0041b23c:
0041B23C  85 C0                     TEST EAX,EAX
0041B23E  0F 85 C4 00 00 00         JNZ 0x0041b308
0041B244  8B 93 75 01 00 00         MOV EDX,dword ptr [EBX + 0x175]
0041B24A  8B B3 61 01 00 00         MOV ESI,dword ptr [EBX + 0x161]
0041B250  8B 4A 0C                  MOV ECX,dword ptr [EDX + 0xc]
0041B253  8B 7E 0C                  MOV EDI,dword ptr [ESI + 0xc]
0041B256  3B CF                     CMP ECX,EDI
0041B258  75 12                     JNZ 0x0041b26c
0041B25A  8B 7E 1C                  MOV EDI,dword ptr [ESI + 0x1c]
0041B25D  8B 72 1C                  MOV ESI,dword ptr [EDX + 0x1c]
0041B260  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
0041B263  C1 E1 04                  SHL ECX,0x4
0041B266  33 D2                     XOR EDX,EDX
0041B268  F3 A6                     CMPSB.REPE ES:EDI,ESI
0041B26A  74 05                     JZ 0x0041b271
LAB_0041b26c:
0041B26C  B8 01 00 00 00            MOV EAX,0x1
LAB_0041b271:
0041B271  85 C0                     TEST EAX,EAX
0041B273  0F 85 8F 00 00 00         JNZ 0x0041b308
0041B279  8B 93 79 01 00 00         MOV EDX,dword ptr [EBX + 0x179]
0041B27F  8B B3 65 01 00 00         MOV ESI,dword ptr [EBX + 0x165]
0041B285  8B 4A 0C                  MOV ECX,dword ptr [EDX + 0xc]
0041B288  8B 7E 0C                  MOV EDI,dword ptr [ESI + 0xc]
0041B28B  3B CF                     CMP ECX,EDI
0041B28D  75 12                     JNZ 0x0041b2a1
0041B28F  8B 7E 1C                  MOV EDI,dword ptr [ESI + 0x1c]
0041B292  8B 72 1C                  MOV ESI,dword ptr [EDX + 0x1c]
0041B295  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
0041B298  C1 E1 04                  SHL ECX,0x4
0041B29B  33 D2                     XOR EDX,EDX
0041B29D  F3 A6                     CMPSB.REPE ES:EDI,ESI
0041B29F  74 05                     JZ 0x0041b2a6
LAB_0041b2a1:
0041B2A1  B8 01 00 00 00            MOV EAX,0x1
LAB_0041b2a6:
0041B2A6  85 C0                     TEST EAX,EAX
0041B2A8  75 5E                     JNZ 0x0041b308
0041B2AA  8B 93 7D 01 00 00         MOV EDX,dword ptr [EBX + 0x17d]
0041B2B0  8B B3 69 01 00 00         MOV ESI,dword ptr [EBX + 0x169]
0041B2B6  8B 4A 0C                  MOV ECX,dword ptr [EDX + 0xc]
0041B2B9  8B 7E 0C                  MOV EDI,dword ptr [ESI + 0xc]
0041B2BC  3B CF                     CMP ECX,EDI
0041B2BE  75 12                     JNZ 0x0041b2d2
0041B2C0  8B 7E 1C                  MOV EDI,dword ptr [ESI + 0x1c]
0041B2C3  8B 72 1C                  MOV ESI,dword ptr [EDX + 0x1c]
0041B2C6  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
0041B2C9  C1 E1 04                  SHL ECX,0x4
0041B2CC  33 D2                     XOR EDX,EDX
0041B2CE  F3 A6                     CMPSB.REPE ES:EDI,ESI
0041B2D0  74 05                     JZ 0x0041b2d7
LAB_0041b2d2:
0041B2D2  B8 01 00 00 00            MOV EAX,0x1
LAB_0041b2d7:
0041B2D7  85 C0                     TEST EAX,EAX
0041B2D9  75 2D                     JNZ 0x0041b308
0041B2DB  8B 93 81 01 00 00         MOV EDX,dword ptr [EBX + 0x181]
0041B2E1  8B B3 6D 01 00 00         MOV ESI,dword ptr [EBX + 0x16d]
0041B2E7  8B 4A 0C                  MOV ECX,dword ptr [EDX + 0xc]
0041B2EA  8B 7E 0C                  MOV EDI,dword ptr [ESI + 0xc]
0041B2ED  3B CF                     CMP ECX,EDI
0041B2EF  75 12                     JNZ 0x0041b303
0041B2F1  8B 7E 1C                  MOV EDI,dword ptr [ESI + 0x1c]
0041B2F4  8B 72 1C                  MOV ESI,dword ptr [EDX + 0x1c]
0041B2F7  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
0041B2FA  C1 E1 04                  SHL ECX,0x4
0041B2FD  33 D2                     XOR EDX,EDX
0041B2FF  F3 A6                     CMPSB.REPE ES:EDI,ESI
0041B301  74 05                     JZ 0x0041b308
LAB_0041b303:
0041B303  B8 01 00 00 00            MOV EAX,0x1
LAB_0041b308:
0041B308  83 F8 01                  CMP EAX,0x1
0041B30B  0F 85 C7 00 00 00         JNZ 0x0041b3d8
0041B311  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0041B314  85 C0                     TEST EAX,EAX
0041B316  74 06                     JZ 0x0041b31e
0041B318  50                        PUSH EAX
0041B319  E8 F2 2D 29 00            CALL 0x006ae110
LAB_0041b31e:
0041B31E  8B 83 61 01 00 00         MOV EAX,dword ptr [EBX + 0x161]
0041B324  85 C0                     TEST EAX,EAX
0041B326  74 06                     JZ 0x0041b32e
0041B328  50                        PUSH EAX
0041B329  E8 E2 2D 29 00            CALL 0x006ae110
LAB_0041b32e:
0041B32E  8B 83 65 01 00 00         MOV EAX,dword ptr [EBX + 0x165]
0041B334  85 C0                     TEST EAX,EAX
0041B336  74 06                     JZ 0x0041b33e
0041B338  50                        PUSH EAX
0041B339  E8 D2 2D 29 00            CALL 0x006ae110
LAB_0041b33e:
0041B33E  8B 83 69 01 00 00         MOV EAX,dword ptr [EBX + 0x169]
0041B344  8D BB 69 01 00 00         LEA EDI,[EBX + 0x169]
0041B34A  85 C0                     TEST EAX,EAX
0041B34C  74 06                     JZ 0x0041b354
0041B34E  50                        PUSH EAX
0041B34F  E8 BC 2D 29 00            CALL 0x006ae110
LAB_0041b354:
0041B354  8B 83 6D 01 00 00         MOV EAX,dword ptr [EBX + 0x16d]
0041B35A  8D B3 6D 01 00 00         LEA ESI,[EBX + 0x16d]
0041B360  85 C0                     TEST EAX,EAX
0041B362  74 06                     JZ 0x0041b36a
0041B364  50                        PUSH EAX
0041B365  E8 A6 2D 29 00            CALL 0x006ae110
LAB_0041b36a:
0041B36A  8D 8B 5D 01 00 00         LEA ECX,[EBX + 0x15d]
0041B370  33 C0                     XOR EAX,EAX
0041B372  8B D1                     MOV EDX,ECX
0041B374  89 02                     MOV dword ptr [EDX],EAX
0041B376  89 42 04                  MOV dword ptr [EDX + 0x4],EAX
0041B379  89 42 08                  MOV dword ptr [EDX + 0x8],EAX
0041B37C  89 42 0C                  MOV dword ptr [EDX + 0xc],EAX
0041B37F  89 42 10                  MOV dword ptr [EDX + 0x10],EAX
0041B382  8B 93 71 01 00 00         MOV EDX,dword ptr [EBX + 0x171]
0041B388  E8 B3 4A 29 00            CALL 0x006afe40
0041B38D  8B 93 75 01 00 00         MOV EDX,dword ptr [EBX + 0x175]
0041B393  8D 8B 61 01 00 00         LEA ECX,[EBX + 0x161]
0041B399  E8 A2 4A 29 00            CALL 0x006afe40
0041B39E  8B 93 79 01 00 00         MOV EDX,dword ptr [EBX + 0x179]
0041B3A4  8D 8B 65 01 00 00         LEA ECX,[EBX + 0x165]
0041B3AA  E8 91 4A 29 00            CALL 0x006afe40
0041B3AF  8B 93 7D 01 00 00         MOV EDX,dword ptr [EBX + 0x17d]
0041B3B5  8B CF                     MOV ECX,EDI
0041B3B7  E8 84 4A 29 00            CALL 0x006afe40
0041B3BC  8B 93 81 01 00 00         MOV EDX,dword ptr [EBX + 0x181]
0041B3C2  8B CE                     MOV ECX,ESI
0041B3C4  E8 77 4A 29 00            CALL 0x006afe40
0041B3C9  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0041B3CF  6A 00                     PUSH 0x0
0041B3D1  6A 08                     PUSH 0x8
0041B3D3  E8 7D 98 FE FF            CALL 0x00404c55
LAB_0041b3d8:
0041B3D8  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
0041B3DE  85 C9                     TEST ECX,ECX
0041B3E0  74 6B                     JZ 0x0041b44d
0041B3E2  6A 0B                     PUSH 0xb
0041B3E4  E8 68 88 FE FF            CALL 0x00403c51
0041B3E9  85 C0                     TEST EAX,EAX
0041B3EB  74 60                     JZ 0x0041b44d
0041B3ED  8B 8B 99 01 00 00         MOV ECX,dword ptr [EBX + 0x199]
0041B3F3  8B 03                     MOV EAX,dword ptr [EBX]
0041B3F5  51                        PUSH ECX
0041B3F6  8B CB                     MOV ECX,EBX
0041B3F8  FF 50 4C                  CALL dword ptr [EAX + 0x4c]
0041B3FB  8B 83 95 01 00 00         MOV EAX,dword ptr [EBX + 0x195]
0041B401  8B B3 99 01 00 00         MOV ESI,dword ptr [EBX + 0x199]
0041B407  B9 13 00 00 00            MOV ECX,0x13
0041B40C  8B F8                     MOV EDI,EAX
0041B40E  33 D2                     XOR EDX,EDX
0041B410  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0041B413  F3 A6                     CMPSB.REPE ES:EDI,ESI
0041B415  74 36                     JZ 0x0041b44d
0041B417  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0041B41A  6A 00                     PUSH 0x0
0041B41C  6A 0B                     PUSH 0xb
0041B41E  8B 0E                     MOV ECX,dword ptr [ESI]
0041B420  89 08                     MOV dword ptr [EAX],ECX
0041B422  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
0041B425  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
0041B428  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0041B42B  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
0041B42E  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
0041B431  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
0041B434  66 8B 4E 10               MOV CX,word ptr [ESI + 0x10]
0041B438  66 89 48 10               MOV word ptr [EAX + 0x10],CX
0041B43C  8A 56 12                  MOV DL,byte ptr [ESI + 0x12]
0041B43F  88 50 12                  MOV byte ptr [EAX + 0x12],DL
0041B442  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0041B448  E8 08 98 FE FF            CALL 0x00404c55
LAB_0041b44d:
0041B44D  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
0041B453  85 C9                     TEST ECX,ECX
0041B455  74 5F                     JZ 0x0041b4b6
0041B457  6A 0E                     PUSH 0xe
0041B459  E8 F3 87 FE FF            CALL 0x00403c51
0041B45E  85 C0                     TEST EAX,EAX
0041B460  74 54                     JZ 0x0041b4b6
0041B462  8B 8B B1 01 00 00         MOV ECX,dword ptr [EBX + 0x1b1]
0041B468  8B 03                     MOV EAX,dword ptr [EBX]
0041B46A  51                        PUSH ECX
0041B46B  8B CB                     MOV ECX,EBX
0041B46D  FF 50 58                  CALL dword ptr [EAX + 0x58]
0041B470  8B 83 AD 01 00 00         MOV EAX,dword ptr [EBX + 0x1ad]
0041B476  8B B3 B1 01 00 00         MOV ESI,dword ptr [EBX + 0x1b1]
0041B47C  B9 0B 00 00 00            MOV ECX,0xb
0041B481  8B F8                     MOV EDI,EAX
0041B483  33 D2                     XOR EDX,EDX
0041B485  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0041B488  F3 A6                     CMPSB.REPE ES:EDI,ESI
0041B48A  74 2A                     JZ 0x0041b4b6
0041B48C  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0041B48F  6A 00                     PUSH 0x0
0041B491  6A 0E                     PUSH 0xe
0041B493  8B 0E                     MOV ECX,dword ptr [ESI]
0041B495  89 08                     MOV dword ptr [EAX],ECX
0041B497  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
0041B49A  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
0041B49D  66 8B 4E 08               MOV CX,word ptr [ESI + 0x8]
0041B4A1  66 89 48 08               MOV word ptr [EAX + 0x8],CX
0041B4A5  8A 56 0A                  MOV DL,byte ptr [ESI + 0xa]
0041B4A8  88 50 0A                  MOV byte ptr [EAX + 0xa],DL
0041B4AB  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0041B4B1  E8 9F 97 FE FF            CALL 0x00404c55
LAB_0041b4b6:
0041B4B6  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
0041B4BC  85 C9                     TEST ECX,ECX
0041B4BE  0F 84 A6 09 00 00         JZ 0x0041be6a
0041B4C4  6A 10                     PUSH 0x10
0041B4C6  E8 86 87 FE FF            CALL 0x00403c51
0041B4CB  85 C0                     TEST EAX,EAX
0041B4CD  0F 84 97 09 00 00         JZ 0x0041be6a
0041B4D3  8B 8B C1 01 00 00         MOV ECX,dword ptr [EBX + 0x1c1]
0041B4D9  8B 03                     MOV EAX,dword ptr [EBX]
0041B4DB  51                        PUSH ECX
0041B4DC  8B CB                     MOV ECX,EBX
0041B4DE  FF 50 60                  CALL dword ptr [EAX + 0x60]
0041B4E1  8B 83 BD 01 00 00         MOV EAX,dword ptr [EBX + 0x1bd]
0041B4E7  8B 9B C1 01 00 00         MOV EBX,dword ptr [EBX + 0x1c1]
0041B4ED  B9 90 00 00 00            MOV ECX,0x90
0041B4F2  8B F8                     MOV EDI,EAX
0041B4F4  8B F3                     MOV ESI,EBX
0041B4F6  33 D2                     XOR EDX,EDX
0041B4F8  F3 A7                     CMPSD.REPE ES:EDI,ESI
0041B4FA  0F 84 6A 09 00 00         JZ 0x0041be6a
0041B500  B9 90 00 00 00            MOV ECX,0x90
0041B505  8B F3                     MOV ESI,EBX
0041B507  8B F8                     MOV EDI,EAX
0041B509  52                        PUSH EDX
0041B50A  F3 A5                     MOVSD.REP ES:EDI,ESI
0041B50C  6A 10                     PUSH 0x10
0041B50E  E9 4C 09 00 00            JMP 0x0041be5f
LAB_0041b513:
0041B513  3D A4 01 00 00            CMP EAX,0x1a4
0041B518  0F 84 95 08 00 00         JZ 0x0041bdb3
0041B51E  E9 A3 01 00 00            JMP 0x0041b6c6
LAB_0041b523:
0041B523  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
0041B529  85 C9                     TEST ECX,ECX
0041B52B  0F 84 39 09 00 00         JZ 0x0041be6a
0041B531  6A 01                     PUSH 0x1
0041B533  E8 19 87 FE FF            CALL 0x00403c51
0041B538  85 C0                     TEST EAX,EAX
0041B53A  74 47                     JZ 0x0041b583
0041B53C  8B 8B 21 01 00 00         MOV ECX,dword ptr [EBX + 0x121]
0041B542  8B 03                     MOV EAX,dword ptr [EBX]
0041B544  51                        PUSH ECX
0041B545  8B CB                     MOV ECX,EBX
0041B547  FF 50 30                  CALL dword ptr [EAX + 0x30]
0041B54A  8B 83 1D 01 00 00         MOV EAX,dword ptr [EBX + 0x11d]
0041B550  8B B3 21 01 00 00         MOV ESI,dword ptr [EBX + 0x121]
0041B556  B9 1B 00 00 00            MOV ECX,0x1b
0041B55B  8B F8                     MOV EDI,EAX
0041B55D  33 D2                     XOR EDX,EDX
0041B55F  66 F3 A7                  CMPSW.REPE ES:EDI,ESI
0041B562  74 1F                     JZ 0x0041b583
0041B564  8B B3 21 01 00 00         MOV ESI,dword ptr [EBX + 0x121]
0041B56A  B9 0D 00 00 00            MOV ECX,0xd
0041B56F  8B F8                     MOV EDI,EAX
0041B571  52                        PUSH EDX
0041B572  F3 A5                     MOVSD.REP ES:EDI,ESI
0041B574  66 A5                     MOVSW ES:EDI,ESI
0041B576  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0041B57C  6A 01                     PUSH 0x1
0041B57E  E8 D2 96 FE FF            CALL 0x00404c55
LAB_0041b583:
0041B583  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
0041B589  85 C9                     TEST ECX,ECX
0041B58B  0F 84 D9 08 00 00         JZ 0x0041be6a
0041B591  6A 02                     PUSH 0x2
0041B593  E8 B9 86 FE FF            CALL 0x00403c51
0041B598  85 C0                     TEST EAX,EAX
0041B59A  74 44                     JZ 0x0041b5e0
0041B59C  8B 8B 29 01 00 00         MOV ECX,dword ptr [EBX + 0x129]
0041B5A2  8B 03                     MOV EAX,dword ptr [EBX]
0041B5A4  51                        PUSH ECX
0041B5A5  8B CB                     MOV ECX,EBX
0041B5A7  FF 50 34                  CALL dword ptr [EAX + 0x34]
0041B5AA  8B 83 25 01 00 00         MOV EAX,dword ptr [EBX + 0x125]
0041B5B0  8B B3 29 01 00 00         MOV ESI,dword ptr [EBX + 0x129]
0041B5B6  B9 17 00 00 00            MOV ECX,0x17
0041B5BB  8B F8                     MOV EDI,EAX
0041B5BD  33 D2                     XOR EDX,EDX
0041B5BF  F3 A7                     CMPSD.REPE ES:EDI,ESI
0041B5C1  74 1D                     JZ 0x0041b5e0
0041B5C3  8B B3 29 01 00 00         MOV ESI,dword ptr [EBX + 0x129]
0041B5C9  B9 17 00 00 00            MOV ECX,0x17
0041B5CE  8B F8                     MOV EDI,EAX
0041B5D0  52                        PUSH EDX
0041B5D1  F3 A5                     MOVSD.REP ES:EDI,ESI
0041B5D3  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0041B5D9  6A 02                     PUSH 0x2
0041B5DB  E8 75 96 FE FF            CALL 0x00404c55
LAB_0041b5e0:
0041B5E0  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
0041B5E6  85 C9                     TEST ECX,ECX
0041B5E8  0F 84 7C 08 00 00         JZ 0x0041be6a
0041B5EE  6A 0E                     PUSH 0xe
0041B5F0  E8 5C 86 FE FF            CALL 0x00403c51
0041B5F5  85 C0                     TEST EAX,EAX
0041B5F7  74 54                     JZ 0x0041b64d
0041B5F9  8B 8B B1 01 00 00         MOV ECX,dword ptr [EBX + 0x1b1]
0041B5FF  8B 03                     MOV EAX,dword ptr [EBX]
0041B601  51                        PUSH ECX
0041B602  8B CB                     MOV ECX,EBX
0041B604  FF 50 58                  CALL dword ptr [EAX + 0x58]
0041B607  8B 83 AD 01 00 00         MOV EAX,dword ptr [EBX + 0x1ad]
0041B60D  8B B3 B1 01 00 00         MOV ESI,dword ptr [EBX + 0x1b1]
0041B613  B9 0B 00 00 00            MOV ECX,0xb
0041B618  8B F8                     MOV EDI,EAX
0041B61A  33 D2                     XOR EDX,EDX
0041B61C  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0041B61F  F3 A6                     CMPSB.REPE ES:EDI,ESI
0041B621  74 2A                     JZ 0x0041b64d
0041B623  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0041B626  6A 00                     PUSH 0x0
0041B628  6A 0E                     PUSH 0xe
0041B62A  8B 0E                     MOV ECX,dword ptr [ESI]
0041B62C  89 08                     MOV dword ptr [EAX],ECX
0041B62E  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
0041B631  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
0041B634  66 8B 4E 08               MOV CX,word ptr [ESI + 0x8]
0041B638  66 89 48 08               MOV word ptr [EAX + 0x8],CX
0041B63C  8A 56 0A                  MOV DL,byte ptr [ESI + 0xa]
0041B63F  88 50 0A                  MOV byte ptr [EAX + 0xa],DL
0041B642  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0041B648  E8 08 96 FE FF            CALL 0x00404c55
LAB_0041b64d:
0041B64D  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
0041B653  85 C9                     TEST ECX,ECX
0041B655  0F 84 0F 08 00 00         JZ 0x0041be6a
0041B65B  6A 12                     PUSH 0x12
0041B65D  E8 EF 85 FE FF            CALL 0x00403c51
0041B662  85 C0                     TEST EAX,EAX
0041B664  0F 84 00 08 00 00         JZ 0x0041be6a
0041B66A  8B 8B C9 01 00 00         MOV ECX,dword ptr [EBX + 0x1c9]
0041B670  8B 03                     MOV EAX,dword ptr [EBX]
0041B672  51                        PUSH ECX
0041B673  8B CB                     MOV ECX,EBX
0041B675  FF 50 64                  CALL dword ptr [EAX + 0x64]
0041B678  8B 83 C5 01 00 00         MOV EAX,dword ptr [EBX + 0x1c5]
0041B67E  8B 9B C9 01 00 00         MOV EBX,dword ptr [EBX + 0x1c9]
0041B684  B9 03 00 00 00            MOV ECX,0x3
0041B689  8B F8                     MOV EDI,EAX
0041B68B  8B F3                     MOV ESI,EBX
0041B68D  33 D2                     XOR EDX,EDX
0041B68F  66 F3 A7                  CMPSW.REPE ES:EDI,ESI
0041B692  0F 84 D2 07 00 00         JZ 0x0041be6a
0041B698  8B 0B                     MOV ECX,dword ptr [EBX]
0041B69A  6A 00                     PUSH 0x0
0041B69C  89 08                     MOV dword ptr [EAX],ECX
0041B69E  66 8B 53 04               MOV DX,word ptr [EBX + 0x4]
0041B6A2  66 89 50 04               MOV word ptr [EAX + 0x4],DX
0041B6A6  6A 12                     PUSH 0x12
0041B6A8  E9 B2 07 00 00            JMP 0x0041be5f
LAB_0041b6ad:
0041B6AD  2D B8 01 00 00            SUB EAX,0x1b8
0041B6B2  0F 84 FB 06 00 00         JZ 0x0041bdb3
0041B6B8  2D 30 02 00 00            SUB EAX,0x230
0041B6BD  0F 84 FC 00 00 00         JZ 0x0041b7bf
0041B6C3  48                        DEC EAX
0041B6C4  74 3C                     JZ 0x0041b702
LAB_0041b6c6:
0041B6C6  68 E8 4E 7A 00            PUSH 0x7a4ee8
0041B6CB  68 CC 4C 7A 00            PUSH 0x7a4ccc
0041B6D0  6A 00                     PUSH 0x0
0041B6D2  6A 00                     PUSH 0x0
0041B6D4  68 E4 07 00 00            PUSH 0x7e4
0041B6D9  68 0C 4E 7A 00            PUSH 0x7a4e0c
0041B6DE  E8 ED 1D 29 00            CALL 0x006ad4d0
0041B6E3  83 C4 18                  ADD ESP,0x18
0041B6E6  85 C0                     TEST EAX,EAX
0041B6E8  0F 84 7C 07 00 00         JZ 0x0041be6a
0041B6EE  CC                        INT3
LAB_0041b702:
0041B702  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
0041B708  85 C9                     TEST ECX,ECX
0041B70A  0F 84 5A 07 00 00         JZ 0x0041be6a
0041B710  6A 04                     PUSH 0x4
0041B712  E8 3A 85 FE FF            CALL 0x00403c51
0041B717  85 C0                     TEST EAX,EAX
0041B719  74 44                     JZ 0x0041b75f
0041B71B  8B 8B 29 01 00 00         MOV ECX,dword ptr [EBX + 0x129]
0041B721  8B 03                     MOV EAX,dword ptr [EBX]
0041B723  51                        PUSH ECX
0041B724  8B CB                     MOV ECX,EBX
0041B726  FF 50 34                  CALL dword ptr [EAX + 0x34]
0041B729  8B 83 25 01 00 00         MOV EAX,dword ptr [EBX + 0x125]
0041B72F  8B B3 29 01 00 00         MOV ESI,dword ptr [EBX + 0x129]
0041B735  B9 17 00 00 00            MOV ECX,0x17
0041B73A  8B F8                     MOV EDI,EAX
0041B73C  33 D2                     XOR EDX,EDX
0041B73E  F3 A7                     CMPSD.REPE ES:EDI,ESI
0041B740  74 1D                     JZ 0x0041b75f
0041B742  8B B3 29 01 00 00         MOV ESI,dword ptr [EBX + 0x129]
0041B748  B9 17 00 00 00            MOV ECX,0x17
0041B74D  8B F8                     MOV EDI,EAX
0041B74F  52                        PUSH EDX
0041B750  F3 A5                     MOVSD.REP ES:EDI,ESI
0041B752  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0041B758  6A 04                     PUSH 0x4
0041B75A  E8 F6 94 FE FF            CALL 0x00404c55
LAB_0041b75f:
0041B75F  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
0041B765  85 C9                     TEST ECX,ECX
0041B767  0F 84 FD 06 00 00         JZ 0x0041be6a
0041B76D  6A 05                     PUSH 0x5
0041B76F  E8 DD 84 FE FF            CALL 0x00403c51
0041B774  85 C0                     TEST EAX,EAX
0041B776  0F 84 EE 06 00 00         JZ 0x0041be6a
0041B77C  8B 8B 21 01 00 00         MOV ECX,dword ptr [EBX + 0x121]
0041B782  8B 03                     MOV EAX,dword ptr [EBX]
0041B784  51                        PUSH ECX
0041B785  8B CB                     MOV ECX,EBX
0041B787  FF 50 30                  CALL dword ptr [EAX + 0x30]
0041B78A  8B 83 1D 01 00 00         MOV EAX,dword ptr [EBX + 0x11d]
0041B790  8B 9B 21 01 00 00         MOV EBX,dword ptr [EBX + 0x121]
0041B796  B9 1B 00 00 00            MOV ECX,0x1b
0041B79B  8B F8                     MOV EDI,EAX
0041B79D  8B F3                     MOV ESI,EBX
0041B79F  33 D2                     XOR EDX,EDX
0041B7A1  66 F3 A7                  CMPSW.REPE ES:EDI,ESI
0041B7A4  0F 84 C0 06 00 00         JZ 0x0041be6a
0041B7AA  B9 0D 00 00 00            MOV ECX,0xd
0041B7AF  8B F3                     MOV ESI,EBX
0041B7B1  8B F8                     MOV EDI,EAX
0041B7B3  52                        PUSH EDX
0041B7B4  F3 A5                     MOVSD.REP ES:EDI,ESI
0041B7B6  66 A5                     MOVSW ES:EDI,ESI
0041B7B8  6A 05                     PUSH 0x5
0041B7BA  E9 A0 06 00 00            JMP 0x0041be5f
LAB_0041b7bf:
0041B7BF  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
0041B7C5  85 C9                     TEST ECX,ECX
0041B7C7  0F 84 9D 06 00 00         JZ 0x0041be6a
0041B7CD  6A 04                     PUSH 0x4
0041B7CF  E8 7D 84 FE FF            CALL 0x00403c51
0041B7D4  85 C0                     TEST EAX,EAX
0041B7D6  74 44                     JZ 0x0041b81c
0041B7D8  8B 8B 29 01 00 00         MOV ECX,dword ptr [EBX + 0x129]
0041B7DE  8B 03                     MOV EAX,dword ptr [EBX]
0041B7E0  51                        PUSH ECX
0041B7E1  8B CB                     MOV ECX,EBX
0041B7E3  FF 50 34                  CALL dword ptr [EAX + 0x34]
0041B7E6  8B 83 25 01 00 00         MOV EAX,dword ptr [EBX + 0x125]
0041B7EC  8B B3 29 01 00 00         MOV ESI,dword ptr [EBX + 0x129]
0041B7F2  B9 17 00 00 00            MOV ECX,0x17
0041B7F7  8B F8                     MOV EDI,EAX
0041B7F9  33 D2                     XOR EDX,EDX
0041B7FB  F3 A7                     CMPSD.REPE ES:EDI,ESI
0041B7FD  74 1D                     JZ 0x0041b81c
0041B7FF  8B B3 29 01 00 00         MOV ESI,dword ptr [EBX + 0x129]
0041B805  B9 17 00 00 00            MOV ECX,0x17
0041B80A  8B F8                     MOV EDI,EAX
0041B80C  52                        PUSH EDX
0041B80D  F3 A5                     MOVSD.REP ES:EDI,ESI
0041B80F  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0041B815  6A 04                     PUSH 0x4
0041B817  E8 39 94 FE FF            CALL 0x00404c55
LAB_0041b81c:
0041B81C  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
0041B822  85 C9                     TEST ECX,ECX
0041B824  0F 84 40 06 00 00         JZ 0x0041be6a
0041B82A  6A 05                     PUSH 0x5
0041B82C  E8 20 84 FE FF            CALL 0x00403c51
0041B831  85 C0                     TEST EAX,EAX
0041B833  74 47                     JZ 0x0041b87c
0041B835  8B 8B 21 01 00 00         MOV ECX,dword ptr [EBX + 0x121]
0041B83B  8B 03                     MOV EAX,dword ptr [EBX]
0041B83D  51                        PUSH ECX
0041B83E  8B CB                     MOV ECX,EBX
0041B840  FF 50 30                  CALL dword ptr [EAX + 0x30]
0041B843  8B 83 1D 01 00 00         MOV EAX,dword ptr [EBX + 0x11d]
0041B849  8B B3 21 01 00 00         MOV ESI,dword ptr [EBX + 0x121]
0041B84F  B9 1B 00 00 00            MOV ECX,0x1b
0041B854  8B F8                     MOV EDI,EAX
0041B856  33 D2                     XOR EDX,EDX
0041B858  66 F3 A7                  CMPSW.REPE ES:EDI,ESI
0041B85B  74 1F                     JZ 0x0041b87c
0041B85D  8B B3 21 01 00 00         MOV ESI,dword ptr [EBX + 0x121]
0041B863  B9 0D 00 00 00            MOV ECX,0xd
0041B868  8B F8                     MOV EDI,EAX
0041B86A  52                        PUSH EDX
0041B86B  F3 A5                     MOVSD.REP ES:EDI,ESI
0041B86D  66 A5                     MOVSW ES:EDI,ESI
0041B86F  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0041B875  6A 05                     PUSH 0x5
0041B877  E8 D9 93 FE FF            CALL 0x00404c55
LAB_0041b87c:
0041B87C  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
0041B882  85 C9                     TEST ECX,ECX
0041B884  0F 84 E0 05 00 00         JZ 0x0041be6a
0041B88A  6A 06                     PUSH 0x6
0041B88C  E8 C0 83 FE FF            CALL 0x00403c51
0041B891  85 C0                     TEST EAX,EAX
0041B893  0F 84 EE 00 00 00         JZ 0x0041b987
0041B899  8B 83 35 01 00 00         MOV EAX,dword ptr [EBX + 0x135]
0041B89F  8D B3 35 01 00 00         LEA ESI,[EBX + 0x135]
0041B8A5  85 C0                     TEST EAX,EAX
0041B8A7  74 06                     JZ 0x0041b8af
0041B8A9  50                        PUSH EAX
0041B8AA  E8 61 28 29 00            CALL 0x006ae110
LAB_0041b8af:
0041B8AF  8B 83 39 01 00 00         MOV EAX,dword ptr [EBX + 0x139]
0041B8B5  85 C0                     TEST EAX,EAX
0041B8B7  74 06                     JZ 0x0041b8bf
0041B8B9  50                        PUSH EAX
0041B8BA  E8 51 28 29 00            CALL 0x006ae110
LAB_0041b8bf:
0041B8BF  8B CE                     MOV ECX,ESI
0041B8C1  33 C0                     XOR EAX,EAX
0041B8C3  56                        PUSH ESI
0041B8C4  89 01                     MOV dword ptr [ECX],EAX
0041B8C6  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
0041B8C9  8B 13                     MOV EDX,dword ptr [EBX]
0041B8CB  8B CB                     MOV ECX,EBX
0041B8CD  FF 52 38                  CALL dword ptr [EDX + 0x38]
0041B8D0  8B 36                     MOV ESI,dword ptr [ESI]
0041B8D2  8B BB 2D 01 00 00         MOV EDI,dword ptr [EBX + 0x12d]
0041B8D8  33 D2                     XOR EDX,EDX
0041B8DA  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
0041B8DD  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
0041B8E0  3B C1                     CMP EAX,ECX
0041B8E2  75 12                     JNZ 0x0041b8f6
0041B8E4  8B 7F 1C                  MOV EDI,dword ptr [EDI + 0x1c]
0041B8E7  8B 76 1C                  MOV ESI,dword ptr [ESI + 0x1c]
0041B8EA  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
0041B8ED  C1 E1 04                  SHL ECX,0x4
0041B8F0  33 C0                     XOR EAX,EAX
0041B8F2  F3 A6                     CMPSB.REPE ES:EDI,ESI
0041B8F4  74 05                     JZ 0x0041b8fb
LAB_0041b8f6:
0041B8F6  BA 01 00 00 00            MOV EDX,0x1
LAB_0041b8fb:
0041B8FB  85 D2                     TEST EDX,EDX
0041B8FD  75 2D                     JNZ 0x0041b92c
0041B8FF  8B B3 39 01 00 00         MOV ESI,dword ptr [EBX + 0x139]
0041B905  8B BB 31 01 00 00         MOV EDI,dword ptr [EBX + 0x131]
0041B90B  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
0041B90E  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
0041B911  3B C1                     CMP EAX,ECX
0041B913  75 12                     JNZ 0x0041b927
0041B915  8B 7F 1C                  MOV EDI,dword ptr [EDI + 0x1c]
0041B918  8B 76 1C                  MOV ESI,dword ptr [ESI + 0x1c]
0041B91B  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
0041B91E  C1 E1 04                  SHL ECX,0x4
0041B921  33 C0                     XOR EAX,EAX
0041B923  F3 A6                     CMPSB.REPE ES:EDI,ESI
0041B925  74 05                     JZ 0x0041b92c
LAB_0041b927:
0041B927  BA 01 00 00 00            MOV EDX,0x1
LAB_0041b92c:
0041B92C  83 FA 01                  CMP EDX,0x1
0041B92F  75 56                     JNZ 0x0041b987
0041B931  8B 83 2D 01 00 00         MOV EAX,dword ptr [EBX + 0x12d]
0041B937  85 C0                     TEST EAX,EAX
0041B939  74 06                     JZ 0x0041b941
0041B93B  50                        PUSH EAX
0041B93C  E8 CF 27 29 00            CALL 0x006ae110
LAB_0041b941:
0041B941  8B 83 31 01 00 00         MOV EAX,dword ptr [EBX + 0x131]
0041B947  8D B3 31 01 00 00         LEA ESI,[EBX + 0x131]
0041B94D  85 C0                     TEST EAX,EAX
0041B94F  74 06                     JZ 0x0041b957
0041B951  50                        PUSH EAX
0041B952  E8 B9 27 29 00            CALL 0x006ae110
LAB_0041b957:
0041B957  8D 8B 2D 01 00 00         LEA ECX,[EBX + 0x12d]
0041B95D  33 D2                     XOR EDX,EDX
0041B95F  8B C1                     MOV EAX,ECX
0041B961  89 10                     MOV dword ptr [EAX],EDX
0041B963  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
0041B966  8B 93 35 01 00 00         MOV EDX,dword ptr [EBX + 0x135]
0041B96C  E8 CF 44 29 00            CALL 0x006afe40
0041B971  8B 93 39 01 00 00         MOV EDX,dword ptr [EBX + 0x139]
0041B977  8B CE                     MOV ECX,ESI
0041B979  E8 C2 44 29 00            CALL 0x006afe40
0041B97E  6A 00                     PUSH 0x0
0041B980  6A 06                     PUSH 0x6
0041B982  E9 D8 04 00 00            JMP 0x0041be5f
LAB_0041b987:
0041B987  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
0041B98D  85 C9                     TEST ECX,ECX
0041B98F  0F 84 D5 04 00 00         JZ 0x0041be6a
0041B995  6A 07                     PUSH 0x7
0041B997  E8 B5 82 FE FF            CALL 0x00403c51
0041B99C  85 C0                     TEST EAX,EAX
0041B99E  0F 84 C8 01 00 00         JZ 0x0041bb6c
0041B9A4  8B 83 4D 01 00 00         MOV EAX,dword ptr [EBX + 0x14d]
0041B9AA  8D B3 4D 01 00 00         LEA ESI,[EBX + 0x14d]
0041B9B0  85 C0                     TEST EAX,EAX
0041B9B2  74 06                     JZ 0x0041b9ba
0041B9B4  50                        PUSH EAX
0041B9B5  E8 56 27 29 00            CALL 0x006ae110
LAB_0041b9ba:
0041B9BA  8B 83 51 01 00 00         MOV EAX,dword ptr [EBX + 0x151]
0041B9C0  85 C0                     TEST EAX,EAX
0041B9C2  74 06                     JZ 0x0041b9ca
0041B9C4  50                        PUSH EAX
0041B9C5  E8 46 27 29 00            CALL 0x006ae110
LAB_0041b9ca:
0041B9CA  8B 83 55 01 00 00         MOV EAX,dword ptr [EBX + 0x155]
0041B9D0  85 C0                     TEST EAX,EAX
0041B9D2  74 06                     JZ 0x0041b9da
0041B9D4  50                        PUSH EAX
0041B9D5  E8 36 27 29 00            CALL 0x006ae110
LAB_0041b9da:
0041B9DA  8B 83 59 01 00 00         MOV EAX,dword ptr [EBX + 0x159]
0041B9E0  85 C0                     TEST EAX,EAX
0041B9E2  74 06                     JZ 0x0041b9ea
0041B9E4  50                        PUSH EAX
0041B9E5  E8 26 27 29 00            CALL 0x006ae110
LAB_0041b9ea:
0041B9EA  8B D6                     MOV EDX,ESI
0041B9EC  33 C9                     XOR ECX,ECX
0041B9EE  56                        PUSH ESI
0041B9EF  89 0A                     MOV dword ptr [EDX],ECX
0041B9F1  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
0041B9F4  89 4A 08                  MOV dword ptr [EDX + 0x8],ECX
0041B9F7  89 4A 0C                  MOV dword ptr [EDX + 0xc],ECX
0041B9FA  8B 03                     MOV EAX,dword ptr [EBX]
0041B9FC  8B CB                     MOV ECX,EBX
0041B9FE  FF 50 3C                  CALL dword ptr [EAX + 0x3c]
0041BA01  8B 36                     MOV ESI,dword ptr [ESI]
0041BA03  8B BB 3D 01 00 00         MOV EDI,dword ptr [EBX + 0x13d]
0041BA09  33 D2                     XOR EDX,EDX
0041BA0B  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0041BA0E  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
0041BA11  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
0041BA14  3B C1                     CMP EAX,ECX
0041BA16  75 12                     JNZ 0x0041ba2a
0041BA18  8B 7F 1C                  MOV EDI,dword ptr [EDI + 0x1c]
0041BA1B  8B 76 1C                  MOV ESI,dword ptr [ESI + 0x1c]
0041BA1E  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
0041BA21  C1 E1 04                  SHL ECX,0x4
0041BA24  33 C0                     XOR EAX,EAX
0041BA26  F3 A6                     CMPSB.REPE ES:EDI,ESI
0041BA28  74 05                     JZ 0x0041ba2f
LAB_0041ba2a:
0041BA2A  BA 01 00 00 00            MOV EDX,0x1
LAB_0041ba2f:
0041BA2F  85 D2                     TEST EDX,EDX
0041BA31  0F 85 8F 00 00 00         JNZ 0x0041bac6
0041BA37  8B B3 51 01 00 00         MOV ESI,dword ptr [EBX + 0x151]
0041BA3D  8B BB 41 01 00 00         MOV EDI,dword ptr [EBX + 0x141]
0041BA43  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
0041BA46  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
0041BA49  3B C1                     CMP EAX,ECX
0041BA4B  75 12                     JNZ 0x0041ba5f
0041BA4D  8B 7F 1C                  MOV EDI,dword ptr [EDI + 0x1c]
0041BA50  8B 76 1C                  MOV ESI,dword ptr [ESI + 0x1c]
0041BA53  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
0041BA56  C1 E1 04                  SHL ECX,0x4
0041BA59  33 C0                     XOR EAX,EAX
0041BA5B  F3 A6                     CMPSB.REPE ES:EDI,ESI
0041BA5D  74 05                     JZ 0x0041ba64
LAB_0041ba5f:
0041BA5F  BA 01 00 00 00            MOV EDX,0x1
LAB_0041ba64:
0041BA64  85 D2                     TEST EDX,EDX
0041BA66  75 5E                     JNZ 0x0041bac6
0041BA68  8B B3 55 01 00 00         MOV ESI,dword ptr [EBX + 0x155]
0041BA6E  8B BB 45 01 00 00         MOV EDI,dword ptr [EBX + 0x145]
0041BA74  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
0041BA77  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
0041BA7A  3B C1                     CMP EAX,ECX
0041BA7C  75 12                     JNZ 0x0041ba90
0041BA7E  8B 7F 1C                  MOV EDI,dword ptr [EDI + 0x1c]
0041BA81  8B 76 1C                  MOV ESI,dword ptr [ESI + 0x1c]
0041BA84  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
0041BA87  C1 E1 04                  SHL ECX,0x4
0041BA8A  33 C0                     XOR EAX,EAX
0041BA8C  F3 A6                     CMPSB.REPE ES:EDI,ESI
0041BA8E  74 05                     JZ 0x0041ba95
LAB_0041ba90:
0041BA90  BA 01 00 00 00            MOV EDX,0x1
LAB_0041ba95:
0041BA95  85 D2                     TEST EDX,EDX
0041BA97  75 2D                     JNZ 0x0041bac6
0041BA99  8B B3 59 01 00 00         MOV ESI,dword ptr [EBX + 0x159]
0041BA9F  8B BB 49 01 00 00         MOV EDI,dword ptr [EBX + 0x149]
0041BAA5  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
0041BAA8  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
0041BAAB  3B C1                     CMP EAX,ECX
0041BAAD  75 12                     JNZ 0x0041bac1
0041BAAF  8B 7F 1C                  MOV EDI,dword ptr [EDI + 0x1c]
0041BAB2  8B 76 1C                  MOV ESI,dword ptr [ESI + 0x1c]
0041BAB5  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
0041BAB8  C1 E1 04                  SHL ECX,0x4
0041BABB  33 C0                     XOR EAX,EAX
0041BABD  F3 A6                     CMPSB.REPE ES:EDI,ESI
0041BABF  74 05                     JZ 0x0041bac6
LAB_0041bac1:
0041BAC1  BA 01 00 00 00            MOV EDX,0x1
LAB_0041bac6:
0041BAC6  83 FA 01                  CMP EDX,0x1
0041BAC9  0F 85 9D 00 00 00         JNZ 0x0041bb6c
0041BACF  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0041BAD2  85 C0                     TEST EAX,EAX
0041BAD4  74 06                     JZ 0x0041badc
0041BAD6  50                        PUSH EAX
0041BAD7  E8 34 26 29 00            CALL 0x006ae110
LAB_0041badc:
0041BADC  8B 83 41 01 00 00         MOV EAX,dword ptr [EBX + 0x141]
0041BAE2  85 C0                     TEST EAX,EAX
0041BAE4  74 06                     JZ 0x0041baec
0041BAE6  50                        PUSH EAX
0041BAE7  E8 24 26 29 00            CALL 0x006ae110
LAB_0041baec:
0041BAEC  8B 83 45 01 00 00         MOV EAX,dword ptr [EBX + 0x145]
0041BAF2  8D BB 45 01 00 00         LEA EDI,[EBX + 0x145]
0041BAF8  85 C0                     TEST EAX,EAX
0041BAFA  74 06                     JZ 0x0041bb02
0041BAFC  50                        PUSH EAX
0041BAFD  E8 0E 26 29 00            CALL 0x006ae110
LAB_0041bb02:
0041BB02  8B 83 49 01 00 00         MOV EAX,dword ptr [EBX + 0x149]
0041BB08  8D B3 49 01 00 00         LEA ESI,[EBX + 0x149]
0041BB0E  85 C0                     TEST EAX,EAX
0041BB10  74 06                     JZ 0x0041bb18
0041BB12  50                        PUSH EAX
0041BB13  E8 F8 25 29 00            CALL 0x006ae110
LAB_0041bb18:
0041BB18  8D 8B 3D 01 00 00         LEA ECX,[EBX + 0x13d]
0041BB1E  33 D2                     XOR EDX,EDX
0041BB20  8B C1                     MOV EAX,ECX
0041BB22  89 10                     MOV dword ptr [EAX],EDX
0041BB24  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
0041BB27  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
0041BB2A  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
0041BB2D  8B 93 4D 01 00 00         MOV EDX,dword ptr [EBX + 0x14d]
0041BB33  E8 08 43 29 00            CALL 0x006afe40
0041BB38  8B 93 51 01 00 00         MOV EDX,dword ptr [EBX + 0x151]
0041BB3E  8D 8B 41 01 00 00         LEA ECX,[EBX + 0x141]
0041BB44  E8 F7 42 29 00            CALL 0x006afe40
0041BB49  8B 93 55 01 00 00         MOV EDX,dword ptr [EBX + 0x155]
0041BB4F  8B CF                     MOV ECX,EDI
0041BB51  E8 EA 42 29 00            CALL 0x006afe40
0041BB56  8B 93 59 01 00 00         MOV EDX,dword ptr [EBX + 0x159]
0041BB5C  8B CE                     MOV ECX,ESI
0041BB5E  E8 DD 42 29 00            CALL 0x006afe40
0041BB63  6A 00                     PUSH 0x0
0041BB65  6A 07                     PUSH 0x7
0041BB67  E9 F3 02 00 00            JMP 0x0041be5f
LAB_0041bb6c:
0041BB6C  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
0041BB72  85 C9                     TEST ECX,ECX
0041BB74  0F 84 F0 02 00 00         JZ 0x0041be6a
0041BB7A  6A 09                     PUSH 0x9
0041BB7C  E8 D0 80 FE FF            CALL 0x00403c51
0041BB81  85 C0                     TEST EAX,EAX
0041BB83  74 45                     JZ 0x0041bbca
0041BB85  8B 83 89 01 00 00         MOV EAX,dword ptr [EBX + 0x189]
0041BB8B  8B 13                     MOV EDX,dword ptr [EBX]
0041BB8D  50                        PUSH EAX
0041BB8E  8B CB                     MOV ECX,EBX
0041BB90  FF 52 44                  CALL dword ptr [EDX + 0x44]
0041BB93  8B 83 85 01 00 00         MOV EAX,dword ptr [EBX + 0x185]
0041BB99  8B B3 89 01 00 00         MOV ESI,dword ptr [EBX + 0x189]
0041BB9F  B9 29 01 00 00            MOV ECX,0x129
0041BBA4  8B F8                     MOV EDI,EAX
0041BBA6  33 D2                     XOR EDX,EDX
0041BBA8  F3 A6                     CMPSB.REPE ES:EDI,ESI
0041BBAA  74 1E                     JZ 0x0041bbca
0041BBAC  8B B3 89 01 00 00         MOV ESI,dword ptr [EBX + 0x189]
0041BBB2  B9 4A 00 00 00            MOV ECX,0x4a
0041BBB7  8B F8                     MOV EDI,EAX
0041BBB9  52                        PUSH EDX
0041BBBA  F3 A5                     MOVSD.REP ES:EDI,ESI
0041BBBC  A4                        MOVSB ES:EDI,ESI
0041BBBD  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0041BBC3  6A 09                     PUSH 0x9
0041BBC5  E8 8B 90 FE FF            CALL 0x00404c55
LAB_0041bbca:
0041BBCA  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
0041BBD0  85 C9                     TEST ECX,ECX
0041BBD2  0F 84 92 02 00 00         JZ 0x0041be6a
0041BBD8  6A 0A                     PUSH 0xa
0041BBDA  E8 72 80 FE FF            CALL 0x00403c51
0041BBDF  85 C0                     TEST EAX,EAX
0041BBE1  74 52                     JZ 0x0041bc35
0041BBE3  8B 8B 91 01 00 00         MOV ECX,dword ptr [EBX + 0x191]
0041BBE9  8B 03                     MOV EAX,dword ptr [EBX]
0041BBEB  51                        PUSH ECX
0041BBEC  8B CB                     MOV ECX,EBX
0041BBEE  FF 50 48                  CALL dword ptr [EAX + 0x48]
0041BBF1  8B 83 8D 01 00 00         MOV EAX,dword ptr [EBX + 0x18d]
0041BBF7  8B B3 91 01 00 00         MOV ESI,dword ptr [EBX + 0x191]
0041BBFD  B9 04 00 00 00            MOV ECX,0x4
0041BC02  8B F8                     MOV EDI,EAX
0041BC04  33 D2                     XOR EDX,EDX
0041BC06  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0041BC09  F3 A7                     CMPSD.REPE ES:EDI,ESI
0041BC0B  74 28                     JZ 0x0041bc35
0041BC0D  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0041BC10  6A 00                     PUSH 0x0
0041BC12  6A 0A                     PUSH 0xa
0041BC14  8B 11                     MOV EDX,dword ptr [ECX]
0041BC16  89 10                     MOV dword ptr [EAX],EDX
0041BC18  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
0041BC1B  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
0041BC1E  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
0041BC21  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
0041BC24  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
0041BC27  89 48 0C                  MOV dword ptr [EAX + 0xc],ECX
0041BC2A  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0041BC30  E8 20 90 FE FF            CALL 0x00404c55
LAB_0041bc35:
0041BC35  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
0041BC3B  85 C9                     TEST ECX,ECX
0041BC3D  0F 84 27 02 00 00         JZ 0x0041be6a
0041BC43  6A 0C                     PUSH 0xc
0041BC45  E8 07 80 FE FF            CALL 0x00403c51
0041BC4A  85 C0                     TEST EAX,EAX
0041BC4C  0F 84 91 00 00 00         JZ 0x0041bce3
0041BC52  8B 83 A1 01 00 00         MOV EAX,dword ptr [EBX + 0x1a1]
0041BC58  8D B3 A1 01 00 00         LEA ESI,[EBX + 0x1a1]
0041BC5E  85 C0                     TEST EAX,EAX
0041BC60  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
0041BC63  74 0C                     JZ 0x0041bc71
0041BC65  50                        PUSH EAX
0041BC66  E8 A5 24 29 00            CALL 0x006ae110
0041BC6B  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
LAB_0041bc71:
0041BC71  8B 13                     MOV EDX,dword ptr [EBX]
0041BC73  56                        PUSH ESI
0041BC74  8B CB                     MOV ECX,EBX
0041BC76  FF 52 50                  CALL dword ptr [EDX + 0x50]
0041BC79  8B 36                     MOV ESI,dword ptr [ESI]
0041BC7B  8B 93 9D 01 00 00         MOV EDX,dword ptr [EBX + 0x19d]
0041BC81  8D 83 9D 01 00 00         LEA EAX,[EBX + 0x19d]
0041BC87  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0041BC8E  8B 4A 0C                  MOV ECX,dword ptr [EDX + 0xc]
0041BC91  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0041BC94  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
0041BC97  3B C1                     CMP EAX,ECX
0041BC99  75 12                     JNZ 0x0041bcad
0041BC9B  8B 7A 1C                  MOV EDI,dword ptr [EDX + 0x1c]
0041BC9E  8B 76 1C                  MOV ESI,dword ptr [ESI + 0x1c]
0041BCA1  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
0041BCA4  C1 E1 04                  SHL ECX,0x4
0041BCA7  33 C0                     XOR EAX,EAX
0041BCA9  F3 A6                     CMPSB.REPE ES:EDI,ESI
0041BCAB  74 07                     JZ 0x0041bcb4
LAB_0041bcad:
0041BCAD  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
LAB_0041bcb4:
0041BCB4  83 7D FC 01               CMP dword ptr [EBP + -0x4],0x1
0041BCB8  75 29                     JNZ 0x0041bce3
0041BCBA  85 D2                     TEST EDX,EDX
0041BCBC  74 0F                     JZ 0x0041bccd
0041BCBE  52                        PUSH EDX
0041BCBF  E8 4C 24 29 00            CALL 0x006ae110
0041BCC4  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0041BCC7  C7 01 00 00 00 00         MOV dword ptr [ECX],0x0
LAB_0041bccd:
0041BCCD  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0041BCD0  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0041BCD3  8B 12                     MOV EDX,dword ptr [EDX]
0041BCD5  E8 66 41 29 00            CALL 0x006afe40
0041BCDA  6A 00                     PUSH 0x0
0041BCDC  6A 0C                     PUSH 0xc
0041BCDE  E9 7C 01 00 00            JMP 0x0041be5f
LAB_0041bce3:
0041BCE3  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
0041BCE9  85 C9                     TEST ECX,ECX
0041BCEB  0F 84 79 01 00 00         JZ 0x0041be6a
0041BCF1  6A 0D                     PUSH 0xd
0041BCF3  E8 59 7F FE FF            CALL 0x00403c51
0041BCF8  85 C0                     TEST EAX,EAX
0041BCFA  74 4C                     JZ 0x0041bd48
0041BCFC  8B 8B A9 01 00 00         MOV ECX,dword ptr [EBX + 0x1a9]
0041BD02  8B 03                     MOV EAX,dword ptr [EBX]
0041BD04  51                        PUSH ECX
0041BD05  8B CB                     MOV ECX,EBX
0041BD07  FF 50 54                  CALL dword ptr [EAX + 0x54]
0041BD0A  8B 83 A5 01 00 00         MOV EAX,dword ptr [EBX + 0x1a5]
0041BD10  8B B3 A9 01 00 00         MOV ESI,dword ptr [EBX + 0x1a9]
0041BD16  B9 03 00 00 00            MOV ECX,0x3
0041BD1B  8B F8                     MOV EDI,EAX
0041BD1D  33 D2                     XOR EDX,EDX
0041BD1F  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
0041BD22  F3 A7                     CMPSD.REPE ES:EDI,ESI
0041BD24  74 22                     JZ 0x0041bd48
0041BD26  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0041BD29  6A 00                     PUSH 0x0
0041BD2B  6A 0D                     PUSH 0xd
0041BD2D  8B 11                     MOV EDX,dword ptr [ECX]
0041BD2F  89 10                     MOV dword ptr [EAX],EDX
0041BD31  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
0041BD34  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
0041BD37  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
0041BD3A  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
0041BD3D  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0041BD43  E8 0D 8F FE FF            CALL 0x00404c55
LAB_0041bd48:
0041BD48  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
0041BD4E  85 C9                     TEST ECX,ECX
0041BD50  0F 84 14 01 00 00         JZ 0x0041be6a
0041BD56  6A 0F                     PUSH 0xf
0041BD58  E8 F4 7E FE FF            CALL 0x00403c51
0041BD5D  85 C0                     TEST EAX,EAX
0041BD5F  0F 84 05 01 00 00         JZ 0x0041be6a
0041BD65  8B 83 B9 01 00 00         MOV EAX,dword ptr [EBX + 0x1b9]
0041BD6B  8B 13                     MOV EDX,dword ptr [EBX]
0041BD6D  50                        PUSH EAX
0041BD6E  8B CB                     MOV ECX,EBX
0041BD70  FF 52 5C                  CALL dword ptr [EDX + 0x5c]
0041BD73  8B 83 B5 01 00 00         MOV EAX,dword ptr [EBX + 0x1b5]
0041BD79  8B 9B B9 01 00 00         MOV EBX,dword ptr [EBX + 0x1b9]
0041BD7F  B9 0B 00 00 00            MOV ECX,0xb
0041BD84  8B F8                     MOV EDI,EAX
0041BD86  8B F3                     MOV ESI,EBX
0041BD88  33 D2                     XOR EDX,EDX
0041BD8A  F3 A6                     CMPSB.REPE ES:EDI,ESI
0041BD8C  0F 84 D8 00 00 00         JZ 0x0041be6a
0041BD92  8B 0B                     MOV ECX,dword ptr [EBX]
0041BD94  6A 00                     PUSH 0x0
0041BD96  89 08                     MOV dword ptr [EAX],ECX
0041BD98  8B 53 04                  MOV EDX,dword ptr [EBX + 0x4]
0041BD9B  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
0041BD9E  66 8B 4B 08               MOV CX,word ptr [EBX + 0x8]
0041BDA2  66 89 48 08               MOV word ptr [EAX + 0x8],CX
0041BDA6  8A 53 0A                  MOV DL,byte ptr [EBX + 0xa]
0041BDA9  88 50 0A                  MOV byte ptr [EAX + 0xa],DL
0041BDAC  6A 0F                     PUSH 0xf
0041BDAE  E9 AC 00 00 00            JMP 0x0041be5f
LAB_0041bdb3:
0041BDB3  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
0041BDB9  85 C9                     TEST ECX,ECX
0041BDBB  0F 84 A9 00 00 00         JZ 0x0041be6a
0041BDC1  6A 05                     PUSH 0x5
0041BDC3  E8 89 7E FE FF            CALL 0x00403c51
0041BDC8  85 C0                     TEST EAX,EAX
0041BDCA  74 47                     JZ 0x0041be13
0041BDCC  8B 8B 21 01 00 00         MOV ECX,dword ptr [EBX + 0x121]
0041BDD2  8B 03                     MOV EAX,dword ptr [EBX]
0041BDD4  51                        PUSH ECX
0041BDD5  8B CB                     MOV ECX,EBX
0041BDD7  FF 50 30                  CALL dword ptr [EAX + 0x30]
0041BDDA  8B 83 1D 01 00 00         MOV EAX,dword ptr [EBX + 0x11d]
0041BDE0  8B B3 21 01 00 00         MOV ESI,dword ptr [EBX + 0x121]
0041BDE6  B9 1B 00 00 00            MOV ECX,0x1b
0041BDEB  8B F8                     MOV EDI,EAX
0041BDED  33 D2                     XOR EDX,EDX
0041BDEF  66 F3 A7                  CMPSW.REPE ES:EDI,ESI
0041BDF2  74 1F                     JZ 0x0041be13
0041BDF4  8B B3 21 01 00 00         MOV ESI,dword ptr [EBX + 0x121]
0041BDFA  B9 0D 00 00 00            MOV ECX,0xd
0041BDFF  8B F8                     MOV EDI,EAX
0041BE01  52                        PUSH EDX
0041BE02  F3 A5                     MOVSD.REP ES:EDI,ESI
0041BE04  66 A5                     MOVSW ES:EDI,ESI
0041BE06  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0041BE0C  6A 05                     PUSH 0x5
0041BE0E  E8 42 8E FE FF            CALL 0x00404c55
LAB_0041be13:
0041BE13  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
0041BE19  85 C9                     TEST ECX,ECX
0041BE1B  74 4D                     JZ 0x0041be6a
0041BE1D  6A 04                     PUSH 0x4
0041BE1F  E8 2D 7E FE FF            CALL 0x00403c51
0041BE24  85 C0                     TEST EAX,EAX
0041BE26  74 42                     JZ 0x0041be6a
0041BE28  8B 8B 29 01 00 00         MOV ECX,dword ptr [EBX + 0x129]
0041BE2E  8B 03                     MOV EAX,dword ptr [EBX]
0041BE30  51                        PUSH ECX
0041BE31  8B CB                     MOV ECX,EBX
0041BE33  FF 50 34                  CALL dword ptr [EAX + 0x34]
0041BE36  8B 83 25 01 00 00         MOV EAX,dword ptr [EBX + 0x125]
0041BE3C  8B 9B 29 01 00 00         MOV EBX,dword ptr [EBX + 0x129]
0041BE42  B9 17 00 00 00            MOV ECX,0x17
0041BE47  8B F8                     MOV EDI,EAX
0041BE49  8B F3                     MOV ESI,EBX
0041BE4B  33 D2                     XOR EDX,EDX
0041BE4D  F3 A7                     CMPSD.REPE ES:EDI,ESI
0041BE4F  74 19                     JZ 0x0041be6a
0041BE51  B9 17 00 00 00            MOV ECX,0x17
0041BE56  8B F3                     MOV ESI,EBX
0041BE58  8B F8                     MOV EDI,EAX
0041BE5A  52                        PUSH EDX
0041BE5B  F3 A5                     MOVSD.REP ES:EDI,ESI
0041BE5D  6A 04                     PUSH 0x4
LAB_0041be5f:
0041BE5F  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0041BE65  E8 EB 8D FE FF            CALL 0x00404c55
LAB_0041be6a:
0041BE6A  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
0041BE6D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0041BE72  33 C0                     XOR EAX,EAX
0041BE74  5F                        POP EDI
0041BE75  5E                        POP ESI
0041BE76  5B                        POP EBX
0041BE77  8B E5                     MOV ESP,EBP
0041BE79  5D                        POP EBP
0041BE7A  C2 04 00                  RET 0x4
LAB_0041be7d:
0041BE7D  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
0041BE80  68 CC 4E 7A 00            PUSH 0x7a4ecc
0041BE85  68 CC 4C 7A 00            PUSH 0x7a4ccc
0041BE8A  56                        PUSH ESI
0041BE8B  6A 00                     PUSH 0x0
0041BE8D  68 EB 07 00 00            PUSH 0x7eb
0041BE92  68 0C 4E 7A 00            PUSH 0x7a4e0c
0041BE97  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0041BE9D  E8 2E 16 29 00            CALL 0x006ad4d0
0041BEA2  83 C4 18                  ADD ESP,0x18
0041BEA5  85 C0                     TEST EAX,EAX
0041BEA7  74 01                     JZ 0x0041beaa
0041BEA9  CC                        INT3
LAB_0041beaa:
0041BEAA  68 EC 07 00 00            PUSH 0x7ec
0041BEAF  68 0C 4E 7A 00            PUSH 0x7a4e0c
0041BEB4  6A 00                     PUSH 0x0
0041BEB6  56                        PUSH ESI
0041BEB7  E8 84 9F 28 00            CALL 0x006a5e40
0041BEBC  5F                        POP EDI
0041BEBD  5E                        POP ESI
0041BEBE  B8 FF FF 00 00            MOV EAX,0xffff
0041BEC3  5B                        POP EBX
0041BEC4  8B E5                     MOV ESP,EBP
0041BEC6  5D                        POP EBP
0041BEC7  C2 04 00                  RET 0x4
