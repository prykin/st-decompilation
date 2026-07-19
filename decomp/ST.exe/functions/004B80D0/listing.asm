TLOBaseTy::SetState:
004B80D0  55                        PUSH EBP
004B80D1  8B EC                     MOV EBP,ESP
004B80D3  83 EC 4C                  SUB ESP,0x4c
004B80D6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004B80DB  53                        PUSH EBX
004B80DC  56                        PUSH ESI
004B80DD  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
004B80E0  57                        PUSH EDI
004B80E1  8D 55 B8                  LEA EDX,[EBP + -0x48]
004B80E4  8D 4D B4                  LEA ECX,[EBP + -0x4c]
004B80E7  6A 00                     PUSH 0x0
004B80E9  52                        PUSH EDX
004B80EA  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
004B80ED  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004B80F3  E8 F8 56 27 00            CALL 0x0072d7f0
004B80F8  8B F0                     MOV ESI,EAX
004B80FA  83 C4 08                  ADD ESP,0x8
004B80FD  85 F6                     TEST ESI,ESI
004B80FF  0F 85 52 07 00 00         JNZ 0x004b8857
004B8105  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
004B8108  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
004B810B  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004B810E  85 DB                     TEST EBX,EBX
004B8110  0F 84 EF 00 00 00         JZ 0x004b8205
004B8116  57                        PUSH EDI
004B8117  8B CE                     MOV ECX,ESI
004B8119  E8 F3 91 F4 FF            CALL 0x00401311
004B811E  85 C0                     TEST EAX,EAX
004B8120  0F 85 DF 00 00 00         JNZ 0x004b8205
004B8126  8B 86 6C 04 00 00         MOV EAX,dword ptr [ESI + 0x46c]
004B812C  33 DB                     XOR EBX,EBX
004B812E  3B C3                     CMP EAX,EBX
004B8130  74 0E                     JZ 0x004b8140
004B8132  83 F8 01                  CMP EAX,0x1
004B8135  74 09                     JZ 0x004b8140
004B8137  83 F8 02                  CMP EAX,0x2
004B813A  74 04                     JZ 0x004b8140
004B813C  33 C0                     XOR EAX,EAX
004B813E  EB 05                     JMP 0x004b8145
LAB_004b8140:
004B8140  B8 01 00 00 00            MOV EAX,0x1
LAB_004b8145:
004B8145  3B C3                     CMP EAX,EBX
004B8147  0F 84 F6 06 00 00         JZ 0x004b8843
004B814D  83 BE 45 02 00 00 05      CMP dword ptr [ESI + 0x245],0x5
004B8154  75 1B                     JNZ 0x004b8171
004B8156  83 FF 02                  CMP EDI,0x2
004B8159  75 16                     JNZ 0x004b8171
004B815B  53                        PUSH EBX
004B815C  8B CE                     MOV ECX,ESI
004B815E  E8 AE 91 F4 FF            CALL 0x00401311
004B8163  85 C0                     TEST EAX,EAX
004B8165  74 0A                     JZ 0x004b8171
004B8167  6A 01                     PUSH 0x1
004B8169  53                        PUSH EBX
004B816A  8B CE                     MOV ECX,ESI
004B816C  E8 39 8F F4 FF            CALL 0x004010aa
LAB_004b8171:
004B8171  8B 86 45 02 00 00         MOV EAX,dword ptr [ESI + 0x245]
004B8177  83 F8 04                  CMP EAX,0x4
004B817A  75 11                     JNZ 0x004b818d
004B817C  83 FF 03                  CMP EDI,0x3
004B817F  75 0C                     JNZ 0x004b818d
004B8181  C7 86 49 02 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x249],0xffffffff
004B818B  EB 06                     JMP 0x004b8193
LAB_004b818d:
004B818D  89 BE 49 02 00 00         MOV dword ptr [ESI + 0x249],EDI
LAB_004b8193:
004B8193  39 9E 55 02 00 00         CMP dword ptr [ESI + 0x255],EBX
004B8199  74 22                     JZ 0x004b81bd
004B819B  3B C3                     CMP EAX,EBX
004B819D  75 1E                     JNZ 0x004b81bd
004B819F  83 BE 49 02 00 00 02      CMP dword ptr [ESI + 0x249],0x2
004B81A6  75 15                     JNZ 0x004b81bd
004B81A8  8B 8E 35 02 00 00         MOV ECX,dword ptr [ESI + 0x235]
004B81AE  39 1C 8D 78 27 79 00      CMP dword ptr [ECX*0x4 + 0x792778],EBX
004B81B5  74 06                     JZ 0x004b81bd
004B81B7  89 9E 75 02 00 00         MOV dword ptr [ESI + 0x275],EBX
LAB_004b81bd:
004B81BD  83 F8 04                  CMP EAX,0x4
004B81C0  0F 85 7D 06 00 00         JNZ 0x004b8843
004B81C6  39 9E DC 03 00 00         CMP dword ptr [ESI + 0x3dc],EBX
004B81CC  0F 84 71 06 00 00         JZ 0x004b8843
004B81D2  8B CE                     MOV ECX,ESI
004B81D4  E8 C5 CC F4 FF            CALL 0x00404e9e
004B81D9  85 C0                     TEST EAX,EAX
004B81DB  0F 84 62 06 00 00         JZ 0x004b8843
004B81E1  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
004B81E4  C7 86 FC 03 00 00 01 00 00 00  MOV dword ptr [ESI + 0x3fc],0x1
004B81EE  89 9E 00 04 00 00         MOV dword ptr [ESI + 0x400],EBX
004B81F4  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004B81FA  33 C0                     XOR EAX,EAX
004B81FC  5F                        POP EDI
004B81FD  5E                        POP ESI
004B81FE  5B                        POP EBX
004B81FF  8B E5                     MOV ESP,EBP
004B8201  5D                        POP EBP
004B8202  C2 08 00                  RET 0x8
LAB_004b8205:
004B8205  8B 96 45 02 00 00         MOV EDX,dword ptr [ESI + 0x245]
004B820B  C7 86 49 02 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x249],0xffffffff
004B8215  85 FF                     TEST EDI,EDI
004B8217  89 96 4D 02 00 00         MOV dword ptr [ESI + 0x24d],EDX
004B821D  89 BE 45 02 00 00         MOV dword ptr [ESI + 0x245],EDI
004B8223  74 13                     JZ 0x004b8238
004B8225  83 FF 05                  CMP EDI,0x5
004B8228  74 0E                     JZ 0x004b8238
004B822A  83 FF 06                  CMP EDI,0x6
004B822D  74 09                     JZ 0x004b8238
004B822F  8B CE                     MOV ECX,ESI
004B8231  E8 25 C9 F4 FF            CALL 0x00404b5b
004B8236  EB 07                     JMP 0x004b823f
LAB_004b8238:
004B8238  8B CE                     MOV ECX,ESI
004B823A  E8 E7 C6 F4 FF            CALL 0x00404926
LAB_004b823f:
004B823F  8B CE                     MOV ECX,ESI
004B8241  E8 61 A0 F4 FF            CALL 0x004022a7
004B8246  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004B824C  8B 0C 85 10 1A 79 00      MOV ECX,dword ptr [EAX*0x4 + 0x791a10]
004B8253  85 C9                     TEST ECX,ECX
004B8255  74 07                     JZ 0x004b825e
004B8257  8B CE                     MOV ECX,ESI
004B8259  E8 B1 97 F4 FF            CALL 0x00401a0f
LAB_004b825e:
004B825E  85 DB                     TEST EBX,EBX
004B8260  0F 84 B7 00 00 00         JZ 0x004b831d
004B8266  8B 86 45 02 00 00         MOV EAX,dword ptr [ESI + 0x245]
004B826C  48                        DEC EAX
004B826D  74 45                     JZ 0x004b82b4
004B826F  48                        DEC EAX
004B8270  74 26                     JZ 0x004b8298
004B8272  48                        DEC EAX
004B8273  0F 85 A4 00 00 00         JNZ 0x004b831d
004B8279  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004B827F  8B 16                     MOV EDX,dword ptr [ESI]
004B8281  8B 0C 85 F4 59 79 00      MOV ECX,dword ptr [EAX*0x4 + 0x7959f4]
004B8288  51                        PUSH ECX
004B8289  6A 03                     PUSH 0x3
004B828B  8B CE                     MOV ECX,ESI
004B828D  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
004B8293  E9 85 00 00 00            JMP 0x004b831d
LAB_004b8298:
004B8298  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004B829E  8B 16                     MOV EDX,dword ptr [ESI]
004B82A0  8B 0C 85 EC 58 79 00      MOV ECX,dword ptr [EAX*0x4 + 0x7958ec]
004B82A7  51                        PUSH ECX
004B82A8  6A 03                     PUSH 0x3
004B82AA  8B CE                     MOV ECX,ESI
004B82AC  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
004B82B2  EB 69                     JMP 0x004b831d
LAB_004b82b4:
004B82B4  8A 96 3D 02 00 00         MOV DL,byte ptr [ESI + 0x23d]
004B82BA  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004B82C0  52                        PUSH EDX
004B82C1  E8 F1 C6 F4 FF            CALL 0x004049b7
004B82C6  8A C8                     MOV CL,AL
004B82C8  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004B82CE  81 E1 FF 00 00 00         AND ECX,0xff
004B82D4  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
004B82D7  03 CA                     ADD ECX,EDX
004B82D9  8B 04 8D D0 55 79 00      MOV EAX,dword ptr [ECX*0x4 + 0x7955d0]
004B82E0  85 C0                     TEST EAX,EAX
004B82E2  74 39                     JZ 0x004b831d
004B82E4  8A 86 3D 02 00 00         MOV AL,byte ptr [ESI + 0x23d]
004B82EA  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004B82F0  8B 3E                     MOV EDI,dword ptr [ESI]
004B82F2  50                        PUSH EAX
004B82F3  E8 BF C6 F4 FF            CALL 0x004049b7
004B82F8  8A C8                     MOV CL,AL
004B82FA  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004B8300  81 E1 FF 00 00 00         AND ECX,0xff
004B8306  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
004B8309  03 CA                     ADD ECX,EDX
004B830B  8B 04 8D D0 55 79 00      MOV EAX,dword ptr [ECX*0x4 + 0x7955d0]
004B8312  8B CE                     MOV ECX,ESI
004B8314  50                        PUSH EAX
004B8315  6A 03                     PUSH 0x3
004B8317  FF 97 90 00 00 00         CALL dword ptr [EDI + 0x90]
LAB_004b831d:
004B831D  8B 86 45 02 00 00         MOV EAX,dword ptr [ESI + 0x245]
004B8323  B9 01 00 00 00            MOV ECX,0x1
004B8328  83 F8 06                  CMP EAX,0x6
004B832B  0F 87 73 04 00 00         JA 0x004b87a4
switchD_004b8331::switchD:
004B8331  FF 24 85 A0 88 4B 00      JMP dword ptr [EAX*0x4 + 0x4b88a0]
switchD_004b8331::caseD_0:
004B8338  8B 96 35 02 00 00         MOV EDX,dword ptr [ESI + 0x235]
004B833E  8B 04 95 78 27 79 00      MOV EAX,dword ptr [EDX*0x4 + 0x792778]
004B8345  85 C0                     TEST EAX,EAX
004B8347  74 27                     JZ 0x004b8370
004B8349  89 8E 75 02 00 00         MOV dword ptr [ESI + 0x275],ECX
004B834F  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004B8354  8B 90 E4 00 00 00         MOV EDX,dword ptr [EAX + 0xe4]
004B835A  8B 86 61 03 00 00         MOV EAX,dword ptr [ESI + 0x361]
004B8360  85 C0                     TEST EAX,EAX
004B8362  89 96 B5 02 00 00         MOV dword ptr [ESI + 0x2b5],EDX
004B8368  75 06                     JNZ 0x004b8370
004B836A  89 8E 61 02 00 00         MOV dword ptr [ESI + 0x261],ECX
LAB_004b8370:
004B8370  66 8B 86 B0 05 00 00      MOV AX,word ptr [ESI + 0x5b0]
004B8377  66 8B 8E B8 05 00 00      MOV CX,word ptr [ESI + 0x5b8]
004B837E  66 8B 96 B4 05 00 00      MOV DX,word ptr [ESI + 0x5b4]
004B8385  66 85 C0                  TEST AX,AX
004B8388  7C 51                     JL 0x004b83db
004B838A  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
004B8391  7D 48                     JGE 0x004b83db
004B8393  66 85 D2                  TEST DX,DX
004B8396  7C 43                     JL 0x004b83db
004B8398  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
004B839F  7D 3A                     JGE 0x004b83db
004B83A1  66 85 C9                  TEST CX,CX
004B83A4  7C 35                     JL 0x004b83db
004B83A6  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
004B83AD  7D 2C                     JGE 0x004b83db
004B83AF  0F BF 3D 78 B2 7F 00      MOVSX EDI,word ptr [0x007fb278]
004B83B6  0F BF D2                  MOVSX EDX,DX
004B83B9  0F AF FA                  IMUL EDI,EDX
004B83BC  0F BF 15 7E B2 7F 00      MOVSX EDX,word ptr [0x007fb27e]
004B83C3  0F BF C9                  MOVSX ECX,CX
004B83C6  0F AF D1                  IMUL EDX,ECX
004B83C9  03 FA                     ADD EDI,EDX
004B83CB  0F BF D0                  MOVSX EDX,AX
004B83CE  A1 80 B2 7F 00            MOV EAX,[0x007fb280]
004B83D3  03 FA                     ADD EDI,EDX
004B83D5  0F BF 04 78               MOVSX EAX,word ptr [EAX + EDI*0x2]
004B83D9  EB 03                     JMP 0x004b83de
LAB_004b83db:
004B83DB  83 C8 FF                  OR EAX,0xffffffff
LAB_004b83de:
004B83DE  85 C0                     TEST EAX,EAX
004B83E0  0F 85 DB 03 00 00         JNZ 0x004b87c1
004B83E6  8B 8E 35 02 00 00         MOV ECX,dword ptr [ESI + 0x235]
004B83EC  8B 86 B4 05 00 00         MOV EAX,dword ptr [ESI + 0x5b4]
004B83F2  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004B83F5  8B 1C 8D 30 1E 79 00      MOV EBX,dword ptr [ECX*0x4 + 0x791e30]
004B83FC  4B                        DEC EBX
004B83FD  F7 DB                     NEG EBX
004B83FF  1B DB                     SBB EBX,EBX
004B8401  83 C3 02                  ADD EBX,0x2
004B8404  8D 14 18                  LEA EDX,[EAX + EBX*0x1]
004B8407  3B C2                     CMP EAX,EDX
004B8409  7D 64                     JGE 0x004b846f
LAB_004b840b:
004B840B  8B BE B0 05 00 00         MOV EDI,dword ptr [ESI + 0x5b0]
004B8411  8D 04 1F                  LEA EAX,[EDI + EBX*0x1]
004B8414  3B F8                     CMP EDI,EAX
004B8416  7D 44                     JGE 0x004b845c
LAB_004b8418:
004B8418  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
004B841B  66 8B 96 B8 05 00 00      MOV DX,word ptr [ESI + 0x5b8]
004B8422  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004B8425  51                        PUSH ECX
004B8426  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
004B842C  52                        PUSH EDX
004B842D  50                        PUSH EAX
004B842E  57                        PUSH EDI
004B842F  E8 99 C8 F4 FF            CALL 0x00404ccd
004B8434  85 C0                     TEST EAX,EAX
004B8436  74 15                     JZ 0x004b844d
004B8438  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004B843E  6A 6A                     PUSH 0x6a
004B8440  68 20 C8 7A 00            PUSH 0x7ac820
004B8445  51                        PUSH ECX
004B8446  6A FB                     PUSH -0x5
004B8448  E8 F3 D9 1E 00            CALL 0x006a5e40
LAB_004b844d:
004B844D  8B 8E B0 05 00 00         MOV ECX,dword ptr [ESI + 0x5b0]
004B8453  8B D3                     MOV EDX,EBX
004B8455  47                        INC EDI
004B8456  03 D1                     ADD EDX,ECX
004B8458  3B FA                     CMP EDI,EDX
004B845A  7C BC                     JL 0x004b8418
LAB_004b845c:
004B845C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004B845F  8B 8E B4 05 00 00         MOV ECX,dword ptr [ESI + 0x5b4]
004B8465  40                        INC EAX
004B8466  03 CB                     ADD ECX,EBX
004B8468  3B C1                     CMP EAX,ECX
004B846A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004B846D  7C 9C                     JL 0x004b840b
LAB_004b846f:
004B846F  C7 86 51 02 00 00 01 00 00 00  MOV dword ptr [ESI + 0x251],0x1
004B8479  E9 43 03 00 00            JMP 0x004b87c1
switchD_004b8331::caseD_4:
004B847E  66 8B 86 B0 05 00 00      MOV AX,word ptr [ESI + 0x5b0]
004B8485  66 8B 8E B8 05 00 00      MOV CX,word ptr [ESI + 0x5b8]
004B848C  66 8B 96 B4 05 00 00      MOV DX,word ptr [ESI + 0x5b4]
004B8493  66 85 C0                  TEST AX,AX
004B8496  7C 52                     JL 0x004b84ea
004B8498  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
004B849F  7D 49                     JGE 0x004b84ea
004B84A1  66 85 D2                  TEST DX,DX
004B84A4  7C 44                     JL 0x004b84ea
004B84A6  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
004B84AD  7D 3B                     JGE 0x004b84ea
004B84AF  66 85 C9                  TEST CX,CX
004B84B2  7C 36                     JL 0x004b84ea
004B84B4  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
004B84BB  7D 2D                     JGE 0x004b84ea
004B84BD  0F BF 3D 78 B2 7F 00      MOVSX EDI,word ptr [0x007fb278]
004B84C4  0F BF D2                  MOVSX EDX,DX
004B84C7  0F AF FA                  IMUL EDI,EDX
004B84CA  0F BF 15 7E B2 7F 00      MOVSX EDX,word ptr [0x007fb27e]
004B84D1  0F BF D9                  MOVSX EBX,CX
004B84D4  0F AF D3                  IMUL EDX,EBX
004B84D7  03 FA                     ADD EDI,EDX
004B84D9  0F BF D0                  MOVSX EDX,AX
004B84DC  03 FA                     ADD EDI,EDX
004B84DE  8B 15 80 B2 7F 00         MOV EDX,dword ptr [0x007fb280]
004B84E4  0F BF 14 7A               MOVSX EDX,word ptr [EDX + EDI*0x2]
004B84E8  EB 03                     JMP 0x004b84ed
LAB_004b84ea:
004B84EA  83 CA FF                  OR EDX,0xffffffff
LAB_004b84ed:
004B84ED  33 FF                     XOR EDI,EDI
004B84EF  3B D7                     CMP EDX,EDI
004B84F1  74 37                     JZ 0x004b852a
004B84F3  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
004B84F6  52                        PUSH EDX
004B84F7  51                        PUSH ECX
004B84F8  66 8B 8E B4 05 00 00      MOV CX,word ptr [ESI + 0x5b4]
004B84FF  51                        PUSH ECX
004B8500  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
004B8506  50                        PUSH EAX
004B8507  E8 22 9E F4 FF            CALL 0x0040232e
004B850C  85 C0                     TEST EAX,EAX
004B850E  74 14                     JZ 0x004b8524
004B8510  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004B8515  6A 73                     PUSH 0x73
004B8517  68 20 C8 7A 00            PUSH 0x7ac820
004B851C  50                        PUSH EAX
004B851D  6A FB                     PUSH -0x5
004B851F  E8 1C D9 1E 00            CALL 0x006a5e40
LAB_004b8524:
004B8524  89 BE 51 02 00 00         MOV dword ptr [ESI + 0x251],EDI
LAB_004b852a:
004B852A  8B 8E 35 02 00 00         MOV ECX,dword ptr [ESI + 0x235]
004B8530  39 3C 8D 78 27 79 00      CMP dword ptr [ECX*0x4 + 0x792778],EDI
004B8537  0F 84 84 02 00 00         JZ 0x004b87c1
004B853D  89 BE 75 02 00 00         MOV dword ptr [ESI + 0x275],EDI
004B8543  89 BE 61 02 00 00         MOV dword ptr [ESI + 0x261],EDI
004B8549  E9 73 02 00 00            JMP 0x004b87c1
switchD_004b8331::caseD_6:
004B854E  C7 86 58 04 00 00 FE 00 00 00  MOV dword ptr [ESI + 0x458],0xfe
004B8558  E9 64 02 00 00            JMP 0x004b87c1
switchD_004b8331::caseD_1:
004B855D  8B 16                     MOV EDX,dword ptr [ESI]
004B855F  8B CE                     MOV ECX,ESI
004B8561  FF 52 08                  CALL dword ptr [EDX + 0x8]
004B8564  85 C0                     TEST EAX,EAX
004B8566  74 0C                     JZ 0x004b8574
004B8568  8B 06                     MOV EAX,dword ptr [ESI]
004B856A  6A 00                     PUSH 0x0
004B856C  8B CE                     MOV ECX,ESI
004B856E  FF 90 E8 00 00 00         CALL dword ptr [EAX + 0xe8]
LAB_004b8574:
004B8574  66 8B 86 B0 05 00 00      MOV AX,word ptr [ESI + 0x5b0]
004B857B  66 8B 8E B8 05 00 00      MOV CX,word ptr [ESI + 0x5b8]
004B8582  66 8B 96 B4 05 00 00      MOV DX,word ptr [ESI + 0x5b4]
004B8589  66 85 C0                  TEST AX,AX
004B858C  7C 51                     JL 0x004b85df
004B858E  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
004B8595  7D 48                     JGE 0x004b85df
004B8597  66 85 D2                  TEST DX,DX
004B859A  7C 43                     JL 0x004b85df
004B859C  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
004B85A3  7D 3A                     JGE 0x004b85df
004B85A5  66 85 C9                  TEST CX,CX
004B85A8  7C 35                     JL 0x004b85df
004B85AA  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
004B85B1  7D 2C                     JGE 0x004b85df
004B85B3  0F BF 3D 78 B2 7F 00      MOVSX EDI,word ptr [0x007fb278]
004B85BA  0F BF D2                  MOVSX EDX,DX
004B85BD  0F AF FA                  IMUL EDI,EDX
004B85C0  0F BF 15 7E B2 7F 00      MOVSX EDX,word ptr [0x007fb27e]
004B85C7  0F BF C9                  MOVSX ECX,CX
004B85CA  0F AF D1                  IMUL EDX,ECX
004B85CD  03 FA                     ADD EDI,EDX
004B85CF  0F BF D0                  MOVSX EDX,AX
004B85D2  A1 80 B2 7F 00            MOV EAX,[0x007fb280]
004B85D7  03 FA                     ADD EDI,EDX
004B85D9  0F BF 04 78               MOVSX EAX,word ptr [EAX + EDI*0x2]
004B85DD  EB 03                     JMP 0x004b85e2
LAB_004b85df:
004B85DF  83 C8 FF                  OR EAX,0xffffffff
LAB_004b85e2:
004B85E2  85 C0                     TEST EAX,EAX
004B85E4  0F 84 96 00 00 00         JZ 0x004b8680
004B85EA  8B 8E 35 02 00 00         MOV ECX,dword ptr [ESI + 0x235]
004B85F0  8B 86 B4 05 00 00         MOV EAX,dword ptr [ESI + 0x5b4]
004B85F6  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004B85F9  8B 1C 8D 30 1E 79 00      MOV EBX,dword ptr [ECX*0x4 + 0x791e30]
004B8600  4B                        DEC EBX
004B8601  F7 DB                     NEG EBX
004B8603  1B DB                     SBB EBX,EBX
004B8605  83 C3 02                  ADD EBX,0x2
004B8608  8D 14 18                  LEA EDX,[EAX + EBX*0x1]
004B860B  3B C2                     CMP EAX,EDX
004B860D  7D 67                     JGE 0x004b8676
LAB_004b860f:
004B860F  8B BE B0 05 00 00         MOV EDI,dword ptr [ESI + 0x5b0]
004B8615  8D 0C 1F                  LEA ECX,[EDI + EBX*0x1]
004B8618  3B F9                     CMP EDI,ECX
004B861A  7D 4A                     JGE 0x004b8666
LAB_004b861c:
004B861C  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
004B861F  66 8B 86 B8 05 00 00      MOV AX,word ptr [ESI + 0x5b8]
004B8626  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004B8629  52                        PUSH EDX
004B862A  50                        PUSH EAX
004B862B  51                        PUSH ECX
004B862C  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
004B8632  57                        PUSH EDI
004B8633  E8 F6 9C F4 FF            CALL 0x0040232e
004B8638  85 C0                     TEST EAX,EAX
004B863A  74 18                     JZ 0x004b8654
004B863C  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004B8642  68 87 00 00 00            PUSH 0x87
004B8647  68 20 C8 7A 00            PUSH 0x7ac820
004B864C  52                        PUSH EDX
004B864D  6A FB                     PUSH -0x5
004B864F  E8 EC D7 1E 00            CALL 0x006a5e40
LAB_004b8654:
004B8654  8B 96 B0 05 00 00         MOV EDX,dword ptr [ESI + 0x5b0]
004B865A  8B C3                     MOV EAX,EBX
004B865C  47                        INC EDI
004B865D  03 C2                     ADD EAX,EDX
004B865F  3B F8                     CMP EDI,EAX
004B8661  7C B9                     JL 0x004b861c
004B8663  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_004b8666:
004B8666  8B 8E B4 05 00 00         MOV ECX,dword ptr [ESI + 0x5b4]
004B866C  40                        INC EAX
004B866D  03 CB                     ADD ECX,EBX
004B866F  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004B8672  3B C1                     CMP EAX,ECX
004B8674  7C 99                     JL 0x004b860f
LAB_004b8676:
004B8676  C7 86 51 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x251],0x0
LAB_004b8680:
004B8680  8B 86 AC 05 00 00         MOV EAX,dword ptr [ESI + 0x5ac]
004B8686  83 C0 CE                  ADD EAX,-0x32
004B8689  83 F8 41                  CMP EAX,0x41
004B868C  0F 87 CB 00 00 00         JA 0x004b875d
004B8692  33 D2                     XOR EDX,EDX
004B8694  8A 90 10 89 4B 00         MOV DL,byte ptr [EAX + 0x4b8910]
switchD_004b869a::switchD:
004B869A  FF 24 95 BC 88 4B 00      JMP dword ptr [EDX*0x4 + 0x4b88bc]
switchD_004b869a::caseD_38:
004B86A1  8B CE                     MOV ECX,ESI
004B86A3  E8 3B D3 F4 FF            CALL 0x004059e3
004B86A8  E9 B0 00 00 00            JMP 0x004b875d
switchD_004b869a::caseD_32:
004B86AD  8B CE                     MOV ECX,ESI
004B86AF  E8 7C BD F4 FF            CALL 0x00404430
004B86B4  E9 A4 00 00 00            JMP 0x004b875d
switchD_004b869a::caseD_54:
004B86B9  8B CE                     MOV ECX,ESI
004B86BB  E8 AE C0 F4 FF            CALL 0x0040476e
switchD_004b869a::caseD_35:
004B86C0  8B CE                     MOV ECX,ESI
004B86C2  E8 A0 AE F4 FF            CALL 0x00403567
004B86C7  E9 91 00 00 00            JMP 0x004b875d
switchD_004b869a::caseD_50:
004B86CC  8B CE                     MOV ECX,ESI
004B86CE  E8 1D 99 F4 FF            CALL 0x00401ff0
004B86D3  E9 85 00 00 00            JMP 0x004b875d
switchD_004b869a::caseD_41:
004B86D8  8B CE                     MOV ECX,ESI
004B86DA  E8 4F 92 F4 FF            CALL 0x0040192e
004B86DF  EB 7C                     JMP 0x004b875d
switchD_004b869a::caseD_34:
004B86E1  8B CE                     MOV ECX,ESI
004B86E3  E8 51 9B F4 FF            CALL 0x00402239
004B86E8  EB 73                     JMP 0x004b875d
switchD_004b869a::caseD_48:
004B86EA  8B CE                     MOV ECX,ESI
004B86EC  E8 2D 89 F4 FF            CALL 0x0040101e
004B86F1  EB 6A                     JMP 0x004b875d
switchD_004b869a::caseD_6a:
004B86F3  8B CE                     MOV ECX,ESI
004B86F5  E8 13 AE F4 FF            CALL 0x0040350d
004B86FA  EB 61                     JMP 0x004b875d
switchD_004b869a::caseD_4c:
004B86FC  8B CE                     MOV ECX,ESI
004B86FE  E8 FA CC F4 FF            CALL 0x004053fd
004B8703  EB 58                     JMP 0x004b875d
switchD_004b869a::caseD_70:
004B8705  8B CE                     MOV ECX,ESI
004B8707  E8 77 A1 F4 FF            CALL 0x00402883
004B870C  EB 4F                     JMP 0x004b875d
switchD_004b869a::caseD_64:
004B870E  8B CE                     MOV ECX,ESI
004B8710  E8 06 C3 F4 FF            CALL 0x00404a1b
004B8715  EB 46                     JMP 0x004b875d
switchD_004b869a::caseD_69:
004B8717  8B CE                     MOV ECX,ESI
004B8719  E8 96 8E F4 FF            CALL 0x004015b4
004B871E  EB 3D                     JMP 0x004b875d
switchD_004b869a::caseD_68:
004B8720  8B CE                     MOV ECX,ESI
004B8722  E8 77 CC F4 FF            CALL 0x0040539e
004B8727  EB 34                     JMP 0x004b875d
switchD_004b869a::caseD_53:
004B8729  8B CE                     MOV ECX,ESI
004B872B  E8 52 AC F4 FF            CALL 0x00403382
004B8730  EB 2B                     JMP 0x004b875d
switchD_004b869a::caseD_6e:
004B8732  8B CE                     MOV ECX,ESI
004B8734  E8 9D 94 F4 FF            CALL 0x00401bd6
004B8739  EB 22                     JMP 0x004b875d
switchD_004b869a::caseD_37:
004B873B  8B CE                     MOV ECX,ESI
004B873D  E8 D7 BA F4 FF            CALL 0x00404219
004B8742  EB 19                     JMP 0x004b875d
switchD_004b869a::caseD_6f:
004B8744  8B CE                     MOV ECX,ESI
004B8746  E8 D8 8D F4 FF            CALL 0x00401523
004B874B  EB 10                     JMP 0x004b875d
switchD_004b869a::caseD_63:
004B874D  8B CE                     MOV ECX,ESI
004B874F  E8 4E D2 F4 FF            CALL 0x004059a2
004B8754  EB 07                     JMP 0x004b875d
switchD_004b869a::caseD_6d:
004B8756  8B CE                     MOV ECX,ESI
004B8758  E8 5D A6 F4 FF            CALL 0x00402dba
switchD_004b869a::caseD_33:
004B875D  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004B8763  8B 0C 85 94 4D 79 00      MOV ECX,dword ptr [EAX*0x4 + 0x794d94]
004B876A  85 C9                     TEST ECX,ECX
004B876C  74 07                     JZ 0x004b8775
004B876E  8B CE                     MOV ECX,ESI
004B8770  E8 3F 9D F4 FF            CALL 0x004024b4
LAB_004b8775:
004B8775  8B CE                     MOV ECX,ESI
004B8777  E8 ED 8D F4 FF            CALL 0x00401569
004B877C  8B CE                     MOV ECX,ESI
004B877E  E8 A2 CC F4 FF            CALL 0x00405425
004B8783  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
004B8789  6A 0F                     PUSH 0xf
004B878B  8B CF                     MOV ECX,EDI
004B878D  E8 D2 BA F4 FF            CALL 0x00404264
004B8792  6A 00                     PUSH 0x0
004B8794  8B CF                     MOV ECX,EDI
004B8796  E8 C9 BA F4 FF            CALL 0x00404264
004B879B  6A 01                     PUSH 0x1
004B879D  8B CF                     MOV ECX,EDI
004B879F  E8 C0 BA F4 FF            CALL 0x00404264
switchD_004b8331::caseD_2:
004B87A4  8B 8E 35 02 00 00         MOV ECX,dword ptr [ESI + 0x235]
004B87AA  33 C0                     XOR EAX,EAX
004B87AC  39 04 8D 78 27 79 00      CMP dword ptr [ECX*0x4 + 0x792778],EAX
004B87B3  74 0C                     JZ 0x004b87c1
004B87B5  89 86 75 02 00 00         MOV dword ptr [ESI + 0x275],EAX
004B87BB  89 86 61 02 00 00         MOV dword ptr [ESI + 0x261],EAX
LAB_004b87c1:
004B87C1  8B 86 AC 05 00 00         MOV EAX,dword ptr [ESI + 0x5ac]
004B87C7  83 C0 CA                  ADD EAX,-0x36
004B87CA  83 F8 3C                  CMP EAX,0x3c
004B87CD  77 4C                     JA 0x004b881b
004B87CF  33 D2                     XOR EDX,EDX
004B87D1  8A 90 74 89 4B 00         MOV DL,byte ptr [EAX + 0x4b8974]
switchD_004b87d7::switchD:
004B87D7  FF 24 95 54 89 4B 00      JMP dword ptr [EDX*0x4 + 0x4b8954]
switchD_004b87d7::caseD_45:
004B87DE  8B CE                     MOV ECX,ESI
004B87E0  E8 6C BE F4 FF            CALL 0x00404651
004B87E5  EB 34                     JMP 0x004b881b
switchD_004b87d7::caseD_4e:
004B87E7  8B CE                     MOV ECX,ESI
004B87E9  E8 75 8E F4 FF            CALL 0x00401663
004B87EE  EB 2B                     JMP 0x004b881b
switchD_004b87d7::caseD_72:
004B87F0  8B CE                     MOV ECX,ESI
004B87F2  E8 4F 97 F4 FF            CALL 0x00401f46
004B87F7  EB 22                     JMP 0x004b881b
switchD_004b87d7::caseD_36:
004B87F9  8B CE                     MOV ECX,ESI
004B87FB  E8 A6 A5 F4 FF            CALL 0x00402da6
004B8800  EB 19                     JMP 0x004b881b
switchD_004b87d7::caseD_6a:
004B8802  8B CE                     MOV ECX,ESI
004B8804  E8 8C 89 F4 FF            CALL 0x00401195
004B8809  EB 10                     JMP 0x004b881b
switchD_004b87d7::caseD_70:
004B880B  8B CE                     MOV ECX,ESI
004B880D  E8 69 AD F4 FF            CALL 0x0040357b
004B8812  EB 07                     JMP 0x004b881b
switchD_004b87d7::caseD_68:
004B8814  8B CE                     MOV ECX,ESI
004B8816  E8 F1 CB F4 FF            CALL 0x0040540c
switchD_004b87d7::caseD_37:
004B881B  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004B8821  8B 0C 85 94 4D 79 00      MOV ECX,dword ptr [EAX*0x4 + 0x794d94]
004B8828  85 C9                     TEST ECX,ECX
004B882A  74 07                     JZ 0x004b8833
004B882C  8B CE                     MOV ECX,ESI
004B882E  E8 6D A1 F4 FF            CALL 0x004029a0
LAB_004b8833:
004B8833  8B CE                     MOV ECX,ESI
004B8835  E8 E9 A5 F4 FF            CALL 0x00402e23
004B883A  6A 01                     PUSH 0x1
004B883C  8B CE                     MOV ECX,ESI
004B883E  E8 B4 A4 F4 FF            CALL 0x00402cf7
LAB_004b8843:
004B8843  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
004B8846  33 C0                     XOR EAX,EAX
004B8848  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004B884E  5F                        POP EDI
004B884F  5E                        POP ESI
004B8850  5B                        POP EBX
004B8851  8B E5                     MOV ESP,EBP
004B8853  5D                        POP EBP
004B8854  C2 08 00                  RET 0x8
LAB_004b8857:
004B8857  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004B885A  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
004B885D  50                        PUSH EAX
004B885E  68 F0 C7 7A 00            PUSH 0x7ac7f0
004B8863  56                        PUSH ESI
004B8864  6A 00                     PUSH 0x0
004B8866  68 E1 00 00 00            PUSH 0xe1
004B886B  68 20 C8 7A 00            PUSH 0x7ac820
004B8870  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004B8876  E8 55 4C 1F 00            CALL 0x006ad4d0
004B887B  83 C4 18                  ADD ESP,0x18
004B887E  85 C0                     TEST EAX,EAX
004B8880  74 01                     JZ 0x004b8883
004B8882  CC                        INT3
LAB_004b8883:
004B8883  68 E2 00 00 00            PUSH 0xe2
004B8888  68 20 C8 7A 00            PUSH 0x7ac820
004B888D  6A 00                     PUSH 0x0
004B888F  56                        PUSH ESI
004B8890  E8 AB D5 1E 00            CALL 0x006a5e40
004B8895  8B C6                     MOV EAX,ESI
004B8897  5F                        POP EDI
004B8898  5E                        POP ESI
004B8899  5B                        POP EBX
004B889A  8B E5                     MOV ESP,EBP
004B889C  5D                        POP EBP
004B889D  C2 08 00                  RET 0x8
