FUN_005fc4a0:
005FC4A0  55                        PUSH EBP
005FC4A1  8B EC                     MOV EBP,ESP
005FC4A3  83 EC 10                  SUB ESP,0x10
005FC4A6  53                        PUSH EBX
005FC4A7  56                        PUSH ESI
005FC4A8  8B F1                     MOV ESI,ECX
005FC4AA  33 DB                     XOR EBX,EBX
005FC4AC  57                        PUSH EDI
005FC4AD  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
005FC4B0  66 8B 86 4E 03 00 00      MOV AX,word ptr [ESI + 0x34e]
005FC4B7  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
005FC4BA  66 3B C3                  CMP AX,BX
005FC4BD  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
005FC4C0  0F BF C8                  MOVSX ECX,AX
005FC4C3  B8 79 19 8C 02            MOV EAX,0x28c1979
005FC4C8  7C 10                     JL 0x005fc4da
005FC4CA  F7 E9                     IMUL ECX
005FC4CC  D1 FA                     SAR EDX,0x1
005FC4CE  8B C2                     MOV EAX,EDX
005FC4D0  C1 E8 1F                  SHR EAX,0x1f
005FC4D3  03 D0                     ADD EDX,EAX
005FC4D5  0F BF C2                  MOVSX EAX,DX
005FC4D8  EB 0F                     JMP 0x005fc4e9
LAB_005fc4da:
005FC4DA  F7 E9                     IMUL ECX
005FC4DC  D1 FA                     SAR EDX,0x1
005FC4DE  8B CA                     MOV ECX,EDX
005FC4E0  C1 E9 1F                  SHR ECX,0x1f
005FC4E3  03 D1                     ADD EDX,ECX
005FC4E5  0F BF C2                  MOVSX EAX,DX
005FC4E8  48                        DEC EAX
LAB_005fc4e9:
005FC4E9  66 89 86 42 02 00 00      MOV word ptr [ESI + 0x242],AX
005FC4F0  66 8B 86 50 03 00 00      MOV AX,word ptr [ESI + 0x350]
005FC4F7  66 3B C3                  CMP AX,BX
005FC4FA  0F BF C8                  MOVSX ECX,AX
005FC4FD  B8 79 19 8C 02            MOV EAX,0x28c1979
005FC502  7C 10                     JL 0x005fc514
005FC504  F7 E9                     IMUL ECX
005FC506  D1 FA                     SAR EDX,0x1
005FC508  8B C2                     MOV EAX,EDX
005FC50A  C1 E8 1F                  SHR EAX,0x1f
005FC50D  03 D0                     ADD EDX,EAX
005FC50F  0F BF C2                  MOVSX EAX,DX
005FC512  EB 0F                     JMP 0x005fc523
LAB_005fc514:
005FC514  F7 E9                     IMUL ECX
005FC516  D1 FA                     SAR EDX,0x1
005FC518  8B CA                     MOV ECX,EDX
005FC51A  C1 E9 1F                  SHR ECX,0x1f
005FC51D  03 D1                     ADD EDX,ECX
005FC51F  0F BF C2                  MOVSX EAX,DX
005FC522  48                        DEC EAX
LAB_005fc523:
005FC523  66 89 86 44 02 00 00      MOV word ptr [ESI + 0x244],AX
005FC52A  66 8B 86 52 03 00 00      MOV AX,word ptr [ESI + 0x352]
005FC531  66 3B C3                  CMP AX,BX
005FC534  0F BF C8                  MOVSX ECX,AX
005FC537  B8 1F 85 EB 51            MOV EAX,0x51eb851f
005FC53C  7C 11                     JL 0x005fc54f
005FC53E  F7 E9                     IMUL ECX
005FC540  C1 FA 06                  SAR EDX,0x6
005FC543  8B C2                     MOV EAX,EDX
005FC545  C1 E8 1F                  SHR EAX,0x1f
005FC548  03 D0                     ADD EDX,EAX
005FC54A  0F BF C2                  MOVSX EAX,DX
005FC54D  EB 10                     JMP 0x005fc55f
LAB_005fc54f:
005FC54F  F7 E9                     IMUL ECX
005FC551  C1 FA 06                  SAR EDX,0x6
005FC554  8B CA                     MOV ECX,EDX
005FC556  C1 E9 1F                  SHR ECX,0x1f
005FC559  03 D1                     ADD EDX,ECX
005FC55B  0F BF C2                  MOVSX EAX,DX
005FC55E  48                        DEC EAX
LAB_005fc55f:
005FC55F  66 89 86 46 02 00 00      MOV word ptr [ESI + 0x246],AX
005FC566  66 8B 96 6F 04 00 00      MOV DX,word ptr [ESI + 0x46f]
005FC56D  66 69 D2 C9 00            IMUL DX,DX,0xc9
005FC572  66 8B 8E 73 04 00 00      MOV CX,word ptr [ESI + 0x473]
005FC579  83 C2 64                  ADD EDX,0x64
005FC57C  0F BF C2                  MOVSX EAX,DX
005FC57F  66 69 C9 C9 00            IMUL CX,CX,0xc9
005FC584  66 8B 96 77 04 00 00      MOV DX,word ptr [ESI + 0x477]
005FC58B  C7 86 31 02 00 00 FE 00 00 00  MOV dword ptr [ESI + 0x231],0xfe
005FC595  66 69 D2 C8 00            IMUL DX,DX,0xc8
005FC59A  0F BF BE 4E 03 00 00      MOVSX EDI,word ptr [ESI + 0x34e]
005FC5A1  83 C1 64                  ADD ECX,0x64
005FC5A4  83 C2 64                  ADD EDX,0x64
005FC5A7  3B C7                     CMP EAX,EDI
005FC5A9  0F BF C9                  MOVSX ECX,CX
005FC5AC  0F BF D2                  MOVSX EDX,DX
005FC5AF  75 16                     JNZ 0x005fc5c7
005FC5B1  0F BF 86 50 03 00 00      MOVSX EAX,word ptr [ESI + 0x350]
005FC5B8  3B C8                     CMP ECX,EAX
005FC5BA  75 0B                     JNZ 0x005fc5c7
005FC5BC  0F BF 8E 52 03 00 00      MOVSX ECX,word ptr [ESI + 0x352]
005FC5C3  3B D1                     CMP EDX,ECX
005FC5C5  74 31                     JZ 0x005fc5f8
LAB_005fc5c7:
005FC5C7  66 8B 96 6F 04 00 00      MOV DX,word ptr [ESI + 0x46f]
005FC5CE  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
005FC5D5  66 89 96 42 02 00 00      MOV word ptr [ESI + 0x242],DX
005FC5DC  66 8B 86 73 04 00 00      MOV AX,word ptr [ESI + 0x473]
005FC5E3  66 89 86 44 02 00 00      MOV word ptr [ESI + 0x244],AX
005FC5EA  66 8B 8E 77 04 00 00      MOV CX,word ptr [ESI + 0x477]
005FC5F1  66 89 8E 46 02 00 00      MOV word ptr [ESI + 0x246],CX
LAB_005fc5f8:
005FC5F8  0F BF 86 42 02 00 00      MOVSX EAX,word ptr [ESI + 0x242]
005FC5FF  0F BF 96 44 02 00 00      MOVSX EDX,word ptr [ESI + 0x244]
005FC606  0F BF 8E 46 02 00 00      MOVSX ECX,word ptr [ESI + 0x246]
005FC60D  66 3B C3                  CMP AX,BX
005FC610  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
005FC613  7C 56                     JL 0x005fc66b
005FC615  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
005FC61C  7D 4D                     JGE 0x005fc66b
005FC61E  66 3B D3                  CMP DX,BX
005FC621  7C 48                     JL 0x005fc66b
005FC623  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
005FC62A  7D 3F                     JGE 0x005fc66b
005FC62C  66 3B CB                  CMP CX,BX
005FC62F  7C 3A                     JL 0x005fc66b
005FC631  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
005FC638  7D 31                     JGE 0x005fc66b
005FC63A  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
005FC641  0F BF D9                  MOVSX EBX,CX
005FC644  0F AF FB                  IMUL EDI,EBX
005FC647  0F BF 1D 40 B2 7F 00      MOVSX EBX,word ptr [0x007fb240]
005FC64E  0F BF D2                  MOVSX EDX,DX
005FC651  0F AF DA                  IMUL EBX,EDX
005FC654  0F BF D0                  MOVSX EDX,AX
005FC657  03 FB                     ADD EDI,EBX
005FC659  33 DB                     XOR EBX,EBX
005FC65B  03 FA                     ADD EDI,EDX
005FC65D  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
005FC663  39 1C FA                  CMP dword ptr [EDX + EDI*0x8],EBX
005FC666  75 39                     JNZ 0x005fc6a1
005FC668  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
LAB_005fc66b:
005FC66B  8B 7E 18                  MOV EDI,dword ptr [ESI + 0x18]
005FC66E  57                        PUSH EDI
005FC66F  56                        PUSH ESI
005FC670  53                        PUSH EBX
005FC671  51                        PUSH ECX
005FC672  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
005FC678  52                        PUSH EDX
005FC679  50                        PUSH EAX
005FC67A  E8 A6 4C E0 FF            CALL 0x00401325
005FC67F  85 C0                     TEST EAX,EAX
005FC681  75 1E                     JNZ 0x005fc6a1
005FC683  8A 86 52 02 00 00         MOV AL,byte ptr [ESI + 0x252]
005FC689  FE C0                     INC AL
005FC68B  88 86 52 02 00 00         MOV byte ptr [ESI + 0x252],AL
005FC691  B8 01 00 00 00            MOV EAX,0x1
005FC696  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005FC699  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005FC69C  E9 24 01 00 00            JMP 0x005fc7c5
LAB_005fc6a1:
005FC6A1  66 8B 86 42 02 00 00      MOV AX,word ptr [ESI + 0x242]
005FC6A8  66 8B 8E 46 02 00 00      MOV CX,word ptr [ESI + 0x246]
005FC6AF  66 8B 96 44 02 00 00      MOV DX,word ptr [ESI + 0x244]
005FC6B6  66 3B C3                  CMP AX,BX
005FC6B9  0F 8C C2 02 00 00         JL 0x005fc981
005FC6BF  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
005FC6C6  0F 8D B5 02 00 00         JGE 0x005fc981
005FC6CC  66 3B D3                  CMP DX,BX
005FC6CF  0F 8C AC 02 00 00         JL 0x005fc981
005FC6D5  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
005FC6DC  0F 8D 9F 02 00 00         JGE 0x005fc981
005FC6E2  66 3B CB                  CMP CX,BX
005FC6E5  0F 8C 96 02 00 00         JL 0x005fc981
005FC6EB  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
005FC6F2  0F 8D 89 02 00 00         JGE 0x005fc981
005FC6F8  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
005FC6FF  0F BF C9                  MOVSX ECX,CX
005FC702  0F AF F9                  IMUL EDI,ECX
005FC705  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
005FC70C  0F BF D2                  MOVSX EDX,DX
005FC70F  0F AF CA                  IMUL ECX,EDX
005FC712  0F BF C0                  MOVSX EAX,AX
005FC715  03 F9                     ADD EDI,ECX
005FC717  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
005FC71D  03 F8                     ADD EDI,EAX
005FC71F  8B 3C F9                  MOV EDI,dword ptr [ECX + EDI*0x8]
005FC722  3B FB                     CMP EDI,EBX
005FC724  0F 84 57 02 00 00         JZ 0x005fc981
005FC72A  8B 17                     MOV EDX,dword ptr [EDI]
005FC72C  8B CF                     MOV ECX,EDI
005FC72E  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
005FC731  83 F8 1B                  CMP EAX,0x1b
005FC734  74 0E                     JZ 0x005fc744
005FC736  83 F8 07                  CMP EAX,0x7
005FC739  74 09                     JZ 0x005fc744
005FC73B  83 F8 13                  CMP EAX,0x13
005FC73E  0F 85 3D 02 00 00         JNZ 0x005fc981
LAB_005fc744:
005FC744  8B 07                     MOV EAX,dword ptr [EDI]
005FC746  68 FE 00 00 00            PUSH 0xfe
005FC74B  8B CF                     MOV ECX,EDI
005FC74D  FF 90 14 01 00 00         CALL dword ptr [EAX + 0x114]
005FC753  85 C0                     TEST EAX,EAX
005FC755  0F 84 26 02 00 00         JZ 0x005fc981
005FC75B  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
005FC75E  8B 17                     MOV EDX,dword ptr [EDI]
005FC760  50                        PUSH EAX
005FC761  8B CF                     MOV ECX,EDI
005FC763  FF 92 18 01 00 00         CALL dword ptr [EDX + 0x118]
005FC769  8B 4F 24                  MOV ECX,dword ptr [EDI + 0x24]
005FC76C  89 8E A3 02 00 00         MOV dword ptr [ESI + 0x2a3],ECX
005FC772  66 8B 57 32               MOV DX,word ptr [EDI + 0x32]
005FC776  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
005FC77C  66 89 96 AB 02 00 00      MOV word ptr [ESI + 0x2ab],DX
005FC783  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
005FC786  3B CB                     CMP ECX,EBX
005FC788  89 86 A7 02 00 00         MOV dword ptr [ESI + 0x2a7],EAX
005FC78E  C6 86 4E 02 00 00 01      MOV byte ptr [ESI + 0x24e],0x1
005FC795  C6 86 4F 02 00 00 01      MOV byte ptr [ESI + 0x24f],0x1
005FC79C  C7 86 3A 02 00 00 04 00 00 00  MOV dword ptr [ESI + 0x23a],0x4
005FC7A6  74 13                     JZ 0x005fc7bb
005FC7A8  8B 97 ED 01 00 00         MOV EDX,dword ptr [EDI + 0x1ed]
005FC7AE  8B 86 ED 01 00 00         MOV EAX,dword ptr [ESI + 0x1ed]
005FC7B4  52                        PUSH EDX
005FC7B5  50                        PUSH EAX
005FC7B6  E8 A5 DC 0E 00            CALL 0x006ea460
LAB_005fc7bb:
005FC7BB  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
005FC7BE  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
LAB_005fc7c5:
005FC7C5  8A 96 54 03 00 00         MOV DL,byte ptr [ESI + 0x354]
005FC7CB  B8 89 88 88 88            MOV EAX,0x88888889
005FC7D0  88 96 51 02 00 00         MOV byte ptr [ESI + 0x251],DL
005FC7D6  8B 96 54 03 00 00         MOV EDX,dword ptr [ESI + 0x354]
005FC7DC  F7 EA                     IMUL EDX
005FC7DE  8B 86 54 03 00 00         MOV EAX,dword ptr [ESI + 0x354]
005FC7E4  0F BF 8E 4E 03 00 00      MOVSX ECX,word ptr [ESI + 0x34e]
005FC7EB  0F BF BE 50 03 00 00      MOVSX EDI,word ptr [ESI + 0x350]
005FC7F2  0F BF 9E 52 03 00 00      MOVSX EBX,word ptr [ESI + 0x352]
005FC7F9  03 D0                     ADD EDX,EAX
005FC7FB  89 8E 77 02 00 00         MOV dword ptr [ESI + 0x277],ECX
005FC801  C1 FA 03                  SAR EDX,0x3
005FC804  8B C2                     MOV EAX,EDX
005FC806  89 8E BE 02 00 00         MOV dword ptr [ESI + 0x2be],ECX
005FC80C  8B 8E 3E 03 00 00         MOV ECX,dword ptr [ESI + 0x33e]
005FC812  89 BE 7B 02 00 00         MOV dword ptr [ESI + 0x27b],EDI
005FC818  C1 E8 1F                  SHR EAX,0x1f
005FC81B  03 D0                     ADD EDX,EAX
005FC81D  51                        PUSH ECX
005FC81E  8B CE                     MOV ECX,ESI
005FC820  89 9E 7F 02 00 00         MOV dword ptr [ESI + 0x27f],EBX
005FC826  89 96 BA 02 00 00         MOV dword ptr [ESI + 0x2ba],EDX
005FC82C  89 BE C2 02 00 00         MOV dword ptr [ESI + 0x2c2],EDI
005FC832  89 9E C6 02 00 00         MOV dword ptr [ESI + 0x2c6],EBX
005FC838  C7 86 31 02 00 00 FE 00 00 00  MOV dword ptr [ESI + 0x231],0xfe
005FC842  E8 6F 5A E0 FF            CALL 0x004022b6
005FC847  8A 96 32 03 00 00         MOV DL,byte ptr [ESI + 0x332]
005FC84D  89 86 B1 02 00 00         MOV dword ptr [ESI + 0x2b1],EAX
005FC853  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005FC856  88 96 35 02 00 00         MOV byte ptr [ESI + 0x235],DL
005FC85C  85 C0                     TEST EAX,EAX
005FC85E  C7 86 36 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x236],0x0
005FC868  C7 86 3E 02 00 00 D0 07 00 00  MOV dword ptr [ESI + 0x23e],0x7d0
005FC872  0F 84 E9 00 00 00         JZ 0x005fc961
005FC878  BF 01 00 00 00            MOV EDI,0x1
005FC87D  66 39 BE 42 03 00 00      CMP word ptr [ESI + 0x342],DI
005FC884  75 26                     JNZ 0x005fc8ac
005FC886  33 C0                     XOR EAX,EAX
005FC888  8B CE                     MOV ECX,ESI
005FC88A  8A 86 51 02 00 00         MOV AL,byte ptr [ESI + 0x251]
005FC890  50                        PUSH EAX
005FC891  E8 8D 79 E0 FF            CALL 0x00404223
005FC896  C7 86 3A 02 00 00 02 00 00 00  MOV dword ptr [ESI + 0x23a],0x2
005FC8A0  C6 86 E9 02 00 00 01      MOV byte ptr [ESI + 0x2e9],0x1
005FC8A7  E9 B5 00 00 00            JMP 0x005fc961
LAB_005fc8ac:
005FC8AC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005FC8AF  85 C0                     TEST EAX,EAX
005FC8B1  75 56                     JNZ 0x005fc909
005FC8B3  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
005FC8B6  33 D2                     XOR EDX,EDX
005FC8B8  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
005FC8BE  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
005FC8C4  B9 0B 00 00 00            MOV ECX,0xb
005FC8C9  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
005FC8CC  C1 E8 10                  SHR EAX,0x10
005FC8CF  F7 F1                     DIV ECX
005FC8D1  8B 8E 54 03 00 00         MOV ECX,dword ptr [ESI + 0x354]
005FC8D7  B8 1E 00 00 00            MOV EAX,0x1e
005FC8DC  2B C2                     SUB EAX,EDX
005FC8DE  8B 96 7F 02 00 00         MOV EDX,dword ptr [ESI + 0x27f]
005FC8E4  50                        PUSH EAX
005FC8E5  8B 86 7B 02 00 00         MOV EAX,dword ptr [ESI + 0x27b]
005FC8EB  6A 00                     PUSH 0x0
005FC8ED  83 EA 1E                  SUB EDX,0x1e
005FC8F0  51                        PUSH ECX
005FC8F1  8B 8E 77 02 00 00         MOV ECX,dword ptr [ESI + 0x277]
005FC8F7  52                        PUSH EDX
005FC8F8  50                        PUSH EAX
005FC8F9  51                        PUSH ECX
005FC8FA  8B CE                     MOV ECX,ESI
005FC8FC  E8 C5 76 E0 FF            CALL 0x00403fc6
005FC901  89 BE 3A 02 00 00         MOV dword ptr [ESI + 0x23a],EDI
005FC907  EB 58                     JMP 0x005fc961
LAB_005fc909:
005FC909  66 8B 86 46 02 00 00      MOV AX,word ptr [ESI + 0x246]
005FC910  8B 96 54 03 00 00         MOV EDX,dword ptr [ESI + 0x354]
005FC916  66 69 C0 C8 00            IMUL AX,AX,0xc8
005FC91B  83 C0 64                  ADD EAX,0x64
005FC91E  6A 1E                     PUSH 0x1e
005FC920  0F BF C8                  MOVSX ECX,AX
005FC923  57                        PUSH EDI
005FC924  52                        PUSH EDX
005FC925  66 8B 96 44 02 00 00      MOV DX,word ptr [ESI + 0x244]
005FC92C  51                        PUSH ECX
005FC92D  66 8B 8E 42 02 00 00      MOV CX,word ptr [ESI + 0x242]
005FC934  66 69 D2 C9 00            IMUL DX,DX,0xc9
005FC939  66 69 C9 C9 00            IMUL CX,CX,0xc9
005FC93E  83 C2 64                  ADD EDX,0x64
005FC941  83 C1 64                  ADD ECX,0x64
005FC944  0F BF C2                  MOVSX EAX,DX
005FC947  0F BF D1                  MOVSX EDX,CX
005FC94A  50                        PUSH EAX
005FC94B  52                        PUSH EDX
005FC94C  8B CE                     MOV ECX,ESI
005FC94E  E8 73 76 E0 FF            CALL 0x00403fc6
005FC953  85 C0                     TEST EAX,EAX
005FC955  74 0A                     JZ 0x005fc961
005FC957  C7 86 3A 02 00 00 02 00 00 00  MOV dword ptr [ESI + 0x23a],0x2
LAB_005fc961:
005FC961  83 C8 FF                  OR EAX,0xffffffff
005FC964  89 86 D6 02 00 00         MOV dword ptr [ESI + 0x2d6],EAX
005FC96A  89 86 D2 02 00 00         MOV dword ptr [ESI + 0x2d2],EAX
005FC970  A1 38 2A 80 00            MOV EAX,[0x00802a38]
005FC975  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
005FC97B  89 8E E0 02 00 00         MOV dword ptr [ESI + 0x2e0],ECX
LAB_005fc981:
005FC981  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005FC984  5F                        POP EDI
005FC985  5E                        POP ESI
005FC986  5B                        POP EBX
005FC987  8B E5                     MOV ESP,EBP
005FC989  5D                        POP EBP
005FC98A  C3                        RET
