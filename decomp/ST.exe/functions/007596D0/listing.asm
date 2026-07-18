FUN_007596d0:
007596D0  55                        PUSH EBP
007596D1  8B EC                     MOV EBP,ESP
007596D3  53                        PUSH EBX
007596D4  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
007596D7  56                        PUSH ESI
007596D8  57                        PUSH EDI
007596D9  8B 0B                     MOV ECX,dword ptr [EBX]
007596DB  33 F6                     XOR ESI,ESI
007596DD  33 FF                     XOR EDI,EDI
007596DF  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
007596E2  8B 41 40                  MOV EAX,dword ptr [ECX + 0x40]
007596E5  85 C0                     TEST EAX,EAX
007596E7  74 22                     JZ 0x0075970b
LAB_007596e9:
007596E9  83 38 00                  CMP dword ptr [EAX],0x0
007596EC  75 13                     JNZ 0x00759701
007596EE  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
007596F1  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
007596F4  0F AF D1                  IMUL EDX,ECX
007596F7  03 F2                     ADD ESI,EDX
007596F9  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
007596FC  0F AF D1                  IMUL EDX,ECX
007596FF  03 FA                     ADD EDI,EDX
LAB_00759701:
00759701  8B 40 2C                  MOV EAX,dword ptr [EAX + 0x2c]
00759704  85 C0                     TEST EAX,EAX
00759706  75 E1                     JNZ 0x007596e9
00759708  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
LAB_0075970b:
0075970B  8B 41 44                  MOV EAX,dword ptr [ECX + 0x44]
0075970E  85 C0                     TEST EAX,EAX
00759710  74 28                     JZ 0x0075973a
LAB_00759712:
00759712  83 38 00                  CMP dword ptr [EAX],0x0
00759715  75 19                     JNZ 0x00759730
00759717  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0075971A  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
0075971D  0F AF D1                  IMUL EDX,ECX
00759720  C1 E2 08                  SHL EDX,0x8
00759723  03 F2                     ADD ESI,EDX
00759725  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
00759728  0F AF D1                  IMUL EDX,ECX
0075972B  C1 E2 08                  SHL EDX,0x8
0075972E  03 FA                     ADD EDI,EDX
LAB_00759730:
00759730  8B 40 2C                  MOV EAX,dword ptr [EAX + 0x2c]
00759733  85 C0                     TEST EAX,EAX
00759735  75 DB                     JNZ 0x00759712
00759737  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
LAB_0075973a:
0075973A  85 F6                     TEST ESI,ESI
0075973C  0F 8E 10 01 00 00         JLE 0x00759852
00759742  8B 41 48                  MOV EAX,dword ptr [ECX + 0x48]
00759745  50                        PUSH EAX
00759746  57                        PUSH EDI
00759747  56                        PUSH ESI
00759748  53                        PUSH EBX
00759749  E8 12 6C 00 00            CALL 0x00760360
0075974E  3B C7                     CMP EAX,EDI
00759750  7C 07                     JL 0x00759759
00759752  BF 00 CA 9A 3B            MOV EDI,0x3b9aca00
00759757  EB 0E                     JMP 0x00759767
LAB_00759759:
00759759  99                        CDQ
0075975A  F7 FE                     IDIV ESI
0075975C  8B F8                     MOV EDI,EAX
0075975E  85 FF                     TEST EDI,EDI
00759760  7F 05                     JG 0x00759767
00759762  BF 01 00 00 00            MOV EDI,0x1
LAB_00759767:
00759767  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0075976A  8B 71 40                  MOV ESI,dword ptr [ECX + 0x40]
0075976D  85 F6                     TEST ESI,ESI
0075976F  74 6A                     JZ 0x007597db
LAB_00759771:
00759771  83 3E 00                  CMP dword ptr [ESI],0x0
00759774  75 5E                     JNZ 0x007597d4
00759776  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
00759779  33 D2                     XOR EDX,EDX
0075977B  48                        DEC EAX
0075977C  F7 76 0C                  DIV dword ptr [ESI + 0xc]
0075977F  40                        INC EAX
00759780  3B C7                     CMP EAX,EDI
00759782  7F 08                     JG 0x0075978c
00759784  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
00759787  89 56 10                  MOV dword ptr [ESI + 0x10],EDX
0075978A  EB 22                     JMP 0x007597ae
LAB_0075978c:
0075978C  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0075978F  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
00759792  0F AF 4E 04               IMUL ECX,dword ptr [ESI + 0x4]
00759796  0F AF C7                  IMUL EAX,EDI
00759799  8D 56 30                  LEA EDX,[ESI + 0x30]
0075979C  51                        PUSH ECX
0075979D  52                        PUSH EDX
0075979E  53                        PUSH EBX
0075979F  89 46 10                  MOV dword ptr [ESI + 0x10],EAX
007597A2  E8 C9 6B 00 00            CALL 0x00760370
007597A7  C7 46 28 01 00 00 00      MOV dword ptr [ESI + 0x28],0x1
LAB_007597ae:
007597AE  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
007597B1  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
007597B4  50                        PUSH EAX
007597B5  51                        PUSH ECX
007597B6  6A 01                     PUSH 0x1
007597B8  53                        PUSH EBX
007597B9  E8 C2 FC FF FF            CALL 0x00759480
007597BE  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007597C1  89 06                     MOV dword ptr [ESI],EAX
007597C3  8B 42 4C                  MOV EAX,dword ptr [EDX + 0x4c]
007597C6  89 46 14                  MOV dword ptr [ESI + 0x14],EAX
007597C9  33 C0                     XOR EAX,EAX
007597CB  89 46 18                  MOV dword ptr [ESI + 0x18],EAX
007597CE  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
007597D1  89 46 24                  MOV dword ptr [ESI + 0x24],EAX
LAB_007597d4:
007597D4  8B 76 2C                  MOV ESI,dword ptr [ESI + 0x2c]
007597D7  85 F6                     TEST ESI,ESI
007597D9  75 96                     JNZ 0x00759771
LAB_007597db:
007597DB  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007597DE  8B 71 44                  MOV ESI,dword ptr [ECX + 0x44]
007597E1  85 F6                     TEST ESI,ESI
007597E3  74 6D                     JZ 0x00759852
LAB_007597e5:
007597E5  83 3E 00                  CMP dword ptr [ESI],0x0
007597E8  75 61                     JNZ 0x0075984b
007597EA  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
007597ED  33 D2                     XOR EDX,EDX
007597EF  48                        DEC EAX
007597F0  F7 76 0C                  DIV dword ptr [ESI + 0xc]
007597F3  40                        INC EAX
007597F4  3B C7                     CMP EAX,EDI
007597F6  7F 08                     JG 0x00759800
007597F8  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
007597FB  89 56 10                  MOV dword ptr [ESI + 0x10],EDX
007597FE  EB 25                     JMP 0x00759825
LAB_00759800:
00759800  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
00759803  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
00759806  0F AF 4E 04               IMUL ECX,dword ptr [ESI + 0x4]
0075980A  0F AF C7                  IMUL EAX,EDI
0075980D  C1 E1 08                  SHL ECX,0x8
00759810  8D 56 30                  LEA EDX,[ESI + 0x30]
00759813  51                        PUSH ECX
00759814  52                        PUSH EDX
00759815  53                        PUSH EBX
00759816  89 46 10                  MOV dword ptr [ESI + 0x10],EAX
00759819  E8 52 6B 00 00            CALL 0x00760370
0075981E  C7 46 28 01 00 00 00      MOV dword ptr [ESI + 0x28],0x1
LAB_00759825:
00759825  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
00759828  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0075982B  50                        PUSH EAX
0075982C  51                        PUSH ECX
0075982D  6A 01                     PUSH 0x1
0075982F  53                        PUSH EBX
00759830  E8 FB FC FF FF            CALL 0x00759530
00759835  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00759838  89 06                     MOV dword ptr [ESI],EAX
0075983A  8B 42 4C                  MOV EAX,dword ptr [EDX + 0x4c]
0075983D  89 46 14                  MOV dword ptr [ESI + 0x14],EAX
00759840  33 C0                     XOR EAX,EAX
00759842  89 46 18                  MOV dword ptr [ESI + 0x18],EAX
00759845  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00759848  89 46 24                  MOV dword ptr [ESI + 0x24],EAX
LAB_0075984b:
0075984B  8B 76 2C                  MOV ESI,dword ptr [ESI + 0x2c]
0075984E  85 F6                     TEST ESI,ESI
00759850  75 93                     JNZ 0x007597e5
LAB_00759852:
00759852  5F                        POP EDI
00759853  5E                        POP ESI
00759854  5B                        POP EBX
00759855  5D                        POP EBP
00759856  C2 04 00                  RET 0x4
