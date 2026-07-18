FUN_00732170:
00732170  55                        PUSH EBP
00732171  8B EC                     MOV EBP,ESP
00732173  83 EC 38                  SUB ESP,0x38
00732176  56                        PUSH ESI
00732177  A1 BC A5 85 00            MOV EAX,[0x0085a5bc]
0073217C  6B C0 14                  IMUL EAX,EAX,0x14
0073217F  8B 0D C0 A5 85 00         MOV ECX,dword ptr [0x0085a5c0]
00732185  03 C8                     ADD ECX,EAX
00732187  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
0073218A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0073218D  83 C2 17                  ADD EDX,0x17
00732190  83 E2 F0                  AND EDX,0xfffffff0
00732193  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
00732196  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
00732199  C1 F8 04                  SAR EAX,0x4
0073219C  83 E8 01                  SUB EAX,0x1
0073219F  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
007321A2  83 7D E0 20               CMP dword ptr [EBP + -0x20],0x20
007321A6  7D 14                     JGE 0x007321bc
007321A8  83 CA FF                  OR EDX,0xffffffff
007321AB  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
007321AE  D3 EA                     SHR EDX,CL
007321B0  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
007321B3  C7 45 CC FF FF FF FF      MOV dword ptr [EBP + -0x34],0xffffffff
007321BA  EB 15                     JMP 0x007321d1
LAB_007321bc:
007321BC  C7 45 DC 00 00 00 00      MOV dword ptr [EBP + -0x24],0x0
007321C3  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
007321C6  83 E9 20                  SUB ECX,0x20
007321C9  83 C8 FF                  OR EAX,0xffffffff
007321CC  D3 E8                     SHR EAX,CL
007321CE  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
LAB_007321d1:
007321D1  8B 0D B4 A5 85 00         MOV ECX,dword ptr [0x0085a5b4]
007321D7  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
LAB_007321da:
007321DA  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
007321DD  3B 55 D4                  CMP EDX,dword ptr [EBP + -0x2c]
007321E0  73 24                     JNC 0x00732206
007321E2  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
007321E5  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
007321E8  23 08                     AND ECX,dword ptr [EAX]
007321EA  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
007321ED  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
007321F0  23 42 04                  AND EAX,dword ptr [EDX + 0x4]
007321F3  0B C8                     OR ECX,EAX
007321F5  85 C9                     TEST ECX,ECX
007321F7  74 02                     JZ 0x007321fb
007321F9  EB 0B                     JMP 0x00732206
LAB_007321fb:
007321FB  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
007321FE  83 C1 14                  ADD ECX,0x14
00732201  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
00732204  EB D4                     JMP 0x007321da
LAB_00732206:
00732206  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00732209  3B 55 D4                  CMP EDX,dword ptr [EBP + -0x2c]
0073220C  0F 85 DB 00 00 00         JNZ 0x007322ed
00732212  A1 C0 A5 85 00            MOV EAX,[0x0085a5c0]
00732217  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
LAB_0073221a:
0073221A  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0073221D  3B 0D B4 A5 85 00         CMP ECX,dword ptr [0x0085a5b4]
00732223  73 24                     JNC 0x00732249
00732225  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00732228  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0073222B  23 02                     AND EAX,dword ptr [EDX]
0073222D  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00732230  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
00732233  23 51 04                  AND EDX,dword ptr [ECX + 0x4]
00732236  0B C2                     OR EAX,EDX
00732238  85 C0                     TEST EAX,EAX
0073223A  74 02                     JZ 0x0073223e
0073223C  EB 0B                     JMP 0x00732249
LAB_0073223e:
0073223E  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00732241  83 C0 14                  ADD EAX,0x14
00732244  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00732247  EB D1                     JMP 0x0073221a
LAB_00732249:
00732249  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0073224C  3B 0D B4 A5 85 00         CMP ECX,dword ptr [0x0085a5b4]
00732252  0F 85 95 00 00 00         JNZ 0x007322ed
LAB_00732258:
00732258  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0073225B  3B 55 D4                  CMP EDX,dword ptr [EBP + -0x2c]
0073225E  73 16                     JNC 0x00732276
00732260  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00732263  83 78 08 00               CMP dword ptr [EAX + 0x8],0x0
00732267  74 02                     JZ 0x0073226b
00732269  EB 0B                     JMP 0x00732276
LAB_0073226b:
0073226B  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0073226E  83 C1 14                  ADD ECX,0x14
00732271  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
00732274  EB E2                     JMP 0x00732258
LAB_00732276:
00732276  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00732279  3B 55 D4                  CMP EDX,dword ptr [EBP + -0x2c]
0073227C  75 49                     JNZ 0x007322c7
0073227E  A1 C0 A5 85 00            MOV EAX,[0x0085a5c0]
00732283  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
LAB_00732286:
00732286  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00732289  3B 0D B4 A5 85 00         CMP ECX,dword ptr [0x0085a5b4]
0073228F  73 16                     JNC 0x007322a7
00732291  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00732294  83 7A 08 00               CMP dword ptr [EDX + 0x8],0x0
00732298  74 02                     JZ 0x0073229c
0073229A  EB 0B                     JMP 0x007322a7
LAB_0073229c:
0073229C  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0073229F  83 C0 14                  ADD EAX,0x14
007322A2  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
007322A5  EB DF                     JMP 0x00732286
LAB_007322a7:
007322A7  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
007322AA  3B 0D B4 A5 85 00         CMP ECX,dword ptr [0x0085a5b4]
007322B0  75 15                     JNZ 0x007322c7
007322B2  E8 F9 03 00 00            CALL 0x007326b0
007322B7  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
007322BA  83 7D E8 00               CMP dword ptr [EBP + -0x18],0x0
007322BE  75 07                     JNZ 0x007322c7
007322C0  33 C0                     XOR EAX,EAX
007322C2  E9 DA 03 00 00            JMP 0x007326a1
LAB_007322c7:
007322C7  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
007322CA  52                        PUSH EDX
007322CB  E8 F0 04 00 00            CALL 0x007327c0
007322D0  83 C4 04                  ADD ESP,0x4
007322D3  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
007322D6  8B 51 10                  MOV EDX,dword ptr [ECX + 0x10]
007322D9  89 02                     MOV dword ptr [EDX],EAX
007322DB  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
007322DE  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
007322E1  83 39 FF                  CMP dword ptr [ECX],-0x1
007322E4  75 07                     JNZ 0x007322ed
007322E6  33 C0                     XOR EAX,EAX
007322E8  E9 B4 03 00 00            JMP 0x007326a1
LAB_007322ed:
007322ED  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
007322F0  89 15 B4 A5 85 00         MOV dword ptr [0x0085a5b4],EDX
007322F6  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
007322F9  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
007322FC  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
007322FF  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
00732302  8B 02                     MOV EAX,dword ptr [EDX]
00732304  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
00732307  83 7D D0 FF               CMP dword ptr [EBP + -0x30],-0x1
0073230B  74 23                     JZ 0x00732330
0073230D  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
00732310  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
00732313  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
00732316  23 44 8A 44               AND EAX,dword ptr [EDX + ECX*0x4 + 0x44]
0073231A  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
0073231D  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
00732320  8B 75 CC                  MOV ESI,dword ptr [EBP + -0x34]
00732323  23 B4 8A C4 00 00 00      AND ESI,dword ptr [EDX + ECX*0x4 + 0xc4]
0073232A  0B C6                     OR EAX,ESI
0073232C  85 C0                     TEST EAX,EAX
0073232E  75 35                     JNZ 0x00732365
LAB_00732330:
00732330  C7 45 D0 00 00 00 00      MOV dword ptr [EBP + -0x30],0x0
LAB_00732337:
00732337  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
0073233A  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
0073233D  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
00732340  23 54 81 44               AND EDX,dword ptr [ECX + EAX*0x4 + 0x44]
00732344  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
00732347  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
0073234A  8B 75 CC                  MOV ESI,dword ptr [EBP + -0x34]
0073234D  23 B4 81 C4 00 00 00      AND ESI,dword ptr [ECX + EAX*0x4 + 0xc4]
00732354  0B D6                     OR EDX,ESI
00732356  85 D2                     TEST EDX,EDX
00732358  75 0B                     JNZ 0x00732365
0073235A  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
0073235D  83 C2 01                  ADD EDX,0x1
00732360  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
00732363  EB D2                     JMP 0x00732337
LAB_00732365:
00732365  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
00732368  69 C0 04 02 00 00         IMUL EAX,EAX,0x204
0073236E  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
00732371  8D 94 01 44 01 00 00      LEA EDX,[ECX + EAX*0x1 + 0x144]
00732378  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0073237B  C7 45 E0 00 00 00 00      MOV dword ptr [EBP + -0x20],0x0
00732382  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
00732385  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
00732388  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
0073238B  23 54 81 44               AND EDX,dword ptr [ECX + EAX*0x4 + 0x44]
0073238F  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
00732392  83 7D E4 00               CMP dword ptr [EBP + -0x1c],0x0
00732396  75 1A                     JNZ 0x007323b2
00732398  C7 45 E0 20 00 00 00      MOV dword ptr [EBP + -0x20],0x20
0073239F  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
007323A2  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
007323A5  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
007323A8  23 94 81 C4 00 00 00      AND EDX,dword ptr [ECX + EAX*0x4 + 0xc4]
007323AF  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
LAB_007323b2:
007323B2  83 7D E4 00               CMP dword ptr [EBP + -0x1c],0x0
007323B6  7C 13                     JL 0x007323cb
007323B8  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
007323BB  D1 E0                     SHL EAX,0x1
007323BD  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
007323C0  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
007323C3  83 C1 01                  ADD ECX,0x1
007323C6  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
007323C9  EB E7                     JMP 0x007323b2
LAB_007323cb:
007323CB  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
007323CE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007323D1  8B 4C D0 04               MOV ECX,dword ptr [EAX + EDX*0x8 + 0x4]
007323D5  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
007323D8  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
007323DB  8B 02                     MOV EAX,dword ptr [EDX]
007323DD  2B 45 D8                  SUB EAX,dword ptr [EBP + -0x28]
007323E0  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
007323E3  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
007323E6  C1 F9 04                  SAR ECX,0x4
007323E9  83 E9 01                  SUB ECX,0x1
007323EC  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
007323EF  83 7D EC 3F               CMP dword ptr [EBP + -0x14],0x3f
007323F3  7E 07                     JLE 0x007323fc
007323F5  C7 45 EC 3F 00 00 00      MOV dword ptr [EBP + -0x14],0x3f
LAB_007323fc:
007323FC  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
007323FF  3B 55 E0                  CMP EDX,dword ptr [EBP + -0x20]
00732402  0F 84 18 02 00 00         JZ 0x00732620
00732408  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0073240B  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0073240E  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
00732411  3B 51 08                  CMP EDX,dword ptr [ECX + 0x8]
00732414  0F 85 D0 00 00 00         JNZ 0x007324ea
0073241A  83 7D E0 20               CMP dword ptr [EBP + -0x20],0x20
0073241E  7D 5F                     JGE 0x0073247f
00732420  B8 00 00 00 80            MOV EAX,0x80000000
00732425  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00732428  D3 E8                     SHR EAX,CL
0073242A  F7 D0                     NOT EAX
0073242C  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
0073242F  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
00732432  8B 4C 8A 44               MOV ECX,dword ptr [EDX + ECX*0x4 + 0x44]
00732436  23 C8                     AND ECX,EAX
00732438  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
0073243B  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
0073243E  89 4C 90 44               MOV dword ptr [EAX + EDX*0x4 + 0x44],ECX
00732442  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
00732445  03 4D E0                  ADD ECX,dword ptr [EBP + -0x20]
00732448  8A 51 04                  MOV DL,byte ptr [ECX + 0x4]
0073244B  80 EA 01                  SUB DL,0x1
0073244E  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
00732451  03 45 E0                  ADD EAX,dword ptr [EBP + -0x20]
00732454  88 50 04                  MOV byte ptr [EAX + 0x4],DL
00732457  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
0073245A  03 4D E0                  ADD ECX,dword ptr [EBP + -0x20]
0073245D  0F BE 51 04               MOVSX EDX,byte ptr [ECX + 0x4]
00732461  85 D2                     TEST EDX,EDX
00732463  75 18                     JNZ 0x0073247d
00732465  B8 00 00 00 80            MOV EAX,0x80000000
0073246A  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0073246D  D3 E8                     SHR EAX,CL
0073246F  F7 D0                     NOT EAX
00732471  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00732474  8B 11                     MOV EDX,dword ptr [ECX]
00732476  23 D0                     AND EDX,EAX
00732478  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0073247B  89 10                     MOV dword ptr [EAX],EDX
LAB_0073247d:
0073247D  EB 6B                     JMP 0x007324ea
LAB_0073247f:
0073247F  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00732482  83 E9 20                  SUB ECX,0x20
00732485  BA 00 00 00 80            MOV EDX,0x80000000
0073248A  D3 EA                     SHR EDX,CL
0073248C  F7 D2                     NOT EDX
0073248E  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
00732491  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
00732494  8B 84 81 C4 00 00 00      MOV EAX,dword ptr [ECX + EAX*0x4 + 0xc4]
0073249B  23 C2                     AND EAX,EDX
0073249D  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
007324A0  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
007324A3  89 84 8A C4 00 00 00      MOV dword ptr [EDX + ECX*0x4 + 0xc4],EAX
007324AA  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
007324AD  03 45 E0                  ADD EAX,dword ptr [EBP + -0x20]
007324B0  8A 48 04                  MOV CL,byte ptr [EAX + 0x4]
007324B3  80 E9 01                  SUB CL,0x1
007324B6  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
007324B9  03 55 E0                  ADD EDX,dword ptr [EBP + -0x20]
007324BC  88 4A 04                  MOV byte ptr [EDX + 0x4],CL
007324BF  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
007324C2  03 45 E0                  ADD EAX,dword ptr [EBP + -0x20]
007324C5  0F BE 48 04               MOVSX ECX,byte ptr [EAX + 0x4]
007324C9  85 C9                     TEST ECX,ECX
007324CB  75 1D                     JNZ 0x007324ea
007324CD  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
007324D0  83 E9 20                  SUB ECX,0x20
007324D3  BA 00 00 00 80            MOV EDX,0x80000000
007324D8  D3 EA                     SHR EDX,CL
007324DA  F7 D2                     NOT EDX
007324DC  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
007324DF  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
007324E2  23 CA                     AND ECX,EDX
007324E4  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
007324E7  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
LAB_007324ea:
007324EA  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
007324ED  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
007324F0  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
007324F3  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
007324F6  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
007324F9  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
007324FC  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
007324FF  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00732502  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00732505  89 4A 08                  MOV dword ptr [EDX + 0x8],ECX
00732508  83 7D F8 00               CMP dword ptr [EBP + -0x8],0x0
0073250C  0F 84 0E 01 00 00         JZ 0x00732620
00732512  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00732515  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00732518  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
0073251B  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0073251E  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00732521  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00732524  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00732527  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
0073252A  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0073252D  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00732530  89 42 08                  MOV dword ptr [EDX + 0x8],EAX
00732533  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00732536  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00732539  89 51 04                  MOV dword ptr [ECX + 0x4],EDX
0073253C  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0073253F  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00732542  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00732545  89 51 08                  MOV dword ptr [ECX + 0x8],EDX
00732548  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0073254B  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0073254E  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
00732551  3B 51 08                  CMP EDX,dword ptr [ECX + 0x8]
00732554  0F 85 C6 00 00 00         JNZ 0x00732620
0073255A  83 7D EC 20               CMP dword ptr [EBP + -0x14],0x20
0073255E  7D 5A                     JGE 0x007325ba
00732560  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
00732563  03 45 EC                  ADD EAX,dword ptr [EBP + -0x14]
00732566  0F BE 48 04               MOVSX ECX,byte ptr [EAX + 0x4]
0073256A  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
0073256D  03 55 EC                  ADD EDX,dword ptr [EBP + -0x14]
00732570  8A 42 04                  MOV AL,byte ptr [EDX + 0x4]
00732573  04 01                     ADD AL,0x1
00732575  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
00732578  03 55 EC                  ADD EDX,dword ptr [EBP + -0x14]
0073257B  88 42 04                  MOV byte ptr [EDX + 0x4],AL
0073257E  85 C9                     TEST ECX,ECX
00732580  75 16                     JNZ 0x00732598
00732582  B8 00 00 00 80            MOV EAX,0x80000000
00732587  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0073258A  D3 E8                     SHR EAX,CL
0073258C  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0073258F  8B 11                     MOV EDX,dword ptr [ECX]
00732591  0B D0                     OR EDX,EAX
00732593  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00732596  89 10                     MOV dword ptr [EAX],EDX
LAB_00732598:
00732598  BA 00 00 00 80            MOV EDX,0x80000000
0073259D  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
007325A0  D3 EA                     SHR EDX,CL
007325A2  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
007325A5  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
007325A8  8B 44 81 44               MOV EAX,dword ptr [ECX + EAX*0x4 + 0x44]
007325AC  0B C2                     OR EAX,EDX
007325AE  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
007325B1  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
007325B4  89 44 8A 44               MOV dword ptr [EDX + ECX*0x4 + 0x44],EAX
007325B8  EB 66                     JMP 0x00732620
LAB_007325ba:
007325BA  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
007325BD  03 45 EC                  ADD EAX,dword ptr [EBP + -0x14]
007325C0  0F BE 48 04               MOVSX ECX,byte ptr [EAX + 0x4]
007325C4  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
007325C7  03 55 EC                  ADD EDX,dword ptr [EBP + -0x14]
007325CA  8A 42 04                  MOV AL,byte ptr [EDX + 0x4]
007325CD  04 01                     ADD AL,0x1
007325CF  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
007325D2  03 55 EC                  ADD EDX,dword ptr [EBP + -0x14]
007325D5  88 42 04                  MOV byte ptr [EDX + 0x4],AL
007325D8  85 C9                     TEST ECX,ECX
007325DA  75 1B                     JNZ 0x007325f7
007325DC  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
007325DF  83 E9 20                  SUB ECX,0x20
007325E2  B8 00 00 00 80            MOV EAX,0x80000000
007325E7  D3 E8                     SHR EAX,CL
007325E9  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
007325EC  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
007325EF  0B D0                     OR EDX,EAX
007325F1  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
007325F4  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
LAB_007325f7:
007325F7  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
007325FA  83 E9 20                  SUB ECX,0x20
007325FD  BA 00 00 00 80            MOV EDX,0x80000000
00732602  D3 EA                     SHR EDX,CL
00732604  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
00732607  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
0073260A  8B 84 81 C4 00 00 00      MOV EAX,dword ptr [ECX + EAX*0x4 + 0xc4]
00732611  0B C2                     OR EAX,EDX
00732613  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
00732616  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
00732619  89 84 8A C4 00 00 00      MOV dword ptr [EDX + ECX*0x4 + 0xc4],EAX
LAB_00732620:
00732620  83 7D F8 00               CMP dword ptr [EBP + -0x8],0x0
00732624  74 14                     JZ 0x0073263a
00732626  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00732629  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0073262C  89 08                     MOV dword ptr [EAX],ECX
0073262E  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00732631  03 55 F8                  ADD EDX,dword ptr [EBP + -0x8]
00732634  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00732637  89 42 FC                  MOV dword ptr [EDX + -0x4],EAX
LAB_0073263a:
0073263A  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0073263D  03 4D F8                  ADD ECX,dword ptr [EBP + -0x8]
00732640  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00732643  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
00732646  83 C2 01                  ADD EDX,0x1
00732649  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0073264C  89 10                     MOV dword ptr [EAX],EDX
0073264E  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
00732651  83 C1 01                  ADD ECX,0x1
00732654  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00732657  03 55 D8                  ADD EDX,dword ptr [EBP + -0x28]
0073265A  89 4A FC                  MOV dword ptr [EDX + -0x4],ECX
0073265D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00732660  8B 08                     MOV ECX,dword ptr [EAX]
00732662  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00732665  8B 02                     MOV EAX,dword ptr [EDX]
00732667  83 C0 01                  ADD EAX,0x1
0073266A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073266D  89 02                     MOV dword ptr [EDX],EAX
0073266F  85 C9                     TEST ECX,ECX
00732671  75 20                     JNZ 0x00732693
00732673  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00732676  3B 05 B8 A5 85 00         CMP EAX,dword ptr [0x0085a5b8]
0073267C  75 15                     JNZ 0x00732693
0073267E  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
00732681  3B 0D B0 A5 85 00         CMP ECX,dword ptr [0x0085a5b0]
00732687  75 0A                     JNZ 0x00732693
00732689  C7 05 B8 A5 85 00 00 00 00 00  MOV dword ptr [0x0085a5b8],0x0
LAB_00732693:
00732693  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
00732696  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
00732699  89 02                     MOV dword ptr [EDX],EAX
0073269B  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0073269E  83 C0 04                  ADD EAX,0x4
LAB_007326a1:
007326A1  5E                        POP ESI
007326A2  8B E5                     MOV ESP,EBP
007326A4  5D                        POP EBP
007326A5  C3                        RET
