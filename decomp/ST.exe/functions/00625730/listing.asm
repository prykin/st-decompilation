FUN_00625730:
00625730  55                        PUSH EBP
00625731  8B EC                     MOV EBP,ESP
00625733  83 EC 30                  SUB ESP,0x30
00625736  53                        PUSH EBX
00625737  56                        PUSH ESI
00625738  57                        PUSH EDI
00625739  8B F9                     MOV EDI,ECX
0062573B  33 C0                     XOR EAX,EAX
0062573D  89 7D D4                  MOV dword ptr [EBP + -0x2c],EDI
00625740  8A 87 AD 02 00 00         MOV AL,byte ptr [EDI + 0x2ad]
00625746  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
0062574D  83 F8 03                  CMP EAX,0x3
00625750  0F 87 70 09 00 00         JA 0x006260c6
switchD_00625756::switchD:
00625756  FF 24 85 D4 60 62 00      JMP dword ptr [EAX*0x4 + 0x6260d4]
switchD_00625756::caseD_0:
0062575D  0F BF 57 47               MOVSX EDX,word ptr [EDI + 0x47]
00625761  0F BF 4F 49               MOVSX ECX,word ptr [EDI + 0x49]
00625765  0F BF 7F 4B               MOVSX EDI,word ptr [EDI + 0x4b]
00625769  85 D2                     TEST EDX,EDX
0062576B  0F 8C 55 09 00 00         JL 0x006260c6
00625771  85 C9                     TEST ECX,ECX
00625773  0F 8C 4D 09 00 00         JL 0x006260c6
00625779  85 FF                     TEST EDI,EDI
0062577B  0F 8C 45 09 00 00         JL 0x006260c6
00625781  0F BF 35 40 B2 7F 00      MOVSX ESI,word ptr [0x007fb240]
00625788  3B D6                     CMP EDX,ESI
0062578A  0F 8D 36 09 00 00         JGE 0x006260c6
00625790  0F BF 35 42 B2 7F 00      MOVSX ESI,word ptr [0x007fb242]
00625797  3B CE                     CMP ECX,ESI
00625799  0F 8D 27 09 00 00         JGE 0x006260c6
0062579F  83 FF 05                  CMP EDI,0x5
006257A2  0F 8D 1E 09 00 00         JGE 0x006260c6
006257A8  8B 04 85 A8 03 7D 00      MOV EAX,dword ptr [EAX*0x4 + 0x7d03a8]
006257AF  8B D9                     MOV EBX,ECX
006257B1  2B D8                     SUB EBX,EAX
006257B3  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
006257B6  79 07                     JNS 0x006257bf
006257B8  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
LAB_006257bf:
006257BF  8B DA                     MOV EBX,EDX
006257C1  2B D8                     SUB EBX,EAX
006257C3  89 5D DC                  MOV dword ptr [EBP + -0x24],EBX
006257C6  79 07                     JNS 0x006257cf
006257C8  C7 45 DC 00 00 00 00      MOV dword ptr [EBP + -0x24],0x0
LAB_006257cf:
006257CF  8D 5C 08 01               LEA EBX,[EAX + ECX*0x1 + 0x1]
006257D3  3B DE                     CMP EBX,ESI
006257D5  89 5D E0                  MOV dword ptr [EBP + -0x20],EBX
006257D8  7E 05                     JLE 0x006257df
006257DA  8B DE                     MOV EBX,ESI
006257DC  89 5D E0                  MOV dword ptr [EBP + -0x20],EBX
LAB_006257df:
006257DF  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
006257E6  8D 54 10 01               LEA EDX,[EAX + EDX*0x1 + 0x1]
006257EA  3B D1                     CMP EDX,ECX
006257EC  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
006257EF  7E 03                     JLE 0x006257f4
006257F1  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
LAB_006257f4:
006257F4  8B CF                     MOV ECX,EDI
006257F6  2B C8                     SUB ECX,EAX
006257F8  79 02                     JNS 0x006257fc
006257FA  33 C9                     XOR ECX,ECX
LAB_006257fc:
006257FC  8D 44 38 01               LEA EAX,[EAX + EDI*0x1 + 0x1]
00625800  83 F8 05                  CMP EAX,0x5
00625803  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
00625806  7E 08                     JLE 0x00625810
00625808  B8 05 00 00 00            MOV EAX,0x5
0062580D  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
LAB_00625810:
00625810  3B C8                     CMP ECX,EAX
00625812  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00625815  0F 8D AB 08 00 00         JGE 0x006260c6
0062581B  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0062581E  8B 7D D4                  MOV EDI,dword ptr [EBP + -0x2c]
00625821  EB 06                     JMP 0x00625829
LAB_00625823:
00625823  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00625826  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
LAB_00625829:
00625829  3B C3                     CMP EAX,EBX
0062582B  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0062582E  0F 8D 97 03 00 00         JGE 0x00625bcb
LAB_00625834:
00625834  8B 5D DC                  MOV EBX,dword ptr [EBP + -0x24]
00625837  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0062583A  3B D8                     CMP EBX,EAX
0062583C  0F 8D 77 03 00 00         JGE 0x00625bb9
LAB_00625842:
00625842  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00625845  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00625848  50                        PUSH EAX
00625849  51                        PUSH ECX
0062584A  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00625850  53                        PUSH EBX
00625851  E8 E5 F4 DD FF            CALL 0x00404d3b
00625856  85 C0                     TEST EAX,EAX
00625858  0F 84 4F 03 00 00         JZ 0x00625bad
0062585E  66 85 DB                  TEST BX,BX
00625861  0F 8C 9F 02 00 00         JL 0x00625b06
00625867  66 8B 0D 40 B2 7F 00      MOV CX,word ptr [0x007fb240]
0062586E  66 3B D9                  CMP BX,CX
00625871  0F 8D 8F 02 00 00         JGE 0x00625b06
00625877  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0062587A  66 85 C0                  TEST AX,AX
0062587D  0F 8C 83 02 00 00         JL 0x00625b06
00625883  66 3B 05 42 B2 7F 00      CMP AX,word ptr [0x007fb242]
0062588A  0F 8D 76 02 00 00         JGE 0x00625b06
00625890  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00625893  66 85 C0                  TEST AX,AX
00625896  0F 8C 6A 02 00 00         JL 0x00625b06
0062589C  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
006258A3  0F 8D 5D 02 00 00         JGE 0x00625b06
006258A9  0F BF D0                  MOVSX EDX,AX
006258AC  0F BF 05 46 B2 7F 00      MOVSX EAX,word ptr [0x007fb246]
006258B3  0F AF D0                  IMUL EDX,EAX
006258B6  0F BF 45 F4               MOVSX EAX,word ptr [EBP + -0xc]
006258BA  0F BF C9                  MOVSX ECX,CX
006258BD  0F AF C1                  IMUL EAX,ECX
006258C0  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
006258C6  03 D0                     ADD EDX,EAX
006258C8  0F BF C3                  MOVSX EAX,BX
006258CB  03 D0                     ADD EDX,EAX
006258CD  8B 34 D1                  MOV ESI,dword ptr [ECX + EDX*0x8]
006258D0  85 F6                     TEST ESI,ESI
006258D2  0F 84 2E 02 00 00         JZ 0x00625b06
006258D8  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006258DB  85 C0                     TEST EAX,EAX
006258DD  0F 85 06 01 00 00         JNZ 0x006259e9
006258E3  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
006258E6  83 F8 08                  CMP EAX,0x8
006258E9  0F 83 BE 02 00 00         JNC 0x00625bad
006258EF  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
006258F5  85 C9                     TEST ECX,ECX
006258F7  74 11                     JZ 0x0062590a
006258F9  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
006258FC  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
00625904  0F 83 A3 02 00 00         JNC 0x00625bad
LAB_0062590a:
0062590A  8A 15 8F 8A 80 00         MOV DL,byte ptr [0x00808a8f]
00625910  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
00625913  8A 8F 62 02 00 00         MOV CL,byte ptr [EDI + 0x262]
00625919  88 45 D8                  MOV byte ptr [EBP + -0x28],AL
0062591C  84 D2                     TEST DL,DL
0062591E  88 4D D4                  MOV byte ptr [EBP + -0x2c],CL
00625921  74 2D                     JZ 0x00625950
00625923  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
00625926  25 FF 00 00 00            AND EAX,0xff
0062592B  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
0062592E  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
00625931  25 FF 00 00 00            AND EAX,0xff
00625936  8A 94 C9 EA 87 80 00      MOV DL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
0062593D  33 C9                     XOR ECX,ECX
0062593F  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00625942  3A 94 C0 EA 87 80 00      CMP DL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
00625949  0F 95 C1                  SETNZ CL
0062594C  8B C1                     MOV EAX,ECX
0062594E  EB 7A                     JMP 0x006259ca
LAB_00625950:
00625950  3A C1                     CMP AL,CL
00625952  74 6B                     JZ 0x006259bf
00625954  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
00625957  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
0062595A  25 FF 00 00 00            AND EAX,0xff
0062595F  81 E1 FF 00 00 00         AND ECX,0xff
00625965  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
0062596C  84 D2                     TEST DL,DL
0062596E  75 10                     JNZ 0x00625980
00625970  38 94 C8 4F 8A 80 00      CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],DL
00625977  75 07                     JNZ 0x00625980
00625979  B8 FE FF FF FF            MOV EAX,0xfffffffe
0062597E  EB 41                     JMP 0x006259c1
LAB_00625980:
00625980  80 FA 01                  CMP DL,0x1
00625983  75 0F                     JNZ 0x00625994
00625985  80 BC C8 4F 8A 80 00 00   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x0
0062598D  75 05                     JNZ 0x00625994
0062598F  83 C8 FF                  OR EAX,0xffffffff
00625992  EB 2D                     JMP 0x006259c1
LAB_00625994:
00625994  84 D2                     TEST DL,DL
00625996  75 11                     JNZ 0x006259a9
00625998  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
006259A0  75 07                     JNZ 0x006259a9
006259A2  B8 01 00 00 00            MOV EAX,0x1
006259A7  EB 18                     JMP 0x006259c1
LAB_006259a9:
006259A9  80 FA 01                  CMP DL,0x1
006259AC  75 11                     JNZ 0x006259bf
006259AE  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
006259B6  75 07                     JNZ 0x006259bf
006259B8  B8 02 00 00 00            MOV EAX,0x2
006259BD  EB 02                     JMP 0x006259c1
LAB_006259bf:
006259BF  33 C0                     XOR EAX,EAX
LAB_006259c1:
006259C1  33 D2                     XOR EDX,EDX
006259C3  85 C0                     TEST EAX,EAX
006259C5  0F 9C C2                  SETL DL
006259C8  8B C2                     MOV EAX,EDX
LAB_006259ca:
006259CA  85 C0                     TEST EAX,EAX
006259CC  0F 84 DB 01 00 00         JZ 0x00625bad
006259D2  8B 06                     MOV EAX,dword ptr [ESI]
006259D4  8B CE                     MOV ECX,ESI
006259D6  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
006259DC  85 C0                     TEST EAX,EAX
006259DE  0F 84 C9 01 00 00         JZ 0x00625bad
006259E4  E9 EC 00 00 00            JMP 0x00625ad5
LAB_006259e9:
006259E9  8D 4D FE                  LEA ECX,[EBP + -0x2]
006259EC  8D 55 FC                  LEA EDX,[EBP + -0x4]
006259EF  51                        PUSH ECX
006259F0  8D 45 FA                  LEA EAX,[EBP + -0x6]
006259F3  52                        PUSH EDX
006259F4  50                        PUSH EAX
006259F5  8B CE                     MOV ECX,ESI
006259F7  E8 E7 D7 DD FF            CALL 0x004031e3
006259FC  0F BF 4D FE               MOVSX ECX,word ptr [EBP + -0x2]
00625A00  0F BF 55 FC               MOVSX EDX,word ptr [EBP + -0x4]
00625A04  0F BF 45 FA               MOVSX EAX,word ptr [EBP + -0x6]
00625A08  51                        PUSH ECX
00625A09  8B 8F CA 02 00 00         MOV ECX,dword ptr [EDI + 0x2ca]
00625A0F  52                        PUSH EDX
00625A10  8B 97 C6 02 00 00         MOV EDX,dword ptr [EDI + 0x2c6]
00625A16  50                        PUSH EAX
00625A17  8B 87 C2 02 00 00         MOV EAX,dword ptr [EDI + 0x2c2]
00625A1D  51                        PUSH ECX
00625A1E  52                        PUSH EDX
00625A1F  50                        PUSH EAX
00625A20  E8 E8 74 08 00            CALL 0x006acf0d
00625A25  33 C9                     XOR ECX,ECX
00625A27  83 C4 18                  ADD ESP,0x18
00625A2A  8A 8F AD 02 00 00         MOV CL,byte ptr [EDI + 0x2ad]
00625A30  8B 0C 8D 94 02 7D 00      MOV ECX,dword ptr [ECX*0x4 + 0x7d0294]
00625A37  3B C1                     CMP EAX,ECX
00625A39  0F 8D 96 00 00 00         JGE 0x00625ad5
00625A3F  3D 5E 01 00 00            CMP EAX,0x15e
00625A44  7D 09                     JGE 0x00625a4f
00625A46  8B CF                     MOV ECX,EDI
00625A48  E8 6D F1 DD FF            CALL 0x00404bba
00625A4D  EB 0F                     JMP 0x00625a5e
LAB_00625a4f:
00625A4F  85 C9                     TEST ECX,ECX
00625A51  74 09                     JZ 0x00625a5c
00625A53  8B CF                     MOV ECX,EDI
00625A55  E8 60 F1 DD FF            CALL 0x00404bba
00625A5A  EB 02                     JMP 0x00625a5e
LAB_00625a5c:
00625A5C  33 C0                     XOR EAX,EAX
LAB_00625a5e:
00625A5E  33 D2                     XOR EDX,EDX
00625A60  68 10 01 00 00            PUSH 0x110
00625A65  8A 97 AD 02 00 00         MOV DL,byte ptr [EDI + 0x2ad]
00625A6B  8B 0C 95 D0 04 7D 00      MOV ECX,dword ptr [EDX*0x4 + 0x7d04d0]
00625A72  8B 57 18                  MOV EDX,dword ptr [EDI + 0x18]
00625A75  51                        PUSH ECX
00625A76  68 FF FF 00 00            PUSH 0xffff
00625A7B  52                        PUSH EDX
00625A7C  56                        PUSH ESI
00625A7D  50                        PUSH EAX
00625A7E  8B 87 62 02 00 00         MOV EAX,dword ptr [EDI + 0x262]
00625A84  50                        PUSH EAX
00625A85  8D 8F 31 02 00 00         LEA ECX,[EDI + 0x231]
00625A8B  E8 92 E3 DD FF            CALL 0x00403e22
00625A90  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
00625A93  3D E8 03 00 00            CMP EAX,0x3e8
00625A98  74 05                     JZ 0x00625a9f
00625A9A  83 F8 14                  CMP EAX,0x14
00625A9D  75 09                     JNZ 0x00625aa8
LAB_00625a9f:
00625A9F  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
00625AA2  89 8F 41 02 00 00         MOV dword ptr [EDI + 0x241],ECX
LAB_00625aa8:
00625AA8  A1 98 17 81 00            MOV EAX,[0x00811798]
00625AAD  85 C0                     TEST EAX,EAX
00625AAF  74 24                     JZ 0x00625ad5
00625AB1  8B 17                     MOV EDX,dword ptr [EDI]
00625AB3  8B CF                     MOV ECX,EDI
00625AB5  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
00625AB8  50                        PUSH EAX
00625AB9  8B 06                     MOV EAX,dword ptr [ESI]
00625ABB  8B CE                     MOV ECX,ESI
00625ABD  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
00625AC0  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
00625AC3  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00625AC6  50                        PUSH EAX
00625AC7  51                        PUSH ECX
00625AC8  8B 0D 98 17 81 00         MOV ECX,dword ptr [0x00811798]
00625ACE  52                        PUSH EDX
00625ACF  53                        PUSH EBX
00625AD0  E8 D3 FD DD FF            CALL 0x004058a8
LAB_00625ad5:
00625AD5  80 BF AD 02 00 00 02      CMP byte ptr [EDI + 0x2ad],0x2
00625ADC  75 21                     JNZ 0x00625aff
00625ADE  8B 87 42 03 00 00         MOV EAX,dword ptr [EDI + 0x342]
00625AE4  85 C0                     TEST EAX,EAX
00625AE6  74 1E                     JZ 0x00625b06
00625AE8  8B 06                     MOV EAX,dword ptr [ESI]
00625AEA  8B CE                     MOV ECX,ESI
00625AEC  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
00625AEF  50                        PUSH EAX
00625AF0  8B CF                     MOV ECX,EDI
00625AF2  E8 57 DA DD FF            CALL 0x0040354e
00625AF7  85 87 42 03 00 00         TEST dword ptr [EDI + 0x342],EAX
00625AFD  74 07                     JZ 0x00625b06
LAB_00625aff:
00625AFF  C7 45 EC 01 00 00 00      MOV dword ptr [EBP + -0x14],0x1
LAB_00625b06:
00625B06  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00625B09  85 C0                     TEST EAX,EAX
00625B0B  0F 84 9C 00 00 00         JZ 0x00625bad
00625B11  80 BF AD 02 00 00 01      CMP byte ptr [EDI + 0x2ad],0x1
00625B18  0F 84 8F 00 00 00         JZ 0x00625bad
00625B1E  66 85 DB                  TEST BX,BX
00625B21  0F 8C 86 00 00 00         JL 0x00625bad
00625B27  66 A1 40 B2 7F 00         MOV AX,[0x007fb240]
00625B2D  66 3B D8                  CMP BX,AX
00625B30  7D 7B                     JGE 0x00625bad
00625B32  66 83 7D F4 00            CMP word ptr [EBP + -0xc],0x0
00625B37  7C 74                     JL 0x00625bad
00625B39  66 8B 0D 42 B2 7F 00      MOV CX,word ptr [0x007fb242]
00625B40  66 39 4D F4               CMP word ptr [EBP + -0xc],CX
00625B44  7D 67                     JGE 0x00625bad
00625B46  66 83 7D F0 00            CMP word ptr [EBP + -0x10],0x0
00625B4B  7C 60                     JL 0x00625bad
00625B4D  66 8B 15 44 B2 7F 00      MOV DX,word ptr [0x007fb244]
00625B54  66 39 55 F0               CMP word ptr [EBP + -0x10],DX
00625B58  7D 53                     JGE 0x00625bad
00625B5A  0F BF 4D F0               MOVSX ECX,word ptr [EBP + -0x10]
00625B5E  0F BF 15 46 B2 7F 00      MOVSX EDX,word ptr [0x007fb246]
00625B65  0F AF CA                  IMUL ECX,EDX
00625B68  0F BF 55 F4               MOVSX EDX,word ptr [EBP + -0xc]
00625B6C  0F BF C0                  MOVSX EAX,AX
00625B6F  0F AF D0                  IMUL EDX,EAX
00625B72  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
00625B77  03 CA                     ADD ECX,EDX
00625B79  0F BF D3                  MOVSX EDX,BX
00625B7C  03 CA                     ADD ECX,EDX
00625B7E  8B 74 C8 04               MOV ESI,dword ptr [EAX + ECX*0x8 + 0x4]
00625B82  85 F6                     TEST ESI,ESI
00625B84  74 27                     JZ 0x00625bad
00625B86  8B 16                     MOV EDX,dword ptr [ESI]
00625B88  8B CE                     MOV ECX,ESI
00625B8A  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
00625B8D  05 5A FF FF FF            ADD EAX,0xffffff5a
00625B92  83 F8 17                  CMP EAX,0x17
00625B95  77 16                     JA 0x00625bad
00625B97  33 C9                     XOR ECX,ECX
00625B99  8A 88 EC 60 62 00         MOV CL,byte ptr [EAX + 0x6260ec]
switchD_00625b9f::switchD:
00625B9F  FF 24 8D E4 60 62 00      JMP dword ptr [ECX*0x4 + 0x6260e4]
switchD_00625b9f::caseD_a6:
00625BA6  8B CE                     MOV ECX,ESI
00625BA8  E8 B1 F6 DD FF            CALL 0x0040525e
switchD_00625b9f::caseD_a8:
00625BAD  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00625BB0  43                        INC EBX
00625BB1  3B D8                     CMP EBX,EAX
00625BB3  0F 8C 89 FC FF FF         JL 0x00625842
LAB_00625bb9:
00625BB9  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00625BBC  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00625BBF  40                        INC EAX
00625BC0  3B C1                     CMP EAX,ECX
00625BC2  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00625BC5  0F 8C 69 FC FF FF         JL 0x00625834
LAB_00625bcb:
00625BCB  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00625BCE  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
00625BD1  40                        INC EAX
00625BD2  3B C1                     CMP EAX,ECX
00625BD4  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00625BD7  0F 8C 46 FC FF FF         JL 0x00625823
00625BDD  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00625BE0  5F                        POP EDI
00625BE1  5E                        POP ESI
00625BE2  5B                        POP EBX
00625BE3  8B E5                     MOV ESP,EBP
00625BE5  5D                        POP EBP
00625BE6  C2 10 00                  RET 0x10
switchD_00625756::caseD_1:
00625BE9  33 C0                     XOR EAX,EAX
00625BEB  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
00625BEE  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00625BF1  B8 BA 03 7D 00            MOV EAX,0x7d03ba
LAB_00625bf6:
00625BF6  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00625BF9  C7 45 D8 03 00 00 00      MOV dword ptr [EBP + -0x28],0x3
LAB_00625c00:
00625C00  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00625C03  0F BF 57 47               MOVSX EDX,word ptr [EDI + 0x47]
00625C07  0F BF 58 FE               MOVSX EBX,word ptr [EAX + -0x2]
00625C0B  0F BF 08                  MOVSX ECX,word ptr [EAX]
00625C0E  03 DA                     ADD EBX,EDX
00625C10  0F BF 57 49               MOVSX EDX,word ptr [EDI + 0x49]
00625C14  0F BF 40 02               MOVSX EAX,word ptr [EAX + 0x2]
00625C18  03 CA                     ADD ECX,EDX
00625C1A  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00625C1D  0F BF 4F 4B               MOVSX ECX,word ptr [EDI + 0x4b]
00625C21  03 C1                     ADD EAX,ECX
00625C23  85 DB                     TEST EBX,EBX
00625C25  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00625C28  0F 8C 51 04 00 00         JL 0x0062607f
00625C2E  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00625C31  85 C0                     TEST EAX,EAX
00625C33  0F 8C 46 04 00 00         JL 0x0062607f
00625C39  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00625C3C  85 C0                     TEST EAX,EAX
00625C3E  0F 8C 3B 04 00 00         JL 0x0062607f
00625C44  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
00625C4B  3B D8                     CMP EBX,EAX
00625C4D  0F 8D 2C 04 00 00         JGE 0x0062607f
00625C53  0F BF 15 42 B2 7F 00      MOVSX EDX,word ptr [0x007fb242]
00625C5A  39 55 F0                  CMP dword ptr [EBP + -0x10],EDX
00625C5D  0F 8D 1C 04 00 00         JGE 0x0062607f
00625C63  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00625C66  83 F9 05                  CMP ECX,0x5
00625C69  0F 8D 10 04 00 00         JGE 0x0062607f
00625C6F  66 85 DB                  TEST BX,BX
00625C72  0F 8C E6 00 00 00         JL 0x00625d5e
00625C78  66 3B 1D 40 B2 7F 00      CMP BX,word ptr [0x007fb240]
00625C7F  0F 8D D9 00 00 00         JGE 0x00625d5e
00625C85  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00625C88  66 85 D2                  TEST DX,DX
00625C8B  0F 8C CD 00 00 00         JL 0x00625d5e
00625C91  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00625C98  0F 8D C0 00 00 00         JGE 0x00625d5e
00625C9E  66 85 C9                  TEST CX,CX
00625CA1  0F 8C B7 00 00 00         JL 0x00625d5e
00625CA7  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00625CAE  0F 8D AA 00 00 00         JGE 0x00625d5e
00625CB4  0F BF 35 46 B2 7F 00      MOVSX ESI,word ptr [0x007fb246]
00625CBB  0F BF C9                  MOVSX ECX,CX
00625CBE  0F BF D2                  MOVSX EDX,DX
00625CC1  0F AF CE                  IMUL ECX,ESI
00625CC4  0F AF D0                  IMUL EDX,EAX
00625CC7  0F BF C3                  MOVSX EAX,BX
00625CCA  03 CA                     ADD ECX,EDX
00625CCC  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00625CD2  03 C8                     ADD ECX,EAX
00625CD4  8B 34 CA                  MOV ESI,dword ptr [EDX + ECX*0x8]
00625CD7  85 F6                     TEST ESI,ESI
00625CD9  0F 84 81 00 00 00         JZ 0x00625d60
00625CDF  8B 06                     MOV EAX,dword ptr [ESI]
00625CE1  8B CE                     MOV ECX,ESI
00625CE3  FF 90 F0 00 00 00         CALL dword ptr [EAX + 0xf0]
00625CE9  85 C0                     TEST EAX,EAX
00625CEB  0F 84 8E 03 00 00         JZ 0x0062607f
00625CF1  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00625CF4  85 C0                     TEST EAX,EAX
00625CF6  0F 84 24 01 00 00         JZ 0x00625e20
00625CFC  8D 4D FE                  LEA ECX,[EBP + -0x2]
00625CFF  8D 55 FC                  LEA EDX,[EBP + -0x4]
00625D02  51                        PUSH ECX
00625D03  8D 45 FA                  LEA EAX,[EBP + -0x6]
00625D06  52                        PUSH EDX
00625D07  50                        PUSH EAX
00625D08  8B CE                     MOV ECX,ESI
00625D0A  E8 D4 D4 DD FF            CALL 0x004031e3
00625D0F  0F BF 4D FE               MOVSX ECX,word ptr [EBP + -0x2]
00625D13  0F BF 55 FC               MOVSX EDX,word ptr [EBP + -0x4]
00625D17  0F BF 45 FA               MOVSX EAX,word ptr [EBP + -0x6]
00625D1B  51                        PUSH ECX
00625D1C  8B 8F CA 02 00 00         MOV ECX,dword ptr [EDI + 0x2ca]
00625D22  52                        PUSH EDX
00625D23  8B 97 C6 02 00 00         MOV EDX,dword ptr [EDI + 0x2c6]
00625D29  50                        PUSH EAX
00625D2A  8B 87 C2 02 00 00         MOV EAX,dword ptr [EDI + 0x2c2]
00625D30  51                        PUSH ECX
00625D31  52                        PUSH EDX
00625D32  50                        PUSH EAX
00625D33  E8 D5 71 08 00            CALL 0x006acf0d
00625D38  33 C9                     XOR ECX,ECX
00625D3A  83 C4 18                  ADD ESP,0x18
00625D3D  8A 8F AD 02 00 00         MOV CL,byte ptr [EDI + 0x2ad]
00625D43  8B 0C 8D 94 02 7D 00      MOV ECX,dword ptr [ECX*0x4 + 0x7d0294]
00625D4A  3B C1                     CMP EAX,ECX
00625D4C  7D 12                     JGE 0x00625d60
00625D4E  3D 5E 01 00 00            CMP EAX,0x15e
00625D53  7D 3C                     JGE 0x00625d91
00625D55  8B CF                     MOV ECX,EDI
00625D57  E8 5E EE DD FF            CALL 0x00404bba
00625D5C  EB 42                     JMP 0x00625da0
LAB_00625d5e:
00625D5E  33 F6                     XOR ESI,ESI
LAB_00625d60:
00625D60  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00625D63  85 C0                     TEST EAX,EAX
00625D65  0F 84 14 03 00 00         JZ 0x0062607f
00625D6B  8B 8F C6 02 00 00         MOV ECX,dword ptr [EDI + 0x2c6]
00625D71  B8 79 19 8C 02            MOV EAX,0x28c1979
00625D76  85 C9                     TEST ECX,ECX
00625D78  0F 8C F0 01 00 00         JL 0x00625f6e
00625D7E  F7 E9                     IMUL ECX
00625D80  D1 FA                     SAR EDX,0x1
00625D82  8B C2                     MOV EAX,EDX
00625D84  C1 E8 1F                  SHR EAX,0x1f
00625D87  03 D0                     ADD EDX,EAX
00625D89  0F BF CA                  MOVSX ECX,DX
00625D8C  E9 EC 01 00 00            JMP 0x00625f7d
LAB_00625d91:
00625D91  85 C9                     TEST ECX,ECX
00625D93  74 09                     JZ 0x00625d9e
00625D95  8B CF                     MOV ECX,EDI
00625D97  E8 1E EE DD FF            CALL 0x00404bba
00625D9C  EB 02                     JMP 0x00625da0
LAB_00625d9e:
00625D9E  33 C0                     XOR EAX,EAX
LAB_00625da0:
00625DA0  33 D2                     XOR EDX,EDX
00625DA2  68 10 01 00 00            PUSH 0x110
00625DA7  8A 97 AD 02 00 00         MOV DL,byte ptr [EDI + 0x2ad]
00625DAD  8B 0C 95 D0 04 7D 00      MOV ECX,dword ptr [EDX*0x4 + 0x7d04d0]
00625DB4  8B 57 18                  MOV EDX,dword ptr [EDI + 0x18]
00625DB7  51                        PUSH ECX
00625DB8  68 FF FF 00 00            PUSH 0xffff
00625DBD  52                        PUSH EDX
00625DBE  56                        PUSH ESI
00625DBF  50                        PUSH EAX
00625DC0  8B 87 62 02 00 00         MOV EAX,dword ptr [EDI + 0x262]
00625DC6  50                        PUSH EAX
00625DC7  8D 8F 31 02 00 00         LEA ECX,[EDI + 0x231]
00625DCD  E8 50 E0 DD FF            CALL 0x00403e22
00625DD2  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
00625DD5  3D E8 03 00 00            CMP EAX,0x3e8
00625DDA  74 05                     JZ 0x00625de1
00625DDC  83 F8 14                  CMP EAX,0x14
00625DDF  75 09                     JNZ 0x00625dea
LAB_00625de1:
00625DE1  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
00625DE4  89 8F 41 02 00 00         MOV dword ptr [EDI + 0x241],ECX
LAB_00625dea:
00625DEA  A1 98 17 81 00            MOV EAX,[0x00811798]
00625DEF  85 C0                     TEST EAX,EAX
00625DF1  0F 84 69 FF FF FF         JZ 0x00625d60
00625DF7  8B 17                     MOV EDX,dword ptr [EDI]
00625DF9  8B CF                     MOV ECX,EDI
00625DFB  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
00625DFE  50                        PUSH EAX
00625DFF  8B 06                     MOV EAX,dword ptr [ESI]
00625E01  8B CE                     MOV ECX,ESI
00625E03  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
00625E06  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
00625E09  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00625E0C  50                        PUSH EAX
00625E0D  51                        PUSH ECX
00625E0E  8B 0D 98 17 81 00         MOV ECX,dword ptr [0x00811798]
00625E14  52                        PUSH EDX
00625E15  53                        PUSH EBX
00625E16  E8 8D FA DD FF            CALL 0x004058a8
00625E1B  E9 40 FF FF FF            JMP 0x00625d60
LAB_00625e20:
00625E20  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
00625E23  83 F8 08                  CMP EAX,0x8
00625E26  0F 83 53 02 00 00         JNC 0x0062607f
00625E2C  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00625E32  85 C9                     TEST ECX,ECX
00625E34  74 11                     JZ 0x00625e47
00625E36  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00625E39  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
00625E41  0F 83 38 02 00 00         JNC 0x0062607f
LAB_00625e47:
00625E47  8A 15 8F 8A 80 00         MOV DL,byte ptr [0x00808a8f]
00625E4D  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
00625E50  8A 8F 62 02 00 00         MOV CL,byte ptr [EDI + 0x262]
00625E56  88 45 D0                  MOV byte ptr [EBP + -0x30],AL
00625E59  84 D2                     TEST DL,DL
00625E5B  88 4D D4                  MOV byte ptr [EBP + -0x2c],CL
00625E5E  74 2D                     JZ 0x00625e8d
00625E60  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
00625E63  33 D2                     XOR EDX,EDX
00625E65  25 FF 00 00 00            AND EAX,0xff
00625E6A  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
00625E6D  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
00625E70  25 FF 00 00 00            AND EAX,0xff
00625E75  8A 8C C9 EA 87 80 00      MOV CL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
00625E7C  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00625E7F  3A 8C C0 EA 87 80 00      CMP CL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
00625E86  0F 95 C2                  SETNZ DL
00625E89  8B C2                     MOV EAX,EDX
00625E8B  EB 7A                     JMP 0x00625f07
LAB_00625e8d:
00625E8D  3A C1                     CMP AL,CL
00625E8F  74 6B                     JZ 0x00625efc
00625E91  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
00625E94  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
00625E97  25 FF 00 00 00            AND EAX,0xff
00625E9C  81 E1 FF 00 00 00         AND ECX,0xff
00625EA2  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
00625EA9  84 D2                     TEST DL,DL
00625EAB  75 10                     JNZ 0x00625ebd
00625EAD  38 94 C8 4F 8A 80 00      CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],DL
00625EB4  75 07                     JNZ 0x00625ebd
00625EB6  B8 FE FF FF FF            MOV EAX,0xfffffffe
00625EBB  EB 41                     JMP 0x00625efe
LAB_00625ebd:
00625EBD  80 FA 01                  CMP DL,0x1
00625EC0  75 0F                     JNZ 0x00625ed1
00625EC2  80 BC C8 4F 8A 80 00 00   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x0
00625ECA  75 05                     JNZ 0x00625ed1
00625ECC  83 C8 FF                  OR EAX,0xffffffff
00625ECF  EB 2D                     JMP 0x00625efe
LAB_00625ed1:
00625ED1  84 D2                     TEST DL,DL
00625ED3  75 11                     JNZ 0x00625ee6
00625ED5  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
00625EDD  75 07                     JNZ 0x00625ee6
00625EDF  B8 01 00 00 00            MOV EAX,0x1
00625EE4  EB 18                     JMP 0x00625efe
LAB_00625ee6:
00625EE6  80 FA 01                  CMP DL,0x1
00625EE9  75 11                     JNZ 0x00625efc
00625EEB  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
00625EF3  75 07                     JNZ 0x00625efc
00625EF5  B8 02 00 00 00            MOV EAX,0x2
00625EFA  EB 02                     JMP 0x00625efe
LAB_00625efc:
00625EFC  33 C0                     XOR EAX,EAX
LAB_00625efe:
00625EFE  33 C9                     XOR ECX,ECX
00625F00  85 C0                     TEST EAX,EAX
00625F02  0F 9C C1                  SETL CL
00625F05  8B C1                     MOV EAX,ECX
LAB_00625f07:
00625F07  85 C0                     TEST EAX,EAX
00625F09  0F 84 70 01 00 00         JZ 0x0062607f
00625F0F  8B 16                     MOV EDX,dword ptr [ESI]
00625F11  8B CE                     MOV ECX,ESI
00625F13  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
00625F19  85 C0                     TEST EAX,EAX
00625F1B  0F 84 5E 01 00 00         JZ 0x0062607f
00625F21  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00625F24  8B CF                     MOV ECX,EDI
00625F26  50                        PUSH EAX
00625F27  56                        PUSH ESI
00625F28  E8 8E CD DD FF            CALL 0x00402cbb
00625F2D  85 C0                     TEST EAX,EAX
00625F2F  0F 84 4A 01 00 00         JZ 0x0062607f
00625F35  A1 98 17 81 00            MOV EAX,[0x00811798]
00625F3A  85 C0                     TEST EAX,EAX
00625F3C  74 24                     JZ 0x00625f62
00625F3E  8B 17                     MOV EDX,dword ptr [EDI]
00625F40  8B CF                     MOV ECX,EDI
00625F42  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
00625F45  50                        PUSH EAX
00625F46  8B 06                     MOV EAX,dword ptr [ESI]
00625F48  8B CE                     MOV ECX,ESI
00625F4A  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
00625F4D  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
00625F50  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00625F53  50                        PUSH EAX
00625F54  51                        PUSH ECX
00625F55  8B 0D 98 17 81 00         MOV ECX,dword ptr [0x00811798]
00625F5B  52                        PUSH EDX
00625F5C  53                        PUSH EBX
00625F5D  E8 46 F9 DD FF            CALL 0x004058a8
LAB_00625f62:
00625F62  C7 45 DC 01 00 00 00      MOV dword ptr [EBP + -0x24],0x1
00625F69  E9 11 01 00 00            JMP 0x0062607f
LAB_00625f6e:
00625F6E  F7 E9                     IMUL ECX
00625F70  D1 FA                     SAR EDX,0x1
00625F72  8B CA                     MOV ECX,EDX
00625F74  C1 E9 1F                  SHR ECX,0x1f
00625F77  03 D1                     ADD EDX,ECX
00625F79  0F BF CA                  MOVSX ECX,DX
00625F7C  49                        DEC ECX
LAB_00625f7d:
00625F7D  8B 97 C2 02 00 00         MOV EDX,dword ptr [EDI + 0x2c2]
00625F83  B8 79 19 8C 02            MOV EAX,0x28c1979
00625F88  85 D2                     TEST EDX,EDX
00625F8A  7C 10                     JL 0x00625f9c
00625F8C  F7 EA                     IMUL EDX
00625F8E  D1 FA                     SAR EDX,0x1
00625F90  8B C2                     MOV EAX,EDX
00625F92  C1 E8 1F                  SHR EAX,0x1f
00625F95  03 D0                     ADD EDX,EAX
00625F97  0F BF C2                  MOVSX EAX,DX
00625F9A  EB 0F                     JMP 0x00625fab
LAB_00625f9c:
00625F9C  F7 EA                     IMUL EDX
00625F9E  D1 FA                     SAR EDX,0x1
00625FA0  8B C2                     MOV EAX,EDX
00625FA2  C1 E8 1F                  SHR EAX,0x1f
00625FA5  03 D0                     ADD EDX,EAX
00625FA7  0F BF C2                  MOVSX EAX,DX
00625FAA  48                        DEC EAX
LAB_00625fab:
00625FAB  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00625FAE  52                        PUSH EDX
00625FAF  53                        PUSH EBX
00625FB0  51                        PUSH ECX
00625FB1  50                        PUSH EAX
00625FB2  E8 D9 6F 08 00            CALL 0x006acf90
00625FB7  83 F8 02                  CMP EAX,0x2
00625FBA  0F 8D 94 00 00 00         JGE 0x00626054
00625FC0  8B 8F C2 02 00 00         MOV ECX,dword ptr [EDI + 0x2c2]
00625FC6  B8 79 19 8C 02            MOV EAX,0x28c1979
00625FCB  85 C9                     TEST ECX,ECX
00625FCD  7C 10                     JL 0x00625fdf
00625FCF  F7 E9                     IMUL ECX
00625FD1  D1 FA                     SAR EDX,0x1
00625FD3  8B C2                     MOV EAX,EDX
00625FD5  C1 E8 1F                  SHR EAX,0x1f
00625FD8  03 D0                     ADD EDX,EAX
00625FDA  0F BF C2                  MOVSX EAX,DX
00625FDD  EB 0F                     JMP 0x00625fee
LAB_00625fdf:
00625FDF  F7 E9                     IMUL ECX
00625FE1  D1 FA                     SAR EDX,0x1
00625FE3  8B CA                     MOV ECX,EDX
00625FE5  C1 E9 1F                  SHR ECX,0x1f
00625FE8  03 D1                     ADD EDX,ECX
00625FEA  0F BF C2                  MOVSX EAX,DX
00625FED  48                        DEC EAX
LAB_00625fee:
00625FEE  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00625FF1  2B C1                     SUB EAX,ECX
00625FF3  99                        CDQ
00625FF4  33 C2                     XOR EAX,EDX
00625FF6  2B C2                     SUB EAX,EDX
00625FF8  83 F8 02                  CMP EAX,0x2
00625FFB  7D 57                     JGE 0x00626054
00625FFD  66 85 DB                  TEST BX,BX
00626000  7C 7D                     JL 0x0062607f
00626002  66 8B 15 40 B2 7F 00      MOV DX,word ptr [0x007fb240]
00626009  66 3B DA                  CMP BX,DX
0062600C  7D 71                     JGE 0x0062607f
0062600E  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00626011  66 85 C0                  TEST AX,AX
00626014  7C 69                     JL 0x0062607f
00626016  66 3B 05 42 B2 7F 00      CMP AX,word ptr [0x007fb242]
0062601D  7D 60                     JGE 0x0062607f
0062601F  66 85 C9                  TEST CX,CX
00626022  7C 5B                     JL 0x0062607f
00626024  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0062602B  7D 52                     JGE 0x0062607f
0062602D  0F BF 35 46 B2 7F 00      MOVSX ESI,word ptr [0x007fb246]
00626034  0F BF C9                  MOVSX ECX,CX
00626037  0F BF C0                  MOVSX EAX,AX
0062603A  0F AF CE                  IMUL ECX,ESI
0062603D  0F BF D2                  MOVSX EDX,DX
00626040  0F AF C2                  IMUL EAX,EDX
00626043  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00626049  03 C8                     ADD ECX,EAX
0062604B  0F BF C3                  MOVSX EAX,BX
0062604E  03 C8                     ADD ECX,EAX
00626050  8B 74 CA 04               MOV ESI,dword ptr [EDX + ECX*0x8 + 0x4]
LAB_00626054:
00626054  85 F6                     TEST ESI,ESI
00626056  74 27                     JZ 0x0062607f
00626058  8B 06                     MOV EAX,dword ptr [ESI]
0062605A  8B CE                     MOV ECX,ESI
0062605C  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0062605F  05 5A FF FF FF            ADD EAX,0xffffff5a
00626064  83 F8 17                  CMP EAX,0x17
00626067  77 16                     JA 0x0062607f
00626069  33 C9                     XOR ECX,ECX
0062606B  8A 88 0C 61 62 00         MOV CL,byte ptr [EAX + 0x62610c]
switchD_00626071::switchD:
00626071  FF 24 8D 04 61 62 00      JMP dword ptr [ECX*0x4 + 0x626104]
switchD_00626071::caseD_a6:
00626078  8B CE                     MOV ECX,ESI
0062607A  E8 DF F1 DD FF            CALL 0x0040525e
FUN_00625730::cf_continue_loop_0062607F:
0062607F  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00626082  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
00626085  83 C0 06                  ADD EAX,0x6
00626088  49                        DEC ECX
00626089  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0062608C  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
0062608F  0F 85 6B FB FF FF         JNZ 0x00625c00
00626095  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00626098  42                        INC EDX
00626099  3D 6E 04 7D 00            CMP EAX,0x7d046e
0062609E  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
006260A1  0F 8C 4F FB FF FF         JL 0x00625bf6
006260A7  83 7D DC 01               CMP dword ptr [EBP + -0x24],0x1
006260AB  75 19                     JNZ 0x006260c6
006260AD  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
006260B3  C7 45 EC 01 00 00 00      MOV dword ptr [EBP + -0x14],0x1
006260BA  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
006260C0  89 87 46 03 00 00         MOV dword ptr [EDI + 0x346],EAX
switchD_00625756::default:
006260C6  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006260C9  5F                        POP EDI
006260CA  5E                        POP ESI
006260CB  5B                        POP EBX
006260CC  8B E5                     MOV ESP,EBP
006260CE  5D                        POP EBP
006260CF  C2 10 00                  RET 0x10
