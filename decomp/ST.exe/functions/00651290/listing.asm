FUN_00651290:
00651290  55                        PUSH EBP
00651291  8B EC                     MOV EBP,ESP
00651293  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00651296  53                        PUSH EBX
00651297  33 C0                     XOR EAX,EAX
00651299  BB 08 00 00 00            MOV EBX,0x8
LAB_0065129e:
0065129E  38 9C 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],BL
006512A5  0F 85 C5 00 00 00         JNZ 0x00651370
006512AB  40                        INC EAX
006512AC  83 F8 04                  CMP EAX,0x4
006512AF  7C ED                     JL 0x0065129e
006512B1  66 8B 11                  MOV DX,word ptr [ECX]
006512B4  66 83 FA 05               CMP DX,0x5
006512B8  7D 09                     JGE 0x006512c3
006512BA  C7 41 18 FF FF FF 3F      MOV dword ptr [ECX + 0x18],0x3fffffff
006512C1  EB 0C                     JMP 0x006512cf
LAB_006512c3:
006512C3  38 99 D4 00 00 00         CMP byte ptr [ECX + 0xd4],BL
006512C9  0F 85 A1 00 00 00         JNZ 0x00651370
LAB_006512cf:
006512CF  66 83 FA 06               CMP DX,0x6
006512D3  B8 01 00 00 00            MOV EAX,0x1
006512D8  7D 05                     JGE 0x006512df
006512DA  89 41 1C                  MOV dword ptr [ECX + 0x1c],EAX
006512DD  EB 0C                     JMP 0x006512eb
LAB_006512df:
006512DF  38 99 D5 00 00 00         CMP byte ptr [ECX + 0xd5],BL
006512E5  0F 85 85 00 00 00         JNZ 0x00651370
LAB_006512eb:
006512EB  66 83 FA 07               CMP DX,0x7
006512EF  7D 09                     JGE 0x006512fa
006512F1  C7 41 20 00 00 00 00      MOV dword ptr [ECX + 0x20],0x0
006512F8  EB 08                     JMP 0x00651302
LAB_006512fa:
006512FA  38 99 D6 00 00 00         CMP byte ptr [ECX + 0xd6],BL
00651300  75 6E                     JNZ 0x00651370
LAB_00651302:
00651302  66 3B D3                  CMP DX,BX
00651305  7D 05                     JGE 0x0065130c
00651307  89 41 24                  MOV dword ptr [ECX + 0x24],EAX
0065130A  EB 08                     JMP 0x00651314
LAB_0065130c:
0065130C  38 99 D7 00 00 00         CMP byte ptr [ECX + 0xd7],BL
00651312  75 5C                     JNZ 0x00651370
LAB_00651314:
00651314  66 83 FA 09               CMP DX,0x9
00651318  7D 09                     JGE 0x00651323
0065131A  C7 41 28 00 00 00 00      MOV dword ptr [ECX + 0x28],0x0
00651321  EB 08                     JMP 0x0065132b
LAB_00651323:
00651323  38 99 D8 00 00 00         CMP byte ptr [ECX + 0xd8],BL
00651329  75 45                     JNZ 0x00651370
LAB_0065132b:
0065132B  66 83 FA 0A               CMP DX,0xa
0065132F  7D 09                     JGE 0x0065133a
00651331  C7 41 2C 00 00 00 00      MOV dword ptr [ECX + 0x2c],0x0
00651338  EB 08                     JMP 0x00651342
LAB_0065133a:
0065133A  38 99 D8 00 00 00         CMP byte ptr [ECX + 0xd8],BL
00651340  75 2E                     JNZ 0x00651370
LAB_00651342:
00651342  8B 51 10                  MOV EDX,dword ptr [ECX + 0x10]
00651345  85 D2                     TEST EDX,EDX
00651347  7C 27                     JL 0x00651370
00651349  8B 51 14                  MOV EDX,dword ptr [ECX + 0x14]
0065134C  85 D2                     TEST EDX,EDX
0065134E  7C 20                     JL 0x00651370
00651350  83 FA 02                  CMP EDX,0x2
00651353  7F 1B                     JG 0x00651370
00651355  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
00651358  85 D2                     TEST EDX,EDX
0065135A  7C 14                     JL 0x00651370
0065135C  8B 51 20                  MOV EDX,dword ptr [ECX + 0x20]
0065135F  85 D2                     TEST EDX,EDX
00651361  7C 0D                     JL 0x00651370
00651363  8B 51 24                  MOV EDX,dword ptr [ECX + 0x24]
00651366  85 D2                     TEST EDX,EDX
00651368  7D 08                     JGE 0x00651372
0065136A  89 41 24                  MOV dword ptr [ECX + 0x24],EAX
0065136D  5B                        POP EBX
0065136E  5D                        POP EBP
0065136F  C3                        RET
LAB_00651370:
00651370  33 C0                     XOR EAX,EAX
LAB_00651372:
00651372  5B                        POP EBX
00651373  5D                        POP EBP
00651374  C3                        RET
