FUN_00462180:
00462180  55                        PUSH EBP
00462181  8B EC                     MOV EBP,ESP
00462183  81 EC 98 00 00 00         SUB ESP,0x98
00462189  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0046218C  53                        PUSH EBX
0046218D  56                        PUSH ESI
0046218E  57                        PUSH EDI
0046218F  85 C0                     TEST EAX,EAX
00462191  8B F1                     MOV ESI,ECX
00462193  BB 09 00 00 00            MOV EBX,0x9
00462198  BF 01 00 00 00            MOV EDI,0x1
0046219D  74 08                     JZ 0x004621a7
0046219F  3B C7                     CMP EAX,EDI
004621A1  0F 85 79 01 00 00         JNZ 0x00462320
LAB_004621a7:
004621A7  B9 17 00 00 00            MOV ECX,0x17
004621AC  33 C0                     XOR EAX,EAX
004621AE  8D BE CC 02 00 00         LEA EDI,[ESI + 0x2cc]
004621B4  33 D2                     XOR EDX,EDX
004621B6  F3 AB                     STOSD.REP ES:EDI
004621B8  89 86 C4 02 00 00         MOV dword ptr [ESI + 0x2c4],EAX
004621BE  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
004621C1  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
004621C7  05 39 30 00 00            ADD EAX,0x3039
004621CC  B9 1F 00 00 00            MOV ECX,0x1f
004621D1  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
004621D4  C1 E8 10                  SHR EAX,0x10
004621D7  F7 F1                     DIV ECX
004621D9  83 C2 1E                  ADD EDX,0x1e
004621DC  66 89 96 F8 00 00 00      MOV word ptr [ESI + 0xf8],DX
004621E3  8B 96 3B 03 00 00         MOV EDX,dword ptr [ESI + 0x33b]
004621E9  66 8B 86 3F 03 00 00      MOV AX,word ptr [ESI + 0x33f]
004621F0  8A 8E 3A 03 00 00         MOV CL,byte ptr [ESI + 0x33a]
004621F6  52                        PUSH EDX
004621F7  50                        PUSH EAX
004621F8  51                        PUSH ECX
004621F9  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004621FF  E8 B6 06 FA FF            CALL 0x004028ba
00462204  8B F8                     MOV EDI,EAX
00462206  85 FF                     TEST EDI,EDI
00462208  0F 84 0C 13 00 00         JZ 0x0046351a
0046220E  3B FE                     CMP EDI,ESI
00462210  0F 84 04 13 00 00         JZ 0x0046351a
00462216  39 9E F7 06 00 00         CMP dword ptr [ESI + 0x6f7],EBX
0046221C  75 1C                     JNZ 0x0046223a
0046221E  8B 17                     MOV EDX,dword ptr [EDI]
00462220  8B CF                     MOV ECX,EDI
00462222  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
00462225  83 F8 3B                  CMP EAX,0x3b
00462228  74 10                     JZ 0x0046223a
0046222A  8B 07                     MOV EAX,dword ptr [EDI]
0046222C  8B CF                     MOV ECX,EDI
0046222E  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
00462231  83 F8 60                  CMP EAX,0x60
00462234  0F 85 E0 12 00 00         JNZ 0x0046351a
LAB_0046223a:
0046223A  8B 4F 18                  MOV ECX,dword ptr [EDI + 0x18]
0046223D  89 8E F4 07 00 00         MOV dword ptr [ESI + 0x7f4],ECX
00462243  8B 57 2C                  MOV EDX,dword ptr [EDI + 0x2c]
00462246  89 96 F8 07 00 00         MOV dword ptr [ESI + 0x7f8],EDX
0046224C  8B 86 3B 03 00 00         MOV EAX,dword ptr [ESI + 0x33b]
00462252  8D 8E 04 08 00 00         LEA ECX,[ESI + 0x804]
00462258  89 86 FC 07 00 00         MOV dword ptr [ESI + 0x7fc],EAX
0046225E  8D 96 02 08 00 00         LEA EDX,[ESI + 0x802]
00462264  51                        PUSH ECX
00462265  8D 86 00 08 00 00         LEA EAX,[ESI + 0x800]
0046226B  52                        PUSH EDX
0046226C  50                        PUSH EAX
0046226D  8B CF                     MOV ECX,EDI
0046226F  E8 51 F6 F9 FF            CALL 0x004018c5
00462274  66 8B 8E 41 03 00 00      MOV CX,word ptr [ESI + 0x341]
0046227B  33 C0                     XOR EAX,EAX
0046227D  66 89 8E F2 07 00 00      MOV word ptr [ESI + 0x7f2],CX
00462284  8B 96 36 03 00 00         MOV EDX,dword ptr [ESI + 0x336]
0046228A  89 96 DE 07 00 00         MOV dword ptr [ESI + 0x7de],EDX
00462290  89 86 2E 08 00 00         MOV dword ptr [ESI + 0x82e],EAX
00462296  89 86 32 08 00 00         MOV dword ptr [ESI + 0x832],EAX
0046229C  C7 86 36 08 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x836],0xffffffff
004622A6  89 86 3A 08 00 00         MOV dword ptr [ESI + 0x83a],EAX
004622AC  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
004622AF  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
004622B5  05 39 30 00 00            ADD EAX,0x3039
004622BA  33 D2                     XOR EDX,EDX
004622BC  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
004622BF  B9 0B 00 00 00            MOV ECX,0xb
004622C4  C1 E8 10                  SHR EAX,0x10
004622C7  F7 F1                     DIV ECX
004622C9  8B CF                     MOV ECX,EDI
004622CB  83 C2 0A                  ADD EDX,0xa
004622CE  83 C8 FF                  OR EAX,0xffffffff
004622D1  89 96 18 08 00 00         MOV dword ptr [ESI + 0x818],EDX
004622D7  66 89 86 0A 08 00 00      MOV word ptr [ESI + 0x80a],AX
004622DE  66 89 86 08 08 00 00      MOV word ptr [ESI + 0x808],AX
004622E5  66 89 86 06 08 00 00      MOV word ptr [ESI + 0x806],AX
004622EC  8B 17                     MOV EDX,dword ptr [EDI]
004622EE  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004622F1  83 F8 4D                  CMP EAX,0x4d
004622F4  75 09                     JNZ 0x004622ff
004622F6  66 89 9E 16 08 00 00      MOV word ptr [ESI + 0x816],BX
004622FD  EB 09                     JMP 0x00462308
LAB_004622ff:
004622FF  66 C7 86 16 08 00 00 05 00  MOV word ptr [ESI + 0x816],0x5
LAB_00462308:
00462308  66 8B 86 16 08 00 00      MOV AX,word ptr [ESI + 0x816]
0046230F  BF 01 00 00 00            MOV EDI,0x1
00462314  66 69 C0 C9 00            IMUL AX,AX,0xc9
00462319  66 89 86 14 08 00 00      MOV word ptr [ESI + 0x814],AX
LAB_00462320:
00462320  8B 86 F7 06 00 00         MOV EAX,dword ptr [ESI + 0x6f7]
00462326  3B C3                     CMP EAX,EBX
00462328  0F 84 1F 05 00 00         JZ 0x0046284d
0046232E  83 F8 15                  CMP EAX,0x15
00462331  0F 84 0E 05 00 00         JZ 0x00462845
00462337  8B 8E 36 08 00 00         MOV ECX,dword ptr [ESI + 0x836]
0046233D  41                        INC ECX
0046233E  8B C1                     MOV EAX,ECX
00462340  89 8E 36 08 00 00         MOV dword ptr [ESI + 0x836],ECX
00462346  99                        CDQ
00462347  B9 05 00 00 00            MOV ECX,0x5
0046234C  F7 F9                     IDIV ECX
0046234E  85 D2                     TEST EDX,EDX
00462350  0F 85 50 04 00 00         JNZ 0x004627a6
00462356  8B 86 2E 08 00 00         MOV EAX,dword ptr [ESI + 0x82e]
0046235C  85 C0                     TEST EAX,EAX
0046235E  0F 85 42 04 00 00         JNZ 0x004627a6
00462364  8B CE                     MOV ECX,ESI
00462366  E8 4F F1 F9 FF            CALL 0x004014ba
0046236B  3B C3                     CMP EAX,EBX
0046236D  0F 87 33 04 00 00         JA 0x004627a6
switchD_00462373::switchD:
00462373  FF 24 85 00 49 46 00      JMP dword ptr [EAX*0x4 + 0x464900]
switchD_00462373::caseD_2:
0046237A  B8 04 00 00 00            MOV EAX,0x4
0046237F  5F                        POP EDI
00462380  5E                        POP ESI
00462381  5B                        POP EBX
00462382  8B E5                     MOV ESP,EBP
00462384  5D                        POP EBP
00462385  C2 04 00                  RET 0x4
switchD_00462373::caseD_6:
00462388  8B 8E 32 08 00 00         MOV ECX,dword ptr [ESI + 0x832]
0046238E  33 FF                     XOR EDI,EDI
00462390  3B CF                     CMP ECX,EDI
00462392  75 16                     JNZ 0x004623aa
00462394  C7 86 32 08 00 00 01 00 00 00  MOV dword ptr [ESI + 0x832],0x1
0046239E  8B 96 18 08 00 00         MOV EDX,dword ptr [ESI + 0x818]
004623A4  89 96 3A 08 00 00         MOV dword ptr [ESI + 0x83a],EDX
LAB_004623aa:
004623AA  8B 9E 3A 08 00 00         MOV EBX,dword ptr [ESI + 0x83a]
004623B0  43                        INC EBX
004623B1  89 9E 3A 08 00 00         MOV dword ptr [ESI + 0x83a],EBX
004623B7  8B 96 18 08 00 00         MOV EDX,dword ptr [ESI + 0x818]
004623BD  8B CB                     MOV ECX,EBX
004623BF  3B CA                     CMP ECX,EDX
004623C1  7E 65                     JLE 0x00462428
004623C3  8D 4D E4                  LEA ECX,[EBP + -0x1c]
004623C6  8D 55 E8                  LEA EDX,[EBP + -0x18]
004623C9  51                        PUSH ECX
004623CA  8D 4D E0                  LEA ECX,[EBP + -0x20]
004623CD  52                        PUSH EDX
004623CE  51                        PUSH ECX
004623CF  50                        PUSH EAX
004623D0  8B CE                     MOV ECX,ESI
004623D2  89 BE 3A 08 00 00         MOV dword ptr [ESI + 0x83a],EDI
004623D8  E8 89 3A FA FF            CALL 0x00405e66
004623DD  85 C0                     TEST EAX,EAX
004623DF  75 21                     JNZ 0x00462402
004623E1  66 81 86 14 08 00 00 37 FF  ADD word ptr [ESI + 0x814],0xff37
004623EA  66 83 BE 14 08 00 00 64   CMP word ptr [ESI + 0x814],0x64
004623F2  7D 34                     JGE 0x00462428
004623F4  B8 08 00 00 00            MOV EAX,0x8
004623F9  5F                        POP EDI
004623FA  5E                        POP ESI
004623FB  5B                        POP EBX
004623FC  8B E5                     MOV ESP,EBP
004623FE  5D                        POP EBP
004623FF  C2 04 00                  RET 0x4
LAB_00462402:
00462402  0F BF 55 E4               MOVSX EDX,word ptr [EBP + -0x1c]
00462406  0F BF 45 E8               MOVSX EAX,word ptr [EBP + -0x18]
0046240A  0F BF 4D E0               MOVSX ECX,word ptr [EBP + -0x20]
0046240E  52                        PUSH EDX
0046240F  50                        PUSH EAX
00462410  51                        PUSH ECX
00462411  8B CE                     MOV ECX,ESI
00462413  C7 86 2E 08 00 00 03 00 00 00  MOV dword ptr [ESI + 0x82e],0x3
0046241D  E8 49 2B FA FF            CALL 0x00404f6b
00462422  57                        PUSH EDI
00462423  E9 9B 00 00 00            JMP 0x004624c3
LAB_00462428:
00462428  89 BE 2E 08 00 00         MOV dword ptr [ESI + 0x82e],EDI
0046242E  E9 73 03 00 00            JMP 0x004627a6
switchD_00462373::caseD_1:
00462433  66 8B 96 00 08 00 00      MOV DX,word ptr [ESI + 0x800]
0046243A  C7 86 2E 08 00 00 02 00 00 00  MOV dword ptr [ESI + 0x82e],0x2
00462444  66 3B 96 06 08 00 00      CMP DX,word ptr [ESI + 0x806]
0046244B  75 24                     JNZ 0x00462471
0046244D  66 8B 86 02 08 00 00      MOV AX,word ptr [ESI + 0x802]
00462454  66 3B 86 08 08 00 00      CMP AX,word ptr [ESI + 0x808]
0046245B  75 14                     JNZ 0x00462471
0046245D  66 8B 8E 04 08 00 00      MOV CX,word ptr [ESI + 0x804]
00462464  66 3B 8E 0A 08 00 00      CMP CX,word ptr [ESI + 0x80a]
0046246B  0F 84 35 03 00 00         JZ 0x004627a6
LAB_00462471:
00462471  8B CE                     MOV ECX,ESI
00462473  E8 DD 13 FA FF            CALL 0x00403855
00462478  0F BF 96 04 08 00 00      MOVSX EDX,word ptr [ESI + 0x804]
0046247F  0F BF 86 02 08 00 00      MOVSX EAX,word ptr [ESI + 0x802]
00462486  0F BF 8E 00 08 00 00      MOVSX ECX,word ptr [ESI + 0x800]
0046248D  52                        PUSH EDX
0046248E  50                        PUSH EAX
0046248F  51                        PUSH ECX
00462490  8B CE                     MOV ECX,ESI
00462492  E8 D4 2A FA FF            CALL 0x00404f6b
00462497  66 8B 96 00 08 00 00      MOV DX,word ptr [ESI + 0x800]
0046249E  66 8B 86 02 08 00 00      MOV AX,word ptr [ESI + 0x802]
004624A5  66 8B 8E 04 08 00 00      MOV CX,word ptr [ESI + 0x804]
004624AC  66 89 96 06 08 00 00      MOV word ptr [ESI + 0x806],DX
004624B3  66 89 86 08 08 00 00      MOV word ptr [ESI + 0x808],AX
004624BA  66 89 8E 0A 08 00 00      MOV word ptr [ESI + 0x80a],CX
004624C1  6A 00                     PUSH 0x0
LAB_004624c3:
004624C3  8B CE                     MOV ECX,ESI
004624C5  E8 14 0D FA FF            CALL 0x004031de
004624CA  83 F8 FF                  CMP EAX,-0x1
004624CD  0F 85 D3 02 00 00         JNZ 0x004627a6
004624D3  0B C0                     OR EAX,EAX
004624D5  5F                        POP EDI
004624D6  5E                        POP ESI
004624D7  5B                        POP EBX
004624D8  8B E5                     MOV ESP,EBP
004624DA  5D                        POP EBP
004624DB  C2 04 00                  RET 0x4
switchD_00462373::caseD_9:
004624DE  8B 16                     MOV EDX,dword ptr [ESI]
004624E0  8B CE                     MOV ECX,ESI
004624E2  C7 86 2E 08 00 00 01 00 00 00  MOV dword ptr [ESI + 0x82e],0x1
004624EC  FF 52 20                  CALL dword ptr [EDX + 0x20]
004624EF  8B CE                     MOV ECX,ESI
004624F1  E8 91 04 FA FF            CALL 0x00402987
004624F6  50                        PUSH EAX
004624F7  66 8B 46 6C               MOV AX,word ptr [ESI + 0x6c]
004624FB  50                        PUSH EAX
004624FC  8B CE                     MOV ECX,ESI
004624FE  E8 E6 FC F9 FF            CALL 0x004021e9
00462503  E9 9E 02 00 00            JMP 0x004627a6
switchD_00462373::caseD_3:
00462508  8B 16                     MOV EDX,dword ptr [ESI]
0046250A  8B CE                     MOV ECX,ESI
0046250C  C7 86 2E 08 00 00 00 00 00 00  MOV dword ptr [ESI + 0x82e],0x0
00462516  FF 52 20                  CALL dword ptr [EDX + 0x20]
00462519  E9 88 02 00 00            JMP 0x004627a6
switchD_00462373::caseD_0:
0046251E  8B 86 FC 07 00 00         MOV EAX,dword ptr [ESI + 0x7fc]
00462524  66 8B 8E 04 08 00 00      MOV CX,word ptr [ESI + 0x804]
0046252B  66 8B 96 02 08 00 00      MOV DX,word ptr [ESI + 0x802]
00462532  83 F8 03                  CMP EAX,0x3
00462535  66 8B 86 00 08 00 00      MOV AX,word ptr [ESI + 0x800]
0046253C  75 6A                     JNZ 0x004625a8
0046253E  66 85 C0                  TEST AX,AX
00462541  0F 8C B6 00 00 00         JL 0x004625fd
00462547  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0046254E  66 3B C7                  CMP AX,DI
00462551  0F 8D A6 00 00 00         JGE 0x004625fd
00462557  66 85 D2                  TEST DX,DX
0046255A  0F 8C 9D 00 00 00         JL 0x004625fd
00462560  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00462567  0F 8D 90 00 00 00         JGE 0x004625fd
0046256D  66 85 C9                  TEST CX,CX
00462570  0F 8C 87 00 00 00         JL 0x004625fd
00462576  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0046257D  7D 7E                     JGE 0x004625fd
0046257F  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00462586  0F BF C9                  MOVSX ECX,CX
00462589  0F BF D2                  MOVSX EDX,DX
0046258C  0F AF CB                  IMUL ECX,EBX
0046258F  0F BF FF                  MOVSX EDI,DI
00462592  0F AF D7                  IMUL EDX,EDI
00462595  0F BF C0                  MOVSX EAX,AX
00462598  03 CA                     ADD ECX,EDX
0046259A  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
004625A0  03 C8                     ADD ECX,EAX
004625A2  8B 7C CA 04               MOV EDI,dword ptr [EDX + ECX*0x8 + 0x4]
004625A6  EB 57                     JMP 0x004625ff
LAB_004625a8:
004625A8  66 85 C0                  TEST AX,AX
004625AB  7C 50                     JL 0x004625fd
004625AD  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
004625B4  66 3B C7                  CMP AX,DI
004625B7  7D 44                     JGE 0x004625fd
004625B9  66 85 D2                  TEST DX,DX
004625BC  7C 3F                     JL 0x004625fd
004625BE  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
004625C5  7D 36                     JGE 0x004625fd
004625C7  66 85 C9                  TEST CX,CX
004625CA  7C 31                     JL 0x004625fd
004625CC  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
004625D3  7D 28                     JGE 0x004625fd
004625D5  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
004625DC  0F BF C9                  MOVSX ECX,CX
004625DF  0F BF D2                  MOVSX EDX,DX
004625E2  0F AF CB                  IMUL ECX,EBX
004625E5  0F BF FF                  MOVSX EDI,DI
004625E8  0F AF D7                  IMUL EDX,EDI
004625EB  0F BF C0                  MOVSX EAX,AX
004625EE  03 CA                     ADD ECX,EDX
004625F0  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
004625F6  03 C8                     ADD ECX,EAX
004625F8  8B 3C CA                  MOV EDI,dword ptr [EDX + ECX*0x8]
004625FB  EB 02                     JMP 0x004625ff
LAB_004625fd:
004625FD  33 FF                     XOR EDI,EDI
LAB_004625ff:
004625FF  66 8B 46 41               MOV AX,word ptr [ESI + 0x41]
00462603  66 8B 4E 43               MOV CX,word ptr [ESI + 0x43]
00462607  66 8B 56 45               MOV DX,word ptr [ESI + 0x45]
0046260B  66 89 85 70 FF FF FF      MOV word ptr [EBP + 0xffffff70],AX
00462612  8A 86 B2 02 00 00         MOV AL,byte ptr [ESI + 0x2b2]
00462618  66 89 8D 72 FF FF FF      MOV word ptr [EBP + 0xffffff72],CX
0046261F  84 C0                     TEST AL,AL
00462621  66 89 95 74 FF FF FF      MOV word ptr [EBP + 0xffffff74],DX
00462628  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
0046262F  0F 86 5E 01 00 00         JBE 0x00462793
00462635  8D 9E A8 02 00 00         LEA EBX,[ESI + 0x2a8]
LAB_0046263b:
0046263B  66 8B 46 6C               MOV AX,word ptr [ESI + 0x6c]
0046263F  8D 4B FE                  LEA ECX,[EBX + -0x2]
00462642  50                        PUSH EAX
00462643  8B 01                     MOV EAX,dword ptr [ECX]
00462645  83 EC 08                  SUB ESP,0x8
00462648  8B D4                     MOV EDX,ESP
0046264A  66 8B 49 04               MOV CX,word ptr [ECX + 0x4]
0046264E  89 02                     MOV dword ptr [EDX],EAX
00462650  66 89 4A 04               MOV word ptr [EDX + 0x4],CX
00462654  8D 55 90                  LEA EDX,[EBP + -0x70]
00462657  52                        PUSH EDX
00462658  8B CE                     MOV ECX,ESI
0046265A  E8 CD 0D FA FF            CALL 0x0040342c
0046265F  8B 08                     MOV ECX,dword ptr [EAX]
00462661  66 8B 56 41               MOV DX,word ptr [ESI + 0x41]
00462665  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
00462668  66 03 D1                  ADD DX,CX
0046266B  66 8B 4E 43               MOV CX,word ptr [ESI + 0x43]
0046266F  66 8B 40 04               MOV AX,word ptr [EAX + 0x4]
00462673  66 2B 4D D6               SUB CX,word ptr [EBP + -0x2a]
00462677  66 03 46 45               ADD AX,word ptr [ESI + 0x45]
0046267B  66 89 95 76 FF FF FF      MOV word ptr [EBP + 0xffffff76],DX
00462682  66 8B 13                  MOV DX,word ptr [EBX]
00462685  66 89 8D 78 FF FF FF      MOV word ptr [EBP + 0xffffff78],CX
0046268C  66 8B 4E 6C               MOV CX,word ptr [ESI + 0x6c]
00462690  51                        PUSH ECX
00462691  66 89 85 7A FF FF FF      MOV word ptr [EBP + 0xffffff7a],AX
00462698  33 C0                     XOR EAX,EAX
0046269A  83 EC 08                  SUB ESP,0x8
0046269D  66 89 55 D6               MOV word ptr [EBP + -0x2a],DX
004626A1  66 89 45 D4               MOV word ptr [EBP + -0x2c],AX
004626A5  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
004626A8  8B D4                     MOV EDX,ESP
004626AA  89 0A                     MOV dword ptr [EDX],ECX
004626AC  8B CE                     MOV ECX,ESI
004626AE  66 89 42 04               MOV word ptr [EDX + 0x4],AX
004626B2  8D 55 F8                  LEA EDX,[EBP + -0x8]
004626B5  52                        PUSH EDX
004626B6  E8 71 0D FA FF            CALL 0x0040342c
004626BB  8B 08                     MOV ECX,dword ptr [EAX]
004626BD  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
004626C0  66 8B 50 04               MOV DX,word ptr [EAX + 0x4]
004626C4  66 8B C1                  MOV AX,CX
004626C7  66 03 47 41               ADD AX,word ptr [EDI + 0x41]
004626CB  66 89 55 D8               MOV word ptr [EBP + -0x28],DX
004626CF  66 89 85 7C FF FF FF      MOV word ptr [EBP + 0xffffff7c],AX
004626D6  8B 86 F7 06 00 00         MOV EAX,dword ptr [ESI + 0x6f7]
004626DC  66 8B 4F 43               MOV CX,word ptr [EDI + 0x43]
004626E0  83 E8 0A                  SUB EAX,0xa
004626E3  66 2B 4D D6               SUB CX,word ptr [EBP + -0x2a]
004626E7  F7 D8                     NEG EAX
004626E9  1B C0                     SBB EAX,EAX
004626EB  66 89 8D 7E FF FF FF      MOV word ptr [EBP + 0xffffff7e],CX
004626F2  66 8B 57 45               MOV DX,word ptr [EDI + 0x45]
004626F6  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004626F9  24 FE                     AND AL,0xfe
004626FB  66 89 55 80               MOV word ptr [EBP + -0x80],DX
004626FF  40                        INC EAX
00462700  89 8D 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],ECX
00462706  89 45 8A                  MOV dword ptr [EBP + -0x76],EAX
00462709  8B 86 DE 07 00 00         MOV EAX,dword ptr [ESI + 0x7de]
0046270F  85 C0                     TEST EAX,EAX
00462711  75 0E                     JNZ 0x00462721
00462713  8B 96 9A 07 00 00         MOV EDX,dword ptr [ESI + 0x79a]
00462719  89 95 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],EDX
0046271F  EB 0A                     JMP 0x0046272b
LAB_00462721:
00462721  C7 85 6C FF FF FF A1 00 00 00  MOV dword ptr [EBP + 0xffffff6c],0xa1
LAB_0046272b:
0046272B  66 8B 46 6C               MOV AX,word ptr [ESI + 0x6c]
0046272F  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
00462732  66 8B 56 32               MOV DX,word ptr [ESI + 0x32]
00462736  66 89 45 82               MOV word ptr [EBP + -0x7e],AX
0046273A  8D 85 68 FF FF FF         LEA EAX,[EBP + 0xffffff68]
00462740  89 4D 84                  MOV dword ptr [EBP + -0x7c],ECX
00462743  50                        PUSH EAX
00462744  66 89 55 88               MOV word ptr [EBP + -0x78],DX
00462748  E8 CD 05 FA FF            CALL 0x00402d1a
0046274D  8B 86 A2 07 00 00         MOV EAX,dword ptr [ESI + 0x7a2]
00462753  33 C9                     XOR ECX,ECX
00462755  89 8E 3A 08 00 00         MOV dword ptr [ESI + 0x83a],ECX
0046275B  8B 96 DE 07 00 00         MOV EDX,dword ptr [ESI + 0x7de]
00462761  83 C4 04                  ADD ESP,0x4
00462764  48                        DEC EAX
00462765  3B D1                     CMP EDX,ECX
00462767  89 86 A2 07 00 00         MOV dword ptr [ESI + 0x7a2],EAX
0046276D  89 8E AA 07 00 00         MOV dword ptr [ESI + 0x7aa],ECX
00462773  75 04                     JNZ 0x00462779
00462775  85 C0                     TEST EAX,EAX
00462777  7E 1A                     JLE 0x00462793
LAB_00462779:
00462779  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0046277C  33 C9                     XOR ECX,ECX
0046277E  8A 8E B2 02 00 00         MOV CL,byte ptr [ESI + 0x2b2]
00462784  40                        INC EAX
00462785  83 C3 06                  ADD EBX,0x6
00462788  3B C1                     CMP EAX,ECX
0046278A  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0046278D  0F 8C A8 FE FF FF         JL 0x0046263b
LAB_00462793:
00462793  83 BE DE 07 00 00 01      CMP dword ptr [ESI + 0x7de],0x1
0046279A  75 0A                     JNZ 0x004627a6
0046279C  C7 86 2A 07 00 00 00 00 00 00  MOV dword ptr [ESI + 0x72a],0x0
switchD_00462373::default:
004627A6  8B 86 2E 08 00 00         MOV EAX,dword ptr [ESI + 0x82e]
004627AC  85 C0                     TEST EAX,EAX
004627AE  75 18                     JNZ 0x004627c8
004627B0  8B 16                     MOV EDX,dword ptr [ESI]
004627B2  8B CE                     MOV ECX,ESI
004627B4  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
004627BA  B8 02 00 00 00            MOV EAX,0x2
004627BF  5F                        POP EDI
004627C0  5E                        POP ESI
004627C1  5B                        POP EBX
004627C2  8B E5                     MOV ESP,EBP
004627C4  5D                        POP EBP
004627C5  C2 04 00                  RET 0x4
LAB_004627c8:
004627C8  83 F8 01                  CMP EAX,0x1
004627CB  75 19                     JNZ 0x004627e6
004627CD  8B CE                     MOV ECX,ESI
004627CF  E8 79 09 FA FF            CALL 0x0040314d
004627D4  8B F8                     MOV EDI,EAX
004627D6  8B 06                     MOV EAX,dword ptr [ESI]
004627D8  8B CE                     MOV ECX,ESI
004627DA  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
004627E0  85 FF                     TEST EDI,EDI
004627E2  75 53                     JNZ 0x00462837
004627E4  EB 3D                     JMP 0x00462823
LAB_004627e6:
004627E6  83 F8 02                  CMP EAX,0x2
004627E9  75 17                     JNZ 0x00462802
004627EB  50                        PUSH EAX
004627EC  8B CE                     MOV ECX,ESI
004627EE  E8 EB 09 FA FF            CALL 0x004031de
004627F3  8D 48 01                  LEA ECX,[EAX + 0x1]
004627F6  83 F9 04                  CMP ECX,0x4
004627F9  77 3C                     JA 0x00462837
switchD_004627fb::switchD:
004627FB  FF 24 8D 28 49 46 00      JMP dword ptr [ECX*0x4 + 0x464928]
LAB_00462802:
00462802  83 F8 03                  CMP EAX,0x3
00462805  0F 85 14 18 00 00         JNZ 0x0046401f
0046280B  6A 02                     PUSH 0x2
0046280D  8B CE                     MOV ECX,ESI
0046280F  E8 CA 09 FA FF            CALL 0x004031de
00462814  8D 48 01                  LEA ECX,[EAX + 0x1]
00462817  83 F9 04                  CMP ECX,0x4
0046281A  77 1B                     JA 0x00462837
switchD_0046281c::switchD:
0046281C  FF 24 8D 3C 49 46 00      JMP dword ptr [ECX*0x4 + 0x46493c]
FUN_00462180::cf_common_exit_00462823:
00462823  C7 86 36 08 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x836],0xffffffff
0046282D  C7 86 2E 08 00 00 00 00 00 00  MOV dword ptr [ESI + 0x82e],0x0
switchD_004627fb::default:
00462837  B8 02 00 00 00            MOV EAX,0x2
0046283C  5F                        POP EDI
0046283D  5E                        POP ESI
0046283E  5B                        POP EBX
0046283F  8B E5                     MOV ESP,EBP
00462841  5D                        POP EBP
00462842  C2 04 00                  RET 0x4
LAB_00462845:
00462845  3B C3                     CMP EAX,EBX
00462847  0F 85 13 10 00 00         JNZ 0x00463860
LAB_0046284d:
0046284D  8B 86 2E 08 00 00         MOV EAX,dword ptr [ESI + 0x82e]
00462853  85 C0                     TEST EAX,EAX
00462855  75 3D                     JNZ 0x00462894
00462857  0F BF 8E 04 08 00 00      MOVSX ECX,word ptr [ESI + 0x804]
0046285E  0F BF 96 02 08 00 00      MOVSX EDX,word ptr [ESI + 0x802]
00462865  0F BF 86 00 08 00 00      MOVSX EAX,word ptr [ESI + 0x800]
0046286C  51                        PUSH ECX
0046286D  52                        PUSH EDX
0046286E  50                        PUSH EAX
0046286F  8B CE                     MOV ECX,ESI
00462871  89 BE 2E 08 00 00         MOV dword ptr [ESI + 0x82e],EDI
00462877  C7 86 B7 00 00 00 03 00 00 00  MOV dword ptr [ESI + 0xb7],0x3
00462881  E8 E5 26 FA FF            CALL 0x00404f6b
00462886  6A 00                     PUSH 0x0
00462888  8B CE                     MOV ECX,ESI
0046288A  E8 4F 09 FA FF            CALL 0x004031de
0046288F  E9 F5 1F 00 00            JMP 0x00464889
LAB_00462894:
00462894  3B C7                     CMP EAX,EDI
00462896  0F 85 B5 05 00 00         JNZ 0x00462e51
0046289C  6A 02                     PUSH 0x2
0046289E  8B CE                     MOV ECX,ESI
004628A0  E8 39 09 FA FF            CALL 0x004031de
004628A5  40                        INC EAX
004628A6  83 F8 04                  CMP EAX,0x4
004628A9  0F 87 77 1C 00 00         JA 0x00464526
switchD_004628af::switchD:
004628AF  FF 24 85 50 49 46 00      JMP dword ptr [EAX*0x4 + 0x464950]
switchD_004628af::caseD_3:
004628B6  0F BF 86 04 08 00 00      MOVSX EAX,word ptr [ESI + 0x804]
004628BD  0F BF 8E 02 08 00 00      MOVSX ECX,word ptr [ESI + 0x802]
004628C4  0F BF 96 00 08 00 00      MOVSX EDX,word ptr [ESI + 0x800]
004628CB  50                        PUSH EAX
004628CC  51                        PUSH ECX
004628CD  E9 60 05 00 00            JMP 0x00462e32
switchD_004628af::caseD_1:
004628D2  66 8B 86 00 08 00 00      MOV AX,word ptr [ESI + 0x800]
004628D9  66 8B 8E 04 08 00 00      MOV CX,word ptr [ESI + 0x804]
004628E0  66 8B 96 02 08 00 00      MOV DX,word ptr [ESI + 0x802]
004628E7  66 85 C0                  TEST AX,AX
004628EA  0F 8C 75 01 00 00         JL 0x00462a65
004628F0  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
004628F7  66 3B C7                  CMP AX,DI
004628FA  0F 8D 65 01 00 00         JGE 0x00462a65
00462900  66 85 D2                  TEST DX,DX
00462903  0F 8C 5C 01 00 00         JL 0x00462a65
00462909  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00462910  0F 8D 4F 01 00 00         JGE 0x00462a65
00462916  66 85 C9                  TEST CX,CX
00462919  0F 8C 46 01 00 00         JL 0x00462a65
0046291F  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00462926  0F 8D 39 01 00 00         JGE 0x00462a65
0046292C  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00462933  0F BF C9                  MOVSX ECX,CX
00462936  0F BF D2                  MOVSX EDX,DX
00462939  0F AF CB                  IMUL ECX,EBX
0046293C  0F BF FF                  MOVSX EDI,DI
0046293F  0F AF D7                  IMUL EDX,EDI
00462942  0F BF C0                  MOVSX EAX,AX
00462945  03 CA                     ADD ECX,EDX
00462947  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0046294D  03 C8                     ADD ECX,EAX
0046294F  8B 3C CA                  MOV EDI,dword ptr [EDX + ECX*0x8]
00462952  85 FF                     TEST EDI,EDI
00462954  0F 84 0B 01 00 00         JZ 0x00462a65
0046295A  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
0046295D  83 F8 08                  CMP EAX,0x8
00462960  0F 83 FF 00 00 00         JNC 0x00462a65
00462966  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0046296C  85 C9                     TEST ECX,ECX
0046296E  74 11                     JZ 0x00462981
00462970  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00462973  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
0046297B  0F 83 E4 00 00 00         JNC 0x00462a65
LAB_00462981:
00462981  8A 15 8F 8A 80 00         MOV DL,byte ptr [0x00808a8f]
00462987  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
0046298A  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
0046298D  88 45 F4                  MOV byte ptr [EBP + -0xc],AL
00462990  84 D2                     TEST DL,DL
00462992  88 4D F8                  MOV byte ptr [EBP + -0x8],CL
00462995  74 2D                     JZ 0x004629c4
00462997  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0046299A  33 D2                     XOR EDX,EDX
0046299C  25 FF 00 00 00            AND EAX,0xff
004629A1  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
004629A4  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004629A7  25 FF 00 00 00            AND EAX,0xff
004629AC  8A 8C C9 EA 87 80 00      MOV CL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
004629B3  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
004629B6  3A 8C C0 EA 87 80 00      CMP CL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
004629BD  0F 95 C2                  SETNZ DL
004629C0  8B C2                     MOV EAX,EDX
004629C2  EB 7D                     JMP 0x00462a41
LAB_004629c4:
004629C4  3A C1                     CMP AL,CL
004629C6  74 6E                     JZ 0x00462a36
004629C8  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004629CB  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004629CE  25 FF 00 00 00            AND EAX,0xff
004629D3  81 E1 FF 00 00 00         AND ECX,0xff
004629D9  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
004629E0  84 D2                     TEST DL,DL
004629E2  75 12                     JNZ 0x004629f6
004629E4  8A 9C C8 4F 8A 80 00      MOV BL,byte ptr [EAX + ECX*0x8 + 0x808a4f]
004629EB  84 DB                     TEST BL,BL
004629ED  75 07                     JNZ 0x004629f6
004629EF  B8 FE FF FF FF            MOV EAX,0xfffffffe
004629F4  EB 42                     JMP 0x00462a38
LAB_004629f6:
004629F6  80 FA 01                  CMP DL,0x1
004629F9  75 10                     JNZ 0x00462a0b
004629FB  8A 9C C8 4F 8A 80 00      MOV BL,byte ptr [EAX + ECX*0x8 + 0x808a4f]
00462A02  84 DB                     TEST BL,BL
00462A04  75 05                     JNZ 0x00462a0b
00462A06  83 C8 FF                  OR EAX,0xffffffff
00462A09  EB 2D                     JMP 0x00462a38
LAB_00462a0b:
00462A0B  84 D2                     TEST DL,DL
00462A0D  75 11                     JNZ 0x00462a20
00462A0F  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
00462A17  75 07                     JNZ 0x00462a20
00462A19  B8 01 00 00 00            MOV EAX,0x1
00462A1E  EB 18                     JMP 0x00462a38
LAB_00462a20:
00462A20  80 FA 01                  CMP DL,0x1
00462A23  75 11                     JNZ 0x00462a36
00462A25  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
00462A2D  75 07                     JNZ 0x00462a36
00462A2F  B8 02 00 00 00            MOV EAX,0x2
00462A34  EB 02                     JMP 0x00462a38
LAB_00462a36:
00462A36  33 C0                     XOR EAX,EAX
LAB_00462a38:
00462A38  33 C9                     XOR ECX,ECX
00462A3A  85 C0                     TEST EAX,EAX
00462A3C  0F 9C C1                  SETL CL
00462A3F  8B C1                     MOV EAX,ECX
LAB_00462a41:
00462A41  85 C0                     TEST EAX,EAX
00462A43  74 20                     JZ 0x00462a65
00462A45  8B 17                     MOV EDX,dword ptr [EDI]
00462A47  8B CF                     MOV ECX,EDI
00462A49  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
00462A4C  83 F8 3B                  CMP EAX,0x3b
00462A4F  0F 84 D1 1A 00 00         JZ 0x00464526
00462A55  8B 07                     MOV EAX,dword ptr [EDI]
00462A57  8B CF                     MOV ECX,EDI
00462A59  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
00462A5C  83 F8 60                  CMP EAX,0x60
00462A5F  0F 84 C1 1A 00 00         JZ 0x00464526
LAB_00462a65:
00462A65  8B CE                     MOV ECX,ESI
00462A67  E8 E9 0D FA FF            CALL 0x00403855
00462A6C  66 8B 4E 30               MOV CX,word ptr [ESI + 0x30]
00462A70  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
00462A73  51                        PUSH ECX
00462A74  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00462A7A  52                        PUSH EDX
00462A7B  E8 79 32 FA FF            CALL 0x00405cf9
00462A80  8D 4D E4                  LEA ECX,[EBP + -0x1c]
00462A83  8D 55 E8                  LEA EDX,[EBP + -0x18]
00462A86  51                        PUSH ECX
00462A87  52                        PUSH EDX
00462A88  8D 4D E0                  LEA ECX,[EBP + -0x20]
00462A8B  8D 55 EE                  LEA EDX,[EBP + -0x12]
00462A8E  51                        PUSH ECX
00462A8F  52                        PUSH EDX
00462A90  66 8B 56 32               MOV DX,word ptr [ESI + 0x32]
00462A94  8D 4D 0B                  LEA ECX,[EBP + 0xb]
00462A97  51                        PUSH ECX
00462A98  52                        PUSH EDX
00462A99  8B C8                     MOV ECX,EAX
00462A9B  E8 1A EF F9 FF            CALL 0x004019ba
00462AA0  66 81 7D EE FF FF         CMP word ptr [EBP + -0x12],0xffff
00462AA6  0F 84 64 0A 00 00         JZ 0x00463510
00462AAC  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00462AAF  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00462AB2  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00462AB5  66 89 86 00 08 00 00      MOV word ptr [ESI + 0x800],AX
00462ABC  66 89 8E 02 08 00 00      MOV word ptr [ESI + 0x802],CX
00462AC3  66 89 96 04 08 00 00      MOV word ptr [ESI + 0x804],DX
00462ACA  E9 58 03 00 00            JMP 0x00462e27
switchD_004628af::caseD_0:
00462ACF  66 8B 8E 04 08 00 00      MOV CX,word ptr [ESI + 0x804]
00462AD6  66 8B 96 02 08 00 00      MOV DX,word ptr [ESI + 0x802]
00462ADD  8D 86 00 08 00 00         LEA EAX,[ESI + 0x800]
00462AE3  8D BE 04 08 00 00         LEA EDI,[ESI + 0x804]
00462AE9  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00462AEC  8D 9E 02 08 00 00         LEA EBX,[ESI + 0x802]
00462AF2  66 8B 00                  MOV AX,word ptr [EAX]
00462AF5  66 85 C0                  TEST AX,AX
00462AF8  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00462AFB  0F 8C D1 02 00 00         JL 0x00462dd2
00462B01  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
00462B08  0F 8D C4 02 00 00         JGE 0x00462dd2
00462B0E  66 85 D2                  TEST DX,DX
00462B11  0F 8C BB 02 00 00         JL 0x00462dd2
00462B17  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00462B1E  0F 8D AE 02 00 00         JGE 0x00462dd2
00462B24  66 85 C9                  TEST CX,CX
00462B27  0F 8C A5 02 00 00         JL 0x00462dd2
00462B2D  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00462B34  0F 8D 98 02 00 00         JGE 0x00462dd2
00462B3A  0F BF C1                  MOVSX EAX,CX
00462B3D  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
00462B44  0F AF C1                  IMUL EAX,ECX
00462B47  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
00462B4E  0F BF D2                  MOVSX EDX,DX
00462B51  0F AF D1                  IMUL EDX,ECX
00462B54  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
00462B5A  03 C2                     ADD EAX,EDX
00462B5C  0F BF 55 F4               MOVSX EDX,word ptr [EBP + -0xc]
00462B60  03 C2                     ADD EAX,EDX
00462B62  8B 04 C1                  MOV EAX,dword ptr [ECX + EAX*0x8]
00462B65  85 C0                     TEST EAX,EAX
00462B67  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00462B6A  0F 84 62 02 00 00         JZ 0x00462dd2
00462B70  8B 48 24                  MOV ECX,dword ptr [EAX + 0x24]
00462B73  83 F9 08                  CMP ECX,0x8
00462B76  0F 83 56 02 00 00         JNC 0x00462dd2
00462B7C  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
00462B82  85 D2                     TEST EDX,EDX
00462B84  74 11                     JZ 0x00462b97
00462B86  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
00462B89  80 BC C9 E9 87 80 00 08   CMP byte ptr [ECX + ECX*0x8 + 0x8087e9],0x8
00462B91  0F 83 3B 02 00 00         JNC 0x00462dd2
LAB_00462b97:
00462B97  8A 15 8F 8A 80 00         MOV DL,byte ptr [0x00808a8f]
00462B9D  8A 40 24                  MOV AL,byte ptr [EAX + 0x24]
00462BA0  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
00462BA3  88 45 F4                  MOV byte ptr [EBP + -0xc],AL
00462BA6  84 D2                     TEST DL,DL
00462BA8  88 4D DC                  MOV byte ptr [EBP + -0x24],CL
00462BAB  74 2D                     JZ 0x00462bda
00462BAD  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
00462BB0  25 FF 00 00 00            AND EAX,0xff
00462BB5  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
00462BB8  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00462BBB  25 FF 00 00 00            AND EAX,0xff
00462BC0  8A 94 C9 EA 87 80 00      MOV DL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
00462BC7  33 C9                     XOR ECX,ECX
00462BC9  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00462BCC  3A 94 C0 EA 87 80 00      CMP DL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
00462BD3  0F 95 C1                  SETNZ CL
00462BD6  8B C1                     MOV EAX,ECX
00462BD8  EB 7A                     JMP 0x00462c54
LAB_00462bda:
00462BDA  3A C1                     CMP AL,CL
00462BDC  74 6B                     JZ 0x00462c49
00462BDE  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00462BE1  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
00462BE4  25 FF 00 00 00            AND EAX,0xff
00462BE9  81 E1 FF 00 00 00         AND ECX,0xff
00462BEF  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
00462BF6  84 D2                     TEST DL,DL
00462BF8  75 10                     JNZ 0x00462c0a
00462BFA  38 94 C8 4F 8A 80 00      CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],DL
00462C01  75 07                     JNZ 0x00462c0a
00462C03  B8 FE FF FF FF            MOV EAX,0xfffffffe
00462C08  EB 41                     JMP 0x00462c4b
LAB_00462c0a:
00462C0A  80 FA 01                  CMP DL,0x1
00462C0D  75 0F                     JNZ 0x00462c1e
00462C0F  80 BC C8 4F 8A 80 00 00   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x0
00462C17  75 05                     JNZ 0x00462c1e
00462C19  83 C8 FF                  OR EAX,0xffffffff
00462C1C  EB 2D                     JMP 0x00462c4b
LAB_00462c1e:
00462C1E  84 D2                     TEST DL,DL
00462C20  75 11                     JNZ 0x00462c33
00462C22  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
00462C2A  75 07                     JNZ 0x00462c33
00462C2C  B8 01 00 00 00            MOV EAX,0x1
00462C31  EB 18                     JMP 0x00462c4b
LAB_00462c33:
00462C33  80 FA 01                  CMP DL,0x1
00462C36  75 11                     JNZ 0x00462c49
00462C38  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
00462C40  75 07                     JNZ 0x00462c49
00462C42  B8 02 00 00 00            MOV EAX,0x2
00462C47  EB 02                     JMP 0x00462c4b
LAB_00462c49:
00462C49  33 C0                     XOR EAX,EAX
LAB_00462c4b:
00462C4B  33 D2                     XOR EDX,EDX
00462C4D  85 C0                     TEST EAX,EAX
00462C4F  0F 9C C2                  SETL DL
00462C52  8B C2                     MOV EAX,EDX
LAB_00462c54:
00462C54  85 C0                     TEST EAX,EAX
00462C56  0F 84 76 01 00 00         JZ 0x00462dd2
00462C5C  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00462C5F  8B 01                     MOV EAX,dword ptr [ECX]
00462C61  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
00462C64  83 F8 3B                  CMP EAX,0x3b
00462C67  74 11                     JZ 0x00462c7a
00462C69  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00462C6C  8B 11                     MOV EDX,dword ptr [ECX]
00462C6E  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
00462C71  83 F8 60                  CMP EAX,0x60
00462C74  0F 85 58 01 00 00         JNZ 0x00462dd2
LAB_00462c7a:
00462C7A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00462C7D  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00462C80  57                        PUSH EDI
00462C81  53                        PUSH EBX
00462C82  50                        PUSH EAX
00462C83  C7 86 2E 08 00 00 02 00 00 00  MOV dword ptr [ESI + 0x82e],0x2
00462C8D  C7 86 B7 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xb7],0x0
00462C97  E8 29 EC F9 FF            CALL 0x004018c5
00462C9C  0F BF 0F                  MOVSX ECX,word ptr [EDI]
00462C9F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00462CA2  51                        PUSH ECX
00462CA3  0F BF 13                  MOVSX EDX,word ptr [EBX]
00462CA6  0F BF 08                  MOVSX ECX,word ptr [EAX]
00462CA9  52                        PUSH EDX
00462CAA  51                        PUSH ECX
00462CAB  8B CE                     MOV ECX,ESI
00462CAD  E8 B9 22 FA FF            CALL 0x00404f6b
00462CB2  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
00462CB5  66 8B 07                  MOV AX,word ptr [EDI]
00462CB8  66 8B 0B                  MOV CX,word ptr [EBX]
00462CBB  52                        PUSH EDX
00462CBC  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00462CBF  50                        PUSH EAX
00462CC0  51                        PUSH ECX
00462CC1  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00462CC7  66 8B 02                  MOV AX,word ptr [EDX]
00462CCA  50                        PUSH EAX
00462CCB  E8 5E F6 F9 FF            CALL 0x0040232e
00462CD0  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
00462CD3  66 8B 17                  MOV DX,word ptr [EDI]
00462CD6  66 8B 03                  MOV AX,word ptr [EBX]
00462CD9  51                        PUSH ECX
00462CDA  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00462CDD  52                        PUSH EDX
00462CDE  50                        PUSH EAX
00462CDF  66 8B 11                  MOV DX,word ptr [ECX]
00462CE2  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00462CE8  66 42                     INC DX
00462CEA  52                        PUSH EDX
00462CEB  E8 3E F6 F9 FF            CALL 0x0040232e
00462CF0  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00462CF3  66 8B 0F                  MOV CX,word ptr [EDI]
00462CF6  66 8B 13                  MOV DX,word ptr [EBX]
00462CF9  50                        PUSH EAX
00462CFA  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00462CFD  51                        PUSH ECX
00462CFE  66 42                     INC DX
00462D00  66 8B 08                  MOV CX,word ptr [EAX]
00462D03  52                        PUSH EDX
00462D04  51                        PUSH ECX
00462D05  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00462D0B  E8 1E F6 F9 FF            CALL 0x0040232e
00462D10  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
00462D13  66 8B 07                  MOV AX,word ptr [EDI]
00462D16  66 8B 0B                  MOV CX,word ptr [EBX]
00462D19  52                        PUSH EDX
00462D1A  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00462D1D  50                        PUSH EAX
00462D1E  66 41                     INC CX
00462D20  66 8B 02                  MOV AX,word ptr [EDX]
00462D23  51                        PUSH ECX
00462D24  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00462D2A  66 40                     INC AX
00462D2C  50                        PUSH EAX
00462D2D  E8 FC F5 F9 FF            CALL 0x0040232e
00462D32  6A 00                     PUSH 0x0
00462D34  8B CE                     MOV ECX,ESI
00462D36  E8 A3 04 FA FF            CALL 0x004031de
00462D3B  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
00462D3E  66 8B 17                  MOV DX,word ptr [EDI]
00462D41  66 8B 03                  MOV AX,word ptr [EBX]
00462D44  51                        PUSH ECX
00462D45  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00462D48  52                        PUSH EDX
00462D49  66 C7 86 F8 00 00 00 00 00  MOV word ptr [ESI + 0xf8],0x0
00462D52  50                        PUSH EAX
00462D53  66 8B 11                  MOV DX,word ptr [ECX]
00462D56  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00462D5C  52                        PUSH EDX
00462D5D  E8 6B 1F FA FF            CALL 0x00404ccd
00462D62  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00462D65  66 8B 0F                  MOV CX,word ptr [EDI]
00462D68  66 8B 13                  MOV DX,word ptr [EBX]
00462D6B  50                        PUSH EAX
00462D6C  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00462D6F  51                        PUSH ECX
00462D70  52                        PUSH EDX
00462D71  66 8B 08                  MOV CX,word ptr [EAX]
00462D74  66 41                     INC CX
00462D76  51                        PUSH ECX
00462D77  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00462D7D  E8 4B 1F FA FF            CALL 0x00404ccd
00462D82  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
00462D85  66 8B 07                  MOV AX,word ptr [EDI]
00462D88  66 8B 0B                  MOV CX,word ptr [EBX]
00462D8B  52                        PUSH EDX
00462D8C  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00462D8F  50                        PUSH EAX
00462D90  66 41                     INC CX
00462D92  66 8B 02                  MOV AX,word ptr [EDX]
00462D95  51                        PUSH ECX
00462D96  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00462D9C  50                        PUSH EAX
00462D9D  E8 2B 1F FA FF            CALL 0x00404ccd
00462DA2  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
00462DA5  66 8B 17                  MOV DX,word ptr [EDI]
00462DA8  66 8B 03                  MOV AX,word ptr [EBX]
00462DAB  51                        PUSH ECX
00462DAC  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00462DAF  52                        PUSH EDX
00462DB0  66 40                     INC AX
00462DB2  66 8B 11                  MOV DX,word ptr [ECX]
00462DB5  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00462DBB  66 42                     INC DX
00462DBD  50                        PUSH EAX
00462DBE  52                        PUSH EDX
00462DBF  E8 09 1F FA FF            CALL 0x00404ccd
00462DC4  B8 02 00 00 00            MOV EAX,0x2
00462DC9  5F                        POP EDI
00462DCA  5E                        POP ESI
00462DCB  5B                        POP EBX
00462DCC  8B E5                     MOV ESP,EBP
00462DCE  5D                        POP EBP
00462DCF  C2 04 00                  RET 0x4
LAB_00462dd2:
00462DD2  66 8B 46 30               MOV AX,word ptr [ESI + 0x30]
00462DD6  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
00462DD9  50                        PUSH EAX
00462DDA  51                        PUSH ECX
00462DDB  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00462DE1  E8 13 2F FA FF            CALL 0x00405cf9
00462DE6  8D 55 E4                  LEA EDX,[EBP + -0x1c]
00462DE9  8D 4D E8                  LEA ECX,[EBP + -0x18]
00462DEC  52                        PUSH EDX
00462DED  51                        PUSH ECX
00462DEE  8D 55 E0                  LEA EDX,[EBP + -0x20]
00462DF1  8D 4D EE                  LEA ECX,[EBP + -0x12]
00462DF4  52                        PUSH EDX
00462DF5  51                        PUSH ECX
00462DF6  66 8B 4E 32               MOV CX,word ptr [ESI + 0x32]
00462DFA  8D 55 0B                  LEA EDX,[EBP + 0xb]
00462DFD  52                        PUSH EDX
00462DFE  51                        PUSH ECX
00462DFF  8B C8                     MOV ECX,EAX
00462E01  E8 B4 EB F9 FF            CALL 0x004019ba
00462E06  66 81 7D EE FF FF         CMP word ptr [EBP + -0x12],0xffff
00462E0C  0F 84 FE 06 00 00         JZ 0x00463510
00462E12  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00462E15  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00462E18  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00462E1B  66 89 02                  MOV word ptr [EDX],AX
00462E1E  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00462E21  66 89 0B                  MOV word ptr [EBX],CX
00462E24  66 89 17                  MOV word ptr [EDI],DX
LAB_00462e27:
00462E27  0F BF D2                  MOVSX EDX,DX
00462E2A  0F BF C9                  MOVSX ECX,CX
00462E2D  52                        PUSH EDX
00462E2E  51                        PUSH ECX
00462E2F  0F BF D0                  MOVSX EDX,AX
FUN_00462180::cf_common_exit_00462E32:
00462E32  52                        PUSH EDX
00462E33  8B CE                     MOV ECX,ESI
00462E35  E8 31 21 FA FF            CALL 0x00404f6b
00462E3A  6A 00                     PUSH 0x0
00462E3C  8B CE                     MOV ECX,ESI
00462E3E  E8 9B 03 FA FF            CALL 0x004031de
00462E43  B8 02 00 00 00            MOV EAX,0x2
00462E48  5F                        POP EDI
00462E49  5E                        POP ESI
00462E4A  5B                        POP EBX
00462E4B  8B E5                     MOV ESP,EBP
00462E4D  5D                        POP EBP
00462E4E  C2 04 00                  RET 0x4
LAB_00462e51:
00462E51  83 F8 02                  CMP EAX,0x2
00462E54  0F 85 01 07 00 00         JNZ 0x0046355b
00462E5A  50                        PUSH EAX
00462E5B  8B CE                     MOV ECX,ESI
00462E5D  E8 7C 03 FA FF            CALL 0x004031de
00462E62  40                        INC EAX
00462E63  83 F8 04                  CMP EAX,0x4
00462E66  0F 87 E1 06 00 00         JA 0x0046354d
switchD_00462e6c::switchD:
00462E6C  FF 24 85 64 49 46 00      JMP dword ptr [EAX*0x4 + 0x464964]
switchD_00462e6c::caseD_4:
00462E73  66 8B 86 00 08 00 00      MOV AX,word ptr [ESI + 0x800]
00462E7A  66 8B 8E 04 08 00 00      MOV CX,word ptr [ESI + 0x804]
00462E81  66 8B 96 02 08 00 00      MOV DX,word ptr [ESI + 0x802]
00462E88  8D BE 04 08 00 00         LEA EDI,[ESI + 0x804]
00462E8E  66 85 C0                  TEST AX,AX
00462E91  0F 8C A6 03 00 00         JL 0x0046323d
00462E97  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
00462E9E  0F 8D 99 03 00 00         JGE 0x0046323d
00462EA4  66 85 D2                  TEST DX,DX
00462EA7  0F 8C 90 03 00 00         JL 0x0046323d
00462EAD  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00462EB4  0F 8D 83 03 00 00         JGE 0x0046323d
00462EBA  66 85 C9                  TEST CX,CX
00462EBD  0F 8C 7A 03 00 00         JL 0x0046323d
00462EC3  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00462ECA  0F 8D 6D 03 00 00         JGE 0x0046323d
00462ED0  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00462ED7  0F BF C9                  MOVSX ECX,CX
00462EDA  0F AF CB                  IMUL ECX,EBX
00462EDD  0F BF 1D 40 B2 7F 00      MOVSX EBX,word ptr [0x007fb240]
00462EE4  0F BF D2                  MOVSX EDX,DX
00462EE7  0F AF D3                  IMUL EDX,EBX
00462EEA  0F BF C0                  MOVSX EAX,AX
00462EED  03 CA                     ADD ECX,EDX
00462EEF  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00462EF5  03 C8                     ADD ECX,EAX
00462EF7  8B 1C CA                  MOV EBX,dword ptr [EDX + ECX*0x8]
00462EFA  85 DB                     TEST EBX,EBX
00462EFC  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
00462EFF  0F 84 38 03 00 00         JZ 0x0046323d
00462F05  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
00462F08  83 F8 08                  CMP EAX,0x8
00462F0B  0F 83 2C 03 00 00         JNC 0x0046323d
00462F11  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00462F17  85 C9                     TEST ECX,ECX
00462F19  74 11                     JZ 0x00462f2c
00462F1B  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00462F1E  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
00462F26  0F 83 11 03 00 00         JNC 0x0046323d
LAB_00462f2c:
00462F2C  8A 15 8F 8A 80 00         MOV DL,byte ptr [0x00808a8f]
00462F32  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
00462F35  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
00462F38  88 45 F4                  MOV byte ptr [EBP + -0xc],AL
00462F3B  84 D2                     TEST DL,DL
00462F3D  88 4D F8                  MOV byte ptr [EBP + -0x8],CL
00462F40  74 2D                     JZ 0x00462f6f
00462F42  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00462F45  33 D2                     XOR EDX,EDX
00462F47  25 FF 00 00 00            AND EAX,0xff
00462F4C  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
00462F4F  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00462F52  25 FF 00 00 00            AND EAX,0xff
00462F57  8A 8C C9 EA 87 80 00      MOV CL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
00462F5E  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00462F61  3A 8C C0 EA 87 80 00      CMP CL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
00462F68  0F 95 C2                  SETNZ DL
00462F6B  8B C2                     MOV EAX,EDX
00462F6D  EB 7A                     JMP 0x00462fe9
LAB_00462f6f:
00462F6F  3A C1                     CMP AL,CL
00462F71  74 6B                     JZ 0x00462fde
00462F73  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00462F76  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00462F79  25 FF 00 00 00            AND EAX,0xff
00462F7E  81 E1 FF 00 00 00         AND ECX,0xff
00462F84  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
00462F8B  84 D2                     TEST DL,DL
00462F8D  75 10                     JNZ 0x00462f9f
00462F8F  38 94 C8 4F 8A 80 00      CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],DL
00462F96  75 07                     JNZ 0x00462f9f
00462F98  B8 FE FF FF FF            MOV EAX,0xfffffffe
00462F9D  EB 41                     JMP 0x00462fe0
LAB_00462f9f:
00462F9F  80 FA 01                  CMP DL,0x1
00462FA2  75 0F                     JNZ 0x00462fb3
00462FA4  80 BC C8 4F 8A 80 00 00   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x0
00462FAC  75 05                     JNZ 0x00462fb3
00462FAE  83 C8 FF                  OR EAX,0xffffffff
00462FB1  EB 2D                     JMP 0x00462fe0
LAB_00462fb3:
00462FB3  84 D2                     TEST DL,DL
00462FB5  75 11                     JNZ 0x00462fc8
00462FB7  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
00462FBF  75 07                     JNZ 0x00462fc8
00462FC1  B8 01 00 00 00            MOV EAX,0x1
00462FC6  EB 18                     JMP 0x00462fe0
LAB_00462fc8:
00462FC8  80 FA 01                  CMP DL,0x1
00462FCB  75 11                     JNZ 0x00462fde
00462FCD  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
00462FD5  75 07                     JNZ 0x00462fde
00462FD7  B8 02 00 00 00            MOV EAX,0x2
00462FDC  EB 02                     JMP 0x00462fe0
LAB_00462fde:
00462FDE  33 C0                     XOR EAX,EAX
LAB_00462fe0:
00462FE0  33 C9                     XOR ECX,ECX
00462FE2  85 C0                     TEST EAX,EAX
00462FE4  0F 9C C1                  SETL CL
00462FE7  8B C1                     MOV EAX,ECX
LAB_00462fe9:
00462FE9  85 C0                     TEST EAX,EAX
00462FEB  0F 84 4C 02 00 00         JZ 0x0046323d
00462FF1  8B 13                     MOV EDX,dword ptr [EBX]
00462FF3  8B CB                     MOV ECX,EBX
00462FF5  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
00462FF8  83 F8 3B                  CMP EAX,0x3b
00462FFB  74 10                     JZ 0x0046300d
00462FFD  8B 03                     MOV EAX,dword ptr [EBX]
00462FFF  8B CB                     MOV ECX,EBX
00463001  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
00463004  83 F8 60                  CMP EAX,0x60
00463007  0F 85 30 02 00 00         JNZ 0x0046323d
LAB_0046300d:
0046300D  66 8B 86 D7 00 00 00      MOV AX,word ptr [ESI + 0xd7]
00463014  66 8B 8E DB 00 00 00      MOV CX,word ptr [ESI + 0xdb]
0046301B  66 8B 96 DF 00 00 00      MOV DX,word ptr [ESI + 0xdf]
00463022  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00463025  66 85 C0                  TEST AX,AX
00463028  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0046302B  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
0046302E  7C 57                     JL 0x00463087
00463030  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
00463037  7D 4E                     JGE 0x00463087
00463039  66 85 C9                  TEST CX,CX
0046303C  7C 49                     JL 0x00463087
0046303E  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
00463045  7D 40                     JGE 0x00463087
00463047  66 85 D2                  TEST DX,DX
0046304A  7C 3B                     JL 0x00463087
0046304C  66 3B 15 44 B2 7F 00      CMP DX,word ptr [0x007fb244]
00463053  7D 32                     JGE 0x00463087
00463055  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0046305C  0F BF D2                  MOVSX EDX,DX
0046305F  0F AF DA                  IMUL EBX,EDX
00463062  0F BF 15 40 B2 7F 00      MOVSX EDX,word ptr [0x007fb240]
00463069  0F BF C9                  MOVSX ECX,CX
0046306C  0F AF D1                  IMUL EDX,ECX
0046306F  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
00463075  03 DA                     ADD EBX,EDX
00463077  0F BF D0                  MOVSX EDX,AX
0046307A  03 DA                     ADD EBX,EDX
0046307C  8B 14 D9                  MOV EDX,dword ptr [ECX + EBX*0x8]
0046307F  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00463082  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
00463085  EB 02                     JMP 0x00463089
LAB_00463087:
00463087  33 D2                     XOR EDX,EDX
LAB_00463089:
00463089  3B DA                     CMP EBX,EDX
0046308B  75 60                     JNZ 0x004630ed
0046308D  8A 56 61                  MOV DL,byte ptr [ESI + 0x61]
00463090  C7 86 2E 08 00 00 03 00 00 00  MOV dword ptr [ESI + 0x82e],0x3
0046309A  52                        PUSH EDX
0046309B  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
0046309E  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
004630A1  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
004630A4  8D 14 D5 64 00 00 00      LEA EDX,[EDX*0x8 + 0x64]
004630AB  52                        PUSH EDX
004630AC  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
004630AF  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
004630B2  8D 4C D1 64               LEA ECX,[ECX + EDX*0x8 + 0x64]
004630B6  51                        PUSH ECX
004630B7  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004630BA  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
004630BD  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
004630C1  8D 44 D0 64               LEA EAX,[EAX + EDX*0x8 + 0x64]
004630C5  66 8B 56 43               MOV DX,word ptr [ESI + 0x43]
004630C9  50                        PUSH EAX
004630CA  66 8B 46 41               MOV AX,word ptr [ESI + 0x41]
004630CE  51                        PUSH ECX
004630CF  52                        PUSH EDX
004630D0  50                        PUSH EAX
004630D1  8B CE                     MOV ECX,ESI
004630D3  E8 7D F3 F9 FF            CALL 0x00402455
004630D8  C7 46 7A 00 00 00 00      MOV dword ptr [ESI + 0x7a],0x0
004630DF  B8 02 00 00 00            MOV EAX,0x2
004630E4  5F                        POP EDI
004630E5  5E                        POP ESI
004630E6  5B                        POP EBX
004630E7  8B E5                     MOV ESP,EBP
004630E9  5D                        POP EBP
004630EA  C2 04 00                  RET 0x4
LAB_004630ed:
004630ED  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004630F0  8D 9E 02 08 00 00         LEA EBX,[ESI + 0x802]
004630F6  57                        PUSH EDI
004630F7  8D 86 00 08 00 00         LEA EAX,[ESI + 0x800]
004630FD  53                        PUSH EBX
004630FE  50                        PUSH EAX
004630FF  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00463102  E8 BE E7 F9 FF            CALL 0x004018c5
00463107  0F BF 0F                  MOVSX ECX,word ptr [EDI]
0046310A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0046310D  51                        PUSH ECX
0046310E  0F BF 13                  MOVSX EDX,word ptr [EBX]
00463111  0F BF 08                  MOVSX ECX,word ptr [EAX]
00463114  52                        PUSH EDX
00463115  51                        PUSH ECX
00463116  8B CE                     MOV ECX,ESI
00463118  E8 4E 1E FA FF            CALL 0x00404f6b
0046311D  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
00463120  66 8B 07                  MOV AX,word ptr [EDI]
00463123  66 8B 0B                  MOV CX,word ptr [EBX]
00463126  52                        PUSH EDX
00463127  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0046312A  50                        PUSH EAX
0046312B  51                        PUSH ECX
0046312C  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00463132  66 8B 02                  MOV AX,word ptr [EDX]
00463135  50                        PUSH EAX
00463136  E8 F3 F1 F9 FF            CALL 0x0040232e
0046313B  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
0046313E  66 8B 17                  MOV DX,word ptr [EDI]
00463141  66 8B 03                  MOV AX,word ptr [EBX]
00463144  51                        PUSH ECX
00463145  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00463148  52                        PUSH EDX
00463149  50                        PUSH EAX
0046314A  66 8B 11                  MOV DX,word ptr [ECX]
0046314D  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00463153  66 42                     INC DX
00463155  52                        PUSH EDX
00463156  E8 D3 F1 F9 FF            CALL 0x0040232e
0046315B  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
0046315E  66 8B 0F                  MOV CX,word ptr [EDI]
00463161  66 8B 13                  MOV DX,word ptr [EBX]
00463164  50                        PUSH EAX
00463165  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00463168  51                        PUSH ECX
00463169  66 42                     INC DX
0046316B  66 8B 08                  MOV CX,word ptr [EAX]
0046316E  52                        PUSH EDX
0046316F  51                        PUSH ECX
00463170  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00463176  E8 B3 F1 F9 FF            CALL 0x0040232e
0046317B  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0046317E  66 8B 07                  MOV AX,word ptr [EDI]
00463181  66 8B 0B                  MOV CX,word ptr [EBX]
00463184  52                        PUSH EDX
00463185  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00463188  50                        PUSH EAX
00463189  66 41                     INC CX
0046318B  66 8B 02                  MOV AX,word ptr [EDX]
0046318E  51                        PUSH ECX
0046318F  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00463195  66 40                     INC AX
00463197  50                        PUSH EAX
00463198  E8 91 F1 F9 FF            CALL 0x0040232e
0046319D  6A 00                     PUSH 0x0
0046319F  8B CE                     MOV ECX,ESI
004631A1  E8 38 00 FA FF            CALL 0x004031de
004631A6  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
004631A9  66 8B 17                  MOV DX,word ptr [EDI]
004631AC  66 8B 03                  MOV AX,word ptr [EBX]
004631AF  51                        PUSH ECX
004631B0  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004631B3  52                        PUSH EDX
004631B4  66 C7 86 F8 00 00 00 00 00  MOV word ptr [ESI + 0xf8],0x0
004631BD  50                        PUSH EAX
004631BE  66 8B 11                  MOV DX,word ptr [ECX]
004631C1  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
004631C7  52                        PUSH EDX
004631C8  E8 00 1B FA FF            CALL 0x00404ccd
004631CD  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
004631D0  66 8B 0F                  MOV CX,word ptr [EDI]
004631D3  66 8B 13                  MOV DX,word ptr [EBX]
004631D6  50                        PUSH EAX
004631D7  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004631DA  51                        PUSH ECX
004631DB  52                        PUSH EDX
004631DC  66 8B 08                  MOV CX,word ptr [EAX]
004631DF  66 41                     INC CX
004631E1  51                        PUSH ECX
004631E2  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
004631E8  E8 E0 1A FA FF            CALL 0x00404ccd
004631ED  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
004631F0  66 8B 07                  MOV AX,word ptr [EDI]
004631F3  66 8B 0B                  MOV CX,word ptr [EBX]
004631F6  52                        PUSH EDX
004631F7  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004631FA  50                        PUSH EAX
004631FB  66 41                     INC CX
004631FD  66 8B 02                  MOV AX,word ptr [EDX]
00463200  51                        PUSH ECX
00463201  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00463207  50                        PUSH EAX
00463208  E8 C0 1A FA FF            CALL 0x00404ccd
0046320D  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
00463210  66 8B 17                  MOV DX,word ptr [EDI]
00463213  66 8B 03                  MOV AX,word ptr [EBX]
00463216  51                        PUSH ECX
00463217  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0046321A  52                        PUSH EDX
0046321B  66 40                     INC AX
0046321D  66 8B 11                  MOV DX,word ptr [ECX]
00463220  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00463226  66 42                     INC DX
00463228  50                        PUSH EAX
00463229  52                        PUSH EDX
0046322A  E8 9E 1A FA FF            CALL 0x00404ccd
0046322F  B8 02 00 00 00            MOV EAX,0x2
00463234  5F                        POP EDI
00463235  5E                        POP ESI
00463236  5B                        POP EBX
00463237  8B E5                     MOV ESP,EBP
00463239  5D                        POP EBP
0046323A  C2 04 00                  RET 0x4
LAB_0046323d:
0046323D  66 8B 46 30               MOV AX,word ptr [ESI + 0x30]
00463241  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
00463244  50                        PUSH EAX
00463245  51                        PUSH ECX
00463246  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0046324C  E8 A8 2A FA FF            CALL 0x00405cf9
00463251  8D 55 E4                  LEA EDX,[EBP + -0x1c]
00463254  8D 4D E8                  LEA ECX,[EBP + -0x18]
00463257  52                        PUSH EDX
00463258  51                        PUSH ECX
00463259  8D 55 E0                  LEA EDX,[EBP + -0x20]
0046325C  8D 4D EE                  LEA ECX,[EBP + -0x12]
0046325F  52                        PUSH EDX
00463260  51                        PUSH ECX
00463261  66 8B 4E 32               MOV CX,word ptr [ESI + 0x32]
00463265  8D 55 0B                  LEA EDX,[EBP + 0xb]
00463268  52                        PUSH EDX
00463269  51                        PUSH ECX
0046326A  8B C8                     MOV ECX,EAX
0046326C  E8 49 E7 F9 FF            CALL 0x004019ba
00463271  66 81 7D EE FF FF         CMP word ptr [EBP + -0x12],0xffff
00463277  0F 84 9D 02 00 00         JZ 0x0046351a
0046327D  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00463280  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00463283  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00463286  66 89 17                  MOV word ptr [EDI],DX
00463289  0F BF D2                  MOVSX EDX,DX
0046328C  66 89 8E 02 08 00 00      MOV word ptr [ESI + 0x802],CX
00463293  52                        PUSH EDX
00463294  0F BF C9                  MOVSX ECX,CX
00463297  0F BF D0                  MOVSX EDX,AX
0046329A  51                        PUSH ECX
0046329B  52                        PUSH EDX
0046329C  8B CE                     MOV ECX,ESI
0046329E  C7 86 2E 08 00 00 01 00 00 00  MOV dword ptr [ESI + 0x82e],0x1
004632A8  C7 86 B7 00 00 00 03 00 00 00  MOV dword ptr [ESI + 0xb7],0x3
004632B2  66 89 86 00 08 00 00      MOV word ptr [ESI + 0x800],AX
004632B9  E8 AD 1C FA FF            CALL 0x00404f6b
004632BE  6A 00                     PUSH 0x0
004632C0  8B CE                     MOV ECX,ESI
004632C2  E8 17 FF F9 FF            CALL 0x004031de
004632C7  66 C7 86 F8 00 00 00 00 00  MOV word ptr [ESI + 0xf8],0x0
004632D0  B8 02 00 00 00            MOV EAX,0x2
004632D5  5F                        POP EDI
004632D6  5E                        POP ESI
004632D7  5B                        POP EBX
004632D8  8B E5                     MOV ESP,EBP
004632DA  5D                        POP EBP
004632DB  C2 04 00                  RET 0x4
switchD_00462e6c::caseD_2:
004632DE  66 8B 86 00 08 00 00      MOV AX,word ptr [ESI + 0x800]
004632E5  66 8B 8E 04 08 00 00      MOV CX,word ptr [ESI + 0x804]
004632EC  66 8B 96 02 08 00 00      MOV DX,word ptr [ESI + 0x802]
004632F3  66 85 C0                  TEST AX,AX
004632F6  0F 8C 75 01 00 00         JL 0x00463471
004632FC  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
00463303  66 3B C7                  CMP AX,DI
00463306  0F 8D 65 01 00 00         JGE 0x00463471
0046330C  66 85 D2                  TEST DX,DX
0046330F  0F 8C 5C 01 00 00         JL 0x00463471
00463315  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0046331C  0F 8D 4F 01 00 00         JGE 0x00463471
00463322  66 85 C9                  TEST CX,CX
00463325  0F 8C 46 01 00 00         JL 0x00463471
0046332B  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00463332  0F 8D 39 01 00 00         JGE 0x00463471
00463338  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0046333F  0F BF C9                  MOVSX ECX,CX
00463342  0F BF D2                  MOVSX EDX,DX
00463345  0F AF CB                  IMUL ECX,EBX
00463348  0F BF FF                  MOVSX EDI,DI
0046334B  0F AF D7                  IMUL EDX,EDI
0046334E  0F BF C0                  MOVSX EAX,AX
00463351  03 CA                     ADD ECX,EDX
00463353  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00463359  03 C8                     ADD ECX,EAX
0046335B  8B 3C CA                  MOV EDI,dword ptr [EDX + ECX*0x8]
0046335E  85 FF                     TEST EDI,EDI
00463360  0F 84 0B 01 00 00         JZ 0x00463471
00463366  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
00463369  83 F8 08                  CMP EAX,0x8
0046336C  0F 83 FF 00 00 00         JNC 0x00463471
00463372  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00463378  85 C9                     TEST ECX,ECX
0046337A  74 11                     JZ 0x0046338d
0046337C  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0046337F  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
00463387  0F 83 E4 00 00 00         JNC 0x00463471
LAB_0046338d:
0046338D  8A 15 8F 8A 80 00         MOV DL,byte ptr [0x00808a8f]
00463393  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
00463396  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
00463399  88 45 F4                  MOV byte ptr [EBP + -0xc],AL
0046339C  84 D2                     TEST DL,DL
0046339E  88 4D F8                  MOV byte ptr [EBP + -0x8],CL
004633A1  74 2D                     JZ 0x004633d0
004633A3  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004633A6  33 D2                     XOR EDX,EDX
004633A8  25 FF 00 00 00            AND EAX,0xff
004633AD  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
004633B0  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004633B3  25 FF 00 00 00            AND EAX,0xff
004633B8  8A 8C C9 EA 87 80 00      MOV CL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
004633BF  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
004633C2  3A 8C C0 EA 87 80 00      CMP CL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
004633C9  0F 95 C2                  SETNZ DL
004633CC  8B C2                     MOV EAX,EDX
004633CE  EB 7D                     JMP 0x0046344d
LAB_004633d0:
004633D0  3A C1                     CMP AL,CL
004633D2  74 6E                     JZ 0x00463442
004633D4  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004633D7  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004633DA  25 FF 00 00 00            AND EAX,0xff
004633DF  81 E1 FF 00 00 00         AND ECX,0xff
004633E5  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
004633EC  84 D2                     TEST DL,DL
004633EE  75 12                     JNZ 0x00463402
004633F0  8A 9C C8 4F 8A 80 00      MOV BL,byte ptr [EAX + ECX*0x8 + 0x808a4f]
004633F7  84 DB                     TEST BL,BL
004633F9  75 07                     JNZ 0x00463402
004633FB  B8 FE FF FF FF            MOV EAX,0xfffffffe
00463400  EB 42                     JMP 0x00463444
LAB_00463402:
00463402  80 FA 01                  CMP DL,0x1
00463405  75 10                     JNZ 0x00463417
00463407  8A 9C C8 4F 8A 80 00      MOV BL,byte ptr [EAX + ECX*0x8 + 0x808a4f]
0046340E  84 DB                     TEST BL,BL
00463410  75 05                     JNZ 0x00463417
00463412  83 C8 FF                  OR EAX,0xffffffff
00463415  EB 2D                     JMP 0x00463444
LAB_00463417:
00463417  84 D2                     TEST DL,DL
00463419  75 11                     JNZ 0x0046342c
0046341B  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
00463423  75 07                     JNZ 0x0046342c
00463425  B8 01 00 00 00            MOV EAX,0x1
0046342A  EB 18                     JMP 0x00463444
LAB_0046342c:
0046342C  80 FA 01                  CMP DL,0x1
0046342F  75 11                     JNZ 0x00463442
00463431  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
00463439  75 07                     JNZ 0x00463442
0046343B  B8 02 00 00 00            MOV EAX,0x2
00463440  EB 02                     JMP 0x00463444
LAB_00463442:
00463442  33 C0                     XOR EAX,EAX
LAB_00463444:
00463444  33 C9                     XOR ECX,ECX
00463446  85 C0                     TEST EAX,EAX
00463448  0F 9C C1                  SETL CL
0046344B  8B C1                     MOV EAX,ECX
LAB_0046344d:
0046344D  85 C0                     TEST EAX,EAX
0046344F  74 20                     JZ 0x00463471
00463451  8B 17                     MOV EDX,dword ptr [EDI]
00463453  8B CF                     MOV ECX,EDI
00463455  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
00463458  83 F8 3B                  CMP EAX,0x3b
0046345B  0F 84 EC 00 00 00         JZ 0x0046354d
00463461  8B 07                     MOV EAX,dword ptr [EDI]
00463463  8B CF                     MOV ECX,EDI
00463465  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
00463468  83 F8 60                  CMP EAX,0x60
0046346B  0F 84 DC 00 00 00         JZ 0x0046354d
LAB_00463471:
00463471  8B CE                     MOV ECX,ESI
00463473  E8 DD 03 FA FF            CALL 0x00403855
00463478  66 8B 4E 30               MOV CX,word ptr [ESI + 0x30]
0046347C  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
0046347F  51                        PUSH ECX
00463480  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00463486  52                        PUSH EDX
00463487  E8 6D 28 FA FF            CALL 0x00405cf9
0046348C  8D 4D E4                  LEA ECX,[EBP + -0x1c]
0046348F  8D 55 E8                  LEA EDX,[EBP + -0x18]
00463492  51                        PUSH ECX
00463493  52                        PUSH EDX
00463494  8D 4D E0                  LEA ECX,[EBP + -0x20]
00463497  8D 55 EE                  LEA EDX,[EBP + -0x12]
0046349A  51                        PUSH ECX
0046349B  52                        PUSH EDX
0046349C  66 8B 56 32               MOV DX,word ptr [ESI + 0x32]
004634A0  8D 4D 0B                  LEA ECX,[EBP + 0xb]
004634A3  51                        PUSH ECX
004634A4  52                        PUSH EDX
004634A5  8B C8                     MOV ECX,EAX
004634A7  E8 0E E5 F9 FF            CALL 0x004019ba
004634AC  66 81 7D EE FF FF         CMP word ptr [EBP + -0x12],0xffff
004634B2  74 5C                     JZ 0x00463510
004634B4  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
004634B7  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
004634BA  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
004634BD  66 89 96 04 08 00 00      MOV word ptr [ESI + 0x804],DX
004634C4  0F BF D2                  MOVSX EDX,DX
004634C7  66 89 8E 02 08 00 00      MOV word ptr [ESI + 0x802],CX
004634CE  52                        PUSH EDX
004634CF  0F BF C9                  MOVSX ECX,CX
004634D2  0F BF D0                  MOVSX EDX,AX
004634D5  51                        PUSH ECX
004634D6  52                        PUSH EDX
004634D7  8B CE                     MOV ECX,ESI
004634D9  C7 86 2E 08 00 00 01 00 00 00  MOV dword ptr [ESI + 0x82e],0x1
004634E3  C7 86 B7 00 00 00 03 00 00 00  MOV dword ptr [ESI + 0xb7],0x3
004634ED  66 89 86 00 08 00 00      MOV word ptr [ESI + 0x800],AX
004634F4  E8 72 1A FA FF            CALL 0x00404f6b
004634F9  6A 00                     PUSH 0x0
004634FB  8B CE                     MOV ECX,ESI
004634FD  E8 DC FC F9 FF            CALL 0x004031de
00463502  B8 02 00 00 00            MOV EAX,0x2
00463507  5F                        POP EDI
00463508  5E                        POP ESI
00463509  5B                        POP EBX
0046350A  8B E5                     MOV ESP,EBP
0046350C  5D                        POP EBP
0046350D  C2 04 00                  RET 0x4
LAB_00463510:
00463510  C7 86 B7 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xb7],0x0
FUN_00462180::cf_common_exit_0046351A:
0046351A  33 C0                     XOR EAX,EAX
FUN_00462180::cf_common_exit_0046351C:
0046351C  5F                        POP EDI
0046351D  5E                        POP ESI
0046351E  5B                        POP EBX
0046351F  8B E5                     MOV ESP,EBP
00463521  5D                        POP EBP
00463522  C2 04 00                  RET 0x4
switchD_00462e6c::caseD_1:
00463525  8B 16                     MOV EDX,dword ptr [ESI]
00463527  8D 45 B8                  LEA EAX,[EBP + -0x48]
0046352A  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
0046352D  8D 45 98                  LEA EAX,[EBP + -0x68]
00463530  50                        PUSH EAX
00463531  8B CE                     MOV ECX,ESI
00463533  C7 45 B8 10 27 00 00      MOV dword ptr [EBP + -0x48],0x2710
0046353A  C7 45 C0 FF 00 00 00      MOV dword ptr [EBP + -0x40],0xff
00463541  89 7D CC                  MOV dword ptr [EBP + -0x34],EDI
00463544  C7 45 A8 10 01 00 00      MOV dword ptr [EBP + -0x58],0x110
0046354B  FF 12                     CALL dword ptr [EDX]
switchD_00462e6c::caseD_3:
0046354D  B8 02 00 00 00            MOV EAX,0x2
00463552  5F                        POP EDI
00463553  5E                        POP ESI
00463554  5B                        POP EBX
00463555  8B E5                     MOV ESP,EBP
00463557  5D                        POP EBP
00463558  C2 04 00                  RET 0x4
LAB_0046355b:
0046355B  83 F8 03                  CMP EAX,0x3
0046355E  0F 85 BB 0A 00 00         JNZ 0x0046401f
00463564  8D 4D F4                  LEA ECX,[EBP + -0xc]
00463567  8D 55 90                  LEA EDX,[EBP + -0x70]
0046356A  51                        PUSH ECX
0046356B  52                        PUSH EDX
0046356C  8B CE                     MOV ECX,ESI
0046356E  E8 D4 F2 F9 FF            CALL 0x00402847
00463573  83 F8 FF                  CMP EAX,-0x1
00463576  0F 84 A3 0A 00 00         JZ 0x0046401f
0046357C  85 C0                     TEST EAX,EAX
0046357E  0F 84 87 02 00 00         JZ 0x0046380b
00463584  3B C7                     CMP EAX,EDI
00463586  0F 85 B8 02 00 00         JNZ 0x00463844
0046358C  66 8B 86 00 08 00 00      MOV AX,word ptr [ESI + 0x800]
00463593  66 8B 8E 04 08 00 00      MOV CX,word ptr [ESI + 0x804]
0046359A  66 8B 96 02 08 00 00      MOV DX,word ptr [ESI + 0x802]
004635A1  66 85 C0                  TEST AX,AX
004635A4  7C 52                     JL 0x004635f8
004635A6  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
004635AD  66 3B C7                  CMP AX,DI
004635B0  7D 46                     JGE 0x004635f8
004635B2  66 85 D2                  TEST DX,DX
004635B5  7C 41                     JL 0x004635f8
004635B7  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
004635BE  7D 38                     JGE 0x004635f8
004635C0  66 85 C9                  TEST CX,CX
004635C3  7C 33                     JL 0x004635f8
004635C5  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
004635CC  7D 2A                     JGE 0x004635f8
004635CE  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
004635D5  0F BF C9                  MOVSX ECX,CX
004635D8  0F BF D2                  MOVSX EDX,DX
004635DB  0F AF CB                  IMUL ECX,EBX
004635DE  0F BF FF                  MOVSX EDI,DI
004635E1  0F AF D7                  IMUL EDX,EDI
004635E4  0F BF C0                  MOVSX EAX,AX
004635E7  03 CA                     ADD ECX,EDX
004635E9  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
004635EF  03 C8                     ADD ECX,EAX
004635F1  8B 3C CA                  MOV EDI,dword ptr [EDX + ECX*0x8]
004635F4  85 FF                     TEST EDI,EDI
004635F6  75 48                     JNZ 0x00463640
LAB_004635f8:
004635F8  8B 16                     MOV EDX,dword ptr [ESI]
004635FA  8D 45 B8                  LEA EAX,[EBP + -0x48]
004635FD  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
00463600  8D 45 98                  LEA EAX,[EBP + -0x68]
00463603  50                        PUSH EAX
00463604  8B CE                     MOV ECX,ESI
00463606  C7 45 B8 10 27 00 00      MOV dword ptr [EBP + -0x48],0x2710
0046360D  C7 45 C0 FF 00 00 00      MOV dword ptr [EBP + -0x40],0xff
00463614  C7 45 CC 01 00 00 00      MOV dword ptr [EBP + -0x34],0x1
0046361B  C7 45 A8 10 01 00 00      MOV dword ptr [EBP + -0x58],0x110
00463622  FF 12                     CALL dword ptr [EDX]
00463624  8B 06                     MOV EAX,dword ptr [ESI]
00463626  8B CE                     MOV ECX,ESI
00463628  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
0046362E  F7 D8                     NEG EAX
00463630  1B C0                     SBB EAX,EAX
00463632  24 FD                     AND AL,0xfd
00463634  83 C0 02                  ADD EAX,0x2
00463637  5F                        POP EDI
00463638  5E                        POP ESI
00463639  5B                        POP EBX
0046363A  8B E5                     MOV ESP,EBP
0046363C  5D                        POP EBP
0046363D  C2 04 00                  RET 0x4
LAB_00463640:
00463640  66 8B 46 38               MOV AX,word ptr [ESI + 0x38]
00463644  66 8B 4E 36               MOV CX,word ptr [ESI + 0x36]
00463648  8B 17                     MOV EDX,dword ptr [EDI]
0046364A  50                        PUSH EAX
0046364B  66 8B 46 34               MOV AX,word ptr [ESI + 0x34]
0046364F  51                        PUSH ECX
00463650  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
00463654  50                        PUSH EAX
00463655  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
00463659  51                        PUSH ECX
0046365A  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
0046365E  50                        PUSH EAX
0046365F  51                        PUSH ECX
00463660  8B CF                     MOV ECX,EDI
00463662  FF 92 DC 00 00 00         CALL dword ptr [EDX + 0xdc]
00463668  85 C0                     TEST EAX,EAX
0046366A  0F 8C D4 01 00 00         JL 0x00463844
00463670  8A 57 24                  MOV DL,byte ptr [EDI + 0x24]
00463673  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00463679  52                        PUSH EDX
0046367A  E8 61 E0 F9 FF            CALL 0x004016e0
0046367F  8B D8                     MOV EBX,EAX
00463681  81 FB C8 00 00 00         CMP EBX,0xc8
00463687  7E 05                     JLE 0x0046368e
00463689  BB C8 00 00 00            MOV EBX,0xc8
LAB_0046368e:
0046368E  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
00463691  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00463697  53                        PUSH EBX
00463698  50                        PUSH EAX
00463699  E8 C8 FA F9 FF            CALL 0x00403166
0046369E  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004636A1  53                        PUSH EBX
004636A2  51                        PUSH ECX
004636A3  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004636A9  E8 88 0C FA FF            CALL 0x00404336
004636AE  8A 57 24                  MOV DL,byte ptr [EDI + 0x24]
004636B1  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004636B7  52                        PUSH EDX
004636B8  E8 97 02 FA FF            CALL 0x00403954
004636BD  8B D8                     MOV EBX,EAX
004636BF  83 FB 64                  CMP EBX,0x64
004636C2  7E 05                     JLE 0x004636c9
004636C4  BB 64 00 00 00            MOV EBX,0x64
LAB_004636c9:
004636C9  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
004636CC  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004636D2  53                        PUSH EBX
004636D3  50                        PUSH EAX
004636D4  E8 3F FD F9 FF            CALL 0x00403418
004636D9  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004636DC  53                        PUSH EBX
004636DD  51                        PUSH ECX
004636DE  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004636E4  E8 29 0D FA FF            CALL 0x00404412
004636E9  8A 57 24                  MOV DL,byte ptr [EDI + 0x24]
004636EC  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004636F2  52                        PUSH EDX
004636F3  E8 8C EB F9 FF            CALL 0x00402284
004636F8  8B D8                     MOV EBX,EAX
004636FA  81 FB DC 05 00 00         CMP EBX,0x5dc
00463700  7E 05                     JLE 0x00463707
00463702  BB DC 05 00 00            MOV EBX,0x5dc
LAB_00463707:
00463707  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
0046370A  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00463710  53                        PUSH EBX
00463711  50                        PUSH EAX
00463712  E8 50 1C FA FF            CALL 0x00405367
00463717  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
0046371A  53                        PUSH EBX
0046371B  51                        PUSH ECX
0046371C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00463722  E8 C0 1E FA FF            CALL 0x004055e7
00463727  8A 57 24                  MOV DL,byte ptr [EDI + 0x24]
0046372A  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00463730  52                        PUSH EDX
00463731  E8 C0 F1 F9 FF            CALL 0x004028f6
00463736  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
00463739  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0046373F  50                        PUSH EAX
00463740  E8 B1 F1 F9 FF            CALL 0x004028f6
00463745  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0046374B  8B 57 24                  MOV EDX,dword ptr [EDI + 0x24]
0046374E  33 C0                     XOR EAX,EAX
00463750  8A C1                     MOV AL,CL
00463752  3B C2                     CMP EAX,EDX
00463754  74 05                     JZ 0x0046375b
00463756  3B 46 24                  CMP EAX,dword ptr [ESI + 0x24]
00463759  75 0C                     JNZ 0x00463767
LAB_0046375b:
0046375B  51                        PUSH ECX
0046375C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00463762  E8 26 14 FA FF            CALL 0x00404b8d
LAB_00463767:
00463767  8B 16                     MOV EDX,dword ptr [ESI]
00463769  8D 4D B8                  LEA ECX,[EBP + -0x48]
0046376C  8D 45 98                  LEA EAX,[EBP + -0x68]
0046376F  89 4D AC                  MOV dword ptr [EBP + -0x54],ECX
00463772  50                        PUSH EAX
00463773  8B CE                     MOV ECX,ESI
00463775  C7 45 B8 10 27 00 00      MOV dword ptr [EBP + -0x48],0x2710
0046377C  C7 45 C0 FF 00 00 00      MOV dword ptr [EBP + -0x40],0xff
00463783  C7 45 CC 01 00 00 00      MOV dword ptr [EBP + -0x34],0x1
0046378A  C7 45 A8 10 01 00 00      MOV dword ptr [EBP + -0x58],0x110
00463791  FF 12                     CALL dword ptr [EDX]
00463793  8B 0D 74 67 80 00         MOV ECX,dword ptr [0x00806774]
00463799  6A 1D                     PUSH 0x1d
0046379B  68 44 A1 7A 00            PUSH 0x7aa144
004637A0  51                        PUSH ECX
004637A1  6A 08                     PUSH 0x8
004637A3  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
004637A9  E8 D5 09 FA FF            CALL 0x00404183
004637AE  A1 98 17 81 00            MOV EAX,[0x00811798]
004637B3  85 C0                     TEST EAX,EAX
004637B5  0F 84 89 00 00 00         JZ 0x00463844
004637BB  8D 55 FC                  LEA EDX,[EBP + -0x4]
004637BE  8D 45 DE                  LEA EAX,[EBP + -0x22]
004637C1  52                        PUSH EDX
004637C2  8D 4D F2                  LEA ECX,[EBP + -0xe]
004637C5  50                        PUSH EAX
004637C6  51                        PUSH ECX
004637C7  8B CF                     MOV ECX,EDI
004637C9  E8 3D 27 FA FF            CALL 0x00405f0b
004637CE  8B 17                     MOV EDX,dword ptr [EDI]
004637D0  8B CF                     MOV ECX,EDI
004637D2  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004637D5  0F BF 4D DE               MOVSX ECX,word ptr [EBP + -0x22]
004637D9  0F BF 55 F2               MOVSX EDX,word ptr [EBP + -0xe]
004637DD  50                        PUSH EAX
004637DE  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
004637E1  50                        PUSH EAX
004637E2  51                        PUSH ECX
004637E3  8B 0D 98 17 81 00         MOV ECX,dword ptr [0x00811798]
004637E9  52                        PUSH EDX
004637EA  E8 73 16 FA FF            CALL 0x00404e62
004637EF  8B 06                     MOV EAX,dword ptr [ESI]
004637F1  8B CE                     MOV ECX,ESI
004637F3  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
004637F9  F7 D8                     NEG EAX
004637FB  1B C0                     SBB EAX,EAX
004637FD  24 FD                     AND AL,0xfd
004637FF  83 C0 02                  ADD EAX,0x2
00463802  5F                        POP EDI
00463803  5E                        POP ESI
00463804  5B                        POP EBX
00463805  8B E5                     MOV ESP,EBP
00463807  5D                        POP EBP
00463808  C2 04 00                  RET 0x4
LAB_0046380b:
0046380B  8B 16                     MOV EDX,dword ptr [ESI]
0046380D  8D 45 B8                  LEA EAX,[EBP + -0x48]
00463810  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
00463813  8D 45 98                  LEA EAX,[EBP + -0x68]
00463816  50                        PUSH EAX
00463817  8B CE                     MOV ECX,ESI
00463819  C7 45 B8 10 27 00 00      MOV dword ptr [EBP + -0x48],0x2710
00463820  C7 45 C0 FF 00 00 00      MOV dword ptr [EBP + -0x40],0xff
00463827  89 7D CC                  MOV dword ptr [EBP + -0x34],EDI
0046382A  C7 45 A8 10 01 00 00      MOV dword ptr [EBP + -0x58],0x110
00463831  FF 12                     CALL dword ptr [EDX]
00463833  8B 16                     MOV EDX,dword ptr [ESI]
00463835  68 01 01 00 00            PUSH 0x101
0046383A  6A 03                     PUSH 0x3
0046383C  8B CE                     MOV ECX,ESI
0046383E  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
LAB_00463844:
00463844  8B 06                     MOV EAX,dword ptr [ESI]
00463846  8B CE                     MOV ECX,ESI
00463848  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
0046384E  F7 D8                     NEG EAX
00463850  1B C0                     SBB EAX,EAX
00463852  24 FD                     AND AL,0xfd
00463854  83 C0 02                  ADD EAX,0x2
00463857  5F                        POP EDI
00463858  5E                        POP ESI
00463859  5B                        POP EBX
0046385A  8B E5                     MOV ESP,EBP
0046385C  5D                        POP EBP
0046385D  C2 04 00                  RET 0x4
LAB_00463860:
00463860  83 F8 15                  CMP EAX,0x15
00463863  0F 85 B6 07 00 00         JNZ 0x0046401f
00463869  8B 86 2E 08 00 00         MOV EAX,dword ptr [ESI + 0x82e]
0046386F  85 C0                     TEST EAX,EAX
00463871  75 58                     JNZ 0x004638cb
00463873  89 BE 2E 08 00 00         MOV dword ptr [ESI + 0x82e],EDI
00463879  8B 86 F8 07 00 00         MOV EAX,dword ptr [ESI + 0x7f8]
0046387F  3B C7                     CMP EAX,EDI
00463881  75 0C                     JNZ 0x0046388f
00463883  C7 86 B7 00 00 00 03 00 00 00  MOV dword ptr [ESI + 0xb7],0x3
0046388D  EB 06                     JMP 0x00463895
LAB_0046388f:
0046388F  89 BE B7 00 00 00         MOV dword ptr [ESI + 0xb7],EDI
LAB_00463895:
00463895  0F BF 8E 04 08 00 00      MOVSX ECX,word ptr [ESI + 0x804]
0046389C  0F BF 96 02 08 00 00      MOVSX EDX,word ptr [ESI + 0x802]
004638A3  0F BF 86 00 08 00 00      MOVSX EAX,word ptr [ESI + 0x800]
004638AA  51                        PUSH ECX
004638AB  52                        PUSH EDX
004638AC  50                        PUSH EAX
004638AD  8B CE                     MOV ECX,ESI
004638AF  E8 B7 16 FA FF            CALL 0x00404f6b
004638B4  6A 00                     PUSH 0x0
004638B6  8B CE                     MOV ECX,ESI
004638B8  E8 21 F9 F9 FF            CALL 0x004031de
004638BD  66 C7 86 F8 00 00 00 00 00  MOV word ptr [ESI + 0xf8],0x0
004638C6  E9 BE 0F 00 00            JMP 0x00464889
LAB_004638cb:
004638CB  3B C7                     CMP EAX,EDI
004638CD  0F 85 2A 07 00 00         JNZ 0x00463ffd
004638D3  6A 02                     PUSH 0x2
004638D5  8B CE                     MOV ECX,ESI
004638D7  E8 02 F9 F9 FF            CALL 0x004031de
004638DC  40                        INC EAX
004638DD  83 F8 04                  CMP EAX,0x4
004638E0  0F 87 09 07 00 00         JA 0x00463fef
switchD_004638e6::switchD:
004638E6  FF 24 85 78 49 46 00      JMP dword ptr [EAX*0x4 + 0x464978]
switchD_004638e6::caseD_3:
004638ED  8B 86 FC 07 00 00         MOV EAX,dword ptr [ESI + 0x7fc]
004638F3  66 8B 8E 04 08 00 00      MOV CX,word ptr [ESI + 0x804]
004638FA  66 8B 96 02 08 00 00      MOV DX,word ptr [ESI + 0x802]
00463901  8D BE 04 08 00 00         LEA EDI,[ESI + 0x804]
00463907  8D 9E 02 08 00 00         LEA EBX,[ESI + 0x802]
0046390D  83 F8 03                  CMP EAX,0x3
00463910  66 8B 86 00 08 00 00      MOV AX,word ptr [ESI + 0x800]
00463917  75 73                     JNZ 0x0046398c
00463919  66 85 C0                  TEST AX,AX
0046391C  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0046391F  0F 8C C1 00 00 00         JL 0x004639e6
00463925  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
0046392C  0F 8D B4 00 00 00         JGE 0x004639e6
00463932  66 85 D2                  TEST DX,DX
00463935  0F 8C AB 00 00 00         JL 0x004639e6
0046393B  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00463942  0F 8D 9E 00 00 00         JGE 0x004639e6
00463948  66 85 C9                  TEST CX,CX
0046394B  0F 8C 95 00 00 00         JL 0x004639e6
00463951  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00463958  0F 8D 88 00 00 00         JGE 0x004639e6
0046395E  0F BF C1                  MOVSX EAX,CX
00463961  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
00463968  0F AF C1                  IMUL EAX,ECX
0046396B  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
00463972  0F BF D2                  MOVSX EDX,DX
00463975  0F AF D1                  IMUL EDX,ECX
00463978  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
0046397E  03 C2                     ADD EAX,EDX
00463980  0F BF 55 F4               MOVSX EDX,word ptr [EBP + -0xc]
00463984  03 C2                     ADD EAX,EDX
00463986  8B 4C C1 04               MOV ECX,dword ptr [ECX + EAX*0x8 + 0x4]
0046398A  EB 5C                     JMP 0x004639e8
LAB_0046398c:
0046398C  66 85 C0                  TEST AX,AX
0046398F  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00463992  7C 52                     JL 0x004639e6
00463994  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
0046399B  7D 49                     JGE 0x004639e6
0046399D  66 85 D2                  TEST DX,DX
004639A0  7C 44                     JL 0x004639e6
004639A2  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
004639A9  7D 3B                     JGE 0x004639e6
004639AB  66 85 C9                  TEST CX,CX
004639AE  7C 36                     JL 0x004639e6
004639B0  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
004639B7  7D 2D                     JGE 0x004639e6
004639B9  0F BF C1                  MOVSX EAX,CX
004639BC  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
004639C3  0F AF C1                  IMUL EAX,ECX
004639C6  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
004639CD  0F BF D2                  MOVSX EDX,DX
004639D0  0F AF D1                  IMUL EDX,ECX
004639D3  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
004639D9  03 C2                     ADD EAX,EDX
004639DB  0F BF 55 F4               MOVSX EDX,word ptr [EBP + -0xc]
004639DF  03 C2                     ADD EAX,EDX
004639E1  8B 0C C1                  MOV ECX,dword ptr [ECX + EAX*0x8]
004639E4  EB 02                     JMP 0x004639e8
LAB_004639e6:
004639E6  33 C9                     XOR ECX,ECX
LAB_004639e8:
004639E8  85 C9                     TEST ECX,ECX
004639EA  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
004639ED  74 3F                     JZ 0x00463a2e
004639EF  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
004639F2  8B 86 F4 07 00 00         MOV EAX,dword ptr [ESI + 0x7f4]
004639F8  3B D0                     CMP EDX,EAX
004639FA  75 32                     JNZ 0x00463a2e
004639FC  8B 01                     MOV EAX,dword ptr [ECX]
004639FE  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
00463A04  85 C0                     TEST EAX,EAX
00463A06  0F 84 0E FB FF FF         JZ 0x0046351a
00463A0C  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00463A0F  81 79 20 AE 01 00 00      CMP dword ptr [ECX + 0x20],0x1ae
00463A16  75 79                     JNZ 0x00463a91
00463A18  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
00463A1B  8B 11                     MOV EDX,dword ptr [ECX]
00463A1D  50                        PUSH EAX
00463A1E  FF 92 F4 00 00 00         CALL dword ptr [EDX + 0xf4]
00463A24  85 C0                     TEST EAX,EAX
00463A26  0F 84 EE FA FF FF         JZ 0x0046351a
00463A2C  EB 63                     JMP 0x00463a91
LAB_00463a2e:
00463A2E  8B 96 F4 07 00 00         MOV EDX,dword ptr [ESI + 0x7f4]
00463A34  8D 4D F8                  LEA ECX,[EBP + -0x8]
00463A37  51                        PUSH ECX
00463A38  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00463A3E  52                        PUSH EDX
00463A3F  E8 8C 28 28 00            CALL 0x006e62d0
00463A44  83 F8 FC                  CMP EAX,-0x4
00463A47  0F 84 CD FA FF FF         JZ 0x0046351a
00463A4D  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00463A50  8B 01                     MOV EAX,dword ptr [ECX]
00463A52  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
00463A58  85 C0                     TEST EAX,EAX
00463A5A  0F 84 BA FA FF FF         JZ 0x0046351a
00463A60  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00463A63  81 79 20 AE 01 00 00      CMP dword ptr [ECX + 0x20],0x1ae
00463A6A  75 17                     JNZ 0x00463a83
00463A6C  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
00463A6F  8B 11                     MOV EDX,dword ptr [ECX]
00463A71  50                        PUSH EAX
00463A72  FF 92 F4 00 00 00         CALL dword ptr [EDX + 0xf4]
00463A78  85 C0                     TEST EAX,EAX
00463A7A  0F 84 9A FA FF FF         JZ 0x0046351a
00463A80  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
LAB_00463a83:
00463A83  57                        PUSH EDI
00463A84  8D 86 00 08 00 00         LEA EAX,[ESI + 0x800]
00463A8A  53                        PUSH EBX
00463A8B  50                        PUSH EAX
00463A8C  E8 34 DE F9 FF            CALL 0x004018c5
LAB_00463a91:
00463A91  0F BF 0F                  MOVSX ECX,word ptr [EDI]
00463A94  0F BF 13                  MOVSX EDX,word ptr [EBX]
00463A97  0F BF 86 00 08 00 00      MOVSX EAX,word ptr [ESI + 0x800]
00463A9E  51                        PUSH ECX
00463A9F  52                        PUSH EDX
00463AA0  50                        PUSH EAX
00463AA1  E9 30 05 00 00            JMP 0x00463fd6
switchD_004638e6::caseD_1:
00463AA6  8B 86 FC 07 00 00         MOV EAX,dword ptr [ESI + 0x7fc]
00463AAC  66 8B 8E 04 08 00 00      MOV CX,word ptr [ESI + 0x804]
00463AB3  66 8B 96 02 08 00 00      MOV DX,word ptr [ESI + 0x802]
00463ABA  8D BE 04 08 00 00         LEA EDI,[ESI + 0x804]
00463AC0  8D 9E 02 08 00 00         LEA EBX,[ESI + 0x802]
00463AC6  83 F8 03                  CMP EAX,0x3
00463AC9  66 8B 86 00 08 00 00      MOV AX,word ptr [ESI + 0x800]
00463AD0  75 72                     JNZ 0x00463b44
00463AD2  66 85 C0                  TEST AX,AX
00463AD5  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00463AD8  0F 8C BF 00 00 00         JL 0x00463b9d
00463ADE  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
00463AE5  0F 8D B2 00 00 00         JGE 0x00463b9d
00463AEB  66 85 D2                  TEST DX,DX
00463AEE  0F 8C A9 00 00 00         JL 0x00463b9d
00463AF4  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00463AFB  0F 8D 9C 00 00 00         JGE 0x00463b9d
00463B01  66 85 C9                  TEST CX,CX
00463B04  0F 8C 93 00 00 00         JL 0x00463b9d
00463B0A  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00463B11  0F 8D 86 00 00 00         JGE 0x00463b9d
00463B17  0F BF 05 46 B2 7F 00      MOVSX EAX,word ptr [0x007fb246]
00463B1E  0F BF C9                  MOVSX ECX,CX
00463B21  0F AF C8                  IMUL ECX,EAX
00463B24  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
00463B2B  0F BF D2                  MOVSX EDX,DX
00463B2E  0F AF D0                  IMUL EDX,EAX
00463B31  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
00463B36  03 CA                     ADD ECX,EDX
00463B38  0F BF 55 F4               MOVSX EDX,word ptr [EBP + -0xc]
00463B3C  03 CA                     ADD ECX,EDX
00463B3E  8B 4C C8 04               MOV ECX,dword ptr [EAX + ECX*0x8 + 0x4]
00463B42  EB 5B                     JMP 0x00463b9f
LAB_00463b44:
00463B44  66 85 C0                  TEST AX,AX
00463B47  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00463B4A  7C 51                     JL 0x00463b9d
00463B4C  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
00463B53  7D 48                     JGE 0x00463b9d
00463B55  66 85 D2                  TEST DX,DX
00463B58  7C 43                     JL 0x00463b9d
00463B5A  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00463B61  7D 3A                     JGE 0x00463b9d
00463B63  66 85 C9                  TEST CX,CX
00463B66  7C 35                     JL 0x00463b9d
00463B68  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00463B6F  7D 2C                     JGE 0x00463b9d
00463B71  0F BF 05 46 B2 7F 00      MOVSX EAX,word ptr [0x007fb246]
00463B78  0F BF C9                  MOVSX ECX,CX
00463B7B  0F AF C8                  IMUL ECX,EAX
00463B7E  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
00463B85  0F BF D2                  MOVSX EDX,DX
00463B88  0F AF D0                  IMUL EDX,EAX
00463B8B  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
00463B90  03 CA                     ADD ECX,EDX
00463B92  0F BF 55 F4               MOVSX EDX,word ptr [EBP + -0xc]
00463B96  03 CA                     ADD ECX,EDX
00463B98  8B 0C C8                  MOV ECX,dword ptr [EAX + ECX*0x8]
00463B9B  EB 02                     JMP 0x00463b9f
LAB_00463b9d:
00463B9D  33 C9                     XOR ECX,ECX
LAB_00463b9f:
00463B9F  85 C9                     TEST ECX,ECX
00463BA1  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00463BA4  74 4F                     JZ 0x00463bf5
00463BA6  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
00463BA9  8B 86 F4 07 00 00         MOV EAX,dword ptr [ESI + 0x7f4]
00463BAF  3B D0                     CMP EDX,EAX
00463BB1  75 42                     JNZ 0x00463bf5
00463BB3  8B 01                     MOV EAX,dword ptr [ECX]
00463BB5  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
00463BBB  85 C0                     TEST EAX,EAX
00463BBD  74 24                     JZ 0x00463be3
00463BBF  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00463BC2  81 79 20 AE 01 00 00      CMP dword ptr [ECX + 0x20],0x1ae
00463BC9  0F 85 20 04 00 00         JNZ 0x00463fef
00463BCF  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
00463BD2  8B 11                     MOV EDX,dword ptr [ECX]
00463BD4  50                        PUSH EAX
00463BD5  FF 92 F4 00 00 00         CALL dword ptr [EDX + 0xf4]
00463BDB  85 C0                     TEST EAX,EAX
00463BDD  0F 85 0C 04 00 00         JNZ 0x00463fef
LAB_00463be3:
00463BE3  8B CE                     MOV ECX,ESI
00463BE5  E8 6B FC F9 FF            CALL 0x00403855
00463BEA  33 C0                     XOR EAX,EAX
00463BEC  5F                        POP EDI
00463BED  5E                        POP ESI
00463BEE  5B                        POP EBX
00463BEF  8B E5                     MOV ESP,EBP
00463BF1  5D                        POP EBP
00463BF2  C2 04 00                  RET 0x4
LAB_00463bf5:
00463BF5  8B CE                     MOV ECX,ESI
00463BF7  E8 59 FC F9 FF            CALL 0x00403855
00463BFC  8B 96 F4 07 00 00         MOV EDX,dword ptr [ESI + 0x7f4]
00463C02  8D 4D F8                  LEA ECX,[EBP + -0x8]
00463C05  51                        PUSH ECX
00463C06  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00463C0C  52                        PUSH EDX
00463C0D  E8 BE 26 28 00            CALL 0x006e62d0
00463C12  83 F8 FC                  CMP EAX,-0x4
00463C15  0F 84 FF F8 FF FF         JZ 0x0046351a
00463C1B  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00463C1E  8B 01                     MOV EAX,dword ptr [ECX]
00463C20  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
00463C26  85 C0                     TEST EAX,EAX
00463C28  0F 84 EC F8 FF FF         JZ 0x0046351a
00463C2E  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00463C31  81 79 20 AE 01 00 00      CMP dword ptr [ECX + 0x20],0x1ae
00463C38  0F 85 45 FE FF FF         JNZ 0x00463a83
00463C3E  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
00463C41  8B 11                     MOV EDX,dword ptr [ECX]
00463C43  50                        PUSH EAX
00463C44  FF 92 F4 00 00 00         CALL dword ptr [EDX + 0xf4]
00463C4A  85 C0                     TEST EAX,EAX
00463C4C  0F 84 C8 F8 FF FF         JZ 0x0046351a
00463C52  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00463C55  E9 29 FE FF FF            JMP 0x00463a83
switchD_004638e6::caseD_0:
00463C5A  8B 86 FC 07 00 00         MOV EAX,dword ptr [ESI + 0x7fc]
00463C60  66 8B 8E 04 08 00 00      MOV CX,word ptr [ESI + 0x804]
00463C67  66 8B 96 02 08 00 00      MOV DX,word ptr [ESI + 0x802]
00463C6E  83 F8 03                  CMP EAX,0x3
00463C71  8D BE 04 08 00 00         LEA EDI,[ESI + 0x804]
00463C77  8D 9E 02 08 00 00         LEA EBX,[ESI + 0x802]
00463C7D  8D 86 00 08 00 00         LEA EAX,[ESI + 0x800]
00463C83  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00463C86  66 8B 00                  MOV AX,word ptr [EAX]
00463C89  75 72                     JNZ 0x00463cfd
00463C8B  66 85 C0                  TEST AX,AX
00463C8E  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00463C91  0F 8C BF 00 00 00         JL 0x00463d56
00463C97  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
00463C9E  0F 8D B2 00 00 00         JGE 0x00463d56
00463CA4  66 85 D2                  TEST DX,DX
00463CA7  0F 8C A9 00 00 00         JL 0x00463d56
00463CAD  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00463CB4  0F 8D 9C 00 00 00         JGE 0x00463d56
00463CBA  66 85 C9                  TEST CX,CX
00463CBD  0F 8C 93 00 00 00         JL 0x00463d56
00463CC3  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00463CCA  0F 8D 86 00 00 00         JGE 0x00463d56
00463CD0  0F BF 05 46 B2 7F 00      MOVSX EAX,word ptr [0x007fb246]
00463CD7  0F BF C9                  MOVSX ECX,CX
00463CDA  0F AF C8                  IMUL ECX,EAX
00463CDD  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
00463CE4  0F BF D2                  MOVSX EDX,DX
00463CE7  0F AF D0                  IMUL EDX,EAX
00463CEA  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
00463CEF  03 CA                     ADD ECX,EDX
00463CF1  0F BF 55 F4               MOVSX EDX,word ptr [EBP + -0xc]
00463CF5  03 CA                     ADD ECX,EDX
00463CF7  8B 4C C8 04               MOV ECX,dword ptr [EAX + ECX*0x8 + 0x4]
00463CFB  EB 5B                     JMP 0x00463d58
LAB_00463cfd:
00463CFD  66 85 C0                  TEST AX,AX
00463D00  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00463D03  7C 51                     JL 0x00463d56
00463D05  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
00463D0C  7D 48                     JGE 0x00463d56
00463D0E  66 85 D2                  TEST DX,DX
00463D11  7C 43                     JL 0x00463d56
00463D13  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00463D1A  7D 3A                     JGE 0x00463d56
00463D1C  66 85 C9                  TEST CX,CX
00463D1F  7C 35                     JL 0x00463d56
00463D21  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00463D28  7D 2C                     JGE 0x00463d56
00463D2A  0F BF 05 46 B2 7F 00      MOVSX EAX,word ptr [0x007fb246]
00463D31  0F BF C9                  MOVSX ECX,CX
00463D34  0F AF C8                  IMUL ECX,EAX
00463D37  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
00463D3E  0F BF D2                  MOVSX EDX,DX
00463D41  0F AF D0                  IMUL EDX,EAX
00463D44  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
00463D49  03 CA                     ADD ECX,EDX
00463D4B  0F BF 55 F4               MOVSX EDX,word ptr [EBP + -0xc]
00463D4F  03 CA                     ADD ECX,EDX
00463D51  8B 0C C8                  MOV ECX,dword ptr [EAX + ECX*0x8]
00463D54  EB 02                     JMP 0x00463d58
LAB_00463d56:
00463D56  33 C9                     XOR ECX,ECX
LAB_00463d58:
00463D58  85 C9                     TEST ECX,ECX
00463D5A  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00463D5D  0F 84 04 02 00 00         JZ 0x00463f67
00463D63  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
00463D66  8B 86 F4 07 00 00         MOV EAX,dword ptr [ESI + 0x7f4]
00463D6C  3B D0                     CMP EDX,EAX
00463D6E  0F 85 F3 01 00 00         JNZ 0x00463f67
00463D74  8B 01                     MOV EAX,dword ptr [ECX]
00463D76  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
00463D7C  85 C0                     TEST EAX,EAX
00463D7E  0F 84 96 F7 FF FF         JZ 0x0046351a
00463D84  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00463D87  81 79 20 AE 01 00 00      CMP dword ptr [ECX + 0x20],0x1ae
00463D8E  75 17                     JNZ 0x00463da7
00463D90  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
00463D93  8B 11                     MOV EDX,dword ptr [ECX]
00463D95  50                        PUSH EAX
00463D96  FF 92 F4 00 00 00         CALL dword ptr [EDX + 0xf4]
00463D9C  85 C0                     TEST EAX,EAX
00463D9E  0F 84 76 F7 FF FF         JZ 0x0046351a
00463DA4  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
LAB_00463da7:
00463DA7  8B 86 F8 07 00 00         MOV EAX,dword ptr [ESI + 0x7f8]
00463DAD  85 C0                     TEST EAX,EAX
00463DAF  75 61                     JNZ 0x00463e12
00463DB1  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00463DB4  0F BF 46 47               MOVSX EAX,word ptr [ESI + 0x47]
00463DB8  0F BF 09                  MOVSX ECX,word ptr [ECX]
00463DBB  2B C1                     SUB EAX,ECX
00463DBD  99                        CDQ
00463DBE  33 C2                     XOR EAX,EDX
00463DC0  2B C2                     SUB EAX,EDX
00463DC2  83 F8 01                  CMP EAX,0x1
00463DC5  7F 3E                     JG 0x00463e05
00463DC7  0F BF 46 49               MOVSX EAX,word ptr [ESI + 0x49]
00463DCB  0F BF 13                  MOVSX EDX,word ptr [EBX]
00463DCE  2B C2                     SUB EAX,EDX
00463DD0  99                        CDQ
00463DD1  33 C2                     XOR EAX,EDX
00463DD3  2B C2                     SUB EAX,EDX
00463DD5  83 F8 01                  CMP EAX,0x1
00463DD8  7F 2B                     JG 0x00463e05
00463DDA  0F BF 46 4B               MOVSX EAX,word ptr [ESI + 0x4b]
00463DDE  0F BF 17                  MOVSX EDX,word ptr [EDI]
00463DE1  2B C2                     SUB EAX,EDX
00463DE3  99                        CDQ
00463DE4  33 C2                     XOR EAX,EDX
00463DE6  2B C2                     SUB EAX,EDX
00463DE8  83 F8 01                  CMP EAX,0x1
00463DEB  7F 18                     JG 0x00463e05
00463DED  C7 86 2E 08 00 00 03 00 00 00  MOV dword ptr [ESI + 0x82e],0x3
00463DF7  B8 02 00 00 00            MOV EAX,0x2
00463DFC  5F                        POP EDI
00463DFD  5E                        POP ESI
00463DFE  5B                        POP EBX
00463DFF  8B E5                     MOV ESP,EBP
00463E01  5D                        POP EBP
00463E02  C2 04 00                  RET 0x4
LAB_00463e05:
00463E05  0F BF 07                  MOVSX EAX,word ptr [EDI]
00463E08  0F BF 13                  MOVSX EDX,word ptr [EBX]
00463E0B  50                        PUSH EAX
00463E0C  52                        PUSH EDX
00463E0D  E9 C3 01 00 00            JMP 0x00463fd5
LAB_00463e12:
00463E12  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00463E15  57                        PUSH EDI
00463E16  53                        PUSH EBX
00463E17  50                        PUSH EAX
00463E18  C7 86 2E 08 00 00 02 00 00 00  MOV dword ptr [ESI + 0x82e],0x2
00463E22  C7 86 B7 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xb7],0x0
00463E2C  E8 94 DA F9 FF            CALL 0x004018c5
00463E31  0F BF 0F                  MOVSX ECX,word ptr [EDI]
00463E34  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00463E37  51                        PUSH ECX
00463E38  0F BF 13                  MOVSX EDX,word ptr [EBX]
00463E3B  0F BF 08                  MOVSX ECX,word ptr [EAX]
00463E3E  52                        PUSH EDX
00463E3F  51                        PUSH ECX
00463E40  8B CE                     MOV ECX,ESI
00463E42  E8 24 11 FA FF            CALL 0x00404f6b
00463E47  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
00463E4A  66 8B 07                  MOV AX,word ptr [EDI]
00463E4D  66 8B 0B                  MOV CX,word ptr [EBX]
00463E50  52                        PUSH EDX
00463E51  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00463E54  50                        PUSH EAX
00463E55  51                        PUSH ECX
00463E56  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00463E5C  66 8B 02                  MOV AX,word ptr [EDX]
00463E5F  50                        PUSH EAX
00463E60  E8 C9 E4 F9 FF            CALL 0x0040232e
00463E65  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
00463E68  66 8B 17                  MOV DX,word ptr [EDI]
00463E6B  66 8B 03                  MOV AX,word ptr [EBX]
00463E6E  51                        PUSH ECX
00463E6F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00463E72  52                        PUSH EDX
00463E73  50                        PUSH EAX
00463E74  66 8B 11                  MOV DX,word ptr [ECX]
00463E77  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00463E7D  66 42                     INC DX
00463E7F  52                        PUSH EDX
00463E80  E8 A9 E4 F9 FF            CALL 0x0040232e
00463E85  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00463E88  66 8B 0F                  MOV CX,word ptr [EDI]
00463E8B  66 8B 13                  MOV DX,word ptr [EBX]
00463E8E  50                        PUSH EAX
00463E8F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00463E92  51                        PUSH ECX
00463E93  66 42                     INC DX
00463E95  66 8B 08                  MOV CX,word ptr [EAX]
00463E98  52                        PUSH EDX
00463E99  51                        PUSH ECX
00463E9A  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00463EA0  E8 89 E4 F9 FF            CALL 0x0040232e
00463EA5  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
00463EA8  66 8B 07                  MOV AX,word ptr [EDI]
00463EAB  66 8B 0B                  MOV CX,word ptr [EBX]
00463EAE  52                        PUSH EDX
00463EAF  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00463EB2  50                        PUSH EAX
00463EB3  66 41                     INC CX
00463EB5  66 8B 02                  MOV AX,word ptr [EDX]
00463EB8  51                        PUSH ECX
00463EB9  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00463EBF  66 40                     INC AX
00463EC1  50                        PUSH EAX
00463EC2  E8 67 E4 F9 FF            CALL 0x0040232e
00463EC7  6A 00                     PUSH 0x0
00463EC9  8B CE                     MOV ECX,ESI
00463ECB  E8 0E F3 F9 FF            CALL 0x004031de
00463ED0  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
00463ED3  66 8B 17                  MOV DX,word ptr [EDI]
00463ED6  66 8B 03                  MOV AX,word ptr [EBX]
00463ED9  51                        PUSH ECX
00463EDA  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00463EDD  52                        PUSH EDX
00463EDE  66 C7 86 F8 00 00 00 00 00  MOV word ptr [ESI + 0xf8],0x0
00463EE7  50                        PUSH EAX
00463EE8  66 8B 11                  MOV DX,word ptr [ECX]
00463EEB  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00463EF1  52                        PUSH EDX
00463EF2  E8 D6 0D FA FF            CALL 0x00404ccd
00463EF7  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00463EFA  50                        PUSH EAX
00463EFB  66 8B 0F                  MOV CX,word ptr [EDI]
00463EFE  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00463F01  66 8B 13                  MOV DX,word ptr [EBX]
00463F04  51                        PUSH ECX
00463F05  66 8B 08                  MOV CX,word ptr [EAX]
00463F08  52                        PUSH EDX
00463F09  66 41                     INC CX
00463F0B  51                        PUSH ECX
00463F0C  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00463F12  E8 B6 0D FA FF            CALL 0x00404ccd
00463F17  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
00463F1A  66 8B 07                  MOV AX,word ptr [EDI]
00463F1D  66 8B 0B                  MOV CX,word ptr [EBX]
00463F20  52                        PUSH EDX
00463F21  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00463F24  50                        PUSH EAX
00463F25  66 41                     INC CX
00463F27  66 8B 02                  MOV AX,word ptr [EDX]
00463F2A  51                        PUSH ECX
00463F2B  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00463F31  50                        PUSH EAX
00463F32  E8 96 0D FA FF            CALL 0x00404ccd
00463F37  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
00463F3A  66 8B 17                  MOV DX,word ptr [EDI]
00463F3D  66 8B 03                  MOV AX,word ptr [EBX]
00463F40  51                        PUSH ECX
00463F41  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00463F44  52                        PUSH EDX
00463F45  66 40                     INC AX
00463F47  66 8B 11                  MOV DX,word ptr [ECX]
00463F4A  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00463F50  66 42                     INC DX
00463F52  50                        PUSH EAX
00463F53  52                        PUSH EDX
00463F54  E8 74 0D FA FF            CALL 0x00404ccd
00463F59  B8 02 00 00 00            MOV EAX,0x2
00463F5E  5F                        POP EDI
00463F5F  5E                        POP ESI
00463F60  5B                        POP EBX
00463F61  8B E5                     MOV ESP,EBP
00463F63  5D                        POP EBP
00463F64  C2 04 00                  RET 0x4
LAB_00463f67:
00463F67  8B 8E F4 07 00 00         MOV ECX,dword ptr [ESI + 0x7f4]
00463F6D  8D 45 F0                  LEA EAX,[EBP + -0x10]
00463F70  50                        PUSH EAX
00463F71  51                        PUSH ECX
00463F72  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00463F78  E8 53 23 28 00            CALL 0x006e62d0
00463F7D  83 F8 FC                  CMP EAX,-0x4
00463F80  0F 84 94 F5 FF FF         JZ 0x0046351a
00463F86  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00463F89  8B 11                     MOV EDX,dword ptr [ECX]
00463F8B  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
00463F91  85 C0                     TEST EAX,EAX
00463F93  0F 84 81 F5 FF FF         JZ 0x0046351a
00463F99  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00463F9C  81 79 20 AE 01 00 00      CMP dword ptr [ECX + 0x20],0x1ae
00463FA3  75 17                     JNZ 0x00463fbc
00463FA5  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
00463FA8  8B 01                     MOV EAX,dword ptr [ECX]
00463FAA  52                        PUSH EDX
00463FAB  FF 90 F4 00 00 00         CALL dword ptr [EAX + 0xf4]
00463FB1  85 C0                     TEST EAX,EAX
00463FB3  0F 84 61 F5 FF FF         JZ 0x0046351a
00463FB9  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
LAB_00463fbc:
00463FBC  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00463FBF  57                        PUSH EDI
00463FC0  53                        PUSH EBX
00463FC1  50                        PUSH EAX
00463FC2  E8 FE D8 F9 FF            CALL 0x004018c5
00463FC7  0F BF 0F                  MOVSX ECX,word ptr [EDI]
00463FCA  0F BF 13                  MOVSX EDX,word ptr [EBX]
00463FCD  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00463FD0  51                        PUSH ECX
00463FD1  52                        PUSH EDX
00463FD2  0F BF 08                  MOVSX ECX,word ptr [EAX]
LAB_00463fd5:
00463FD5  51                        PUSH ECX
FUN_00462180::cf_common_exit_00463FD6:
00463FD6  8B CE                     MOV ECX,ESI
00463FD8  E8 8E 0F FA FF            CALL 0x00404f6b
00463FDD  6A 00                     PUSH 0x0
00463FDF  8B CE                     MOV ECX,ESI
00463FE1  E8 F8 F1 F9 FF            CALL 0x004031de
00463FE6  66 C7 86 F8 00 00 00 00 00  MOV word ptr [ESI + 0xf8],0x0
switchD_004638e6::caseD_2:
00463FEF  B8 02 00 00 00            MOV EAX,0x2
00463FF4  5F                        POP EDI
00463FF5  5E                        POP ESI
00463FF6  5B                        POP EBX
00463FF7  8B E5                     MOV ESP,EBP
00463FF9  5D                        POP EBP
00463FFA  C2 04 00                  RET 0x4
LAB_00463ffd:
00463FFD  83 F8 02                  CMP EAX,0x2
00464000  0F 85 2E 05 00 00         JNZ 0x00464534
00464006  50                        PUSH EAX
00464007  8B CE                     MOV ECX,ESI
00464009  E8 D0 F1 F9 FF            CALL 0x004031de
0046400E  40                        INC EAX
0046400F  83 F8 04                  CMP EAX,0x4
00464012  0F 87 0E 05 00 00         JA 0x00464526
switchD_00464018::switchD:
00464018  FF 24 85 8C 49 46 00      JMP dword ptr [EAX*0x4 + 0x46498c]
FUN_00462180::cf_common_exit_0046401F:
0046401F  83 C8 FF                  OR EAX,0xffffffff
00464022  5F                        POP EDI
00464023  5E                        POP ESI
00464024  5B                        POP EBX
00464025  8B E5                     MOV ESP,EBP
00464027  5D                        POP EBP
00464028  C2 04 00                  RET 0x4
switchD_00464018::caseD_3:
0046402B  8B 86 FC 07 00 00         MOV EAX,dword ptr [ESI + 0x7fc]
00464031  66 8B 8E 04 08 00 00      MOV CX,word ptr [ESI + 0x804]
00464038  66 8B 96 02 08 00 00      MOV DX,word ptr [ESI + 0x802]
0046403F  83 F8 03                  CMP EAX,0x3
00464042  8D BE 04 08 00 00         LEA EDI,[ESI + 0x804]
00464048  8D 9E 02 08 00 00         LEA EBX,[ESI + 0x802]
0046404E  8D 86 00 08 00 00         LEA EAX,[ESI + 0x800]
00464054  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00464057  66 8B 00                  MOV AX,word ptr [EAX]
0046405A  75 76                     JNZ 0x004640d2
0046405C  66 85 C0                  TEST AX,AX
0046405F  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00464062  0F 8C B2 F4 FF FF         JL 0x0046351a
00464068  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
0046406F  0F 8D A5 F4 FF FF         JGE 0x0046351a
00464075  66 85 D2                  TEST DX,DX
00464078  0F 8C 9C F4 FF FF         JL 0x0046351a
0046407E  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00464085  0F 8D 8F F4 FF FF         JGE 0x0046351a
0046408B  66 85 C9                  TEST CX,CX
0046408E  0F 8C 86 F4 FF FF         JL 0x0046351a
00464094  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0046409B  0F 8D 79 F4 FF FF         JGE 0x0046351a
004640A1  0F BF C1                  MOVSX EAX,CX
004640A4  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
004640AB  0F AF C1                  IMUL EAX,ECX
004640AE  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
004640B5  0F BF D2                  MOVSX EDX,DX
004640B8  0F AF D1                  IMUL EDX,ECX
004640BB  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
004640C1  03 C2                     ADD EAX,EDX
004640C3  0F BF 55 F4               MOVSX EDX,word ptr [EBP + -0xc]
004640C7  03 C2                     ADD EAX,EDX
004640C9  8B 44 C1 04               MOV EAX,dword ptr [ECX + EAX*0x8 + 0x4]
004640CD  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
004640D0  EB 75                     JMP 0x00464147
LAB_004640d2:
004640D2  66 85 C0                  TEST AX,AX
004640D5  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004640D8  0F 8C 3C F4 FF FF         JL 0x0046351a
004640DE  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
004640E5  0F 8D 2F F4 FF FF         JGE 0x0046351a
004640EB  66 85 D2                  TEST DX,DX
004640EE  0F 8C 26 F4 FF FF         JL 0x0046351a
004640F4  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
004640FB  0F 8D 19 F4 FF FF         JGE 0x0046351a
00464101  66 85 C9                  TEST CX,CX
00464104  0F 8C 10 F4 FF FF         JL 0x0046351a
0046410A  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00464111  0F 8D 03 F4 FF FF         JGE 0x0046351a
00464117  0F BF C1                  MOVSX EAX,CX
0046411A  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
00464121  0F AF C1                  IMUL EAX,ECX
00464124  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
0046412B  0F BF D2                  MOVSX EDX,DX
0046412E  0F AF D1                  IMUL EDX,ECX
00464131  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
00464137  03 C2                     ADD EAX,EDX
00464139  0F BF 55 F4               MOVSX EDX,word ptr [EBP + -0xc]
0046413D  03 C2                     ADD EAX,EDX
0046413F  8B 14 C1                  MOV EDX,dword ptr [ECX + EAX*0x8]
00464142  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
00464145  8B C2                     MOV EAX,EDX
LAB_00464147:
00464147  85 C0                     TEST EAX,EAX
00464149  0F 84 CB F3 FF FF         JZ 0x0046351a
0046414F  8B 40 18                  MOV EAX,dword ptr [EAX + 0x18]
00464152  8B 8E F4 07 00 00         MOV ECX,dword ptr [ESI + 0x7f4]
00464158  3B C1                     CMP EAX,ECX
0046415A  0F 85 BA F3 FF FF         JNZ 0x0046351a
00464160  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00464163  8B 11                     MOV EDX,dword ptr [ECX]
00464165  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
0046416B  85 C0                     TEST EAX,EAX
0046416D  0F 84 A7 F3 FF FF         JZ 0x0046351a
00464173  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00464176  81 78 20 AE 01 00 00      CMP dword ptr [EAX + 0x20],0x1ae
0046417D  75 16                     JNZ 0x00464195
0046417F  8B C8                     MOV ECX,EAX
00464181  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
00464184  50                        PUSH EAX
00464185  8B 11                     MOV EDX,dword ptr [ECX]
00464187  FF 92 F4 00 00 00         CALL dword ptr [EDX + 0xf4]
0046418D  85 C0                     TEST EAX,EAX
0046418F  0F 84 85 F3 FF FF         JZ 0x0046351a
LAB_00464195:
00464195  8B 86 FC 07 00 00         MOV EAX,dword ptr [ESI + 0x7fc]
0046419B  66 8B 8E DF 00 00 00      MOV CX,word ptr [ESI + 0xdf]
004641A2  66 8B 96 DB 00 00 00      MOV DX,word ptr [ESI + 0xdb]
004641A9  83 F8 03                  CMP EAX,0x3
004641AC  66 8B 86 D7 00 00 00      MOV AX,word ptr [ESI + 0xd7]
004641B3  75 72                     JNZ 0x00464227
004641B5  66 85 C0                  TEST AX,AX
004641B8  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004641BB  0F 8C BF 00 00 00         JL 0x00464280
004641C1  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
004641C8  0F 8D B2 00 00 00         JGE 0x00464280
004641CE  66 85 D2                  TEST DX,DX
004641D1  0F 8C A9 00 00 00         JL 0x00464280
004641D7  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
004641DE  0F 8D 9C 00 00 00         JGE 0x00464280
004641E4  66 85 C9                  TEST CX,CX
004641E7  0F 8C 93 00 00 00         JL 0x00464280
004641ED  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
004641F4  0F 8D 86 00 00 00         JGE 0x00464280
004641FA  0F BF 05 46 B2 7F 00      MOVSX EAX,word ptr [0x007fb246]
00464201  0F BF C9                  MOVSX ECX,CX
00464204  0F AF C8                  IMUL ECX,EAX
00464207  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
0046420E  0F BF D2                  MOVSX EDX,DX
00464211  0F AF D0                  IMUL EDX,EAX
00464214  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
00464219  03 CA                     ADD ECX,EDX
0046421B  0F BF 55 F4               MOVSX EDX,word ptr [EBP + -0xc]
0046421F  03 CA                     ADD ECX,EDX
00464221  8B 44 C8 04               MOV EAX,dword ptr [EAX + ECX*0x8 + 0x4]
00464225  EB 5B                     JMP 0x00464282
LAB_00464227:
00464227  66 85 C0                  TEST AX,AX
0046422A  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0046422D  7C 51                     JL 0x00464280
0046422F  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
00464236  7D 48                     JGE 0x00464280
00464238  66 85 D2                  TEST DX,DX
0046423B  7C 43                     JL 0x00464280
0046423D  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00464244  7D 3A                     JGE 0x00464280
00464246  66 85 C9                  TEST CX,CX
00464249  7C 35                     JL 0x00464280
0046424B  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00464252  7D 2C                     JGE 0x00464280
00464254  0F BF 05 46 B2 7F 00      MOVSX EAX,word ptr [0x007fb246]
0046425B  0F BF C9                  MOVSX ECX,CX
0046425E  0F AF C8                  IMUL ECX,EAX
00464261  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
00464268  0F BF D2                  MOVSX EDX,DX
0046426B  0F AF D0                  IMUL EDX,EAX
0046426E  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
00464273  03 CA                     ADD ECX,EDX
00464275  0F BF 55 F4               MOVSX EDX,word ptr [EBP + -0xc]
00464279  03 CA                     ADD ECX,EDX
0046427B  8B 04 C8                  MOV EAX,dword ptr [EAX + ECX*0x8]
0046427E  EB 02                     JMP 0x00464282
LAB_00464280:
00464280  33 C0                     XOR EAX,EAX
FUN_00462180::cf_common_exit_00464282:
00464282  39 45 F0                  CMP dword ptr [EBP + -0x10],EAX
00464285  75 18                     JNZ 0x0046429f
00464287  C7 86 2E 08 00 00 03 00 00 00  MOV dword ptr [ESI + 0x82e],0x3
00464291  B8 02 00 00 00            MOV EAX,0x2
00464296  5F                        POP EDI
00464297  5E                        POP ESI
00464298  5B                        POP EBX
00464299  8B E5                     MOV ESP,EBP
0046429B  5D                        POP EBP
0046429C  C2 04 00                  RET 0x4
LAB_0046429f:
0046429F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004642A2  57                        PUSH EDI
004642A3  53                        PUSH EBX
004642A4  51                        PUSH ECX
004642A5  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004642A8  E8 18 D6 F9 FF            CALL 0x004018c5
004642AD  0F BF 17                  MOVSX EDX,word ptr [EDI]
004642B0  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004642B3  52                        PUSH EDX
004642B4  0F BF 03                  MOVSX EAX,word ptr [EBX]
004642B7  0F BF 11                  MOVSX EDX,word ptr [ECX]
004642BA  50                        PUSH EAX
004642BB  52                        PUSH EDX
004642BC  8B CE                     MOV ECX,ESI
004642BE  E8 A8 0C FA FF            CALL 0x00404f6b
004642C3  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
004642C6  66 8B 0F                  MOV CX,word ptr [EDI]
004642C9  66 8B 13                  MOV DX,word ptr [EBX]
004642CC  50                        PUSH EAX
004642CD  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004642D0  51                        PUSH ECX
004642D1  52                        PUSH EDX
004642D2  66 8B 08                  MOV CX,word ptr [EAX]
004642D5  51                        PUSH ECX
004642D6  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
004642DC  E8 4D E0 F9 FF            CALL 0x0040232e
004642E1  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
004642E4  66 8B 07                  MOV AX,word ptr [EDI]
004642E7  66 8B 0B                  MOV CX,word ptr [EBX]
004642EA  52                        PUSH EDX
004642EB  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004642EE  50                        PUSH EAX
004642EF  51                        PUSH ECX
004642F0  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
004642F6  66 8B 02                  MOV AX,word ptr [EDX]
004642F9  66 40                     INC AX
004642FB  50                        PUSH EAX
004642FC  E8 2D E0 F9 FF            CALL 0x0040232e
00464301  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
00464304  66 8B 17                  MOV DX,word ptr [EDI]
00464307  66 8B 03                  MOV AX,word ptr [EBX]
0046430A  51                        PUSH ECX
0046430B  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0046430E  52                        PUSH EDX
0046430F  66 40                     INC AX
00464311  66 8B 11                  MOV DX,word ptr [ECX]
00464314  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
0046431A  50                        PUSH EAX
0046431B  52                        PUSH EDX
0046431C  E8 0D E0 F9 FF            CALL 0x0040232e
00464321  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00464324  66 8B 0F                  MOV CX,word ptr [EDI]
00464327  66 8B 13                  MOV DX,word ptr [EBX]
0046432A  50                        PUSH EAX
0046432B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0046432E  51                        PUSH ECX
0046432F  66 42                     INC DX
00464331  66 8B 08                  MOV CX,word ptr [EAX]
00464334  52                        PUSH EDX
00464335  66 41                     INC CX
00464337  51                        PUSH ECX
00464338  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
0046433E  E8 EB DF F9 FF            CALL 0x0040232e
00464343  6A 00                     PUSH 0x0
00464345  8B CE                     MOV ECX,ESI
00464347  E8 92 EE F9 FF            CALL 0x004031de
0046434C  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0046434F  66 8B 07                  MOV AX,word ptr [EDI]
00464352  66 8B 0B                  MOV CX,word ptr [EBX]
00464355  52                        PUSH EDX
00464356  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00464359  50                        PUSH EAX
0046435A  66 C7 86 F8 00 00 00 00 00  MOV word ptr [ESI + 0xf8],0x0
00464363  51                        PUSH ECX
00464364  66 8B 02                  MOV AX,word ptr [EDX]
00464367  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
0046436D  50                        PUSH EAX
0046436E  E8 5A 09 FA FF            CALL 0x00404ccd
00464373  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
00464376  66 8B 17                  MOV DX,word ptr [EDI]
00464379  51                        PUSH ECX
0046437A  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0046437D  66 8B 03                  MOV AX,word ptr [EBX]
00464380  52                        PUSH EDX
00464381  50                        PUSH EAX
00464382  66 8B 11                  MOV DX,word ptr [ECX]
00464385  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
0046438B  66 42                     INC DX
0046438D  52                        PUSH EDX
0046438E  E8 3A 09 FA FF            CALL 0x00404ccd
00464393  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00464396  66 8B 0F                  MOV CX,word ptr [EDI]
00464399  66 8B 13                  MOV DX,word ptr [EBX]
0046439C  50                        PUSH EAX
0046439D  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004643A0  51                        PUSH ECX
004643A1  66 42                     INC DX
004643A3  66 8B 08                  MOV CX,word ptr [EAX]
004643A6  52                        PUSH EDX
004643A7  51                        PUSH ECX
004643A8  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
004643AE  E8 1A 09 FA FF            CALL 0x00404ccd
004643B3  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
004643B6  66 8B 07                  MOV AX,word ptr [EDI]
004643B9  66 8B 0B                  MOV CX,word ptr [EBX]
004643BC  52                        PUSH EDX
004643BD  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004643C0  50                        PUSH EAX
004643C1  66 41                     INC CX
004643C3  66 8B 02                  MOV AX,word ptr [EDX]
004643C6  51                        PUSH ECX
004643C7  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
004643CD  66 40                     INC AX
004643CF  50                        PUSH EAX
004643D0  E8 F8 08 FA FF            CALL 0x00404ccd
004643D5  B8 02 00 00 00            MOV EAX,0x2
004643DA  5F                        POP EDI
004643DB  5E                        POP ESI
004643DC  5B                        POP EBX
004643DD  8B E5                     MOV ESP,EBP
004643DF  5D                        POP EBP
004643E0  C2 04 00                  RET 0x4
switchD_00464018::caseD_1:
004643E3  8B 86 FC 07 00 00         MOV EAX,dword ptr [ESI + 0x7fc]
004643E9  66 8B 8E 04 08 00 00      MOV CX,word ptr [ESI + 0x804]
004643F0  66 8B 96 02 08 00 00      MOV DX,word ptr [ESI + 0x802]
004643F7  83 F8 03                  CMP EAX,0x3
004643FA  66 8B 86 00 08 00 00      MOV AX,word ptr [ESI + 0x800]
00464401  75 6E                     JNZ 0x00464471
00464403  66 85 C0                  TEST AX,AX
00464406  0F 8C 0E F1 FF FF         JL 0x0046351a
0046440C  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
00464413  66 3B C7                  CMP AX,DI
00464416  0F 8D FE F0 FF FF         JGE 0x0046351a
0046441C  66 85 D2                  TEST DX,DX
0046441F  0F 8C F5 F0 FF FF         JL 0x0046351a
00464425  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0046442C  0F 8D E8 F0 FF FF         JGE 0x0046351a
00464432  66 85 C9                  TEST CX,CX
00464435  0F 8C DF F0 FF FF         JL 0x0046351a
0046443B  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00464442  0F 8D D2 F0 FF FF         JGE 0x0046351a
00464448  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0046444F  0F BF C9                  MOVSX ECX,CX
00464452  0F BF D2                  MOVSX EDX,DX
00464455  0F AF CB                  IMUL ECX,EBX
00464458  0F BF FF                  MOVSX EDI,DI
0046445B  0F AF D7                  IMUL EDX,EDI
0046445E  0F BF C0                  MOVSX EAX,AX
00464461  03 CA                     ADD ECX,EDX
00464463  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00464469  03 C8                     ADD ECX,EAX
0046446B  8B 7C CA 04               MOV EDI,dword ptr [EDX + ECX*0x8 + 0x4]
0046446F  EB 6B                     JMP 0x004644dc
LAB_00464471:
00464471  66 85 C0                  TEST AX,AX
00464474  0F 8C A0 F0 FF FF         JL 0x0046351a
0046447A  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
00464481  66 3B C7                  CMP AX,DI
00464484  0F 8D 90 F0 FF FF         JGE 0x0046351a
0046448A  66 85 D2                  TEST DX,DX
0046448D  0F 8C 87 F0 FF FF         JL 0x0046351a
00464493  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0046449A  0F 8D 7A F0 FF FF         JGE 0x0046351a
004644A0  66 85 C9                  TEST CX,CX
004644A3  0F 8C 71 F0 FF FF         JL 0x0046351a
004644A9  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
004644B0  0F 8D 64 F0 FF FF         JGE 0x0046351a
004644B6  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
004644BD  0F BF C9                  MOVSX ECX,CX
004644C0  0F BF D2                  MOVSX EDX,DX
004644C3  0F AF CB                  IMUL ECX,EBX
004644C6  0F BF FF                  MOVSX EDI,DI
004644C9  0F AF D7                  IMUL EDX,EDI
004644CC  0F BF C0                  MOVSX EAX,AX
004644CF  03 CA                     ADD ECX,EDX
004644D1  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
004644D7  03 C8                     ADD ECX,EAX
004644D9  8B 3C CA                  MOV EDI,dword ptr [EDX + ECX*0x8]
LAB_004644dc:
004644DC  85 FF                     TEST EDI,EDI
004644DE  0F 84 36 F0 FF FF         JZ 0x0046351a
004644E4  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
004644E7  8B 8E F4 07 00 00         MOV ECX,dword ptr [ESI + 0x7f4]
004644ED  3B C1                     CMP EAX,ECX
004644EF  0F 85 25 F0 FF FF         JNZ 0x0046351a
004644F5  8B 17                     MOV EDX,dword ptr [EDI]
004644F7  8B CF                     MOV ECX,EDI
004644F9  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
004644FF  85 C0                     TEST EAX,EAX
00464501  0F 84 13 F0 FF FF         JZ 0x0046351a
00464507  81 7F 20 AE 01 00 00      CMP dword ptr [EDI + 0x20],0x1ae
0046450E  75 16                     JNZ 0x00464526
00464510  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
00464513  8B 07                     MOV EAX,dword ptr [EDI]
00464515  51                        PUSH ECX
00464516  8B CF                     MOV ECX,EDI
00464518  FF 90 F4 00 00 00         CALL dword ptr [EAX + 0xf4]
0046451E  85 C0                     TEST EAX,EAX
00464520  0F 84 F4 EF FF FF         JZ 0x0046351a
FUN_00462180::cf_common_exit_00464526:
00464526  B8 02 00 00 00            MOV EAX,0x2
0046452B  5F                        POP EDI
0046452C  5E                        POP ESI
0046452D  5B                        POP EBX
0046452E  8B E5                     MOV ESP,EBP
00464530  5D                        POP EBP
00464531  C2 04 00                  RET 0x4
LAB_00464534:
00464534  83 F8 03                  CMP EAX,0x3
00464537  0F 85 E2 FA FF FF         JNZ 0x0046401f
0046453D  8B 86 FC 07 00 00         MOV EAX,dword ptr [ESI + 0x7fc]
00464543  66 8B 8E 04 08 00 00      MOV CX,word ptr [ESI + 0x804]
0046454A  66 8B 96 02 08 00 00      MOV DX,word ptr [ESI + 0x802]
00464551  83 F8 03                  CMP EAX,0x3
00464554  66 8B 86 00 08 00 00      MOV AX,word ptr [ESI + 0x800]
0046455B  75 6A                     JNZ 0x004645c7
0046455D  66 85 C0                  TEST AX,AX
00464560  0F 8C B6 00 00 00         JL 0x0046461c
00464566  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0046456D  66 3B C7                  CMP AX,DI
00464570  0F 8D A6 00 00 00         JGE 0x0046461c
00464576  66 85 D2                  TEST DX,DX
00464579  0F 8C 9D 00 00 00         JL 0x0046461c
0046457F  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00464586  0F 8D 90 00 00 00         JGE 0x0046461c
0046458C  66 85 C9                  TEST CX,CX
0046458F  0F 8C 87 00 00 00         JL 0x0046461c
00464595  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0046459C  7D 7E                     JGE 0x0046461c
0046459E  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
004645A5  0F BF C9                  MOVSX ECX,CX
004645A8  0F BF D2                  MOVSX EDX,DX
004645AB  0F AF CB                  IMUL ECX,EBX
004645AE  0F BF FF                  MOVSX EDI,DI
004645B1  0F AF D7                  IMUL EDX,EDI
004645B4  0F BF C0                  MOVSX EAX,AX
004645B7  03 CA                     ADD ECX,EDX
004645B9  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
004645BF  03 C8                     ADD ECX,EAX
004645C1  8B 4C CA 04               MOV ECX,dword ptr [EDX + ECX*0x8 + 0x4]
004645C5  EB 57                     JMP 0x0046461e
LAB_004645c7:
004645C7  66 85 C0                  TEST AX,AX
004645CA  7C 50                     JL 0x0046461c
004645CC  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
004645D3  66 3B C7                  CMP AX,DI
004645D6  7D 44                     JGE 0x0046461c
004645D8  66 85 D2                  TEST DX,DX
004645DB  7C 3F                     JL 0x0046461c
004645DD  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
004645E4  7D 36                     JGE 0x0046461c
004645E6  66 85 C9                  TEST CX,CX
004645E9  7C 31                     JL 0x0046461c
004645EB  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
004645F2  7D 28                     JGE 0x0046461c
004645F4  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
004645FB  0F BF C9                  MOVSX ECX,CX
004645FE  0F BF D2                  MOVSX EDX,DX
00464601  0F AF CB                  IMUL ECX,EBX
00464604  0F BF FF                  MOVSX EDI,DI
00464607  0F AF D7                  IMUL EDX,EDI
0046460A  0F BF C0                  MOVSX EAX,AX
0046460D  03 CA                     ADD ECX,EDX
0046460F  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00464615  03 C8                     ADD ECX,EAX
00464617  8B 0C CA                  MOV ECX,dword ptr [EDX + ECX*0x8]
0046461A  EB 02                     JMP 0x0046461e
LAB_0046461c:
0046461C  33 C9                     XOR ECX,ECX
LAB_0046461e:
0046461E  85 C9                     TEST ECX,ECX
00464620  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00464623  74 11                     JZ 0x00464636
00464625  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
00464628  8B 96 F4 07 00 00         MOV EDX,dword ptr [ESI + 0x7f4]
0046462E  3B C2                     CMP EAX,EDX
00464630  0F 84 D5 00 00 00         JZ 0x0046470b
LAB_00464636:
00464636  8B 96 F4 07 00 00         MOV EDX,dword ptr [ESI + 0x7f4]
0046463C  8D 4D F8                  LEA ECX,[EBP + -0x8]
0046463F  51                        PUSH ECX
00464640  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00464646  52                        PUSH EDX
00464647  E8 84 1C 28 00            CALL 0x006e62d0
0046464C  83 F8 FC                  CMP EAX,-0x4
0046464F  0F 84 7C 02 00 00         JZ 0x004648d1
00464655  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00464658  8B 01                     MOV EAX,dword ptr [ECX]
0046465A  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
00464660  85 C0                     TEST EAX,EAX
00464662  0F 84 69 02 00 00         JZ 0x004648d1
00464668  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0046466B  81 79 20 AE 01 00 00      CMP dword ptr [ECX + 0x20],0x1ae
00464672  75 17                     JNZ 0x0046468b
00464674  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
00464677  8B 11                     MOV EDX,dword ptr [ECX]
00464679  50                        PUSH EAX
0046467A  FF 92 F4 00 00 00         CALL dword ptr [EDX + 0xf4]
00464680  85 C0                     TEST EAX,EAX
00464682  0F 84 49 02 00 00         JZ 0x004648d1
00464688  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
LAB_0046468b:
0046468B  8D 55 F0                  LEA EDX,[EBP + -0x10]
0046468E  8D 45 DC                  LEA EAX,[EBP + -0x24]
00464691  52                        PUSH EDX
00464692  8D 55 F4                  LEA EDX,[EBP + -0xc]
00464695  50                        PUSH EAX
00464696  52                        PUSH EDX
00464697  E8 29 D2 F9 FF            CALL 0x004018c5
0046469C  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
0046469F  0F BF 86 00 08 00 00      MOVSX EAX,word ptr [ESI + 0x800]
004646A6  0F BF CB                  MOVSX ECX,BX
004646A9  2B C1                     SUB EAX,ECX
004646AB  99                        CDQ
004646AC  33 C2                     XOR EAX,EDX
004646AE  2B C2                     SUB EAX,EDX
004646B0  83 F8 01                  CMP EAX,0x1
004646B3  0F 8F EC 01 00 00         JG 0x004648a5
004646B9  8B 7D DC                  MOV EDI,dword ptr [EBP + -0x24]
004646BC  0F BF 86 02 08 00 00      MOVSX EAX,word ptr [ESI + 0x802]
004646C3  0F BF D7                  MOVSX EDX,DI
004646C6  2B C2                     SUB EAX,EDX
004646C8  99                        CDQ
004646C9  33 C2                     XOR EAX,EDX
004646CB  2B C2                     SUB EAX,EDX
004646CD  83 F8 01                  CMP EAX,0x1
004646D0  0F 8F CF 01 00 00         JG 0x004648a5
004646D6  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004646D9  0F BF 86 04 08 00 00      MOVSX EAX,word ptr [ESI + 0x804]
004646E0  0F BF D1                  MOVSX EDX,CX
004646E3  2B C2                     SUB EAX,EDX
004646E5  99                        CDQ
004646E6  33 C2                     XOR EAX,EDX
004646E8  2B C2                     SUB EAX,EDX
004646EA  83 F8 01                  CMP EAX,0x1
004646ED  0F 8F B2 01 00 00         JG 0x004648a5
004646F3  66 89 8E 04 08 00 00      MOV word ptr [ESI + 0x804],CX
004646FA  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004646FD  66 89 9E 00 08 00 00      MOV word ptr [ESI + 0x800],BX
00464704  66 89 BE 02 08 00 00      MOV word ptr [ESI + 0x802],DI
LAB_0046470b:
0046470B  8D 45 F0                  LEA EAX,[EBP + -0x10]
0046470E  8D 55 DC                  LEA EDX,[EBP + -0x24]
00464711  50                        PUSH EAX
00464712  8D 45 F4                  LEA EAX,[EBP + -0xc]
00464715  52                        PUSH EDX
00464716  50                        PUSH EAX
00464717  E8 C7 EA F9 FF            CALL 0x004031e3
0046471C  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0046471F  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
00464722  8B 16                     MOV EDX,dword ptr [ESI]
00464724  50                        PUSH EAX
00464725  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00464728  51                        PUSH ECX
00464729  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
0046472D  50                        PUSH EAX
0046472E  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
00464732  51                        PUSH ECX
00464733  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
00464737  50                        PUSH EAX
00464738  51                        PUSH ECX
00464739  8B CE                     MOV ECX,ESI
0046473B  FF 52 10                  CALL dword ptr [EDX + 0x10]
0046473E  0F BF C0                  MOVSX EAX,AX
00464741  50                        PUSH EAX
00464742  8B CE                     MOV ECX,ESI
00464744  E8 69 E9 F9 FF            CALL 0x004030b2
00464749  50                        PUSH EAX
0046474A  8B CE                     MOV ECX,ESI
0046474C  E8 AB DB F9 FF            CALL 0x004022fc
00464751  8A 56 61                  MOV DL,byte ptr [ESI + 0x61]
00464754  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00464757  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
0046475A  52                        PUSH EDX
0046475B  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0046475E  50                        PUSH EAX
0046475F  66 8B 46 45               MOV AX,word ptr [ESI + 0x45]
00464763  51                        PUSH ECX
00464764  66 8B 4E 43               MOV CX,word ptr [ESI + 0x43]
00464768  52                        PUSH EDX
00464769  66 8B 56 41               MOV DX,word ptr [ESI + 0x41]
0046476D  50                        PUSH EAX
0046476E  51                        PUSH ECX
0046476F  52                        PUSH EDX
00464770  8B CE                     MOV ECX,ESI
00464772  E8 DE DC F9 FF            CALL 0x00402455
00464777  8D 45 90                  LEA EAX,[EBP + -0x70]
0046477A  8D 4D D4                  LEA ECX,[EBP + -0x2c]
0046477D  50                        PUSH EAX
0046477E  51                        PUSH ECX
0046477F  8B CE                     MOV ECX,ESI
00464781  C7 46 7A 00 00 00 00      MOV dword ptr [ESI + 0x7a],0x0
00464788  E8 BA E0 F9 FF            CALL 0x00402847
0046478D  83 F8 FF                  CMP EAX,-0x1
00464790  0F 84 89 F8 FF FF         JZ 0x0046401f
00464796  85 C0                     TEST EAX,EAX
00464798  0F 84 8E 00 00 00         JZ 0x0046482c
0046479E  83 F8 01                  CMP EAX,0x1
004647A1  0F 85 E2 00 00 00         JNZ 0x00464889
004647A7  66 8B 46 38               MOV AX,word ptr [ESI + 0x38]
004647AB  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004647AE  50                        PUSH EAX
004647AF  66 8B 46 36               MOV AX,word ptr [ESI + 0x36]
004647B3  50                        PUSH EAX
004647B4  66 8B 46 34               MOV AX,word ptr [ESI + 0x34]
004647B8  8B 11                     MOV EDX,dword ptr [ECX]
004647BA  50                        PUSH EAX
004647BB  66 8B 46 45               MOV AX,word ptr [ESI + 0x45]
004647BF  50                        PUSH EAX
004647C0  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
004647C4  50                        PUSH EAX
004647C5  66 8B 46 41               MOV AX,word ptr [ESI + 0x41]
004647C9  50                        PUSH EAX
004647CA  FF 92 DC 00 00 00         CALL dword ptr [EDX + 0xdc]
004647D0  85 C0                     TEST EAX,EAX
004647D2  0F 8C B1 00 00 00         JL 0x00464889
004647D8  8B 16                     MOV EDX,dword ptr [ESI]
004647DA  8D 4D B8                  LEA ECX,[EBP + -0x48]
004647DD  8D 45 98                  LEA EAX,[EBP + -0x68]
004647E0  89 4D AC                  MOV dword ptr [EBP + -0x54],ECX
004647E3  50                        PUSH EAX
004647E4  8B CE                     MOV ECX,ESI
004647E6  C7 45 B8 10 27 00 00      MOV dword ptr [EBP + -0x48],0x2710
004647ED  C7 45 C0 FF 00 00 00      MOV dword ptr [EBP + -0x40],0xff
004647F4  C7 45 A8 10 01 00 00      MOV dword ptr [EBP + -0x58],0x110
004647FB  FF 12                     CALL dword ptr [EDX]
004647FD  8B 8E F7 06 00 00         MOV ECX,dword ptr [ESI + 0x6f7]
00464803  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
00464806  66 8B 46 32               MOV AX,word ptr [ESI + 0x32]
0046480A  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
0046480D  66 8B 4E 18               MOV CX,word ptr [ESI + 0x18]
00464811  C7 45 B8 58 02 00 00      MOV dword ptr [EBP + -0x48],0x258
00464818  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
0046481B  66 89 45 C4               MOV word ptr [EBP + -0x3c],AX
0046481F  66 89 4D C6               MOV word ptr [EBP + -0x3a],CX
00464823  C7 45 CC 01 00 00 00      MOV dword ptr [EBP + -0x34],0x1
0046482A  EB 52                     JMP 0x0046487e
LAB_0046482c:
0046482C  8B 16                     MOV EDX,dword ptr [ESI]
0046482E  8D 4D B8                  LEA ECX,[EBP + -0x48]
00464831  8D 45 98                  LEA EAX,[EBP + -0x68]
00464834  89 4D AC                  MOV dword ptr [EBP + -0x54],ECX
00464837  50                        PUSH EAX
00464838  8B CE                     MOV ECX,ESI
0046483A  C7 45 B8 10 27 00 00      MOV dword ptr [EBP + -0x48],0x2710
00464841  C7 45 C0 FF 00 00 00      MOV dword ptr [EBP + -0x40],0xff
00464848  C7 45 A8 10 01 00 00      MOV dword ptr [EBP + -0x58],0x110
0046484F  FF 12                     CALL dword ptr [EDX]
00464851  8B 8E F7 06 00 00         MOV ECX,dword ptr [ESI + 0x6f7]
00464857  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
0046485A  66 8B 46 32               MOV AX,word ptr [ESI + 0x32]
0046485E  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
00464861  66 8B 4E 18               MOV CX,word ptr [ESI + 0x18]
00464865  C7 45 B8 58 02 00 00      MOV dword ptr [EBP + -0x48],0x258
0046486C  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
0046486F  66 89 45 C4               MOV word ptr [EBP + -0x3c],AX
00464873  66 89 4D C6               MOV word ptr [EBP + -0x3a],CX
00464877  C7 45 CC 01 00 00 00      MOV dword ptr [EBP + -0x34],0x1
LAB_0046487e:
0046487E  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00464881  8D 45 98                  LEA EAX,[EBP + -0x68]
00464884  50                        PUSH EAX
00464885  8B 11                     MOV EDX,dword ptr [ECX]
LAB_00464887:
00464887  FF 12                     CALL dword ptr [EDX]
FUN_00462180::cf_common_exit_00464889:
00464889  8B 16                     MOV EDX,dword ptr [ESI]
0046488B  8B CE                     MOV ECX,ESI
0046488D  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
00464893  F7 D8                     NEG EAX
00464895  1B C0                     SBB EAX,EAX
00464897  5F                        POP EDI
00464898  24 FD                     AND AL,0xfd
0046489A  5E                        POP ESI
0046489B  83 C0 02                  ADD EAX,0x2
0046489E  5B                        POP EBX
0046489F  8B E5                     MOV ESP,EBP
004648A1  5D                        POP EBP
004648A2  C2 04 00                  RET 0x4
LAB_004648a5:
004648A5  8B 16                     MOV EDX,dword ptr [ESI]
004648A7  8D 45 B8                  LEA EAX,[EBP + -0x48]
004648AA  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
004648AD  8D 45 98                  LEA EAX,[EBP + -0x68]
004648B0  C7 45 B8 10 27 00 00      MOV dword ptr [EBP + -0x48],0x2710
004648B7  C7 45 C0 FF 00 00 00      MOV dword ptr [EBP + -0x40],0xff
004648BE  C7 45 CC 01 00 00 00      MOV dword ptr [EBP + -0x34],0x1
004648C5  C7 45 A8 10 01 00 00      MOV dword ptr [EBP + -0x58],0x110
004648CC  50                        PUSH EAX
004648CD  8B CE                     MOV ECX,ESI
004648CF  EB B6                     JMP 0x00464887
LAB_004648d1:
004648D1  8B 16                     MOV EDX,dword ptr [ESI]
004648D3  8D 45 B8                  LEA EAX,[EBP + -0x48]
004648D6  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
004648D9  8D 45 98                  LEA EAX,[EBP + -0x68]
004648DC  C7 45 B8 10 27 00 00      MOV dword ptr [EBP + -0x48],0x2710
004648E3  C7 45 C0 FF 00 00 00      MOV dword ptr [EBP + -0x40],0xff
004648EA  C7 45 CC 01 00 00 00      MOV dword ptr [EBP + -0x34],0x1
004648F1  C7 45 A8 10 01 00 00      MOV dword ptr [EBP + -0x58],0x110
004648F8  50                        PUSH EAX
004648F9  8B CE                     MOV ECX,ESI
004648FB  EB 8A                     JMP 0x00464887
