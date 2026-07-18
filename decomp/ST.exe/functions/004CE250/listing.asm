FUN_004ce250:
004CE250  55                        PUSH EBP
004CE251  8B EC                     MOV EBP,ESP
004CE253  51                        PUSH ECX
004CE254  53                        PUSH EBX
004CE255  56                        PUSH ESI
004CE256  57                        PUSH EDI
004CE257  8B F9                     MOV EDI,ECX
004CE259  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
004CE260  8B 87 D3 05 00 00         MOV EAX,dword ptr [EDI + 0x5d3]
004CE266  85 C0                     TEST EAX,EAX
004CE268  0F 84 F7 02 00 00         JZ 0x004ce565
004CE26E  8B 8F D4 04 00 00         MOV ECX,dword ptr [EDI + 0x4d4]
004CE274  85 C9                     TEST ECX,ECX
004CE276  0F 85 E9 02 00 00         JNZ 0x004ce565
004CE27C  8D 4D FC                  LEA ECX,[EBP + -0x4]
004CE27F  51                        PUSH ECX
004CE280  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004CE286  50                        PUSH EAX
004CE287  E8 44 80 21 00            CALL 0x006e62d0
004CE28C  85 C0                     TEST EAX,EAX
004CE28E  0F 85 D1 02 00 00         JNZ 0x004ce565
004CE294  8B 57 18                  MOV EDX,dword ptr [EDI + 0x18]
004CE297  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004CE29A  52                        PUSH EDX
004CE29B  E8 98 4F F3 FF            CALL 0x00403238
004CE2A0  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
004CE2A3  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004CE2A6  50                        PUSH EAX
004CE2A7  E8 11 4D F3 FF            CALL 0x00402fbd
004CE2AC  89 87 D4 04 00 00         MOV dword ptr [EDI + 0x4d4],EAX
004CE2B2  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004CE2B5  85 C0                     TEST EAX,EAX
004CE2B7  0F 84 A8 02 00 00         JZ 0x004ce565
004CE2BD  8B 87 B4 05 00 00         MOV EAX,dword ptr [EDI + 0x5b4]
004CE2C3  8B 9F B0 05 00 00         MOV EBX,dword ptr [EDI + 0x5b0]
004CE2C9  48                        DEC EAX
004CE2CA  0F 88 99 00 00 00         JS 0x004ce369
004CE2D0  66 8B 8F B8 05 00 00      MOV CX,word ptr [EDI + 0x5b8]
004CE2D7  66 85 DB                  TEST BX,BX
004CE2DA  0F 8C 89 00 00 00         JL 0x004ce369
004CE2E0  66 8B 15 40 B2 7F 00      MOV DX,word ptr [0x007fb240]
004CE2E7  66 3B DA                  CMP BX,DX
004CE2EA  7D 7D                     JGE 0x004ce369
004CE2EC  66 85 C0                  TEST AX,AX
004CE2EF  7C 78                     JL 0x004ce369
004CE2F1  66 3B 05 42 B2 7F 00      CMP AX,word ptr [0x007fb242]
004CE2F8  7D 6F                     JGE 0x004ce369
004CE2FA  66 85 C9                  TEST CX,CX
004CE2FD  7C 6A                     JL 0x004ce369
004CE2FF  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
004CE306  7D 61                     JGE 0x004ce369
004CE308  0F BF 35 46 B2 7F 00      MOVSX ESI,word ptr [0x007fb246]
004CE30F  0F BF C9                  MOVSX ECX,CX
004CE312  0F BF D2                  MOVSX EDX,DX
004CE315  0F AF F1                  IMUL ESI,ECX
004CE318  0F BF C0                  MOVSX EAX,AX
004CE31B  0F AF D0                  IMUL EDX,EAX
004CE31E  0F BF CB                  MOVSX ECX,BX
004CE321  03 F2                     ADD ESI,EDX
004CE323  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
004CE329  03 F1                     ADD ESI,ECX
004CE32B  8B 34 F2                  MOV ESI,dword ptr [EDX + ESI*0x8]
004CE32E  85 F6                     TEST ESI,ESI
004CE330  74 37                     JZ 0x004ce369
004CE332  8B 06                     MOV EAX,dword ptr [ESI]
004CE334  8B CE                     MOV ECX,ESI
004CE336  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004CE339  83 F8 54                  CMP EAX,0x54
004CE33C  7C 2B                     JL 0x004ce369
004CE33E  8B 16                     MOV EDX,dword ptr [ESI]
004CE340  8B CE                     MOV ECX,ESI
004CE342  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004CE345  83 F8 5A                  CMP EAX,0x5a
004CE348  7F 1F                     JG 0x004ce369
004CE34A  8B 86 D3 05 00 00         MOV EAX,dword ptr [ESI + 0x5d3]
004CE350  85 C0                     TEST EAX,EAX
004CE352  75 15                     JNZ 0x004ce369
004CE354  8B 87 D3 05 00 00         MOV EAX,dword ptr [EDI + 0x5d3]
004CE35A  6A 01                     PUSH 0x1
004CE35C  8B CE                     MOV ECX,ESI
004CE35E  89 86 D3 05 00 00         MOV dword ptr [ESI + 0x5d3],EAX
004CE364  E8 49 52 F3 FF            CALL 0x004035b2
LAB_004ce369:
004CE369  66 8B 35 42 B2 7F 00      MOV SI,word ptr [0x007fb242]
004CE370  8B 87 B4 05 00 00         MOV EAX,dword ptr [EDI + 0x5b4]
004CE376  0F BF CE                  MOVSX ECX,SI
004CE379  40                        INC EAX
004CE37A  3B C1                     CMP EAX,ECX
004CE37C  0F 8D 95 00 00 00         JGE 0x004ce417
004CE382  66 8B 8F B8 05 00 00      MOV CX,word ptr [EDI + 0x5b8]
004CE389  66 85 DB                  TEST BX,BX
004CE38C  0F 8C 85 00 00 00         JL 0x004ce417
004CE392  66 8B 15 40 B2 7F 00      MOV DX,word ptr [0x007fb240]
004CE399  66 3B DA                  CMP BX,DX
004CE39C  7D 79                     JGE 0x004ce417
004CE39E  66 85 C0                  TEST AX,AX
004CE3A1  7C 74                     JL 0x004ce417
004CE3A3  66 3B C6                  CMP AX,SI
004CE3A6  7D 6F                     JGE 0x004ce417
004CE3A8  66 85 C9                  TEST CX,CX
004CE3AB  7C 6A                     JL 0x004ce417
004CE3AD  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
004CE3B4  7D 61                     JGE 0x004ce417
004CE3B6  0F BF 35 46 B2 7F 00      MOVSX ESI,word ptr [0x007fb246]
004CE3BD  0F BF C9                  MOVSX ECX,CX
004CE3C0  0F BF D2                  MOVSX EDX,DX
004CE3C3  0F AF F1                  IMUL ESI,ECX
004CE3C6  0F BF C0                  MOVSX EAX,AX
004CE3C9  0F AF D0                  IMUL EDX,EAX
004CE3CC  0F BF CB                  MOVSX ECX,BX
004CE3CF  03 F2                     ADD ESI,EDX
004CE3D1  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
004CE3D7  03 F1                     ADD ESI,ECX
004CE3D9  8B 34 F2                  MOV ESI,dword ptr [EDX + ESI*0x8]
004CE3DC  85 F6                     TEST ESI,ESI
004CE3DE  74 37                     JZ 0x004ce417
004CE3E0  8B 06                     MOV EAX,dword ptr [ESI]
004CE3E2  8B CE                     MOV ECX,ESI
004CE3E4  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004CE3E7  83 F8 54                  CMP EAX,0x54
004CE3EA  7C 2B                     JL 0x004ce417
004CE3EC  8B 16                     MOV EDX,dword ptr [ESI]
004CE3EE  8B CE                     MOV ECX,ESI
004CE3F0  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004CE3F3  83 F8 5A                  CMP EAX,0x5a
004CE3F6  7F 1F                     JG 0x004ce417
004CE3F8  8B 86 D3 05 00 00         MOV EAX,dword ptr [ESI + 0x5d3]
004CE3FE  85 C0                     TEST EAX,EAX
004CE400  75 15                     JNZ 0x004ce417
004CE402  8B 87 D3 05 00 00         MOV EAX,dword ptr [EDI + 0x5d3]
004CE408  6A 01                     PUSH 0x1
004CE40A  8B CE                     MOV ECX,ESI
004CE40C  89 86 D3 05 00 00         MOV dword ptr [ESI + 0x5d3],EAX
004CE412  E8 9B 51 F3 FF            CALL 0x004035b2
LAB_004ce417:
004CE417  8B 87 B0 05 00 00         MOV EAX,dword ptr [EDI + 0x5b0]
004CE41D  8B 9F B4 05 00 00         MOV EBX,dword ptr [EDI + 0x5b4]
004CE423  48                        DEC EAX
004CE424  0F 88 98 00 00 00         JS 0x004ce4c2
004CE42A  66 8B 8F B8 05 00 00      MOV CX,word ptr [EDI + 0x5b8]
004CE431  66 85 C0                  TEST AX,AX
004CE434  0F 8C 88 00 00 00         JL 0x004ce4c2
004CE43A  66 8B 15 40 B2 7F 00      MOV DX,word ptr [0x007fb240]
004CE441  66 3B C2                  CMP AX,DX
004CE444  7D 7C                     JGE 0x004ce4c2
004CE446  66 85 DB                  TEST BX,BX
004CE449  7C 77                     JL 0x004ce4c2
004CE44B  66 3B 1D 42 B2 7F 00      CMP BX,word ptr [0x007fb242]
004CE452  7D 6E                     JGE 0x004ce4c2
004CE454  66 85 C9                  TEST CX,CX
004CE457  7C 69                     JL 0x004ce4c2
004CE459  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
004CE460  7D 60                     JGE 0x004ce4c2
004CE462  0F BF 35 46 B2 7F 00      MOVSX ESI,word ptr [0x007fb246]
004CE469  0F BF C9                  MOVSX ECX,CX
004CE46C  0F AF F1                  IMUL ESI,ECX
004CE46F  0F BF D2                  MOVSX EDX,DX
004CE472  0F BF CB                  MOVSX ECX,BX
004CE475  0F AF D1                  IMUL EDX,ECX
004CE478  03 F2                     ADD ESI,EDX
004CE47A  0F BF D0                  MOVSX EDX,AX
004CE47D  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
004CE482  03 F2                     ADD ESI,EDX
004CE484  8B 34 F0                  MOV ESI,dword ptr [EAX + ESI*0x8]
004CE487  85 F6                     TEST ESI,ESI
004CE489  74 37                     JZ 0x004ce4c2
004CE48B  8B 16                     MOV EDX,dword ptr [ESI]
004CE48D  8B CE                     MOV ECX,ESI
004CE48F  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004CE492  83 F8 54                  CMP EAX,0x54
004CE495  7C 2B                     JL 0x004ce4c2
004CE497  8B 06                     MOV EAX,dword ptr [ESI]
004CE499  8B CE                     MOV ECX,ESI
004CE49B  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004CE49E  83 F8 5A                  CMP EAX,0x5a
004CE4A1  7F 1F                     JG 0x004ce4c2
004CE4A3  8B 86 D3 05 00 00         MOV EAX,dword ptr [ESI + 0x5d3]
004CE4A9  85 C0                     TEST EAX,EAX
004CE4AB  75 15                     JNZ 0x004ce4c2
004CE4AD  8B 8F D3 05 00 00         MOV ECX,dword ptr [EDI + 0x5d3]
004CE4B3  6A 01                     PUSH 0x1
004CE4B5  89 8E D3 05 00 00         MOV dword ptr [ESI + 0x5d3],ECX
004CE4BB  8B CE                     MOV ECX,ESI
004CE4BD  E8 F0 50 F3 FF            CALL 0x004035b2
LAB_004ce4c2:
004CE4C2  66 8B 35 40 B2 7F 00      MOV SI,word ptr [0x007fb240]
004CE4C9  8B 87 B0 05 00 00         MOV EAX,dword ptr [EDI + 0x5b0]
004CE4CF  0F BF D6                  MOVSX EDX,SI
004CE4D2  40                        INC EAX
004CE4D3  3B C2                     CMP EAX,EDX
004CE4D5  0F 8D 8A 00 00 00         JGE 0x004ce565
004CE4DB  66 8B 8F B8 05 00 00      MOV CX,word ptr [EDI + 0x5b8]
004CE4E2  66 85 C0                  TEST AX,AX
004CE4E5  7C 7E                     JL 0x004ce565
004CE4E7  66 3B C6                  CMP AX,SI
004CE4EA  7D 79                     JGE 0x004ce565
004CE4EC  66 85 DB                  TEST BX,BX
004CE4EF  7C 74                     JL 0x004ce565
004CE4F1  66 3B 1D 42 B2 7F 00      CMP BX,word ptr [0x007fb242]
004CE4F8  7D 6B                     JGE 0x004ce565
004CE4FA  66 85 C9                  TEST CX,CX
004CE4FD  7C 66                     JL 0x004ce565
004CE4FF  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
004CE506  7D 5D                     JGE 0x004ce565
004CE508  0F BF 35 46 B2 7F 00      MOVSX ESI,word ptr [0x007fb246]
004CE50F  0F BF C9                  MOVSX ECX,CX
004CE512  0F AF F1                  IMUL ESI,ECX
004CE515  0F BF CB                  MOVSX ECX,BX
004CE518  0F AF CA                  IMUL ECX,EDX
004CE51B  0F BF D0                  MOVSX EDX,AX
004CE51E  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
004CE523  03 F1                     ADD ESI,ECX
004CE525  03 F2                     ADD ESI,EDX
004CE527  8B 34 F0                  MOV ESI,dword ptr [EAX + ESI*0x8]
004CE52A  85 F6                     TEST ESI,ESI
004CE52C  74 37                     JZ 0x004ce565
004CE52E  8B 16                     MOV EDX,dword ptr [ESI]
004CE530  8B CE                     MOV ECX,ESI
004CE532  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004CE535  83 F8 54                  CMP EAX,0x54
004CE538  7C 2B                     JL 0x004ce565
004CE53A  8B 06                     MOV EAX,dword ptr [ESI]
004CE53C  8B CE                     MOV ECX,ESI
004CE53E  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004CE541  83 F8 5A                  CMP EAX,0x5a
004CE544  7F 1F                     JG 0x004ce565
004CE546  8B 86 D3 05 00 00         MOV EAX,dword ptr [ESI + 0x5d3]
004CE54C  85 C0                     TEST EAX,EAX
004CE54E  75 15                     JNZ 0x004ce565
004CE550  8B 8F D3 05 00 00         MOV ECX,dword ptr [EDI + 0x5d3]
004CE556  6A 01                     PUSH 0x1
004CE558  89 8E D3 05 00 00         MOV dword ptr [ESI + 0x5d3],ECX
004CE55E  8B CE                     MOV ECX,ESI
004CE560  E8 4D 50 F3 FF            CALL 0x004035b2
LAB_004ce565:
004CE565  5F                        POP EDI
004CE566  5E                        POP ESI
004CE567  33 C0                     XOR EAX,EAX
004CE569  5B                        POP EBX
004CE56A  8B E5                     MOV ESP,EBP
004CE56C  5D                        POP EBP
004CE56D  C2 04 00                  RET 0x4
