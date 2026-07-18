FUN_0060c320:
0060C320  55                        PUSH EBP
0060C321  8B EC                     MOV EBP,ESP
0060C323  6A FF                     PUSH -0x1
0060C325  68 68 CD 79 00            PUSH 0x79cd68
0060C32A  68 64 D9 72 00            PUSH 0x72d964
0060C32F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
0060C335  50                        PUSH EAX
0060C336  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
0060C33D  81 EC 80 00 00 00         SUB ESP,0x80
0060C343  53                        PUSH EBX
0060C344  56                        PUSH ESI
0060C345  57                        PUSH EDI
0060C346  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0060C349  8B F1                     MOV ESI,ECX
0060C34B  89 B5 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],ESI
0060C351  33 DB                     XOR EBX,EBX
0060C353  89 5D 90                  MOV dword ptr [EBP + -0x70],EBX
0060C356  89 5D D8                  MOV dword ptr [EBP + -0x28],EBX
0060C359  8B 8E E9 01 00 00         MOV ECX,dword ptr [ESI + 0x1e9]
0060C35F  3B CB                     CMP ECX,EBX
0060C361  B8 79 19 8C 02            MOV EAX,0x28c1979
0060C366  7C 10                     JL 0x0060c378
0060C368  F7 E9                     IMUL ECX
0060C36A  D1 FA                     SAR EDX,0x1
0060C36C  8B C2                     MOV EAX,EDX
0060C36E  C1 E8 1F                  SHR EAX,0x1f
0060C371  03 D0                     ADD EDX,EAX
0060C373  0F BF FA                  MOVSX EDI,DX
0060C376  EB 0F                     JMP 0x0060c387
LAB_0060c378:
0060C378  F7 E9                     IMUL ECX
0060C37A  D1 FA                     SAR EDX,0x1
0060C37C  8B CA                     MOV ECX,EDX
0060C37E  C1 E9 1F                  SHR ECX,0x1f
0060C381  03 D1                     ADD EDX,ECX
0060C383  0F BF FA                  MOVSX EDI,DX
0060C386  4F                        DEC EDI
LAB_0060c387:
0060C387  8B 8E ED 01 00 00         MOV ECX,dword ptr [ESI + 0x1ed]
0060C38D  3B CB                     CMP ECX,EBX
0060C38F  B8 79 19 8C 02            MOV EAX,0x28c1979
0060C394  7C 10                     JL 0x0060c3a6
0060C396  F7 E9                     IMUL ECX
0060C398  D1 FA                     SAR EDX,0x1
0060C39A  8B C2                     MOV EAX,EDX
0060C39C  C1 E8 1F                  SHR EAX,0x1f
0060C39F  03 D0                     ADD EDX,EAX
0060C3A1  0F BF C2                  MOVSX EAX,DX
0060C3A4  EB 0F                     JMP 0x0060c3b5
LAB_0060c3a6:
0060C3A6  F7 E9                     IMUL ECX
0060C3A8  D1 FA                     SAR EDX,0x1
0060C3AA  8B CA                     MOV ECX,EDX
0060C3AC  C1 E9 1F                  SHR ECX,0x1f
0060C3AF  03 D1                     ADD EDX,ECX
0060C3B1  0F BF C2                  MOVSX EAX,DX
0060C3B4  48                        DEC EAX
LAB_0060c3b5:
0060C3B5  8B 8E 4C 02 00 00         MOV ECX,dword ptr [ESI + 0x24c]
0060C3BB  8B F0                     MOV ESI,EAX
0060C3BD  2B F1                     SUB ESI,ECX
0060C3BF  79 06                     JNS 0x0060c3c7
0060C3C1  8B DE                     MOV EBX,ESI
0060C3C3  F7 DB                     NEG EBX
0060C3C5  33 F6                     XOR ESI,ESI
LAB_0060c3c7:
0060C3C7  8B D7                     MOV EDX,EDI
0060C3C9  2B D1                     SUB EDX,ECX
0060C3CB  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
0060C3CE  79 0E                     JNS 0x0060c3de
0060C3D0  F7 DA                     NEG EDX
0060C3D2  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
0060C3D5  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
0060C3DC  EB 07                     JMP 0x0060c3e5
LAB_0060c3de:
0060C3DE  C7 45 C0 00 00 00 00      MOV dword ptr [EBP + -0x40],0x0
LAB_0060c3e5:
0060C3E5  8D 54 01 01               LEA EDX,[ECX + EAX*0x1 + 0x1]
0060C3E9  89 55 98                  MOV dword ptr [EBP + -0x68],EDX
0060C3EC  0F BF 05 42 B2 7F 00      MOVSX EAX,word ptr [0x007fb242]
0060C3F3  3B D0                     CMP EDX,EAX
0060C3F5  7E 05                     JLE 0x0060c3fc
0060C3F7  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
0060C3FA  8B D0                     MOV EDX,EAX
LAB_0060c3fc:
0060C3FC  8D 4C 39 01               LEA ECX,[ECX + EDI*0x1 + 0x1]
0060C400  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
0060C403  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
0060C40A  3B C8                     CMP ECX,EAX
0060C40C  7E 05                     JLE 0x0060c413
0060C40E  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
0060C411  8B C8                     MOV ECX,EAX
LAB_0060c413:
0060C413  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0060C41A  8B C1                     MOV EAX,ECX
0060C41C  2B 45 E4                  SUB EAX,dword ptr [EBP + -0x1c]
0060C41F  2B D6                     SUB EDX,ESI
0060C421  0F AF C2                  IMUL EAX,EDX
0060C424  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0060C427  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060C42A  C1 E0 02                  SHL EAX,0x2
0060C42D  83 C0 03                  ADD EAX,0x3
0060C430  24 FC                     AND AL,0xfc
0060C432  E8 09 16 12 00            CALL 0x0072da40
0060C437  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0060C43A  8B C4                     MOV EAX,ESP
0060C43C  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
0060C43F  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
0060C446  89 5D A0                  MOV dword ptr [EBP + -0x60],EBX
0060C449  8B CE                     MOV ECX,ESI
0060C44B  89 4D C4                  MOV dword ptr [EBP + -0x3c],ECX
0060C44E  3B 75 98                  CMP ESI,dword ptr [EBP + -0x68]
0060C451  0F 8D A1 02 00 00         JGE 0x0060c6f8
LAB_0060c457:
0060C457  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
0060C45A  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
0060C45D  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
0060C460  89 7D 88                  MOV dword ptr [EBP + -0x78],EDI
0060C463  8B D7                     MOV EDX,EDI
0060C465  3B 55 A8                  CMP EDX,dword ptr [EBP + -0x58]
0060C468  0F 8D 7A 02 00 00         JGE 0x0060c6e8
LAB_0060c46e:
0060C46E  33 DB                     XOR EBX,EBX
0060C470  89 5D C8                  MOV dword ptr [EBP + -0x38],EBX
0060C473  EB 03                     JMP 0x0060c478
LAB_0060c475:
0060C475  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
LAB_0060c478:
0060C478  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0060C47B  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
0060C47E  8D 14 82                  LEA EDX,[EDX + EAX*0x4]
0060C481  80 BC 10 64 BC 7A 00 00   CMP byte ptr [EAX + EDX*0x1 + 0x7abc64],0x0
0060C489  0F 84 38 02 00 00         JZ 0x0060c6c7
0060C48F  66 85 FF                  TEST DI,DI
0060C492  7C 4E                     JL 0x0060c4e2
0060C494  66 A1 40 B2 7F 00         MOV AX,[0x007fb240]
0060C49A  66 3B F8                  CMP DI,AX
0060C49D  7D 43                     JGE 0x0060c4e2
0060C49F  66 85 C9                  TEST CX,CX
0060C4A2  7C 3E                     JL 0x0060c4e2
0060C4A4  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
0060C4AB  7D 35                     JGE 0x0060c4e2
0060C4AD  66 85 DB                  TEST BX,BX
0060C4B0  7C 30                     JL 0x0060c4e2
0060C4B2  66 3B 1D 44 B2 7F 00      CMP BX,word ptr [0x007fb244]
0060C4B9  7D 27                     JGE 0x0060c4e2
0060C4BB  0F BF 15 46 B2 7F 00      MOVSX EDX,word ptr [0x007fb246]
0060C4C2  0F BF F3                  MOVSX ESI,BX
0060C4C5  0F AF D6                  IMUL EDX,ESI
0060C4C8  0F BF C0                  MOVSX EAX,AX
0060C4CB  0F BF F1                  MOVSX ESI,CX
0060C4CE  0F AF C6                  IMUL EAX,ESI
0060C4D1  03 D0                     ADD EDX,EAX
0060C4D3  0F BF C7                  MOVSX EAX,DI
0060C4D6  03 D0                     ADD EDX,EAX
0060C4D8  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
0060C4DD  8B 34 D0                  MOV ESI,dword ptr [EAX + EDX*0x8]
0060C4E0  EB 02                     JMP 0x0060c4e4
LAB_0060c4e2:
0060C4E2  33 F6                     XOR ESI,ESI
LAB_0060c4e4:
0060C4E4  85 F6                     TEST ESI,ESI
0060C4E6  0F 84 DB 01 00 00         JZ 0x0060c6c7
0060C4EC  8B 16                     MOV EDX,dword ptr [ESI]
0060C4EE  8B CE                     MOV ECX,ESI
0060C4F0  FF 92 F0 00 00 00         CALL dword ptr [EDX + 0xf0]
0060C4F6  85 C0                     TEST EAX,EAX
0060C4F8  0F 84 C6 01 00 00         JZ 0x0060c6c4
0060C4FE  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0060C501  83 F8 08                  CMP EAX,0x8
0060C504  0F 83 BA 01 00 00         JNC 0x0060c6c4
0060C50A  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0060C510  85 C9                     TEST ECX,ECX
0060C512  74 11                     JZ 0x0060c525
0060C514  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0060C517  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
0060C51F  0F 83 9F 01 00 00         JNC 0x0060c6c4
LAB_0060c525:
0060C525  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
0060C528  88 85 78 FF FF FF         MOV byte ptr [EBP + 0xffffff78],AL
0060C52E  8B 8D 70 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff70]
0060C534  8A 89 D9 01 00 00         MOV CL,byte ptr [ECX + 0x1d9]
0060C53A  88 8D 7C FF FF FF         MOV byte ptr [EBP + 0xffffff7c],CL
0060C540  8A 15 8F 8A 80 00         MOV DL,byte ptr [0x00808a8f]
0060C546  84 D2                     TEST DL,DL
0060C548  74 36                     JZ 0x0060c580
0060C54A  8B 85 7C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff7c]
0060C550  25 FF 00 00 00            AND EAX,0xff
0060C555  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
0060C558  8B 85 78 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff78]
0060C55E  25 FF 00 00 00            AND EAX,0xff
0060C563  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0060C566  8A 94 C9 EA 87 80 00      MOV DL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
0060C56D  33 C9                     XOR ECX,ECX
0060C56F  3A 94 C0 EA 87 80 00      CMP DL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
0060C576  0F 95 C1                  SETNZ CL
0060C579  8B C1                     MOV EAX,ECX
0060C57B  E9 80 00 00 00            JMP 0x0060c600
LAB_0060c580:
0060C580  3A C1                     CMP AL,CL
0060C582  74 71                     JZ 0x0060c5f5
0060C584  8B 85 78 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff78]
0060C58A  25 FF 00 00 00            AND EAX,0xff
0060C58F  8B 8D 7C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff7c]
0060C595  81 E1 FF 00 00 00         AND ECX,0xff
0060C59B  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
0060C5A2  84 D2                     TEST DL,DL
0060C5A4  75 10                     JNZ 0x0060c5b6
0060C5A6  38 94 C8 4F 8A 80 00      CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],DL
0060C5AD  75 07                     JNZ 0x0060c5b6
0060C5AF  B8 FE FF FF FF            MOV EAX,0xfffffffe
0060C5B4  EB 41                     JMP 0x0060c5f7
LAB_0060c5b6:
0060C5B6  80 FA 01                  CMP DL,0x1
0060C5B9  75 0F                     JNZ 0x0060c5ca
0060C5BB  80 BC C8 4F 8A 80 00 00   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x0
0060C5C3  75 05                     JNZ 0x0060c5ca
0060C5C5  83 C8 FF                  OR EAX,0xffffffff
0060C5C8  EB 2D                     JMP 0x0060c5f7
LAB_0060c5ca:
0060C5CA  84 D2                     TEST DL,DL
0060C5CC  75 11                     JNZ 0x0060c5df
0060C5CE  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
0060C5D6  75 07                     JNZ 0x0060c5df
0060C5D8  B8 01 00 00 00            MOV EAX,0x1
0060C5DD  EB 18                     JMP 0x0060c5f7
LAB_0060c5df:
0060C5DF  80 FA 01                  CMP DL,0x1
0060C5E2  75 11                     JNZ 0x0060c5f5
0060C5E4  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
0060C5EC  75 07                     JNZ 0x0060c5f5
0060C5EE  B8 02 00 00 00            MOV EAX,0x2
0060C5F3  EB 02                     JMP 0x0060c5f7
LAB_0060c5f5:
0060C5F5  33 C0                     XOR EAX,EAX
LAB_0060c5f7:
0060C5F7  33 D2                     XOR EDX,EDX
0060C5F9  85 C0                     TEST EAX,EAX
0060C5FB  0F 9C C2                  SETL DL
0060C5FE  8B C2                     MOV EAX,EDX
LAB_0060c600:
0060C600  85 C0                     TEST EAX,EAX
0060C602  0F 84 BC 00 00 00         JZ 0x0060c6c4
0060C608  8B 06                     MOV EAX,dword ptr [ESI]
0060C60A  8B CE                     MOV ECX,ESI
0060C60C  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
0060C612  85 C0                     TEST EAX,EAX
0060C614  0F 84 AA 00 00 00         JZ 0x0060c6c4
0060C61A  8B 5D 90                  MOV EBX,dword ptr [EBP + -0x70]
0060C61D  8D 0C 5B                  LEA ECX,[EBX + EBX*0x2]
0060C620  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
0060C623  8D 3C 8A                  LEA EDI,[EDX + ECX*0x4]
0060C626  89 37                     MOV dword ptr [EDI],ESI
0060C628  8B 06                     MOV EAX,dword ptr [ESI]
0060C62A  8B CE                     MOV ECX,ESI
0060C62C  FF 50 78                  CALL dword ptr [EAX + 0x78]
0060C62F  8B F0                     MOV ESI,EAX
0060C631  46                        INC ESI
0060C632  85 F6                     TEST ESI,ESI
0060C634  0F 8E 84 00 00 00         JLE 0x0060c6be
0060C63A  89 77 04                  MOV dword ptr [EDI + 0x4],ESI
0060C63D  8B 8D 70 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff70]
0060C643  8B 89 ED 01 00 00         MOV ECX,dword ptr [ECX + 0x1ed]
0060C649  85 C9                     TEST ECX,ECX
0060C64B  B8 79 19 8C 02            MOV EAX,0x28c1979
0060C650  7C 10                     JL 0x0060c662
0060C652  F7 E9                     IMUL ECX
0060C654  D1 FA                     SAR EDX,0x1
0060C656  8B C2                     MOV EAX,EDX
0060C658  C1 E8 1F                  SHR EAX,0x1f
0060C65B  03 D0                     ADD EDX,EAX
0060C65D  0F BF CA                  MOVSX ECX,DX
0060C660  EB 0F                     JMP 0x0060c671
LAB_0060c662:
0060C662  F7 E9                     IMUL ECX
0060C664  D1 FA                     SAR EDX,0x1
0060C666  8B CA                     MOV ECX,EDX
0060C668  C1 E9 1F                  SHR ECX,0x1f
0060C66B  03 D1                     ADD EDX,ECX
0060C66D  0F BF CA                  MOVSX ECX,DX
0060C670  49                        DEC ECX
LAB_0060c671:
0060C671  8B 95 70 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff70]
0060C677  8B 92 E9 01 00 00         MOV EDX,dword ptr [EDX + 0x1e9]
0060C67D  85 D2                     TEST EDX,EDX
0060C67F  B8 79 19 8C 02            MOV EAX,0x28c1979
0060C684  7C 10                     JL 0x0060c696
0060C686  F7 EA                     IMUL EDX
0060C688  D1 FA                     SAR EDX,0x1
0060C68A  8B C2                     MOV EAX,EDX
0060C68C  C1 E8 1F                  SHR EAX,0x1f
0060C68F  03 D0                     ADD EDX,EAX
0060C691  0F BF C2                  MOVSX EAX,DX
0060C694  EB 0F                     JMP 0x0060c6a5
LAB_0060c696:
0060C696  F7 EA                     IMUL EDX
0060C698  D1 FA                     SAR EDX,0x1
0060C69A  8B C2                     MOV EAX,EDX
0060C69C  C1 E8 1F                  SHR EAX,0x1f
0060C69F  03 D0                     ADD EDX,EAX
0060C6A1  0F BF C2                  MOVSX EAX,DX
0060C6A4  48                        DEC EAX
LAB_0060c6a5:
0060C6A5  51                        PUSH ECX
0060C6A6  50                        PUSH EAX
0060C6A7  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
0060C6AA  51                        PUSH ECX
0060C6AB  8B 55 88                  MOV EDX,dword ptr [EBP + -0x78]
0060C6AE  52                        PUSH EDX
0060C6AF  E8 DC 08 0A 00            CALL 0x006acf90
0060C6B4  89 47 08                  MOV dword ptr [EDI + 0x8],EAX
0060C6B7  01 75 D8                  ADD dword ptr [EBP + -0x28],ESI
0060C6BA  43                        INC EBX
0060C6BB  89 5D 90                  MOV dword ptr [EBP + -0x70],EBX
LAB_0060c6be:
0060C6BE  8B 5D C8                  MOV EBX,dword ptr [EBP + -0x38]
0060C6C1  8B 7D 88                  MOV EDI,dword ptr [EBP + -0x78]
LAB_0060c6c4:
0060C6C4  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
LAB_0060c6c7:
0060C6C7  43                        INC EBX
0060C6C8  89 5D C8                  MOV dword ptr [EBP + -0x38],EBX
0060C6CB  83 FB 05                  CMP EBX,0x5
0060C6CE  0F 8C A1 FD FF FF         JL 0x0060c475
0060C6D4  47                        INC EDI
0060C6D5  89 7D 88                  MOV dword ptr [EBP + -0x78],EDI
0060C6D8  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
0060C6DB  40                        INC EAX
0060C6DC  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
0060C6DF  3B 7D A8                  CMP EDI,dword ptr [EBP + -0x58]
0060C6E2  0F 8C 86 FD FF FF         JL 0x0060c46e
LAB_0060c6e8:
0060C6E8  41                        INC ECX
0060C6E9  89 4D C4                  MOV dword ptr [EBP + -0x3c],ECX
0060C6EC  FF 45 A0                  INC dword ptr [EBP + -0x60]
0060C6EF  3B 4D 98                  CMP ECX,dword ptr [EBP + -0x68]
0060C6F2  0F 8C 5F FD FF FF         JL 0x0060c457
LAB_0060c6f8:
0060C6F8  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0060C6FB  85 C0                     TEST EAX,EAX
0060C6FD  0F 84 59 01 00 00         JZ 0x0060c85c
0060C703  33 FF                     XOR EDI,EDI
0060C705  8B 45 90                  MOV EAX,dword ptr [EBP + -0x70]
0060C708  85 C0                     TEST EAX,EAX
0060C70A  7E 53                     JLE 0x0060c75f
LAB_0060c70c:
0060C70C  33 DB                     XOR EBX,EBX
0060C70E  89 5D A0                  MOV dword ptr [EBP + -0x60],EBX
0060C711  85 FF                     TEST EDI,EDI
0060C713  7E 44                     JLE 0x0060c759
LAB_0060c715:
0060C715  8D 04 7F                  LEA EAX,[EDI + EDI*0x2]
0060C718  8B 4D 9C                  MOV ECX,dword ptr [EBP + -0x64]
0060C71B  8D 04 81                  LEA EAX,[ECX + EAX*0x4]
0060C71E  8D 14 5B                  LEA EDX,[EBX + EBX*0x2]
0060C721  8D 0C 91                  LEA ECX,[ECX + EDX*0x4]
0060C724  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
0060C727  8B 71 08                  MOV ESI,dword ptr [ECX + 0x8]
0060C72A  3B D6                     CMP EDX,ESI
0060C72C  7E 23                     JLE 0x0060c751
0060C72E  8B 59 04                  MOV EBX,dword ptr [ECX + 0x4]
0060C731  89 5D B8                  MOV dword ptr [EBP + -0x48],EBX
0060C734  8B 19                     MOV EBX,dword ptr [ECX]
0060C736  89 51 08                  MOV dword ptr [ECX + 0x8],EDX
0060C739  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0060C73C  89 51 04                  MOV dword ptr [ECX + 0x4],EDX
0060C73F  8B 10                     MOV EDX,dword ptr [EAX]
0060C741  89 11                     MOV dword ptr [ECX],EDX
0060C743  89 70 08                  MOV dword ptr [EAX + 0x8],ESI
0060C746  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0060C749  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
0060C74C  89 18                     MOV dword ptr [EAX],EBX
0060C74E  8B 5D A0                  MOV EBX,dword ptr [EBP + -0x60]
LAB_0060c751:
0060C751  43                        INC EBX
0060C752  89 5D A0                  MOV dword ptr [EBP + -0x60],EBX
0060C755  3B DF                     CMP EBX,EDI
0060C757  7C BC                     JL 0x0060c715
LAB_0060c759:
0060C759  47                        INC EDI
0060C75A  3B 7D 90                  CMP EDI,dword ptr [EBP + -0x70]
0060C75D  7C AD                     JL 0x0060c70c
LAB_0060c75f:
0060C75F  33 C0                     XOR EAX,EAX
0060C761  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
0060C764  8B 4D 90                  MOV ECX,dword ptr [EBP + -0x70]
0060C767  85 C9                     TEST ECX,ECX
0060C769  0F 8E DB 00 00 00         JLE 0x0060c84a
0060C76F  EB 03                     JMP 0x0060c774
LAB_0060c771:
0060C771  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
LAB_0060c774:
0060C774  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
0060C777  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
0060C77A  8D 14 90                  LEA EDX,[EAX + EDX*0x4]
0060C77D  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
0060C780  8B 8D 70 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff70]
0060C786  8B 89 09 02 00 00         MOV ECX,dword ptr [ECX + 0x209]
0060C78C  3B C1                     CMP EAX,ECX
0060C78E  7D 06                     JGE 0x0060c796
0060C790  8B D8                     MOV EBX,EAX
0060C792  33 F6                     XOR ESI,ESI
0060C794  EB 09                     JMP 0x0060c79f
LAB_0060c796:
0060C796  2B C1                     SUB EAX,ECX
0060C798  8B D8                     MOV EBX,EAX
0060C79A  BE 01 00 00 00            MOV ESI,0x1
LAB_0060c79f:
0060C79F  8B 3A                     MOV EDI,dword ptr [EDX]
0060C7A1  8D 55 DC                  LEA EDX,[EBP + -0x24]
0060C7A4  52                        PUSH EDX
0060C7A5  8D 45 84                  LEA EAX,[EBP + -0x7c]
0060C7A8  50                        PUSH EAX
0060C7A9  8D 4D B0                  LEA ECX,[EBP + -0x50]
0060C7AC  51                        PUSH ECX
0060C7AD  8B CF                     MOV ECX,EDI
0060C7AF  E8 2F 6A DF FF            CALL 0x004031e3
0060C7B4  0F BF 55 DC               MOVSX EDX,word ptr [EBP + -0x24]
0060C7B8  52                        PUSH EDX
0060C7B9  0F BF 45 84               MOVSX EAX,word ptr [EBP + -0x7c]
0060C7BD  50                        PUSH EAX
0060C7BE  0F BF 4D B0               MOVSX ECX,word ptr [EBP + -0x50]
0060C7C2  51                        PUSH ECX
0060C7C3  8B 85 70 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff70]
0060C7C9  8B 90 F1 01 00 00         MOV EDX,dword ptr [EAX + 0x1f1]
0060C7CF  81 C2 B4 00 00 00         ADD EDX,0xb4
0060C7D5  52                        PUSH EDX
0060C7D6  8B 88 ED 01 00 00         MOV ECX,dword ptr [EAX + 0x1ed]
0060C7DC  83 C1 64                  ADD ECX,0x64
0060C7DF  51                        PUSH ECX
0060C7E0  8B 90 E9 01 00 00         MOV EDX,dword ptr [EAX + 0x1e9]
0060C7E6  83 C2 64                  ADD EDX,0x64
0060C7E9  52                        PUSH EDX
0060C7EA  8B 80 D9 01 00 00         MOV EAX,dword ptr [EAX + 0x1d9]
0060C7F0  50                        PUSH EAX
0060C7F1  E8 90 62 DF FF            CALL 0x00402a86
0060C7F6  83 C4 1C                  ADD ESP,0x1c
0060C7F9  85 F6                     TEST ESI,ESI
0060C7FB  75 1A                     JNZ 0x0060c817
0060C7FD  8D 0C 9B                  LEA ECX,[EBX + EBX*0x4]
0060C800  51                        PUSH ECX
0060C801  57                        PUSH EDI
0060C802  8B B5 70 FF FF FF         MOV ESI,dword ptr [EBP + 0xffffff70]
0060C808  8B CE                     MOV ECX,ESI
0060C80A  E8 E9 7C DF FF            CALL 0x004044f8
0060C80F  29 9E 09 02 00 00         SUB dword ptr [ESI + 0x209],EBX
0060C815  EB 19                     JMP 0x0060c830
LAB_0060c817:
0060C817  53                        PUSH EBX
0060C818  57                        PUSH EDI
0060C819  8B B5 70 FF FF FF         MOV ESI,dword ptr [EBP + 0xffffff70]
0060C81F  8B CE                     MOV ECX,ESI
0060C821  E8 D2 7C DF FF            CALL 0x004044f8
0060C826  C7 86 09 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x209],0x0
LAB_0060c830:
0060C830  8B 86 09 02 00 00         MOV EAX,dword ptr [ESI + 0x209]
0060C836  85 C0                     TEST EAX,EAX
0060C838  76 10                     JBE 0x0060c84a
0060C83A  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
0060C83D  40                        INC EAX
0060C83E  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
0060C841  3B 45 90                  CMP EAX,dword ptr [EBP + -0x70]
0060C844  0F 8C 27 FF FF FF         JL 0x0060c771
LAB_0060c84a:
0060C84A  8B 8D 70 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff70]
0060C850  8B 91 09 02 00 00         MOV EDX,dword ptr [ECX + 0x209]
0060C856  52                        PUSH EDX
0060C857  E8 8C 5F DF FF            CALL 0x004027e8
LAB_0060c85c:
0060C85C  8B 45 90                  MOV EAX,dword ptr [EBP + -0x70]
0060C85F  EB 2C                     JMP 0x0060c88d
LAB_0060c88d:
0060C88D  8D A5 64 FF FF FF         LEA ESP,[EBP + 0xffffff64]
0060C893  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0060C896  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
0060C89D  5F                        POP EDI
0060C89E  5E                        POP ESI
0060C89F  5B                        POP EBX
0060C8A0  8B E5                     MOV ESP,EBP
0060C8A2  5D                        POP EBP
0060C8A3  C3                        RET
