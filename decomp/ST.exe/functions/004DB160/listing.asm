FUN_004db160:
004DB160  55                        PUSH EBP
004DB161  8B EC                     MOV EBP,ESP
004DB163  83 EC 5C                  SUB ESP,0x5c
004DB166  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
004DB169  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004DB16C  53                        PUSH EBX
004DB16D  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
004DB170  C7 00 FF FF FF FF         MOV dword ptr [EAX],0xffffffff
004DB176  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004DB179  8B 12                     MOV EDX,dword ptr [EDX]
004DB17B  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
004DB17E  8B 00                     MOV EAX,dword ptr [EAX]
004DB180  8B 0B                     MOV ECX,dword ptr [EBX]
004DB182  56                        PUSH ESI
004DB183  57                        PUSH EDI
004DB184  66 85 C0                  TEST AX,AX
004DB187  0F 8C CA 00 00 00         JL 0x004db257
004DB18D  66 8B 35 40 B2 7F 00      MOV SI,word ptr [0x007fb240]
004DB194  66 3B C6                  CMP AX,SI
004DB197  0F 8D BA 00 00 00         JGE 0x004db257
004DB19D  66 85 D2                  TEST DX,DX
004DB1A0  0F 8C B1 00 00 00         JL 0x004db257
004DB1A6  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
004DB1AD  0F 8D A4 00 00 00         JGE 0x004db257
004DB1B3  66 85 C9                  TEST CX,CX
004DB1B6  0F 8C 9B 00 00 00         JL 0x004db257
004DB1BC  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
004DB1C3  0F 8D 8E 00 00 00         JGE 0x004db257
004DB1C9  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
004DB1D0  0F BF C9                  MOVSX ECX,CX
004DB1D3  0F AF F9                  IMUL EDI,ECX
004DB1D6  0F BF CE                  MOVSX ECX,SI
004DB1D9  0F BF D2                  MOVSX EDX,DX
004DB1DC  0F AF CA                  IMUL ECX,EDX
004DB1DF  0F BF C0                  MOVSX EAX,AX
004DB1E2  03 F9                     ADD EDI,ECX
004DB1E4  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
004DB1EA  03 F8                     ADD EDI,EAX
004DB1EC  8B 34 F9                  MOV ESI,dword ptr [ECX + EDI*0x8]
004DB1EF  85 F6                     TEST ESI,ESI
004DB1F1  74 64                     JZ 0x004db257
004DB1F3  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
004DB1F6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004DB1F9  3B D0                     CMP EDX,EAX
004DB1FB  74 5A                     JZ 0x004db257
004DB1FD  8B 06                     MOV EAX,dword ptr [ESI]
004DB1FF  8B CE                     MOV ECX,ESI
004DB201  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004DB204  83 F8 3C                  CMP EAX,0x3c
004DB207  74 0C                     JZ 0x004db215
004DB209  8B 16                     MOV EDX,dword ptr [ESI]
004DB20B  8B CE                     MOV ECX,ESI
004DB20D  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004DB210  83 F8 53                  CMP EAX,0x53
004DB213  75 42                     JNZ 0x004db257
LAB_004db215:
004DB215  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
004DB218  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DB21E  50                        PUSH EAX
004DB21F  E8 93 97 F2 FF            CALL 0x004049b7
004DB224  25 FF 00 00 00            AND EAX,0xff
004DB229  48                        DEC EAX
004DB22A  0F 84 63 01 00 00         JZ 0x004db393
004DB230  48                        DEC EAX
004DB231  74 0B                     JZ 0x004db23e
004DB233  48                        DEC EAX
004DB234  75 21                     JNZ 0x004db257
004DB236  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004DB239  6A 63                     PUSH 0x63
004DB23B  51                        PUSH ECX
004DB23C  EB 06                     JMP 0x004db244
LAB_004db23e:
004DB23E  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
004DB241  6A 43                     PUSH 0x43
004DB243  52                        PUSH EDX
LAB_004db244:
004DB244  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DB24A  E8 1C 66 F2 FF            CALL 0x0040186b
004DB24F  85 C0                     TEST EAX,EAX
004DB251  0F 85 55 01 00 00         JNZ 0x004db3ac
LAB_004db257:
004DB257  66 8B 15 44 B2 7F 00      MOV DX,word ptr [0x007fb244]
004DB25E  B9 01 00 00 00            MOV ECX,0x1
004DB263  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
LAB_004db266:
004DB266  0F BF C2                  MOVSX EAX,DX
004DB269  48                        DEC EAX
004DB26A  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
004DB271  85 C0                     TEST EAX,EAX
004DB273  0F 8E F1 03 00 00         JLE 0x004db66a
LAB_004db279:
004DB279  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004DB27C  8B 02                     MOV EAX,dword ptr [EDX]
004DB27E  8B D8                     MOV EBX,EAX
004DB280  03 C1                     ADD EAX,ECX
004DB282  2B D9                     SUB EBX,ECX
004DB284  3B D8                     CMP EBX,EAX
004DB286  0F 8F 1E 02 00 00         JG 0x004db4aa
LAB_004db28c:
004DB28C  85 DB                     TEST EBX,EBX
004DB28E  0F 8C 03 02 00 00         JL 0x004db497
004DB294  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
004DB29B  3B D8                     CMP EBX,EAX
004DB29D  0F 8D F4 01 00 00         JGE 0x004db497
004DB2A3  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004DB2A6  8B 39                     MOV EDI,dword ptr [ECX]
004DB2A8  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
004DB2AB  2B F9                     SUB EDI,ECX
004DB2AD  0F 88 31 01 00 00         JS 0x004db3e4
004DB2B3  66 8B 0D 42 B2 7F 00      MOV CX,word ptr [0x007fb242]
004DB2BA  0F BF D1                  MOVSX EDX,CX
004DB2BD  3B FA                     CMP EDI,EDX
004DB2BF  0F 8D 1F 01 00 00         JGE 0x004db3e4
004DB2C5  66 85 DB                  TEST BX,BX
004DB2C8  0F 8C 16 01 00 00         JL 0x004db3e4
004DB2CE  66 3B 1D 40 B2 7F 00      CMP BX,word ptr [0x007fb240]
004DB2D5  0F 8D 09 01 00 00         JGE 0x004db3e4
004DB2DB  66 85 FF                  TEST DI,DI
004DB2DE  0F 8C 00 01 00 00         JL 0x004db3e4
004DB2E4  66 3B F9                  CMP DI,CX
004DB2E7  0F 8D F7 00 00 00         JGE 0x004db3e4
004DB2ED  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004DB2F0  66 85 C9                  TEST CX,CX
004DB2F3  0F 8C EB 00 00 00         JL 0x004db3e4
004DB2F9  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
004DB300  0F 8D DE 00 00 00         JGE 0x004db3e4
004DB306  0F BF 15 46 B2 7F 00      MOVSX EDX,word ptr [0x007fb246]
004DB30D  0F BF C9                  MOVSX ECX,CX
004DB310  0F AF CA                  IMUL ECX,EDX
004DB313  0F BF D7                  MOVSX EDX,DI
004DB316  0F AF D0                  IMUL EDX,EAX
004DB319  0F BF C3                  MOVSX EAX,BX
004DB31C  03 CA                     ADD ECX,EDX
004DB31E  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
004DB324  03 C8                     ADD ECX,EAX
004DB326  8B 34 CA                  MOV ESI,dword ptr [EDX + ECX*0x8]
004DB329  85 F6                     TEST ESI,ESI
004DB32B  0F 84 B3 00 00 00         JZ 0x004db3e4
004DB331  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004DB334  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004DB337  3B C1                     CMP EAX,ECX
004DB339  0F 84 A5 00 00 00         JZ 0x004db3e4
004DB33F  8B 16                     MOV EDX,dword ptr [ESI]
004DB341  8B CE                     MOV ECX,ESI
004DB343  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004DB346  83 F8 3C                  CMP EAX,0x3c
004DB349  74 10                     JZ 0x004db35b
004DB34B  8B 06                     MOV EAX,dword ptr [ESI]
004DB34D  8B CE                     MOV ECX,ESI
004DB34F  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004DB352  83 F8 53                  CMP EAX,0x53
004DB355  0F 85 89 00 00 00         JNZ 0x004db3e4
LAB_004db35b:
004DB35B  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004DB35E  51                        PUSH ECX
004DB35F  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DB365  E8 4D 96 F2 FF            CALL 0x004049b7
004DB36A  25 FF 00 00 00            AND EAX,0xff
004DB36F  48                        DEC EAX
004DB370  74 59                     JZ 0x004db3cb
004DB372  48                        DEC EAX
004DB373  74 4E                     JZ 0x004db3c3
004DB375  48                        DEC EAX
004DB376  75 6C                     JNZ 0x004db3e4
004DB378  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
004DB37B  6A 63                     PUSH 0x63
004DB37D  52                        PUSH EDX
LAB_004db37e:
004DB37E  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DB384  E8 E2 64 F2 FF            CALL 0x0040186b
004DB389  85 C0                     TEST EAX,EAX
004DB38B  0F 85 EB 02 00 00         JNZ 0x004db67c
004DB391  EB 51                     JMP 0x004db3e4
LAB_004db393:
004DB393  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004DB396  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DB39C  6A 42                     PUSH 0x42
004DB39E  50                        PUSH EAX
004DB39F  E8 C7 64 F2 FF            CALL 0x0040186b
004DB3A4  85 C0                     TEST EAX,EAX
004DB3A6  0F 84 AB FE FF FF         JZ 0x004db257
LAB_004db3ac:
004DB3AC  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004DB3AF  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004DB3B2  8B 03                     MOV EAX,dword ptr [EBX]
004DB3B4  8B 09                     MOV ECX,dword ptr [ECX]
004DB3B6  8B 3A                     MOV EDI,dword ptr [EDX]
004DB3B8  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
004DB3BB  89 7D 18                  MOV dword ptr [EBP + 0x18],EDI
004DB3BE  E9 CD 02 00 00            JMP 0x004db690
LAB_004db3c3:
004DB3C3  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004DB3C6  6A 43                     PUSH 0x43
004DB3C8  50                        PUSH EAX
004DB3C9  EB B3                     JMP 0x004db37e
LAB_004db3cb:
004DB3CB  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004DB3CE  6A 42                     PUSH 0x42
004DB3D0  51                        PUSH ECX
004DB3D1  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DB3D7  E8 8F 64 F2 FF            CALL 0x0040186b
004DB3DC  85 C0                     TEST EAX,EAX
004DB3DE  0F 85 98 02 00 00         JNZ 0x004db67c
LAB_004db3e4:
004DB3E4  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004DB3E7  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
004DB3EA  8B 3A                     MOV EDI,dword ptr [EDX]
004DB3EC  03 F8                     ADD EDI,EAX
004DB3EE  0F 88 A3 00 00 00         JS 0x004db497
004DB3F4  0F BF 05 42 B2 7F 00      MOVSX EAX,word ptr [0x007fb242]
004DB3FB  3B F8                     CMP EDI,EAX
004DB3FD  0F 8D 94 00 00 00         JGE 0x004db497
004DB403  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004DB406  6A 00                     PUSH 0x0
004DB408  51                        PUSH ECX
004DB409  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
004DB40F  57                        PUSH EDI
004DB410  53                        PUSH EBX
004DB411  E8 2C 60 F2 FF            CALL 0x00401442
004DB416  8B F0                     MOV ESI,EAX
004DB418  85 F6                     TEST ESI,ESI
004DB41A  74 7B                     JZ 0x004db497
004DB41C  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004DB41F  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004DB422  3B C2                     CMP EAX,EDX
004DB424  74 71                     JZ 0x004db497
004DB426  8B 06                     MOV EAX,dword ptr [ESI]
004DB428  8B CE                     MOV ECX,ESI
004DB42A  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004DB42D  83 F8 3C                  CMP EAX,0x3c
004DB430  74 0C                     JZ 0x004db43e
004DB432  8B 16                     MOV EDX,dword ptr [ESI]
004DB434  8B CE                     MOV ECX,ESI
004DB436  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004DB439  83 F8 53                  CMP EAX,0x53
004DB43C  75 59                     JNZ 0x004db497
LAB_004db43e:
004DB43E  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
004DB441  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DB447  50                        PUSH EAX
004DB448  E8 6A 95 F2 FF            CALL 0x004049b7
004DB44D  25 FF 00 00 00            AND EAX,0xff
004DB452  48                        DEC EAX
004DB453  74 29                     JZ 0x004db47e
004DB455  48                        DEC EAX
004DB456  74 0B                     JZ 0x004db463
004DB458  48                        DEC EAX
004DB459  75 3C                     JNZ 0x004db497
004DB45B  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004DB45E  6A 63                     PUSH 0x63
004DB460  51                        PUSH ECX
004DB461  EB 06                     JMP 0x004db469
LAB_004db463:
004DB463  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
004DB466  6A 43                     PUSH 0x43
004DB468  52                        PUSH EDX
LAB_004db469:
004DB469  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DB46F  E8 F7 63 F2 FF            CALL 0x0040186b
004DB474  85 C0                     TEST EAX,EAX
004DB476  0F 85 00 02 00 00         JNZ 0x004db67c
004DB47C  EB 19                     JMP 0x004db497
LAB_004db47e:
004DB47E  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004DB481  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DB487  6A 42                     PUSH 0x42
004DB489  50                        PUSH EAX
004DB48A  E8 DC 63 F2 FF            CALL 0x0040186b
004DB48F  85 C0                     TEST EAX,EAX
004DB491  0F 85 E5 01 00 00         JNZ 0x004db67c
LAB_004db497:
004DB497  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004DB49A  43                        INC EBX
004DB49B  8B 11                     MOV EDX,dword ptr [ECX]
004DB49D  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
004DB4A0  03 D1                     ADD EDX,ECX
004DB4A2  3B DA                     CMP EBX,EDX
004DB4A4  0F 8E E2 FD FF FF         JLE 0x004db28c
LAB_004db4aa:
004DB4AA  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004DB4AD  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
004DB4B0  8B 00                     MOV EAX,dword ptr [EAX]
004DB4B2  8B D8                     MOV EBX,EAX
004DB4B4  2B D9                     SUB EBX,ECX
004DB4B6  8D 4C 08 FF               LEA ECX,[EAX + ECX*0x1 + -0x1]
004DB4BA  43                        INC EBX
004DB4BB  3B D9                     CMP EBX,ECX
004DB4BD  0F 8F 8A 01 00 00         JG 0x004db64d
LAB_004db4c3:
004DB4C3  85 DB                     TEST EBX,EBX
004DB4C5  0F 8C 6D 01 00 00         JL 0x004db638
004DB4CB  0F BF 15 42 B2 7F 00      MOVSX EDX,word ptr [0x007fb242]
004DB4D2  3B DA                     CMP EBX,EDX
004DB4D4  0F 8D 5E 01 00 00         JGE 0x004db638
004DB4DA  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004DB4DD  8B 38                     MOV EDI,dword ptr [EAX]
004DB4DF  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
004DB4E2  2B F8                     SUB EDI,EAX
004DB4E4  0F 88 A3 00 00 00         JS 0x004db58d
004DB4EA  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
004DB4F1  3B F9                     CMP EDI,ECX
004DB4F3  0F 8D 94 00 00 00         JGE 0x004db58d
004DB4F9  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004DB4FC  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
004DB502  6A 00                     PUSH 0x0
004DB504  52                        PUSH EDX
004DB505  53                        PUSH EBX
004DB506  57                        PUSH EDI
004DB507  E8 36 5F F2 FF            CALL 0x00401442
004DB50C  8B F0                     MOV ESI,EAX
004DB50E  85 F6                     TEST ESI,ESI
004DB510  74 7B                     JZ 0x004db58d
004DB512  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004DB515  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004DB518  3B C1                     CMP EAX,ECX
004DB51A  74 71                     JZ 0x004db58d
004DB51C  8B 16                     MOV EDX,dword ptr [ESI]
004DB51E  8B CE                     MOV ECX,ESI
004DB520  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004DB523  83 F8 3C                  CMP EAX,0x3c
004DB526  74 0C                     JZ 0x004db534
004DB528  8B 06                     MOV EAX,dword ptr [ESI]
004DB52A  8B CE                     MOV ECX,ESI
004DB52C  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004DB52F  83 F8 53                  CMP EAX,0x53
004DB532  75 59                     JNZ 0x004db58d
LAB_004db534:
004DB534  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004DB537  51                        PUSH ECX
004DB538  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DB53E  E8 74 94 F2 FF            CALL 0x004049b7
004DB543  25 FF 00 00 00            AND EAX,0xff
004DB548  48                        DEC EAX
004DB549  74 29                     JZ 0x004db574
004DB54B  48                        DEC EAX
004DB54C  74 1E                     JZ 0x004db56c
004DB54E  48                        DEC EAX
004DB54F  75 3C                     JNZ 0x004db58d
004DB551  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
004DB554  6A 63                     PUSH 0x63
004DB556  52                        PUSH EDX
LAB_004db557:
004DB557  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DB55D  E8 09 63 F2 FF            CALL 0x0040186b
004DB562  85 C0                     TEST EAX,EAX
004DB564  0F 85 19 01 00 00         JNZ 0x004db683
004DB56A  EB 21                     JMP 0x004db58d
LAB_004db56c:
004DB56C  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004DB56F  6A 43                     PUSH 0x43
004DB571  50                        PUSH EAX
004DB572  EB E3                     JMP 0x004db557
LAB_004db574:
004DB574  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004DB577  6A 42                     PUSH 0x42
004DB579  51                        PUSH ECX
004DB57A  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DB580  E8 E6 62 F2 FF            CALL 0x0040186b
004DB585  85 C0                     TEST EAX,EAX
004DB587  0F 85 F6 00 00 00         JNZ 0x004db683
LAB_004db58d:
004DB58D  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004DB590  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
004DB593  8B 3A                     MOV EDI,dword ptr [EDX]
004DB595  03 F8                     ADD EDI,EAX
004DB597  0F 88 9B 00 00 00         JS 0x004db638
004DB59D  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
004DB5A4  3B F8                     CMP EDI,EAX
004DB5A6  0F 8D 8C 00 00 00         JGE 0x004db638
004DB5AC  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004DB5AF  6A 00                     PUSH 0x0
004DB5B1  51                        PUSH ECX
004DB5B2  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
004DB5B8  53                        PUSH EBX
004DB5B9  57                        PUSH EDI
004DB5BA  E8 83 5E F2 FF            CALL 0x00401442
004DB5BF  8B F0                     MOV ESI,EAX
004DB5C1  85 F6                     TEST ESI,ESI
004DB5C3  74 73                     JZ 0x004db638
004DB5C5  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004DB5C8  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004DB5CB  3B C2                     CMP EAX,EDX
004DB5CD  74 69                     JZ 0x004db638
004DB5CF  8B 06                     MOV EAX,dword ptr [ESI]
004DB5D1  8B CE                     MOV ECX,ESI
004DB5D3  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004DB5D6  83 F8 3C                  CMP EAX,0x3c
004DB5D9  74 0C                     JZ 0x004db5e7
004DB5DB  8B 16                     MOV EDX,dword ptr [ESI]
004DB5DD  8B CE                     MOV ECX,ESI
004DB5DF  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004DB5E2  83 F8 53                  CMP EAX,0x53
004DB5E5  75 51                     JNZ 0x004db638
LAB_004db5e7:
004DB5E7  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
004DB5EA  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DB5F0  50                        PUSH EAX
004DB5F1  E8 C1 93 F2 FF            CALL 0x004049b7
004DB5F6  25 FF 00 00 00            AND EAX,0xff
004DB5FB  48                        DEC EAX
004DB5FC  74 25                     JZ 0x004db623
004DB5FE  48                        DEC EAX
004DB5FF  74 0B                     JZ 0x004db60c
004DB601  48                        DEC EAX
004DB602  75 34                     JNZ 0x004db638
004DB604  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004DB607  6A 63                     PUSH 0x63
004DB609  51                        PUSH ECX
004DB60A  EB 06                     JMP 0x004db612
LAB_004db60c:
004DB60C  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
004DB60F  6A 43                     PUSH 0x43
004DB611  52                        PUSH EDX
LAB_004db612:
004DB612  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DB618  E8 4E 62 F2 FF            CALL 0x0040186b
004DB61D  85 C0                     TEST EAX,EAX
004DB61F  75 62                     JNZ 0x004db683
004DB621  EB 15                     JMP 0x004db638
LAB_004db623:
004DB623  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004DB626  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DB62C  6A 42                     PUSH 0x42
004DB62E  50                        PUSH EAX
004DB62F  E8 37 62 F2 FF            CALL 0x0040186b
004DB634  85 C0                     TEST EAX,EAX
004DB636  75 4B                     JNZ 0x004db683
LAB_004db638:
004DB638  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004DB63B  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
004DB63E  43                        INC EBX
004DB63F  8B 11                     MOV EDX,dword ptr [ECX]
004DB641  8D 4C 02 FF               LEA ECX,[EDX + EAX*0x1 + -0x1]
004DB645  3B D9                     CMP EBX,ECX
004DB647  0F 8E 76 FE FF FF         JLE 0x004db4c3
LAB_004db64d:
004DB64D  66 8B 15 44 B2 7F 00      MOV DX,word ptr [0x007fb244]
004DB654  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004DB657  0F BF CA                  MOVSX ECX,DX
004DB65A  40                        INC EAX
004DB65B  49                        DEC ECX
004DB65C  3B C1                     CMP EAX,ECX
004DB65E  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
004DB661  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004DB664  0F 8C 0F FC FF FF         JL 0x004db279
LAB_004db66a:
004DB66A  41                        INC ECX
004DB66B  83 F9 07                  CMP ECX,0x7
004DB66E  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
004DB671  0F 8F 5E 01 00 00         JG 0x004db7d5
004DB677  E9 EA FB FF FF            JMP 0x004db266
LAB_004db67c:
004DB67C  8B CB                     MOV ECX,EBX
004DB67E  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
004DB681  EB 07                     JMP 0x004db68a
LAB_004db683:
004DB683  8B CF                     MOV ECX,EDI
004DB685  8B FB                     MOV EDI,EBX
004DB687  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
LAB_004db68a:
004DB68A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004DB68D  89 7D 18                  MOV dword ptr [EBP + 0x18],EDI
LAB_004db690:
004DB690  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
004DB693  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
004DB696  85 C9                     TEST ECX,ECX
004DB698  89 16                     MOV dword ptr [ESI],EDX
004DB69A  0F 8C 35 01 00 00         JL 0x004db7d5
004DB6A0  85 FF                     TEST EDI,EDI
004DB6A2  0F 8C 2D 01 00 00         JL 0x004db7d5
004DB6A8  85 C0                     TEST EAX,EAX
004DB6AA  0F 8C 25 01 00 00         JL 0x004db7d5
004DB6B0  33 C0                     XOR EAX,EAX
004DB6B2  8D 4D A4                  LEA ECX,[EBP + -0x5c]
LAB_004db6b5:
004DB6B5  89 01                     MOV dword ptr [ECX],EAX
004DB6B7  40                        INC EAX
004DB6B8  83 C1 04                  ADD ECX,0x4
004DB6BB  83 F8 15                  CMP EAX,0x15
004DB6BE  7C F5                     JL 0x004db6b5
004DB6C0  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
004DB6C3  BB 15 00 00 00            MOV EBX,0x15
LAB_004db6c8:
004DB6C8  8B 47 1C                  MOV EAX,dword ptr [EDI + 0x1c]
004DB6CB  33 D2                     XOR EDX,EDX
004DB6CD  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
004DB6D3  05 39 30 00 00            ADD EAX,0x3039
004DB6D8  B9 15 00 00 00            MOV ECX,0x15
004DB6DD  89 47 1C                  MOV dword ptr [EDI + 0x1c],EAX
004DB6E0  C1 E8 10                  SHR EAX,0x10
004DB6E3  F7 F1                     DIV ECX
004DB6E5  8B CA                     MOV ECX,EDX
LAB_004db6e7:
004DB6E7  8B 57 1C                  MOV EDX,dword ptr [EDI + 0x1c]
004DB6EA  BE 15 00 00 00            MOV ESI,0x15
004DB6EF  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
004DB6F5  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
004DB6FB  33 D2                     XOR EDX,EDX
004DB6FD  89 47 1C                  MOV dword ptr [EDI + 0x1c],EAX
004DB700  C1 E8 10                  SHR EAX,0x10
004DB703  F7 F6                     DIV ESI
004DB705  3B D1                     CMP EDX,ECX
004DB707  74 DE                     JZ 0x004db6e7
004DB709  8B 74 8D A4               MOV ESI,dword ptr [EBP + ECX*0x4 + -0x5c]
004DB70D  8D 44 8D A4               LEA EAX,[EBP + ECX*0x4 + -0x5c]
004DB711  8D 4C 95 A4               LEA ECX,[EBP + EDX*0x4 + -0x5c]
004DB715  4B                        DEC EBX
004DB716  8B 11                     MOV EDX,dword ptr [ECX]
004DB718  89 10                     MOV dword ptr [EAX],EDX
004DB71A  89 31                     MOV dword ptr [ECX],ESI
004DB71C  75 AA                     JNZ 0x004db6c8
004DB71E  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004DB721  33 D2                     XOR EDX,EDX
004DB723  BB 01 00 00 00            MOV EBX,0x1
004DB728  8B 41 1C                  MOV EAX,dword ptr [ECX + 0x1c]
004DB72B  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
004DB731  05 39 30 00 00            ADD EAX,0x3039
004DB736  89 41 1C                  MOV dword ptr [ECX + 0x1c],EAX
004DB739  B9 D2 00 00 00            MOV ECX,0xd2
004DB73E  C1 E8 10                  SHR EAX,0x10
004DB741  F7 F1                     DIV ECX
004DB743  33 C0                     XOR EAX,EAX
004DB745  8D 4D A4                  LEA ECX,[EBP + -0x5c]
LAB_004db748:
004DB748  2B 11                     SUB EDX,dword ptr [ECX]
004DB74A  85 D2                     TEST EDX,EDX
004DB74C  7E 0B                     JLE 0x004db759
004DB74E  40                        INC EAX
004DB74F  83 C1 04                  ADD ECX,0x4
004DB752  83 F8 15                  CMP EAX,0x15
004DB755  7C F1                     JL 0x004db748
004DB757  EB 04                     JMP 0x004db75d
LAB_004db759:
004DB759  8B 5C 85 A4               MOV EBX,dword ptr [EBP + EAX*0x4 + -0x5c]
LAB_004db75d:
004DB75D  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004DB760  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
004DB763  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
004DB769  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
004DB76F  33 D2                     XOR EDX,EDX
004DB771  89 41 1C                  MOV dword ptr [ECX + 0x1c],EAX
004DB774  B9 68 01 00 00            MOV ECX,0x168
004DB779  C1 E8 10                  SHR EAX,0x10
004DB77C  F7 F1                     DIV ECX
004DB77E  8B FA                     MOV EDI,EDX
004DB780  57                        PUSH EDI
004DB781  E8 CA 47 1D 00            CALL 0x006aff50
004DB786  0F AF C3                  IMUL EAX,EBX
004DB789  50                        PUSH EAX
004DB78A  E8 F1 5A 1D 00            CALL 0x006b1280
004DB78F  8B F0                     MOV ESI,EAX
004DB791  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004DB794  57                        PUSH EDI
004DB795  03 F0                     ADD ESI,EAX
004DB797  E8 BF 47 1D 00            CALL 0x006aff5b
004DB79C  0F AF C3                  IMUL EAX,EBX
004DB79F  50                        PUSH EAX
004DB7A0  E8 DB 5A 1D 00            CALL 0x006b1280
004DB7A5  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
004DB7A8  83 C4 10                  ADD ESP,0x10
004DB7AB  03 C2                     ADD EAX,EDX
004DB7AD  85 F6                     TEST ESI,ESI
004DB7AF  7C 24                     JL 0x004db7d5
004DB7B1  0F BF 15 40 B2 7F 00      MOVSX EDX,word ptr [0x007fb240]
004DB7B8  3B F2                     CMP ESI,EDX
004DB7BA  7D 19                     JGE 0x004db7d5
004DB7BC  85 C0                     TEST EAX,EAX
004DB7BE  7C 15                     JL 0x004db7d5
004DB7C0  0F BF 0D 42 B2 7F 00      MOVSX ECX,word ptr [0x007fb242]
004DB7C7  3B C1                     CMP EAX,ECX
004DB7C9  7D 0A                     JGE 0x004db7d5
004DB7CB  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004DB7CE  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004DB7D1  89 32                     MOV dword ptr [EDX],ESI
004DB7D3  89 01                     MOV dword ptr [ECX],EAX
LAB_004db7d5:
004DB7D5  5F                        POP EDI
004DB7D6  5E                        POP ESI
004DB7D7  5B                        POP EBX
004DB7D8  8B E5                     MOV ESP,EBP
004DB7DA  5D                        POP EBP
004DB7DB  C2 18 00                  RET 0x18
