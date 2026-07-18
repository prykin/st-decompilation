FUN_004c5350:
004C5350  55                        PUSH EBP
004C5351  8B EC                     MOV EBP,ESP
004C5353  83 EC 1C                  SUB ESP,0x1c
004C5356  53                        PUSH EBX
004C5357  56                        PUSH ESI
004C5358  8B F1                     MOV ESI,ECX
004C535A  57                        PUSH EDI
004C535B  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
004C5362  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004C5368  8B 0C 85 78 27 79 00      MOV ECX,dword ptr [EAX*0x4 + 0x792778]
004C536F  85 C9                     TEST ECX,ECX
004C5371  0F 84 77 02 00 00         JZ 0x004c55ee
004C5377  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004C537A  8B CF                     MOV ECX,EDI
004C537C  C1 E1 07                  SHL ECX,0x7
004C537F  8D 04 31                  LEA EAX,[ECX + ESI*0x1]
004C5382  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
004C5385  8B 88 61 02 00 00         MOV ECX,dword ptr [EAX + 0x261]
004C538B  85 C9                     TEST ECX,ECX
004C538D  75 0D                     JNZ 0x004c539c
004C538F  83 BE 45 02 00 00 05      CMP dword ptr [ESI + 0x245],0x5
004C5396  0F 85 52 02 00 00         JNZ 0x004c55ee
LAB_004c539c:
004C539C  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
004C539F  85 DB                     TEST EBX,EBX
004C53A1  74 15                     JZ 0x004c53b8
004C53A3  8D 55 E8                  LEA EDX,[EBP + -0x18]
004C53A6  8D 45 F0                  LEA EAX,[EBP + -0x10]
004C53A9  52                        PUSH EDX
004C53AA  8D 4D EC                  LEA ECX,[EBP + -0x14]
004C53AD  50                        PUSH EAX
004C53AE  51                        PUSH ECX
004C53AF  8B CB                     MOV ECX,EBX
004C53B1  E8 0F C5 F3 FF            CALL 0x004018c5
004C53B6  EB 12                     JMP 0x004c53ca
LAB_004c53b8:
004C53B8  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004C53BB  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004C53BE  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
004C53C1  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
004C53C4  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
004C53C7  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
LAB_004c53ca:
004C53CA  8B 96 35 02 00 00         MOV EDX,dword ptr [ESI + 0x235]
004C53D0  8D 04 57                  LEA EAX,[EDI + EDX*0x2]
004C53D3  8B 04 85 90 2A 79 00      MOV EAX,dword ptr [EAX*0x4 + 0x792a90]
004C53DA  48                        DEC EAX
004C53DB  74 0F                     JZ 0x004c53ec
004C53DD  48                        DEC EAX
004C53DE  74 16                     JZ 0x004c53f6
004C53E0  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004C53E3  5F                        POP EDI
004C53E4  5E                        POP ESI
004C53E5  5B                        POP EBX
004C53E6  8B E5                     MOV ESP,EBP
004C53E8  5D                        POP EBP
004C53E9  C2 1C 00                  RET 0x1c
LAB_004c53ec:
004C53EC  85 DB                     TEST EBX,EBX
004C53EE  0F 84 FA 01 00 00         JZ 0x004c55ee
004C53F4  EB 08                     JMP 0x004c53fe
LAB_004c53f6:
004C53F6  85 DB                     TEST EBX,EBX
004C53F8  0F 84 17 01 00 00         JZ 0x004c5515
LAB_004c53fe:
004C53FE  83 7B 28 01               CMP dword ptr [EBX + 0x28],0x1
004C5402  0F 85 E6 01 00 00         JNZ 0x004c55ee
004C5408  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004C540B  83 F8 08                  CMP EAX,0x8
004C540E  0F 83 DA 01 00 00         JNC 0x004c55ee
004C5414  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004C541A  85 C9                     TEST ECX,ECX
004C541C  74 11                     JZ 0x004c542f
004C541E  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
004C5421  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
004C5429  0F 83 BF 01 00 00         JNC 0x004c55ee
LAB_004c542f:
004C542F  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004C5432  8B 13                     MOV EDX,dword ptr [EBX]
004C5434  50                        PUSH EAX
004C5435  8B CB                     MOV ECX,EBX
004C5437  FF 92 F4 00 00 00         CALL dword ptr [EDX + 0xf4]
004C543D  85 C0                     TEST EAX,EAX
004C543F  0F 84 A9 01 00 00         JZ 0x004c55ee
004C5445  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
004C5448  85 C0                     TEST EAX,EAX
004C544A  0F 84 C5 00 00 00         JZ 0x004c5515
004C5450  8A 15 8F 8A 80 00         MOV DL,byte ptr [0x00808a8f]
004C5456  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
004C5459  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004C545C  88 45 20                  MOV byte ptr [EBP + 0x20],AL
004C545F  84 D2                     TEST DL,DL
004C5461  88 4D F4                  MOV byte ptr [EBP + -0xc],CL
004C5464  74 2D                     JZ 0x004c5493
004C5466  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004C5469  33 D2                     XOR EDX,EDX
004C546B  25 FF 00 00 00            AND EAX,0xff
004C5470  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
004C5473  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
004C5476  25 FF 00 00 00            AND EAX,0xff
004C547B  8A 8C C9 EA 87 80 00      MOV CL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
004C5482  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
004C5485  3A 8C C0 EA 87 80 00      CMP CL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
004C548C  0F 95 C2                  SETNZ DL
004C548F  8B C2                     MOV EAX,EDX
004C5491  EB 7A                     JMP 0x004c550d
LAB_004c5493:
004C5493  3A C1                     CMP AL,CL
004C5495  74 6B                     JZ 0x004c5502
004C5497  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
004C549A  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004C549D  25 FF 00 00 00            AND EAX,0xff
004C54A2  81 E1 FF 00 00 00         AND ECX,0xff
004C54A8  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
004C54AF  84 D2                     TEST DL,DL
004C54B1  75 10                     JNZ 0x004c54c3
004C54B3  38 94 C8 4F 8A 80 00      CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],DL
004C54BA  75 07                     JNZ 0x004c54c3
004C54BC  B8 FE FF FF FF            MOV EAX,0xfffffffe
004C54C1  EB 41                     JMP 0x004c5504
LAB_004c54c3:
004C54C3  80 FA 01                  CMP DL,0x1
004C54C6  75 0F                     JNZ 0x004c54d7
004C54C8  80 BC C8 4F 8A 80 00 00   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x0
004C54D0  75 05                     JNZ 0x004c54d7
004C54D2  83 C8 FF                  OR EAX,0xffffffff
004C54D5  EB 2D                     JMP 0x004c5504
LAB_004c54d7:
004C54D7  84 D2                     TEST DL,DL
004C54D9  75 11                     JNZ 0x004c54ec
004C54DB  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
004C54E3  75 07                     JNZ 0x004c54ec
004C54E5  B8 01 00 00 00            MOV EAX,0x1
004C54EA  EB 18                     JMP 0x004c5504
LAB_004c54ec:
004C54EC  80 FA 01                  CMP DL,0x1
004C54EF  75 11                     JNZ 0x004c5502
004C54F1  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
004C54F9  75 07                     JNZ 0x004c5502
004C54FB  B8 02 00 00 00            MOV EAX,0x2
004C5500  EB 02                     JMP 0x004c5504
LAB_004c5502:
004C5502  33 C0                     XOR EAX,EAX
LAB_004c5504:
004C5504  33 C9                     XOR ECX,ECX
004C5506  85 C0                     TEST EAX,EAX
004C5508  0F 9C C1                  SETL CL
004C550B  8B C1                     MOV EAX,ECX
LAB_004c550d:
004C550D  85 C0                     TEST EAX,EAX
004C550F  0F 84 D9 00 00 00         JZ 0x004c55ee
LAB_004c5515:
004C5515  8B 96 B4 05 00 00         MOV EDX,dword ptr [ESI + 0x5b4]
004C551B  8B 86 B0 05 00 00         MOV EAX,dword ptr [ESI + 0x5b0]
004C5521  0F BF 4D F0               MOVSX ECX,word ptr [EBP + -0x10]
004C5525  52                        PUSH EDX
004C5526  50                        PUSH EAX
004C5527  0F BF 55 EC               MOVSX EDX,word ptr [EBP + -0x14]
004C552B  51                        PUSH ECX
004C552C  52                        PUSH EDX
004C552D  E8 5E 7A 1E 00            CALL 0x006acf90
004C5532  8B 8E 35 02 00 00         MOV ECX,dword ptr [ESI + 0x235]
004C5538  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
004C553B  8B F8                     MOV EDI,EAX
004C553D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004C5540  50                        PUSH EAX
004C5541  51                        PUSH ECX
004C5542  52                        PUSH EDX
004C5543  E8 FD 06 F4 FF            CALL 0x00405c45
004C5548  83 C4 0C                  ADD ESP,0xc
004C554B  3B F8                     CMP EDI,EAX
004C554D  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
004C5550  7E 08                     JLE 0x004c555a
004C5552  85 C0                     TEST EAX,EAX
004C5554  0F 85 94 00 00 00         JNZ 0x004c55ee
LAB_004c555a:
004C555A  8B 8E 35 02 00 00         MOV ECX,dword ptr [ESI + 0x235]
004C5560  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004C5563  8D 14 4A                  LEA EDX,[EDX + ECX*0x2]
004C5566  B9 01 00 00 00            MOV ECX,0x1
004C556B  39 0C 95 90 2A 79 00      CMP dword ptr [EDX*0x4 + 0x792a90],ECX
004C5572  75 77                     JNZ 0x004c55eb
004C5574  85 C0                     TEST EAX,EAX
004C5576  74 73                     JZ 0x004c55eb
004C5578  8D 45 12                  LEA EAX,[EBP + 0x12]
004C557B  8D 4D FE                  LEA ECX,[EBP + -0x2]
004C557E  50                        PUSH EAX
004C557F  8D 55 FC                  LEA EDX,[EBP + -0x4]
004C5582  51                        PUSH ECX
004C5583  52                        PUSH EDX
004C5584  8B CB                     MOV ECX,EBX
004C5586  E8 58 DC F3 FF            CALL 0x004031e3
004C558B  8D 45 0E                  LEA EAX,[EBP + 0xe]
004C558E  8D 4D 16                  LEA ECX,[EBP + 0x16]
004C5591  50                        PUSH EAX
004C5592  8D 55 1A                  LEA EDX,[EBP + 0x1a]
004C5595  51                        PUSH ECX
004C5596  52                        PUSH EDX
004C5597  8B CE                     MOV ECX,ESI
004C5599  E8 45 DC F3 FF            CALL 0x004031e3
004C559E  0F BF 45 0E               MOVSX EAX,word ptr [EBP + 0xe]
004C55A2  0F BF 4D 16               MOVSX ECX,word ptr [EBP + 0x16]
004C55A6  0F BF 55 1A               MOVSX EDX,word ptr [EBP + 0x1a]
004C55AA  50                        PUSH EAX
004C55AB  51                        PUSH ECX
004C55AC  0F BF 45 12               MOVSX EAX,word ptr [EBP + 0x12]
004C55B0  0F BF 4D FE               MOVSX ECX,word ptr [EBP + -0x2]
004C55B4  52                        PUSH EDX
004C55B5  50                        PUSH EAX
004C55B6  0F BF 55 FC               MOVSX EDX,word ptr [EBP + -0x4]
004C55BA  51                        PUSH ECX
004C55BB  52                        PUSH EDX
004C55BC  E8 4C 79 1E 00            CALL 0x006acf0d
004C55C1  0F BF 55 0E               MOVSX EDX,word ptr [EBP + 0xe]
004C55C5  8B C8                     MOV ECX,EAX
004C55C7  83 C4 18                  ADD ESP,0x18
004C55CA  0F BF 45 12               MOVSX EAX,word ptr [EBP + 0x12]
004C55CE  2B C2                     SUB EAX,EDX
004C55D0  99                        CDQ
004C55D1  33 C2                     XOR EAX,EDX
004C55D3  2B C2                     SUB EAX,EDX
004C55D5  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004C55D8  D1 E0                     SHL EAX,0x1
004C55DA  99                        CDQ
004C55DB  F7 F9                     IDIV ECX
004C55DD  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
004C55E0  33 C9                     XOR ECX,ECX
004C55E2  3B 82 81 02 00 00         CMP EAX,dword ptr [EDX + 0x281]
004C55E8  0F 9E C1                  SETLE CL
LAB_004c55eb:
004C55EB  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_004c55ee:
004C55EE  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004C55F1  5F                        POP EDI
004C55F2  5E                        POP ESI
004C55F3  5B                        POP EBX
004C55F4  8B E5                     MOV ESP,EBP
004C55F6  5D                        POP EBP
004C55F7  C2 1C 00                  RET 0x1c
