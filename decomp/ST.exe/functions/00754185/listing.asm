FUN_00754185:
00754185  B9 00 20 00 00            MOV ECX,0x2000
0075418A  B8 00 40 00 00            MOV EAX,0x4000
0075418F  8D BD D0 81 00 00         LEA EDI,[EBP + 0x81d0]
00754195  F3 66 AB                  STOSW.REP ES:EDI
00754198  B9 01 30 00 00            MOV ECX,0x3001
0075419D  8D BD CE 21 00 00         LEA EDI,[EBP + 0x21ce]
007541A3  F3 66 AB                  STOSW.REP ES:EDI
007541A6  8D BD D0 00 00 00         LEA EDI,[EBP + 0xd0]
007541AC  B9 FC 20 00 00            MOV ECX,0x20fc
007541B1  B0 00                     MOV AL,0x0
007541B3  F3 AA                     STOSB.REP ES:EDI
007541B5  66 C7 45 4C 01 00         MOV word ptr [EBP + 0x4c],0x1
007541BB  8D 45 50                  LEA EAX,[EBP + 0x50]
007541BE  89 45 48                  MOV dword ptr [EBP + 0x48],EAX
007541C1  33 C0                     XOR EAX,EAX
007541C3  66 89 45 4E               MOV word ptr [EBP + 0x4e],AX
007541C7  89 45 40                  MOV dword ptr [EBP + 0x40],EAX
007541CA  8D BD D3 1F 00 00         LEA EDI,[EBP + 0x1fd3]
007541D0  B9 FD 00 00 00            MOV ECX,0xfd
LAB_007541d5:
007541D5  FF 4D 20                  DEC dword ptr [EBP + 0x20]
007541D8  75 0B                     JNZ 0x007541e5
007541DA  E8 F1 FD FF FF            CALL 0x00753fd0
007541DF  0B C0                     OR EAX,EAX
007541E1  75 F2                     JNZ 0x007541d5
007541E3  EB 0D                     JMP 0x007541f2
LAB_007541e5:
007541E5  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
007541E8  FF 45 18                  INC dword ptr [EBP + 0x18]
007541EB  8A 03                     MOV AL,byte ptr [EBX]
007541ED  88 07                     MOV byte ptr [EDI],AL
007541EF  47                        INC EDI
007541F0  E2 E3                     LOOP 0x007541d5
LAB_007541f2:
007541F2  B8 FD 00 00 00            MOV EAX,0xfd
007541F7  2B C1                     SUB EAX,ECX
007541F9  89 45 30                  MOV dword ptr [EBP + 0x30],EAX
007541FC  BF 03 1F 00 00            MOV EDI,0x1f03
00754201  33 F6                     XOR ESI,ESI
00754203  E8 A4 FE FF FF            CALL 0x007540ac
LAB_00754208:
00754208  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
0075420B  3B 45 30                  CMP EAX,dword ptr [EBP + 0x30]
0075420E  7E 06                     JLE 0x00754216
00754210  8B 45 30                  MOV EAX,dword ptr [EBP + 0x30]
00754213  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
LAB_00754216:
00754216  56                        PUSH ESI
00754217  57                        PUSH EDI
00754218  83 F8 02                  CMP EAX,0x2
0075421B  72 0B                     JC 0x00754228
0075421D  77 25                     JA 0x00754244
0075421F  81 7D 34 00 01 00 00      CMP dword ptr [EBP + 0x34],0x100
00754226  72 1C                     JC 0x00754244
LAB_00754228:
00754228  C7 45 2C 01 00 00 00      MOV dword ptr [EBP + 0x2c],0x1
0075422F  B0 01                     MOV AL,0x1
00754231  E8 11 FE FF FF            CALL 0x00754047
00754236  8A 84 3D D0 00 00 00      MOV AL,byte ptr [EBP + EDI*0x1 + 0xd0]
0075423D  E8 1D FE FF FF            CALL 0x0075405f
00754242  EB 71                     JMP 0x007542b5
LAB_00754244:
00754244  B0 00                     MOV AL,0x0
00754246  E8 FC FD FF FF            CALL 0x00754047
0075424B  83 7D 2C 05               CMP dword ptr [EBP + 0x2c],0x5
0075424F  77 2F                     JA 0x00754280
00754251  81 7D 34 00 01 00 00      CMP dword ptr [EBP + 0x34],0x100
00754258  73 26                     JNC 0x00754280
0075425A  B0 00                     MOV AL,0x0
0075425C  E8 E6 FD FF FF            CALL 0x00754047
00754261  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
00754264  48                        DEC EAX
00754265  48                        DEC EAX
00754266  50                        PUSH EAX
00754267  24 02                     AND AL,0x2
00754269  E8 D9 FD FF FF            CALL 0x00754047
0075426E  58                        POP EAX
0075426F  24 01                     AND AL,0x1
00754271  E8 D1 FD FF FF            CALL 0x00754047
00754276  8B 45 38                  MOV EAX,dword ptr [EBP + 0x38]
00754279  E8 E1 FD FF FF            CALL 0x0075405f
0075427E  EB 35                     JMP 0x007542b5
LAB_00754280:
00754280  B0 01                     MOV AL,0x1
00754282  E8 C0 FD FF FF            CALL 0x00754047
00754287  8B 45 38                  MOV EAX,dword ptr [EBP + 0x38]
0075428A  E8 D0 FD FF FF            CALL 0x0075405f
0075428F  8A C4                     MOV AL,AH
00754291  B1 03                     MOV CL,0x3
00754293  D2 E0                     SHL AL,CL
00754295  8B 5D 2C                  MOV EBX,dword ptr [EBP + 0x2c]
00754298  83 FB 09                  CMP EBX,0x9
0075429B  77 0B                     JA 0x007542a8
0075429D  4B                        DEC EBX
0075429E  4B                        DEC EBX
0075429F  0A C3                     OR AL,BL
007542A1  E8 B9 FD FF FF            CALL 0x0075405f
007542A6  EB 0D                     JMP 0x007542b5
LAB_007542a8:
007542A8  E8 B2 FD FF FF            CALL 0x0075405f
007542AD  8B C3                     MOV EAX,EBX
007542AF  48                        DEC EAX
007542B0  E8 AA FD FF FF            CALL 0x0075405f
LAB_007542b5:
007542B5  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
007542B8  29 45 40                  SUB dword ptr [EBP + 0x40],EAX
007542BB  7D 0A                     JGE 0x007542c7
LAB_007542bd:
007542BD  83 45 40 10               ADD dword ptr [EBP + 0x40],0x10
007542C1  83 7D 40 00               CMP dword ptr [EBP + 0x40],0x0
007542C5  7C F6                     JL 0x007542bd
LAB_007542c7:
007542C7  5F                        POP EDI
007542C8  5E                        POP ESI
007542C9  EB 05                     JMP 0x007542d0
LAB_007542cb:
007542CB  E8 98 FD FF FF            CALL 0x00754068
LAB_007542d0:
007542D0  E8 87 FE FF FF            CALL 0x0075415c
LAB_007542d5:
007542D5  FF 4D 20                  DEC dword ptr [EBP + 0x20]
007542D8  75 0B                     JNZ 0x007542e5
007542DA  E8 F1 FC FF FF            CALL 0x00753fd0
007542DF  0B C0                     OR EAX,EAX
007542E1  74 22                     JZ 0x00754305
007542E3  EB F0                     JMP 0x007542d5
LAB_007542e5:
007542E5  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
007542E8  FF 45 18                  INC dword ptr [EBP + 0x18]
007542EB  8A 03                     MOV AL,byte ptr [EBX]
007542ED  88 84 35 D0 00 00 00      MOV byte ptr [EBP + ESI*0x1 + 0xd0],AL
007542F4  81 FE FC 00 00 00         CMP ESI,0xfc
007542FA  73 07                     JNC 0x00754303
007542FC  88 84 35 D0 20 00 00      MOV byte ptr [EBP + ESI*0x1 + 0x20d0],AL
LAB_00754303:
00754303  EB 03                     JMP 0x00754308
LAB_00754305:
00754305  FF 4D 30                  DEC dword ptr [EBP + 0x30]
LAB_00754308:
00754308  46                        INC ESI
00754309  47                        INC EDI
0075430A  81 E6 FF 1F 00 00         AND ESI,0x1fff
00754310  81 E7 FF 1F 00 00         AND EDI,0x1fff
00754316  FF 4D 2C                  DEC dword ptr [EBP + 0x2c]
00754319  75 B0                     JNZ 0x007542cb
0075431B  E8 8C FD FF FF            CALL 0x007540ac
00754320  66 83 7D 30 00            CMP word ptr [EBP + 0x30],0x0
00754325  7E 05                     JLE 0x0075432c
00754327  E9 DC FE FF FF            JMP 0x00754208
LAB_0075432c:
0075432C  F6 45 3F 80               TEST byte ptr [EBP + 0x3f],0x80
00754330  75 2D                     JNZ 0x0075435f
00754332  B0 00                     MOV AL,0x0
00754334  E8 0E FD FF FF            CALL 0x00754047
00754339  B0 01                     MOV AL,0x1
0075433B  E8 07 FD FF FF            CALL 0x00754047
00754340  B0 00                     MOV AL,0x0
00754342  E8 18 FD FF FF            CALL 0x0075405f
00754347  B0 F0                     MOV AL,0xf0
00754349  E8 11 FD FF FF            CALL 0x0075405f
0075434E  B0 00                     MOV AL,0x0
00754350  E8 0A FD FF FF            CALL 0x0075405f
00754355  E8 9D FC FF FF            CALL 0x00753ff7
0075435A  E8 48 FC FF FF            CALL 0x00753fa7
LAB_0075435f:
0075435F  C3                        RET
