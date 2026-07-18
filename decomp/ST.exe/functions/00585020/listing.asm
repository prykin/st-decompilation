FUN_00585020:
00585020  55                        PUSH EBP
00585021  8B EC                     MOV EBP,ESP
00585023  83 EC 10                  SUB ESP,0x10
00585026  53                        PUSH EBX
00585027  56                        PUSH ESI
00585028  8B F1                     MOV ESI,ECX
0058502A  57                        PUSH EDI
0058502B  66 8B 46 41               MOV AX,word ptr [ESI + 0x41]
0058502F  66 85 C0                  TEST AX,AX
00585032  0F BF C8                  MOVSX ECX,AX
00585035  B8 79 19 8C 02            MOV EAX,0x28c1979
0058503A  7C 10                     JL 0x0058504c
0058503C  F7 E9                     IMUL ECX
0058503E  D1 FA                     SAR EDX,0x1
00585040  8B C2                     MOV EAX,EDX
00585042  C1 E8 1F                  SHR EAX,0x1f
00585045  03 D0                     ADD EDX,EAX
00585047  0F BF C2                  MOVSX EAX,DX
0058504A  EB 0F                     JMP 0x0058505b
LAB_0058504c:
0058504C  F7 E9                     IMUL ECX
0058504E  D1 FA                     SAR EDX,0x1
00585050  8B CA                     MOV ECX,EDX
00585052  C1 E9 1F                  SHR ECX,0x1f
00585055  03 D1                     ADD EDX,ECX
00585057  0F BF C2                  MOVSX EAX,DX
0058505A  48                        DEC EAX
LAB_0058505b:
0058505B  66 89 46 47               MOV word ptr [ESI + 0x47],AX
0058505F  66 89 46 5B               MOV word ptr [ESI + 0x5b],AX
00585063  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
00585067  66 85 C0                  TEST AX,AX
0058506A  0F BF C8                  MOVSX ECX,AX
0058506D  B8 79 19 8C 02            MOV EAX,0x28c1979
00585072  7C 10                     JL 0x00585084
00585074  F7 E9                     IMUL ECX
00585076  D1 FA                     SAR EDX,0x1
00585078  8B C2                     MOV EAX,EDX
0058507A  C1 E8 1F                  SHR EAX,0x1f
0058507D  03 D0                     ADD EDX,EAX
0058507F  0F BF C2                  MOVSX EAX,DX
00585082  EB 0F                     JMP 0x00585093
LAB_00585084:
00585084  F7 E9                     IMUL ECX
00585086  D1 FA                     SAR EDX,0x1
00585088  8B CA                     MOV ECX,EDX
0058508A  C1 E9 1F                  SHR ECX,0x1f
0058508D  03 D1                     ADD EDX,ECX
0058508F  0F BF C2                  MOVSX EAX,DX
00585092  48                        DEC EAX
LAB_00585093:
00585093  66 89 46 49               MOV word ptr [ESI + 0x49],AX
00585097  66 89 46 5D               MOV word ptr [ESI + 0x5d],AX
0058509B  66 8B 46 45               MOV AX,word ptr [ESI + 0x45]
0058509F  66 85 C0                  TEST AX,AX
005850A2  0F BF C8                  MOVSX ECX,AX
005850A5  B8 1F 85 EB 51            MOV EAX,0x51eb851f
005850AA  7C 11                     JL 0x005850bd
005850AC  F7 E9                     IMUL ECX
005850AE  C1 FA 06                  SAR EDX,0x6
005850B1  8B C2                     MOV EAX,EDX
005850B3  C1 E8 1F                  SHR EAX,0x1f
005850B6  03 D0                     ADD EDX,EAX
005850B8  0F BF C2                  MOVSX EAX,DX
005850BB  EB 10                     JMP 0x005850cd
LAB_005850bd:
005850BD  F7 E9                     IMUL ECX
005850BF  C1 FA 06                  SAR EDX,0x6
005850C2  8B CA                     MOV ECX,EDX
005850C4  C1 E9 1F                  SHR ECX,0x1f
005850C7  03 D1                     ADD EDX,ECX
005850C9  0F BF C2                  MOVSX EAX,DX
005850CC  48                        DEC EAX
LAB_005850cd:
005850CD  8B CE                     MOV ECX,ESI
005850CF  66 89 46 4B               MOV word ptr [ESI + 0x4b],AX
005850D3  66 89 46 5F               MOV word ptr [ESI + 0x5f],AX
005850D7  E8 60 C9 E7 FF            CALL 0x00401a3c
005850DC  85 C0                     TEST EAX,EAX
005850DE  8D 9E D5 01 00 00         LEA EBX,[ESI + 0x1d5]
005850E4  74 19                     JZ 0x005850ff
005850E6  6A 01                     PUSH 0x1
005850E8  8B CB                     MOV ECX,EBX
005850EA  E8 DD 01 E8 FF            CALL 0x004052cc
005850EF  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
005850F5  50                        PUSH EAX
005850F6  E8 F5 5A 16 00            CALL 0x006eabf0
005850FB  6A 01                     PUSH 0x1
005850FD  EB 26                     JMP 0x00585125
LAB_005850ff:
005850FF  6A 00                     PUSH 0x0
00585101  8B CB                     MOV ECX,EBX
00585103  E8 C4 01 E8 FF            CALL 0x004052cc
00585108  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0058510E  50                        PUSH EAX
0058510F  E8 DC 5A 16 00            CALL 0x006eabf0
00585114  8B CE                     MOV ECX,ESI
00585116  E8 BD FF E7 FF            CALL 0x004050d8
0058511B  83 F8 01                  CMP EAX,0x1
0058511E  75 03                     JNZ 0x00585123
00585120  50                        PUSH EAX
00585121  EB 02                     JMP 0x00585125
LAB_00585123:
00585123  6A 00                     PUSH 0x0
LAB_00585125:
00585125  8B CB                     MOV ECX,EBX
00585127  E8 A0 01 E8 FF            CALL 0x004052cc
0058512C  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
00585132  50                        PUSH EAX
00585133  E8 38 17 16 00            CALL 0x006e6870
00585138  66 8B 46 41               MOV AX,word ptr [ESI + 0x41]
0058513C  0F BF C8                  MOVSX ECX,AX
0058513F  66 85 C0                  TEST AX,AX
00585142  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00585145  B8 79 19 8C 02            MOV EAX,0x28c1979
0058514A  7C 13                     JL 0x0058515f
0058514C  F7 E9                     IMUL ECX
0058514E  D1 FA                     SAR EDX,0x1
00585150  8B C2                     MOV EAX,EDX
00585152  C1 E8 1F                  SHR EAX,0x1f
00585155  03 D0                     ADD EDX,EAX
00585157  0F BF CA                  MOVSX ECX,DX
0058515A  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0058515D  EB 12                     JMP 0x00585171
LAB_0058515f:
0058515F  F7 E9                     IMUL ECX
00585161  D1 FA                     SAR EDX,0x1
00585163  8B C2                     MOV EAX,EDX
00585165  C1 E8 1F                  SHR EAX,0x1f
00585168  03 D0                     ADD EDX,EAX
0058516A  0F BF C2                  MOVSX EAX,DX
0058516D  48                        DEC EAX
0058516E  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_00585171:
00585171  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
00585175  66 85 C0                  TEST AX,AX
00585178  0F BF C8                  MOVSX ECX,AX
0058517B  B8 79 19 8C 02            MOV EAX,0x28c1979
00585180  7C 13                     JL 0x00585195
00585182  F7 E9                     IMUL ECX
00585184  D1 FA                     SAR EDX,0x1
00585186  8B C2                     MOV EAX,EDX
00585188  C1 E8 1F                  SHR EAX,0x1f
0058518B  03 D0                     ADD EDX,EAX
0058518D  0F BF D2                  MOVSX EDX,DX
00585190  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00585193  EB 12                     JMP 0x005851a7
LAB_00585195:
00585195  F7 E9                     IMUL ECX
00585197  D1 FA                     SAR EDX,0x1
00585199  8B C2                     MOV EAX,EDX
0058519B  C1 E8 1F                  SHR EAX,0x1f
0058519E  03 D0                     ADD EDX,EAX
005851A0  0F BF C2                  MOVSX EAX,DX
005851A3  48                        DEC EAX
005851A4  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_005851a7:
005851A7  66 8B 46 45               MOV AX,word ptr [ESI + 0x45]
005851AB  66 85 C0                  TEST AX,AX
005851AE  0F BF D0                  MOVSX EDX,AX
005851B1  B8 1F 85 EB 51            MOV EAX,0x51eb851f
005851B6  7C 14                     JL 0x005851cc
005851B8  F7 EA                     IMUL EDX
005851BA  C1 FA 06                  SAR EDX,0x6
005851BD  8B C2                     MOV EAX,EDX
005851BF  C1 E8 1F                  SHR EAX,0x1f
005851C2  03 D0                     ADD EDX,EAX
005851C4  0F BF D2                  MOVSX EDX,DX
005851C7  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
005851CA  EB 13                     JMP 0x005851df
LAB_005851cc:
005851CC  F7 EA                     IMUL EDX
005851CE  C1 FA 06                  SAR EDX,0x6
005851D1  8B C2                     MOV EAX,EDX
005851D3  C1 E8 1F                  SHR EAX,0x1f
005851D6  03 D0                     ADD EDX,EAX
005851D8  0F BF C2                  MOVSX EAX,DX
005851DB  48                        DEC EAX
005851DC  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_005851df:
005851DF  8B 86 31 02 00 00         MOV EAX,dword ptr [ESI + 0x231]
005851E5  83 E8 00                  SUB EAX,0x0
005851E8  0F 84 49 02 00 00         JZ 0x00585437
005851EE  48                        DEC EAX
005851EF  0F 84 E5 00 00 00         JZ 0x005852da
005851F5  48                        DEC EAX
005851F6  0F 85 D4 04 00 00         JNZ 0x005856d0
005851FC  6A 08                     PUSH 0x8
005851FE  8B CB                     MOV ECX,EBX
00585200  E8 AA F0 E7 FF            CALL 0x004042af
00585205  8B F8                     MOV EDI,EAX
00585207  8A 86 55 02 00 00         MOV AL,byte ptr [ESI + 0x255]
0058520D  84 C0                     TEST AL,AL
0058520F  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
00585212  76 2B                     JBE 0x0058523f
00585214  33 C9                     XOR ECX,ECX
00585216  8A 8E 56 02 00 00         MOV CL,byte ptr [ESI + 0x256]
0058521C  3B F9                     CMP EDI,ECX
0058521E  75 1F                     JNZ 0x0058523f
00585220  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
00585226  8B CB                     MOV ECX,EBX
00585228  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
0058522E  50                        PUSH EAX
0058522F  6A 09                     PUSH 0x9
00585231  E8 0A 00 E8 FF            CALL 0x00405240
00585236  6A 09                     PUSH 0x9
00585238  8B CB                     MOV ECX,EBX
0058523A  E8 15 F6 E7 FF            CALL 0x00404854
LAB_0058523f:
0058523F  6A 08                     PUSH 0x8
00585241  8B CB                     MOV ECX,EBX
00585243  E8 64 D0 E7 FF            CALL 0x004022ac
00585248  48                        DEC EAX
00585249  3B F8                     CMP EDI,EAX
0058524B  75 09                     JNZ 0x00585256
0058524D  6A 08                     PUSH 0x8
0058524F  8B CB                     MOV ECX,EBX
00585251  E8 0E F0 E7 FF            CALL 0x00404264
LAB_00585256:
00585256  6A 0A                     PUSH 0xa
00585258  8B CB                     MOV ECX,EBX
0058525A  E8 4D D0 E7 FF            CALL 0x004022ac
0058525F  48                        DEC EAX
00585260  3B F8                     CMP EDI,EAX
00585262  75 09                     JNZ 0x0058526d
00585264  6A 0A                     PUSH 0xa
00585266  8B CB                     MOV ECX,EBX
00585268  E8 F7 EF E7 FF            CALL 0x00404264
LAB_0058526d:
0058526D  8A 86 55 02 00 00         MOV AL,byte ptr [ESI + 0x255]
00585273  84 C0                     TEST AL,AL
00585275  76 2C                     JBE 0x005852a3
00585277  6A 09                     PUSH 0x9
00585279  8B CB                     MOV ECX,EBX
0058527B  E8 2C D0 E7 FF            CALL 0x004022ac
00585280  8B F8                     MOV EDI,EAX
00585282  6A 09                     PUSH 0x9
00585284  8B CB                     MOV ECX,EBX
00585286  4F                        DEC EDI
00585287  E8 23 F0 E7 FF            CALL 0x004042af
0058528C  3B C7                     CMP EAX,EDI
0058528E  75 10                     JNZ 0x005852a0
00585290  6A 09                     PUSH 0x9
00585292  8B CB                     MOV ECX,EBX
00585294  E8 CB EF E7 FF            CALL 0x00404264
00585299  C6 86 55 02 00 00 00      MOV byte ptr [ESI + 0x255],0x0
LAB_005852a0:
005852A0  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
LAB_005852a3:
005852A3  6A 08                     PUSH 0x8
005852A5  8B CB                     MOV ECX,EBX
005852A7  E8 00 D0 E7 FF            CALL 0x004022ac
005852AC  48                        DEC EAX
005852AD  3B F8                     CMP EDI,EAX
005852AF  75 18                     JNZ 0x005852c9
005852B1  8A 86 55 02 00 00         MOV AL,byte ptr [ESI + 0x255]
005852B7  84 C0                     TEST AL,AL
005852B9  75 0E                     JNZ 0x005852c9
005852BB  8B CE                     MOV ECX,ESI
005852BD  E8 21 CB E7 FF            CALL 0x00401de3
005852C2  5F                        POP EDI
005852C3  5E                        POP ESI
005852C4  5B                        POP EBX
005852C5  8B E5                     MOV ESP,EBP
005852C7  5D                        POP EBP
005852C8  C3                        RET
LAB_005852c9:
005852C9  8B 16                     MOV EDX,dword ptr [ESI]
005852CB  8B CE                     MOV ECX,ESI
005852CD  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
005852D3  5F                        POP EDI
005852D4  5E                        POP ESI
005852D5  5B                        POP EBX
005852D6  8B E5                     MOV ESP,EBP
005852D8  5D                        POP EBP
005852D9  C3                        RET
LAB_005852da:
005852DA  A1 38 2A 80 00            MOV EAX,[0x00802a38]
005852DF  8B 96 3D 02 00 00         MOV EDX,dword ptr [ESI + 0x23d]
005852E5  8B B8 E4 00 00 00         MOV EDI,dword ptr [EAX + 0xe4]
005852EB  2B FA                     SUB EDI,EDX
005852ED  83 FF 01                  CMP EDI,0x1
005852F0  75 13                     JNZ 0x00585305
005852F2  8B 96 86 02 00 00         MOV EDX,dword ptr [ESI + 0x286]
005852F8  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005852FB  52                        PUSH EDX
005852FC  51                        PUSH ECX
005852FD  50                        PUSH EAX
005852FE  8B CE                     MOV ECX,ESI
00585300  E8 12 CE E7 FF            CALL 0x00402117
LAB_00585305:
00585305  8B 0D 24 67 80 00         MOV ECX,dword ptr [0x00806724]
0058530B  0F BF 49 23               MOVSX ECX,word ptr [ECX + 0x23]
0058530F  49                        DEC ECX
00585310  8B C1                     MOV EAX,ECX
00585312  0F AF C7                  IMUL EAX,EDI
00585315  8B 3D E4 B8 7C 00         MOV EDI,dword ptr [0x007cb8e4]
0058531B  99                        CDQ
0058531C  D1 FF                     SAR EDI,0x1
0058531E  F7 FF                     IDIV EDI
00585320  2B C8                     SUB ECX,EAX
00585322  85 C9                     TEST ECX,ECX
00585324  7E 1E                     JLE 0x00585344
00585326  89 8E 41 02 00 00         MOV dword ptr [ESI + 0x241],ECX
0058532C  A1 24 67 80 00            MOV EAX,[0x00806724]
00585331  0F BF 50 2C               MOVSX EDX,word ptr [EAX + 0x2c]
00585335  8B 44 88 30               MOV EAX,dword ptr [EAX + ECX*0x4 + 0x30]
00585339  52                        PUSH EDX
0058533A  50                        PUSH EAX
0058533B  8B CB                     MOV ECX,EBX
0058533D  E8 2B BE E7 FF            CALL 0x0040116d
00585342  EB 1E                     JMP 0x00585362
LAB_00585344:
00585344  6A 00                     PUSH 0x0
00585346  6A 00                     PUSH 0x0
00585348  8B CB                     MOV ECX,EBX
0058534A  C7 86 41 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x241],0x0
00585354  E8 14 BE E7 FF            CALL 0x0040116d
00585359  6A 0E                     PUSH 0xe
0058535B  8B CB                     MOV ECX,EBX
0058535D  E8 78 EC E7 FF            CALL 0x00403fda
LAB_00585362:
00585362  66 8B 46 45               MOV AX,word ptr [ESI + 0x45]
00585366  0F BF D8                  MOVSX EBX,AX
00585369  83 EB 05                  SUB EBX,0x5
0058536C  66 3D 4C 04               CMP AX,0x44c
00585370  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
00585373  7D 1A                     JGE 0x0058538f
00585375  8B 8E 35 02 00 00         MOV ECX,dword ptr [ESI + 0x235]
0058537B  2B CB                     SUB ECX,EBX
0058537D  83 F9 1C                  CMP ECX,0x1c
00585380  7C 0D                     JL 0x0058538f
00585382  8B CE                     MOV ECX,ESI
00585384  E8 A7 F5 E7 FF            CALL 0x00404930
00585389  89 9E 35 02 00 00         MOV dword ptr [ESI + 0x235],EBX
LAB_0058538f:
0058538F  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
00585392  83 FF 05                  CMP EDI,0x5
00585395  0F 8D 96 00 00 00         JGE 0x00585431
0058539B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0058539E  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
005853A1  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
005853A7  57                        PUSH EDI
005853A8  52                        PUSH EDX
005853A9  53                        PUSH EBX
005853AA  E8 8C F9 E7 FF            CALL 0x00404d3b
005853AF  85 C0                     TEST EAX,EAX
005853B1  75 7B                     JNZ 0x0058542e
005853B3  66 85 DB                  TEST BX,BX
005853B6  7C 65                     JL 0x0058541d
005853B8  66 8B 0D 40 B2 7F 00      MOV CX,word ptr [0x007fb240]
005853BF  66 3B D9                  CMP BX,CX
005853C2  7D 59                     JGE 0x0058541d
005853C4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005853C7  66 85 C0                  TEST AX,AX
005853CA  7C 51                     JL 0x0058541d
005853CC  66 3B 05 42 B2 7F 00      CMP AX,word ptr [0x007fb242]
005853D3  7D 48                     JGE 0x0058541d
005853D5  66 85 FF                  TEST DI,DI
005853D8  7C 43                     JL 0x0058541d
005853DA  66 3B 3D 44 B2 7F 00      CMP DI,word ptr [0x007fb244]
005853E1  7D 3A                     JGE 0x0058541d
005853E3  0F BF 15 46 B2 7F 00      MOVSX EDX,word ptr [0x007fb246]
005853EA  0F BF FF                  MOVSX EDI,DI
005853ED  0F BF C9                  MOVSX ECX,CX
005853F0  0F AF D7                  IMUL EDX,EDI
005853F3  0F BF C0                  MOVSX EAX,AX
005853F6  0F AF C8                  IMUL ECX,EAX
005853F9  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
005853FE  03 D1                     ADD EDX,ECX
00585400  0F BF CB                  MOVSX ECX,BX
00585403  03 D1                     ADD EDX,ECX
00585405  8B 04 D0                  MOV EAX,dword ptr [EAX + EDX*0x8]
00585408  85 C0                     TEST EAX,EAX
0058540A  74 11                     JZ 0x0058541d
0058540C  81 78 20 AA 00 00 00      CMP dword ptr [EAX + 0x20],0xaa
00585413  74 08                     JZ 0x0058541d
00585415  50                        PUSH EAX
00585416  8B CE                     MOV ECX,ESI
00585418  E8 C1 00 E8 FF            CALL 0x004054de
LAB_0058541d:
0058541D  8B CE                     MOV ECX,ESI
0058541F  C7 86 31 02 00 00 02 00 00 00  MOV dword ptr [ESI + 0x231],0x2
00585429  E8 D5 D6 E7 FF            CALL 0x00402b03
LAB_0058542e:
0058542E  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
LAB_00585431:
00585431  53                        PUSH EBX
00585432  E9 7E 02 00 00            JMP 0x005856b5
LAB_00585437:
00585437  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0058543D  B8 29 39 53 5F            MOV EAX,0x5f533929
00585442  8B B9 E4 00 00 00         MOV EDI,dword ptr [ECX + 0xe4]
00585448  8B 8E 3D 02 00 00         MOV ECX,dword ptr [ESI + 0x23d]
0058544E  2B F9                     SUB EDI,ECX
00585450  8B 8E 4D 02 00 00         MOV ECX,dword ptr [ESI + 0x24d]
00585456  0F AF CF                  IMUL ECX,EDI
00585459  0F AF CF                  IMUL ECX,EDI
0058545C  F7 E9                     IMUL ECX
0058545E  C1 FA 0D                  SAR EDX,0xd
00585461  8B C2                     MOV EAX,EDX
00585463  C1 E8 1F                  SHR EAX,0x1f
00585466  03 D0                     ADD EDX,EAX
00585468  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0058546B  83 F8 05                  CMP EAX,0x5
0058546E  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00585471  0F 8D BD 00 00 00         JGE 0x00585534
00585477  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0058547A  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0058547D  50                        PUSH EAX
0058547E  51                        PUSH ECX
0058547F  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00585485  52                        PUSH EDX
00585486  E8 B0 F8 E7 FF            CALL 0x00404d3b
0058548B  85 C0                     TEST EAX,EAX
0058548D  0F 85 9E 00 00 00         JNZ 0x00585531
00585493  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00585496  66 85 D2                  TEST DX,DX
00585499  7C 7E                     JL 0x00585519
0058549B  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
005854A2  66 3B D7                  CMP DX,DI
005854A5  7D 72                     JGE 0x00585519
005854A7  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005854AA  66 85 C9                  TEST CX,CX
005854AD  7C 6A                     JL 0x00585519
005854AF  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
005854B6  7D 61                     JGE 0x00585519
005854B8  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
005854BB  66 85 C0                  TEST AX,AX
005854BE  7C 59                     JL 0x00585519
005854C0  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
005854C7  7D 50                     JGE 0x00585519
005854C9  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
005854D0  0F BF C0                  MOVSX EAX,AX
005854D3  0F AF D8                  IMUL EBX,EAX
005854D6  0F BF C7                  MOVSX EAX,DI
005854D9  0F BF C9                  MOVSX ECX,CX
005854DC  0F AF C1                  IMUL EAX,ECX
005854DF  0F BF D2                  MOVSX EDX,DX
005854E2  03 D8                     ADD EBX,EAX
005854E4  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
005854E9  03 DA                     ADD EBX,EDX
005854EB  8B 04 D8                  MOV EAX,dword ptr [EAX + EBX*0x8]
005854EE  85 C0                     TEST EAX,EAX
005854F0  74 27                     JZ 0x00585519
005854F2  81 78 20 AA 00 00 00      CMP dword ptr [EAX + 0x20],0xaa
005854F9  74 1E                     JZ 0x00585519
005854FB  50                        PUSH EAX
005854FC  8B CE                     MOV ECX,ESI
005854FE  E8 DB FF E7 FF            CALL 0x004054de
00585503  0F BF 4E 43               MOVSX ECX,word ptr [ESI + 0x43]
00585507  0F BF 56 41               MOVSX EDX,word ptr [ESI + 0x41]
0058550B  68 64 04 00 00            PUSH 0x464
00585510  51                        PUSH ECX
00585511  52                        PUSH EDX
00585512  8B CE                     MOV ECX,ESI
00585514  E8 17 C2 E7 FF            CALL 0x00401730
LAB_00585519:
00585519  8B CE                     MOV ECX,ESI
0058551B  C7 86 31 02 00 00 02 00 00 00  MOV dword ptr [ESI + 0x231],0x2
00585525  E8 D9 D5 E7 FF            CALL 0x00402b03
0058552A  5F                        POP EDI
0058552B  5E                        POP ESI
0058552C  5B                        POP EBX
0058552D  8B E5                     MOV ESP,EBP
0058552F  5D                        POP EBP
00585530  C3                        RET
LAB_00585531:
00585531  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
LAB_00585534:
00585534  8B 0D E4 B8 7C 00         MOV ECX,dword ptr [0x007cb8e4]
0058553A  D1 F9                     SAR ECX,0x1
0058553C  3B F9                     CMP EDI,ECX
0058553E  7E 56                     JLE 0x00585596
00585540  A1 24 67 80 00            MOV EAX,[0x00806724]
00585545  0F BF 40 23               MOVSX EAX,word ptr [EAX + 0x23]
00585549  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0058554C  8D 50 FF                  LEA EDX,[EAX + -0x1]
0058554F  8B C7                     MOV EAX,EDI
00585551  2B C1                     SUB EAX,ECX
00585553  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00585556  0F AF C2                  IMUL EAX,EDX
00585559  99                        CDQ
0058555A  F7 F9                     IDIV ECX
0058555C  8B F8                     MOV EDI,EAX
0058555E  85 FF                     TEST EDI,EDI
00585560  7D 02                     JGE 0x00585564
00585562  33 FF                     XOR EDI,EDI
LAB_00585564:
00585564  3B 7D F0                  CMP EDI,dword ptr [EBP + -0x10]
00585567  7C 0E                     JL 0x00585577
00585569  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
0058556C  6A 00                     PUSH 0x0
0058556E  6A 00                     PUSH 0x0
00585570  8B CB                     MOV ECX,EBX
00585572  E8 F6 BB E7 FF            CALL 0x0040116d
LAB_00585577:
00585577  89 BE 41 02 00 00         MOV dword ptr [ESI + 0x241],EDI
0058557D  A1 24 67 80 00            MOV EAX,[0x00806724]
00585582  0F BF 48 2C               MOVSX ECX,word ptr [EAX + 0x2c]
00585586  8B 54 B8 30               MOV EDX,dword ptr [EAX + EDI*0x4 + 0x30]
0058558A  51                        PUSH ECX
0058558B  52                        PUSH EDX
0058558C  8B CB                     MOV ECX,EBX
0058558E  E8 DA BB E7 FF            CALL 0x0040116d
00585593  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
LAB_00585596:
00585596  8D 42 28                  LEA EAX,[EDX + 0x28]
00585599  85 C0                     TEST EAX,EAX
0058559B  0F 8D 05 01 00 00         JGE 0x005856a6
005855A1  66 03 56 45               ADD DX,word ptr [ESI + 0x45]
005855A5  66 8B 8E 7C 02 00 00      MOV CX,word ptr [ESI + 0x27c]
005855AC  83 C2 28                  ADD EDX,0x28
005855AF  52                        PUSH EDX
005855B0  66 8B 96 78 02 00 00      MOV DX,word ptr [ESI + 0x278]
005855B7  51                        PUSH ECX
005855B8  52                        PUSH EDX
005855B9  8B CE                     MOV ECX,ESI
005855BB  E8 47 DB E7 FF            CALL 0x00403107
005855C0  8B 9E 74 02 00 00         MOV EBX,dword ptr [ESI + 0x274]
005855C6  C7 86 51 02 00 00 68 01 00 00  MOV dword ptr [ESI + 0x251],0x168
005855D0  0F BF 46 45               MOVSX EAX,word ptr [ESI + 0x45]
005855D4  43                        INC EBX
005855D5  89 86 35 02 00 00         MOV dword ptr [ESI + 0x235],EAX
005855DB  89 9E 74 02 00 00         MOV dword ptr [ESI + 0x274],EBX
005855E1  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005855E7  B8 55 55 55 D5            MOV EAX,0xd5555555
005855EC  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
005855F2  8B 8E 4D 02 00 00         MOV ECX,dword ptr [ESI + 0x24d]
005855F8  89 96 3D 02 00 00         MOV dword ptr [ESI + 0x23d],EDX
005855FE  F7 E9                     IMUL ECX
00585600  8B C2                     MOV EAX,EDX
00585602  C1 E8 1F                  SHR EAX,0x1f
00585605  03 D0                     ADD EDX,EAX
00585607  89 96 4D 02 00 00         MOV dword ptr [ESI + 0x24d],EDX
0058560D  8B 0D 88 2A 80 00         MOV ECX,dword ptr [0x00802a88]
00585613  85 C9                     TEST ECX,ECX
00585615  74 74                     JZ 0x0058568b
00585617  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
0058561B  66 85 C0                  TEST AX,AX
0058561E  0F BF D0                  MOVSX EDX,AX
00585621  B8 79 19 8C 02            MOV EAX,0x28c1979
00585626  7C 10                     JL 0x00585638
00585628  F7 EA                     IMUL EDX
0058562A  D1 FA                     SAR EDX,0x1
0058562C  8B C2                     MOV EAX,EDX
0058562E  C1 E8 1F                  SHR EAX,0x1f
00585631  03 D0                     ADD EDX,EAX
00585633  0F BF FA                  MOVSX EDI,DX
00585636  EB 0F                     JMP 0x00585647
LAB_00585638:
00585638  F7 EA                     IMUL EDX
0058563A  D1 FA                     SAR EDX,0x1
0058563C  8B C2                     MOV EAX,EDX
0058563E  C1 E8 1F                  SHR EAX,0x1f
00585641  03 D0                     ADD EDX,EAX
00585643  0F BF FA                  MOVSX EDI,DX
00585646  4F                        DEC EDI
LAB_00585647:
00585647  66 8B 46 41               MOV AX,word ptr [ESI + 0x41]
0058564B  66 85 C0                  TEST AX,AX
0058564E  0F BF D0                  MOVSX EDX,AX
00585651  B8 79 19 8C 02            MOV EAX,0x28c1979
00585656  7C 10                     JL 0x00585668
00585658  F7 EA                     IMUL EDX
0058565A  D1 FA                     SAR EDX,0x1
0058565C  8B C2                     MOV EAX,EDX
0058565E  C1 E8 1F                  SHR EAX,0x1f
00585661  03 D0                     ADD EDX,EAX
00585663  0F BF C2                  MOVSX EAX,DX
00585666  EB 0F                     JMP 0x00585677
LAB_00585668:
00585668  F7 EA                     IMUL EDX
0058566A  D1 FA                     SAR EDX,0x1
0058566C  8B C2                     MOV EAX,EDX
0058566E  C1 E8 1F                  SHR EAX,0x1f
00585671  03 D0                     ADD EDX,EAX
00585673  0F BF C2                  MOVSX EAX,DX
00585676  48                        DEC EAX
LAB_00585677:
00585677  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
0058567A  68 F4 01 00 00            PUSH 0x1f4
0058567F  6A 05                     PUSH 0x5
00585681  52                        PUSH EDX
00585682  6A 00                     PUSH 0x0
00585684  57                        PUSH EDI
00585685  50                        PUSH EAX
00585686  E8 47 C9 E7 FF            CALL 0x00401fd2
LAB_0058568b:
0058568B  8B 06                     MOV EAX,dword ptr [ESI]
0058568D  8B CE                     MOV ECX,ESI
0058568F  C7 86 31 02 00 00 01 00 00 00  MOV dword ptr [ESI + 0x231],0x1
00585699  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
0058569F  5F                        POP EDI
005856A0  5E                        POP ESI
005856A1  5B                        POP EBX
005856A2  8B E5                     MOV ESP,EBP
005856A4  5D                        POP EBP
005856A5  C3                        RET
LAB_005856a6:
005856A6  66 8B 86 49 02 00 00      MOV AX,word ptr [ESI + 0x249]
005856AD  66 03 C2                  ADD AX,DX
005856B0  66 03 46 45               ADD AX,word ptr [ESI + 0x45]
005856B4  50                        PUSH EAX
LAB_005856b5:
005856B5  66 8B 4E 43               MOV CX,word ptr [ESI + 0x43]
005856B9  66 8B 56 41               MOV DX,word ptr [ESI + 0x41]
005856BD  51                        PUSH ECX
005856BE  52                        PUSH EDX
005856BF  8B CE                     MOV ECX,ESI
005856C1  E8 41 DA E7 FF            CALL 0x00403107
005856C6  8B 06                     MOV EAX,dword ptr [ESI]
005856C8  8B CE                     MOV ECX,ESI
005856CA  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
LAB_005856d0:
005856D0  5F                        POP EDI
005856D1  5E                        POP ESI
005856D2  5B                        POP EBX
005856D3  8B E5                     MOV ESP,EBP
005856D5  5D                        POP EBP
005856D6  C3                        RET
