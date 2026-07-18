FUN_0069c360:
0069C360  55                        PUSH EBP
0069C361  8B EC                     MOV EBP,ESP
0069C363  83 EC 54                  SUB ESP,0x54
0069C366  53                        PUSH EBX
0069C367  56                        PUSH ESI
0069C368  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0069C36B  33 C0                     XOR EAX,EAX
0069C36D  85 F6                     TEST ESI,ESI
0069C36F  57                        PUSH EDI
0069C370  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
0069C373  0F 84 40 02 00 00         JZ 0x0069c5b9
0069C379  8B 91 FF 56 00 00         MOV EDX,dword ptr [ECX + 0x56ff]
0069C37F  85 D2                     TEST EDX,EDX
0069C381  0F 84 32 02 00 00         JZ 0x0069c5b9
0069C387  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
0069C38A  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0069C38D  85 DB                     TEST EBX,EBX
0069C38F  0F 8E E1 00 00 00         JLE 0x0069c476
0069C395  8D 14 BF                  LEA EDX,[EDI + EDI*0x4]
0069C398  8D 0C FD 00 00 00 00      LEA ECX,[EDI*0x8 + 0x0]
0069C39F  2B CF                     SUB ECX,EDI
0069C3A1  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0069C3A4  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
0069C3A7  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
0069C3AA  D1 E1                     SHL ECX,0x1
0069C3AC  C1 E2 04                  SHL EDX,0x4
0069C3AF  83 C6 06                  ADD ESI,0x6
0069C3B2  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
0069C3B5  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
0069C3B8  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
LAB_0069c3bb:
0069C3BB  85 FF                     TEST EDI,EDI
0069C3BD  0F 8E 93 00 00 00         JLE 0x0069c456
0069C3C3  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0069C3C6  33 F6                     XOR ESI,ESI
0069C3C8  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
0069C3CB  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
0069C3CE  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
LAB_0069c3d1:
0069C3D1  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
0069C3D4  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
0069C3DB  8B 8A FF 56 00 00         MOV ECX,dword ptr [EDX + 0x56ff]
0069C3E1  8D 14 30                  LEA EDX,[EAX + ESI*0x1]
0069C3E4  03 C6                     ADD EAX,ESI
0069C3E6  8A 1C 0A                  MOV BL,byte ptr [EDX + ECX*0x1]
0069C3E9  8D 14 BF                  LEA EDX,[EDI + EDI*0x4]
0069C3EC  C1 E2 02                  SHL EDX,0x2
0069C3EF  88 5D D8                  MOV byte ptr [EBP + -0x28],BL
0069C3F2  03 C1                     ADD EAX,ECX
LAB_0069c3f4:
0069C3F4  33 C9                     XOR ECX,ECX
0069C3F6  8B F0                     MOV ESI,EAX
LAB_0069c3f8:
0069C3F8  3A 1E                     CMP BL,byte ptr [ESI]
0069C3FA  0F 85 51 01 00 00         JNZ 0x0069c551
0069C400  41                        INC ECX
0069C401  46                        INC ESI
0069C402  83 F9 14                  CMP ECX,0x14
0069C405  7C F1                     JL 0x0069c3f8
0069C407  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0069C40A  03 C2                     ADD EAX,EDX
0069C40C  41                        INC ECX
0069C40D  83 F9 14                  CMP ECX,0x14
0069C410  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0069C413  7C DF                     JL 0x0069c3f4
0069C415  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
0069C418  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0069C41B  81 E1 FF 00 00 00         AND ECX,0xff
0069C421  89 48 FC                  MOV dword ptr [EAX + -0x4],ECX
0069C424  C6 40 FA 00               MOV byte ptr [EAX + -0x6],0x0
LAB_0069c428:
0069C428  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
0069C42B  C7 00 FF FF FF FF         MOV dword ptr [EAX],0xffffffff
0069C431  C7 40 04 FF FF FF FF      MOV dword ptr [EAX + 0x4],0xffffffff
0069C438  83 C0 0E                  ADD EAX,0xe
0069C43B  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
0069C43E  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0069C441  83 C6 14                  ADD ESI,0x14
0069C444  48                        DEC EAX
0069C445  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0069C448  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0069C44B  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
0069C44E  75 81                     JNZ 0x0069c3d1
0069C450  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
0069C453  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
LAB_0069c456:
0069C456  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
0069C459  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
0069C45C  03 C2                     ADD EAX,EDX
0069C45E  03 D9                     ADD EBX,ECX
0069C460  4E                        DEC ESI
0069C461  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0069C464  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0069C467  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
0069C46A  0F 85 4B FF FF FF         JNZ 0x0069c3bb
0069C470  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
0069C473  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
LAB_0069c476:
0069C476  33 C0                     XOR EAX,EAX
0069C478  3B D8                     CMP EBX,EAX
0069C47A  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0069C47D  0F 8E 31 01 00 00         JLE 0x0069c5b4
0069C483  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0069C486  8D 04 FD 00 00 00 00      LEA EAX,[EDI*0x8 + 0x0]
0069C48D  2B C7                     SUB EAX,EDI
0069C48F  33 DB                     XOR EBX,EBX
0069C491  D1 E0                     SHL EAX,0x1
0069C493  83 C6 02                  ADD ESI,0x2
0069C496  89 5D D8                  MOV dword ptr [EBP + -0x28],EBX
0069C499  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
0069C49C  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
LAB_0069c49f:
0069C49F  85 FF                     TEST EDI,EDI
0069C4A1  C7 45 0C 00 00 00 00      MOV dword ptr [EBP + 0xc],0x0
0069C4A8  0F 8E DC 00 00 00         JLE 0x0069c58a
0069C4AE  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0069C4B1  89 5D DC                  MOV dword ptr [EBP + -0x24],EBX
0069C4B4  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_0069c4b7:
0069C4B7  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0069C4BA  8D 55 AC                  LEA EDX,[EBP + -0x54]
0069C4BD  6A 00                     PUSH 0x0
0069C4BF  52                        PUSH EDX
0069C4C0  8B 08                     MOV ECX,dword ptr [EAX]
0069C4C2  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0069C4C5  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
0069C4C8  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0069C4CB  03 C1                     ADD EAX,ECX
0069C4CD  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0069C4D0  57                        PUSH EDI
0069C4D1  50                        PUSH EAX
0069C4D2  E8 AA 97 D6 FF            CALL 0x00405c81
0069C4D7  33 F6                     XOR ESI,ESI
0069C4D9  3B C6                     CMP EAX,ESI
0069C4DB  89 75 E0                  MOV dword ptr [EBP + -0x20],ESI
0069C4DE  7E 56                     JLE 0x0069c536
0069C4E0  8D 55 AC                  LEA EDX,[EBP + -0x54]
0069C4E3  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0069C4E6  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_0069c4e9:
0069C4E9  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0069C4EC  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0069C4EF  8B 08                     MOV ECX,dword ptr [EAX]
0069C4F1  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
0069C4F4  8D 14 CD 00 00 00 00      LEA EDX,[ECX*0x8 + 0x0]
0069C4FB  2B D1                     SUB EDX,ECX
0069C4FD  39 44 53 02               CMP dword ptr [EBX + EDX*0x2 + 0x2],EAX
0069C501  75 1E                     JNZ 0x0069c521
0069C503  8B C1                     MOV EAX,ECX
0069C505  46                        INC ESI
0069C506  99                        CDQ
0069C507  F7 FF                     IDIV EDI
0069C509  2B 55 0C                  SUB EDX,dword ptr [EBP + 0xc]
0069C50C  78 13                     JS 0x0069c521
0069C50E  8B C1                     MOV EAX,ECX
0069C510  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0069C513  99                        CDQ
0069C514  F7 FF                     IDIV EDI
0069C516  2B C1                     SUB EAX,ECX
0069C518  78 07                     JS 0x0069c521
0069C51A  C7 45 E0 01 00 00 00      MOV dword ptr [EBP + -0x20],0x1
LAB_0069c521:
0069C521  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0069C524  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0069C527  83 C1 04                  ADD ECX,0x4
0069C52A  48                        DEC EAX
0069C52B  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0069C52E  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0069C531  75 B6                     JNZ 0x0069c4e9
0069C533  8B 5D DC                  MOV EBX,dword ptr [EBP + -0x24]
LAB_0069c536:
0069C536  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0069C539  83 FE 08                  CMP ESI,0x8
0069C53C  C6 44 03 01 00            MOV byte ptr [EBX + EAX*0x1 + 0x1],0x0
0069C541  74 21                     JZ 0x0069c564
0069C543  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0069C546  85 C9                     TEST ECX,ECX
0069C548  74 1F                     JZ 0x0069c569
0069C54A  C6 44 03 01 08            MOV byte ptr [EBX + EAX*0x1 + 0x1],0x8
0069C54F  EB 18                     JMP 0x0069c569
LAB_0069c551:
0069C551  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0069C554  C7 40 FC FF 00 00 00      MOV dword ptr [EAX + -0x4],0xff
0069C55B  C6 40 FA 01               MOV byte ptr [EAX + -0x6],0x1
0069C55F  E9 C4 FE FF FF            JMP 0x0069c428
LAB_0069c564:
0069C564  C6 44 03 01 04            MOV byte ptr [EBX + EAX*0x1 + 0x1],0x4
LAB_0069c569:
0069C569  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0069C56C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0069C56F  40                        INC EAX
0069C570  83 C3 0E                  ADD EBX,0xe
0069C573  83 C2 0E                  ADD EDX,0xe
0069C576  3B C7                     CMP EAX,EDI
0069C578  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
0069C57B  89 5D DC                  MOV dword ptr [EBP + -0x24],EBX
0069C57E  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0069C581  0F 8C 30 FF FF FF         JL 0x0069c4b7
0069C587  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
LAB_0069c58a:
0069C58A  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
0069C58D  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0069C590  8B 5D D8                  MOV EBX,dword ptr [EBP + -0x28]
0069C593  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0069C596  03 F7                     ADD ESI,EDI
0069C598  41                        INC ECX
0069C599  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
0069C59C  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
0069C59F  03 D8                     ADD EBX,EAX
0069C5A1  03 F0                     ADD ESI,EAX
0069C5A3  3B CA                     CMP ECX,EDX
0069C5A5  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0069C5A8  89 5D D8                  MOV dword ptr [EBP + -0x28],EBX
0069C5AB  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
0069C5AE  0F 8C EB FE FF FF         JL 0x0069c49f
LAB_0069c5b4:
0069C5B4  B8 01 00 00 00            MOV EAX,0x1
LAB_0069c5b9:
0069C5B9  5F                        POP EDI
0069C5BA  5E                        POP ESI
0069C5BB  5B                        POP EBX
0069C5BC  8B E5                     MOV ESP,EBP
0069C5BE  5D                        POP EBP
0069C5BF  C2 0C 00                  RET 0xc
