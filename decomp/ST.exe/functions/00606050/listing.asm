FUN_00606050:
00606050  55                        PUSH EBP
00606051  8B EC                     MOV EBP,ESP
00606053  81 EC FC 00 00 00         SUB ESP,0xfc
00606059  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
0060605C  53                        PUSH EBX
0060605D  56                        PUSH ESI
0060605E  8B F1                     MOV ESI,ECX
00606060  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00606066  57                        PUSH EDI
00606067  33 DB                     XOR EBX,EBX
00606069  50                        PUSH EAX
0060606A  88 5D FF                  MOV byte ptr [EBP + -0x1],BL
0060606D  E8 45 E9 DF FF            CALL 0x004049b7
00606072  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
00606075  25 FF 00 00 00            AND EAX,0xff
0060607A  83 FF 21                  CMP EDI,0x21
0060607D  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00606080  75 09                     JNZ 0x0060608b
00606082  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
00606085  89 8E B7 02 00 00         MOV dword ptr [ESI + 0x2b7],ECX
LAB_0060608b:
0060608B  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0060608E  8B CE                     MOV ECX,ESI
00606090  52                        PUSH EDX
00606091  E8 17 B7 DF FF            CALL 0x004017ad
00606096  89 45 90                  MOV dword ptr [EBP + -0x70],EAX
00606099  8D 45 E0                  LEA EAX,[EBP + -0x20]
0060609C  8D 4D E8                  LEA ECX,[EBP + -0x18]
0060609F  50                        PUSH EAX
006060A0  8D 55 DC                  LEA EDX,[EBP + -0x24]
006060A3  51                        PUSH ECX
006060A4  8D 45 8C                  LEA EAX,[EBP + -0x74]
006060A7  52                        PUSH EDX
006060A8  8D 4D F4                  LEA ECX,[EBP + -0xc]
006060AB  50                        PUSH EAX
006060AC  51                        PUSH ECX
006060AD  57                        PUSH EDI
006060AE  8B CE                     MOV ECX,ESI
006060B0  E8 3A F2 DF FF            CALL 0x004052ef
006060B5  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006060B8  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006060BB  33 C9                     XOR ECX,ECX
006060BD  3B C1                     CMP EAX,ECX
006060BF  7E 03                     JLE 0x006060c4
006060C1  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
LAB_006060c4:
006060C4  83 FF 15                  CMP EDI,0x15
006060C7  74 05                     JZ 0x006060ce
006060C9  83 FF 09                  CMP EDI,0x9
006060CC  75 0F                     JNZ 0x006060dd
LAB_006060ce:
006060CE  83 FF 15                  CMP EDI,0x15
006060D1  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
006060D4  C6 45 FF 01               MOV byte ptr [EBP + -0x1],0x1
006060D8  75 03                     JNZ 0x006060dd
006060DA  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
LAB_006060dd:
006060DD  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
006060E0  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
006060E3  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
006060E9  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
006060EF  33 D2                     XOR EDX,EDX
006060F1  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
006060F4  C1 E8 10                  SHR EAX,0x10
006060F7  41                        INC ECX
006060F8  F7 F1                     DIV ECX
006060FA  8B CE                     MOV ECX,ESI
006060FC  8B FA                     MOV EDI,EDX
006060FE  83 C7 09                  ADD EDI,0x9
00606101  57                        PUSH EDI
00606102  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
00606105  E8 82 DC DF FF            CALL 0x00403d8c
0060610A  3B C7                     CMP EAX,EDI
0060610C  89 86 69 02 00 00         MOV dword ptr [ESI + 0x269],EAX
00606112  74 0C                     JZ 0x00606120
00606114  5F                        POP EDI
00606115  5E                        POP ESI
00606116  83 C8 FF                  OR EAX,0xffffffff
00606119  5B                        POP EBX
0060611A  8B E5                     MOV ESP,EBP
0060611C  5D                        POP EBP
0060611D  C2 24 00                  RET 0x24
LAB_00606120:
00606120  B9 06 00 00 00            MOV ECX,0x6
00606125  33 C0                     XOR EAX,EAX
00606127  8D BD 74 FF FF FF         LEA EDI,[EBP + 0xffffff74]
0060612D  33 D2                     XOR EDX,EDX
0060612F  F3 AB                     STOSD.REP ES:EDI
00606131  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
00606134  89 55 20                  MOV dword ptr [EBP + 0x20],EDX
00606137  85 C0                     TEST EAX,EAX
00606139  0F 8E E0 00 00 00         JLE 0x0060621f
0060613F  8D 8D 04 FF FF FF         LEA ECX,[EBP + 0xffffff04]
00606145  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00606148  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
LAB_0060614b:
0060614B  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0060614E  8A 00                     MOV AL,byte ptr [EAX]
00606150  3C 01                     CMP AL,0x1
00606152  76 2D                     JBE 0x00606181
00606154  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00606157  25 FF 00 00 00            AND EAX,0xff
0060615C  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00606162  48                        DEC EAX
00606163  8B C8                     MOV ECX,EAX
00606165  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0060616B  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0060616E  33 D2                     XOR EDX,EDX
00606170  C1 E8 10                  SHR EAX,0x10
00606173  41                        INC ECX
00606174  F7 F1                     DIV ECX
00606176  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00606179  33 C0                     XOR EAX,EAX
0060617B  8A 44 0A 03               MOV AL,byte ptr [EDX + ECX*0x1 + 0x3]
0060617F  EB 08                     JMP 0x00606189
LAB_00606181:
00606181  0F 85 8B 00 00 00         JNZ 0x00606212
00606187  33 C0                     XOR EAX,EAX
LAB_00606189:
00606189  8B D0                     MOV EDX,EAX
0060618B  83 E2 7F                  AND EDX,0x7f
0060618E  8B 8C 95 74 FF FF FF      MOV ECX,dword ptr [EBP + EDX*0x4 + 0xffffff74]
00606195  85 C9                     TEST ECX,ECX
00606197  74 28                     JZ 0x006061c1
00606199  33 FF                     XOR EDI,EDI
LAB_0060619b:
0060619B  83 FF 04                  CMP EDI,0x4
0060619E  7F 21                     JG 0x006061c1
006061A0  40                        INC EAX
006061A1  8B C8                     MOV ECX,EAX
006061A3  83 E1 7F                  AND ECX,0x7f
006061A6  80 F9 04                  CMP CL,0x4
006061A9  7E 05                     JLE 0x006061b0
006061AB  25 80 00 00 00            AND EAX,0x80
LAB_006061b0:
006061B0  8B D0                     MOV EDX,EAX
006061B2  47                        INC EDI
006061B3  83 E2 7F                  AND EDX,0x7f
006061B6  8B 8C 95 74 FF FF FF      MOV ECX,dword ptr [EBP + EDX*0x4 + 0xffffff74]
006061BD  85 C9                     TEST ECX,ECX
006061BF  75 DA                     JNZ 0x0060619b
LAB_006061c1:
006061C1  8B C8                     MOV ECX,EAX
006061C3  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006061C6  83 E1 7F                  AND ECX,0x7f
006061C9  89 02                     MOV dword ptr [EDX],EAX
006061CB  8B BC 8D 74 FF FF FF      MOV EDI,dword ptr [EBP + ECX*0x4 + 0xffffff74]
006061D2  8D 8C 8D 74 FF FF FF      LEA ECX,[EBP + ECX*0x4 + 0xffffff74]
006061D9  47                        INC EDI
006061DA  89 39                     MOV dword ptr [ECX],EDI
006061DC  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006061DF  83 F9 03                  CMP ECX,0x3
006061E2  74 1F                     JZ 0x00606203
006061E4  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
006061E7  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
006061ED  81 C1 39 30 00 00         ADD ECX,0x3039
006061F3  F7 C1 00 00 01 00         TEST ECX,0x10000
006061F9  89 4E 1C                  MOV dword ptr [ESI + 0x1c],ECX
006061FC  74 05                     JZ 0x00606203
006061FE  80 CC 01                  OR AH,0x1
00606201  89 02                     MOV dword ptr [EDX],EAX
LAB_00606203:
00606203  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
00606206  41                        INC ECX
00606207  83 C2 04                  ADD EDX,0x4
0060620A  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
0060620D  89 4D 20                  MOV dword ptr [EBP + 0x20],ECX
00606210  8B D1                     MOV EDX,ECX
LAB_00606212:
00606212  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00606215  48                        DEC EAX
00606216  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00606219  0F 85 2C FF FF FF         JNZ 0x0060614b
LAB_0060621f:
0060621F  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00606222  C7 45 18 00 00 00 00      MOV dword ptr [EBP + 0x18],0x0
00606229  85 C0                     TEST EAX,EAX
0060622B  0F 8E 9C 00 00 00         JLE 0x006062cd
00606231  8D BC 95 04 FF FF FF      LEA EDI,[EBP + EDX*0x4 + 0xffffff04]
LAB_00606238:
00606238  3B 55 F8                  CMP EDX,dword ptr [EBP + -0x8]
0060623B  0F 84 8C 00 00 00         JZ 0x006062cd
00606241  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00606244  8A 40 01                  MOV AL,byte ptr [EAX + 0x1]
00606247  3C 01                     CMP AL,0x1
00606249  76 2F                     JBE 0x0060627a
0060624B  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0060624E  25 FF 00 00 00            AND EAX,0xff
00606253  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00606259  48                        DEC EAX
0060625A  8B C8                     MOV ECX,EAX
0060625C  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00606262  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00606265  33 D2                     XOR EDX,EDX
00606267  C1 E8 10                  SHR EAX,0x10
0060626A  41                        INC ECX
0060626B  F7 F1                     DIV ECX
0060626D  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00606270  33 C0                     XOR EAX,EAX
00606272  8A 44 0A 0D               MOV AL,byte ptr [EDX + ECX*0x1 + 0xd]
00606276  89 07                     MOV dword ptr [EDI],EAX
00606278  EB 08                     JMP 0x00606282
LAB_0060627a:
0060627A  75 3F                     JNZ 0x006062bb
0060627C  C7 07 00 00 00 00         MOV dword ptr [EDI],0x0
LAB_00606282:
00606282  8A 45 FF                  MOV AL,byte ptr [EBP + -0x1]
00606285  84 C0                     TEST AL,AL
00606287  75 26                     JNZ 0x006062af
00606289  83 7D EC 03               CMP dword ptr [EBP + -0x14],0x3
0060628D  74 20                     JZ 0x006062af
0060628F  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00606292  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00606298  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0060629E  A9 00 00 01 00            TEST EAX,0x10000
006062A3  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
006062A6  74 07                     JZ 0x006062af
006062A8  8B 07                     MOV EAX,dword ptr [EDI]
006062AA  80 CC 01                  OR AH,0x1
006062AD  89 07                     MOV dword ptr [EDI],EAX
LAB_006062af:
006062AF  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006062B2  41                        INC ECX
006062B3  83 C7 04                  ADD EDI,0x4
006062B6  89 4D 20                  MOV dword ptr [EBP + 0x20],ECX
006062B9  8B D1                     MOV EDX,ECX
LAB_006062bb:
006062BB  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006062BE  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006062C1  40                        INC EAX
006062C2  3B C1                     CMP EAX,ECX
006062C4  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
006062C7  0F 8C 6B FF FF FF         JL 0x00606238
LAB_006062cd:
006062CD  C7 45 18 00 00 00 00      MOV dword ptr [EBP + 0x18],0x0
006062D4  8D BC 95 04 FF FF FF      LEA EDI,[EBP + EDX*0x4 + 0xffffff04]
LAB_006062db:
006062DB  3B 55 F8                  CMP EDX,dword ptr [EBP + -0x8]
006062DE  74 59                     JZ 0x00606339
006062E0  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006062E3  8A 40 02                  MOV AL,byte ptr [EAX + 0x2]
006062E6  3C 01                     CMP AL,0x1
006062E8  76 2F                     JBE 0x00606319
006062EA  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
006062ED  25 FF 00 00 00            AND EAX,0xff
006062F2  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
006062F8  48                        DEC EAX
006062F9  8B C8                     MOV ECX,EAX
006062FB  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00606301  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00606304  33 D2                     XOR EDX,EDX
00606306  C1 E8 10                  SHR EAX,0x10
00606309  41                        INC ECX
0060630A  F7 F1                     DIV ECX
0060630C  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0060630F  33 C0                     XOR EAX,EAX
00606311  8A 44 0A 19               MOV AL,byte ptr [EDX + ECX*0x1 + 0x19]
00606315  89 07                     MOV dword ptr [EDI],EAX
00606317  EB 08                     JMP 0x00606321
LAB_00606319:
00606319  75 12                     JNZ 0x0060632d
0060631B  C7 07 00 00 00 00         MOV dword ptr [EDI],0x0
LAB_00606321:
00606321  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
00606324  41                        INC ECX
00606325  83 C7 04                  ADD EDI,0x4
00606328  89 4D 20                  MOV dword ptr [EBP + 0x20],ECX
0060632B  8B D1                     MOV EDX,ECX
LAB_0060632d:
0060632D  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00606330  40                        INC EAX
00606331  83 F8 14                  CMP EAX,0x14
00606334  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
00606337  7C A2                     JL 0x006062db
LAB_00606339:
00606339  B9 08 00 00 00            MOV ECX,0x8
0060633E  33 C0                     XOR EAX,EAX
00606340  8D BD 54 FF FF FF         LEA EDI,[EBP + 0xffffff54]
00606346  F3 AB                     STOSD.REP ES:EDI
00606348  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0060634B  C7 85 64 FF FF FF 02 00 00 00  MOV dword ptr [EBP + 0xffffff64],0x2
00606355  3B C2                     CMP EAX,EDX
00606357  7E 03                     JLE 0x0060635c
00606359  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_0060635c:
0060635C  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0060635F  33 D2                     XOR EDX,EDX
00606361  85 C0                     TEST EAX,EAX
00606363  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
00606366  0F 8E 8E 04 00 00         JLE 0x006067fa
0060636C  EB 03                     JMP 0x00606371
LAB_0060636e:
0060636E  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
LAB_00606371:
00606371  B9 11 00 00 00            MOV ECX,0x11
00606376  33 C0                     XOR EAX,EAX
00606378  8D 7D 94                  LEA EDI,[EBP + -0x6c]
0060637B  F3 AB                     STOSD.REP ES:EDI
0060637D  8A 4D 28                  MOV CL,byte ptr [EBP + 0x28]
00606380  66 AB                     STOSW ES:EDI
00606382  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
00606385  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
00606388  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
0060638B  88 4D D4                  MOV byte ptr [EBP + -0x2c],CL
0060638E  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00606391  33 C0                     XOR EAX,EAX
00606393  83 FF 03                  CMP EDI,0x3
00606396  C7 45 94 64 00 00 00      MOV dword ptr [EBP + -0x6c],0x64
0060639D  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
006063A0  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
006063A3  89 55 D6                  MOV dword ptr [EBP + -0x2a],EDX
006063A6  89 4D AC                  MOV dword ptr [EBP + -0x54],ECX
006063A9  75 3E                     JNZ 0x006063e9
006063AB  85 D2                     TEST EDX,EDX
006063AD  75 21                     JNZ 0x006063d0
006063AF  83 F9 2B                  CMP ECX,0x2b
006063B2  74 1C                     JZ 0x006063d0
006063B4  81 F9 FD 00 00 00         CMP ECX,0xfd
006063BA  74 14                     JZ 0x006063d0
006063BC  81 F9 FE 00 00 00         CMP ECX,0xfe
006063C2  74 0C                     JZ 0x006063d0
006063C4  C7 85 04 FF FF FF 00 80 00 00  MOV dword ptr [EBP + 0xffffff04],0x8000
006063CE  EB 30                     JMP 0x00606400
LAB_006063d0:
006063D0  8B 84 95 04 FF FF FF      MOV EAX,dword ptr [EBP + EDX*0x4 + 0xffffff04]
006063D7  A8 80                     TEST AL,0x80
006063D9  74 07                     JZ 0x006063e2
006063DB  24 7F                     AND AL,0x7f
006063DD  80 CC 20                  OR AH,0x20
006063E0  EB 17                     JMP 0x006063f9
LAB_006063e2:
006063E2  24 7F                     AND AL,0x7f
006063E4  80 CC 10                  OR AH,0x10
006063E7  EB 10                     JMP 0x006063f9
LAB_006063e9:
006063E9  8B 84 95 04 FF FF FF      MOV EAX,dword ptr [EBP + EDX*0x4 + 0xffffff04]
006063F0  A8 80                     TEST AL,0x80
006063F2  74 0C                     JZ 0x00606400
006063F4  24 7F                     AND AL,0x7f
006063F6  80 CC 01                  OR AH,0x1
LAB_006063f9:
006063F9  89 84 95 04 FF FF FF      MOV dword ptr [EBP + EDX*0x4 + 0xffffff04],EAX
LAB_00606400:
00606400  8B 94 95 04 FF FF FF      MOV EDX,dword ptr [EBP + EDX*0x4 + 0xffffff04]
00606407  8A C2                     MOV AL,DL
00606409  89 55 A8                  MOV dword ptr [EBP + -0x58],EDX
0060640C  3C 0A                     CMP AL,0xa
0060640E  76 06                     JBE 0x00606416
00606410  C6 45 D5 00               MOV byte ptr [EBP + -0x2b],0x0
00606414  EB 23                     JMP 0x00606439
LAB_00606416:
00606416  3C 04                     CMP AL,0x4
00606418  76 1B                     JBE 0x00606435
0060641A  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0060641D  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00606423  05 39 30 00 00            ADD EAX,0x3039
00606428  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0060642B  C1 E8 10                  SHR EAX,0x10
0060642E  24 01                     AND AL,0x1
00606430  88 45 D5                  MOV byte ptr [EBP + -0x2b],AL
00606433  EB 04                     JMP 0x00606439
LAB_00606435:
00606435  C6 45 D5 01               MOV byte ptr [EBP + -0x2b],0x1
LAB_00606439:
00606439  85 FF                     TEST EDI,EDI
0060643B  75 08                     JNZ 0x00606445
0060643D  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
00606440  89 55 B0                  MOV dword ptr [EBP + -0x50],EDX
00606443  EB 03                     JMP 0x00606448
LAB_00606445:
00606445  89 7D B0                  MOV dword ptr [EBP + -0x50],EDI
LAB_00606448:
00606448  83 F9 09                  CMP ECX,0x9
0060644B  75 09                     JNZ 0x00606456
0060644D  C7 45 B0 04 00 00 00      MOV dword ptr [EBP + -0x50],0x4
00606454  EB 0C                     JMP 0x00606462
LAB_00606456:
00606456  83 F9 15                  CMP ECX,0x15
00606459  75 07                     JNZ 0x00606462
0060645B  C7 45 B0 02 00 00 00      MOV dword ptr [EBP + -0x50],0x2
LAB_00606462:
00606462  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00606465  33 D2                     XOR EDX,EDX
00606467  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0060646D  05 39 30 00 00            ADD EAX,0x3039
00606472  B9 69 01 00 00            MOV ECX,0x169
00606477  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0060647A  C1 E8 10                  SHR EAX,0x10
0060647D  F7 F1                     DIV ECX
0060647F  8B 45 90                  MOV EAX,dword ptr [EBP + -0x70]
00606482  83 F8 07                  CMP EAX,0x7
00606485  8B CA                     MOV ECX,EDX
00606487  89 4D C4                  MOV dword ptr [EBP + -0x3c],ECX
0060648A  0F 87 8C 01 00 00         JA 0x0060661c
switchD_00606490::switchD:
00606490  FF 24 85 08 68 60 00      JMP dword ptr [EAX*0x4 + 0x606808]
switchD_00606490::caseD_0:
00606497  83 F9 2D                  CMP ECX,0x2d
0060649A  7E 2C                     JLE 0x006064c8
0060649C  81 F9 3B 01 00 00         CMP ECX,0x13b
006064A2  7D 24                     JGE 0x006064c8
006064A4  81 F9 87 00 00 00         CMP ECX,0x87
006064AA  7C 08                     JL 0x006064b4
006064AC  81 F9 E1 00 00 00         CMP ECX,0xe1
006064B2  7E 14                     JLE 0x006064c8
LAB_006064b4:
006064B4  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
006064B7  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
006064BD  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
006064C3  E9 3E 01 00 00            JMP 0x00606606
LAB_006064c8:
006064C8  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
006064CB  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
006064CE  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
006064D4  05 39 30 00 00            ADD EAX,0x3039
006064D9  8D 5F 01                  LEA EBX,[EDI + 0x1]
006064DC  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
006064DF  33 D2                     XOR EDX,EDX
006064E1  C1 E8 10                  SHR EAX,0x10
006064E4  F7 F3                     DIV EBX
006064E6  8B C7                     MOV EAX,EDI
006064E8  8B DA                     MOV EBX,EDX
006064EA  99                        CDQ
006064EB  C1 EB 03                  SHR EBX,0x3
006064EE  2B C2                     SUB EAX,EDX
006064F0  8B D3                     MOV EDX,EBX
006064F2  8B D8                     MOV EBX,EAX
006064F4  D1 FB                     SAR EBX,0x1
006064F6  E9 1F 01 00 00            JMP 0x0060661a
switchD_00606490::caseD_1:
006064FB  85 C9                     TEST ECX,ECX
006064FD  7C 05                     JL 0x00606504
006064FF  83 F9 5A                  CMP ECX,0x5a
00606502  7E 18                     JLE 0x0060651c
LAB_00606504:
00606504  81 F9 B4 00 00 00         CMP ECX,0xb4
0060650A  0F 8C E8 00 00 00         JL 0x006065f8
00606510  81 F9 0E 01 00 00         CMP ECX,0x10e
00606516  0F 8F DC 00 00 00         JG 0x006065f8
LAB_0060651c:
0060651C  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0060651F  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
00606522  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00606528  05 39 30 00 00            ADD EAX,0x3039
0060652D  8D 5F 01                  LEA EBX,[EDI + 0x1]
00606530  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00606533  33 D2                     XOR EDX,EDX
00606535  C1 E8 10                  SHR EAX,0x10
00606538  F7 F3                     DIV EBX
0060653A  8B C7                     MOV EAX,EDI
0060653C  8B DA                     MOV EBX,EDX
0060653E  99                        CDQ
0060653F  C1 EB 03                  SHR EBX,0x3
00606542  2B C2                     SUB EAX,EDX
00606544  8B D3                     MOV EDX,EBX
00606546  8B D8                     MOV EBX,EAX
00606548  D1 FB                     SAR EBX,0x1
0060654A  E9 CB 00 00 00            JMP 0x0060661a
switchD_00606490::caseD_2:
0060654F  83 F9 2D                  CMP ECX,0x2d
00606552  7C 08                     JL 0x0060655c
00606554  81 F9 87 00 00 00         CMP ECX,0x87
0060655A  7E 18                     JLE 0x00606574
LAB_0060655c:
0060655C  81 F9 E1 00 00 00         CMP ECX,0xe1
00606562  0F 8C 4C FF FF FF         JL 0x006064b4
00606568  81 F9 3B 01 00 00         CMP ECX,0x13b
0060656E  0F 8F 40 FF FF FF         JG 0x006064b4
LAB_00606574:
00606574  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00606577  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
0060657A  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00606580  8D 5F 01                  LEA EBX,[EDI + 0x1]
00606583  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00606589  33 D2                     XOR EDX,EDX
0060658B  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0060658E  C1 E8 10                  SHR EAX,0x10
00606591  F7 F3                     DIV EBX
00606593  8B C7                     MOV EAX,EDI
00606595  8B DA                     MOV EBX,EDX
00606597  99                        CDQ
00606598  C1 EB 03                  SHR EBX,0x3
0060659B  2B C2                     SUB EAX,EDX
0060659D  89 5D 20                  MOV dword ptr [EBP + 0x20],EBX
006065A0  8B D8                     MOV EBX,EAX
006065A2  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006065A5  D1 FB                     SAR EBX,0x1
006065A7  2B D8                     SUB EBX,EAX
006065A9  EB 71                     JMP 0x0060661c
switchD_00606490::caseD_3:
006065AB  83 F9 5A                  CMP ECX,0x5a
006065AE  7C 08                     JL 0x006065b8
006065B0  81 F9 B4 00 00 00         CMP ECX,0xb4
006065B6  7E 10                     JLE 0x006065c8
LAB_006065b8:
006065B8  81 F9 0E 01 00 00         CMP ECX,0x10e
006065BE  7C 38                     JL 0x006065f8
006065C0  81 F9 68 01 00 00         CMP ECX,0x168
006065C6  7F 30                     JG 0x006065f8
LAB_006065c8:
006065C8  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
006065CB  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
006065CE  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
006065D4  05 39 30 00 00            ADD EAX,0x3039
006065D9  8D 5F 01                  LEA EBX,[EDI + 0x1]
006065DC  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
006065DF  33 D2                     XOR EDX,EDX
006065E1  C1 E8 10                  SHR EAX,0x10
006065E4  F7 F3                     DIV EBX
006065E6  8B C7                     MOV EAX,EDI
006065E8  8B DA                     MOV EBX,EDX
006065EA  99                        CDQ
006065EB  C1 EB 03                  SHR EBX,0x3
006065EE  2B C2                     SUB EAX,EDX
006065F0  8B D3                     MOV EDX,EBX
006065F2  8B D8                     MOV EBX,EAX
006065F4  D1 FB                     SAR EBX,0x1
006065F6  EB 22                     JMP 0x0060661a
LAB_006065f8:
006065F8  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
006065FB  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00606601  05 39 30 00 00            ADD EAX,0x3039
LAB_00606606:
00606606  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00606609  33 D2                     XOR EDX,EDX
0060660B  C1 E8 10                  SHR EAX,0x10
0060660E  BF 65 00 00 00            MOV EDI,0x65
00606613  BB 32 00 00 00            MOV EBX,0x32
00606618  F7 F7                     DIV EDI
LAB_0060661a:
0060661A  2B DA                     SUB EBX,EDX
switchD_00606490::default:
0060661C  51                        PUSH ECX
0060661D  E8 2E 99 0A 00            CALL 0x006aff50
00606622  8B C8                     MOV ECX,EAX
00606624  B8 AD 8B DB 68            MOV EAX,0x68db8bad
00606629  0F AF CB                  IMUL ECX,EBX
0060662C  F7 E9                     IMUL ECX
0060662E  C1 FA 0C                  SAR EDX,0xc
00606631  8B CA                     MOV ECX,EDX
00606633  C1 E9 1F                  SHR ECX,0x1f
00606636  03 D1                     ADD EDX,ECX
00606638  8B FA                     MOV EDI,EDX
0060663A  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
0060663D  52                        PUSH EDX
0060663E  E8 18 99 0A 00            CALL 0x006aff5b
00606643  8B C8                     MOV ECX,EAX
00606645  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0060664A  0F AF CB                  IMUL ECX,EBX
0060664D  F7 E9                     IMUL ECX
0060664F  C1 FA 0C                  SAR EDX,0xc
00606652  8B C2                     MOV EAX,EDX
00606654  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00606657  C1 E8 1F                  SHR EAX,0x1f
0060665A  03 D0                     ADD EDX,EAX
0060665C  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0060665F  03 D0                     ADD EDX,EAX
00606661  03 F9                     ADD EDI,ECX
00606663  89 55 B8                  MOV dword ptr [EBP + -0x48],EDX
00606666  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00606669  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0060666F  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00606672  83 C4 08                  ADD ESP,0x8
00606675  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0060667B  89 7D B4                  MOV dword ptr [EBP + -0x4c],EDI
0060667E  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00606681  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
00606684  C1 E8 10                  SHR EAX,0x10
00606687  83 E0 07                  AND EAX,0x7
0060668A  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
0060668D  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00606690  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00606696  05 39 30 00 00            ADD EAX,0x3039
0060669B  A9 00 00 03 00            TEST EAX,0x30000
006066A0  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
006066A3  74 24                     JZ 0x006066c9
006066A5  8B C8                     MOV ECX,EAX
006066A7  33 D2                     XOR EDX,EDX
006066A9  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
006066AF  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
006066B5  B9 1F 00 00 00            MOV ECX,0x1f
006066BA  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
006066BD  C1 E8 10                  SHR EAX,0x10
006066C0  F7 F1                     DIV ECX
006066C2  B9 0F 00 00 00            MOV ECX,0xf
006066C7  EB 23                     JMP 0x006066ec
LAB_006066c9:
006066C9  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
006066CC  B9 15 00 00 00            MOV ECX,0x15
006066D1  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
006066D7  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
006066DD  33 D2                     XOR EDX,EDX
006066DF  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
006066E2  C1 E8 10                  SHR EAX,0x10
006066E5  F7 F1                     DIV ECX
006066E7  B9 64 00 00 00            MOV ECX,0x64
LAB_006066ec:
006066EC  8B 7D A8                  MOV EDI,dword ptr [EBP + -0x58]
006066EF  2B CA                     SUB ECX,EDX
006066F1  81 E7 FF 00 00 00         AND EDI,0xff
006066F7  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
006066FA  83 FF 0F                  CMP EDI,0xf
006066FD  0F 87 AB 00 00 00         JA 0x006067ae
00606703  33 D2                     XOR EDX,EDX
00606705  8A 97 38 68 60 00         MOV DL,byte ptr [EDI + 0x606838]
switchD_0060670b::switchD:
0060670B  FF 24 95 28 68 60 00      JMP dword ptr [EDX*0x4 + 0x606828]
switchD_0060670b::caseD_0:
00606712  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00606715  33 D2                     XOR EDX,EDX
00606717  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0060671D  05 39 30 00 00            ADD EAX,0x3039
00606722  BF 03 00 00 00            MOV EDI,0x3
00606727  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0060672A  C7 45 CC 82 00 00 00      MOV dword ptr [EBP + -0x34],0x82
00606731  C1 E8 10                  SHR EAX,0x10
00606734  F7 F7                     DIV EDI
00606736  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
00606739  EB 73                     JMP 0x006067ae
switchD_0060670b::caseD_3:
0060673B  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0060673E  C7 45 CC 8C 00 00 00      MOV dword ptr [EBP + -0x34],0x8c
00606745  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0060674B  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00606751  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00606754  C1 E8 10                  SHR EAX,0x10
00606757  83 E0 03                  AND EAX,0x3
0060675A  40                        INC EAX
0060675B  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
0060675E  EB 4E                     JMP 0x006067ae
switchD_0060670b::caseD_6:
00606760  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00606763  33 D2                     XOR EDX,EDX
00606765  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0060676B  05 39 30 00 00            ADD EAX,0x3039
00606770  BF 05 00 00 00            MOV EDI,0x5
00606775  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00606778  C7 45 CC 96 00 00 00      MOV dword ptr [EBP + -0x34],0x96
0060677F  C1 E8 10                  SHR EAX,0x10
00606782  F7 F7                     DIV EDI
00606784  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
00606787  EB 25                     JMP 0x006067ae
switchD_0060670b::caseD_a:
00606789  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0060678C  C7 45 CC 9B 00 00 00      MOV dword ptr [EBP + -0x34],0x9b
00606793  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00606799  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0060679F  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
006067A2  C1 E8 10                  SHR EAX,0x10
006067A5  83 E0 03                  AND EAX,0x3
006067A8  83 C0 04                  ADD EAX,0x4
006067AB  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
switchD_0060670b::default:
006067AE  8B C1                     MOV EAX,ECX
006067B0  99                        CDQ
006067B1  33 C2                     XOR EAX,EDX
006067B3  2B C2                     SUB EAX,EDX
006067B5  83 F8 0A                  CMP EAX,0xa
006067B8  7D 12                     JGE 0x006067cc
006067BA  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
006067BD  83 C0 02                  ADD EAX,0x2
006067C0  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
006067C3  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006067C6  83 C0 5A                  ADD EAX,0x5a
006067C9  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
LAB_006067cc:
006067CC  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006067CF  8D 4D 94                  LEA ECX,[EBP + -0x6c]
006067D2  8D 95 54 FF FF FF         LEA EDX,[EBP + 0xffffff54]
006067D8  89 8D 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],ECX
006067DE  8B 8C BE 19 02 00 00      MOV ECX,dword ptr [ESI + EDI*0x4 + 0x219]
006067E5  52                        PUSH EDX
006067E6  E8 AF F4 DF FF            CALL 0x00405c9a
006067EB  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006067EE  47                        INC EDI
006067EF  3B F8                     CMP EDI,EAX
006067F1  89 7D 18                  MOV dword ptr [EBP + 0x18],EDI
006067F4  0F 8C 74 FB FF FF         JL 0x0060636e
LAB_006067fa:
006067FA  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006067FD  5F                        POP EDI
006067FE  5E                        POP ESI
006067FF  5B                        POP EBX
00606800  8B E5                     MOV ESP,EBP
00606802  5D                        POP EBP
00606803  C2 24 00                  RET 0x24
