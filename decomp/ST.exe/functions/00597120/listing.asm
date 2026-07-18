FUN_00597120:
00597120  55                        PUSH EBP
00597121  8B EC                     MOV EBP,ESP
00597123  81 EC A4 00 00 00         SUB ESP,0xa4
00597129  53                        PUSH EBX
0059712A  56                        PUSH ESI
0059712B  57                        PUSH EDI
0059712C  8B F1                     MOV ESI,ECX
0059712E  BF 01 00 00 00            MOV EDI,0x1
00597133  89 75 DC                  MOV dword ptr [EBP + -0x24],ESI
00597136  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00597139  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
0059713F  33 DB                     XOR EBX,EBX
00597141  89 46 61                  MOV dword ptr [ESI + 0x61],EAX
00597144  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00597149  8D 95 60 FF FF FF         LEA EDX,[EBP + 0xffffff60]
0059714F  8D 8D 5C FF FF FF         LEA ECX,[EBP + 0xffffff5c]
00597155  53                        PUSH EBX
00597156  52                        PUSH EDX
00597157  89 85 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EAX
0059715D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00597163  E8 88 66 19 00            CALL 0x0072d7f0
00597168  8B F0                     MOV ESI,EAX
0059716A  83 C4 08                  ADD ESP,0x8
0059716D  3B F3                     CMP ESI,EBX
0059716F  0F 85 8C 09 00 00         JNZ 0x00597b01
00597175  8B 75 DC                  MOV ESI,dword ptr [EBP + -0x24]
00597178  33 C0                     XOR EAX,EAX
0059717A  8A 46 65                  MOV AL,byte ptr [ESI + 0x65]
0059717D  48                        DEC EAX
0059717E  83 F8 09                  CMP EAX,0x9
00597181  0F 87 67 09 00 00         JA 0x00597aee
switchD_00597187::switchD:
00597187  FF 24 85 48 7B 59 00      JMP dword ptr [EAX*0x4 + 0x597b48]
switchD_00597187::caseD_4:
0059718E  8B 8E 23 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f23]
00597194  3B CB                     CMP ECX,EBX
00597196  74 27                     JZ 0x005971bf
00597198  E8 54 E4 E6 FF            CALL 0x004055f1
0059719D  85 C0                     TEST EAX,EAX
0059719F  74 05                     JZ 0x005971a6
005971A1  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
005971A4  EB 19                     JMP 0x005971bf
LAB_005971a6:
005971A6  8B 86 23 1F 00 00         MOV EAX,dword ptr [ESI + 0x1f23]
005971AC  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005971AF  3B C3                     CMP EAX,EBX
005971B1  7C 0C                     JL 0x005971bf
005971B3  50                        PUSH EAX
005971B4  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005971B9  50                        PUSH EAX
005971BA  E8 31 C9 11 00            CALL 0x006b3af0
LAB_005971bf:
005971BF  8B 8E 27 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f27]
005971C5  3B CB                     CMP ECX,EBX
005971C7  74 28                     JZ 0x005971f1
005971C9  E8 23 E4 E6 FF            CALL 0x004055f1
005971CE  85 C0                     TEST EAX,EAX
005971D0  74 05                     JZ 0x005971d7
005971D2  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
005971D5  EB 1A                     JMP 0x005971f1
LAB_005971d7:
005971D7  8B 86 27 1F 00 00         MOV EAX,dword ptr [ESI + 0x1f27]
005971DD  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005971E0  3B C3                     CMP EAX,EBX
005971E2  7C 0D                     JL 0x005971f1
005971E4  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005971EA  50                        PUSH EAX
005971EB  51                        PUSH ECX
005971EC  E8 FF C8 11 00            CALL 0x006b3af0
LAB_005971f1:
005971F1  8B 8E 2B 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f2b]
005971F7  3B CB                     CMP ECX,EBX
005971F9  74 28                     JZ 0x00597223
005971FB  E8 F1 E3 E6 FF            CALL 0x004055f1
00597200  85 C0                     TEST EAX,EAX
00597202  74 05                     JZ 0x00597209
00597204  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00597207  EB 1A                     JMP 0x00597223
LAB_00597209:
00597209  8B 86 2B 1F 00 00         MOV EAX,dword ptr [ESI + 0x1f2b]
0059720F  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
00597212  3B C3                     CMP EAX,EBX
00597214  7C 0D                     JL 0x00597223
00597216  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
0059721C  50                        PUSH EAX
0059721D  52                        PUSH EDX
0059721E  E8 CD C8 11 00            CALL 0x006b3af0
LAB_00597223:
00597223  8B 8E 2F 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f2f]
00597229  3B CB                     CMP ECX,EBX
0059722B  74 27                     JZ 0x00597254
0059722D  E8 BF E3 E6 FF            CALL 0x004055f1
00597232  85 C0                     TEST EAX,EAX
00597234  74 05                     JZ 0x0059723b
00597236  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00597239  EB 19                     JMP 0x00597254
LAB_0059723b:
0059723B  8B 86 2F 1F 00 00         MOV EAX,dword ptr [ESI + 0x1f2f]
00597241  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
00597244  3B C3                     CMP EAX,EBX
00597246  7C 0C                     JL 0x00597254
00597248  50                        PUSH EAX
00597249  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0059724E  50                        PUSH EAX
0059724F  E8 9C C8 11 00            CALL 0x006b3af0
LAB_00597254:
00597254  8A 86 61 1A 00 00         MOV AL,byte ptr [ESI + 0x1a61]
0059725A  84 C0                     TEST AL,AL
0059725C  0F 85 E0 00 00 00         JNZ 0x00597342
00597262  8B 86 93 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a93]
00597268  83 F8 09                  CMP EAX,0x9
0059726B  0F 8D D1 00 00 00         JGE 0x00597342
00597271  39 9E 8F 1A 00 00         CMP dword ptr [ESI + 0x1a8f],EBX
00597277  0F 8C C5 00 00 00         JL 0x00597342
0059727D  3B C3                     CMP EAX,EBX
0059727F  75 19                     JNZ 0x0059729a
00597281  8B 86 B3 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ab3]
00597287  3B C3                     CMP EAX,EBX
00597289  74 0F                     JZ 0x0059729a
0059728B  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0059728E  50                        PUSH EAX
0059728F  E8 1C E4 14 00            CALL 0x006e56b0
00597294  89 9E B3 1A 00 00         MOV dword ptr [ESI + 0x1ab3],EBX
LAB_0059729a:
0059729A  8B 96 93 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a93]
005972A0  8B 86 97 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a97]
005972A6  42                        INC EDX
005972A7  89 96 93 1A 00 00         MOV dword ptr [ESI + 0x1a93],EDX
005972AD  8B 58 14                  MOV EBX,dword ptr [EAX + 0x14]
005972B0  85 DB                     TEST EBX,EBX
005972B2  75 18                     JNZ 0x005972cc
005972B4  66 8B 58 0E               MOV BX,word ptr [EAX + 0xe]
005972B8  0F AF 58 04               IMUL EBX,dword ptr [EAX + 0x4]
005972BC  83 C3 1F                  ADD EBX,0x1f
005972BF  C1 EB 03                  SHR EBX,0x3
005972C2  81 E3 FC FF FF 1F         AND EBX,0x1ffffffc
005972C8  0F AF 58 08               IMUL EBX,dword ptr [EAX + 0x8]
LAB_005972cc:
005972CC  50                        PUSH EAX
005972CD  E8 CE DC 11 00            CALL 0x006b4fa0
005972D2  8B CB                     MOV ECX,EBX
005972D4  8B F8                     MOV EDI,EAX
005972D6  8B D1                     MOV EDX,ECX
005972D8  83 C8 FF                  OR EAX,0xffffffff
005972DB  C1 E9 02                  SHR ECX,0x2
005972DE  F3 AB                     STOSD.REP ES:EDI
005972E0  8B CA                     MOV ECX,EDX
005972E2  6A 00                     PUSH 0x0
005972E4  83 E1 03                  AND ECX,0x3
005972E7  6A 00                     PUSH 0x0
005972E9  F3 AA                     STOSB.REP ES:EDI
005972EB  8B 86 93 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a93]
005972F1  50                        PUSH EAX
005972F2  6A 02                     PUSH 0x2
005972F4  68 58 C0 7C 00            PUSH 0x7cc058
005972F9  E8 02 B9 15 00            CALL 0x006f2c00
005972FE  8B 0D 80 67 80 00         MOV ECX,dword ptr [0x00806780]
00597304  83 C4 0C                  ADD ESP,0xc
00597307  50                        PUSH EAX
00597308  6A 06                     PUSH 0x6
0059730A  51                        PUSH ECX
0059730B  E8 90 32 17 00            CALL 0x0070a5a0
00597310  8B 96 97 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a97]
00597316  50                        PUSH EAX
00597317  6A 06                     PUSH 0x6
00597319  6A 00                     PUSH 0x0
0059731B  6A 00                     PUSH 0x0
0059731D  52                        PUSH EDX
0059731E  E8 06 BF E6 FF            CALL 0x00403229
00597323  8B 86 8F 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a8f]
00597329  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0059732F  83 C4 28                  ADD ESP,0x28
00597332  50                        PUSH EAX
00597333  51                        PUSH ECX
00597334  E8 97 C2 11 00            CALL 0x006b35d0
00597339  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00597340  33 DB                     XOR EBX,EBX
LAB_00597342:
00597342  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
00597348  8B 82 E6 02 00 00         MOV EAX,dword ptr [EDX + 0x2e6]
0059734E  3B C3                     CMP EAX,EBX
00597350  74 09                     JZ 0x0059735b
00597352  80 78 65 02               CMP byte ptr [EAX + 0x65],0x2
00597356  74 03                     JZ 0x0059735b
00597358  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
LAB_0059735b:
0059735B  39 5D FC                  CMP dword ptr [EBP + -0x4],EBX
0059735E  0F 84 8A 07 00 00         JZ 0x00597aee
00597364  8B 3D 30 2A 80 00         MOV EDI,dword ptr [0x00802a30]
0059736A  3B FB                     CMP EDI,EBX
0059736C  74 4F                     JZ 0x005973bd
0059736E  8B 87 C9 00 00 00         MOV EAX,dword ptr [EDI + 0xc9]
00597374  8B 8F C5 00 00 00         MOV ECX,dword ptr [EDI + 0xc5]
0059737A  50                        PUSH EAX
0059737B  51                        PUSH ECX
0059737C  6A 00                     PUSH 0x0
0059737E  8B CF                     MOV ECX,EDI
00597380  C6 87 93 04 00 00 01      MOV byte ptr [EDI + 0x493],0x1
00597387  66 C7 87 94 04 00 00 FF FF  MOV word ptr [EDI + 0x494],0xffff
00597390  E8 E9 DC E6 FF            CALL 0x0040507e
00597395  8B 97 C9 00 00 00         MOV EDX,dword ptr [EDI + 0xc9]
0059739B  8B 87 C5 00 00 00         MOV EAX,dword ptr [EDI + 0xc5]
005973A1  52                        PUSH EDX
005973A2  50                        PUSH EAX
005973A3  8B CF                     MOV ECX,EDI
005973A5  E8 74 B0 E6 FF            CALL 0x0040241e
005973AA  C6 87 D2 00 00 00 00      MOV byte ptr [EDI + 0xd2],0x0
005973B1  C7 87 DF 04 00 00 FF FF FF FF  MOV dword ptr [EDI + 0x4df],0xffffffff
005973BB  33 DB                     XOR EBX,EBX
LAB_005973bd:
005973BD  8A 86 61 1A 00 00         MOV AL,byte ptr [ESI + 0x1a61]
005973C3  84 C0                     TEST AL,AL
005973C5  75 5C                     JNZ 0x00597423
005973C7  8A 8E 5A 1A 00 00         MOV CL,byte ptr [ESI + 0x1a5a]
005973CD  C6 46 65 02               MOV byte ptr [ESI + 0x65],0x2
005973D1  80 F9 FF                  CMP CL,0xff
005973D4  0F 84 14 07 00 00         JZ 0x00597aee
005973DA  81 E1 FF 00 00 00         AND ECX,0xff
005973E0  8D 04 CD 00 00 00 00      LEA EAX,[ECX*0x8 + 0x0]
005973E7  2B C1                     SUB EAX,ECX
005973E9  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
005973EC  8D 0C D1                  LEA ECX,[ECX + EDX*0x8]
005973EF  8D 04 4E                  LEA EAX,[ESI + ECX*0x2]
005973F2  03 C1                     ADD EAX,ECX
005973F4  39 98 D1 00 00 00         CMP dword ptr [EAX + 0xd1],EBX
005973FA  0F 84 EE 06 00 00         JZ 0x00597aee
00597400  05 C1 00 00 00            ADD EAX,0xc1
00597405  B9 20 76 80 00            MOV ECX,0x807620
0059740A  50                        PUSH EAX
0059740B  E8 40 C7 14 00            CALL 0x006e3b50
00597410  8B 8D 5C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff5c]
00597416  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0059741C  5F                        POP EDI
0059741D  5E                        POP ESI
0059741E  5B                        POP EBX
0059741F  8B E5                     MOV ESP,EBP
00597421  5D                        POP EBP
00597422  C3                        RET
LAB_00597423:
00597423  8B C8                     MOV ECX,EAX
00597425  81 E1 FF 00 00 00         AND ECX,0xff
0059742B  83 C1 FE                  ADD ECX,-0x2
0059742E  83 F9 08                  CMP ECX,0x8
00597431  77 68                     JA 0x0059749b
switchD_00597433::switchD:
00597433  FF 24 8D 70 7B 59 00      JMP dword ptr [ECX*0x4 + 0x597b70]
switchD_00597433::caseD_2:
0059743A  6A 07                     PUSH 0x7
0059743C  8B CE                     MOV ECX,ESI
0059743E  88 86 5F 1A 00 00         MOV byte ptr [ESI + 0x1a5f],AL
00597444  E8 E3 A6 E6 FF            CALL 0x00401b2c
00597449  8B 8D 5C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff5c]
0059744F  C6 86 61 1A 00 00 00      MOV byte ptr [ESI + 0x1a61],0x0
00597456  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0059745C  5F                        POP EDI
0059745D  5E                        POP ESI
0059745E  5B                        POP EBX
0059745F  8B E5                     MOV ESP,EBP
00597461  5D                        POP EBP
00597462  C3                        RET
switchD_00597433::caseD_6:
00597463  6A 08                     PUSH 0x8
00597465  8B CE                     MOV ECX,ESI
00597467  88 86 5F 1A 00 00         MOV byte ptr [ESI + 0x1a5f],AL
0059746D  E8 BA A6 E6 FF            CALL 0x00401b2c
00597472  8B 8D 5C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff5c]
00597478  C6 86 61 1A 00 00 00      MOV byte ptr [ESI + 0x1a61],0x0
0059747F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00597485  5F                        POP EDI
00597486  5E                        POP ESI
00597487  5B                        POP EBX
00597488  8B E5                     MOV ESP,EBP
0059748A  5D                        POP EBP
0059748B  C3                        RET
switchD_00597433::caseD_8:
0059748C  6A 0A                     PUSH 0xa
0059748E  8B CE                     MOV ECX,ESI
00597490  88 86 5F 1A 00 00         MOV byte ptr [ESI + 0x1a5f],AL
00597496  E8 91 A6 E6 FF            CALL 0x00401b2c
switchD_00597433::default:
0059749B  8B 8D 5C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff5c]
005974A1  C6 86 61 1A 00 00 00      MOV byte ptr [ESI + 0x1a61],0x0
005974A8  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005974AE  5F                        POP EDI
005974AF  5E                        POP ESI
005974B0  5B                        POP EBX
005974B1  8B E5                     MOV ESP,EBP
005974B3  5D                        POP EBP
005974B4  C3                        RET
switchD_00597187::caseD_3:
005974B5  8B 86 93 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a93]
005974BB  3B C3                     CMP EAX,EBX
005974BD  0F 8E DB 00 00 00         JLE 0x0059759e
005974C3  39 9E 8F 1A 00 00         CMP dword ptr [ESI + 0x1a8f],EBX
005974C9  0F 8C CF 00 00 00         JL 0x0059759e
005974CF  83 F8 09                  CMP EAX,0x9
005974D2  75 22                     JNZ 0x005974f6
005974D4  53                        PUSH EBX
005974D5  68 4C 69 00 00            PUSH 0x694c
005974DA  6A 3C                     PUSH 0x3c
005974DC  68 D6 01 00 00            PUSH 0x1d6
005974E1  50                        PUSH EAX
005974E2  68 21 01 00 00            PUSH 0x121
005974E7  57                        PUSH EDI
005974E8  53                        PUSH EBX
005974E9  8B CE                     MOV ECX,ESI
005974EB  E8 2B C1 E6 FF            CALL 0x0040361b
005974F0  89 86 B3 1A 00 00         MOV dword ptr [ESI + 0x1ab3],EAX
LAB_005974f6:
005974F6  8B 96 93 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a93]
005974FC  8B 86 97 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a97]
00597502  4A                        DEC EDX
00597503  89 96 93 1A 00 00         MOV dword ptr [ESI + 0x1a93],EDX
00597509  8B 58 14                  MOV EBX,dword ptr [EAX + 0x14]
0059750C  85 DB                     TEST EBX,EBX
0059750E  75 18                     JNZ 0x00597528
00597510  66 8B 58 0E               MOV BX,word ptr [EAX + 0xe]
00597514  0F AF 58 04               IMUL EBX,dword ptr [EAX + 0x4]
00597518  83 C3 1F                  ADD EBX,0x1f
0059751B  C1 EB 03                  SHR EBX,0x3
0059751E  81 E3 FC FF FF 1F         AND EBX,0x1ffffffc
00597524  0F AF 58 08               IMUL EBX,dword ptr [EAX + 0x8]
LAB_00597528:
00597528  50                        PUSH EAX
00597529  E8 72 DA 11 00            CALL 0x006b4fa0
0059752E  8B CB                     MOV ECX,EBX
00597530  8B F8                     MOV EDI,EAX
00597532  8B D1                     MOV EDX,ECX
00597534  83 C8 FF                  OR EAX,0xffffffff
00597537  C1 E9 02                  SHR ECX,0x2
0059753A  F3 AB                     STOSD.REP ES:EDI
0059753C  8B CA                     MOV ECX,EDX
0059753E  6A 00                     PUSH 0x0
00597540  83 E1 03                  AND ECX,0x3
00597543  6A 00                     PUSH 0x0
00597545  F3 AA                     STOSB.REP ES:EDI
00597547  8B 86 93 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a93]
0059754D  50                        PUSH EAX
0059754E  6A 02                     PUSH 0x2
00597550  68 58 C0 7C 00            PUSH 0x7cc058
00597555  E8 A6 B6 15 00            CALL 0x006f2c00
0059755A  8B 0D 80 67 80 00         MOV ECX,dword ptr [0x00806780]
00597560  83 C4 0C                  ADD ESP,0xc
00597563  50                        PUSH EAX
00597564  6A 06                     PUSH 0x6
00597566  51                        PUSH ECX
00597567  E8 34 30 17 00            CALL 0x0070a5a0
0059756C  8B 96 97 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a97]
00597572  50                        PUSH EAX
00597573  6A 06                     PUSH 0x6
00597575  6A 00                     PUSH 0x0
00597577  6A 00                     PUSH 0x0
00597579  52                        PUSH EDX
0059757A  E8 AA BC E6 FF            CALL 0x00403229
0059757F  8B 86 8F 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a8f]
00597585  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0059758B  83 C4 28                  ADD ESP,0x28
0059758E  50                        PUSH EAX
0059758F  51                        PUSH ECX
00597590  E8 3B C0 11 00            CALL 0x006b35d0
00597595  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0059759C  33 DB                     XOR EBX,EBX
LAB_0059759e:
0059759E  8B 8E 23 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f23]
005975A4  3B CB                     CMP ECX,EBX
005975A6  74 0C                     JZ 0x005975b4
005975A8  E8 44 E0 E6 FF            CALL 0x004055f1
005975AD  85 C0                     TEST EAX,EAX
005975AF  74 03                     JZ 0x005975b4
005975B1  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
LAB_005975b4:
005975B4  8B 8E 27 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f27]
005975BA  3B CB                     CMP ECX,EBX
005975BC  74 0C                     JZ 0x005975ca
005975BE  E8 2E E0 E6 FF            CALL 0x004055f1
005975C3  85 C0                     TEST EAX,EAX
005975C5  74 03                     JZ 0x005975ca
005975C7  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
LAB_005975ca:
005975CA  8B 8E 2B 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f2b]
005975D0  3B CB                     CMP ECX,EBX
005975D2  74 0C                     JZ 0x005975e0
005975D4  E8 18 E0 E6 FF            CALL 0x004055f1
005975D9  85 C0                     TEST EAX,EAX
005975DB  74 03                     JZ 0x005975e0
005975DD  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
LAB_005975e0:
005975E0  8B 8E 2F 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f2f]
005975E6  3B CB                     CMP ECX,EBX
005975E8  74 0C                     JZ 0x005975f6
005975EA  E8 02 E0 E6 FF            CALL 0x004055f1
005975EF  85 C0                     TEST EAX,EAX
005975F1  74 03                     JZ 0x005975f6
005975F3  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
LAB_005975f6:
005975F6  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005975FC  8B 82 E6 02 00 00         MOV EAX,dword ptr [EDX + 0x2e6]
00597602  3B C3                     CMP EAX,EBX
00597604  74 09                     JZ 0x0059760f
00597606  80 78 65 01               CMP byte ptr [EAX + 0x65],0x1
0059760A  74 03                     JZ 0x0059760f
0059760C  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
LAB_0059760f:
0059760F  39 5D FC                  CMP dword ptr [EBP + -0x4],EBX
00597612  0F 84 D6 04 00 00         JZ 0x00597aee
00597618  B9 06 00 00 00            MOV ECX,0x6
0059761D  33 C0                     XOR EAX,EAX
0059761F  8D 7D E0                  LEA EDI,[EBP + -0x20]
00597622  33 DB                     XOR EBX,EBX
00597624  F3 AB                     STOSD.REP ES:EDI
00597626  8B 8E 2B 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f2b]
0059762C  3B CB                     CMP ECX,EBX
0059762E  66 AB                     STOSW ES:EDI
00597630  74 1A                     JZ 0x0059764c
00597632  E8 53 9C E6 FF            CALL 0x0040128a
00597637  8B 86 2B 1F 00 00         MOV EAX,dword ptr [ESI + 0x1f2b]
0059763D  50                        PUSH EAX
0059763E  E8 6D 6C 19 00            CALL 0x0072e2b0
00597643  83 C4 04                  ADD ESP,0x4
00597646  89 9E 2B 1F 00 00         MOV dword ptr [ESI + 0x1f2b],EBX
LAB_0059764c:
0059764C  8B 8E 23 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f23]
00597652  3B CB                     CMP ECX,EBX
00597654  74 1A                     JZ 0x00597670
00597656  E8 2F 9C E6 FF            CALL 0x0040128a
0059765B  8B 8E 23 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f23]
00597661  51                        PUSH ECX
00597662  E8 49 6C 19 00            CALL 0x0072e2b0
00597667  83 C4 04                  ADD ESP,0x4
0059766A  89 9E 23 1F 00 00         MOV dword ptr [ESI + 0x1f23],EBX
LAB_00597670:
00597670  8B 8E 27 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f27]
00597676  3B CB                     CMP ECX,EBX
00597678  74 1A                     JZ 0x00597694
0059767A  E8 0B 9C E6 FF            CALL 0x0040128a
0059767F  8B 96 27 1F 00 00         MOV EDX,dword ptr [ESI + 0x1f27]
00597685  52                        PUSH EDX
00597686  E8 25 6C 19 00            CALL 0x0072e2b0
0059768B  83 C4 04                  ADD ESP,0x4
0059768E  89 9E 27 1F 00 00         MOV dword ptr [ESI + 0x1f27],EBX
LAB_00597694:
00597694  8B 8E 2F 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f2f]
0059769A  3B CB                     CMP ECX,EBX
0059769C  74 1A                     JZ 0x005976b8
0059769E  E8 E7 9B E6 FF            CALL 0x0040128a
005976A3  8B 86 2F 1F 00 00         MOV EAX,dword ptr [ESI + 0x1f2f]
005976A9  50                        PUSH EAX
005976AA  E8 01 6C 19 00            CALL 0x0072e2b0
005976AF  83 C4 04                  ADD ESP,0x4
005976B2  89 9E 2F 1F 00 00         MOV dword ptr [ESI + 0x1f2f],EBX
LAB_005976b8:
005976B8  33 C0                     XOR EAX,EAX
005976BA  8A 46 65                  MOV AL,byte ptr [ESI + 0x65]
005976BD  83 C0 FA                  ADD EAX,-0x6
005976C0  83 F8 04                  CMP EAX,0x4
005976C3  77 6D                     JA 0x00597732
switchD_005976c5::switchD:
005976C5  FF 24 85 94 7B 59 00      JMP dword ptr [EAX*0x4 + 0x597b94]
switchD_005976c5::caseD_6:
005976CC  8B 8E BC 1A 00 00         MOV ECX,dword ptr [ESI + 0x1abc]
005976D2  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005976D8  51                        PUSH ECX
005976D9  52                        PUSH EDX
005976DA  E8 51 BD 11 00            CALL 0x006b3430
005976DF  B9 90 2A 80 00            MOV ECX,0x802a90
005976E4  C6 86 5F 1A 00 00 01      MOV byte ptr [ESI + 0x1a5f],0x1
005976EB  E8 87 AE E6 FF            CALL 0x00402577
005976F0  66 C7 45 EC 01 00         MOV word ptr [EBP + -0x14],0x1
005976F6  EB 3A                     JMP 0x00597732
switchD_005976c5::caseD_7:
005976F8  8A 86 5F 1A 00 00         MOV AL,byte ptr [ESI + 0x1a5f]
005976FE  3C 03                     CMP AL,0x3
00597700  74 17                     JZ 0x00597719
00597702  3C 09                     CMP AL,0x9
00597704  74 13                     JZ 0x00597719
00597706  8B 86 BC 1A 00 00         MOV EAX,dword ptr [ESI + 0x1abc]
0059770C  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
00597712  50                        PUSH EAX
00597713  51                        PUSH ECX
00597714  E8 17 BD 11 00            CALL 0x006b3430
switchD_005976c5::caseD_8:
00597719  B8 01 00 00 00            MOV EAX,0x1
0059771E  66 89 45 EC               MOV word ptr [EBP + -0x14],AX
00597722  66 89 45 EA               MOV word ptr [EBP + -0x16],AX
00597726  66 89 45 E4               MOV word ptr [EBP + -0x1c],AX
0059772A  66 89 45 E2               MOV word ptr [EBP + -0x1e],AX
0059772E  66 89 45 E0               MOV word ptr [EBP + -0x20],AX
switchD_005976c5::caseD_9:
00597732  53                        PUSH EBX
00597733  8B CE                     MOV ECX,ESI
00597735  C6 46 65 01               MOV byte ptr [ESI + 0x65],0x1
00597739  E8 0F C4 E6 FF            CALL 0x00403b4d
0059773E  8B CE                     MOV ECX,ESI
00597740  E8 58 B0 E6 FF            CALL 0x0040279d
00597745  33 C0                     XOR EAX,EAX
00597747  8A 86 5F 1A 00 00         MOV AL,byte ptr [ESI + 0x1a5f]
0059774D  83 C0 FA                  ADD EAX,-0x6
00597750  83 F8 04                  CMP EAX,0x4
00597753  0F 87 8E 01 00 00         JA 0x005978e7
switchD_00597759::switchD:
00597759  FF 24 85 A8 7B 59 00      JMP dword ptr [EAX*0x4 + 0x597ba8]
switchD_00597759::caseD_6:
00597760  8A 86 62 1A 00 00         MOV AL,byte ptr [ESI + 0x1a62]
00597766  8B 56 61                  MOV EDX,dword ptr [ESI + 0x61]
00597769  84 C0                     TEST AL,AL
0059776B  89 96 B2 1E 00 00         MOV dword ptr [ESI + 0x1eb2],EDX
00597771  74 2D                     JZ 0x005977a0
00597773  A1 18 76 80 00            MOV EAX,[0x00807618]
00597778  53                        PUSH EBX
00597779  68 A0 16 80 00            PUSH 0x8016a0
0059777E  50                        PUSH EAX
0059777F  68 4D 25 00 00            PUSH 0x254d
00597784  E8 B7 89 11 00            CALL 0x006b0140
00597789  50                        PUSH EAX
0059778A  B9 90 2A 80 00            MOV ECX,0x802a90
0059778F  E8 AE DD E6 FF            CALL 0x00405542
00597794  C6 86 62 1A 00 00 00      MOV byte ptr [ESI + 0x1a62],0x0
0059779B  E9 47 01 00 00            JMP 0x005978e7
LAB_005977a0:
005977A0  B9 90 2A 80 00            MOV ECX,0x802a90
005977A5  E8 AD C8 E6 FF            CALL 0x00404057
005977AA  E9 38 01 00 00            JMP 0x005978e7
switchD_00597759::caseD_8:
005977AF  8B 8E C2 1E 00 00         MOV ECX,dword ptr [ESI + 0x1ec2]
005977B5  53                        PUSH EBX
005977B6  51                        PUSH ECX
005977B7  B9 90 2A 80 00            MOV ECX,0x802a90
005977BC  FF 15 1C C0 85 00         CALL dword ptr [0x0085c01c]
005977C2  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
005977C8  89 86 63 1A 00 00         MOV dword ptr [ESI + 0x1a63],EAX
005977CE  8B 3D 30 2A 80 00         MOV EDI,dword ptr [0x00802a30]
005977D4  3B FB                     CMP EDI,EBX
005977D6  0F 84 0B 01 00 00         JZ 0x005978e7
005977DC  E9 BA 00 00 00            JMP 0x0059789b
switchD_00597759::caseD_a:
005977E1  8B 86 0C 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b0c]
005977E7  3B C3                     CMP EAX,EBX
005977E9  0F 84 F8 00 00 00         JZ 0x005978e7
005977EF  8D 4D A0                  LEA ECX,[EBP + -0x60]
005977F2  C7 45 A0 A8 C1 7C 00      MOV dword ptr [EBP + -0x60],0x7cc1a8
005977F9  51                        PUSH ECX
005977FA  6A 0F                     PUSH 0xf
005977FC  50                        PUSH EAX
005977FD  B9 90 2A 80 00            MOV ECX,0x802a90
00597802  C7 45 A4 98 C1 7C 00      MOV dword ptr [EBP + -0x5c],0x7cc198
00597809  C7 45 A8 84 C1 7C 00      MOV dword ptr [EBP + -0x58],0x7cc184
00597810  C7 45 AC 6C C1 7C 00      MOV dword ptr [EBP + -0x54],0x7cc16c
00597817  C7 45 B0 64 C1 7C 00      MOV dword ptr [EBP + -0x50],0x7cc164
0059781E  C7 45 B4 58 C1 7C 00      MOV dword ptr [EBP + -0x4c],0x7cc158
00597825  C7 45 B8 4C C1 7C 00      MOV dword ptr [EBP + -0x48],0x7cc14c
0059782C  C7 45 BC 3C C1 7C 00      MOV dword ptr [EBP + -0x44],0x7cc13c
00597833  C7 45 C0 34 C1 7C 00      MOV dword ptr [EBP + -0x40],0x7cc134
0059783A  C7 45 C4 28 C1 7C 00      MOV dword ptr [EBP + -0x3c],0x7cc128
00597841  C7 45 C8 1C C1 7C 00      MOV dword ptr [EBP + -0x38],0x7cc11c
00597848  C7 45 CC 0C C1 7C 00      MOV dword ptr [EBP + -0x34],0x7cc10c
0059784F  C7 45 D0 04 C1 7C 00      MOV dword ptr [EBP + -0x30],0x7cc104
00597856  C7 45 D4 F8 C0 7C 00      MOV dword ptr [EBP + -0x2c],0x7cc0f8
0059785D  C7 45 D8 E8 C0 7C 00      MOV dword ptr [EBP + -0x28],0x7cc0e8
00597864  FF 15 20 C0 85 00         CALL dword ptr [0x0085c020]
0059786A  8B 3D 30 2A 80 00         MOV EDI,dword ptr [0x00802a30]
00597870  3B FB                     CMP EDI,EBX
00597872  74 73                     JZ 0x005978e7
00597874  EB 25                     JMP 0x0059789b
switchD_00597759::caseD_9:
00597876  A1 48 31 80 00            MOV EAX,[0x00803148]
0059787B  8B 0D 40 31 80 00         MOV ECX,dword ptr [0x00803140]
00597881  6A 0F                     PUSH 0xf
00597883  50                        PUSH EAX
00597884  53                        PUSH EBX
00597885  51                        PUSH ECX
00597886  B9 90 2A 80 00            MOV ECX,0x802a90
0059788B  FF 15 24 C0 85 00         CALL dword ptr [0x0085c024]
00597891  8B 3D 30 2A 80 00         MOV EDI,dword ptr [0x00802a30]
00597897  3B FB                     CMP EDI,EBX
00597899  74 4C                     JZ 0x005978e7
LAB_0059789b:
0059789B  C6 87 93 04 00 00 05      MOV byte ptr [EDI + 0x493],0x5
005978A2  66 C7 87 94 04 00 00 FF FF  MOV word ptr [EDI + 0x494],0xffff
005978AB  8B 97 C9 00 00 00         MOV EDX,dword ptr [EDI + 0xc9]
005978B1  8B 87 C5 00 00 00         MOV EAX,dword ptr [EDI + 0xc5]
005978B7  52                        PUSH EDX
005978B8  50                        PUSH EAX
005978B9  53                        PUSH EBX
005978BA  8B CF                     MOV ECX,EDI
005978BC  E8 BD D7 E6 FF            CALL 0x0040507e
005978C1  8B 8F C9 00 00 00         MOV ECX,dword ptr [EDI + 0xc9]
005978C7  8B 97 C5 00 00 00         MOV EDX,dword ptr [EDI + 0xc5]
005978CD  51                        PUSH ECX
005978CE  52                        PUSH EDX
005978CF  8B CF                     MOV ECX,EDI
005978D1  E8 48 AB E6 FF            CALL 0x0040241e
005978D6  C6 87 D2 00 00 00 00      MOV byte ptr [EDI + 0xd2],0x0
005978DD  C7 87 DF 04 00 00 FF FF FF FF  MOV dword ptr [EDI + 0x4df],0xffffffff
switchD_00597759::caseD_7:
005978E7  8B 86 5B 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a5b]
005978ED  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005978F3  3B CB                     CMP ECX,EBX
005978F5  0F 84 F3 01 00 00         JZ 0x00597aee
005978FB  8D 55 E0                  LEA EDX,[EBP + -0x20]
005978FE  52                        PUSH EDX
005978FF  E8 4D D2 E6 FF            CALL 0x00404b51
00597904  8B 8D 5C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff5c]
0059790A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00597910  5F                        POP EDI
00597911  5E                        POP ESI
00597912  5B                        POP EBX
00597913  8B E5                     MOV ESP,EBP
00597915  5D                        POP EBP
00597916  C3                        RET
switchD_00597187::caseD_1:
00597917  B9 90 2A 80 00            MOV ECX,0x802a90
0059791C  FF 15 5C C0 85 00         CALL dword ptr [0x0085c05c]
00597922  33 C0                     XOR EAX,EAX
00597924  8A 86 5F 1A 00 00         MOV AL,byte ptr [ESI + 0x1a5f]
0059792A  83 E8 06                  SUB EAX,0x6
0059792D  0F 84 9D 00 00 00         JZ 0x005979d0
00597933  83 E8 02                  SUB EAX,0x2
00597936  0F 85 15 01 00 00         JNZ 0x00597a51
0059793C  8B 46 61                  MOV EAX,dword ptr [ESI + 0x61]
0059793F  8B 96 63 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a63]
00597945  2B C2                     SUB EAX,EDX
00597947  3D 60 EA 00 00            CMP EAX,0xea60
0059794C  0F 86 FF 00 00 00         JBE 0x00597a51
00597952  8B 8E C2 1E 00 00         MOV ECX,dword ptr [ESI + 0x1ec2]
00597958  53                        PUSH EBX
00597959  51                        PUSH ECX
0059795A  B9 90 2A 80 00            MOV ECX,0x802a90
0059795F  FF 15 1C C0 85 00         CALL dword ptr [0x0085c01c]
00597965  8B 56 61                  MOV EDX,dword ptr [ESI + 0x61]
00597968  89 96 63 1A 00 00         MOV dword ptr [ESI + 0x1a63],EDX
0059796E  8B 3D 30 2A 80 00         MOV EDI,dword ptr [0x00802a30]
00597974  3B FB                     CMP EDI,EBX
00597976  0F 84 D5 00 00 00         JZ 0x00597a51
0059797C  8B 87 C9 00 00 00         MOV EAX,dword ptr [EDI + 0xc9]
00597982  8B 8F C5 00 00 00         MOV ECX,dword ptr [EDI + 0xc5]
00597988  50                        PUSH EAX
00597989  51                        PUSH ECX
0059798A  6A 00                     PUSH 0x0
0059798C  8B CF                     MOV ECX,EDI
0059798E  C6 87 93 04 00 00 05      MOV byte ptr [EDI + 0x493],0x5
00597995  66 C7 87 94 04 00 00 FF FF  MOV word ptr [EDI + 0x494],0xffff
0059799E  E8 DB D6 E6 FF            CALL 0x0040507e
005979A3  8B 97 C9 00 00 00         MOV EDX,dword ptr [EDI + 0xc9]
005979A9  8B 87 C5 00 00 00         MOV EAX,dword ptr [EDI + 0xc5]
005979AF  52                        PUSH EDX
005979B0  50                        PUSH EAX
005979B1  8B CF                     MOV ECX,EDI
005979B3  E8 66 AA E6 FF            CALL 0x0040241e
005979B8  C6 87 D2 00 00 00 00      MOV byte ptr [EDI + 0xd2],0x0
005979BF  C7 87 DF 04 00 00 FF FF FF FF  MOV dword ptr [EDI + 0x4df],0xffffffff
005979C9  33 DB                     XOR EBX,EBX
005979CB  E9 81 00 00 00            JMP 0x00597a51
LAB_005979d0:
005979D0  8B 4E 61                  MOV ECX,dword ptr [ESI + 0x61]
005979D3  8B 96 B2 1E 00 00         MOV EDX,dword ptr [ESI + 0x1eb2]
005979D9  2B CA                     SUB ECX,EDX
005979DB  81 F9 98 3A 00 00         CMP ECX,0x3a98
005979E1  76 6E                     JBE 0x00597a51
005979E3  8A 86 60 1A 00 00         MOV AL,byte ptr [ESI + 0x1a60]
005979E9  84 C0                     TEST AL,AL
005979EB  75 5B                     JNZ 0x00597a48
005979ED  8B 8E A6 1E 00 00         MOV ECX,dword ptr [ESI + 0x1ea6]
005979F3  3B CB                     CMP ECX,EBX
005979F5  74 51                     JZ 0x00597a48
005979F7  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
005979FA  3B F8                     CMP EDI,EAX
005979FC  73 3B                     JNC 0x00597a39
005979FE  8B 1D 84 C0 85 00         MOV EBX,dword ptr [0x0085c084]
00597A04  73 0D                     JNC 0x00597a13
LAB_00597a06:
00597A06  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00597A09  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
00597A0C  0F AF C7                  IMUL EAX,EDI
00597A0F  03 C2                     ADD EAX,EDX
00597A11  EB 02                     JMP 0x00597a15
LAB_00597a13:
00597A13  33 C0                     XOR EAX,EAX
LAB_00597a15:
00597A15  85 C0                     TEST EAX,EAX
00597A17  74 12                     JZ 0x00597a2b
00597A19  8B 50 21                  MOV EDX,dword ptr [EAX + 0x21]
00597A1C  8B 86 AE 1E 00 00         MOV EAX,dword ptr [ESI + 0x1eae]
00597A22  52                        PUSH EDX
00597A23  50                        PUSH EAX
00597A24  B9 90 2A 80 00            MOV ECX,0x802a90
00597A29  FF D3                     CALL EBX
LAB_00597a2b:
00597A2B  8B 8E A6 1E 00 00         MOV ECX,dword ptr [ESI + 0x1ea6]
00597A31  47                        INC EDI
00597A32  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00597A35  3B F8                     CMP EDI,EAX
00597A37  72 CD                     JC 0x00597a06
LAB_00597a39:
00597A39  8B 86 AE 1E 00 00         MOV EAX,dword ptr [ESI + 0x1eae]
00597A3F  40                        INC EAX
00597A40  33 DB                     XOR EBX,EBX
00597A42  89 86 AE 1E 00 00         MOV dword ptr [ESI + 0x1eae],EAX
LAB_00597a48:
00597A48  8B 4E 61                  MOV ECX,dword ptr [ESI + 0x61]
00597A4B  89 8E B2 1E 00 00         MOV dword ptr [ESI + 0x1eb2],ECX
LAB_00597a51:
00597A51  8B 8E 97 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a97]
00597A57  3B CB                     CMP ECX,EBX
00597A59  0F 84 8F 00 00 00         JZ 0x00597aee
00597A5F  8B 86 9F 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a9f]
00597A65  3B C3                     CMP EAX,EBX
00597A67  0F 84 81 00 00 00         JZ 0x00597aee
00597A6D  8B 56 61                  MOV EDX,dword ptr [ESI + 0x61]
00597A70  8B BE A7 1A 00 00         MOV EDI,dword ptr [ESI + 0x1aa7]
00597A76  2B D7                     SUB EDX,EDI
00597A78  8B BE A3 1A 00 00         MOV EDI,dword ptr [ESI + 0x1aa3]
00597A7E  3B D7                     CMP EDX,EDI
00597A80  7E 6C                     JLE 0x00597aee
00597A82  53                        PUSH EBX
00597A83  51                        PUSH ECX
00597A84  50                        PUSH EAX
00597A85  E8 E6 F5 12 00            CALL 0x006c7070
00597A8A  8B 86 9F 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a9f]
00597A90  50                        PUSH EAX
00597A91  E8 6A F5 12 00            CALL 0x006c7000
00597A96  3B C3                     CMP EAX,EBX
00597A98  89 86 A3 1A 00 00         MOV dword ptr [ESI + 0x1aa3],EAX
00597A9E  7E 0B                     JLE 0x00597aab
00597AA0  8B 4E 61                  MOV ECX,dword ptr [ESI + 0x61]
00597AA3  89 8E A7 1A 00 00         MOV dword ptr [ESI + 0x1aa7],ECX
00597AA9  EB 31                     JMP 0x00597adc
LAB_00597aab:
00597AAB  83 F8 FF                  CMP EAX,-0x1
00597AAE  75 0E                     JNZ 0x00597abe
00597AB0  8B 96 9F 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a9f]
00597AB6  52                        PUSH EDX
00597AB7  E8 74 F5 12 00            CALL 0x006c7030
00597ABC  EB 1E                     JMP 0x00597adc
LAB_00597abe:
00597ABE  8B 86 9F 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a9f]
00597AC4  50                        PUSH EAX
00597AC5  E8 F6 F4 12 00            CALL 0x006c6fc0
00597ACA  8D 8E 9B 1A 00 00         LEA ECX,[ESI + 0x1a9b]
00597AD0  89 9E 9F 1A 00 00         MOV dword ptr [ESI + 0x1a9f],EBX
00597AD6  51                        PUSH ECX
00597AD7  E8 84 35 11 00            CALL 0x006ab060
LAB_00597adc:
00597ADC  8B 96 8F 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a8f]
00597AE2  A1 A8 75 80 00            MOV EAX,[0x008075a8]
00597AE7  52                        PUSH EDX
00597AE8  50                        PUSH EAX
00597AE9  E8 E2 BA 11 00            CALL 0x006b35d0
switchD_00597187::caseD_2:
00597AEE  8B 8D 5C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff5c]
00597AF4  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00597AFA  5F                        POP EDI
00597AFB  5E                        POP ESI
00597AFC  5B                        POP EBX
00597AFD  8B E5                     MOV ESP,EBP
00597AFF  5D                        POP EBP
00597B00  C3                        RET
LAB_00597b01:
00597B01  8B 95 5C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff5c]
00597B07  68 D4 C0 7C 00            PUSH 0x7cc0d4
00597B0C  68 CC 4C 7A 00            PUSH 0x7a4ccc
00597B11  56                        PUSH ESI
00597B12  53                        PUSH EBX
00597B13  68 84 02 00 00            PUSH 0x284
00597B18  68 70 BF 7C 00            PUSH 0x7cbf70
00597B1D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00597B23  E8 A8 59 11 00            CALL 0x006ad4d0
00597B28  83 C4 18                  ADD ESP,0x18
00597B2B  85 C0                     TEST EAX,EAX
00597B2D  74 01                     JZ 0x00597b30
00597B2F  CC                        INT3
LAB_00597b30:
00597B30  68 84 02 00 00            PUSH 0x284
00597B35  68 70 BF 7C 00            PUSH 0x7cbf70
00597B3A  53                        PUSH EBX
00597B3B  56                        PUSH ESI
00597B3C  E8 FF E2 10 00            CALL 0x006a5e40
00597B41  5F                        POP EDI
00597B42  5E                        POP ESI
00597B43  5B                        POP EBX
00597B44  8B E5                     MOV ESP,EBP
00597B46  5D                        POP EBP
00597B47  C3                        RET
