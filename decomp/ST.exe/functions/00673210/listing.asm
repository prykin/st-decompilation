FUN_00673210:
00673210  55                        PUSH EBP
00673211  8B EC                     MOV EBP,ESP
00673213  51                        PUSH ECX
00673214  A1 14 19 81 00            MOV EAX,[0x00811914]
00673219  8B 0D 58 75 85 00         MOV ECX,dword ptr [0x00857558]
0067321F  8B 15 24 2D 7D 00         MOV EDX,dword ptr [0x007d2d24]
00673225  53                        PUSH EBX
00673226  33 DB                     XOR EBX,EBX
00673228  56                        PUSH ESI
00673229  8B 35 5C 75 85 00         MOV ESI,dword ptr [0x0085755c]
0067322F  57                        PUSH EDI
00673230  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
LAB_00673233:
00673233  3B C1                     CMP EAX,ECX
00673235  C7 05 18 2D 7D 00 4E 08 00 00  MOV dword ptr [0x007d2d18],0x84e
0067323F  0F 8E 0A 01 00 00         JLE 0x0067334f
00673245  F6 C2 10                  TEST DL,0x10
00673248  74 1F                     JZ 0x00673269
0067324A  E8 8E 28 D9 FF            CALL 0x00405add
0067324F  BE 4E 08 00 00            MOV ESI,0x84e
00673254  89 35 18 2D 7D 00         MOV dword ptr [0x007d2d18],ESI
0067325A  E8 BE 1F D9 FF            CALL 0x0040521d
0067325F  85 C0                     TEST EAX,EAX
00673261  0F 84 70 01 00 00         JZ 0x006733d7
00673267  EB 05                     JMP 0x0067326e
LAB_00673269:
00673269  BE 4E 08 00 00            MOV ESI,0x84e
LAB_0067326e:
0067326E  89 1D 40 19 81 00         MOV dword ptr [0x00811940],EBX
00673274  E8 47 02 00 00            CALL 0x006734c0
00673279  3B C3                     CMP EAX,EBX
0067327B  74 48                     JZ 0x006732c5
LAB_0067327d:
0067327D  83 F8 FF                  CMP EAX,-0x1
00673280  0F 85 7A 01 00 00         JNZ 0x00673400
00673286  8B 15 24 2D 7D 00         MOV EDX,dword ptr [0x007d2d24]
0067328C  F6 C2 80                  TEST DL,0x80
0067328F  0F 84 99 00 00 00         JZ 0x0067332e
00673295  A1 4C 19 81 00            MOV EAX,[0x0081194c]
0067329A  8B 40 14                  MOV EAX,dword ptr [EAX + 0x14]
0067329D  3B C3                     CMP EAX,EBX
0067329F  74 0A                     JZ 0x006732ab
006732A1  8B 0D 3C 75 85 00         MOV ECX,dword ptr [0x0085753c]
006732A7  53                        PUSH EBX
006732A8  51                        PUSH ECX
006732A9  FF D0                     CALL EAX
LAB_006732ab:
006732AB  E8 E0 1A D9 FF            CALL 0x00404d90
006732B0  89 35 18 2D 7D 00         MOV dword ptr [0x007d2d18],ESI
006732B6  89 1D 40 19 81 00         MOV dword ptr [0x00811940],EBX
006732BC  E8 FF 01 00 00            CALL 0x006734c0
006732C1  3B C3                     CMP EAX,EBX
006732C3  75 B8                     JNZ 0x0067327d
LAB_006732c5:
006732C5  8B 15 24 2D 7D 00         MOV EDX,dword ptr [0x007d2d24]
LAB_006732cb:
006732CB  8B 0D 58 75 85 00         MOV ECX,dword ptr [0x00857558]
006732D1  3B CB                     CMP ECX,EBX
006732D3  7C 6F                     JL 0x00673344
006732D5  8B 35 54 75 85 00         MOV ESI,dword ptr [0x00857554]
006732DB  33 C0                     XOR EAX,EAX
006732DD  46                        INC ESI
006732DE  BF 01 00 00 00            MOV EDI,0x1
006732E3  89 35 54 75 85 00         MOV dword ptr [0x00857554],ESI
006732E9  8B 35 5C 75 85 00         MOV ESI,dword ptr [0x0085755c]
006732EF  3B CB                     CMP ECX,EBX
006732F1  A3 14 19 81 00            MOV [0x00811914],EAX
006732F6  89 1D 0C 19 81 00         MOV dword ptr [0x0081190c],EBX
006732FC  89 3D 50 75 85 00         MOV dword ptr [0x00857550],EDI
00673302  7E 4B                     JLE 0x0067334f
00673304  80 7C 0E FF 5C            CMP byte ptr [ESI + ECX*0x1 + -0x1],0x5c
00673309  75 44                     JNZ 0x0067334f
0067330B  49                        DEC ECX
0067330C  89 3D 40 19 81 00         MOV dword ptr [0x00811940],EDI
00673312  89 0D 58 75 85 00         MOV dword ptr [0x00857558],ECX
00673318  88 1C 0E                  MOV byte ptr [ESI + ECX*0x1],BL
0067331B  A1 14 19 81 00            MOV EAX,[0x00811914]
00673320  8B 0D 58 75 85 00         MOV ECX,dword ptr [0x00857558]
00673326  8B 15 24 2D 7D 00         MOV EDX,dword ptr [0x007d2d24]
0067332C  EB 1B                     JMP 0x00673349
LAB_0067332e:
0067332E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00673331  83 CA 10                  OR EDX,0x10
00673334  3B C3                     CMP EAX,EBX
00673336  89 15 24 2D 7D 00         MOV dword ptr [0x007d2d24],EDX
0067333C  0F 85 A3 00 00 00         JNZ 0x006733e5
00673342  EB 87                     JMP 0x006732cb
LAB_00673344:
00673344  A1 14 19 81 00            MOV EAX,[0x00811914]
LAB_00673349:
00673349  8B 35 5C 75 85 00         MOV ESI,dword ptr [0x0085755c]
LAB_0067334f:
0067334F  F6 C2 10                  TEST DL,0x10
00673352  0F 85 99 00 00 00         JNZ 0x006733f1
00673358  F6 C2 08                  TEST DL,0x8
0067335B  0F 85 9A 00 00 00         JNZ 0x006733fb
00673361  39 5D 08                  CMP dword ptr [EBP + 0x8],EBX
00673364  75 2C                     JNZ 0x00673392
00673366  0F BE 1C 06               MOVSX EBX,byte ptr [ESI + EAX*0x1]
0067336A  8B 3D 24 19 81 00         MOV EDI,dword ptr [0x00811924]
00673370  F7 04 9F 01 04 00 00      TEST dword ptr [EDI + EBX*0x4],0x401
00673377  74 17                     JZ 0x00673390
LAB_00673379:
00673379  3B C1                     CMP EAX,ECX
0067337B  7D 1B                     JGE 0x00673398
0067337D  40                        INC EAX
0067337E  A3 14 19 81 00            MOV [0x00811914],EAX
00673383  0F BE 1C 06               MOVSX EBX,byte ptr [ESI + EAX*0x1]
00673387  F7 04 9F 01 04 00 00      TEST dword ptr [EDI + EBX*0x4],0x401
0067338E  75 E9                     JNZ 0x00673379
LAB_00673390:
00673390  33 DB                     XOR EBX,EBX
LAB_00673392:
00673392  3B C1                     CMP EAX,ECX
00673394  7C 1D                     JL 0x006733b3
00673396  EB 02                     JMP 0x0067339a
LAB_00673398:
00673398  33 DB                     XOR EBX,EBX
LAB_0067339a:
0067339A  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0067339D  40                        INC EAX
0067339E  3B FB                     CMP EDI,EBX
006733A0  C7 05 18 2D 7D 00 1D 00 00 00  MOV dword ptr [0x007d2d18],0x1d
006733AA  A3 14 19 81 00            MOV [0x00811914],EAX
006733AF  75 58                     JNZ 0x00673409
006733B1  EB 0E                     JMP 0x006733c1
LAB_006733b3:
006733B3  39 5D 08                  CMP dword ptr [EBP + 0x8],EBX
006733B6  75 61                     JNZ 0x00673419
006733B8  83 3D 18 2D 7D 00 1D      CMP dword ptr [0x007d2d18],0x1d
006733BF  75 3A                     JNZ 0x006733fb
LAB_006733c1:
006733C1  39 1D 40 19 81 00         CMP dword ptr [0x00811940],EBX
006733C7  0F 85 66 FE FF FF         JNZ 0x00673233
006733CD  F6 C2 01                  TEST DL,0x1
006733D0  75 29                     JNZ 0x006733fb
006733D2  E9 5C FE FF FF            JMP 0x00673233
LAB_006733d7:
006733D7  5F                        POP EDI
006733D8  5E                        POP ESI
006733D9  B8 F2 FF FF FF            MOV EAX,0xfffffff2
006733DE  5B                        POP EBX
006733DF  8B E5                     MOV ESP,EBP
006733E1  5D                        POP EBP
006733E2  C2 04 00                  RET 0x4
LAB_006733e5:
006733E5  5F                        POP EDI
006733E6  5E                        POP ESI
006733E7  83 C8 FF                  OR EAX,0xffffffff
006733EA  5B                        POP EBX
006733EB  8B E5                     MOV ESP,EBP
006733ED  5D                        POP EBP
006733EE  C2 04 00                  RET 0x4
LAB_006733f1:
006733F1  C7 05 18 2D 7D 00 1C 00 00 00  MOV dword ptr [0x007d2d18],0x1c
LAB_006733fb:
006733FB  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006733FE  8B C1                     MOV EAX,ECX
LAB_00673400:
00673400  5F                        POP EDI
00673401  5E                        POP ESI
00673402  5B                        POP EBX
00673403  8B E5                     MOV ESP,EBP
00673405  5D                        POP EBP
00673406  C2 04 00                  RET 0x4
LAB_00673409:
00673409  B9 0A 00 00 00            MOV ECX,0xa
0067340E  5F                        POP EDI
0067340F  5E                        POP ESI
00673410  8B C1                     MOV EAX,ECX
00673412  5B                        POP EBX
00673413  8B E5                     MOV ESP,EBP
00673415  5D                        POP EBP
00673416  C2 04 00                  RET 0x4
LAB_00673419:
00673419  0F BE 0C 06               MOVSX ECX,byte ptr [ESI + EAX*0x1]
0067341D  40                        INC EAX
0067341E  5F                        POP EDI
0067341F  A3 14 19 81 00            MOV [0x00811914],EAX
00673424  5E                        POP ESI
00673425  8B C1                     MOV EAX,ECX
00673427  5B                        POP EBX
00673428  8B E5                     MOV ESP,EBP
0067342A  5D                        POP EBP
0067342B  C2 04 00                  RET 0x4
