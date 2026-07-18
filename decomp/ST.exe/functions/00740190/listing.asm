FUN_00740190:
00740190  55                        PUSH EBP
00740191  8B EC                     MOV EBP,ESP
00740193  83 EC 34                  SUB ESP,0x34
00740196  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00740199  33 C9                     XOR ECX,ECX
0074019B  66 8B 48 0A               MOV CX,word ptr [EAX + 0xa]
0074019F  81 E1 FF 7F 00 00         AND ECX,0x7fff
007401A5  81 E9 FF 3F 00 00         SUB ECX,0x3fff
007401AB  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
007401AE  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007401B1  33 C0                     XOR EAX,EAX
007401B3  66 8B 42 0A               MOV AX,word ptr [EDX + 0xa]
007401B7  25 00 80 00 00            AND EAX,0x8000
007401BC  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
007401BF  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007401C2  8B 51 06                  MOV EDX,dword ptr [ECX + 0x6]
007401C5  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
007401C8  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007401CB  8B 48 02                  MOV ECX,dword ptr [EAX + 0x2]
007401CE  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
007401D1  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007401D4  33 C0                     XOR EAX,EAX
007401D6  66 8B 02                  MOV AX,word ptr [EDX]
007401D9  C1 E0 10                  SHL EAX,0x10
007401DC  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
007401DF  81 7D FC 01 C0 FF FF      CMP dword ptr [EBP + -0x4],0xffffc001
007401E6  75 38                     JNZ 0x00740220
007401E8  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
007401EF  8D 4D E8                  LEA ECX,[EBP + -0x18]
007401F2  51                        PUSH ECX
007401F3  E8 68 FE FF FF            CALL 0x00740060
007401F8  83 C4 04                  ADD ESP,0x4
007401FB  85 C0                     TEST EAX,EAX
007401FD  74 09                     JZ 0x00740208
007401FF  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
00740206  EB 13                     JMP 0x0074021b
LAB_00740208:
00740208  8D 55 E8                  LEA EDX,[EBP + -0x18]
0074020B  52                        PUSH EDX
0074020C  E8 1F FE FF FF            CALL 0x00740030
00740211  83 C4 04                  ADD ESP,0x4
00740214  C7 45 E4 02 00 00 00      MOV dword ptr [EBP + -0x1c],0x2
LAB_0074021b:
0074021B  E9 4C 01 00 00            JMP 0x0074036c
LAB_00740220:
00740220  8D 45 E8                  LEA EAX,[EBP + -0x18]
00740223  50                        PUSH EAX
00740224  8D 4D D0                  LEA ECX,[EBP + -0x30]
00740227  51                        PUSH ECX
00740228  E8 B3 FD FF FF            CALL 0x0073ffe0
0074022D  83 C4 08                  ADD ESP,0x8
00740230  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00740233  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
00740236  50                        PUSH EAX
00740237  8D 4D E8                  LEA ECX,[EBP + -0x18]
0074023A  51                        PUSH ECX
0074023B  E8 C0 FC FF FF            CALL 0x0073ff00
00740240  83 C4 08                  ADD ESP,0x8
00740243  85 C0                     TEST EAX,EAX
00740245  74 09                     JZ 0x00740250
00740247  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0074024A  83 C2 01                  ADD EDX,0x1
0074024D  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_00740250:
00740250  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00740253  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00740256  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
00740259  2B 51 08                  SUB EDX,dword ptr [ECX + 0x8]
0074025C  39 55 FC                  CMP dword ptr [EBP + -0x4],EDX
0074025F  7D 1F                     JGE 0x00740280
00740261  8D 45 E8                  LEA EAX,[EBP + -0x18]
00740264  50                        PUSH EAX
00740265  E8 C6 FD FF FF            CALL 0x00740030
0074026A  83 C4 04                  ADD ESP,0x4
0074026D  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
00740274  C7 45 E4 02 00 00 00      MOV dword ptr [EBP + -0x1c],0x2
0074027B  E9 EC 00 00 00            JMP 0x0074036c
LAB_00740280:
00740280  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00740283  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00740286  3B 51 04                  CMP EDX,dword ptr [ECX + 0x4]
00740289  7F 65                     JG 0x007402f0
0074028B  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0074028E  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00740291  2B 4D FC                  SUB ECX,dword ptr [EBP + -0x4]
00740294  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
00740297  8D 55 D0                  LEA EDX,[EBP + -0x30]
0074029A  52                        PUSH EDX
0074029B  8D 45 E8                  LEA EAX,[EBP + -0x18]
0074029E  50                        PUSH EAX
0074029F  E8 3C FD FF FF            CALL 0x0073ffe0
007402A4  83 C4 08                  ADD ESP,0x8
007402A7  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
007402AA  51                        PUSH ECX
007402AB  8D 55 E8                  LEA EDX,[EBP + -0x18]
007402AE  52                        PUSH EDX
007402AF  E8 EC FD FF FF            CALL 0x007400a0
007402B4  83 C4 08                  ADD ESP,0x8
007402B7  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
007402BA  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
007402BD  51                        PUSH ECX
007402BE  8D 55 E8                  LEA EDX,[EBP + -0x18]
007402C1  52                        PUSH EDX
007402C2  E8 39 FC FF FF            CALL 0x0073ff00
007402C7  83 C4 08                  ADD ESP,0x8
007402CA  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
007402CD  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
007402D0  83 C1 01                  ADD ECX,0x1
007402D3  51                        PUSH ECX
007402D4  8D 55 E8                  LEA EDX,[EBP + -0x18]
007402D7  52                        PUSH EDX
007402D8  E8 C3 FD FF FF            CALL 0x007400a0
007402DD  83 C4 08                  ADD ESP,0x8
007402E0  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
007402E7  C7 45 E4 02 00 00 00      MOV dword ptr [EBP + -0x1c],0x2
007402EE  EB 7C                     JMP 0x0074036c
LAB_007402f0:
007402F0  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
007402F3  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007402F6  3B 08                     CMP ECX,dword ptr [EAX]
007402F8  7C 41                     JL 0x0074033b
007402FA  8D 55 E8                  LEA EDX,[EBP + -0x18]
007402FD  52                        PUSH EDX
007402FE  E8 2D FD FF FF            CALL 0x00740030
00740303  83 C4 04                  ADD ESP,0x4
00740306  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00740309  0D 00 00 00 80            OR EAX,0x80000000
0074030E  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00740311  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00740314  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
00740317  52                        PUSH EDX
00740318  8D 45 E8                  LEA EAX,[EBP + -0x18]
0074031B  50                        PUSH EAX
0074031C  E8 7F FD FF FF            CALL 0x007400a0
00740321  83 C4 08                  ADD ESP,0x8
00740324  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00740327  8B 11                     MOV EDX,dword ptr [ECX]
00740329  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0074032C  03 50 14                  ADD EDX,dword ptr [EAX + 0x14]
0074032F  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00740332  C7 45 E4 01 00 00 00      MOV dword ptr [EBP + -0x1c],0x1
00740339  EB 31                     JMP 0x0074036c
LAB_0074033b:
0074033B  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0074033E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00740341  03 51 14                  ADD EDX,dword ptr [ECX + 0x14]
00740344  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00740347  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0074034A  25 FF FF FF 7F            AND EAX,0x7fffffff
0074034F  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00740352  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00740355  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
00740358  52                        PUSH EDX
00740359  8D 45 E8                  LEA EAX,[EBP + -0x18]
0074035C  50                        PUSH EAX
0074035D  E8 3E FD FF FF            CALL 0x007400a0
00740362  83 C4 08                  ADD ESP,0x8
00740365  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
LAB_0074036c:
0074036C  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0074036F  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
00740372  83 C2 01                  ADD EDX,0x1
00740375  B8 20 00 00 00            MOV EAX,0x20
0074037A  2B C2                     SUB EAX,EDX
0074037C  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0074037F  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00740382  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00740385  D3 E2                     SHL EDX,CL
00740387  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0074038A  0B C2                     OR EAX,EDX
0074038C  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0074038F  F7 D9                     NEG ECX
00740391  1B C9                     SBB ECX,ECX
00740393  81 E1 00 00 00 80         AND ECX,0x80000000
00740399  0B C1                     OR EAX,ECX
0074039B  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0074039E  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
007403A1  83 7A 10 40               CMP dword ptr [EDX + 0x10],0x40
007403A5  75 13                     JNZ 0x007403ba
007403A7  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
007403AA  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
007403AD  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
007403B0  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
007403B3  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
007403B6  89 02                     MOV dword ptr [EDX],EAX
007403B8  EB 11                     JMP 0x007403cb
LAB_007403ba:
007403BA  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
007403BD  83 79 10 20               CMP dword ptr [ECX + 0x10],0x20
007403C1  75 08                     JNZ 0x007403cb
007403C3  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
007403C6  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
007403C9  89 02                     MOV dword ptr [EDX],EAX
LAB_007403cb:
007403CB  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
007403CE  8B E5                     MOV ESP,EBP
007403D0  5D                        POP EBP
007403D1  C3                        RET
