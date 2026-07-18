FUN_0040ae40:
0040AE40  55                        PUSH EBP
0040AE41  8B EC                     MOV EBP,ESP
0040AE43  81 EC 8C 00 00 00         SUB ESP,0x8c
0040AE49  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0040AE4C  53                        PUSH EBX
0040AE4D  56                        PUSH ESI
0040AE4E  57                        PUSH EDI
0040AE4F  50                        PUSH EAX
0040AE50  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0040AE53  E8 17 7A FF FF            CALL 0x0040286f
0040AE58  8B F0                     MOV ESI,EAX
0040AE5A  33 DB                     XOR EBX,EBX
0040AE5C  3B F3                     CMP ESI,EBX
0040AE5E  89 75 BC                  MOV dword ptr [EBP + -0x44],ESI
0040AE61  0F 84 35 0B 00 00         JZ 0x0040b99c
0040AE67  8D 8E 9F 00 00 00         LEA ECX,[ESI + 0x9f]
0040AE6D  51                        PUSH ECX
0040AE6E  E8 ED 01 2A 00            CALL 0x006ab060
0040AE73  89 9E A3 00 00 00         MOV dword ptr [ESI + 0xa3],EBX
0040AE79  89 9E A7 00 00 00         MOV dword ptr [ESI + 0xa7],EBX
0040AE7F  89 9E AB 00 00 00         MOV dword ptr [ESI + 0xab],EBX
0040AE85  66 8B 46 47               MOV AX,word ptr [ESI + 0x47]
0040AE89  66 3B C3                  CMP AX,BX
0040AE8C  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0040AE8F  0F 8C 07 0B 00 00         JL 0x0040b99c
0040AE95  66 8B 0D 78 B2 7F 00      MOV CX,word ptr [0x007fb278]
0040AE9C  66 3B C1                  CMP AX,CX
0040AE9F  0F 8D F7 0A 00 00         JGE 0x0040b99c
0040AEA5  66 8B 46 49               MOV AX,word ptr [ESI + 0x49]
0040AEA9  66 3B C3                  CMP AX,BX
0040AEAC  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0040AEAF  0F 8C E7 0A 00 00         JL 0x0040b99c
0040AEB5  66 3B 05 7A B2 7F 00      CMP AX,word ptr [0x007fb27a]
0040AEBC  0F 8D DA 0A 00 00         JGE 0x0040b99c
0040AEC2  66 8B 7E 4B               MOV DI,word ptr [ESI + 0x4b]
0040AEC6  66 3B FB                  CMP DI,BX
0040AEC9  0F 8C CD 0A 00 00         JL 0x0040b99c
0040AECF  66 3B 3D 7C B2 7F 00      CMP DI,word ptr [0x007fb27c]
0040AED6  0F 8D C0 0A 00 00         JGE 0x0040b99c
0040AEDC  8B 96 BB 00 00 00         MOV EDX,dword ptr [ESI + 0xbb]
0040AEE2  3B D3                     CMP EDX,EBX
0040AEE4  0F 8C B2 0A 00 00         JL 0x0040b99c
0040AEEA  0F BF C1                  MOVSX EAX,CX
0040AEED  3B D0                     CMP EDX,EAX
0040AEEF  0F 8D A7 0A 00 00         JGE 0x0040b99c
0040AEF5  8B 8E BF 00 00 00         MOV ECX,dword ptr [ESI + 0xbf]
0040AEFB  3B CB                     CMP ECX,EBX
0040AEFD  0F 8C 99 0A 00 00         JL 0x0040b99c
0040AF03  0F BF 05 7A B2 7F 00      MOVSX EAX,word ptr [0x007fb27a]
0040AF0A  3B C8                     CMP ECX,EAX
0040AF0C  0F 8D 8A 0A 00 00         JGE 0x0040b99c
0040AF12  8B 86 C3 00 00 00         MOV EAX,dword ptr [ESI + 0xc3]
0040AF18  3B C3                     CMP EAX,EBX
0040AF1A  0F 8C 7C 0A 00 00         JL 0x0040b99c
0040AF20  0F BF 1D 7C B2 7F 00      MOVSX EBX,word ptr [0x007fb27c]
0040AF27  3B C3                     CMP EAX,EBX
0040AF29  0F 8D 6D 0A 00 00         JGE 0x0040b99c
0040AF2F  50                        PUSH EAX
0040AF30  51                        PUSH ECX
0040AF31  0F BF 45 DC               MOVSX EAX,word ptr [EBP + -0x24]
0040AF35  52                        PUSH EDX
0040AF36  0F BF 55 F4               MOVSX EDX,word ptr [EBP + -0xc]
0040AF3A  0F BF CF                  MOVSX ECX,DI
0040AF3D  51                        PUSH ECX
0040AF3E  52                        PUSH EDX
0040AF3F  50                        PUSH EAX
0040AF40  E8 8B FE 29 00            CALL 0x006aadd0
0040AF45  8B 8E B7 00 00 00         MOV ECX,dword ptr [ESI + 0xb7]
0040AF4B  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
0040AF4E  3B C1                     CMP EAX,ECX
0040AF50  0F 8E 09 0A 00 00         JLE 0x0040b95f
0040AF56  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
0040AF5C  8D 85 78 FF FF FF         LEA EAX,[EBP + 0xffffff78]
0040AF62  8D 95 74 FF FF FF         LEA EDX,[EBP + 0xffffff74]
0040AF68  6A 00                     PUSH 0x0
0040AF6A  50                        PUSH EAX
0040AF6B  C7 45 D8 00 00 00 00      MOV dword ptr [EBP + -0x28],0x0
0040AF72  89 8D 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],ECX
0040AF78  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0040AF7E  E8 6D 28 32 00            CALL 0x0072d7f0
0040AF83  8B F0                     MOV ESI,EAX
0040AF85  83 C4 08                  ADD ESP,0x8
0040AF88  85 F6                     TEST ESI,ESI
0040AF8A  0F 85 DA 09 00 00         JNZ 0x0040b96a
0040AF90  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
0040AF93  8B 5D BC                  MOV EBX,dword ptr [EBP + -0x44]
0040AF96  83 F8 01                  CMP EAX,0x1
0040AF99  C7 45 C4 03 00 00 00      MOV dword ptr [EBP + -0x3c],0x3
0040AFA0  0F 85 C4 05 00 00         JNZ 0x0040b56a
0040AFA6  0F BF 05 7E B2 7F 00      MOVSX EAX,word ptr [0x007fb27e]
0040AFAD  8B 93 C3 00 00 00         MOV EDX,dword ptr [EBX + 0xc3]
0040AFB3  8B 8B BF 00 00 00         MOV ECX,dword ptr [EBX + 0xbf]
0040AFB9  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0040AFBC  0F AF D0                  IMUL EDX,EAX
0040AFBF  0F BF 05 78 B2 7F 00      MOVSX EAX,word ptr [0x007fb278]
0040AFC6  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0040AFC9  0F AF C8                  IMUL ECX,EAX
0040AFCC  8B B3 BB 00 00 00         MOV ESI,dword ptr [EBX + 0xbb]
0040AFD2  8B 3D 80 B2 7F 00         MOV EDI,dword ptr [0x007fb280]
0040AFD8  8D 04 0E                  LEA EAX,[ESI + ECX*0x1]
0040AFDB  03 C2                     ADD EAX,EDX
0040AFDD  66 83 3C 47 00            CMP word ptr [EDI + EAX*0x2],0x0
0040AFE2  0F 8D 8A 00 00 00         JGE 0x0040b072
0040AFE8  68 90 00 00 00            PUSH 0x90
0040AFED  E8 7E FC 29 00            CALL 0x006aac70
0040AFF2  8B F8                     MOV EDI,EAX
0040AFF4  B9 24 00 00 00            MOV ECX,0x24
0040AFF9  83 C8 FF                  OR EAX,0xffffffff
0040AFFC  89 BB 9F 00 00 00         MOV dword ptr [EBX + 0x9f],EDI
0040B002  F3 AB                     STOSD.REP ES:EDI
0040B004  8B 8B 9F 00 00 00         MOV ECX,dword ptr [EBX + 0x9f]
0040B00A  66 8B 53 47               MOV DX,word ptr [EBX + 0x47]
0040B00E  66 89 11                  MOV word ptr [ECX],DX
0040B011  8B 83 9F 00 00 00         MOV EAX,dword ptr [EBX + 0x9f]
0040B017  66 8B 4B 49               MOV CX,word ptr [EBX + 0x49]
0040B01B  66 89 48 02               MOV word ptr [EAX + 0x2],CX
0040B01F  8B 93 9F 00 00 00         MOV EDX,dword ptr [EBX + 0x9f]
0040B025  66 8B 43 4B               MOV AX,word ptr [EBX + 0x4b]
0040B029  66 89 42 04               MOV word ptr [EDX + 0x4],AX
0040B02D  8B 8B 9F 00 00 00         MOV ECX,dword ptr [EBX + 0x9f]
0040B033  33 C0                     XOR EAX,EAX
0040B035  66 89 41 06               MOV word ptr [ECX + 0x6],AX
0040B039  8B 93 9F 00 00 00         MOV EDX,dword ptr [EBX + 0x9f]
0040B03F  66 8B 4B 47               MOV CX,word ptr [EBX + 0x47]
0040B043  66 89 4A 48               MOV word ptr [EDX + 0x48],CX
0040B047  8B 93 9F 00 00 00         MOV EDX,dword ptr [EBX + 0x9f]
0040B04D  66 8B 4B 49               MOV CX,word ptr [EBX + 0x49]
0040B051  66 89 4A 4A               MOV word ptr [EDX + 0x4a],CX
0040B055  8B 93 9F 00 00 00         MOV EDX,dword ptr [EBX + 0x9f]
0040B05B  66 8B 4B 4B               MOV CX,word ptr [EBX + 0x4b]
0040B05F  66 89 4A 4C               MOV word ptr [EDX + 0x4c],CX
0040B063  8B 93 9F 00 00 00         MOV EDX,dword ptr [EBX + 0x9f]
0040B069  66 89 42 4E               MOV word ptr [EDX + 0x4e],AX
0040B06D  E9 EE 04 00 00            JMP 0x0040b560
LAB_0040b072:
0040B072  0F BF 43 47               MOVSX EAX,word ptr [EBX + 0x47]
0040B076  33 FF                     XOR EDI,EDI
0040B078  3B C6                     CMP EAX,ESI
0040B07A  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0040B07D  0F 85 DB 00 00 00         JNZ 0x0040b15e
0040B083  0F BF 4B 49               MOVSX ECX,word ptr [EBX + 0x49]
0040B087  3B 4D F8                  CMP ECX,dword ptr [EBP + -0x8]
0040B08A  75 0A                     JNZ 0x0040b096
0040B08C  BF 01 00 00 00            MOV EDI,0x1
0040B091  E9 EB 03 00 00            JMP 0x0040b481
LAB_0040b096:
0040B096  0F BF 4B 4B               MOVSX ECX,word ptr [EBX + 0x4b]
0040B09A  3B 4D FC                  CMP ECX,dword ptr [EBP + -0x4]
0040B09D  75 0A                     JNZ 0x0040b0a9
0040B09F  BF 01 00 00 00            MOV EDI,0x1
0040B0A4  E9 D8 03 00 00            JMP 0x0040b481
LAB_0040b0a9:
0040B0A9  0F BF 4B 49               MOVSX ECX,word ptr [EBX + 0x49]
0040B0AD  8B F1                     MOV ESI,ECX
0040B0AF  0F BF 0D 78 B2 7F 00      MOVSX ECX,word ptr [0x007fb278]
0040B0B6  0F AF F1                  IMUL ESI,ECX
0040B0B9  03 F0                     ADD ESI,EAX
0040B0BB  03 F2                     ADD ESI,EDX
0040B0BD  8B 15 80 B2 7F 00         MOV EDX,dword ptr [0x007fb280]
0040B0C3  66 8B 0C 72               MOV CX,word ptr [EDX + ESI*0x2]
0040B0C7  81 E1 00 C0 00 00         AND ECX,0xc000
0040B0CD  81 F9 00 C0 00 00         CMP ECX,0xc000
0040B0D3  0F 84 A8 03 00 00         JZ 0x0040b481
0040B0D9  0F BF 4B 49               MOVSX ECX,word ptr [EBX + 0x49]
0040B0DD  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0040B0E0  52                        PUSH EDX
0040B0E1  51                        PUSH ECX
0040B0E2  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0040B0E5  50                        PUSH EAX
0040B0E6  53                        PUSH EBX
0040B0E7  E8 C1 93 FF FF            CALL 0x004044ad
0040B0EC  85 C0                     TEST EAX,EAX
0040B0EE  0F 84 8D 03 00 00         JZ 0x0040b481
0040B0F4  0F BF 43 4B               MOVSX EAX,word ptr [EBX + 0x4b]
0040B0F8  0F BF 15 7E B2 7F 00      MOVSX EDX,word ptr [0x007fb27e]
0040B0FF  0F BF 35 78 B2 7F 00      MOVSX ESI,word ptr [0x007fb278]
0040B106  0F AF D0                  IMUL EDX,EAX
0040B109  8B 8B BF 00 00 00         MOV ECX,dword ptr [EBX + 0xbf]
0040B10F  0F AF F1                  IMUL ESI,ECX
0040B112  0F BF 4B 47               MOVSX ECX,word ptr [EBX + 0x47]
0040B116  03 CA                     ADD ECX,EDX
0040B118  03 F1                     ADD ESI,ECX
0040B11A  8B 0D 80 B2 7F 00         MOV ECX,dword ptr [0x007fb280]
0040B120  66 8B 14 71               MOV DX,word ptr [ECX + ESI*0x2]
0040B124  81 E2 00 C0 00 00         AND EDX,0xc000
0040B12A  81 FA 00 C0 00 00         CMP EDX,0xc000
0040B130  0F 84 4B 03 00 00         JZ 0x0040b481
0040B136  50                        PUSH EAX
0040B137  8B 83 BF 00 00 00         MOV EAX,dword ptr [EBX + 0xbf]
0040B13D  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0040B140  50                        PUSH EAX
0040B141  0F BF 43 47               MOVSX EAX,word ptr [EBX + 0x47]
0040B145  50                        PUSH EAX
0040B146  53                        PUSH EBX
0040B147  E8 61 93 FF FF            CALL 0x004044ad
0040B14C  85 C0                     TEST EAX,EAX
0040B14E  0F 84 2D 03 00 00         JZ 0x0040b481
0040B154  BF 01 00 00 00            MOV EDI,0x1
0040B159  E9 23 03 00 00            JMP 0x0040b481
LAB_0040b15e:
0040B15E  0F BF 73 49               MOVSX ESI,word ptr [EBX + 0x49]
0040B162  3B 75 F8                  CMP ESI,dword ptr [EBP + -0x8]
0040B165  0F 85 BC 00 00 00         JNZ 0x0040b227
0040B16B  0F BF 4B 4B               MOVSX ECX,word ptr [EBX + 0x4b]
0040B16F  3B 4D FC                  CMP ECX,dword ptr [EBP + -0x4]
0040B172  75 0A                     JNZ 0x0040b17e
0040B174  BF 01 00 00 00            MOV EDI,0x1
0040B179  E9 03 03 00 00            JMP 0x0040b481
LAB_0040b17e:
0040B17E  0F BF 0D 78 B2 7F 00      MOVSX ECX,word ptr [0x007fb278]
0040B185  8B FE                     MOV EDI,ESI
0040B187  0F AF F9                  IMUL EDI,ECX
0040B18A  03 F8                     ADD EDI,EAX
0040B18C  03 FA                     ADD EDI,EDX
0040B18E  8B 15 80 B2 7F 00         MOV EDX,dword ptr [0x007fb280]
0040B194  66 8B 0C 7A               MOV CX,word ptr [EDX + EDI*0x2]
0040B198  81 E1 00 C0 00 00         AND ECX,0xc000
0040B19E  81 F9 00 C0 00 00         CMP ECX,0xc000
0040B1A4  0F 84 D4 02 00 00         JZ 0x0040b47e
0040B1AA  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0040B1AD  52                        PUSH EDX
0040B1AE  56                        PUSH ESI
LAB_0040b1af:
0040B1AF  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0040B1B2  50                        PUSH EAX
0040B1B3  53                        PUSH EBX
0040B1B4  E8 F4 92 FF FF            CALL 0x004044ad
0040B1B9  85 C0                     TEST EAX,EAX
0040B1BB  0F 84 BD 02 00 00         JZ 0x0040b47e
0040B1C1  0F BF 43 4B               MOVSX EAX,word ptr [EBX + 0x4b]
0040B1C5  0F BF 35 7E B2 7F 00      MOVSX ESI,word ptr [0x007fb27e]
0040B1CC  0F BF 4B 49               MOVSX ECX,word ptr [EBX + 0x49]
0040B1D0  0F AF F0                  IMUL ESI,EAX
0040B1D3  0F BF 3D 78 B2 7F 00      MOVSX EDI,word ptr [0x007fb278]
0040B1DA  8B 93 BB 00 00 00         MOV EDX,dword ptr [EBX + 0xbb]
0040B1E0  0F AF F9                  IMUL EDI,ECX
0040B1E3  03 D6                     ADD EDX,ESI
0040B1E5  03 FA                     ADD EDI,EDX
0040B1E7  8B 15 80 B2 7F 00         MOV EDX,dword ptr [0x007fb280]
0040B1ED  66 8B 14 7A               MOV DX,word ptr [EDX + EDI*0x2]
0040B1F1  81 E2 00 C0 00 00         AND EDX,0xc000
0040B1F7  81 FA 00 C0 00 00         CMP EDX,0xc000
0040B1FD  0F 84 7B 02 00 00         JZ 0x0040b47e
0040B203  50                        PUSH EAX
0040B204  8B 83 BB 00 00 00         MOV EAX,dword ptr [EBX + 0xbb]
0040B20A  51                        PUSH ECX
0040B20B  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0040B20E  50                        PUSH EAX
0040B20F  53                        PUSH EBX
0040B210  E8 98 92 FF FF            CALL 0x004044ad
0040B215  85 C0                     TEST EAX,EAX
0040B217  0F 84 61 02 00 00         JZ 0x0040b47e
0040B21D  BF 01 00 00 00            MOV EDI,0x1
0040B222  E9 5A 02 00 00            JMP 0x0040b481
LAB_0040b227:
0040B227  0F BF 53 4B               MOVSX EDX,word ptr [EBX + 0x4b]
0040B22B  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0040B22E  8B FA                     MOV EDI,EDX
0040B230  3B D6                     CMP EDX,ESI
0040B232  0F BF 35 7E B2 7F 00      MOVSX ESI,word ptr [0x007fb27e]
0040B239  75 2D                     JNZ 0x0040b268
0040B23B  0F AF FE                  IMUL EDI,ESI
0040B23E  03 F8                     ADD EDI,EAX
0040B240  03 F9                     ADD EDI,ECX
0040B242  8B 0D 80 B2 7F 00         MOV ECX,dword ptr [0x007fb280]
0040B248  66 8B 0C 79               MOV CX,word ptr [ECX + EDI*0x2]
0040B24C  81 E1 00 C0 00 00         AND ECX,0xc000
0040B252  81 F9 00 C0 00 00         CMP ECX,0xc000
0040B258  0F 84 20 02 00 00         JZ 0x0040b47e
0040B25E  52                        PUSH EDX
0040B25F  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0040B262  52                        PUSH EDX
0040B263  E9 47 FF FF FF            JMP 0x0040b1af
LAB_0040b268:
0040B268  0F AF FE                  IMUL EDI,ESI
0040B26B  03 F8                     ADD EDI,EAX
0040B26D  03 F9                     ADD EDI,ECX
0040B26F  8B 0D 80 B2 7F 00         MOV ECX,dword ptr [0x007fb280]
0040B275  66 8B 0C 79               MOV CX,word ptr [ECX + EDI*0x2]
0040B279  81 E1 00 C0 00 00         AND ECX,0xc000
0040B27F  81 F9 00 C0 00 00         CMP ECX,0xc000
0040B285  0F 84 F3 01 00 00         JZ 0x0040b47e
0040B28B  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
0040B28E  52                        PUSH EDX
0040B28F  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0040B292  8B CE                     MOV ECX,ESI
0040B294  52                        PUSH EDX
0040B295  50                        PUSH EAX
0040B296  53                        PUSH EBX
0040B297  E8 11 92 FF FF            CALL 0x004044ad
0040B29C  85 C0                     TEST EAX,EAX
0040B29E  0F 84 DA 01 00 00         JZ 0x0040b47e
0040B2A4  0F BF 43 4B               MOVSX EAX,word ptr [EBX + 0x4b]
0040B2A8  0F BF 15 7E B2 7F 00      MOVSX EDX,word ptr [0x007fb27e]
0040B2AF  0F BF 4B 49               MOVSX ECX,word ptr [EBX + 0x49]
0040B2B3  0F AF D0                  IMUL EDX,EAX
0040B2B6  0F BF 3D 78 B2 7F 00      MOVSX EDI,word ptr [0x007fb278]
0040B2BD  0F AF F9                  IMUL EDI,ECX
0040B2C0  8B 8B BB 00 00 00         MOV ECX,dword ptr [EBX + 0xbb]
0040B2C6  03 CA                     ADD ECX,EDX
0040B2C8  8B 15 80 B2 7F 00         MOV EDX,dword ptr [0x007fb280]
0040B2CE  03 F9                     ADD EDI,ECX
0040B2D0  66 8B 0C 7A               MOV CX,word ptr [EDX + EDI*0x2]
0040B2D4  81 E1 00 C0 00 00         AND ECX,0xc000
0040B2DA  81 F9 00 C0 00 00         CMP ECX,0xc000
0040B2E0  0F 84 98 01 00 00         JZ 0x0040b47e
0040B2E6  50                        PUSH EAX
0040B2E7  8B CE                     MOV ECX,ESI
0040B2E9  0F BF 43 49               MOVSX EAX,word ptr [EBX + 0x49]
0040B2ED  50                        PUSH EAX
0040B2EE  8B 83 BB 00 00 00         MOV EAX,dword ptr [EBX + 0xbb]
0040B2F4  50                        PUSH EAX
0040B2F5  53                        PUSH EBX
0040B2F6  E8 B2 91 FF FF            CALL 0x004044ad
0040B2FB  85 C0                     TEST EAX,EAX
0040B2FD  0F 84 7B 01 00 00         JZ 0x0040b47e
0040B303  0F BF 43 4B               MOVSX EAX,word ptr [EBX + 0x4b]
0040B307  0F BF 15 7E B2 7F 00      MOVSX EDX,word ptr [0x007fb27e]
0040B30E  0F BF 3D 78 B2 7F 00      MOVSX EDI,word ptr [0x007fb278]
0040B315  0F AF D0                  IMUL EDX,EAX
0040B318  8B 8B BF 00 00 00         MOV ECX,dword ptr [EBX + 0xbf]
0040B31E  0F AF F9                  IMUL EDI,ECX
0040B321  8B 8B BB 00 00 00         MOV ECX,dword ptr [EBX + 0xbb]
0040B327  03 CA                     ADD ECX,EDX
0040B329  8B 15 80 B2 7F 00         MOV EDX,dword ptr [0x007fb280]
0040B32F  03 F9                     ADD EDI,ECX
0040B331  66 8B 0C 7A               MOV CX,word ptr [EDX + EDI*0x2]
0040B335  81 E1 00 C0 00 00         AND ECX,0xc000
0040B33B  81 F9 00 C0 00 00         CMP ECX,0xc000
0040B341  0F 84 37 01 00 00         JZ 0x0040b47e
0040B347  50                        PUSH EAX
0040B348  8B 83 BF 00 00 00         MOV EAX,dword ptr [EBX + 0xbf]
0040B34E  50                        PUSH EAX
0040B34F  8B 83 BB 00 00 00         MOV EAX,dword ptr [EBX + 0xbb]
0040B355  50                        PUSH EAX
0040B356  53                        PUSH EBX
0040B357  8B CE                     MOV ECX,ESI
0040B359  E8 4F 91 FF FF            CALL 0x004044ad
0040B35E  85 C0                     TEST EAX,EAX
0040B360  0F 84 18 01 00 00         JZ 0x0040b47e
0040B366  0F BF 3D 78 B2 7F 00      MOVSX EDI,word ptr [0x007fb278]
0040B36D  8B 8B BF 00 00 00         MOV ECX,dword ptr [EBX + 0xbf]
0040B373  8B 83 C3 00 00 00         MOV EAX,dword ptr [EBX + 0xc3]
0040B379  0F AF F9                  IMUL EDI,ECX
0040B37C  0F BF 0D 7E B2 7F 00      MOVSX ECX,word ptr [0x007fb27e]
0040B383  0F BF 53 47               MOVSX EDX,word ptr [EBX + 0x47]
0040B387  0F AF C8                  IMUL ECX,EAX
0040B38A  03 D7                     ADD EDX,EDI
0040B38C  03 CA                     ADD ECX,EDX
0040B38E  8B 15 80 B2 7F 00         MOV EDX,dword ptr [0x007fb280]
0040B394  66 8B 0C 4A               MOV CX,word ptr [EDX + ECX*0x2]
0040B398  81 E1 00 C0 00 00         AND ECX,0xc000
0040B39E  81 F9 00 C0 00 00         CMP ECX,0xc000
0040B3A4  0F 84 D4 00 00 00         JZ 0x0040b47e
0040B3AA  50                        PUSH EAX
0040B3AB  8B 83 BF 00 00 00         MOV EAX,dword ptr [EBX + 0xbf]
0040B3B1  50                        PUSH EAX
0040B3B2  8B CE                     MOV ECX,ESI
0040B3B4  0F BF 43 47               MOVSX EAX,word ptr [EBX + 0x47]
0040B3B8  50                        PUSH EAX
0040B3B9  53                        PUSH EBX
0040B3BA  E8 EE 90 FF FF            CALL 0x004044ad
0040B3BF  85 C0                     TEST EAX,EAX
0040B3C1  0F 84 B7 00 00 00         JZ 0x0040b47e
0040B3C7  0F BF 43 49               MOVSX EAX,word ptr [EBX + 0x49]
0040B3CB  0F BF 15 78 B2 7F 00      MOVSX EDX,word ptr [0x007fb278]
0040B3D2  0F BF 3D 7E B2 7F 00      MOVSX EDI,word ptr [0x007fb27e]
0040B3D9  0F AF D0                  IMUL EDX,EAX
0040B3DC  8B 8B C3 00 00 00         MOV ECX,dword ptr [EBX + 0xc3]
0040B3E2  0F AF F9                  IMUL EDI,ECX
0040B3E5  8B 8B BB 00 00 00         MOV ECX,dword ptr [EBX + 0xbb]
0040B3EB  03 CA                     ADD ECX,EDX
0040B3ED  8B 15 80 B2 7F 00         MOV EDX,dword ptr [0x007fb280]
0040B3F3  03 F9                     ADD EDI,ECX
0040B3F5  66 8B 0C 7A               MOV CX,word ptr [EDX + EDI*0x2]
0040B3F9  81 E1 00 C0 00 00         AND ECX,0xc000
0040B3FF  81 F9 00 C0 00 00         CMP ECX,0xc000
0040B405  74 77                     JZ 0x0040b47e
0040B407  8B 8B C3 00 00 00         MOV ECX,dword ptr [EBX + 0xc3]
0040B40D  51                        PUSH ECX
0040B40E  50                        PUSH EAX
0040B40F  8B 83 BB 00 00 00         MOV EAX,dword ptr [EBX + 0xbb]
0040B415  8B CE                     MOV ECX,ESI
0040B417  50                        PUSH EAX
0040B418  53                        PUSH EBX
0040B419  E8 8F 90 FF FF            CALL 0x004044ad
0040B41E  85 C0                     TEST EAX,EAX
0040B420  74 5C                     JZ 0x0040b47e
0040B422  0F BF 43 49               MOVSX EAX,word ptr [EBX + 0x49]
0040B426  0F BF 15 78 B2 7F 00      MOVSX EDX,word ptr [0x007fb278]
0040B42D  0F BF 3D 7E B2 7F 00      MOVSX EDI,word ptr [0x007fb27e]
0040B434  0F AF D0                  IMUL EDX,EAX
0040B437  8B 8B C3 00 00 00         MOV ECX,dword ptr [EBX + 0xc3]
0040B43D  0F AF F9                  IMUL EDI,ECX
0040B440  0F BF 4B 47               MOVSX ECX,word ptr [EBX + 0x47]
0040B444  03 CA                     ADD ECX,EDX
0040B446  03 F9                     ADD EDI,ECX
0040B448  8B 0D 80 B2 7F 00         MOV ECX,dword ptr [0x007fb280]
0040B44E  66 8B 14 79               MOV DX,word ptr [ECX + EDI*0x2]
0040B452  81 E2 00 C0 00 00         AND EDX,0xc000
0040B458  81 FA 00 C0 00 00         CMP EDX,0xc000
0040B45E  74 1E                     JZ 0x0040b47e
0040B460  8B 8B C3 00 00 00         MOV ECX,dword ptr [EBX + 0xc3]
0040B466  51                        PUSH ECX
0040B467  50                        PUSH EAX
0040B468  0F BF 43 47               MOVSX EAX,word ptr [EBX + 0x47]
0040B46C  50                        PUSH EAX
0040B46D  53                        PUSH EBX
0040B46E  8B CE                     MOV ECX,ESI
0040B470  E8 38 90 FF FF            CALL 0x004044ad
0040B475  85 C0                     TEST EAX,EAX
0040B477  BF 01 00 00 00            MOV EDI,0x1
0040B47C  75 03                     JNZ 0x0040b481
LAB_0040b47e:
0040B47E  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
LAB_0040b481:
0040B481  85 FF                     TEST EDI,EDI
0040B483  0F 84 E1 00 00 00         JZ 0x0040b56a
0040B489  68 90 00 00 00            PUSH 0x90
0040B48E  E8 DD F7 29 00            CALL 0x006aac70
0040B493  8B F8                     MOV EDI,EAX
0040B495  B9 24 00 00 00            MOV ECX,0x24
0040B49A  83 C8 FF                  OR EAX,0xffffffff
0040B49D  89 BB 9F 00 00 00         MOV dword ptr [EBX + 0x9f],EDI
0040B4A3  F3 AB                     STOSD.REP ES:EDI
0040B4A5  0F BF 53 4B               MOVSX EDX,word ptr [EBX + 0x4b]
0040B4A9  8B 83 C3 00 00 00         MOV EAX,dword ptr [EBX + 0xc3]
0040B4AF  66 8B 4B 47               MOV CX,word ptr [EBX + 0x47]
0040B4B3  2B C2                     SUB EAX,EDX
0040B4B5  8B B3 BB 00 00 00         MOV ESI,dword ptr [EBX + 0xbb]
0040B4BB  0F BF 53 49               MOVSX EDX,word ptr [EBX + 0x49]
0040B4BF  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0040B4C2  2B C2                     SUB EAX,EDX
0040B4C4  8B 93 BF 00 00 00         MOV EDX,dword ptr [EBX + 0xbf]
0040B4CA  03 C2                     ADD EAX,EDX
0040B4CC  0F BF D1                  MOVSX EDX,CX
0040B4CF  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0040B4D2  2B C2                     SUB EAX,EDX
0040B4D4  8B 15 6C D5 7E 00         MOV EDX,dword ptr [0x007ed56c]
0040B4DA  03 C6                     ADD EAX,ESI
0040B4DC  8B 04 82                  MOV EAX,dword ptr [EDX + EAX*0x4]
0040B4DF  83 F8 1A                  CMP EAX,0x1a
0040B4E2  7D 0A                     JGE 0x0040b4ee
0040B4E4  8B 04 85 40 D6 7E 00      MOV EAX,dword ptr [EAX*0x4 + 0x7ed640]
0040B4EB  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
LAB_0040b4ee:
0040B4EE  8B 93 9F 00 00 00         MOV EDX,dword ptr [EBX + 0x9f]
0040B4F4  66 89 0A                  MOV word ptr [EDX],CX
0040B4F7  8B 83 9F 00 00 00         MOV EAX,dword ptr [EBX + 0x9f]
0040B4FD  66 8B 4B 49               MOV CX,word ptr [EBX + 0x49]
0040B501  66 89 48 02               MOV word ptr [EAX + 0x2],CX
0040B505  8B 93 9F 00 00 00         MOV EDX,dword ptr [EBX + 0x9f]
0040B50B  66 8B 43 4B               MOV AX,word ptr [EBX + 0x4b]
0040B50F  66 89 42 04               MOV word ptr [EDX + 0x4],AX
0040B513  8B 8B 9F 00 00 00         MOV ECX,dword ptr [EBX + 0x9f]
0040B519  66 8B 55 C8               MOV DX,word ptr [EBP + -0x38]
0040B51D  66 89 51 06               MOV word ptr [ECX + 0x6],DX
0040B521  8B 83 9F 00 00 00         MOV EAX,dword ptr [EBX + 0x9f]
0040B527  66 8B 8B BB 00 00 00      MOV CX,word ptr [EBX + 0xbb]
0040B52E  66 89 48 48               MOV word ptr [EAX + 0x48],CX
0040B532  8B 93 9F 00 00 00         MOV EDX,dword ptr [EBX + 0x9f]
0040B538  66 8B 83 BF 00 00 00      MOV AX,word ptr [EBX + 0xbf]
0040B53F  66 89 42 4A               MOV word ptr [EDX + 0x4a],AX
0040B543  8B 8B 9F 00 00 00         MOV ECX,dword ptr [EBX + 0x9f]
0040B549  66 8B 93 C3 00 00 00      MOV DX,word ptr [EBX + 0xc3]
0040B550  66 89 51 4C               MOV word ptr [ECX + 0x4c],DX
0040B554  8B 83 9F 00 00 00         MOV EAX,dword ptr [EBX + 0x9f]
0040B55A  66 C7 40 4E 00 00         MOV word ptr [EAX + 0x4e],0x0
LAB_0040b560:
0040B560  C7 83 A3 00 00 00 02 00 00 00  MOV dword ptr [EBX + 0xa3],0x2
LAB_0040b56a:
0040B56A  8B 83 9F 00 00 00         MOV EAX,dword ptr [EBX + 0x9f]
0040B570  85 C0                     TEST EAX,EAX
0040B572  0F 85 C9 03 00 00         JNZ 0x0040b941
0040B578  8B 8B C3 00 00 00         MOV ECX,dword ptr [EBX + 0xc3]
0040B57E  8B 93 BF 00 00 00         MOV EDX,dword ptr [EBX + 0xbf]
0040B584  8B 83 BB 00 00 00         MOV EAX,dword ptr [EBX + 0xbb]
0040B58A  51                        PUSH ECX
0040B58B  0F BF 4B 4B               MOVSX ECX,word ptr [EBX + 0x4b]
0040B58F  52                        PUSH EDX
0040B590  50                        PUSH EAX
0040B591  0F BF 53 49               MOVSX EDX,word ptr [EBX + 0x49]
0040B595  0F BF 43 47               MOVSX EAX,word ptr [EBX + 0x47]
0040B599  51                        PUSH ECX
0040B59A  52                        PUSH EDX
0040B59B  50                        PUSH EAX
0040B59C  E8 3F AD 29 00            CALL 0x006a62e0
0040B5A1  68 AE 02 00 00            PUSH 0x2ae
0040B5A6  89 83 AF 00 00 00         MOV dword ptr [EBX + 0xaf],EAX
0040B5AC  E8 5F F6 29 00            CALL 0x006aac10
0040B5B1  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0040B5B4  66 8B 4B 47               MOV CX,word ptr [EBX + 0x47]
0040B5B8  05 56 01 00 00            ADD EAX,0x156
0040B5BD  BA 02 00 00 00            MOV EDX,0x2
0040B5C2  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0040B5C5  66 3B CA                  CMP CX,DX
0040B5C8  8B C2                     MOV EAX,EDX
0040B5CA  7D 03                     JGE 0x0040b5cf
0040B5CC  0F BF C1                  MOVSX EAX,CX
LAB_0040b5cf:
0040B5CF  F7 D8                     NEG EAX
0040B5D1  0F BF C9                  MOVSX ECX,CX
0040B5D4  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0040B5D7  0F BF 05 78 B2 7F 00      MOVSX EAX,word ptr [0x007fb278]
0040B5DE  8D 71 02                  LEA ESI,[ECX + 0x2]
0040B5E1  3B F0                     CMP ESI,EAX
0040B5E3  7D 05                     JGE 0x0040b5ea
0040B5E5  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
0040B5E8  EB 06                     JMP 0x0040b5f0
LAB_0040b5ea:
0040B5EA  2B C1                     SUB EAX,ECX
0040B5EC  48                        DEC EAX
0040B5ED  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
LAB_0040b5f0:
0040B5F0  66 8B 4B 49               MOV CX,word ptr [EBX + 0x49]
0040B5F4  8B C2                     MOV EAX,EDX
0040B5F6  66 3B CA                  CMP CX,DX
0040B5F9  7D 03                     JGE 0x0040b5fe
0040B5FB  0F BF C1                  MOVSX EAX,CX
LAB_0040b5fe:
0040B5FE  F7 D8                     NEG EAX
0040B600  0F BF C9                  MOVSX ECX,CX
0040B603  8B F0                     MOV ESI,EAX
0040B605  0F BF 05 7A B2 7F 00      MOVSX EAX,word ptr [0x007fb27a]
0040B60C  8D 79 02                  LEA EDI,[ECX + 0x2]
0040B60F  89 75 C0                  MOV dword ptr [EBP + -0x40],ESI
0040B612  3B F8                     CMP EDI,EAX
0040B614  7D 05                     JGE 0x0040b61b
0040B616  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0040B619  EB 06                     JMP 0x0040b621
LAB_0040b61b:
0040B61B  2B C1                     SUB EAX,ECX
0040B61D  48                        DEC EAX
0040B61E  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_0040b621:
0040B621  66 8B 43 4B               MOV AX,word ptr [EBX + 0x4b]
0040B625  8B CA                     MOV ECX,EDX
0040B627  66 3B C2                  CMP AX,DX
0040B62A  7D 03                     JGE 0x0040b62f
0040B62C  0F BF C8                  MOVSX ECX,AX
LAB_0040b62f:
0040B62F  0F BF D0                  MOVSX EDX,AX
0040B632  0F BF 05 7C B2 7F 00      MOVSX EAX,word ptr [0x007fb27c]
0040B639  8D 7A 02                  LEA EDI,[EDX + 0x2]
0040B63C  F7 D9                     NEG ECX
0040B63E  3B F8                     CMP EDI,EAX
0040B640  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
0040B643  7D 07                     JGE 0x0040b64c
0040B645  BA 02 00 00 00            MOV EDX,0x2
0040B64A  EB 05                     JMP 0x0040b651
LAB_0040b64c:
0040B64C  2B C2                     SUB EAX,EDX
0040B64E  48                        DEC EAX
0040B64F  8B D0                     MOV EDX,EAX
LAB_0040b651:
0040B651  3B CA                     CMP ECX,EDX
0040B653  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
0040B656  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
0040B65D  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0040B660  0F 8F BA 00 00 00         JG 0x0040b720
0040B666  8D 04 CD 00 00 00 00      LEA EAX,[ECX*0x8 + 0x0]
0040B66D  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0040B670  2B C1                     SUB EAX,ECX
0040B672  03 C6                     ADD EAX,ESI
0040B674  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
0040B67B  2B C8                     SUB ECX,EAX
0040B67D  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0040B680  8D 0C 48                  LEA ECX,[EAX + ECX*0x2]
0040B683  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
LAB_0040b686:
0040B686  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0040B689  89 75 E0                  MOV dword ptr [EBP + -0x20],ESI
0040B68C  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
0040B68F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0040B692  3B F0                     CMP ESI,EAX
0040B694  7F 72                     JG 0x0040b708
0040B696  EB 03                     JMP 0x0040b69b
LAB_0040b698:
0040B698  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_0040b69b:
0040B69B  3B 7D D4                  CMP EDI,dword ptr [EBP + -0x2c]
0040B69E  7F 48                     JG 0x0040b6e8
0040B6A0  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
0040B6A3  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0040B6A6  8D 34 51                  LEA ESI,[ECX + EDX*0x2]
LAB_0040b6a9:
0040B6A9  0F BF 43 4B               MOVSX EAX,word ptr [EBX + 0x4b]
0040B6AD  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0040B6B0  0F BF 4B 49               MOVSX ECX,word ptr [EBX + 0x49]
0040B6B4  03 C2                     ADD EAX,EDX
0040B6B6  0F BF 53 47               MOVSX EDX,word ptr [EBX + 0x47]
0040B6BA  50                        PUSH EAX
0040B6BB  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0040B6BE  03 C8                     ADD ECX,EAX
0040B6C0  03 D7                     ADD EDX,EDI
0040B6C2  51                        PUSH ECX
0040B6C3  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0040B6C6  52                        PUSH EDX
0040B6C7  53                        PUSH EBX
0040B6C8  E8 E0 8D FF FF            CALL 0x004044ad
0040B6CD  85 C0                     TEST EAX,EAX
0040B6CF  75 0C                     JNZ 0x0040b6dd
0040B6D1  66 C7 06 FD FF            MOV word ptr [ESI],0xfffd
0040B6D6  C7 45 EC 01 00 00 00      MOV dword ptr [EBP + -0x14],0x1
LAB_0040b6dd:
0040B6DD  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
0040B6E0  47                        INC EDI
0040B6E1  83 C6 02                  ADD ESI,0x2
0040B6E4  3B F8                     CMP EDI,EAX
0040B6E6  7E C1                     JLE 0x0040b6a9
LAB_0040b6e8:
0040B6E8  8B 75 CC                  MOV ESI,dword ptr [EBP + -0x34]
0040B6EB  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0040B6EE  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0040B6F1  83 C6 0E                  ADD ESI,0xe
0040B6F4  40                        INC EAX
0040B6F5  89 75 CC                  MOV dword ptr [EBP + -0x34],ESI
0040B6F8  3B C1                     CMP EAX,ECX
0040B6FA  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0040B6FD  7E 99                     JLE 0x0040b698
0040B6FF  8B 75 C0                  MOV ESI,dword ptr [EBP + -0x40]
0040B702  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
0040B705  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_0040b708:
0040B708  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0040B70B  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0040B70E  40                        INC EAX
0040B70F  83 C1 62                  ADD ECX,0x62
0040B712  3B C2                     CMP EAX,EDX
0040B714  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0040B717  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
0040B71A  0F 8E 66 FF FF FF         JLE 0x0040b686
LAB_0040b720:
0040B720  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0040B723  85 C0                     TEST EAX,EAX
0040B725  75 0D                     JNZ 0x0040b734
0040B727  8D 45 DC                  LEA EAX,[EBP + -0x24]
0040B72A  50                        PUSH EAX
0040B72B  E8 30 F9 29 00            CALL 0x006ab060
0040B730  33 D2                     XOR EDX,EDX
0040B732  EB 03                     JMP 0x0040b737
LAB_0040b734:
0040B734  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
LAB_0040b737:
0040B737  8A 4D 0C                  MOV CL,byte ptr [EBP + 0xc]
0040B73A  33 C0                     XOR EAX,EAX
0040B73C  84 C9                     TEST CL,CL
0040B73E  74 05                     JZ 0x0040b745
0040B740  B8 04 00 00 00            MOV EAX,0x4
LAB_0040b745:
0040B745  0C 01                     OR AL,0x1
0040B747  8D 8B A3 00 00 00         LEA ECX,[EBX + 0xa3]
0040B74D  50                        PUSH EAX
0040B74E  52                        PUSH EDX
0040B74F  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
0040B752  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0040B755  8B 83 B7 00 00 00         MOV EAX,dword ptr [EBX + 0xb7]
0040B75B  52                        PUSH EDX
0040B75C  8B 93 BF 00 00 00         MOV EDX,dword ptr [EBX + 0xbf]
0040B762  51                        PUSH ECX
0040B763  8B 8B C3 00 00 00         MOV ECX,dword ptr [EBX + 0xc3]
0040B769  50                        PUSH EAX
0040B76A  8B 83 BB 00 00 00         MOV EAX,dword ptr [EBX + 0xbb]
0040B770  51                        PUSH ECX
0040B771  0F BF 4B 4B               MOVSX ECX,word ptr [EBX + 0x4b]
0040B775  52                        PUSH EDX
0040B776  50                        PUSH EAX
0040B777  0F BF 53 49               MOVSX EDX,word ptr [EBX + 0x49]
0040B77B  0F BF 43 47               MOVSX EAX,word ptr [EBX + 0x47]
0040B77F  51                        PUSH ECX
0040B780  52                        PUSH EDX
0040B781  0F BF 0D 7C B2 7F 00      MOVSX ECX,word ptr [0x007fb27c]
0040B788  0F BF 15 7A B2 7F 00      MOVSX EDX,word ptr [0x007fb27a]
0040B78F  50                        PUSH EAX
0040B790  51                        PUSH ECX
0040B791  0F BF 05 78 B2 7F 00      MOVSX EAX,word ptr [0x007fb278]
0040B798  8B 0D 80 B2 7F 00         MOV ECX,dword ptr [0x007fb280]
0040B79E  52                        PUSH EDX
0040B79F  50                        PUSH EAX
0040B7A0  51                        PUSH ECX
0040B7A1  E8 EA D9 29 00            CALL 0x006a9190
0040B7A6  85 C0                     TEST EAX,EAX
0040B7A8  89 83 9F 00 00 00         MOV dword ptr [EBX + 0x9f],EAX
0040B7AE  0F 85 84 01 00 00         JNZ 0x0040b938
0040B7B4  0F BF 35 7A B2 7F 00      MOVSX ESI,word ptr [0x007fb27a]
0040B7BB  0F BF 15 78 B2 7F 00      MOVSX EDX,word ptr [0x007fb278]
0040B7C2  0F BF 05 7C B2 7F 00      MOVSX EAX,word ptr [0x007fb27c]
0040B7C9  0F AF F2                  IMUL ESI,EDX
0040B7CC  0F AF C6                  IMUL EAX,ESI
0040B7CF  D1 E0                     SHL EAX,0x1
0040B7D1  50                        PUSH EAX
0040B7D2  89 75 C4                  MOV dword ptr [EBP + -0x3c],ESI
0040B7D5  E8 96 F4 29 00            CALL 0x006aac70
0040B7DA  0F BF 0D 7C B2 7F 00      MOVSX ECX,word ptr [0x007fb27c]
0040B7E1  0F AF CE                  IMUL ECX,ESI
0040B7E4  8B 35 80 B2 7F 00         MOV ESI,dword ptr [0x007fb280]
0040B7EA  8B F8                     MOV EDI,EAX
0040B7EC  D1 E1                     SHL ECX,0x1
0040B7EE  8B D1                     MOV EDX,ECX
0040B7F0  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0040B7F3  C1 E9 02                  SHR ECX,0x2
0040B7F6  F3 A5                     MOVSD.REP ES:EDI,ESI
0040B7F8  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0040B7FB  8B CA                     MOV ECX,EDX
0040B7FD  83 E1 03                  AND ECX,0x3
0040B800  85 C0                     TEST EAX,EAX
0040B802  F3 A4                     MOVSB.REP ES:EDI,ESI
0040B804  0F 84 D1 00 00 00         JZ 0x0040b8db
0040B80A  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0040B80D  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
0040B810  3B C8                     CMP ECX,EAX
0040B812  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0040B815  0F 8F C0 00 00 00         JG 0x0040b8db
0040B81B  8D 04 CD 00 00 00 00      LEA EAX,[ECX*0x8 + 0x0]
0040B822  2B C1                     SUB EAX,ECX
0040B824  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
0040B827  03 C1                     ADD EAX,ECX
0040B829  8D 14 C5 00 00 00 00      LEA EDX,[EAX*0x8 + 0x0]
0040B830  2B D0                     SUB EDX,EAX
0040B832  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0040B835  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
0040B838  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0040B83B  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0040B83E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
LAB_0040b841:
0040B841  0F BF 73 49               MOVSX ESI,word ptr [EBX + 0x49]
0040B845  0F BF 3D 78 B2 7F 00      MOVSX EDI,word ptr [0x007fb278]
0040B84C  03 F1                     ADD ESI,ECX
0040B84E  0F AF F7                  IMUL ESI,EDI
0040B851  0F BF 7B 4B               MOVSX EDI,word ptr [EBX + 0x4b]
0040B855  03 7D E8                  ADD EDI,dword ptr [EBP + -0x18]
0040B858  0F AF 7D C4               IMUL EDI,dword ptr [EBP + -0x3c]
0040B85C  03 F7                     ADD ESI,EDI
0040B85E  0F BF 7B 47               MOVSX EDI,word ptr [EBX + 0x47]
0040B862  03 F7                     ADD ESI,EDI
0040B864  8B 7D D8                  MOV EDI,dword ptr [EBP + -0x28]
0040B867  3B C8                     CMP ECX,EAX
0040B869  8D 34 77                  LEA ESI,[EDI + ESI*0x2]
0040B86C  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
0040B86F  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
0040B872  7F 4C                     JG 0x0040b8c0
0040B874  2B C1                     SUB EAX,ECX
0040B876  40                        INC EAX
0040B877  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
LAB_0040b87a:
0040B87A  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
0040B87D  3B D1                     CMP EDX,ECX
0040B87F  7F 23                     JG 0x0040b8a4
0040B881  2B CA                     SUB ECX,EDX
0040B883  2B F7                     SUB ESI,EDI
0040B885  8D 04 57                  LEA EAX,[EDI + EDX*0x2]
0040B888  41                        INC ECX
LAB_0040b889:
0040B889  66 8B 10                  MOV DX,word ptr [EAX]
0040B88C  66 85 D2                  TEST DX,DX
0040B88F  7D 04                     JGE 0x0040b895
0040B891  66 89 14 06               MOV word ptr [ESI + EAX*0x1],DX
LAB_0040b895:
0040B895  83 C0 02                  ADD EAX,0x2
0040B898  49                        DEC ECX
0040B899  75 EE                     JNZ 0x0040b889
0040B89B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0040B89E  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0040B8A1  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
LAB_0040b8a4:
0040B8A4  0F BF 0D 78 B2 7F 00      MOVSX ECX,word ptr [0x007fb278]
0040B8AB  83 C7 0E                  ADD EDI,0xe
0040B8AE  48                        DEC EAX
0040B8AF  8D 34 4E                  LEA ESI,[ESI + ECX*0x2]
0040B8B2  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0040B8B5  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
0040B8B8  75 C0                     JNZ 0x0040b87a
0040B8BA  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0040B8BD  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
LAB_0040b8c0:
0040B8C0  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
0040B8C3  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
0040B8C6  83 C7 62                  ADD EDI,0x62
0040B8C9  46                        INC ESI
0040B8CA  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
0040B8CD  8B 7D D0                  MOV EDI,dword ptr [EBP + -0x30]
0040B8D0  3B F7                     CMP ESI,EDI
0040B8D2  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
0040B8D5  0F 8E 66 FF FF FF         JLE 0x0040b841
LAB_0040b8db:
0040B8DB  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
0040B8DE  8B 8B C3 00 00 00         MOV ECX,dword ptr [EBX + 0xc3]
0040B8E4  8D 83 A3 00 00 00         LEA EAX,[EBX + 0xa3]
0040B8EA  52                        PUSH EDX
0040B8EB  8B 93 BF 00 00 00         MOV EDX,dword ptr [EBX + 0xbf]
0040B8F1  50                        PUSH EAX
0040B8F2  8B 83 B7 00 00 00         MOV EAX,dword ptr [EBX + 0xb7]
0040B8F8  50                        PUSH EAX
0040B8F9  8B 83 BB 00 00 00         MOV EAX,dword ptr [EBX + 0xbb]
0040B8FF  51                        PUSH ECX
0040B900  52                        PUSH EDX
0040B901  0F BF 4B 4B               MOVSX ECX,word ptr [EBX + 0x4b]
0040B905  0F BF 53 49               MOVSX EDX,word ptr [EBX + 0x49]
0040B909  50                        PUSH EAX
0040B90A  51                        PUSH ECX
0040B90B  0F BF 43 47               MOVSX EAX,word ptr [EBX + 0x47]
0040B90F  0F BF 0D 7C B2 7F 00      MOVSX ECX,word ptr [0x007fb27c]
0040B916  52                        PUSH EDX
0040B917  50                        PUSH EAX
0040B918  0F BF 15 7A B2 7F 00      MOVSX EDX,word ptr [0x007fb27a]
0040B91F  0F BF 05 78 B2 7F 00      MOVSX EAX,word ptr [0x007fb278]
0040B926  51                        PUSH ECX
0040B927  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
0040B92A  52                        PUSH EDX
0040B92B  50                        PUSH EAX
0040B92C  51                        PUSH ECX
0040B92D  E8 3E C9 29 00            CALL 0x006a8270
0040B932  89 83 9F 00 00 00         MOV dword ptr [EBX + 0x9f],EAX
LAB_0040b938:
0040B938  8D 55 DC                  LEA EDX,[EBP + -0x24]
0040B93B  52                        PUSH EDX
0040B93C  E8 1F F7 29 00            CALL 0x006ab060
LAB_0040b941:
0040B941  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
0040B944  8B 85 74 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff74]
0040B94A  51                        PUSH ECX
0040B94B  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0040B950  E8 3B A5 29 00            CALL 0x006a5e90
0040B955  8B 83 9F 00 00 00         MOV EAX,dword ptr [EBX + 0x9f]
0040B95B  85 C0                     TEST EAX,EAX
0040B95D  74 3D                     JZ 0x0040b99c
LAB_0040b95f:
0040B95F  33 C0                     XOR EAX,EAX
0040B961  5F                        POP EDI
0040B962  5E                        POP ESI
0040B963  5B                        POP EBX
0040B964  8B E5                     MOV ESP,EBP
0040B966  5D                        POP EBP
0040B967  C2 08 00                  RET 0x8
LAB_0040b96a:
0040B96A  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0040B96D  8B 95 74 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff74]
0040B973  50                        PUSH EAX
0040B974  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0040B97A  E8 11 A5 29 00            CALL 0x006a5e90
0040B97F  68 13 01 00 00            PUSH 0x113
0040B984  68 A8 4C 7A 00            PUSH 0x7a4ca8
0040B989  6A 00                     PUSH 0x0
0040B98B  56                        PUSH ESI
0040B98C  E8 AF A4 29 00            CALL 0x006a5e40
0040B991  8B C6                     MOV EAX,ESI
0040B993  5F                        POP EDI
0040B994  5E                        POP ESI
0040B995  5B                        POP EBX
0040B996  8B E5                     MOV ESP,EBP
0040B998  5D                        POP EBP
0040B999  C2 08 00                  RET 0x8
LAB_0040b99c:
0040B99C  5F                        POP EDI
0040B99D  5E                        POP ESI
0040B99E  B8 FC FF FF FF            MOV EAX,0xfffffffc
0040B9A3  5B                        POP EBX
0040B9A4  8B E5                     MOV ESP,EBP
0040B9A6  5D                        POP EBP
0040B9A7  C2 08 00                  RET 0x8
