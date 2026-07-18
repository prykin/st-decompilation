FUN_004b9fa0:
004B9FA0  55                        PUSH EBP
004B9FA1  8B EC                     MOV EBP,ESP
004B9FA3  81 EC D8 06 00 00         SUB ESP,0x6d8
004B9FA9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004B9FAE  53                        PUSH EBX
004B9FAF  56                        PUSH ESI
004B9FB0  89 4D 84                  MOV dword ptr [EBP + -0x7c],ECX
004B9FB3  57                        PUSH EDI
004B9FB4  8D 95 44 FF FF FF         LEA EDX,[EBP + 0xffffff44]
004B9FBA  8D 8D 40 FF FF FF         LEA ECX,[EBP + 0xffffff40]
004B9FC0  6A 00                     PUSH 0x0
004B9FC2  52                        PUSH EDX
004B9FC3  89 85 40 FF FF FF         MOV dword ptr [EBP + 0xffffff40],EAX
004B9FC9  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004B9FCF  E8 1C 38 27 00            CALL 0x0072d7f0
004B9FD4  8B F8                     MOV EDI,EAX
004B9FD6  83 C4 08                  ADD ESP,0x8
004B9FD9  85 FF                     TEST EDI,EDI
004B9FDB  0F 85 A7 30 00 00         JNZ 0x004bd088
004B9FE1  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
004B9FE4  8B 5D 84                  MOV EBX,dword ptr [EBP + -0x7c]
004B9FE7  56                        PUSH ESI
004B9FE8  8B CB                     MOV ECX,EBX
004B9FEA  E8 18 AF F4 FF            CALL 0x00404f07
004B9FEF  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
004B9FF2  3D 11 01 00 00            CMP EAX,0x111
004B9FF7  0F 87 25 1A 00 00         JA 0x004bba22
004B9FFD  0F 84 93 19 00 00         JZ 0x004bb996
004BA003  3D 08 01 00 00            CMP EAX,0x108
004BA008  0F 87 10 13 00 00         JA 0x004bb31e
004BA00E  0F 84 13 11 00 00         JZ 0x004bb127
004BA014  2B C7                     SUB EAX,EDI
004BA016  0F 84 A5 0D 00 00         JZ 0x004badc1
004BA01C  83 E8 02                  SUB EAX,0x2
004BA01F  0F 84 C5 00 00 00         JZ 0x004ba0ea
004BA025  48                        DEC EAX
004BA026  0F 85 46 30 00 00         JNZ 0x004bd072
004BA02C  8B CB                     MOV ECX,EBX
004BA02E  E8 5F 8D F4 FF            CALL 0x00402d92
004BA033  8B 83 58 04 00 00         MOV EAX,dword ptr [EBX + 0x458]
004BA039  8B CB                     MOV ECX,EBX
004BA03B  50                        PUSH EAX
004BA03C  E8 3B 80 F4 FF            CALL 0x0040207c
004BA041  8B CB                     MOV ECX,EBX
004BA043  E8 E1 A5 F4 FF            CALL 0x00404629
004BA048  66 8B 8B B8 05 00 00      MOV CX,word ptr [EBX + 0x5b8]
004BA04F  66 8B 93 B4 05 00 00      MOV DX,word ptr [EBX + 0x5b4]
004BA056  66 8B 83 B0 05 00 00      MOV AX,word ptr [EBX + 0x5b0]
004BA05D  51                        PUSH ECX
004BA05E  52                        PUSH EDX
004BA05F  50                        PUSH EAX
004BA060  8B CB                     MOV ECX,EBX
004BA062  E8 30 92 F4 FF            CALL 0x00403297
004BA067  8B CB                     MOV ECX,EBX
004BA069  E8 5E A8 F4 FF            CALL 0x004048cc
004BA06E  8B CB                     MOV ECX,EBX
004BA070  E8 C8 7D F4 FF            CALL 0x00401e3d
004BA075  8B CB                     MOV ECX,EBX
004BA077  E8 C2 72 F4 FF            CALL 0x0040133e
004BA07C  8B CB                     MOV ECX,EBX
004BA07E  E8 D0 AD F4 FF            CALL 0x00404e53
004BA083  8B CB                     MOV ECX,EBX
004BA085  E8 E8 A2 F4 FF            CALL 0x00404372
004BA08A  8B CB                     MOV ECX,EBX
004BA08C  E8 94 B3 F4 FF            CALL 0x00405425
004BA091  8B 8B 35 02 00 00         MOV ECX,dword ptr [EBX + 0x235]
004BA097  39 3C 8D 10 1A 79 00      CMP dword ptr [ECX*0x4 + 0x791a10],EDI
004BA09E  74 07                     JZ 0x004ba0a7
004BA0A0  8B CB                     MOV ECX,EBX
004BA0A2  E8 11 A8 F4 FF            CALL 0x004048b8
LAB_004ba0a7:
004BA0A7  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
004BA0AD  E8 23 81 F4 FF            CALL 0x004021d5
004BA0B2  8B 53 10                  MOV EDX,dword ptr [EBX + 0x10]
004BA0B5  8B 4B 24                  MOV ECX,dword ptr [EBX + 0x24]
004BA0B8  33 C0                     XOR EAX,EAX
004BA0BA  8A 82 2D 11 00 00         MOV AL,byte ptr [EDX + 0x112d]
004BA0C0  3B C8                     CMP ECX,EAX
004BA0C2  0F 85 AA 2F 00 00         JNZ 0x004bd072
004BA0C8  51                        PUSH ECX
004BA0C9  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004BA0CF  E8 B9 AA F4 FF            CALL 0x00404b8d
004BA0D4  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BA0DA  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BA0DF  33 C0                     XOR EAX,EAX
004BA0E1  5F                        POP EDI
004BA0E2  5E                        POP ESI
004BA0E3  5B                        POP EBX
004BA0E4  8B E5                     MOV ESP,EBP
004BA0E6  5D                        POP EBP
004BA0E7  C2 04 00                  RET 0x4
LAB_004ba0ea:
004BA0EA  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
004BA0ED  3B DF                     CMP EBX,EDI
004BA0EF  74 08                     JZ 0x004ba0f9
004BA0F1  8D BB AC 05 00 00         LEA EDI,[EBX + 0x5ac]
004BA0F7  EB 02                     JMP 0x004ba0fb
LAB_004ba0f9:
004BA0F9  33 FF                     XOR EDI,EDI
LAB_004ba0fb:
004BA0FB  8D 70 14                  LEA ESI,[EAX + 0x14]
004BA0FE  B9 10 00 00 00            MOV ECX,0x10
004BA103  F3 A5                     MOVSD.REP ES:EDI,ESI
004BA105  66 A5                     MOVSW ES:EDI,ESI
004BA107  A4                        MOVSB ES:EDI,ESI
004BA108  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
004BA10B  89 93 31 02 00 00         MOV dword ptr [EBX + 0x231],EDX
004BA111  8B 83 AC 05 00 00         MOV EAX,dword ptr [EBX + 0x5ac]
004BA117  83 E8 32                  SUB EAX,0x32
004BA11A  89 83 35 02 00 00         MOV dword ptr [EBX + 0x235],EAX
004BA120  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
004BA123  51                        PUSH ECX
004BA124  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004BA12A  E8 88 A8 F4 FF            CALL 0x004049b7
004BA12F  25 FF 00 00 00            AND EAX,0xff
004BA134  48                        DEC EAX
004BA135  89 83 39 02 00 00         MOV dword ptr [EBX + 0x239],EAX
004BA13B  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
004BA13E  89 93 3D 02 00 00         MOV dword ptr [EBX + 0x23d],EDX
004BA144  8B 83 35 02 00 00         MOV EAX,dword ptr [EBX + 0x235]
004BA14A  8B 04 85 38 1F 79 00      MOV EAX,dword ptr [EAX*0x4 + 0x791f38]
004BA151  83 F8 02                  CMP EAX,0x2
004BA154  75 0C                     JNZ 0x004ba162
004BA156  C7 83 FB 05 00 00 60 CA 7A 00  MOV dword ptr [EBX + 0x5fb],0x7aca60
004BA160  EB 1B                     JMP 0x004ba17d
LAB_004ba162:
004BA162  83 F8 01                  CMP EAX,0x1
004BA165  75 0C                     JNZ 0x004ba173
004BA167  C7 83 FB 05 00 00 00 CE 7A 00  MOV dword ptr [EBX + 0x5fb],0x7ace00
004BA171  EB 0A                     JMP 0x004ba17d
LAB_004ba173:
004BA173  C7 83 FB 05 00 00 88 C9 7A 00  MOV dword ptr [EBX + 0x5fb],0x7ac988
LAB_004ba17d:
004BA17D  33 F6                     XOR ESI,ESI
004BA17F  89 B3 B4 04 00 00         MOV dword ptr [EBX + 0x4b4],ESI
004BA185  89 B3 B0 04 00 00         MOV dword ptr [EBX + 0x4b0],ESI
004BA18B  8B 8B 35 02 00 00         MOV ECX,dword ptr [EBX + 0x235]
004BA191  8B 14 8D E8 14 79 00      MOV EDX,dword ptr [ECX*0x4 + 0x7914e8]
004BA198  89 93 55 02 00 00         MOV dword ptr [EBX + 0x255],EDX
004BA19E  89 B3 54 04 00 00         MOV dword ptr [EBX + 0x454],ESI
004BA1A4  C7 83 58 04 00 00 FF 00 00 00  MOV dword ptr [EBX + 0x458],0xff
004BA1AE  8B 43 2C                  MOV EAX,dword ptr [EBX + 0x2c]
004BA1B1  2B C6                     SUB EAX,ESI
004BA1B3  74 4A                     JZ 0x004ba1ff
004BA1B5  48                        DEC EAX
004BA1B6  74 1D                     JZ 0x004ba1d5
004BA1B8  83 C8 FF                  OR EAX,0xffffffff
004BA1BB  89 83 17 06 00 00         MOV dword ptr [EBX + 0x617],EAX
004BA1C1  89 83 13 06 00 00         MOV dword ptr [EBX + 0x613],EAX
004BA1C7  89 83 0F 06 00 00         MOV dword ptr [EBX + 0x60f],EAX
004BA1CD  89 83 0B 06 00 00         MOV dword ptr [EBX + 0x60b],EAX
004BA1D3  EB 52                     JMP 0x004ba227
LAB_004ba1d5:
004BA1D5  C7 83 0B 06 00 00 F0 00 00 00  MOV dword ptr [EBX + 0x60b],0xf0
004BA1DF  C7 83 0F 06 00 00 BE 00 00 00  MOV dword ptr [EBX + 0x60f],0xbe
004BA1E9  C7 83 13 06 00 00 78 00 00 00  MOV dword ptr [EBX + 0x613],0x78
004BA1F3  C7 83 17 06 00 00 56 00 00 00  MOV dword ptr [EBX + 0x617],0x56
004BA1FD  EB 28                     JMP 0x004ba227
LAB_004ba1ff:
004BA1FF  C7 83 0B 06 00 00 B4 00 00 00  MOV dword ptr [EBX + 0x60b],0xb4
004BA209  C7 83 0F 06 00 00 8C 00 00 00  MOV dword ptr [EBX + 0x60f],0x8c
004BA213  C7 83 13 06 00 00 5A 00 00 00  MOV dword ptr [EBX + 0x613],0x5a
004BA21D  C7 83 17 06 00 00 45 00 00 00  MOV dword ptr [EBX + 0x617],0x45
LAB_004ba227:
004BA227  56                        PUSH ESI
004BA228  8B CB                     MOV ECX,EBX
004BA22A  E8 2E 89 F4 FF            CALL 0x00402b5d
004BA22F  66 8B 83 B8 05 00 00      MOV AX,word ptr [EBX + 0x5b8]
004BA236  66 8B 8B B4 05 00 00      MOV CX,word ptr [EBX + 0x5b4]
004BA23D  66 8B 93 B0 05 00 00      MOV DX,word ptr [EBX + 0x5b0]
004BA244  6A 01                     PUSH 0x1
004BA246  50                        PUSH EAX
004BA247  51                        PUSH ECX
004BA248  52                        PUSH EDX
004BA249  8B CB                     MOV ECX,EBX
004BA24B  E8 0F 87 F4 FF            CALL 0x0040295f
004BA250  85 C0                     TEST EAX,EAX
004BA252  74 17                     JZ 0x004ba26b
004BA254  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004BA259  68 90 02 00 00            PUSH 0x290
004BA25E  68 20 C8 7A 00            PUSH 0x7ac820
004BA263  50                        PUSH EAX
004BA264  6A FB                     PUSH -0x5
004BA266  E8 D5 BB 1E 00            CALL 0x006a5e40
LAB_004ba26b:
004BA26B  66 8B 8B B8 05 00 00      MOV CX,word ptr [EBX + 0x5b8]
004BA272  66 8B 93 B4 05 00 00      MOV DX,word ptr [EBX + 0x5b4]
004BA279  66 8B 83 B0 05 00 00      MOV AX,word ptr [EBX + 0x5b0]
004BA280  51                        PUSH ECX
004BA281  52                        PUSH EDX
004BA282  50                        PUSH EAX
004BA283  8B CB                     MOV ECX,EBX
004BA285  E8 04 85 F4 FF            CALL 0x0040278e
004BA28A  8B CB                     MOV ECX,EBX
004BA28C  E8 A5 87 F4 FF            CALL 0x00402a36
004BA291  8B 83 31 02 00 00         MOV EAX,dword ptr [EBX + 0x231]
004BA297  83 F8 03                  CMP EAX,0x3
004BA29A  0F 87 DA 0A 00 00         JA 0x004bad7a
switchD_004ba2a0::switchD:
004BA2A0  FF 24 85 D8 D0 4B 00      JMP dword ptr [EAX*0x4 + 0x4bd0d8]
switchD_004ba2a0::caseD_0:
004BA2A7  8B 83 DB 05 00 00         MOV EAX,dword ptr [EBX + 0x5db]
004BA2AD  B9 64 00 00 00            MOV ECX,0x64
004BA2B2  3B C1                     CMP EAX,ECX
004BA2B4  7F 04                     JG 0x004ba2ba
004BA2B6  3B C6                     CMP EAX,ESI
004BA2B8  7D 06                     JGE 0x004ba2c0
LAB_004ba2ba:
004BA2BA  89 8B DB 05 00 00         MOV dword ptr [EBX + 0x5db],ECX
LAB_004ba2c0:
004BA2C0  8B 83 D7 05 00 00         MOV EAX,dword ptr [EBX + 0x5d7]
004BA2C6  3B C1                     CMP EAX,ECX
004BA2C8  7F 04                     JG 0x004ba2ce
004BA2CA  3B C6                     CMP EAX,ESI
004BA2CC  7D 06                     JGE 0x004ba2d4
LAB_004ba2ce:
004BA2CE  89 8B D7 05 00 00         MOV dword ptr [EBX + 0x5d7],ECX
LAB_004ba2d4:
004BA2D4  8A 8B 3D 02 00 00         MOV CL,byte ptr [EBX + 0x23d]
004BA2DA  51                        PUSH ECX
004BA2DB  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004BA2E1  E8 D1 A6 F4 FF            CALL 0x004049b7
004BA2E6  8A D0                     MOV DL,AL
004BA2E8  8B 83 35 02 00 00         MOV EAX,dword ptr [EBX + 0x235]
004BA2EE  81 E2 FF 00 00 00         AND EDX,0xff
004BA2F4  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004BA2F7  03 D0                     ADD EDX,EAX
004BA2F9  B8 1F 85 EB 51            MOV EAX,0x51eb851f
004BA2FE  8B 0C 95 78 41 7E 00      MOV ECX,dword ptr [EDX*0x4 + 0x7e4178]
004BA305  0F AF 8B D7 05 00 00      IMUL ECX,dword ptr [EBX + 0x5d7]
004BA30C  F7 E9                     IMUL ECX
004BA30E  C1 FA 05                  SAR EDX,0x5
004BA311  8B CA                     MOV ECX,EDX
004BA313  C1 E9 1F                  SHR ECX,0x1f
004BA316  03 D1                     ADD EDX,ECX
004BA318  B9 02 00 00 00            MOV ECX,0x2
004BA31D  89 93 41 02 00 00         MOV dword ptr [EBX + 0x241],EDX
004BA323  89 B3 10 04 00 00         MOV dword ptr [EBX + 0x410],ESI
004BA329  89 B3 2C 04 00 00         MOV dword ptr [EBX + 0x42c],ESI
004BA32F  89 B3 A0 04 00 00         MOV dword ptr [EBX + 0x4a0],ESI
004BA335  89 B3 C0 04 00 00         MOV dword ptr [EBX + 0x4c0],ESI
004BA33B  8B 83 AC 05 00 00         MOV EAX,dword ptr [EBX + 0x5ac]
004BA341  83 F8 4D                  CMP EAX,0x4d
004BA344  75 08                     JNZ 0x004ba34e
004BA346  39 8B D0 04 00 00         CMP dword ptr [EBX + 0x4d0],ECX
004BA34C  75 31                     JNZ 0x004ba37f
LAB_004ba34e:
004BA34E  83 F8 4C                  CMP EAX,0x4c
004BA351  75 08                     JNZ 0x004ba35b
004BA353  39 8B D0 04 00 00         CMP dword ptr [EBX + 0x4d0],ECX
004BA359  75 24                     JNZ 0x004ba37f
LAB_004ba35b:
004BA35B  83 F8 43                  CMP EAX,0x43
004BA35E  75 08                     JNZ 0x004ba368
004BA360  39 8B D0 04 00 00         CMP dword ptr [EBX + 0x4d0],ECX
004BA366  75 17                     JNZ 0x004ba37f
LAB_004ba368:
004BA368  8B 13                     MOV EDX,dword ptr [EBX]
004BA36A  8B CB                     MOV ECX,EBX
004BA36C  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004BA36F  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004BA375  50                        PUSH EAX
004BA376  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
004BA379  50                        PUSH EAX
004BA37A  E8 BA BA F4 FF            CALL 0x00405e39
LAB_004ba37f:
004BA37F  8B CB                     MOV ECX,EBX
004BA381  89 B3 59 02 00 00         MOV dword ptr [EBX + 0x259],ESI
004BA387  E8 9D 75 F4 FF            CALL 0x00401929
004BA38C  8B CB                     MOV ECX,EBX
004BA38E  E8 C3 7A F4 FF            CALL 0x00401e56
004BA393  8B CB                     MOV ECX,EBX
004BA395  E8 A6 9A F4 FF            CALL 0x00403e40
004BA39A  8B CB                     MOV ECX,EBX
004BA39C  E8 AE 77 F4 FF            CALL 0x00401b4f
004BA3A1  8B CB                     MOV ECX,EBX
004BA3A3  E8 37 6F F4 FF            CALL 0x004012df
004BA3A8  8B CB                     MOV ECX,EBX
004BA3AA  E8 85 BA F4 FF            CALL 0x00405e34
004BA3AF  8B 83 AC 05 00 00         MOV EAX,dword ptr [EBX + 0x5ac]
004BA3B5  83 C0 CE                  ADD EAX,-0x32
004BA3B8  83 F8 41                  CMP EAX,0x41
004BA3BB  0F 87 37 01 00 00         JA 0x004ba4f8
004BA3C1  33 C9                     XOR ECX,ECX
004BA3C3  8A 88 60 D1 4B 00         MOV CL,byte ptr [EAX + 0x4bd160]
switchD_004ba3c9::switchD:
004BA3C9  FF 24 8D E8 D0 4B 00      JMP dword ptr [ECX*0x4 + 0x4bd0e8]
switchD_004ba3c9::caseD_45:
004BA3D0  8B CB                     MOV ECX,EBX
004BA3D2  E8 35 74 F4 FF            CALL 0x0040180c
004BA3D7  E9 1C 01 00 00            JMP 0x004ba4f8
switchD_004ba3c9::caseD_4e:
004BA3DC  8B CB                     MOV ECX,EBX
004BA3DE  E8 EF 85 F4 FF            CALL 0x004029d2
004BA3E3  E9 10 01 00 00            JMP 0x004ba4f8
switchD_004ba3c9::caseD_72:
004BA3E8  8B CB                     MOV ECX,EBX
004BA3EA  E8 73 9B F4 FF            CALL 0x00403f62
004BA3EF  E9 04 01 00 00            JMP 0x004ba4f8
switchD_004ba3c9::caseD_38:
004BA3F4  8B CB                     MOV ECX,EBX
004BA3F6  E8 81 A4 F4 FF            CALL 0x0040487c
004BA3FB  E9 F8 00 00 00            JMP 0x004ba4f8
switchD_004ba3c9::caseD_3a:
004BA400  8B CB                     MOV ECX,EBX
004BA402  E8 55 8D F4 FF            CALL 0x0040315c
004BA407  E9 EC 00 00 00            JMP 0x004ba4f8
switchD_004ba3c9::caseD_32:
004BA40C  8B CB                     MOV ECX,EBX
004BA40E  E8 E4 79 F4 FF            CALL 0x00401df7
004BA413  E9 E0 00 00 00            JMP 0x004ba4f8
switchD_004ba3c9::caseD_54:
004BA418  8B CB                     MOV ECX,EBX
004BA41A  E8 3C 93 F4 FF            CALL 0x0040375b
switchD_004ba3c9::caseD_35:
004BA41F  8B CB                     MOV ECX,EBX
004BA421  E8 25 71 F4 FF            CALL 0x0040154b
004BA426  E9 CD 00 00 00            JMP 0x004ba4f8
switchD_004ba3c9::caseD_44:
004BA42B  8B CB                     MOV ECX,EBX
004BA42D  E8 89 AB F4 FF            CALL 0x00404fbb
004BA432  E9 C1 00 00 00            JMP 0x004ba4f8
switchD_004ba3c9::caseD_50:
004BA437  8B CB                     MOV ECX,EBX
004BA439  E8 4C 91 F4 FF            CALL 0x0040358a
004BA43E  E9 B5 00 00 00            JMP 0x004ba4f8
switchD_004ba3c9::caseD_41:
004BA443  8B CB                     MOV ECX,EBX
004BA445  E8 0A 6D F4 FF            CALL 0x00401154
004BA44A  E9 A9 00 00 00            JMP 0x004ba4f8
switchD_004ba3c9::caseD_34:
004BA44F  8B CB                     MOV ECX,EBX
004BA451  E8 12 72 F4 FF            CALL 0x00401668
004BA456  E9 9D 00 00 00            JMP 0x004ba4f8
switchD_004ba3c9::caseD_4d:
004BA45B  8B CB                     MOV ECX,EBX
004BA45D  E8 27 92 F4 FF            CALL 0x00403689
004BA462  E9 91 00 00 00            JMP 0x004ba4f8
switchD_004ba3c9::caseD_4c:
004BA467  8B CB                     MOV ECX,EBX
004BA469  E8 E8 8D F4 FF            CALL 0x00403256
004BA46E  E9 85 00 00 00            JMP 0x004ba4f8
switchD_004ba3c9::caseD_43:
004BA473  8B CB                     MOV ECX,EBX
004BA475  E8 0D 76 F4 FF            CALL 0x00401a87
004BA47A  EB 7C                     JMP 0x004ba4f8
switchD_004ba3c9::caseD_48:
004BA47C  8B CB                     MOV ECX,EBX
004BA47E  E8 5B 6F F4 FF            CALL 0x004013de
004BA483  EB 73                     JMP 0x004ba4f8
switchD_004ba3c9::caseD_33:
004BA485  8B CB                     MOV ECX,EBX
004BA487  E8 7F 8D F4 FF            CALL 0x0040320b
004BA48C  EB 6A                     JMP 0x004ba4f8
switchD_004ba3c9::caseD_36:
004BA48E  8B CB                     MOV ECX,EBX
004BA490  E8 6F 80 F4 FF            CALL 0x00402504
004BA495  EB 61                     JMP 0x004ba4f8
switchD_004ba3c9::caseD_6a:
004BA497  8B CB                     MOV ECX,EBX
004BA499  E8 19 91 F4 FF            CALL 0x004035b7
004BA49E  EB 58                     JMP 0x004ba4f8
switchD_004ba3c9::caseD_70:
004BA4A0  8B CB                     MOV ECX,EBX
004BA4A2  E8 BA 6E F4 FF            CALL 0x00401361
004BA4A7  EB 4F                     JMP 0x004ba4f8
switchD_004ba3c9::caseD_64:
004BA4A9  8B CB                     MOV ECX,EBX
004BA4AB  E8 F1 74 F4 FF            CALL 0x004019a1
004BA4B0  EB 46                     JMP 0x004ba4f8
switchD_004ba3c9::caseD_69:
004BA4B2  8B CB                     MOV ECX,EBX
004BA4B4  E8 E5 9F F4 FF            CALL 0x0040449e
004BA4B9  EB 3D                     JMP 0x004ba4f8
switchD_004ba3c9::caseD_68:
004BA4BB  8B CB                     MOV ECX,EBX
004BA4BD  E8 75 7F F4 FF            CALL 0x00402437
004BA4C2  EB 34                     JMP 0x004ba4f8
switchD_004ba3c9::caseD_53:
004BA4C4  8B CB                     MOV ECX,EBX
004BA4C6  E8 10 AE F4 FF            CALL 0x004052db
004BA4CB  EB 2B                     JMP 0x004ba4f8
switchD_004ba3c9::caseD_6e:
004BA4CD  8B CB                     MOV ECX,EBX
004BA4CF  E8 2F 95 F4 FF            CALL 0x00403a03
004BA4D4  EB 22                     JMP 0x004ba4f8
switchD_004ba3c9::caseD_37:
004BA4D6  8B CB                     MOV ECX,EBX
004BA4D8  E8 2E 74 F4 FF            CALL 0x0040190b
004BA4DD  EB 19                     JMP 0x004ba4f8
switchD_004ba3c9::caseD_6f:
004BA4DF  8B CB                     MOV ECX,EBX
004BA4E1  E8 0C 83 F4 FF            CALL 0x004027f2
004BA4E6  EB 10                     JMP 0x004ba4f8
switchD_004ba3c9::caseD_63:
004BA4E8  8B CB                     MOV ECX,EBX
004BA4EA  E8 CA 89 F4 FF            CALL 0x00402eb9
004BA4EF  EB 07                     JMP 0x004ba4f8
switchD_004ba3c9::caseD_6d:
004BA4F1  8B CB                     MOV ECX,EBX
004BA4F3  E8 48 85 F4 FF            CALL 0x00402a40
switchD_004ba3c9::caseD_3c:
004BA4F8  8B 83 BC 05 00 00         MOV EAX,dword ptr [EBX + 0x5bc]
004BA4FE  3B C6                     CMP EAX,ESI
004BA500  7C 07                     JL 0x004ba509
004BA502  66 8B D0                  MOV DX,AX
004BA505  66 89 53 30               MOV word ptr [EBX + 0x30],DX
LAB_004ba509:
004BA509  8B 93 31 02 00 00         MOV EDX,dword ptr [EBX + 0x231]
004BA50F  33 C0                     XOR EAX,EAX
004BA511  3B D6                     CMP EDX,ESI
004BA513  8B CB                     MOV ECX,EBX
004BA515  0F 94 C0                  SETZ AL
004BA518  50                        PUSH EAX
004BA519  E8 AB A6 F4 FF            CALL 0x00404bc9
004BA51E  8B 8B 35 02 00 00         MOV ECX,dword ptr [EBX + 0x235]
004BA524  39 34 8D 94 4D 79 00      CMP dword ptr [ECX*0x4 + 0x794d94],ESI
004BA52B  74 07                     JZ 0x004ba534
004BA52D  8B CB                     MOV ECX,EBX
004BA52F  E8 53 98 F4 FF            CALL 0x00403d87
LAB_004ba534:
004BA534  6A 01                     PUSH 0x1
004BA536  56                        PUSH ESI
004BA537  8B CB                     MOV ECX,EBX
004BA539  E8 6C 6B F4 FF            CALL 0x004010aa
004BA53E  39 B3 45 02 00 00         CMP dword ptr [EBX + 0x245],ESI
004BA544  75 52                     JNZ 0x004ba598
004BA546  8B 83 F5 01 00 00         MOV EAX,dword ptr [EBX + 0x1f5]
004BA54C  8B 88 0C 02 00 00         MOV ECX,dword ptr [EAX + 0x20c]
004BA552  8B B8 08 02 00 00         MOV EDI,dword ptr [EAX + 0x208]
004BA558  3B CF                     CMP ECX,EDI
004BA55A  7E 3C                     JLE 0x004ba598
004BA55C  8B 53 1C                  MOV EDX,dword ptr [EBX + 0x1c]
004BA55F  2B CF                     SUB ECX,EDI
004BA561  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
004BA567  41                        INC ECX
004BA568  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
004BA56E  33 D2                     XOR EDX,EDX
004BA570  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
004BA573  C1 E8 10                  SHR EAX,0x10
004BA576  F7 F1                     DIV ECX
004BA578  8B F2                     MOV ESI,EDX
004BA57A  03 F7                     ADD ESI,EDI
004BA57C  8D BB D5 01 00 00         LEA EDI,[EBX + 0x1d5]
004BA582  56                        PUSH ESI
004BA583  6A 0E                     PUSH 0xe
004BA585  8B CF                     MOV ECX,EDI
004BA587  E8 D8 6A F4 FF            CALL 0x00401064
004BA58C  56                        PUSH ESI
004BA58D  6A 0D                     PUSH 0xd
004BA58F  8B CF                     MOV ECX,EDI
004BA591  E8 CE 6A F4 FF            CALL 0x00401064
004BA596  33 F6                     XOR ESI,ESI
LAB_004ba598:
004BA598  8B 83 35 02 00 00         MOV EAX,dword ptr [EBX + 0x235]
004BA59E  39 34 85 78 27 79 00      CMP dword ptr [EAX*0x4 + 0x792778],ESI
004BA5A5  74 29                     JZ 0x004ba5d0
004BA5A7  56                        PUSH ESI
004BA5A8  50                        PUSH EAX
004BA5A9  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004BA5AC  50                        PUSH EAX
004BA5AD  E8 93 B6 F4 FF            CALL 0x00405c45
004BA5B2  83 C4 0C                  ADD ESP,0xc
004BA5B5  85 C0                     TEST EAX,EAX
004BA5B7  74 17                     JZ 0x004ba5d0
004BA5B9  8B 8B 35 02 00 00         MOV ECX,dword ptr [EBX + 0x235]
004BA5BF  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
004BA5C2  56                        PUSH ESI
004BA5C3  51                        PUSH ECX
004BA5C4  52                        PUSH EDX
004BA5C5  E8 7B B6 F4 FF            CALL 0x00405c45
004BA5CA  83 C4 0C                  ADD ESP,0xc
004BA5CD  50                        PUSH EAX
004BA5CE  EB 02                     JMP 0x004ba5d2
LAB_004ba5d0:
004BA5D0  6A 05                     PUSH 0x5
LAB_004ba5d2:
004BA5D2  8B CB                     MOV ECX,EBX
004BA5D4  E8 C8 7D F4 FF            CALL 0x004023a1
004BA5D9  8B 83 31 02 00 00         MOV EAX,dword ptr [EBX + 0x231]
004BA5DF  BF 01 00 00 00            MOV EDI,0x1
004BA5E4  3B C7                     CMP EAX,EDI
004BA5E6  75 66                     JNZ 0x004ba64e
004BA5E8  A1 BC 17 81 00            MOV EAX,[0x008117bc]
004BA5ED  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
004BA5F0  3B C6                     CMP EAX,ESI
004BA5F2  74 5A                     JZ 0x004ba64e
004BA5F4  66 8B 43 24               MOV AX,word ptr [EBX + 0x24]
004BA5F8  66 8B 4B 32               MOV CX,word ptr [EBX + 0x32]
004BA5FC  66 89 45 9C               MOV word ptr [EBP + -0x64],AX
004BA600  66 89 45 A0               MOV word ptr [EBP + -0x60],AX
004BA604  8B 83 D3 05 00 00         MOV EAX,dword ptr [EBX + 0x5d3]
004BA60A  8D 55 F0                  LEA EDX,[EBP + -0x10]
004BA60D  66 89 4D 9E               MOV word ptr [EBP + -0x62],CX
004BA611  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004BA617  52                        PUSH EDX
004BA618  50                        PUSH EAX
004BA619  C7 45 98 D0 5D 00 00      MOV dword ptr [EBP + -0x68],0x5dd0
004BA620  E8 AB BC 22 00            CALL 0x006e62d0
004BA625  85 C0                     TEST EAX,EAX
004BA627  75 11                     JNZ 0x004ba63a
004BA629  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004BA62C  3B C6                     CMP EAX,ESI
004BA62E  74 0A                     JZ 0x004ba63a
004BA630  66 8B 48 32               MOV CX,word ptr [EAX + 0x32]
004BA634  66 89 4D A2               MOV word ptr [EBP + -0x5e],CX
004BA638  EB 06                     JMP 0x004ba640
LAB_004ba63a:
004BA63A  66 C7 45 A2 FF FF         MOV word ptr [EBP + -0x5e],0xffff
LAB_004ba640:
004BA640  8B 0D BC 17 81 00         MOV ECX,dword ptr [0x008117bc]
004BA646  8D 45 88                  LEA EAX,[EBP + -0x78]
004BA649  50                        PUSH EAX
004BA64A  8B 11                     MOV EDX,dword ptr [ECX]
004BA64C  FF 12                     CALL dword ptr [EDX]
LAB_004ba64e:
004BA64E  8A 8B 3D 02 00 00         MOV CL,byte ptr [EBX + 0x23d]
004BA654  51                        PUSH ECX
004BA655  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004BA65B  E8 57 A3 F4 FF            CALL 0x004049b7
004BA660  8A D0                     MOV DL,AL
004BA662  8B 83 35 02 00 00         MOV EAX,dword ptr [EBX + 0x235]
004BA668  8B 8B 41 02 00 00         MOV ECX,dword ptr [EBX + 0x241]
004BA66E  81 E2 FF 00 00 00         AND EDX,0xff
004BA674  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004BA677  03 D0                     ADD EDX,EAX
004BA679  3B 0C 95 78 41 7E 00      CMP ECX,dword ptr [EDX*0x4 + 0x7e4178]
004BA680  74 07                     JZ 0x004ba689
004BA682  8B CB                     MOV ECX,EBX
004BA684  E8 46 95 F4 FF            CALL 0x00403bcf
LAB_004ba689:
004BA689  8B 53 10                  MOV EDX,dword ptr [EBX + 0x10]
004BA68C  8B 4B 24                  MOV ECX,dword ptr [EBX + 0x24]
004BA68F  33 C0                     XOR EAX,EAX
004BA691  8A 82 2D 11 00 00         MOV AL,byte ptr [EDX + 0x112d]
004BA697  3B C8                     CMP ECX,EAX
004BA699  75 0C                     JNZ 0x004ba6a7
004BA69B  51                        PUSH ECX
004BA69C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004BA6A2  E8 E6 A4 F4 FF            CALL 0x00404b8d
LAB_004ba6a7:
004BA6A7  39 BB 31 02 00 00         CMP dword ptr [EBX + 0x231],EDI
004BA6AD  75 79                     JNZ 0x004ba728
004BA6AF  8B 53 10                  MOV EDX,dword ptr [EBX + 0x10]
004BA6B2  8B 4B 24                  MOV ECX,dword ptr [EBX + 0x24]
004BA6B5  33 C0                     XOR EAX,EAX
004BA6B7  8A 82 2D 11 00 00         MOV AL,byte ptr [EDX + 0x112d]
004BA6BD  3B C8                     CMP ECX,EAX
004BA6BF  75 67                     JNZ 0x004ba728
004BA6C1  8A 8B 3D 02 00 00         MOV CL,byte ptr [EBX + 0x23d]
004BA6C7  51                        PUSH ECX
004BA6C8  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004BA6CE  E8 E4 A2 F4 FF            CALL 0x004049b7
004BA6D3  8A D0                     MOV DL,AL
004BA6D5  8B 83 35 02 00 00         MOV EAX,dword ptr [EBX + 0x235]
004BA6DB  81 E2 FF 00 00 00         AND EDX,0xff
004BA6E1  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004BA6E4  03 D0                     ADD EDX,EAX
004BA6E6  39 34 95 B8 52 79 00      CMP dword ptr [EDX*0x4 + 0x7952b8],ESI
004BA6ED  74 39                     JZ 0x004ba728
004BA6EF  8A 8B 3D 02 00 00         MOV CL,byte ptr [EBX + 0x23d]
004BA6F5  8B 3B                     MOV EDI,dword ptr [EBX]
004BA6F7  51                        PUSH ECX
004BA6F8  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004BA6FE  E8 B4 A2 F4 FF            CALL 0x004049b7
004BA703  8A D0                     MOV DL,AL
004BA705  8B 83 35 02 00 00         MOV EAX,dword ptr [EBX + 0x235]
004BA70B  81 E2 FF 00 00 00         AND EDX,0xff
004BA711  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004BA714  03 D0                     ADD EDX,EAX
004BA716  8B 0C 95 B8 52 79 00      MOV ECX,dword ptr [EDX*0x4 + 0x7952b8]
004BA71D  51                        PUSH ECX
004BA71E  6A 04                     PUSH 0x4
004BA720  8B CB                     MOV ECX,EBX
004BA722  FF 97 90 00 00 00         CALL dword ptr [EDI + 0x90]
LAB_004ba728:
004BA728  8B 83 31 02 00 00         MOV EAX,dword ptr [EBX + 0x231]
004BA72E  3B C6                     CMP EAX,ESI
004BA730  74 05                     JZ 0x004ba737
004BA732  83 F8 03                  CMP EAX,0x3
004BA735  75 48                     JNZ 0x004ba77f
LAB_004ba737:
004BA737  39 35 84 17 81 00         CMP dword ptr [0x00811784],ESI
004BA73D  74 40                     JZ 0x004ba77f
004BA73F  8A 53 24                  MOV DL,byte ptr [EBX + 0x24]
004BA742  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004BA748  52                        PUSH EDX
004BA749  E8 69 A2 F4 FF            CALL 0x004049b7
004BA74E  8A 4B 2C                  MOV CL,byte ptr [EBX + 0x2c]
004BA751  8B 93 B8 05 00 00         MOV EDX,dword ptr [EBX + 0x5b8]
004BA757  25 FF 00 00 00            AND EAX,0xff
004BA75C  50                        PUSH EAX
004BA75D  8B 83 AC 05 00 00         MOV EAX,dword ptr [EBX + 0x5ac]
004BA763  50                        PUSH EAX
004BA764  8B 83 B4 05 00 00         MOV EAX,dword ptr [EBX + 0x5b4]
004BA76A  51                        PUSH ECX
004BA76B  8B 8B B0 05 00 00         MOV ECX,dword ptr [EBX + 0x5b0]
004BA771  52                        PUSH EDX
004BA772  50                        PUSH EAX
004BA773  51                        PUSH ECX
004BA774  8B 0D 84 17 81 00         MOV ECX,dword ptr [0x00811784]
004BA77A  E8 E6 8A F4 FF            CALL 0x00403265
LAB_004ba77f:
004BA77F  39 B3 DF 05 00 00         CMP dword ptr [EBX + 0x5df],ESI
004BA785  0F 84 12 06 00 00         JZ 0x004bad9d
004BA78B  8B 15 24 67 80 00         MOV EDX,dword ptr [0x00806724]
004BA791  8D B3 D5 01 00 00         LEA ESI,[EBX + 0x1d5]
004BA797  6A 0E                     PUSH 0xe
004BA799  0F BF 42 23               MOVSX EAX,word ptr [EDX + 0x23]
004BA79D  48                        DEC EAX
004BA79E  89 83 C8 04 00 00         MOV dword ptr [EBX + 0x4c8],EAX
004BA7A4  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004BA7AA  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
004BA7B0  8B CE                     MOV ECX,ESI
004BA7B2  89 93 CC 04 00 00         MOV dword ptr [EBX + 0x4cc],EDX
004BA7B8  E8 F1 73 F4 FF            CALL 0x00401bae
004BA7BD  6A 0D                     PUSH 0xd
004BA7BF  8B CE                     MOV ECX,ESI
004BA7C1  E8 E8 73 F4 FF            CALL 0x00401bae
004BA7C6  6A 0C                     PUSH 0xc
004BA7C8  8B CE                     MOV ECX,ESI
004BA7CA  E8 DF 73 F4 FF            CALL 0x00401bae
004BA7CF  6A 0B                     PUSH 0xb
004BA7D1  8B CE                     MOV ECX,ESI
004BA7D3  E8 D6 73 F4 FF            CALL 0x00401bae
004BA7D8  6A 09                     PUSH 0x9
004BA7DA  8B CE                     MOV ECX,ESI
004BA7DC  E8 CD 73 F4 FF            CALL 0x00401bae
004BA7E1  6A 08                     PUSH 0x8
004BA7E3  8B CE                     MOV ECX,ESI
004BA7E5  E8 C4 73 F4 FF            CALL 0x00401bae
004BA7EA  6A 07                     PUSH 0x7
004BA7EC  8B CE                     MOV ECX,ESI
004BA7EE  E8 BB 73 F4 FF            CALL 0x00401bae
004BA7F3  A1 24 67 80 00            MOV EAX,[0x00806724]
004BA7F8  8B 93 C8 04 00 00         MOV EDX,dword ptr [EBX + 0x4c8]
004BA7FE  0F BF 48 2C               MOVSX ECX,word ptr [EAX + 0x2c]
004BA802  8B 44 90 30               MOV EAX,dword ptr [EAX + EDX*0x4 + 0x30]
004BA806  51                        PUSH ECX
004BA807  50                        PUSH EAX
004BA808  8B CE                     MOV ECX,ESI
004BA80A  E8 5E 69 F4 FF            CALL 0x0040116d
004BA80F  8B CB                     MOV ECX,EBX
004BA811  E8 81 71 F4 FF            CALL 0x00401997
004BA816  8B CB                     MOV ECX,EBX
004BA818  E8 61 71 F4 FF            CALL 0x0040197e
004BA81D  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BA823  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BA828  33 C0                     XOR EAX,EAX
004BA82A  5F                        POP EDI
004BA82B  5E                        POP ESI
004BA82C  5B                        POP EBX
004BA82D  8B E5                     MOV ESP,EBP
004BA82F  5D                        POP EBP
004BA830  C2 04 00                  RET 0x4
switchD_004ba2a0::caseD_2:
004BA833  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004BA836  8B FB                     MOV EDI,EBX
004BA838  F7 DF                     NEG EDI
004BA83A  8B 51 14                  MOV EDX,dword ptr [ECX + 0x14]
004BA83D  8D 83 31 02 00 00         LEA EAX,[EBX + 0x231]
004BA843  1B FF                     SBB EDI,EDI
004BA845  B9 DE 00 00 00            MOV ECX,0xde
004BA84A  23 F8                     AND EDI,EAX
004BA84C  8D 72 57                  LEA ESI,[EDX + 0x57]
004BA84F  F3 A5                     MOVSD.REP ES:EDI,ESI
004BA851  66 A5                     MOVSW ES:EDI,ESI
004BA853  A4                        MOVSB ES:EDI,ESI
004BA854  C7 00 02 00 00 00         MOV dword ptr [EAX],0x2
004BA85A  8B 83 D8 03 00 00         MOV EAX,dword ptr [EBX + 0x3d8]
004BA860  85 C0                     TEST EAX,EAX
004BA862  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
004BA865  74 12                     JZ 0x004ba879
004BA867  6B C0 27                  IMUL EAX,EAX,0x27
004BA86A  50                        PUSH EAX
004BA86B  E8 00 04 1F 00            CALL 0x006aac70
004BA870  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004BA873  89 83 07 06 00 00         MOV dword ptr [EBX + 0x607],EAX
LAB_004ba879:
004BA879  8B 8B D4 03 00 00         MOV ECX,dword ptr [EBX + 0x3d4]
004BA87F  85 C9                     TEST ECX,ECX
004BA881  74 1F                     JZ 0x004ba8a2
004BA883  6B C9 27                  IMUL ECX,ECX,0x27
004BA886  8B B2 D2 03 00 00         MOV ESI,dword ptr [EDX + 0x3d2]
004BA88C  8B BB 07 06 00 00         MOV EDI,dword ptr [EBX + 0x607]
004BA892  03 F2                     ADD ESI,EDX
004BA894  8B D1                     MOV EDX,ECX
004BA896  C1 E9 02                  SHR ECX,0x2
004BA899  F3 A5                     MOVSD.REP ES:EDI,ESI
004BA89B  8B CA                     MOV ECX,EDX
004BA89D  83 E1 03                  AND ECX,0x3
004BA8A0  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_004ba8a2:
004BA8A2  8B CB                     MOV ECX,EBX
004BA8A4  E8 68 A1 F4 FF            CALL 0x00404a11
004BA8A9  6A 44                     PUSH 0x44
004BA8AB  E8 C0 03 1F 00            CALL 0x006aac70
004BA8B0  8B 0D CC 73 80 00         MOV ECX,dword ptr [0x008073cc]
004BA8B6  8B 15 B8 32 80 00         MOV EDX,dword ptr [0x008032b8]
004BA8BC  33 F6                     XOR ESI,ESI
004BA8BE  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
004BA8C1  8B 0D 74 67 80 00         MOV ECX,dword ptr [0x00806774]
004BA8C7  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
004BA8CA  89 75 D4                  MOV dword ptr [EBP + -0x2c],ESI
004BA8CD  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
004BA8D0  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
004BA8D3  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
004BA8D6  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
004BA8D9  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
004BA8DC  8B 15 74 67 80 00         MOV EDX,dword ptr [0x00806774]
004BA8E2  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
004BA8E5  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
004BA8E8  8B 0D 74 67 80 00         MOV ECX,dword ptr [0x00806774]
004BA8EE  89 0A                     MOV dword ptr [EDX],ECX
004BA8F0  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
004BA8F3  8B 0D 74 67 80 00         MOV ECX,dword ptr [0x00806774]
004BA8F9  89 48 3C                  MOV dword ptr [EAX + 0x3c],ECX
004BA8FC  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
004BA8FF  8B 15 8C 67 80 00         MOV EDX,dword ptr [0x0080678c]
004BA905  89 50 40                  MOV dword ptr [EAX + 0x40],EDX
004BA908  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
004BA90B  8B 0D 8C 67 80 00         MOV ECX,dword ptr [0x0080678c]
004BA911  89 4A 38                  MOV dword ptr [EDX + 0x38],ECX
004BA914  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
004BA917  A1 8C 67 80 00            MOV EAX,[0x0080678c]
004BA91C  89 41 34                  MOV dword ptr [ECX + 0x34],EAX
004BA91F  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
004BA922  8B 15 8C 67 80 00         MOV EDX,dword ptr [0x0080678c]
004BA928  89 50 30                  MOV dword ptr [EAX + 0x30],EDX
004BA92B  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
004BA92E  8B 15 8C 67 80 00         MOV EDX,dword ptr [0x0080678c]
004BA934  89 51 2C                  MOV dword ptr [ECX + 0x2c],EDX
004BA937  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
004BA93A  89 70 28                  MOV dword ptr [EAX + 0x28],ESI
004BA93D  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
004BA940  8B 0D 8C 67 80 00         MOV ECX,dword ptr [0x0080678c]
004BA946  89 4A 24                  MOV dword ptr [EDX + 0x24],ECX
004BA949  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
004BA94C  A1 8C 67 80 00            MOV EAX,[0x0080678c]
004BA951  89 41 20                  MOV dword ptr [ECX + 0x20],EAX
004BA954  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
004BA957  A1 8C 67 80 00            MOV EAX,[0x0080678c]
004BA95C  89 42 1C                  MOV dword ptr [EDX + 0x1c],EAX
004BA95F  8B 83 45 02 00 00         MOV EAX,dword ptr [EBX + 0x245]
004BA965  83 F8 01                  CMP EAX,0x1
004BA968  75 46                     JNZ 0x004ba9b0
004BA96A  83 BB DF 05 00 00 05      CMP dword ptr [EBX + 0x5df],0x5
004BA971  75 1B                     JNZ 0x004ba98e
004BA973  8B 8B C8 04 00 00         MOV ECX,dword ptr [EBX + 0x4c8]
004BA979  A1 24 67 80 00            MOV EAX,[0x00806724]
004BA97E  8B 54 88 30               MOV EDX,dword ptr [EAX + ECX*0x4 + 0x30]
004BA982  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
004BA985  0F BF 40 2C               MOVSX EAX,word ptr [EAX + 0x2c]
004BA989  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
004BA98C  EB 22                     JMP 0x004ba9b0
LAB_004ba98e:
004BA98E  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
004BA991  8B 15 64 67 80 00         MOV EDX,dword ptr [0x00806764]
004BA997  89 51 14                  MOV dword ptr [ECX + 0x14],EDX
004BA99A  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
004BA99D  A1 74 67 80 00            MOV EAX,[0x00806774]
004BA9A2  89 41 10                  MOV dword ptr [ECX + 0x10],EAX
004BA9A5  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
004BA9A8  A1 74 67 80 00            MOV EAX,[0x00806774]
004BA9AD  89 42 18                  MOV dword ptr [EDX + 0x18],EAX
LAB_004ba9b0:
004BA9B0  83 BB 45 02 00 00 06      CMP dword ptr [EBX + 0x245],0x6
004BA9B7  75 18                     JNZ 0x004ba9d1
004BA9B9  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
004BA9BC  8B 15 8C 67 80 00         MOV EDX,dword ptr [0x0080678c]
004BA9C2  89 51 14                  MOV dword ptr [ECX + 0x14],EDX
004BA9C5  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
004BA9C8  8B 0D 64 67 80 00         MOV ECX,dword ptr [0x00806764]
004BA9CE  89 48 10                  MOV dword ptr [EAX + 0x10],ECX
LAB_004ba9d1:
004BA9D1  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
004BA9D4  8D 45 D0                  LEA EAX,[EBP + -0x30]
004BA9D7  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
004BA9DD  8B 97 DA 03 00 00         MOV EDX,dword ptr [EDI + 0x3da]
004BA9E3  03 D7                     ADD EDX,EDI
004BA9E5  52                        PUSH EDX
004BA9E6  50                        PUSH EAX
004BA9E7  E8 B9 A2 F4 FF            CALL 0x00404ca5
004BA9EC  39 B3 F7 05 00 00         CMP dword ptr [EBX + 0x5f7],ESI
004BA9F2  74 2A                     JZ 0x004baa1e
004BA9F4  8B 8B 35 02 00 00         MOV ECX,dword ptr [EBX + 0x235]
004BA9FA  39 34 8D 2C 0C 79 00      CMP dword ptr [ECX*0x4 + 0x790c2c],ESI
004BAA01  74 1B                     JZ 0x004baa1e
004BAA03  6A 01                     PUSH 0x1
004BAA05  6A 0C                     PUSH 0xc
004BAA07  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
004BAA0D  E8 BA A8 F4 FF            CALL 0x004052cc
004BAA12  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
004BAA18  50                        PUSH EAX
004BAA19  E8 72 F7 22 00            CALL 0x006ea190
LAB_004baa1e:
004BAA1E  39 B7 DE 03 00 00         CMP dword ptr [EDI + 0x3de],ESI
004BAA24  0F 84 00 01 00 00         JZ 0x004bab2a
004BAA2A  6A 40                     PUSH 0x40
004BAA2C  E8 FF 3A 27 00            CALL 0x0072e530
004BAA31  83 C4 04                  ADD ESP,0x4
004BAA34  3B C6                     CMP EAX,ESI
004BAA36  74 09                     JZ 0x004baa41
004BAA38  8B C8                     MOV ECX,EAX
004BAA3A  E8 D7 68 F4 FF            CALL 0x00401316
004BAA3F  EB 02                     JMP 0x004baa43
LAB_004baa41:
004BAA41  33 C0                     XOR EAX,EAX
LAB_004baa43:
004BAA43  6A 11                     PUSH 0x11
004BAA45  68 8C 00 00 00            PUSH 0x8c
004BAA4A  68 B4 00 00 00            PUSH 0xb4
004BAA4F  89 83 FF 05 00 00         MOV dword ptr [EBX + 0x5ff],EAX
004BAA55  8B 15 CC 73 80 00         MOV EDX,dword ptr [0x008073cc]
004BAA5B  56                        PUSH ESI
004BAA5C  6A 45                     PUSH 0x45
004BAA5E  6A 5A                     PUSH 0x5a
004BAA60  52                        PUSH EDX
004BAA61  8B C8                     MOV ECX,EAX
004BAA63  E8 13 A9 F4 FF            CALL 0x0040537b
004BAA68  3B C6                     CMP EAX,ESI
004BAA6A  74 17                     JZ 0x004baa83
004BAA6C  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004BAA72  68 65 03 00 00            PUSH 0x365
004BAA77  68 20 C8 7A 00            PUSH 0x7ac820
004BAA7C  51                        PUSH ECX
004BAA7D  50                        PUSH EAX
004BAA7E  E8 BD B3 1E 00            CALL 0x006a5e40
LAB_004baa83:
004BAA83  8B 7D D0                  MOV EDI,dword ptr [EBP + -0x30]
004BAA86  B9 11 00 00 00            MOV ECX,0x11
004BAA8B  33 C0                     XOR EAX,EAX
004BAA8D  F3 AB                     STOSD.REP ES:EDI
004BAA8F  8B 83 AC 05 00 00         MOV EAX,dword ptr [EBX + 0x5ac]
004BAA95  83 C0 CE                  ADD EAX,-0x32
004BAA98  83 F8 40                  CMP EAX,0x40
004BAA9B  77 41                     JA 0x004baade
004BAA9D  33 D2                     XOR EDX,EDX
004BAA9F  8A 90 B0 D1 4B 00         MOV DL,byte ptr [EAX + 0x4bd1b0]
switchD_004baaa5::switchD:
004BAAA5  FF 24 95 A4 D1 4B 00      JMP dword ptr [EDX*0x4 + 0x4bd1a4]
switchD_004baaa5::caseD_45:
004BAAAC  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
004BAAAF  8B 0D 74 67 80 00         MOV ECX,dword ptr [0x00806774]
004BAAB5  89 48 38                  MOV dword ptr [EAX + 0x38],ECX
004BAAB8  EB 24                     JMP 0x004baade
switchD_004baaa5::caseD_32:
004BAABA  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
004BAABD  8B 15 7C 67 80 00         MOV EDX,dword ptr [0x0080677c]
004BAAC3  89 50 38                  MOV dword ptr [EAX + 0x38],EDX
004BAAC6  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
004BAAC9  8B 0D 7C 67 80 00         MOV ECX,dword ptr [0x0080677c]
004BAACF  89 4A 30                  MOV dword ptr [EDX + 0x30],ECX
004BAAD2  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
004BAAD5  8B 0D 7C 67 80 00         MOV ECX,dword ptr [0x0080677c]
004BAADB  89 48 34                  MOV dword ptr [EAX + 0x34],ECX
switchD_004baaa5::caseD_33:
004BAADE  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004BAAE1  8B 8B FF 05 00 00         MOV ECX,dword ptr [EBX + 0x5ff]
004BAAE7  89 75 D4                  MOV dword ptr [EBP + -0x2c],ESI
004BAAEA  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
004BAAED  89 75 DC                  MOV dword ptr [EBP + -0x24],ESI
004BAAF0  8B 90 E2 03 00 00         MOV EDX,dword ptr [EAX + 0x3e2]
004BAAF6  03 D0                     ADD EDX,EAX
004BAAF8  8D 45 D0                  LEA EAX,[EBP + -0x30]
004BAAFB  52                        PUSH EDX
004BAAFC  50                        PUSH EAX
004BAAFD  E8 A3 A1 F4 FF            CALL 0x00404ca5
004BAB02  6A 0A                     PUSH 0xa
004BAB04  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
004BAB0A  E8 BD A7 F4 FF            CALL 0x004052cc
004BAB0F  8B 8B FF 05 00 00         MOV ECX,dword ptr [EBX + 0x5ff]
004BAB15  50                        PUSH EAX
004BAB16  E8 B1 A7 F4 FF            CALL 0x004052cc
004BAB1B  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
004BAB21  50                        PUSH EAX
004BAB22  E8 19 F8 22 00            CALL 0x006ea340
004BAB27  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
LAB_004bab2a:
004BAB2A  39 B7 EE 03 00 00         CMP dword ptr [EDI + 0x3ee],ESI
004BAB30  0F 84 01 01 00 00         JZ 0x004bac37
004BAB36  6A 40                     PUSH 0x40
004BAB38  E8 F3 39 27 00            CALL 0x0072e530
004BAB3D  83 C4 04                  ADD ESP,0x4
004BAB40  3B C6                     CMP EAX,ESI
004BAB42  74 09                     JZ 0x004bab4d
004BAB44  8B C8                     MOV ECX,EAX
004BAB46  E8 CB 67 F4 FF            CALL 0x00401316
004BAB4B  EB 02                     JMP 0x004bab4f
LAB_004bab4d:
004BAB4D  33 C0                     XOR EAX,EAX
LAB_004bab4f:
004BAB4F  89 83 03 06 00 00         MOV dword ptr [EBX + 0x603],EAX
004BAB55  8B 8B 0F 06 00 00         MOV ECX,dword ptr [EBX + 0x60f]
004BAB5B  8B 93 0B 06 00 00         MOV EDX,dword ptr [EBX + 0x60b]
004BAB61  6A 11                     PUSH 0x11
004BAB63  51                        PUSH ECX
004BAB64  8B 8B 17 06 00 00         MOV ECX,dword ptr [EBX + 0x617]
004BAB6A  52                        PUSH EDX
004BAB6B  8B 93 13 06 00 00         MOV EDX,dword ptr [EBX + 0x613]
004BAB71  56                        PUSH ESI
004BAB72  51                        PUSH ECX
004BAB73  8B 0D CC 73 80 00         MOV ECX,dword ptr [0x008073cc]
004BAB79  52                        PUSH EDX
004BAB7A  51                        PUSH ECX
004BAB7B  8B C8                     MOV ECX,EAX
004BAB7D  E8 F9 A7 F4 FF            CALL 0x0040537b
004BAB82  3B C6                     CMP EAX,ESI
004BAB84  74 17                     JZ 0x004bab9d
004BAB86  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004BAB8C  68 86 03 00 00            PUSH 0x386
004BAB91  68 20 C8 7A 00            PUSH 0x7ac820
004BAB96  52                        PUSH EDX
004BAB97  50                        PUSH EAX
004BAB98  E8 A3 B2 1E 00            CALL 0x006a5e40
LAB_004bab9d:
004BAB9D  8B 7D D0                  MOV EDI,dword ptr [EBP + -0x30]
004BABA0  B9 11 00 00 00            MOV ECX,0x11
004BABA5  33 C0                     XOR EAX,EAX
004BABA7  F3 AB                     STOSD.REP ES:EDI
004BABA9  83 BB 3C 04 00 00 01      CMP dword ptr [EBX + 0x43c],0x1
004BABB0  74 0E                     JZ 0x004babc0
004BABB2  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
004BABB5  8B 0D 8C 67 80 00         MOV ECX,dword ptr [0x0080678c]
004BABBB  89 48 38                  MOV dword ptr [EAX + 0x38],ECX
004BABBE  EB 0B                     JMP 0x004babcb
LAB_004babc0:
004BABC0  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
004BABC3  A1 64 67 80 00            MOV EAX,[0x00806764]
004BABC8  89 42 38                  MOV dword ptr [EDX + 0x38],EAX
LAB_004babcb:
004BABCB  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004BABCE  89 75 D4                  MOV dword ptr [EBP + -0x2c],ESI
004BABD1  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
004BABD4  89 75 DC                  MOV dword ptr [EBP + -0x24],ESI
004BABD7  8B 88 F2 03 00 00         MOV ECX,dword ptr [EAX + 0x3f2]
004BABDD  8D 55 D0                  LEA EDX,[EBP + -0x30]
004BABE0  03 C8                     ADD ECX,EAX
004BABE2  51                        PUSH ECX
004BABE3  8B 8B 03 06 00 00         MOV ECX,dword ptr [EBX + 0x603]
004BABE9  52                        PUSH EDX
004BABEA  E8 B6 A0 F4 FF            CALL 0x00404ca5
004BABEF  39 B3 44 04 00 00         CMP dword ptr [EBX + 0x444],ESI
004BABF5  74 40                     JZ 0x004bac37
004BABF7  39 B3 48 04 00 00         CMP dword ptr [EBX + 0x448],ESI
004BABFD  74 38                     JZ 0x004bac37
004BABFF  39 B3 4C 04 00 00         CMP dword ptr [EBX + 0x44c],ESI
004BAC05  7C 30                     JL 0x004bac37
004BAC07  8D BB D5 01 00 00         LEA EDI,[EBX + 0x1d5]
004BAC0D  6A 06                     PUSH 0x6
004BAC0F  8B CF                     MOV ECX,EDI
004BAC11  E8 74 9D F4 FF            CALL 0x0040498a
004BAC16  6A 06                     PUSH 0x6
004BAC18  8B CF                     MOV ECX,EDI
004BAC1A  E8 AD A6 F4 FF            CALL 0x004052cc
004BAC1F  8B 8B 03 06 00 00         MOV ECX,dword ptr [EBX + 0x603]
004BAC25  50                        PUSH EAX
004BAC26  E8 A1 A6 F4 FF            CALL 0x004052cc
004BAC2B  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
004BAC31  50                        PUSH EAX
004BAC32  E8 09 F7 22 00            CALL 0x006ea340
LAB_004bac37:
004BAC37  8D 45 D0                  LEA EAX,[EBP + -0x30]
004BAC3A  50                        PUSH EAX
004BAC3B  E8 20 04 1F 00            CALL 0x006ab060
004BAC40  83 BB 6C 04 00 00 04      CMP dword ptr [EBX + 0x46c],0x4
004BAC47  75 58                     JNZ 0x004baca1
004BAC49  39 B3 90 04 00 00         CMP dword ptr [EBX + 0x490],ESI
004BAC4F  74 50                     JZ 0x004baca1
004BAC51  56                        PUSH ESI
004BAC52  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
004BAC58  E8 6F A6 F4 FF            CALL 0x004052cc
004BAC5D  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
004BAC63  50                        PUSH EAX
004BAC64  E8 87 FF 22 00            CALL 0x006eabf0
004BAC69  8B 8B FF 05 00 00         MOV ECX,dword ptr [EBX + 0x5ff]
004BAC6F  3B CE                     CMP ECX,ESI
004BAC71  74 12                     JZ 0x004bac85
004BAC73  56                        PUSH ESI
004BAC74  E8 53 A6 F4 FF            CALL 0x004052cc
004BAC79  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
004BAC7F  50                        PUSH EAX
004BAC80  E8 6B FF 22 00            CALL 0x006eabf0
LAB_004bac85:
004BAC85  8B 8B 03 06 00 00         MOV ECX,dword ptr [EBX + 0x603]
004BAC8B  3B CE                     CMP ECX,ESI
004BAC8D  74 12                     JZ 0x004baca1
004BAC8F  56                        PUSH ESI
004BAC90  E8 37 A6 F4 FF            CALL 0x004052cc
004BAC95  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
004BAC9B  50                        PUSH EAX
004BAC9C  E8 4F FF 22 00            CALL 0x006eabf0
LAB_004baca1:
004BACA1  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004BACA4  8B 88 EA 03 00 00         MOV ECX,dword ptr [EAX + 0x3ea]
004BACAA  03 C8                     ADD ECX,EAX
004BACAC  51                        PUSH ECX
004BACAD  8B CB                     MOV ECX,EBX
004BACAF  E8 6B A8 F4 FF            CALL 0x0040551f
004BACB4  66 8B 53 32               MOV DX,word ptr [EBX + 0x32]
004BACB8  8B CB                     MOV ECX,EBX
004BACBA  52                        PUSH EDX
004BACBB  E8 36 95 F4 FF            CALL 0x004041f6
004BACC0  39 B3 51 02 00 00         CMP dword ptr [EBX + 0x251],ESI
004BACC6  0F 84 D1 00 00 00         JZ 0x004bad9d
004BACCC  8B 83 35 02 00 00         MOV EAX,dword ptr [EBX + 0x235]
004BACD2  8B 3C 85 30 1E 79 00      MOV EDI,dword ptr [EAX*0x4 + 0x791e30]
004BACD9  8B 83 B4 05 00 00         MOV EAX,dword ptr [EBX + 0x5b4]
004BACDF  4F                        DEC EDI
004BACE0  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004BACE3  F7 DF                     NEG EDI
004BACE5  1B FF                     SBB EDI,EDI
004BACE7  83 C7 02                  ADD EDI,0x2
004BACEA  8D 0C 38                  LEA ECX,[EAX + EDI*0x1]
004BACED  3B C1                     CMP EAX,ECX
004BACEF  0F 8D A8 00 00 00         JGE 0x004bad9d
LAB_004bacf5:
004BACF5  8B B3 B0 05 00 00         MOV ESI,dword ptr [EBX + 0x5b0]
004BACFB  8D 14 3E                  LEA EDX,[ESI + EDI*0x1]
004BACFE  3B F2                     CMP ESI,EDX
004BAD00  7D 44                     JGE 0x004bad46
LAB_004bad02:
004BAD02  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
004BAD05  66 8B 93 B8 05 00 00      MOV DX,word ptr [EBX + 0x5b8]
004BAD0C  51                        PUSH ECX
004BAD0D  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
004BAD13  52                        PUSH EDX
004BAD14  50                        PUSH EAX
004BAD15  56                        PUSH ESI
004BAD16  E8 B2 9F F4 FF            CALL 0x00404ccd
004BAD1B  85 C0                     TEST EAX,EAX
004BAD1D  74 17                     JZ 0x004bad36
004BAD1F  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004BAD24  68 A5 03 00 00            PUSH 0x3a5
004BAD29  68 20 C8 7A 00            PUSH 0x7ac820
004BAD2E  50                        PUSH EAX
004BAD2F  6A FB                     PUSH -0x5
004BAD31  E8 0A B1 1E 00            CALL 0x006a5e40
LAB_004bad36:
004BAD36  8B 8B B0 05 00 00         MOV ECX,dword ptr [EBX + 0x5b0]
004BAD3C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004BAD3F  46                        INC ESI
004BAD40  03 CF                     ADD ECX,EDI
004BAD42  3B F1                     CMP ESI,ECX
004BAD44  7C BC                     JL 0x004bad02
LAB_004bad46:
004BAD46  8B 93 B4 05 00 00         MOV EDX,dword ptr [EBX + 0x5b4]
004BAD4C  40                        INC EAX
004BAD4D  03 D7                     ADD EDX,EDI
004BAD4F  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004BAD52  3B C2                     CMP EAX,EDX
004BAD54  7C 9F                     JL 0x004bacf5
004BAD56  8B CB                     MOV ECX,EBX
004BAD58  E8 3A 6C F4 FF            CALL 0x00401997
004BAD5D  8B CB                     MOV ECX,EBX
004BAD5F  E8 1A 6C F4 FF            CALL 0x0040197e
004BAD64  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BAD6A  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BAD6F  33 C0                     XOR EAX,EAX
004BAD71  5F                        POP EDI
004BAD72  5E                        POP ESI
004BAD73  5B                        POP EBX
004BAD74  8B E5                     MOV ESP,EBP
004BAD76  5D                        POP EBP
004BAD77  C2 04 00                  RET 0x4
switchD_004ba2a0::default:
004BAD7A  68 7C C8 7A 00            PUSH 0x7ac87c
004BAD7F  68 CC 4C 7A 00            PUSH 0x7a4ccc
004BAD84  56                        PUSH ESI
004BAD85  56                        PUSH ESI
004BAD86  68 AC 03 00 00            PUSH 0x3ac
004BAD8B  68 20 C8 7A 00            PUSH 0x7ac820
004BAD90  E8 3B 27 1F 00            CALL 0x006ad4d0
004BAD95  83 C4 18                  ADD ESP,0x18
004BAD98  85 C0                     TEST EAX,EAX
004BAD9A  74 01                     JZ 0x004bad9d
004BAD9C  CC                        INT3
LAB_004bad9d:
004BAD9D  8B CB                     MOV ECX,EBX
004BAD9F  E8 F3 6B F4 FF            CALL 0x00401997
004BADA4  8B CB                     MOV ECX,EBX
004BADA6  E8 D3 6B F4 FF            CALL 0x0040197e
004BADAB  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BADB1  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BADB6  33 C0                     XOR EAX,EAX
004BADB8  5F                        POP EDI
004BADB9  5E                        POP ESI
004BADBA  5B                        POP EBX
004BADBB  8B E5                     MOV ESP,EBP
004BADBD  5D                        POP EBP
004BADBE  C2 04 00                  RET 0x4
LAB_004badc1:
004BADC1  39 BB B4 04 00 00         CMP dword ptr [EBX + 0x4b4],EDI
004BADC7  74 66                     JZ 0x004bae2f
004BADC9  39 BB 45 02 00 00         CMP dword ptr [EBX + 0x245],EDI
004BADCF  75 0F                     JNZ 0x004bade0
004BADD1  39 BB 61 03 00 00         CMP dword ptr [EBX + 0x361],EDI
004BADD7  75 07                     JNZ 0x004bade0
004BADD9  B8 01 00 00 00            MOV EAX,0x1
004BADDE  EB 02                     JMP 0x004bade2
LAB_004bade0:
004BADE0  33 C0                     XOR EAX,EAX
LAB_004bade2:
004BADE2  3B C7                     CMP EAX,EDI
004BADE4  74 49                     JZ 0x004bae2f
004BADE6  83 BB 49 02 00 00 06      CMP dword ptr [EBX + 0x249],0x6
004BADED  74 40                     JZ 0x004bae2f
004BADEF  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004BADF4  8B 13                     MOV EDX,dword ptr [EBX]
004BADF6  68 60 03 00 00            PUSH 0x360
004BADFB  6A 03                     PUSH 0x3
004BADFD  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
004BAE03  C7 83 BC 04 00 00 01 00 00 00  MOV dword ptr [EBX + 0x4bc],0x1
004BAE0D  89 8B B8 04 00 00         MOV dword ptr [EBX + 0x4b8],ECX
004BAE13  8B CB                     MOV ECX,EBX
004BAE15  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
004BAE1B  6A 01                     PUSH 0x1
004BAE1D  6A 06                     PUSH 0x6
004BAE1F  8B CB                     MOV ECX,EBX
004BAE21  E8 84 62 F4 FF            CALL 0x004010aa
004BAE26  6A 04                     PUSH 0x4
004BAE28  8B CB                     MOV ECX,EBX
004BAE2A  E8 C2 7A F4 FF            CALL 0x004028f1
LAB_004bae2f:
004BAE2F  8B CB                     MOV ECX,EBX
004BAE31  E8 9E 92 F4 FF            CALL 0x004040d4
004BAE36  8B CB                     MOV ECX,EBX
004BAE38  E8 B2 9A F4 FF            CALL 0x004048ef
004BAE3D  39 BB FF 05 00 00         CMP dword ptr [EBX + 0x5ff],EDI
004BAE43  74 07                     JZ 0x004bae4c
004BAE45  8B CB                     MOV ECX,EBX
004BAE47  E8 E5 80 F4 FF            CALL 0x00402f31
LAB_004bae4c:
004BAE4C  39 BB 45 02 00 00         CMP dword ptr [EBX + 0x245],EDI
004BAE52  0F 85 1C 01 00 00         JNZ 0x004baf74
004BAE58  39 BB 61 02 00 00         CMP dword ptr [EBX + 0x261],EDI
004BAE5E  74 07                     JZ 0x004bae67
004BAE60  8B CB                     MOV ECX,EBX
004BAE62  E8 39 62 F4 FF            CALL 0x004010a0
LAB_004bae67:
004BAE67  8B CB                     MOV ECX,EBX
004BAE69  E8 FC AB F4 FF            CALL 0x00405a6a
004BAE6E  8B 83 AC 05 00 00         MOV EAX,dword ptr [EBX + 0x5ac]
004BAE74  83 C0 CE                  ADD EAX,-0x32
004BAE77  83 F8 41                  CMP EAX,0x41
004BAE7A  0F 87 F4 00 00 00         JA 0x004baf74
004BAE80  33 C9                     XOR ECX,ECX
004BAE82  8A 88 54 D2 4B 00         MOV CL,byte ptr [EAX + 0x4bd254]
switchD_004bae88::switchD:
004BAE88  FF 24 8D F4 D1 4B 00      JMP dword ptr [ECX*0x4 + 0x4bd1f4]
switchD_004bae88::caseD_38:
004BAE8F  8B CB                     MOV ECX,EBX
004BAE91  E8 15 A2 F4 FF            CALL 0x004050ab
004BAE96  E9 D9 00 00 00            JMP 0x004baf74
switchD_004bae88::caseD_3a:
004BAE9B  8B CB                     MOV ECX,EBX
004BAE9D  E8 6D 75 F4 FF            CALL 0x0040240f
004BAEA2  E9 CD 00 00 00            JMP 0x004baf74
switchD_004bae88::caseD_45:
004BAEA7  8B CB                     MOV ECX,EBX
004BAEA9  E8 B1 AC F4 FF            CALL 0x00405b5f
004BAEAE  E9 C1 00 00 00            JMP 0x004baf74
switchD_004bae88::caseD_4e:
004BAEB3  8B CB                     MOV ECX,EBX
004BAEB5  E8 94 6D F4 FF            CALL 0x00401c4e
004BAEBA  E9 B5 00 00 00            JMP 0x004baf74
switchD_004bae88::caseD_72:
004BAEBF  8B CB                     MOV ECX,EBX
004BAEC1  E8 95 6F F4 FF            CALL 0x00401e5b
004BAEC6  E9 A9 00 00 00            JMP 0x004baf74
switchD_004bae88::caseD_32:
004BAECB  8B CB                     MOV ECX,EBX
004BAECD  E8 8D 98 F4 FF            CALL 0x0040475f
004BAED2  E9 9D 00 00 00            JMP 0x004baf74
switchD_004bae88::caseD_41:
004BAED7  8B CB                     MOV ECX,EBX
004BAED9  E8 28 8D F4 FF            CALL 0x00403c06
004BAEDE  E9 91 00 00 00            JMP 0x004baf74
switchD_004bae88::caseD_34:
004BAEE3  8B CB                     MOV ECX,EBX
004BAEE5  E8 F8 A6 F4 FF            CALL 0x004055e2
004BAEEA  E9 85 00 00 00            JMP 0x004baf74
switchD_004bae88::caseD_4d:
004BAEEF  8B CB                     MOV ECX,EBX
004BAEF1  E8 5C 73 F4 FF            CALL 0x00402252
004BAEF6  EB 7C                     JMP 0x004baf74
switchD_004bae88::caseD_33:
004BAEF8  8B CB                     MOV ECX,EBX
004BAEFA  E8 BB 8D F4 FF            CALL 0x00403cba
004BAEFF  EB 73                     JMP 0x004baf74
switchD_004bae88::caseD_4c:
004BAF01  8B CB                     MOV ECX,EBX
004BAF03  E8 77 8C F4 FF            CALL 0x00403b7f
004BAF08  EB 6A                     JMP 0x004baf74
switchD_004bae88::caseD_43:
004BAF0A  8B CB                     MOV ECX,EBX
004BAF0C  E8 65 9F F4 FF            CALL 0x00404e76
004BAF11  EB 61                     JMP 0x004baf74
switchD_004bae88::caseD_48:
004BAF13  8B CB                     MOV ECX,EBX
004BAF15  E8 EE 94 F4 FF            CALL 0x00404408
004BAF1A  EB 58                     JMP 0x004baf74
switchD_004bae88::caseD_6a:
004BAF1C  8B CB                     MOV ECX,EBX
004BAF1E  E8 62 6D F4 FF            CALL 0x00401c85
004BAF23  EB 4F                     JMP 0x004baf74
switchD_004bae88::caseD_36:
004BAF25  8B CB                     MOV ECX,EBX
004BAF27  E8 70 7E F4 FF            CALL 0x00402d9c
004BAF2C  EB 46                     JMP 0x004baf74
switchD_004bae88::caseD_70:
004BAF2E  8B CB                     MOV ECX,EBX
004BAF30  E8 78 9A F4 FF            CALL 0x004049ad
004BAF35  EB 3D                     JMP 0x004baf74
switchD_004bae88::caseD_64:
004BAF37  8B CB                     MOV ECX,EBX
004BAF39  E8 70 67 F4 FF            CALL 0x004016ae
004BAF3E  EB 34                     JMP 0x004baf74
switchD_004bae88::caseD_69:
004BAF40  8B CB                     MOV ECX,EBX
004BAF42  E8 94 76 F4 FF            CALL 0x004025db
004BAF47  EB 2B                     JMP 0x004baf74
switchD_004bae88::caseD_68:
004BAF49  8B CB                     MOV ECX,EBX
004BAF4B  E8 30 9F F4 FF            CALL 0x00404e80
004BAF50  EB 22                     JMP 0x004baf74
switchD_004bae88::caseD_6e:
004BAF52  8B CB                     MOV ECX,EBX
004BAF54  E8 40 77 F4 FF            CALL 0x00402699
004BAF59  EB 19                     JMP 0x004baf74
switchD_004bae88::caseD_37:
004BAF5B  8B CB                     MOV ECX,EBX
004BAF5D  E8 F1 67 F4 FF            CALL 0x00401753
004BAF62  EB 10                     JMP 0x004baf74
switchD_004bae88::caseD_63:
004BAF64  8B CB                     MOV ECX,EBX
004BAF66  E8 E2 90 F4 FF            CALL 0x0040404d
004BAF6B  EB 07                     JMP 0x004baf74
switchD_004bae88::caseD_6f:
004BAF6D  8B CB                     MOV ECX,EBX
004BAF6F  E8 43 8B F4 FF            CALL 0x00403ab7
switchD_004bae88::caseD_35:
004BAF74  39 BB DC 03 00 00         CMP dword ptr [EBX + 0x3dc],EDI
004BAF7A  74 07                     JZ 0x004baf83
004BAF7C  8B CB                     MOV ECX,EBX
004BAF7E  E8 51 9B F4 FF            CALL 0x00404ad4
LAB_004baf83:
004BAF83  8B CB                     MOV ECX,EBX
004BAF85  E8 A6 A8 F4 FF            CALL 0x00405830
004BAF8A  39 BB 10 04 00 00         CMP dword ptr [EBX + 0x410],EDI
004BAF90  74 23                     JZ 0x004bafb5
004BAF92  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004BAF97  8B 93 1C 04 00 00         MOV EDX,dword ptr [EBX + 0x41c]
004BAF9D  8B B3 18 04 00 00         MOV ESI,dword ptr [EBX + 0x418]
004BAFA3  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
004BAFA9  03 D6                     ADD EDX,ESI
004BAFAB  3B CA                     CMP ECX,EDX
004BAFAD  72 06                     JC 0x004bafb5
004BAFAF  89 BB 10 04 00 00         MOV dword ptr [EBX + 0x410],EDI
LAB_004bafb5:
004BAFB5  39 BB 20 04 00 00         CMP dword ptr [EBX + 0x420],EDI
004BAFBB  74 22                     JZ 0x004bafdf
004BAFBD  8B 8B 28 04 00 00         MOV ECX,dword ptr [EBX + 0x428]
004BAFC3  8B 93 24 04 00 00         MOV EDX,dword ptr [EBX + 0x424]
004BAFC9  03 CA                     ADD ECX,EDX
004BAFCB  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004BAFD1  39 8A E4 00 00 00         CMP dword ptr [EDX + 0xe4],ECX
004BAFD7  72 06                     JC 0x004bafdf
004BAFD9  89 BB 20 04 00 00         MOV dword ptr [EBX + 0x420],EDI
LAB_004bafdf:
004BAFDF  39 BB A0 04 00 00         CMP dword ptr [EBX + 0x4a0],EDI
004BAFE5  74 61                     JZ 0x004bb048
004BAFE7  8B 03                     MOV EAX,dword ptr [EBX]
004BAFE9  8B CB                     MOV ECX,EBX
004BAFEB  FF 50 7C                  CALL dword ptr [EAX + 0x7c]
004BAFEE  83 F8 64                  CMP EAX,0x64
004BAFF1  7C 08                     JL 0x004baffb
004BAFF3  89 BB A0 04 00 00         MOV dword ptr [EBX + 0x4a0],EDI
004BAFF9  EB 4D                     JMP 0x004bb048
LAB_004baffb:
004BAFFB  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004BB001  8B 8B A4 04 00 00         MOV ECX,dword ptr [EBX + 0x4a4]
004BB007  83 C1 7D                  ADD ECX,0x7d
004BB00A  39 8A E4 00 00 00         CMP dword ptr [EDX + 0xe4],ECX
004BB010  72 36                     JC 0x004bb048
004BB012  8B 8B A8 04 00 00         MOV ECX,dword ptr [EBX + 0x4a8]
004BB018  8B 83 AC 04 00 00         MOV EAX,dword ptr [EBX + 0x4ac]
004BB01E  F7 D9                     NEG ECX
004BB020  1B C9                     SBB ECX,ECX
004BB022  68 FF FF 00 00            PUSH 0xffff
004BB027  83 E1 05                  AND ECX,0x5
004BB02A  50                        PUSH EAX
004BB02B  83 C1 05                  ADD ECX,0x5
004BB02E  51                        PUSH ECX
004BB02F  8B CB                     MOV ECX,EBX
004BB031  E8 54 7B F4 FF            CALL 0x00402b8a
004BB036  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004BB03C  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004BB042  89 83 A4 04 00 00         MOV dword ptr [EBX + 0x4a4],EAX
LAB_004bb048:
004BB048  8B CB                     MOV ECX,EBX
004BB04A  E8 A0 61 F4 FF            CALL 0x004011ef
004BB04F  39 BB C0 04 00 00         CMP dword ptr [EBX + 0x4c0],EDI
004BB055  0F 84 17 20 00 00         JZ 0x004bd072
004BB05B  8B 8B 1F 06 00 00         MOV ECX,dword ptr [EBX + 0x61f]
004BB061  3B CF                     CMP ECX,EDI
004BB063  75 36                     JNZ 0x004bb09b
004BB065  E8 83 8B F4 FF            CALL 0x00403bed
004BB06A  8B 13                     MOV EDX,dword ptr [EBX]
004BB06C  8B CB                     MOV ECX,EBX
004BB06E  89 83 1F 06 00 00         MOV dword ptr [EBX + 0x61f],EAX
004BB074  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004BB077  8B 8B 1F 06 00 00         MOV ECX,dword ptr [EBX + 0x61f]
004BB07D  50                        PUSH EAX
004BB07E  6A 02                     PUSH 0x2
004BB080  E8 94 87 F4 FF            CALL 0x00403819
004BB085  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BB08B  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BB090  33 C0                     XOR EAX,EAX
004BB092  5F                        POP EDI
004BB093  5E                        POP ESI
004BB094  5B                        POP EBX
004BB095  8B E5                     MOV ESP,EBP
004BB097  5D                        POP EBP
004BB098  C2 04 00                  RET 0x4
LAB_004bb09b:
004BB09B  8B 43 2C                  MOV EAX,dword ptr [EBX + 0x2c]
004BB09E  6A 64                     PUSH 0x64
004BB0A0  3B C7                     CMP EAX,EDI
004BB0A2  0F BF 43 6C               MOVSX EAX,word ptr [EBX + 0x6c]
004BB0A6  50                        PUSH EAX
004BB0A7  75 2D                     JNZ 0x004bb0d6
004BB0A9  0F BF 53 45               MOVSX EDX,word ptr [EBX + 0x45]
004BB0AD  0F BF 43 43               MOVSX EAX,word ptr [EBX + 0x43]
004BB0B1  83 C2 14                  ADD EDX,0x14
004BB0B4  52                        PUSH EDX
004BB0B5  50                        PUSH EAX
004BB0B6  0F BF 53 41               MOVSX EDX,word ptr [EBX + 0x41]
004BB0BA  52                        PUSH EDX
004BB0BB  E8 9E 92 F4 FF            CALL 0x0040435e
004BB0C0  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BB0C6  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BB0CB  33 C0                     XOR EAX,EAX
004BB0CD  5F                        POP EDI
004BB0CE  5E                        POP ESI
004BB0CF  5B                        POP EBX
004BB0D0  8B E5                     MOV ESP,EBP
004BB0D2  5D                        POP EBP
004BB0D3  C2 04 00                  RET 0x4
LAB_004bb0d6:
004BB0D6  8B 83 B8 05 00 00         MOV EAX,dword ptr [EBX + 0x5b8]
004BB0DC  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004BB0DF  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004BB0E2  8D 04 D5 78 00 00 00      LEA EAX,[EDX*0x8 + 0x78]
004BB0E9  50                        PUSH EAX
004BB0EA  8B 83 B4 05 00 00         MOV EAX,dword ptr [EBX + 0x5b4]
004BB0F0  8B 9B B0 05 00 00         MOV EBX,dword ptr [EBX + 0x5b0]
004BB0F6  40                        INC EAX
004BB0F7  43                        INC EBX
004BB0F8  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004BB0FB  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
004BB0FE  8D 04 D0                  LEA EAX,[EAX + EDX*0x8]
004BB101  50                        PUSH EAX
004BB102  8D 04 9B                  LEA EAX,[EBX + EBX*0x4]
004BB105  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004BB108  8D 04 D3                  LEA EAX,[EBX + EDX*0x8]
004BB10B  50                        PUSH EAX
004BB10C  E8 4D 92 F4 FF            CALL 0x0040435e
004BB111  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BB117  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BB11C  33 C0                     XOR EAX,EAX
004BB11E  5F                        POP EDI
004BB11F  5E                        POP ESI
004BB120  5B                        POP EBX
004BB121  8B E5                     MOV ESP,EBP
004BB123  5D                        POP EBP
004BB124  C2 04 00                  RET 0x4
LAB_004bb127:
004BB127  33 FF                     XOR EDI,EDI
004BB129  33 F6                     XOR ESI,ESI
LAB_004bb12b:
004BB12B  8B 8B F5 01 00 00         MOV ECX,dword ptr [EBX + 0x1f5]
004BB131  8B 54 31 1C               MOV EDX,dword ptr [ECX + ESI*0x1 + 0x1c]
004BB135  8D 04 31                  LEA EAX,[ECX + ESI*0x1]
004BB138  89 94 BD 7C FA FF FF      MOV dword ptr [EBP + EDI*0x4 + 0xfffffa7c],EDX
004BB13F  8B 48 20                  MOV ECX,dword ptr [EAX + 0x20]
004BB142  89 8C BD 28 F9 FF FF      MOV dword ptr [EBP + EDI*0x4 + 0xfffff928],ECX
004BB149  8B 08                     MOV ECX,dword ptr [EAX]
004BB14B  85 C9                     TEST ECX,ECX
004BB14D  74 33                     JZ 0x004bb182
004BB14F  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
004BB155  57                        PUSH EDI
004BB156  E8 54 91 F4 FF            CALL 0x004042af
004BB15B  57                        PUSH EDI
004BB15C  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
004BB162  89 84 BD 04 FB FF FF      MOV dword ptr [EBP + EDI*0x4 + 0xfffffb04],EAX
004BB169  E8 41 91 F4 FF            CALL 0x004042af
004BB16E  50                        PUSH EAX
004BB16F  57                        PUSH EDI
004BB170  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
004BB176  E8 AE A8 F4 FF            CALL 0x00405a29
004BB17B  89 84 BD 6C F9 FF FF      MOV dword ptr [EBP + EDI*0x4 + 0xfffff96c],EAX
LAB_004bb182:
004BB182  83 C6 24                  ADD ESI,0x24
004BB185  47                        INC EDI
004BB186  81 FE 64 02 00 00         CMP ESI,0x264
004BB18C  7C 9D                     JL 0x004bb12b
004BB18E  8B 83 FF 05 00 00         MOV EAX,dword ptr [EBX + 0x5ff]
004BB194  85 C0                     TEST EAX,EAX
004BB196  74 64                     JZ 0x004bb1fc
004BB198  33 FF                     XOR EDI,EDI
004BB19A  33 F6                     XOR ESI,ESI
LAB_004bb19c:
004BB19C  8B 8B FF 05 00 00         MOV ECX,dword ptr [EBX + 0x5ff]
004BB1A2  8B 51 20                  MOV EDX,dword ptr [ECX + 0x20]
004BB1A5  8D 04 32                  LEA EAX,[EDX + ESI*0x1]
004BB1A8  8B 54 32 1C               MOV EDX,dword ptr [EDX + ESI*0x1 + 0x1c]
004BB1AC  89 94 BD F4 F9 FF FF      MOV dword ptr [EBP + EDI*0x4 + 0xfffff9f4],EDX
004BB1B3  8B 50 20                  MOV EDX,dword ptr [EAX + 0x20]
004BB1B6  89 94 BD C0 FA FF FF      MOV dword ptr [EBP + EDI*0x4 + 0xfffffac0],EDX
004BB1BD  8B 10                     MOV EDX,dword ptr [EAX]
004BB1BF  85 D2                     TEST EDX,EDX
004BB1C1  74 2D                     JZ 0x004bb1f0
004BB1C3  57                        PUSH EDI
004BB1C4  E8 E6 90 F4 FF            CALL 0x004042af
004BB1C9  8B 8B FF 05 00 00         MOV ECX,dword ptr [EBX + 0x5ff]
004BB1CF  57                        PUSH EDI
004BB1D0  89 84 BD 38 FA FF FF      MOV dword ptr [EBP + EDI*0x4 + 0xfffffa38],EAX
004BB1D7  E8 D3 90 F4 FF            CALL 0x004042af
004BB1DC  8B 8B FF 05 00 00         MOV ECX,dword ptr [EBX + 0x5ff]
004BB1E2  50                        PUSH EAX
004BB1E3  57                        PUSH EDI
004BB1E4  E8 40 A8 F4 FF            CALL 0x00405a29
004BB1E9  89 84 BD B0 F9 FF FF      MOV dword ptr [EBP + EDI*0x4 + 0xfffff9b0],EAX
LAB_004bb1f0:
004BB1F0  83 C6 24                  ADD ESI,0x24
004BB1F3  47                        INC EDI
004BB1F4  81 FE 64 02 00 00         CMP ESI,0x264
004BB1FA  7C A0                     JL 0x004bb19c
LAB_004bb1fc:
004BB1FC  6A 01                     PUSH 0x1
004BB1FE  8B CB                     MOV ECX,EBX
004BB200  E8 F2 7A F4 FF            CALL 0x00402cf7
004BB205  33 FF                     XOR EDI,EDI
004BB207  33 F6                     XOR ESI,ESI
LAB_004bb209:
004BB209  8B 83 F5 01 00 00         MOV EAX,dword ptr [EBX + 0x1f5]
004BB20F  8B 8C BD 7C FA FF FF      MOV ECX,dword ptr [EBP + EDI*0x4 + 0xfffffa7c]
004BB216  89 4C 30 1C               MOV dword ptr [EAX + ESI*0x1 + 0x1c],ECX
004BB21A  8B 93 F5 01 00 00         MOV EDX,dword ptr [EBX + 0x1f5]
004BB220  8B 84 BD 28 F9 FF FF      MOV EAX,dword ptr [EBP + EDI*0x4 + 0xfffff928]
004BB227  89 44 32 20               MOV dword ptr [EDX + ESI*0x1 + 0x20],EAX
004BB22B  8B 8B F5 01 00 00         MOV ECX,dword ptr [EBX + 0x1f5]
004BB231  03 CE                     ADD ECX,ESI
004BB233  8B 11                     MOV EDX,dword ptr [ECX]
004BB235  85 D2                     TEST EDX,EDX
004BB237  74 35                     JZ 0x004bb26e
004BB239  8B 84 BD 04 FB FF FF      MOV EAX,dword ptr [EBP + EDI*0x4 + 0xfffffb04]
004BB240  8B 49 04                  MOV ECX,dword ptr [ECX + 0x4]
004BB243  C1 E0 02                  SHL EAX,0x2
004BB246  8B 54 10 31               MOV EDX,dword ptr [EAX + EDX*0x1 + 0x31]
004BB24A  89 14 01                  MOV dword ptr [ECX + EAX*0x1],EDX
004BB24D  8B 84 BD 6C F9 FF FF      MOV EAX,dword ptr [EBP + EDI*0x4 + 0xfffff96c]
004BB254  50                        PUSH EAX
004BB255  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
004BB25B  57                        PUSH EDI
004BB25C  E8 4E 90 F4 FF            CALL 0x004042af
004BB261  50                        PUSH EAX
004BB262  57                        PUSH EDI
004BB263  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
004BB269  E8 D3 9E F4 FF            CALL 0x00405141
LAB_004bb26e:
004BB26E  83 C6 24                  ADD ESI,0x24
004BB271  47                        INC EDI
004BB272  81 FE 64 02 00 00         CMP ESI,0x264
004BB278  7C 8F                     JL 0x004bb209
004BB27A  8B 83 FF 05 00 00         MOV EAX,dword ptr [EBX + 0x5ff]
004BB280  85 C0                     TEST EAX,EAX
004BB282  0F 84 EA 1D 00 00         JZ 0x004bd072
004BB288  33 FF                     XOR EDI,EDI
004BB28A  33 F6                     XOR ESI,ESI
LAB_004bb28c:
004BB28C  8B 8B FF 05 00 00         MOV ECX,dword ptr [EBX + 0x5ff]
004BB292  8B 84 BD F4 F9 FF FF      MOV EAX,dword ptr [EBP + EDI*0x4 + 0xfffff9f4]
004BB299  8B 51 20                  MOV EDX,dword ptr [ECX + 0x20]
004BB29C  89 44 32 1C               MOV dword ptr [EDX + ESI*0x1 + 0x1c],EAX
004BB2A0  8B 8B FF 05 00 00         MOV ECX,dword ptr [EBX + 0x5ff]
004BB2A6  8B 84 BD C0 FA FF FF      MOV EAX,dword ptr [EBP + EDI*0x4 + 0xfffffac0]
004BB2AD  8B 51 20                  MOV EDX,dword ptr [ECX + 0x20]
004BB2B0  89 44 32 20               MOV dword ptr [EDX + ESI*0x1 + 0x20],EAX
004BB2B4  8B 8B FF 05 00 00         MOV ECX,dword ptr [EBX + 0x5ff]
004BB2BA  8B 51 20                  MOV EDX,dword ptr [ECX + 0x20]
004BB2BD  8D 0C 32                  LEA ECX,[EDX + ESI*0x1]
004BB2C0  8B 14 32                  MOV EDX,dword ptr [EDX + ESI*0x1]
004BB2C3  85 D2                     TEST EDX,EDX
004BB2C5  74 35                     JZ 0x004bb2fc
004BB2C7  8B 84 BD 38 FA FF FF      MOV EAX,dword ptr [EBP + EDI*0x4 + 0xfffffa38]
004BB2CE  8B 49 04                  MOV ECX,dword ptr [ECX + 0x4]
004BB2D1  C1 E0 02                  SHL EAX,0x2
004BB2D4  8B 54 10 31               MOV EDX,dword ptr [EAX + EDX*0x1 + 0x31]
004BB2D8  89 14 01                  MOV dword ptr [ECX + EAX*0x1],EDX
004BB2DB  8B 84 BD B0 F9 FF FF      MOV EAX,dword ptr [EBP + EDI*0x4 + 0xfffff9b0]
004BB2E2  8B 8B FF 05 00 00         MOV ECX,dword ptr [EBX + 0x5ff]
004BB2E8  50                        PUSH EAX
004BB2E9  57                        PUSH EDI
004BB2EA  E8 C0 8F F4 FF            CALL 0x004042af
004BB2EF  8B 8B FF 05 00 00         MOV ECX,dword ptr [EBX + 0x5ff]
004BB2F5  50                        PUSH EAX
004BB2F6  57                        PUSH EDI
004BB2F7  E8 45 9E F4 FF            CALL 0x00405141
LAB_004bb2fc:
004BB2FC  83 C6 24                  ADD ESI,0x24
004BB2FF  47                        INC EDI
004BB300  81 FE 64 02 00 00         CMP ESI,0x264
004BB306  7C 84                     JL 0x004bb28c
004BB308  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BB30E  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BB313  33 C0                     XOR EAX,EAX
004BB315  5F                        POP EDI
004BB316  5E                        POP ESI
004BB317  5B                        POP EBX
004BB318  8B E5                     MOV ESP,EBP
004BB31A  5D                        POP EBP
004BB31B  C2 04 00                  RET 0x4
LAB_004bb31e:
004BB31E  2D 0F 01 00 00            SUB EAX,0x10f
004BB323  0F 84 9A 03 00 00         JZ 0x004bb6c3
004BB329  48                        DEC EAX
004BB32A  0F 85 42 1D 00 00         JNZ 0x004bd072
004BB330  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004BB333  B9 07 00 00 00            MOV ECX,0x7
004BB338  8D 7D A8                  LEA EDI,[EBP + -0x58]
004BB33B  8B 72 14                  MOV ESI,dword ptr [EDX + 0x14]
004BB33E  F3 A5                     MOVSD.REP ES:EDI,ESI
004BB340  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
004BB343  33 F6                     XOR ESI,ESI
004BB345  3D 9B 00 00 00            CMP EAX,0x9b
004BB34A  7C 33                     JL 0x004bb37f
004BB34C  3D 9E 00 00 00            CMP EAX,0x9e
004BB351  7E 07                     JLE 0x004bb35a
004BB353  3D A5 00 00 00            CMP EAX,0xa5
004BB358  75 25                     JNZ 0x004bb37f
LAB_004bb35a:
004BB35A  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004BB35D  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004BB363  6A 68                     PUSH 0x68
004BB365  50                        PUSH EAX
004BB366  E8 00 65 F4 FF            CALL 0x0040186b
004BB36B  85 C0                     TEST EAX,EAX
004BB36D  74 10                     JZ 0x004bb37f
004BB36F  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
004BB372  8B CB                     MOV ECX,EBX
004BB374  99                        CDQ
004BB375  2B C2                     SUB EAX,EDX
004BB377  D1 F8                     SAR EAX,0x1
004BB379  50                        PUSH EAX
004BB37A  E8 EF 89 F4 FF            CALL 0x00403d6e
LAB_004bb37f:
004BB37F  83 BB AC 05 00 00 68      CMP dword ptr [EBX + 0x5ac],0x68
004BB386  75 0B                     JNZ 0x004bb393
004BB388  8D 4D A8                  LEA ECX,[EBP + -0x58]
004BB38B  51                        PUSH ECX
004BB38C  8B CB                     MOV ECX,EBX
004BB38E  E8 C9 A0 F4 FF            CALL 0x0040545c
LAB_004bb393:
004BB393  81 7D AC 9A 00 00 00      CMP dword ptr [EBP + -0x54],0x9a
004BB39A  75 64                     JNZ 0x004bb400
004BB39C  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
004BB39F  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004BB3A5  68 93 00 00 00            PUSH 0x93
004BB3AA  52                        PUSH EDX
004BB3AB  E8 BB 64 F4 FF            CALL 0x0040186b
004BB3B0  8B F8                     MOV EDI,EAX
004BB3B2  8B 83 A0 04 00 00         MOV EAX,dword ptr [EBX + 0x4a0]
004BB3B8  85 C0                     TEST EAX,EAX
004BB3BA  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
004BB3BD  74 08                     JZ 0x004bb3c7
004BB3BF  3B BB A8 04 00 00         CMP EDI,dword ptr [EBX + 0x4a8]
004BB3C5  7E 0F                     JLE 0x004bb3d6
LAB_004bb3c7:
004BB3C7  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
004BB3CA  89 BB A8 04 00 00         MOV dword ptr [EBX + 0x4a8],EDI
004BB3D0  89 83 AC 04 00 00         MOV dword ptr [EBX + 0x4ac],EAX
LAB_004bb3d6:
004BB3D6  C7 83 A0 04 00 00 01 00 00 00  MOV dword ptr [EBX + 0x4a0],0x1
004BB3E0  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004BB3E6  8B 03                     MOV EAX,dword ptr [EBX]
004BB3E8  6A 00                     PUSH 0x0
004BB3EA  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
004BB3F0  8B CB                     MOV ECX,EBX
004BB3F2  89 93 A4 04 00 00         MOV dword ptr [EBX + 0x4a4],EDX
004BB3F8  FF 90 C8 00 00 00         CALL dword ptr [EAX + 0xc8]
004BB3FE  EB 03                     JMP 0x004bb403
LAB_004bb400:
004BB400  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
LAB_004bb403:
004BB403  8B 83 10 04 00 00         MOV EAX,dword ptr [EBX + 0x410]
004BB409  85 C0                     TEST EAX,EAX
004BB40B  74 22                     JZ 0x004bb42f
004BB40D  8B 8B 14 04 00 00         MOV ECX,dword ptr [EBX + 0x414]
004BB413  B8 1F 85 EB 51            MOV EAX,0x51eb851f
004BB418  0F AF 4D A8               IMUL ECX,dword ptr [EBP + -0x58]
004BB41C  F7 E9                     IMUL ECX
004BB41E  C1 FA 05                  SAR EDX,0x5
004BB421  8B CA                     MOV ECX,EDX
004BB423  C1 E9 1F                  SHR ECX,0x1f
004BB426  03 D1                     ADD EDX,ECX
004BB428  8B CA                     MOV ECX,EDX
004BB42A  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
004BB42D  EB 03                     JMP 0x004bb432
LAB_004bb42f:
004BB42F  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
LAB_004bb432:
004BB432  8B 83 C0 04 00 00         MOV EAX,dword ptr [EBX + 0x4c0]
004BB438  85 C0                     TEST EAX,EAX
004BB43A  74 21                     JZ 0x004bb45d
004BB43C  0F AF C1                  IMUL EAX,ECX
004BB43F  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004BB442  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004BB445  B8 AD 8B DB 68            MOV EAX,0x68db8bad
004BB44A  D1 E1                     SHL ECX,0x1
004BB44C  F7 E9                     IMUL ECX
004BB44E  C1 FA 0C                  SAR EDX,0xc
004BB451  8B C2                     MOV EAX,EDX
004BB453  C1 E8 1F                  SHR EAX,0x1f
004BB456  03 D0                     ADD EDX,EAX
004BB458  8B CA                     MOV ECX,EDX
004BB45A  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
LAB_004bb45d:
004BB45D  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
004BB460  83 F8 65                  CMP EAX,0x65
004BB463  0F 84 74 01 00 00         JZ 0x004bb5dd
004BB469  83 F8 42                  CMP EAX,0x42
004BB46C  75 68                     JNZ 0x004bb4d6
004BB46E  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
004BB471  51                        PUSH ECX
004BB472  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004BB478  E8 3A 95 F4 FF            CALL 0x004049b7
004BB47D  25 FF 00 00 00            AND EAX,0xff
004BB482  48                        DEC EAX
004BB483  74 16                     JZ 0x004bb49b
004BB485  48                        DEC EAX
004BB486  74 0B                     JZ 0x004bb493
004BB488  48                        DEC EAX
004BB489  75 26                     JNZ 0x004bb4b1
004BB48B  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
004BB48E  6A 6A                     PUSH 0x6a
004BB490  52                        PUSH EDX
004BB491  EB 0E                     JMP 0x004bb4a1
LAB_004bb493:
004BB493  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004BB496  6A 2D                     PUSH 0x2d
004BB498  50                        PUSH EAX
004BB499  EB 06                     JMP 0x004bb4a1
LAB_004bb49b:
004BB49B  8B 4B 24                  MOV ECX,dword ptr [EBX + 0x24]
004BB49E  6A 2D                     PUSH 0x2d
004BB4A0  51                        PUSH ECX
LAB_004bb4a1:
004BB4A1  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004BB4A7  E8 BF 63 F4 FF            CALL 0x0040186b
004BB4AC  8B F8                     MOV EDI,EAX
004BB4AE  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
LAB_004bb4b1:
004BB4B1  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
004BB4B4  4F                        DEC EDI
004BB4B5  75 18                     JNZ 0x004bb4cf
004BB4B7  8D 14 C9                  LEA EDX,[ECX + ECX*0x8]
004BB4BA  B8 67 66 66 66            MOV EAX,0x66666667
004BB4BF  F7 EA                     IMUL EDX
004BB4C1  C1 FA 02                  SAR EDX,0x2
004BB4C4  8B C2                     MOV EAX,EDX
004BB4C6  8B F1                     MOV ESI,ECX
004BB4C8  C1 E8 1F                  SHR EAX,0x1f
004BB4CB  03 D0                     ADD EDX,EAX
004BB4CD  2B F2                     SUB ESI,EDX
LAB_004bb4cf:
004BB4CF  2B CE                     SUB ECX,ESI
004BB4D1  E9 07 01 00 00            JMP 0x004bb5dd
LAB_004bb4d6:
004BB4D6  05 65 FF FF FF            ADD EAX,0xffffff65
004BB4DB  83 F8 24                  CMP EAX,0x24
004BB4DE  77 77                     JA 0x004bb557
004BB4E0  33 C9                     XOR ECX,ECX
004BB4E2  8A 88 A0 D2 4B 00         MOV CL,byte ptr [EAX + 0x4bd2a0]
switchD_004bb4e8::switchD:
004BB4E8  FF 24 8D 98 D2 4B 00      JMP dword ptr [ECX*0x4 + 0x4bd298]
switchD_004bb4e8::caseD_9b:
004BB4EF  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
004BB4F2  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004BB4F8  6A 67                     PUSH 0x67
004BB4FA  52                        PUSH EDX
004BB4FB  E8 6B 63 F4 FF            CALL 0x0040186b
004BB500  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
004BB503  8B F8                     MOV EDI,EAX
004BB505  8B D7                     MOV EDX,EDI
004BB507  33 C0                     XOR EAX,EAX
004BB509  4A                        DEC EDX
004BB50A  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
004BB50D  74 2B                     JZ 0x004bb53a
004BB50F  4A                        DEC EDX
004BB510  74 15                     JZ 0x004bb527
004BB512  4A                        DEC EDX
004BB513  75 3D                     JNZ 0x004bb552
004BB515  8D 14 8D 00 00 00 00      LEA EDX,[ECX*0x4 + 0x0]
004BB51C  B8 67 66 66 66            MOV EAX,0x66666667
004BB521  F7 EA                     IMUL EDX
004BB523  D1 FA                     SAR EDX,0x1
004BB525  EB 20                     JMP 0x004bb547
LAB_004bb527:
004BB527  8B D1                     MOV EDX,ECX
004BB529  B8 67 66 66 66            MOV EAX,0x66666667
004BB52E  C1 E2 04                  SHL EDX,0x4
004BB531  03 D1                     ADD EDX,ECX
004BB533  F7 EA                     IMUL EDX
004BB535  C1 FA 03                  SAR EDX,0x3
004BB538  EB 0D                     JMP 0x004bb547
LAB_004bb53a:
004BB53A  8D 14 C9                  LEA EDX,[ECX + ECX*0x8]
004BB53D  B8 67 66 66 66            MOV EAX,0x66666667
004BB542  F7 EA                     IMUL EDX
004BB544  C1 FA 02                  SAR EDX,0x2
LAB_004bb547:
004BB547  8B C2                     MOV EAX,EDX
004BB549  C1 E8 1F                  SHR EAX,0x1f
004BB54C  03 D0                     ADD EDX,EAX
004BB54E  8B C1                     MOV EAX,ECX
004BB550  2B C2                     SUB EAX,EDX
LAB_004bb552:
004BB552  2B C8                     SUB ECX,EAX
004BB554  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
switchD_004bb4e8::caseD_a1:
004BB557  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
004BB55A  51                        PUSH ECX
004BB55B  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004BB561  E8 51 94 F4 FF            CALL 0x004049b7
004BB566  25 FF 00 00 00            AND EAX,0xff
004BB56B  48                        DEC EAX
004BB56C  74 19                     JZ 0x004bb587
004BB56E  48                        DEC EAX
004BB56F  74 0B                     JZ 0x004bb57c
004BB571  48                        DEC EAX
004BB572  75 29                     JNZ 0x004bb59d
004BB574  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
004BB577  6A 65                     PUSH 0x65
004BB579  52                        PUSH EDX
004BB57A  EB 11                     JMP 0x004bb58d
LAB_004bb57c:
004BB57C  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004BB57F  68 81 00 00 00            PUSH 0x81
004BB584  50                        PUSH EAX
004BB585  EB 06                     JMP 0x004bb58d
LAB_004bb587:
004BB587  8B 4B 24                  MOV ECX,dword ptr [EBX + 0x24]
004BB58A  6A 04                     PUSH 0x4
004BB58C  51                        PUSH ECX
LAB_004bb58d:
004BB58D  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004BB593  E8 D3 62 F4 FF            CALL 0x0040186b
004BB598  8B F8                     MOV EDI,EAX
004BB59A  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
LAB_004bb59d:
004BB59D  33 F6                     XOR ESI,ESI
004BB59F  4F                        DEC EDI
004BB5A0  74 1C                     JZ 0x004bb5be
004BB5A2  4F                        DEC EDI
004BB5A3  74 0F                     JZ 0x004bb5b4
004BB5A5  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
004BB5A8  4F                        DEC EDI
004BB5A9  75 32                     JNZ 0x004bb5dd
004BB5AB  8D 14 8D 00 00 00 00      LEA EDX,[ECX*0x4 + 0x0]
004BB5B2  EB 14                     JMP 0x004bb5c8
LAB_004bb5b4:
004BB5B4  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
004BB5B7  8D 14 49                  LEA EDX,[ECX + ECX*0x2]
004BB5BA  D1 E2                     SHL EDX,0x1
004BB5BC  EB 0A                     JMP 0x004bb5c8
LAB_004bb5be:
004BB5BE  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
004BB5C1  8D 14 CD 00 00 00 00      LEA EDX,[ECX*0x8 + 0x0]
LAB_004bb5c8:
004BB5C8  B8 67 66 66 66            MOV EAX,0x66666667
004BB5CD  8B F1                     MOV ESI,ECX
004BB5CF  F7 EA                     IMUL EDX
004BB5D1  C1 FA 02                  SAR EDX,0x2
004BB5D4  8B C2                     MOV EAX,EDX
004BB5D6  C1 E8 1F                  SHR EAX,0x1f
004BB5D9  03 D0                     ADD EDX,EAX
004BB5DB  2B F2                     SUB ESI,EDX
LAB_004bb5dd:
004BB5DD  81 FE C8 00 00 00         CMP ESI,0xc8
004BB5E3  7E 05                     JLE 0x004bb5ea
004BB5E5  BE C8 00 00 00            MOV ESI,0xc8
LAB_004bb5ea:
004BB5EA  2B CE                     SUB ECX,ESI
004BB5EC  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
004BB5EF  79 05                     JNS 0x004bb5f6
004BB5F1  33 C9                     XOR ECX,ECX
004BB5F3  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
LAB_004bb5f6:
004BB5F6  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
004BB5F9  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
004BB5FC  81 E2 FF FF 00 00         AND EDX,0xffff
004BB602  52                        PUSH EDX
004BB603  50                        PUSH EAX
004BB604  51                        PUSH ECX
004BB605  8B CB                     MOV ECX,EBX
004BB607  E8 7E 75 F4 FF            CALL 0x00402b8a
004BB60C  83 BB 45 02 00 00 01      CMP dword ptr [EBX + 0x245],0x1
004BB613  0F 84 59 1A 00 00         JZ 0x004bd072
004BB619  8B 0D BC 17 81 00         MOV ECX,dword ptr [0x008117bc]
004BB61F  85 C9                     TEST ECX,ECX
004BB621  74 36                     JZ 0x004bb659
004BB623  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
004BB626  85 C0                     TEST EAX,EAX
004BB628  74 2F                     JZ 0x004bb659
004BB62A  66 8B 43 32               MOV AX,word ptr [EBX + 0x32]
004BB62E  66 8B 53 24               MOV DX,word ptr [EBX + 0x24]
004BB632  66 89 45 9E               MOV word ptr [EBP + -0x62],AX
004BB636  66 8B 45 B4               MOV AX,word ptr [EBP + -0x4c]
004BB63A  66 89 55 9C               MOV word ptr [EBP + -0x64],DX
004BB63E  66 8B 55 B0               MOV DX,word ptr [EBP + -0x50]
004BB642  66 89 45 A2               MOV word ptr [EBP + -0x5e],AX
004BB646  C7 45 98 D5 5D 00 00      MOV dword ptr [EBP + -0x68],0x5dd5
004BB64D  66 89 55 A0               MOV word ptr [EBP + -0x60],DX
004BB651  8B 11                     MOV EDX,dword ptr [ECX]
004BB653  8D 45 88                  LEA EAX,[EBP + -0x78]
004BB656  50                        PUSH EAX
004BB657  FF 12                     CALL dword ptr [EDX]
LAB_004bb659:
004BB659  8B 0D 98 17 81 00         MOV ECX,dword ptr [0x00811798]
004BB65F  85 C9                     TEST ECX,ECX
004BB661  74 1E                     JZ 0x004bb681
004BB663  8B 93 AC 05 00 00         MOV EDX,dword ptr [EBX + 0x5ac]
004BB669  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004BB66C  52                        PUSH EDX
004BB66D  8B 93 B4 05 00 00         MOV EDX,dword ptr [EBX + 0x5b4]
004BB673  50                        PUSH EAX
004BB674  8B 83 B0 05 00 00         MOV EAX,dword ptr [EBX + 0x5b0]
004BB67A  52                        PUSH EDX
004BB67B  50                        PUSH EAX
004BB67C  E8 43 72 F4 FF            CALL 0x004028c4
LAB_004bb681:
004BB681  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004BB687  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
004BB68D  89 93 54 04 00 00         MOV dword ptr [EBX + 0x454],EDX
004BB693  8B 83 58 04 00 00         MOV EAX,dword ptr [EBX + 0x458]
004BB699  3D FE 00 00 00            CMP EAX,0xfe
004BB69E  0F 84 CE 19 00 00         JZ 0x004bd072
004BB6A4  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
004BB6A7  89 83 58 04 00 00         MOV dword ptr [EBX + 0x458],EAX
004BB6AD  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BB6B3  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BB6B8  33 C0                     XOR EAX,EAX
004BB6BA  5F                        POP EDI
004BB6BB  5E                        POP ESI
004BB6BC  5B                        POP EBX
004BB6BD  8B E5                     MOV ESP,EBP
004BB6BF  5D                        POP EBP
004BB6C0  C2 04 00                  RET 0x4
LAB_004bb6c3:
004BB6C3  B9 FD 00 00 00            MOV ECX,0xfd
004BB6C8  33 C0                     XOR EAX,EAX
004BB6CA  8D BD 48 FB FF FF         LEA EDI,[EBP + 0xfffffb48]
004BB6D0  8B 53 2C                  MOV EDX,dword ptr [EBX + 0x2c]
004BB6D3  F3 AB                     STOSD.REP ES:EDI
004BB6D5  8B 4B 24                  MOV ECX,dword ptr [EBX + 0x24]
004BB6D8  33 F6                     XOR ESI,ESI
004BB6DA  66 AB                     STOSW ES:EDI
004BB6DC  3B DE                     CMP EBX,ESI
004BB6DE  89 75 C4                  MOV dword ptr [EBP + -0x3c],ESI
004BB6E1  89 75 C8                  MOV dword ptr [EBP + -0x38],ESI
004BB6E4  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
004BB6E7  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
004BB6EA  89 75 CC                  MOV dword ptr [EBP + -0x34],ESI
004BB6ED  C7 85 54 FB FF FF 02 00 00 00  MOV dword ptr [EBP + 0xfffffb54],0x2
004BB6F7  C7 85 50 FB FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffffb50],0x1
004BB701  89 8D 4C FB FF FF         MOV dword ptr [EBP + 0xfffffb4c],ECX
004BB707  89 95 58 FB FF FF         MOV dword ptr [EBP + 0xfffffb58],EDX
004BB70D  C7 85 48 FB FF FF E8 03 00 00  MOV dword ptr [EBP + 0xfffffb48],0x3e8
004BB717  74 06                     JZ 0x004bb71f
004BB719  8D B3 AC 05 00 00         LEA ESI,[EBX + 0x5ac]
LAB_004bb71f:
004BB71F  B9 10 00 00 00            MOV ECX,0x10
004BB724  8D BD 5C FB FF FF         LEA EDI,[EBP + 0xfffffb5c]
004BB72A  F3 A5                     MOVSD.REP ES:EDI,ESI
004BB72C  66 A5                     MOVSW ES:EDI,ESI
004BB72E  85 DB                     TEST EBX,EBX
004BB730  A4                        MOVSB ES:EDI,ESI
004BB731  74 08                     JZ 0x004bb73b
004BB733  8D B3 31 02 00 00         LEA ESI,[EBX + 0x231]
004BB739  EB 02                     JMP 0x004bb73d
LAB_004bb73b:
004BB73B  33 F6                     XOR ESI,ESI
LAB_004bb73d:
004BB73D  B9 DE 00 00 00            MOV ECX,0xde
004BB742  8D BD 9F FB FF FF         LEA EDI,[EBP + 0xfffffb9f]
004BB748  F3 A5                     MOVSD.REP ES:EDI,ESI
004BB74A  66 A5                     MOVSW ES:EDI,ESI
004BB74C  8D 85 1E FF FF FF         LEA EAX,[EBP + 0xffffff1e]
004BB752  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
004BB758  A4                        MOVSB ES:EDI,ESI
004BB759  50                        PUSH EAX
004BB75A  C7 85 1A FF FF FF F6 03 00 00  MOV dword ptr [EBP + 0xffffff1a],0x3f6
004BB764  E8 6B 61 F4 FF            CALL 0x004018d4
004BB769  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
004BB76C  8B 83 D4 03 00 00         MOV EAX,dword ptr [EBX + 0x3d4]
004BB772  8B 8B 35 02 00 00         MOV ECX,dword ptr [EBX + 0x235]
004BB778  6B C0 27                  IMUL EAX,EAX,0x27
004BB77B  8B B5 1A FF FF FF         MOV ESI,dword ptr [EBP + 0xffffff1a]
004BB781  8B 14 8D 10 1A 79 00      MOV EDX,dword ptr [ECX*0x4 + 0x791a10]
004BB788  03 C6                     ADD EAX,ESI
004BB78A  85 D2                     TEST EDX,EDX
004BB78C  89 85 22 FF FF FF         MOV dword ptr [EBP + 0xffffff22],EAX
004BB792  74 1F                     JZ 0x004bb7b3
004BB794  8B 8B FF 05 00 00         MOV ECX,dword ptr [EBX + 0x5ff]
004BB79A  85 C9                     TEST ECX,ECX
004BB79C  74 15                     JZ 0x004bb7b3
004BB79E  8D 95 26 FF FF FF         LEA EDX,[EBP + 0xffffff26]
004BB7A4  52                        PUSH EDX
004BB7A5  E8 2A 61 F4 FF            CALL 0x004018d4
004BB7AA  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
004BB7AD  8B 85 22 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff22]
LAB_004bb7b3:
004BB7B3  8B 8D 1E FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff1e]
004BB7B9  8D 95 2E FF FF FF         LEA EDX,[EBP + 0xffffff2e]
004BB7BF  03 C8                     ADD ECX,EAX
004BB7C1  52                        PUSH EDX
004BB7C2  89 8D 2A FF FF FF         MOV dword ptr [EBP + 0xffffff2a],ECX
004BB7C8  8B CB                     MOV ECX,EBX
004BB7CA  E8 CB 59 F4 FF            CALL 0x0040119a
004BB7CF  8B 8D 26 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff26]
004BB7D5  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
004BB7D8  8B 85 2A FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff2a]
004BB7DE  03 C8                     ADD ECX,EAX
004BB7E0  89 8D 32 FF FF FF         MOV dword ptr [EBP + 0xffffff32],ECX
004BB7E6  8B 8B 03 06 00 00         MOV ECX,dword ptr [EBX + 0x603]
004BB7EC  85 C9                     TEST ECX,ECX
004BB7EE  74 23                     JZ 0x004bb813
004BB7F0  8D 95 36 FF FF FF         LEA EDX,[EBP + 0xffffff36]
004BB7F6  52                        PUSH EDX
004BB7F7  E8 D8 60 F4 FF            CALL 0x004018d4
004BB7FC  8B 8D 2E FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff2e]
004BB802  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004BB805  8B 85 32 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff32]
004BB80B  03 C8                     ADD ECX,EAX
004BB80D  89 8D 3A FF FF FF         MOV dword ptr [EBP + 0xffffff3a],ECX
LAB_004bb813:
004BB813  8B 83 D4 03 00 00         MOV EAX,dword ptr [EBX + 0x3d4]
004BB819  8B 8D 36 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff36]
004BB81F  83 C0 1A                  ADD EAX,0x1a
004BB822  8B BD 2E FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff2e]
004BB828  6B C0 27                  IMUL EAX,EAX,0x27
004BB82B  8B B5 26 FF FF FF         MOV ESI,dword ptr [EBP + 0xffffff26]
004BB831  8B 95 1E FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff1e]
004BB837  03 C1                     ADD EAX,ECX
004BB839  03 C7                     ADD EAX,EDI
004BB83B  03 C6                     ADD EAX,ESI
004BB83D  03 C2                     ADD EAX,EDX
004BB83F  50                        PUSH EAX
004BB840  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
004BB843  E8 C8 F3 1E 00            CALL 0x006aac10
004BB848  B9 FD 00 00 00            MOV ECX,0xfd
004BB84D  8D B5 48 FB FF FF         LEA ESI,[EBP + 0xfffffb48]
004BB853  8B F8                     MOV EDI,EAX
004BB855  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004BB858  F3 A5                     MOVSD.REP ES:EDI,ESI
004BB85A  66 A5                     MOVSW ES:EDI,ESI
004BB85C  8B 8B D4 03 00 00         MOV ECX,dword ptr [EBX + 0x3d4]
004BB862  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004BB865  8B 85 1A FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff1a]
004BB86B  6B C9 27                  IMUL ECX,ECX,0x27
004BB86E  8B B3 07 06 00 00         MOV ESI,dword ptr [EBX + 0x607]
004BB874  8D 3C 10                  LEA EDI,[EAX + EDX*0x1]
004BB877  8B D1                     MOV EDX,ECX
004BB879  C1 E9 02                  SHR ECX,0x2
004BB87C  F3 A5                     MOVSD.REP ES:EDI,ESI
004BB87E  8B CA                     MOV ECX,EDX
004BB880  83 E1 03                  AND ECX,0x3
004BB883  F3 A4                     MOVSB.REP ES:EDI,ESI
004BB885  8B 85 22 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff22]
004BB88B  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004BB88E  8B 8D 1E FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff1e]
004BB894  8B 75 C4                  MOV ESI,dword ptr [EBP + -0x3c]
004BB897  8D 3C 10                  LEA EDI,[EAX + EDX*0x1]
004BB89A  8B C1                     MOV EAX,ECX
004BB89C  C1 E9 02                  SHR ECX,0x2
004BB89F  F3 A5                     MOVSD.REP ES:EDI,ESI
004BB8A1  8B C8                     MOV ECX,EAX
004BB8A3  83 E1 03                  AND ECX,0x3
004BB8A6  F3 A4                     MOVSB.REP ES:EDI,ESI
004BB8A8  8B 8D 26 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff26]
004BB8AE  85 C9                     TEST ECX,ECX
004BB8B0  74 1D                     JZ 0x004bb8cf
004BB8B2  8B 95 2A FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff2a]
004BB8B8  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004BB8BB  8B 75 C8                  MOV ESI,dword ptr [EBP + -0x38]
004BB8BE  8D 3C 02                  LEA EDI,[EDX + EAX*0x1]
004BB8C1  8B D1                     MOV EDX,ECX
004BB8C3  C1 E9 02                  SHR ECX,0x2
004BB8C6  F3 A5                     MOVSD.REP ES:EDI,ESI
004BB8C8  8B CA                     MOV ECX,EDX
004BB8CA  83 E1 03                  AND ECX,0x3
004BB8CD  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_004bb8cf:
004BB8CF  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004BB8D2  8B 95 32 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff32]
004BB8D8  8B 8D 2E FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff2e]
004BB8DE  8B 75 CC                  MOV ESI,dword ptr [EBP + -0x34]
004BB8E1  8D 3C 02                  LEA EDI,[EDX + EAX*0x1]
004BB8E4  8B C1                     MOV EAX,ECX
004BB8E6  C1 E9 02                  SHR ECX,0x2
004BB8E9  F3 A5                     MOVSD.REP ES:EDI,ESI
004BB8EB  8B C8                     MOV ECX,EAX
004BB8ED  83 E1 03                  AND ECX,0x3
004BB8F0  F3 A4                     MOVSB.REP ES:EDI,ESI
004BB8F2  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004BB8F5  8B 85 3A FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff3a]
004BB8FB  8B 8D 36 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff36]
004BB901  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
004BB904  8D 3C 10                  LEA EDI,[EAX + EDX*0x1]
004BB907  8B D1                     MOV EDX,ECX
004BB909  C1 E9 02                  SHR ECX,0x2
004BB90C  F3 A5                     MOVSD.REP ES:EDI,ESI
004BB90E  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
004BB911  8B CA                     MOV ECX,EDX
004BB913  83 E1 03                  AND ECX,0x3
004BB916  50                        PUSH EAX
004BB917  F3 A4                     MOVSB.REP ES:EDI,ESI
004BB919  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004BB91C  8B 53 18                  MOV EDX,dword ptr [EBX + 0x18]
004BB91F  51                        PUSH ECX
004BB920  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004BB926  52                        PUSH EDX
004BB927  E8 CD 6C F4 FF            CALL 0x004025f9
004BB92C  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
004BB92F  85 C0                     TEST EAX,EAX
004BB931  74 09                     JZ 0x004bb93c
004BB933  8D 45 C4                  LEA EAX,[EBP + -0x3c]
004BB936  50                        PUSH EAX
004BB937  E8 24 F7 1E 00            CALL 0x006ab060
LAB_004bb93c:
004BB93C  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
004BB93F  85 C0                     TEST EAX,EAX
004BB941  74 09                     JZ 0x004bb94c
004BB943  8D 4D C8                  LEA ECX,[EBP + -0x38]
004BB946  51                        PUSH ECX
004BB947  E8 14 F7 1E 00            CALL 0x006ab060
LAB_004bb94c:
004BB94C  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004BB94F  85 C0                     TEST EAX,EAX
004BB951  74 09                     JZ 0x004bb95c
004BB953  8D 55 F4                  LEA EDX,[EBP + -0xc]
004BB956  52                        PUSH EDX
004BB957  E8 04 F7 1E 00            CALL 0x006ab060
LAB_004bb95c:
004BB95C  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
004BB95F  85 C0                     TEST EAX,EAX
004BB961  74 09                     JZ 0x004bb96c
004BB963  8D 45 CC                  LEA EAX,[EBP + -0x34]
004BB966  50                        PUSH EAX
004BB967  E8 F4 F6 1E 00            CALL 0x006ab060
LAB_004bb96c:
004BB96C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004BB96F  85 C0                     TEST EAX,EAX
004BB971  0F 84 FB 16 00 00         JZ 0x004bd072
004BB977  8D 4D FC                  LEA ECX,[EBP + -0x4]
004BB97A  51                        PUSH ECX
004BB97B  E8 E0 F6 1E 00            CALL 0x006ab060
004BB980  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BB986  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BB98B  33 C0                     XOR EAX,EAX
004BB98D  5F                        POP EDI
004BB98E  5E                        POP ESI
004BB98F  5B                        POP EBX
004BB990  8B E5                     MOV ESP,EBP
004BB992  5D                        POP EBP
004BB993  C2 04 00                  RET 0x4
LAB_004bb996:
004BB996  8B 83 AC 05 00 00         MOV EAX,dword ptr [EBX + 0x5ac]
004BB99C  83 C0 C9                  ADD EAX,-0x37
004BB99F  83 F8 37                  CMP EAX,0x37
004BB9A2  77 4C                     JA 0x004bb9f0
004BB9A4  33 D2                     XOR EDX,EDX
004BB9A6  8A 90 E8 D2 4B 00         MOV DL,byte ptr [EAX + 0x4bd2e8]
switchD_004bb9ac::switchD:
004BB9AC  FF 24 95 C8 D2 4B 00      JMP dword ptr [EDX*0x4 + 0x4bd2c8]
switchD_004bb9ac::caseD_38:
004BB9B3  8B CB                     MOV ECX,EBX
004BB9B5  E8 67 A3 F4 FF            CALL 0x00405d21
004BB9BA  EB 34                     JMP 0x004bb9f0
switchD_004bb9ac::caseD_6a:
004BB9BC  8B CB                     MOV ECX,EBX
004BB9BE  E8 A4 8A F4 FF            CALL 0x00404467
004BB9C3  EB 2B                     JMP 0x004bb9f0
switchD_004bb9ac::caseD_69:
004BB9C5  8B CB                     MOV ECX,EBX
004BB9C7  E8 55 8F F4 FF            CALL 0x00404921
004BB9CC  EB 22                     JMP 0x004bb9f0
switchD_004bb9ac::caseD_53:
004BB9CE  8B CB                     MOV ECX,EBX
004BB9D0  E8 BE 72 F4 FF            CALL 0x00402c93
004BB9D5  EB 19                     JMP 0x004bb9f0
switchD_004bb9ac::caseD_54:
004BB9D7  8B CB                     MOV ECX,EBX
004BB9D9  E8 FE 6A F4 FF            CALL 0x004024dc
004BB9DE  EB 10                     JMP 0x004bb9f0
switchD_004bb9ac::caseD_6e:
004BB9E0  8B CB                     MOV ECX,EBX
004BB9E2  E8 F8 6C F4 FF            CALL 0x004026df
004BB9E7  EB 07                     JMP 0x004bb9f0
switchD_004bb9ac::caseD_37:
004BB9E9  8B CB                     MOV ECX,EBX
004BB9EB  E8 91 98 F4 FF            CALL 0x00405281
switchD_004bb9ac::caseD_3a:
004BB9F0  8B 83 35 02 00 00         MOV EAX,dword ptr [EBX + 0x235]
004BB9F6  8B 0C 85 94 4D 79 00      MOV ECX,dword ptr [EAX*0x4 + 0x794d94]
004BB9FD  85 C9                     TEST ECX,ECX
004BB9FF  0F 84 6D 16 00 00         JZ 0x004bd072
004BBA05  8B CB                     MOV ECX,EBX
004BBA07  E8 C3 95 F4 FF            CALL 0x00404fcf
004BBA0C  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BBA12  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BBA17  33 C0                     XOR EAX,EAX
004BBA19  5F                        POP EDI
004BBA1A  5E                        POP ESI
004BBA1B  5B                        POP EBX
004BBA1C  8B E5                     MOV ESP,EBP
004BBA1E  5D                        POP EBP
004BBA1F  C2 04 00                  RET 0x4
LAB_004bba22:
004BBA22  3D 28 01 00 00            CMP EAX,0x128
004BBA27  0F 87 89 04 00 00         JA 0x004bbeb6
004BBA2D  0F 84 9C 02 00 00         JZ 0x004bbccf
004BBA33  2D 21 01 00 00            SUB EAX,0x121
004BBA38  0F 84 0F 01 00 00         JZ 0x004bbb4d
004BBA3E  48                        DEC EAX
004BBA3F  0F 84 B4 00 00 00         JZ 0x004bbaf9
004BBA45  48                        DEC EAX
004BBA46  0F 85 26 16 00 00         JNZ 0x004bd072
004BBA4C  8B 83 AC 05 00 00         MOV EAX,dword ptr [EBX + 0x5ac]
004BBA52  83 F8 4D                  CMP EAX,0x4d
004BBA55  75 21                     JNZ 0x004bba78
004BBA57  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
004BBA5A  51                        PUSH ECX
004BBA5B  8B CB                     MOV ECX,EBX
004BBA5D  E8 A9 95 F4 FF            CALL 0x0040500b
004BBA62  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BBA68  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BBA6D  33 C0                     XOR EAX,EAX
004BBA6F  5F                        POP EDI
004BBA70  5E                        POP ESI
004BBA71  5B                        POP EBX
004BBA72  8B E5                     MOV ESP,EBP
004BBA74  5D                        POP EBP
004BBA75  C2 04 00                  RET 0x4
LAB_004bba78:
004BBA78  83 F8 73                  CMP EAX,0x73
004BBA7B  0F 85 F1 15 00 00         JNZ 0x004bd072
004BBA81  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
004BBA84  85 C0                     TEST EAX,EAX
004BBA86  89 83 D0 04 00 00         MOV dword ptr [EBX + 0x4d0],EAX
004BBA8C  7D 0A                     JGE 0x004bba98
004BBA8E  C7 83 D0 04 00 00 00 00 00 00  MOV dword ptr [EBX + 0x4d0],0x0
LAB_004bba98:
004BBA98  8B 8B D0 04 00 00         MOV ECX,dword ptr [EBX + 0x4d0]
004BBA9E  B8 88 13 00 00            MOV EAX,0x1388
004BBAA3  3B C8                     CMP ECX,EAX
004BBAA5  7E 06                     JLE 0x004bbaad
004BBAA7  89 83 D0 04 00 00         MOV dword ptr [EBX + 0x4d0],EAX
LAB_004bbaad:
004BBAAD  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004BBAB3  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004BBAB9  89 83 D4 04 00 00         MOV dword ptr [EBX + 0x4d4],EAX
004BBABF  8B 83 AC 05 00 00         MOV EAX,dword ptr [EBX + 0x5ac]
004BBAC5  83 F8 73                  CMP EAX,0x73
004BBAC8  0F 85 A4 15 00 00         JNZ 0x004bd072
004BBACE  8B 83 D0 04 00 00         MOV EAX,dword ptr [EBX + 0x4d0]
004BBAD4  85 C0                     TEST EAX,EAX
004BBAD6  0F 85 96 15 00 00         JNZ 0x004bd072
004BBADC  8B CB                     MOV ECX,EBX
004BBADE  E8 50 9F F4 FF            CALL 0x00405a33
004BBAE3  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BBAE9  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BBAEE  33 C0                     XOR EAX,EAX
004BBAF0  5F                        POP EDI
004BBAF1  5E                        POP ESI
004BBAF2  5B                        POP EBX
004BBAF3  8B E5                     MOV ESP,EBP
004BBAF5  5D                        POP EBP
004BBAF6  C2 04 00                  RET 0x4
LAB_004bbaf9:
004BBAF9  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
004BBAFC  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
004BBAFF  8B 08                     MOV ECX,dword ptr [EAX]
004BBB01  3B CA                     CMP ECX,EDX
004BBB03  0F 85 69 15 00 00         JNZ 0x004bd072
004BBB09  C7 83 10 04 00 00 01 00 00 00  MOV dword ptr [EBX + 0x410],0x1
004BBB13  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
004BBB16  89 93 14 04 00 00         MOV dword ptr [EBX + 0x414],EDX
004BBB1C  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004BBB22  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
004BBB28  89 93 18 04 00 00         MOV dword ptr [EBX + 0x418],EDX
004BBB2E  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
004BBB31  89 83 1C 04 00 00         MOV dword ptr [EBX + 0x41c],EAX
004BBB37  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BBB3D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BBB42  33 C0                     XOR EAX,EAX
004BBB44  5F                        POP EDI
004BBB45  5E                        POP ESI
004BBB46  5B                        POP EBX
004BBB47  8B E5                     MOV ESP,EBP
004BBB49  5D                        POP EBP
004BBB4A  C2 04 00                  RET 0x4
LAB_004bbb4d:
004BBB4D  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
004BBB50  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
004BBB53  8B 01                     MOV EAX,dword ptr [ECX]
004BBB55  83 F8 08                  CMP EAX,0x8
004BBB58  0F 83 54 01 00 00         JNC 0x004bbcb2
004BBB5E  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004BBB64  85 D2                     TEST EDX,EDX
004BBB66  74 11                     JZ 0x004bbb79
004BBB68  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
004BBB6B  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
004BBB73  0F 83 39 01 00 00         JNC 0x004bbcb2
LAB_004bbb79:
004BBB79  8A 01                     MOV AL,byte ptr [ECX]
004BBB7B  8A 15 8F 8A 80 00         MOV DL,byte ptr [0x00808a8f]
004BBB81  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
004BBB84  88 45 F0                  MOV byte ptr [EBP + -0x10],AL
004BBB87  84 D2                     TEST DL,DL
004BBB89  88 4D FC                  MOV byte ptr [EBP + -0x4],CL
004BBB8C  74 2B                     JZ 0x004bbbb9
004BBB8E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004BBB91  25 FF 00 00 00            AND EAX,0xff
004BBB96  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
004BBB99  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004BBB9C  25 FF 00 00 00            AND EAX,0xff
004BBBA1  8A 8C C9 EA 87 80 00      MOV CL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
004BBBA8  8D 3C C0                  LEA EDI,[EAX + EAX*0x8]
004BBBAB  33 C0                     XOR EAX,EAX
004BBBAD  3A 8C FF EA 87 80 00      CMP CL,byte ptr [EDI + EDI*0x8 + 0x8087ea]
004BBBB4  0F 95 C0                  SETNZ AL
004BBBB7  EB 7D                     JMP 0x004bbc36
LAB_004bbbb9:
004BBBB9  3A C1                     CMP AL,CL
004BBBBB  74 6E                     JZ 0x004bbc2b
004BBBBD  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004BBBC0  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
004BBBC3  25 FF 00 00 00            AND EAX,0xff
004BBBC8  81 E7 FF 00 00 00         AND EDI,0xff
004BBBCE  8A 8C C7 4F 8A 80 00      MOV CL,byte ptr [EDI + EAX*0x8 + 0x808a4f]
004BBBD5  84 C9                     TEST CL,CL
004BBBD7  75 12                     JNZ 0x004bbbeb
004BBBD9  8A 94 F8 4F 8A 80 00      MOV DL,byte ptr [EAX + EDI*0x8 + 0x808a4f]
004BBBE0  84 D2                     TEST DL,DL
004BBBE2  75 07                     JNZ 0x004bbbeb
004BBBE4  B8 FE FF FF FF            MOV EAX,0xfffffffe
004BBBE9  EB 42                     JMP 0x004bbc2d
LAB_004bbbeb:
004BBBEB  80 F9 01                  CMP CL,0x1
004BBBEE  75 10                     JNZ 0x004bbc00
004BBBF0  8A 94 F8 4F 8A 80 00      MOV DL,byte ptr [EAX + EDI*0x8 + 0x808a4f]
004BBBF7  84 D2                     TEST DL,DL
004BBBF9  75 05                     JNZ 0x004bbc00
004BBBFB  83 C8 FF                  OR EAX,0xffffffff
004BBBFE  EB 2D                     JMP 0x004bbc2d
LAB_004bbc00:
004BBC00  84 C9                     TEST CL,CL
004BBC02  75 11                     JNZ 0x004bbc15
004BBC04  80 BC F8 4F 8A 80 00 01   CMP byte ptr [EAX + EDI*0x8 + 0x808a4f],0x1
004BBC0C  75 07                     JNZ 0x004bbc15
004BBC0E  B8 01 00 00 00            MOV EAX,0x1
004BBC13  EB 18                     JMP 0x004bbc2d
LAB_004bbc15:
004BBC15  80 F9 01                  CMP CL,0x1
004BBC18  75 11                     JNZ 0x004bbc2b
004BBC1A  80 BC F8 4F 8A 80 00 01   CMP byte ptr [EAX + EDI*0x8 + 0x808a4f],0x1
004BBC22  75 07                     JNZ 0x004bbc2b
004BBC24  B8 02 00 00 00            MOV EAX,0x2
004BBC29  EB 02                     JMP 0x004bbc2d
LAB_004bbc2b:
004BBC2B  33 C0                     XOR EAX,EAX
LAB_004bbc2d:
004BBC2D  33 D2                     XOR EDX,EDX
004BBC2F  85 C0                     TEST EAX,EAX
004BBC31  0F 9C C2                  SETL DL
004BBC34  8B C2                     MOV EAX,EDX
LAB_004bbc36:
004BBC36  85 C0                     TEST EAX,EAX
004BBC38  74 78                     JZ 0x004bbcb2
004BBC3A  8B 83 AC 05 00 00         MOV EAX,dword ptr [EBX + 0x5ac]
004BBC40  6A FF                     PUSH -0x1
004BBC42  83 E8 32                  SUB EAX,0x32
004BBC45  50                        PUSH EAX
004BBC46  68 90 0F 80 00            PUSH 0x800f90
004BBC4B  E8 80 53 1F 00            CALL 0x006b0fd0
004BBC50  83 C4 0C                  ADD ESP,0xc
004BBC53  85 C0                     TEST EAX,EAX
004BBC55  74 5B                     JZ 0x004bbcb2
004BBC57  B8 01 00 00 00            MOV EAX,0x1
004BBC5C  89 83 20 04 00 00         MOV dword ptr [EBX + 0x420],EAX
004BBC62  8B 8B 65 02 00 00         MOV ECX,dword ptr [EBX + 0x265]
004BBC68  83 E1 FD                  AND ECX,0xfffffffd
004BBC6B  89 8B 65 02 00 00         MOV dword ptr [EBX + 0x265],ECX
004BBC71  C7 83 6D 02 00 00 00 00 00 00  MOV dword ptr [EBX + 0x26d],0x0
004BBC7B  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004BBC81  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
004BBC87  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
004BBC8A  89 93 24 04 00 00         MOV dword ptr [EBX + 0x424],EDX
004BBC90  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
004BBC93  89 93 28 04 00 00         MOV dword ptr [EBX + 0x428],EDX
004BBC99  89 46 18                  MOV dword ptr [ESI + 0x18],EAX
004BBC9C  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BBCA2  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BBCA7  33 C0                     XOR EAX,EAX
004BBCA9  5F                        POP EDI
004BBCAA  5E                        POP ESI
004BBCAB  5B                        POP EBX
004BBCAC  8B E5                     MOV ESP,EBP
004BBCAE  5D                        POP EBP
004BBCAF  C2 04 00                  RET 0x4
LAB_004bbcb2:
004BBCB2  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BBCB8  C7 46 18 00 00 00 00      MOV dword ptr [ESI + 0x18],0x0
004BBCBF  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BBCC4  33 C0                     XOR EAX,EAX
004BBCC6  5F                        POP EDI
004BBCC7  5E                        POP ESI
004BBCC8  5B                        POP EBX
004BBCC9  8B E5                     MOV ESP,EBP
004BBCCB  5D                        POP EBP
004BBCCC  C2 04 00                  RET 0x4
LAB_004bbccf:
004BBCCF  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004BBCD2  B9 07 00 00 00            MOV ECX,0x7
004BBCD7  8D 7D A8                  LEA EDI,[EBP + -0x58]
004BBCDA  8B 70 14                  MOV ESI,dword ptr [EAX + 0x14]
004BBCDD  8B 83 45 02 00 00         MOV EAX,dword ptr [EBX + 0x245]
004BBCE3  F3 A5                     MOVSD.REP ES:EDI,ESI
004BBCE5  8B 75 B0                  MOV ESI,dword ptr [EBP + -0x50]
004BBCE8  83 F8 01                  CMP EAX,0x1
004BBCEB  BF FE 00 00 00            MOV EDI,0xfe
004BBCF0  0F 84 28 01 00 00         JZ 0x004bbe1e
004BBCF6  83 F8 06                  CMP EAX,0x6
004BBCF9  0F 84 1F 01 00 00         JZ 0x004bbe1e
004BBCFF  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
004BBD02  33 C9                     XOR ECX,ECX
004BBD04  89 8B 41 02 00 00         MOV dword ptr [EBX + 0x241],ECX
004BBD0A  89 8B D7 05 00 00         MOV dword ptr [EBX + 0x5d7],ECX
004BBD10  83 F8 02                  CMP EAX,0x2
004BBD13  89 83 DF 05 00 00         MOV dword ptr [EBX + 0x5df],EAX
004BBD19  74 09                     JZ 0x004bbd24
004BBD1B  83 F8 05                  CMP EAX,0x5
004BBD1E  74 04                     JZ 0x004bbd24
004BBD20  33 C0                     XOR EAX,EAX
004BBD22  EB 05                     JMP 0x004bbd29
LAB_004bbd24:
004BBD24  B8 01 00 00 00            MOV EAX,0x1
LAB_004bbd29:
004BBD29  50                        PUSH EAX
004BBD2A  6A 01                     PUSH 0x1
004BBD2C  8B CB                     MOV ECX,EBX
004BBD2E  E8 77 53 F4 FF            CALL 0x004010aa
004BBD33  8B 83 DF 05 00 00         MOV EAX,dword ptr [EBX + 0x5df]
004BBD39  85 C0                     TEST EAX,EAX
004BBD3B  74 05                     JZ 0x004bbd42
004BBD3D  83 F8 04                  CMP EAX,0x4
004BBD40  75 47                     JNZ 0x004bbd89
LAB_004bbd42:
004BBD42  8B 83 4D 02 00 00         MOV EAX,dword ptr [EBX + 0x24d]
004BBD48  8A 53 24                  MOV DL,byte ptr [EBX + 0x24]
004BBD4B  33 C9                     XOR ECX,ECX
004BBD4D  83 F8 04                  CMP EAX,0x4
004BBD50  0F 94 C1                  SETZ CL
004BBD53  51                        PUSH ECX
004BBD54  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004BBD5A  52                        PUSH EDX
004BBD5B  E8 57 8C F4 FF            CALL 0x004049b7
004BBD60  0F BF 4B 45               MOVSX ECX,word ptr [EBX + 0x45]
004BBD64  0F BF 53 43               MOVSX EDX,word ptr [EBX + 0x43]
004BBD68  25 FF 00 00 00            AND EAX,0xff
004BBD6D  50                        PUSH EAX
004BBD6E  8B 83 AC 05 00 00         MOV EAX,dword ptr [EBX + 0x5ac]
004BBD74  6A FF                     PUSH -0x1
004BBD76  6A FF                     PUSH -0x1
004BBD78  53                        PUSH EBX
004BBD79  50                        PUSH EAX
004BBD7A  0F BF 43 41               MOVSX EAX,word ptr [EBX + 0x41]
004BBD7E  51                        PUSH ECX
004BBD7F  52                        PUSH EDX
004BBD80  50                        PUSH EAX
004BBD81  E8 F9 8C F4 FF            CALL 0x00404a7f
004BBD86  83 C4 24                  ADD ESP,0x24
LAB_004bbd89:
004BBD89  8B 83 DF 05 00 00         MOV EAX,dword ptr [EBX + 0x5df]
004BBD8F  83 F8 02                  CMP EAX,0x2
004BBD92  74 68                     JZ 0x004bbdfc
004BBD94  83 F8 05                  CMP EAX,0x5
004BBD97  74 63                     JZ 0x004bbdfc
004BBD99  3B F7                     CMP ESI,EDI
004BBD9B  74 35                     JZ 0x004bbdd2
004BBD9D  8B 0D BC 17 81 00         MOV ECX,dword ptr [0x008117bc]
004BBDA3  85 C9                     TEST ECX,ECX
004BBDA5  74 2B                     JZ 0x004bbdd2
004BBDA7  66 8B 53 24               MOV DX,word ptr [EBX + 0x24]
004BBDAB  66 8B 43 32               MOV AX,word ptr [EBX + 0x32]
004BBDAF  66 89 55 9C               MOV word ptr [EBP + -0x64],DX
004BBDB3  66 8B 55 B4               MOV DX,word ptr [EBP + -0x4c]
004BBDB7  66 89 55 A2               MOV word ptr [EBP + -0x5e],DX
004BBDBB  C7 45 98 D1 5D 00 00      MOV dword ptr [EBP + -0x68],0x5dd1
004BBDC2  66 89 45 9E               MOV word ptr [EBP + -0x62],AX
004BBDC6  66 89 75 A0               MOV word ptr [EBP + -0x60],SI
004BBDCA  8B 01                     MOV EAX,dword ptr [ECX]
004BBDCC  8D 55 88                  LEA EDX,[EBP + -0x78]
004BBDCF  52                        PUSH EDX
004BBDD0  FF 10                     CALL dword ptr [EAX]
LAB_004bbdd2:
004BBDD2  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
004BBDD5  8B 53 08                  MOV EDX,dword ptr [EBX + 0x8]
004BBDD8  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
004BBDDB  8D 45 88                  LEA EAX,[EBP + -0x78]
004BBDDE  89 4D 90                  MOV dword ptr [EBP + -0x70],ECX
004BBDE1  50                        PUSH EAX
004BBDE2  8B CB                     MOV ECX,EBX
004BBDE4  C7 45 94 00 00 00 00      MOV dword ptr [EBP + -0x6c],0x0
004BBDEB  C7 45 98 0A 00 00 00      MOV dword ptr [EBP + -0x68],0xa
004BBDF2  89 55 9C                  MOV dword ptr [EBP + -0x64],EDX
004BBDF5  E8 A6 A2 22 00            CALL 0x006e60a0
004BBDFA  EB 22                     JMP 0x004bbe1e
LAB_004bbdfc:
004BBDFC  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004BBE02  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
004BBE08  89 93 54 04 00 00         MOV dword ptr [EBX + 0x454],EDX
004BBE0E  8B 83 58 04 00 00         MOV EAX,dword ptr [EBX + 0x458]
004BBE14  3B C7                     CMP EAX,EDI
004BBE16  74 06                     JZ 0x004bbe1e
004BBE18  89 B3 58 04 00 00         MOV dword ptr [EBX + 0x458],ESI
LAB_004bbe1e:
004BBE1E  A1 BC 17 81 00            MOV EAX,[0x008117bc]
004BBE23  85 C0                     TEST EAX,EAX
004BBE25  75 2B                     JNZ 0x004bbe52
004BBE27  66 8B 4B 24               MOV CX,word ptr [EBX + 0x24]
004BBE2B  66 8B 53 32               MOV DX,word ptr [EBX + 0x32]
004BBE2F  66 89 4D 9C               MOV word ptr [EBP + -0x64],CX
004BBE33  8D 4D 88                  LEA ECX,[EBP + -0x78]
004BBE36  C7 45 98 D5 5D 00 00      MOV dword ptr [EBP + -0x68],0x5dd5
004BBE3D  66 89 55 9E               MOV word ptr [EBP + -0x62],DX
004BBE41  66 89 75 A0               MOV word ptr [EBP + -0x60],SI
004BBE45  66 C7 45 A2 FF FF         MOV word ptr [EBP + -0x5e],0xffff
004BBE4B  8B 00                     MOV EAX,dword ptr [EAX]
004BBE4D  51                        PUSH ECX
004BBE4E  33 C9                     XOR ECX,ECX
004BBE50  FF 10                     CALL dword ptr [EAX]
LAB_004bbe52:
004BBE52  8B 0D 98 17 81 00         MOV ECX,dword ptr [0x00811798]
004BBE58  85 C9                     TEST ECX,ECX
004BBE5A  74 1E                     JZ 0x004bbe7a
004BBE5C  8B 93 AC 05 00 00         MOV EDX,dword ptr [EBX + 0x5ac]
004BBE62  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004BBE65  52                        PUSH EDX
004BBE66  8B 93 B4 05 00 00         MOV EDX,dword ptr [EBX + 0x5b4]
004BBE6C  50                        PUSH EAX
004BBE6D  8B 83 B0 05 00 00         MOV EAX,dword ptr [EBX + 0x5b0]
004BBE73  52                        PUSH EDX
004BBE74  50                        PUSH EAX
004BBE75  E8 4A 6A F4 FF            CALL 0x004028c4
LAB_004bbe7a:
004BBE7A  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004BBE80  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
004BBE86  89 93 54 04 00 00         MOV dword ptr [EBX + 0x454],EDX
004BBE8C  8B 83 58 04 00 00         MOV EAX,dword ptr [EBX + 0x458]
004BBE92  3B C7                     CMP EAX,EDI
004BBE94  0F 84 D8 11 00 00         JZ 0x004bd072
004BBE9A  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BBEA0  89 B3 58 04 00 00         MOV dword ptr [EBX + 0x458],ESI
004BBEA6  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BBEAB  33 C0                     XOR EAX,EAX
004BBEAD  5F                        POP EDI
004BBEAE  5E                        POP ESI
004BBEAF  5B                        POP EBX
004BBEB0  8B E5                     MOV ESP,EBP
004BBEB2  5D                        POP EBP
004BBEB3  C2 04 00                  RET 0x4
LAB_004bbeb6:
004BBEB6  2D 01 44 00 00            SUB EAX,0x4401
004BBEBB  74 26                     JZ 0x004bbee3
004BBEBD  83 E8 0E                  SUB EAX,0xe
004BBEC0  0F 85 AC 11 00 00         JNZ 0x004bd072
004BBEC6  8B CB                     MOV ECX,EBX
004BBEC8  E8 B1 5A F4 FF            CALL 0x0040197e
004BBECD  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BBED3  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BBED8  33 C0                     XOR EAX,EAX
004BBEDA  5F                        POP EDI
004BBEDB  5E                        POP ESI
004BBEDC  5B                        POP EBX
004BBEDD  8B E5                     MOV ESP,EBP
004BBEDF  5D                        POP EBP
004BBEE0  C2 04 00                  RET 0x4
LAB_004bbee3:
004BBEE3  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
004BBEE6  33 C9                     XOR ECX,ECX
004BBEE8  8A 48 0E                  MOV CL,byte ptr [EAX + 0xe]
004BBEEB  8D 79 F8                  LEA EDI,[ECX + -0x8]
004BBEEE  83 FF 22                  CMP EDI,0x22
004BBEF1  0F 87 7B 11 00 00         JA 0x004bd072
004BBEF7  33 C9                     XOR ECX,ECX
004BBEF9  8A 8F 60 D3 4B 00         MOV CL,byte ptr [EDI + 0x4bd360]
switchD_004bbeff::switchD:
004BBEFF  FF 24 8D 20 D3 4B 00      JMP dword ptr [ECX*0x4 + 0x4bd320]
switchD_004bbeff::caseD_22:
004BBF06  8B 93 AC 05 00 00         MOV EDX,dword ptr [EBX + 0x5ac]
004BBF0C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004BBF12  52                        PUSH EDX
004BBF13  E8 42 60 F4 FF            CALL 0x00401f5a
004BBF18  83 F8 03                  CMP EAX,0x3
004BBF1B  75 1D                     JNZ 0x004bbf3a
004BBF1D  8B CB                     MOV ECX,EBX
004BBF1F  E8 A7 9E F4 FF            CALL 0x00405dcb
004BBF24  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BBF2A  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BBF2F  33 C0                     XOR EAX,EAX
004BBF31  5F                        POP EDI
004BBF32  5E                        POP ESI
004BBF33  5B                        POP EBX
004BBF34  8B E5                     MOV ESP,EBP
004BBF36  5D                        POP EBP
004BBF37  C2 04 00                  RET 0x4
LAB_004bbf3a:
004BBF3A  6A 00                     PUSH 0x0
004BBF3C  68 FF 00 00 00            PUSH 0xff
004BBF41  6A 00                     PUSH 0x0
004BBF43  6A FF                     PUSH -0x1
004BBF45  6A 00                     PUSH 0x0
004BBF47  6A 00                     PUSH 0x0
004BBF49  6A 00                     PUSH 0x0
004BBF4B  6A 05                     PUSH 0x5
004BBF4D  8B CB                     MOV ECX,EBX
004BBF4F  E8 05 98 F4 FF            CALL 0x00405759
004BBF54  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BBF5A  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BBF5F  33 C0                     XOR EAX,EAX
004BBF61  5F                        POP EDI
004BBF62  5E                        POP ESI
004BBF63  5B                        POP EBX
004BBF64  8B E5                     MOV ESP,EBP
004BBF66  5D                        POP EBP
004BBF67  C2 04 00                  RET 0x4
switchD_004bbeff::caseD_1e:
004BBF6A  8B 78 17                  MOV EDI,dword ptr [EAX + 0x17]
004BBF6D  8A 07                     MOV AL,byte ptr [EDI]
004BBF6F  84 C0                     TEST AL,AL
004BBF71  0F 86 FB 10 00 00         JBE 0x004bd072
004BBF77  3C 09                     CMP AL,0x9
004BBF79  0F 83 F3 10 00 00         JNC 0x004bd072
004BBF7F  8B 43 10                  MOV EAX,dword ptr [EBX + 0x10]
004BBF82  33 C9                     XOR ECX,ECX
004BBF84  8A 88 2D 11 00 00         MOV CL,byte ptr [EAX + 0x112d]
004BBF8A  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004BBF8D  3B C1                     CMP EAX,ECX
004BBF8F  75 62                     JNZ 0x004bbff3
004BBF91  8B 83 AC 05 00 00         MOV EAX,dword ptr [EBX + 0x5ac]
004BBF97  83 F8 35                  CMP EAX,0x35
004BBF9A  74 0A                     JZ 0x004bbfa6
004BBF9C  83 F8 54                  CMP EAX,0x54
004BBF9F  7C 52                     JL 0x004bbff3
004BBFA1  83 F8 5A                  CMP EAX,0x5a
004BBFA4  7F 4D                     JG 0x004bbff3
LAB_004bbfa6:
004BBFA6  8A 93 3D 02 00 00         MOV DL,byte ptr [EBX + 0x23d]
004BBFAC  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004BBFB2  52                        PUSH EDX
004BBFB3  E8 FF 89 F4 FF            CALL 0x004049b7
004BBFB8  25 FF 00 00 00            AND EAX,0xff
004BBFBD  48                        DEC EAX
004BBFBE  74 22                     JZ 0x004bbfe2
004BBFC0  48                        DEC EAX
004BBFC1  74 0C                     JZ 0x004bbfcf
004BBFC3  48                        DEC EAX
004BBFC4  75 2D                     JNZ 0x004bbff3
004BBFC6  8B 03                     MOV EAX,dword ptr [EBX]
004BBFC8  68 8B 03 00 00            PUSH 0x38b
004BBFCD  EB 1A                     JMP 0x004bbfe9
LAB_004bbfcf:
004BBFCF  8B 13                     MOV EDX,dword ptr [EBX]
004BBFD1  68 D0 02 00 00            PUSH 0x2d0
004BBFD6  6A 04                     PUSH 0x4
004BBFD8  8B CB                     MOV ECX,EBX
004BBFDA  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
004BBFE0  EB 11                     JMP 0x004bbff3
LAB_004bbfe2:
004BBFE2  8B 03                     MOV EAX,dword ptr [EBX]
004BBFE4  68 08 02 00 00            PUSH 0x208
LAB_004bbfe9:
004BBFE9  6A 04                     PUSH 0x4
004BBFEB  8B CB                     MOV ECX,EBX
004BBFED  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
LAB_004bbff3:
004BBFF3  0F BF 4F 05               MOVSX ECX,word ptr [EDI + 0x5]
004BBFF7  8B 57 01                  MOV EDX,dword ptr [EDI + 0x1]
004BBFFA  6A 01                     PUSH 0x1
004BBFFC  33 C0                     XOR EAX,EAX
004BBFFE  6A 00                     PUSH 0x0
004BC000  8A 07                     MOV AL,byte ptr [EDI]
004BC002  51                        PUSH ECX
004BC003  52                        PUSH EDX
004BC004  50                        PUSH EAX
004BC005  8B CB                     MOV ECX,EBX
004BC007  E8 C2 9A F4 FF            CALL 0x00405ace
004BC00C  85 C0                     TEST EAX,EAX
004BC00E  0F 84 5E 10 00 00         JZ 0x004bd072
004BC014  8A 07                     MOV AL,byte ptr [EDI]
004BC016  8B 4F 07                  MOV ECX,dword ptr [EDI + 0x7]
004BC019  6A 00                     PUSH 0x0
004BC01B  68 FF 00 00 00            PUSH 0xff
004BC020  33 D2                     XOR EDX,EDX
004BC022  6A 00                     PUSH 0x0
004BC024  3C 02                     CMP AL,0x2
004BC026  51                        PUSH ECX
004BC027  0F BF 4F 05               MOVSX ECX,word ptr [EDI + 0x5]
004BC02B  0F 95 C2                  SETNZ DL
004BC02E  52                        PUSH EDX
004BC02F  8B 57 01                  MOV EDX,dword ptr [EDI + 0x1]
004BC032  51                        PUSH ECX
004BC033  25 FF 00 00 00            AND EAX,0xff
004BC038  52                        PUSH EDX
004BC039  50                        PUSH EAX
004BC03A  8B CB                     MOV ECX,EBX
004BC03C  E8 18 97 F4 FF            CALL 0x00405759
004BC041  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BC047  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BC04C  33 C0                     XOR EAX,EAX
004BC04E  5F                        POP EDI
004BC04F  5E                        POP ESI
004BC050  5B                        POP EBX
004BC051  8B E5                     MOV ESP,EBP
004BC053  5D                        POP EBP
004BC054  C2 04 00                  RET 0x4
switchD_004bbeff::caseD_9:
004BC057  8B 8B AC 05 00 00         MOV ECX,dword ptr [EBX + 0x5ac]
004BC05D  83 F9 33                  CMP ECX,0x33
004BC060  75 34                     JNZ 0x004bc096
004BC062  8B 40 17                  MOV EAX,dword ptr [EAX + 0x17]
004BC065  8A 00                     MOV AL,byte ptr [EAX]
004BC067  84 C0                     TEST AL,AL
004BC069  74 08                     JZ 0x004bc073
004BC06B  3C 01                     CMP AL,0x1
004BC06D  0F 85 FF 0F 00 00         JNZ 0x004bd072
LAB_004bc073:
004BC073  25 FF 00 00 00            AND EAX,0xff
004BC078  8B CB                     MOV ECX,EBX
004BC07A  50                        PUSH EAX
004BC07B  E8 01 65 F4 FF            CALL 0x00402581
004BC080  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BC086  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BC08B  33 C0                     XOR EAX,EAX
004BC08D  5F                        POP EDI
004BC08E  5E                        POP ESI
004BC08F  5B                        POP EBX
004BC090  8B E5                     MOV ESP,EBP
004BC092  5D                        POP EBP
004BC093  C2 04 00                  RET 0x4
LAB_004bc096:
004BC096  83 F9 3C                  CMP ECX,0x3c
004BC099  74 2A                     JZ 0x004bc0c5
004BC09B  83 F9 53                  CMP ECX,0x53
004BC09E  74 25                     JZ 0x004bc0c5
004BC0A0  8B 48 17                  MOV ECX,dword ptr [EAX + 0x17]
004BC0A3  33 D2                     XOR EDX,EDX
004BC0A5  8A 11                     MOV DL,byte ptr [ECX]
004BC0A7  8B CB                     MOV ECX,EBX
004BC0A9  52                        PUSH EDX
004BC0AA  E8 7F 53 F4 FF            CALL 0x0040142e
004BC0AF  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BC0B5  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BC0BA  33 C0                     XOR EAX,EAX
004BC0BC  5F                        POP EDI
004BC0BD  5E                        POP ESI
004BC0BE  5B                        POP EBX
004BC0BF  8B E5                     MOV ESP,EBP
004BC0C1  5D                        POP EBP
004BC0C2  C2 04 00                  RET 0x4
LAB_004bc0c5:
004BC0C5  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004BC0C8  8B 8B 3D 02 00 00         MOV ECX,dword ptr [EBX + 0x23d]
004BC0CE  3B C1                     CMP EAX,ECX
004BC0D0  74 45                     JZ 0x004bc117
004BC0D2  51                        PUSH ECX
004BC0D3  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004BC0D9  E8 D9 88 F4 FF            CALL 0x004049b7
004BC0DE  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
004BC0E1  8A D0                     MOV DL,AL
004BC0E3  8B 83 35 02 00 00         MOV EAX,dword ptr [EBX + 0x235]
004BC0E9  81 E2 FF 00 00 00         AND EDX,0xff
004BC0EF  51                        PUSH ECX
004BC0F0  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004BC0F6  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004BC0F9  03 C2                     ADD EAX,EDX
004BC0FB  8D 34 40                  LEA ESI,[EAX + EAX*0x2]
004BC0FE  E8 B4 88 F4 FF            CALL 0x004049b7
004BC103  25 FF 00 00 00            AND EAX,0xff
004BC108  8A 8C 06 84 19 7E 00      MOV CL,byte ptr [ESI + EAX*0x1 + 0x7e1984]
004BC10F  84 C9                     TEST CL,CL
004BC111  75 04                     JNZ 0x004bc117
004BC113  33 C0                     XOR EAX,EAX
004BC115  EB 05                     JMP 0x004bc11c
LAB_004bc117:
004BC117  B8 01 00 00 00            MOV EAX,0x1
LAB_004bc11c:
004BC11C  85 C0                     TEST EAX,EAX
004BC11E  0F 84 4E 0F 00 00         JZ 0x004bd072
004BC124  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
004BC127  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004BC12D  52                        PUSH EDX
004BC12E  E8 CE 84 F4 FF            CALL 0x00404601
004BC133  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BC139  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BC13E  33 C0                     XOR EAX,EAX
004BC140  5F                        POP EDI
004BC141  5E                        POP ESI
004BC142  5B                        POP EBX
004BC143  8B E5                     MOV ESP,EBP
004BC145  5D                        POP EBP
004BC146  C2 04 00                  RET 0x4
switchD_004bbeff::caseD_28:
004BC149  8B 40 17                  MOV EAX,dword ptr [EAX + 0x17]
004BC14C  33 C9                     XOR ECX,ECX
004BC14E  8A 08                     MOV CL,byte ptr [EAX]
004BC150  85 C9                     TEST ECX,ECX
004BC152  75 38                     JNZ 0x004bc18c
004BC154  8B 83 45 02 00 00         MOV EAX,dword ptr [EBX + 0x245]
004BC15A  85 C0                     TEST EAX,EAX
004BC15C  74 05                     JZ 0x004bc163
004BC15E  83 F8 05                  CMP EAX,0x5
004BC161  75 21                     JNZ 0x004bc184
LAB_004bc163:
004BC163  6A 01                     PUSH 0x1
004BC165  6A 02                     PUSH 0x2
004BC167  8B CB                     MOV ECX,EBX
004BC169  E8 3C 4F F4 FF            CALL 0x004010aa
004BC16E  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BC174  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BC179  33 C0                     XOR EAX,EAX
004BC17B  5F                        POP EDI
004BC17C  5E                        POP ESI
004BC17D  5B                        POP EBX
004BC17E  8B E5                     MOV ESP,EBP
004BC180  5D                        POP EBP
004BC181  C2 04 00                  RET 0x4
LAB_004bc184:
004BC184  85 C9                     TEST ECX,ECX
004BC186  0F 84 E6 0E 00 00         JZ 0x004bd072
LAB_004bc18c:
004BC18C  83 BB 45 02 00 00 04      CMP dword ptr [EBX + 0x245],0x4
004BC193  0F 85 D9 0E 00 00         JNZ 0x004bd072
004BC199  6A 01                     PUSH 0x1
004BC19B  8B CB                     MOV ECX,EBX
004BC19D  E8 03 54 F4 FF            CALL 0x004015a5
004BC1A2  85 C0                     TEST EAX,EAX
004BC1A4  74 21                     JZ 0x004bc1c7
004BC1A6  6A 01                     PUSH 0x1
004BC1A8  6A 03                     PUSH 0x3
004BC1AA  8B CB                     MOV ECX,EBX
004BC1AC  E8 F9 4E F4 FF            CALL 0x004010aa
004BC1B1  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BC1B7  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BC1BC  33 C0                     XOR EAX,EAX
004BC1BE  5F                        POP EDI
004BC1BF  5E                        POP ESI
004BC1C0  5B                        POP EBX
004BC1C1  8B E5                     MOV ESP,EBP
004BC1C3  5D                        POP EBP
004BC1C4  C2 04 00                  RET 0x4
LAB_004bc1c7:
004BC1C7  8B 83 B8 05 00 00         MOV EAX,dword ptr [EBX + 0x5b8]
004BC1CD  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
004BC1D4  83 E8 02                  SUB EAX,0x2
004BC1D7  0F 88 04 01 00 00         JS 0x004bc2e1
004BC1DD  66 8B BB B0 05 00 00      MOV DI,word ptr [EBX + 0x5b0]
004BC1E4  66 8B 93 B4 05 00 00      MOV DX,word ptr [EBX + 0x5b4]
004BC1EB  66 8B 35 40 B2 7F 00      MOV SI,word ptr [0x007fb240]
004BC1F2  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
LAB_004bc1f5:
004BC1F5  66 85 FF                  TEST DI,DI
004BC1F8  7C 53                     JL 0x004bc24d
004BC1FA  66 3B FE                  CMP DI,SI
004BC1FD  7D 4E                     JGE 0x004bc24d
004BC1FF  66 85 D2                  TEST DX,DX
004BC202  7C 49                     JL 0x004bc24d
004BC204  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
004BC20B  7D 40                     JGE 0x004bc24d
004BC20D  66 85 C0                  TEST AX,AX
004BC210  7C 3B                     JL 0x004bc24d
004BC212  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
004BC219  7D 32                     JGE 0x004bc24d
004BC21B  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
004BC222  0F BF F8                  MOVSX EDI,AX
004BC225  0F AF CF                  IMUL ECX,EDI
004BC228  0F BF F6                  MOVSX ESI,SI
004BC22B  0F BF FA                  MOVSX EDI,DX
004BC22E  0F AF F7                  IMUL ESI,EDI
004BC231  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
004BC234  03 CE                     ADD ECX,ESI
004BC236  0F BF F7                  MOVSX ESI,DI
004BC239  03 CE                     ADD ECX,ESI
004BC23B  8B 35 48 B2 7F 00         MOV ESI,dword ptr [0x007fb248]
004BC241  8B 0C CE                  MOV ECX,dword ptr [ESI + ECX*0x8]
004BC244  66 8B 35 40 B2 7F 00      MOV SI,word ptr [0x007fb240]
004BC24B  EB 02                     JMP 0x004bc24f
LAB_004bc24d:
004BC24D  33 C9                     XOR ECX,ECX
LAB_004bc24f:
004BC24F  85 C9                     TEST ECX,ECX
004BC251  75 65                     JNZ 0x004bc2b8
004BC253  66 85 FF                  TEST DI,DI
004BC256  7C 58                     JL 0x004bc2b0
004BC258  66 3B FE                  CMP DI,SI
004BC25B  7D 53                     JGE 0x004bc2b0
004BC25D  66 85 D2                  TEST DX,DX
004BC260  7C 4E                     JL 0x004bc2b0
004BC262  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
004BC269  7D 45                     JGE 0x004bc2b0
004BC26B  66 85 C0                  TEST AX,AX
004BC26E  7C 40                     JL 0x004bc2b0
004BC270  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
004BC277  7D 37                     JGE 0x004bc2b0
004BC279  0F BF 0D 7E B2 7F 00      MOVSX ECX,word ptr [0x007fb27e]
004BC280  0F BF F0                  MOVSX ESI,AX
004BC283  0F AF CE                  IMUL ECX,ESI
004BC286  0F BF 35 78 B2 7F 00      MOVSX ESI,word ptr [0x007fb278]
004BC28D  0F BF FA                  MOVSX EDI,DX
004BC290  0F AF F7                  IMUL ESI,EDI
004BC293  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
004BC296  03 CE                     ADD ECX,ESI
004BC298  0F BF F7                  MOVSX ESI,DI
004BC29B  03 CE                     ADD ECX,ESI
004BC29D  8B 35 80 B2 7F 00         MOV ESI,dword ptr [0x007fb280]
004BC2A3  0F BF 0C 4E               MOVSX ECX,word ptr [ESI + ECX*0x2]
004BC2A7  66 8B 35 40 B2 7F 00      MOV SI,word ptr [0x007fb240]
004BC2AE  EB 03                     JMP 0x004bc2b3
LAB_004bc2b0:
004BC2B0  83 C9 FF                  OR ECX,0xffffffff
LAB_004bc2b3:
004BC2B3  83 F9 FF                  CMP ECX,-0x1
004BC2B6  74 09                     JZ 0x004bc2c1
LAB_004bc2b8:
004BC2B8  48                        DEC EAX
004BC2B9  0F 89 36 FF FF FF         JNS 0x004bc1f5
004BC2BF  EB 27                     JMP 0x004bc2e8
LAB_004bc2c1:
004BC2C1  8B 93 B4 05 00 00         MOV EDX,dword ptr [EBX + 0x5b4]
004BC2C7  40                        INC EAX
004BC2C8  6A 00                     PUSH 0x0
004BC2CA  50                        PUSH EAX
004BC2CB  8B 83 B0 05 00 00         MOV EAX,dword ptr [EBX + 0x5b0]
004BC2D1  52                        PUSH EDX
004BC2D2  50                        PUSH EAX
004BC2D3  8B CB                     MOV ECX,EBX
004BC2D5  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
004BC2DC  E8 49 91 F4 FF            CALL 0x0040542a
LAB_004bc2e1:
004BC2E1  66 8B 35 40 B2 7F 00      MOV SI,word ptr [0x007fb240]
LAB_004bc2e8:
004BC2E8  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
004BC2EB  85 FF                     TEST EDI,EDI
004BC2ED  0F 85 BB 00 00 00         JNZ 0x004bc3ae
004BC2F3  66 8B 83 B0 05 00 00      MOV AX,word ptr [EBX + 0x5b0]
004BC2FA  66 8B 8B B4 05 00 00      MOV CX,word ptr [EBX + 0x5b4]
004BC301  66 85 C0                  TEST AX,AX
004BC304  7C 38                     JL 0x004bc33e
004BC306  66 3B C6                  CMP AX,SI
004BC309  7D 33                     JGE 0x004bc33e
004BC30B  66 85 C9                  TEST CX,CX
004BC30E  7C 2E                     JL 0x004bc33e
004BC310  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
004BC317  7D 25                     JGE 0x004bc33e
004BC319  66 39 3D 44 B2 7F 00      CMP word ptr [0x007fb244],DI
004BC320  7E 1C                     JLE 0x004bc33e
004BC322  0F BF D6                  MOVSX EDX,SI
004BC325  0F BF F9                  MOVSX EDI,CX
004BC328  0F AF D7                  IMUL EDX,EDI
004BC32B  0F BF F8                  MOVSX EDI,AX
004BC32E  03 D7                     ADD EDX,EDI
004BC330  8B 3D 48 B2 7F 00         MOV EDI,dword ptr [0x007fb248]
004BC336  8B 14 D7                  MOV EDX,dword ptr [EDI + EDX*0x8]
004BC339  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
004BC33C  EB 02                     JMP 0x004bc340
LAB_004bc33e:
004BC33E  33 D2                     XOR EDX,EDX
LAB_004bc340:
004BC340  85 D2                     TEST EDX,EDX
004BC342  75 62                     JNZ 0x004bc3a6
004BC344  66 85 C0                  TEST AX,AX
004BC347  7C 3A                     JL 0x004bc383
004BC349  66 3B C6                  CMP AX,SI
004BC34C  7D 35                     JGE 0x004bc383
004BC34E  66 85 C9                  TEST CX,CX
004BC351  7C 30                     JL 0x004bc383
004BC353  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
004BC35A  7D 27                     JGE 0x004bc383
004BC35C  66 39 15 44 B2 7F 00      CMP word ptr [0x007fb244],DX
004BC363  7E 1E                     JLE 0x004bc383
004BC365  0F BF 15 78 B2 7F 00      MOVSX EDX,word ptr [0x007fb278]
004BC36C  0F BF C9                  MOVSX ECX,CX
004BC36F  0F AF D1                  IMUL EDX,ECX
004BC372  8B 0D 80 B2 7F 00         MOV ECX,dword ptr [0x007fb280]
004BC378  0F BF C0                  MOVSX EAX,AX
004BC37B  03 D0                     ADD EDX,EAX
004BC37D  0F BF 04 51               MOVSX EAX,word ptr [ECX + EDX*0x2]
004BC381  EB 03                     JMP 0x004bc386
LAB_004bc383:
004BC383  83 C8 FF                  OR EAX,0xffffffff
LAB_004bc386:
004BC386  85 C0                     TEST EAX,EAX
004BC388  75 1C                     JNZ 0x004bc3a6
004BC38A  8B 93 B4 05 00 00         MOV EDX,dword ptr [EBX + 0x5b4]
004BC390  50                        PUSH EAX
004BC391  50                        PUSH EAX
004BC392  8B 83 B0 05 00 00         MOV EAX,dword ptr [EBX + 0x5b0]
004BC398  52                        PUSH EDX
004BC399  50                        PUSH EAX
004BC39A  8B CB                     MOV ECX,EBX
004BC39C  E8 89 90 F4 FF            CALL 0x0040542a
004BC3A1  BF 01 00 00 00            MOV EDI,0x1
LAB_004bc3a6:
004BC3A6  85 FF                     TEST EDI,EDI
004BC3A8  0F 84 C4 0C 00 00         JZ 0x004bd072
LAB_004bc3ae:
004BC3AE  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BC3B4  C7 83 49 02 00 00 03 00 00 00  MOV dword ptr [EBX + 0x249],0x3
004BC3BE  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BC3C3  33 C0                     XOR EAX,EAX
004BC3C5  5F                        POP EDI
004BC3C6  5E                        POP ESI
004BC3C7  5B                        POP EBX
004BC3C8  8B E5                     MOV ESP,EBP
004BC3CA  5D                        POP EBP
004BC3CB  C2 04 00                  RET 0x4
switchD_004bbeff::caseD_15:
004BC3CE  83 BB 45 02 00 00 04      CMP dword ptr [EBX + 0x245],0x4
004BC3D5  0F 85 97 0C 00 00         JNZ 0x004bd072
004BC3DB  8B 48 17                  MOV ECX,dword ptr [EAX + 0x17]
004BC3DE  66 33 D2                  XOR DX,DX
004BC3E1  8A 01                     MOV AL,byte ptr [ECX]
004BC3E3  8A D0                     MOV DL,AL
004BC3E5  66 3B 15 40 B2 7F 00      CMP DX,word ptr [0x007fb240]
004BC3EC  0F 8D 80 0C 00 00         JGE 0x004bd072
004BC3F2  8B 93 B4 05 00 00         MOV EDX,dword ptr [EBX + 0x5b4]
004BC3F8  25 FF 00 00 00            AND EAX,0xff
004BC3FD  B9 04 00 00 00            MOV ECX,0x4
004BC402  6A 00                     PUSH 0x0
004BC404  2B C8                     SUB ECX,EAX
004BC406  8B 83 B0 05 00 00         MOV EAX,dword ptr [EBX + 0x5b0]
004BC40C  51                        PUSH ECX
004BC40D  52                        PUSH EDX
004BC40E  50                        PUSH EAX
004BC40F  E9 AC 00 00 00            JMP 0x004bc4c0
switchD_004bbeff::caseD_14:
004BC414  8B 48 17                  MOV ECX,dword ptr [EAX + 0x17]
004BC417  8B 31                     MOV ESI,dword ptr [ECX]
004BC419  85 F6                     TEST ESI,ESI
004BC41B  0F 8C 51 0C 00 00         JL 0x004bd072
004BC421  0F BF 15 40 B2 7F 00      MOVSX EDX,word ptr [0x007fb240]
004BC428  3B F2                     CMP ESI,EDX
004BC42A  0F 8D 42 0C 00 00         JGE 0x004bd072
004BC430  8B 79 04                  MOV EDI,dword ptr [ECX + 0x4]
004BC433  85 FF                     TEST EDI,EDI
004BC435  0F 8C 37 0C 00 00         JL 0x004bd072
004BC43B  0F BF 0D 42 B2 7F 00      MOVSX ECX,word ptr [0x007fb242]
004BC442  3B F9                     CMP EDI,ECX
004BC444  0F 8D 28 0C 00 00         JGE 0x004bd072
004BC44A  8B 8B AC 05 00 00         MOV ECX,dword ptr [EBX + 0x5ac]
004BC450  83 C1 CE                  ADD ECX,-0x32
004BC453  83 F9 3A                  CMP ECX,0x3a
004BC456  77 50                     JA 0x004bc4a8
004BC458  33 D2                     XOR EDX,EDX
004BC45A  8A 91 8C D3 4B 00         MOV DL,byte ptr [ECX + 0x4bd38c]
switchD_004bc460::switchD:
004BC460  FF 24 95 84 D3 4B 00      JMP dword ptr [EDX*0x4 + 0x4bd384]
switchD_004bc460::caseD_32:
004BC467  C7 83 2C 04 00 00 01 00 00 00  MOV dword ptr [EBX + 0x42c],0x1
004BC471  8B 48 17                  MOV ECX,dword ptr [EAX + 0x17]
004BC474  8B 11                     MOV EDX,dword ptr [ECX]
004BC476  89 93 30 04 00 00         MOV dword ptr [EBX + 0x430],EDX
004BC47C  8B 40 17                  MOV EAX,dword ptr [EAX + 0x17]
004BC47F  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
004BC482  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BC488  89 8B 34 04 00 00         MOV dword ptr [EBX + 0x434],ECX
004BC48E  C7 83 38 04 00 00 02 00 00 00  MOV dword ptr [EBX + 0x438],0x2
004BC498  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BC49D  33 C0                     XOR EAX,EAX
004BC49F  5F                        POP EDI
004BC4A0  5E                        POP ESI
004BC4A1  5B                        POP EBX
004BC4A2  8B E5                     MOV ESP,EBP
004BC4A4  5D                        POP EBP
004BC4A5  C2 04 00                  RET 0x4
switchD_004bc460::caseD_34:
004BC4A8  83 BB 45 02 00 00 04      CMP dword ptr [EBX + 0x245],0x4
004BC4AF  0F 85 BD 0B 00 00         JNZ 0x004bd072
004BC4B5  8B 93 B8 05 00 00         MOV EDX,dword ptr [EBX + 0x5b8]
004BC4BB  6A 00                     PUSH 0x0
004BC4BD  52                        PUSH EDX
004BC4BE  57                        PUSH EDI
004BC4BF  56                        PUSH ESI
LAB_004bc4c0:
004BC4C0  8B CB                     MOV ECX,EBX
004BC4C2  E8 63 8F F4 FF            CALL 0x0040542a
004BC4C7  8B 8B 49 02 00 00         MOV ECX,dword ptr [EBX + 0x249]
004BC4CD  83 C8 FF                  OR EAX,0xffffffff
004BC4D0  3B C8                     CMP ECX,EAX
004BC4D2  0F 84 9A 0B 00 00         JZ 0x004bd072
004BC4D8  89 83 49 02 00 00         MOV dword ptr [EBX + 0x249],EAX
004BC4DE  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BC4E4  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BC4E9  33 C0                     XOR EAX,EAX
004BC4EB  5F                        POP EDI
004BC4EC  5E                        POP ESI
004BC4ED  5B                        POP EBX
004BC4EE  8B E5                     MOV ESP,EBP
004BC4F0  5D                        POP EBP
004BC4F1  C2 04 00                  RET 0x4
switchD_004bbeff::caseD_8:
004BC4F4  83 BB 45 02 00 00 04      CMP dword ptr [EBX + 0x245],0x4
004BC4FB  0F 85 71 0B 00 00         JNZ 0x004bd072
004BC501  8B 83 DC 03 00 00         MOV EAX,dword ptr [EBX + 0x3dc]
004BC507  85 C0                     TEST EAX,EAX
004BC509  0F 84 63 0B 00 00         JZ 0x004bd072
004BC50F  8B 8B 49 02 00 00         MOV ECX,dword ptr [EBX + 0x249]
004BC515  83 C8 FF                  OR EAX,0xffffffff
004BC518  3B C8                     CMP ECX,EAX
004BC51A  74 06                     JZ 0x004bc522
004BC51C  89 83 49 02 00 00         MOV dword ptr [EBX + 0x249],EAX
LAB_004bc522:
004BC522  8B CB                     MOV ECX,EBX
004BC524  E8 75 89 F4 FF            CALL 0x00404e9e
004BC529  85 C0                     TEST EAX,EAX
004BC52B  0F 84 41 0B 00 00         JZ 0x004bd072
004BC531  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BC537  C7 83 FC 03 00 00 01 00 00 00  MOV dword ptr [EBX + 0x3fc],0x1
004BC541  C7 83 00 04 00 00 00 00 00 00  MOV dword ptr [EBX + 0x400],0x0
004BC54B  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BC550  33 C0                     XOR EAX,EAX
004BC552  5F                        POP EDI
004BC553  5E                        POP ESI
004BC554  5B                        POP EBX
004BC555  8B E5                     MOV ESP,EBP
004BC557  5D                        POP EBP
004BC558  C2 04 00                  RET 0x4
switchD_004bbeff::caseD_16:
004BC55B  8B BB 35 02 00 00         MOV EDI,dword ptr [EBX + 0x235]
004BC561  8B 40 17                  MOV EAX,dword ptr [EAX + 0x17]
004BC564  8B 0C BD 78 27 79 00      MOV ECX,dword ptr [EDI*0x4 + 0x792778]
004BC56B  85 C9                     TEST ECX,ECX
004BC56D  0F 84 FF 0A 00 00         JZ 0x004bd072
004BC573  8A 08                     MOV CL,byte ptr [EAX]
004BC575  80 F9 07                  CMP CL,0x7
004BC578  75 1D                     JNZ 0x004bc597
004BC57A  8B 83 65 02 00 00         MOV EAX,dword ptr [EBX + 0x265]
004BC580  24 FD                     AND AL,0xfd
004BC582  89 83 65 02 00 00         MOV dword ptr [EBX + 0x265],EAX
004BC588  C7 83 6D 02 00 00 00 00 00 00  MOV dword ptr [EBX + 0x26d],0x0
004BC592  E9 D1 00 00 00            JMP 0x004bc668
LAB_004bc597:
004BC597  8B 93 61 02 00 00         MOV EDX,dword ptr [EBX + 0x261]
004BC59D  85 D2                     TEST EDX,EDX
004BC59F  0F 84 C3 00 00 00         JZ 0x004bc668
004BC5A5  8B 3C FD 90 2A 79 00      MOV EDI,dword ptr [EDI*0x8 + 0x792a90]
004BC5AC  4F                        DEC EDI
004BC5AD  0F 84 99 00 00 00         JZ 0x004bc64c
004BC5B3  4F                        DEC EDI
004BC5B4  0F 85 AE 00 00 00         JNZ 0x004bc668
004BC5BA  8A 48 05                  MOV CL,byte ptr [EAX + 0x5]
004BC5BD  66 8B 35 40 B2 7F 00      MOV SI,word ptr [0x007fb240]
004BC5C4  66 33 D2                  XOR DX,DX
004BC5C7  8A D1                     MOV DL,CL
004BC5C9  66 3B D6                  CMP DX,SI
004BC5CC  0F 8D 96 00 00 00         JGE 0x004bc668
004BC5D2  8A 50 06                  MOV DL,byte ptr [EAX + 0x6]
004BC5D5  66 0F B6 FA               MOVZX DI,DL
004BC5D9  66 3B 3D 42 B2 7F 00      CMP DI,word ptr [0x007fb242]
004BC5E0  0F 8D 82 00 00 00         JGE 0x004bc668
004BC5E6  8A 40 07                  MOV AL,byte ptr [EAX + 0x7]
004BC5E9  66 0F B6 F8               MOVZX DI,AL
004BC5ED  66 3B FE                  CMP DI,SI
004BC5F0  7D 76                     JGE 0x004bc668
004BC5F2  83 BB AC 05 00 00 70      CMP dword ptr [EBX + 0x5ac],0x70
004BC5F9  75 1D                     JNZ 0x004bc618
004BC5FB  25 FF 00 00 00            AND EAX,0xff
004BC600  81 E2 FF 00 00 00         AND EDX,0xff
004BC606  50                        PUSH EAX
004BC607  81 E1 FF 00 00 00         AND ECX,0xff
004BC60D  52                        PUSH EDX
004BC60E  51                        PUSH ECX
004BC60F  8B CB                     MOV ECX,EBX
004BC611  E8 11 50 F4 FF            CALL 0x00401627
004BC616  EB 50                     JMP 0x004bc668
LAB_004bc618:
004BC618  8B B3 65 02 00 00         MOV ESI,dword ptr [EBX + 0x265]
004BC61E  25 FF 00 00 00            AND EAX,0xff
004BC623  81 E2 FF 00 00 00         AND EDX,0xff
004BC629  81 E1 FF 00 00 00         AND ECX,0xff
004BC62F  83 CE 02                  OR ESI,0x2
004BC632  89 B3 65 02 00 00         MOV dword ptr [EBX + 0x265],ESI
004BC638  89 8B A5 02 00 00         MOV dword ptr [EBX + 0x2a5],ECX
004BC63E  89 93 A9 02 00 00         MOV dword ptr [EBX + 0x2a9],EDX
004BC644  89 83 AD 02 00 00         MOV dword ptr [EBX + 0x2ad],EAX
004BC64A  EB 1C                     JMP 0x004bc668
LAB_004bc64c:
004BC64C  84 C9                     TEST CL,CL
004BC64E  75 18                     JNZ 0x004bc668
004BC650  8B 8B 65 02 00 00         MOV ECX,dword ptr [EBX + 0x265]
004BC656  8B 40 01                  MOV EAX,dword ptr [EAX + 0x1]
004BC659  83 C9 02                  OR ECX,0x2
004BC65C  89 8B 65 02 00 00         MOV dword ptr [EBX + 0x265],ECX
004BC662  89 83 6D 02 00 00         MOV dword ptr [EBX + 0x26d],EAX
LAB_004bc668:
004BC668  8B 43 10                  MOV EAX,dword ptr [EBX + 0x10]
004BC66B  33 C9                     XOR ECX,ECX
004BC66D  8A 88 2D 11 00 00         MOV CL,byte ptr [EAX + 0x112d]
004BC673  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004BC676  3B C1                     CMP EAX,ECX
004BC678  0F 85 F4 09 00 00         JNZ 0x004bd072
004BC67E  8B 83 AC 05 00 00         MOV EAX,dword ptr [EBX + 0x5ac]
004BC684  83 F8 3E                  CMP EAX,0x3e
004BC687  75 27                     JNZ 0x004bc6b0
004BC689  8B 13                     MOV EDX,dword ptr [EBX]
004BC68B  68 3F 02 00 00            PUSH 0x23f
004BC690  6A 04                     PUSH 0x4
004BC692  8B CB                     MOV ECX,EBX
004BC694  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
004BC69A  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BC6A0  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BC6A5  33 C0                     XOR EAX,EAX
004BC6A7  5F                        POP EDI
004BC6A8  5E                        POP ESI
004BC6A9  5B                        POP EBX
004BC6AA  8B E5                     MOV ESP,EBP
004BC6AC  5D                        POP EBP
004BC6AD  C2 04 00                  RET 0x4
LAB_004bc6b0:
004BC6B0  83 F8 3F                  CMP EAX,0x3f
004BC6B3  75 27                     JNZ 0x004bc6dc
004BC6B5  8B 03                     MOV EAX,dword ptr [EBX]
004BC6B7  68 48 02 00 00            PUSH 0x248
004BC6BC  6A 04                     PUSH 0x4
004BC6BE  8B CB                     MOV ECX,EBX
004BC6C0  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
004BC6C6  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BC6CC  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BC6D1  33 C0                     XOR EAX,EAX
004BC6D3  5F                        POP EDI
004BC6D4  5E                        POP ESI
004BC6D5  5B                        POP EBX
004BC6D6  8B E5                     MOV ESP,EBP
004BC6D8  5D                        POP EBP
004BC6D9  C2 04 00                  RET 0x4
LAB_004bc6dc:
004BC6DC  83 F8 51                  CMP EAX,0x51
004BC6DF  75 27                     JNZ 0x004bc708
004BC6E1  8B 13                     MOV EDX,dword ptr [EBX]
004BC6E3  68 8A 02 00 00            PUSH 0x28a
004BC6E8  6A 04                     PUSH 0x4
004BC6EA  8B CB                     MOV ECX,EBX
004BC6EC  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
004BC6F2  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BC6F8  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BC6FD  33 C0                     XOR EAX,EAX
004BC6FF  5F                        POP EDI
004BC700  5E                        POP ESI
004BC701  5B                        POP EBX
004BC702  8B E5                     MOV ESP,EBP
004BC704  5D                        POP EBP
004BC705  C2 04 00                  RET 0x4
LAB_004bc708:
004BC708  83 F8 46                  CMP EAX,0x46
004BC70B  75 27                     JNZ 0x004bc734
004BC70D  8B 03                     MOV EAX,dword ptr [EBX]
004BC70F  68 05 03 00 00            PUSH 0x305
004BC714  6A 04                     PUSH 0x4
004BC716  8B CB                     MOV ECX,EBX
004BC718  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
004BC71E  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BC724  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BC729  33 C0                     XOR EAX,EAX
004BC72B  5F                        POP EDI
004BC72C  5E                        POP ESI
004BC72D  5B                        POP EBX
004BC72E  8B E5                     MOV ESP,EBP
004BC730  5D                        POP EBP
004BC731  C2 04 00                  RET 0x4
LAB_004bc734:
004BC734  83 F8 47                  CMP EAX,0x47
004BC737  75 27                     JNZ 0x004bc760
004BC739  8B 13                     MOV EDX,dword ptr [EBX]
004BC73B  68 0E 03 00 00            PUSH 0x30e
004BC740  6A 04                     PUSH 0x4
004BC742  8B CB                     MOV ECX,EBX
004BC744  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
004BC74A  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BC750  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BC755  33 C0                     XOR EAX,EAX
004BC757  5F                        POP EDI
004BC758  5E                        POP ESI
004BC759  5B                        POP EBX
004BC75A  8B E5                     MOV ESP,EBP
004BC75C  5D                        POP EBP
004BC75D  C2 04 00                  RET 0x4
LAB_004bc760:
004BC760  83 F8 4A                  CMP EAX,0x4a
004BC763  75 27                     JNZ 0x004bc78c
004BC765  8B 03                     MOV EAX,dword ptr [EBX]
004BC767  68 24 03 00 00            PUSH 0x324
004BC76C  6A 04                     PUSH 0x4
004BC76E  8B CB                     MOV ECX,EBX
004BC770  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
004BC776  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BC77C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BC781  33 C0                     XOR EAX,EAX
004BC783  5F                        POP EDI
004BC784  5E                        POP ESI
004BC785  5B                        POP EBX
004BC786  8B E5                     MOV ESP,EBP
004BC788  5D                        POP EBP
004BC789  C2 04 00                  RET 0x4
LAB_004bc78c:
004BC78C  83 F8 4B                  CMP EAX,0x4b
004BC78F  75 27                     JNZ 0x004bc7b8
004BC791  8B 13                     MOV EDX,dword ptr [EBX]
004BC793  68 2D 03 00 00            PUSH 0x32d
004BC798  6A 04                     PUSH 0x4
004BC79A  8B CB                     MOV ECX,EBX
004BC79C  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
004BC7A2  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BC7A8  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BC7AD  33 C0                     XOR EAX,EAX
004BC7AF  5F                        POP EDI
004BC7B0  5E                        POP ESI
004BC7B1  5B                        POP EBX
004BC7B2  8B E5                     MOV ESP,EBP
004BC7B4  5D                        POP EBP
004BC7B5  C2 04 00                  RET 0x4
LAB_004bc7b8:
004BC7B8  83 F8 66                  CMP EAX,0x66
004BC7BB  75 27                     JNZ 0x004bc7e4
004BC7BD  8B 03                     MOV EAX,dword ptr [EBX]
004BC7BF  68 DC 03 00 00            PUSH 0x3dc
004BC7C4  6A 04                     PUSH 0x4
004BC7C6  8B CB                     MOV ECX,EBX
004BC7C8  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
004BC7CE  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BC7D4  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BC7D9  33 C0                     XOR EAX,EAX
004BC7DB  5F                        POP EDI
004BC7DC  5E                        POP ESI
004BC7DD  5B                        POP EBX
004BC7DE  8B E5                     MOV ESP,EBP
004BC7E0  5D                        POP EBP
004BC7E1  C2 04 00                  RET 0x4
LAB_004bc7e4:
004BC7E4  83 F8 67                  CMP EAX,0x67
004BC7E7  75 27                     JNZ 0x004bc810
004BC7E9  8B 13                     MOV EDX,dword ptr [EBX]
004BC7EB  68 E3 03 00 00            PUSH 0x3e3
004BC7F0  6A 04                     PUSH 0x4
004BC7F2  8B CB                     MOV ECX,EBX
004BC7F4  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
004BC7FA  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BC800  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BC805  33 C0                     XOR EAX,EAX
004BC807  5F                        POP EDI
004BC808  5E                        POP ESI
004BC809  5B                        POP EBX
004BC80A  8B E5                     MOV ESP,EBP
004BC80C  5D                        POP EBP
004BC80D  C2 04 00                  RET 0x4
LAB_004bc810:
004BC810  83 F8 6B                  CMP EAX,0x6b
004BC813  75 27                     JNZ 0x004bc83c
004BC815  8B 03                     MOV EAX,dword ptr [EBX]
004BC817  68 FE 03 00 00            PUSH 0x3fe
004BC81C  6A 04                     PUSH 0x4
004BC81E  8B CB                     MOV ECX,EBX
004BC820  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
004BC826  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BC82C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BC831  33 C0                     XOR EAX,EAX
004BC833  5F                        POP EDI
004BC834  5E                        POP ESI
004BC835  5B                        POP EBX
004BC836  8B E5                     MOV ESP,EBP
004BC838  5D                        POP EBP
004BC839  C2 04 00                  RET 0x4
LAB_004bc83c:
004BC83C  83 F8 70                  CMP EAX,0x70
004BC83F  75 27                     JNZ 0x004bc868
004BC841  8B 13                     MOV EDX,dword ptr [EBX]
004BC843  68 19 04 00 00            PUSH 0x419
004BC848  6A 04                     PUSH 0x4
004BC84A  8B CB                     MOV ECX,EBX
004BC84C  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
004BC852  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BC858  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BC85D  33 C0                     XOR EAX,EAX
004BC85F  5F                        POP EDI
004BC860  5E                        POP ESI
004BC861  5B                        POP EBX
004BC862  8B E5                     MOV ESP,EBP
004BC864  5D                        POP EBP
004BC865  C2 04 00                  RET 0x4
LAB_004bc868:
004BC868  83 F8 71                  CMP EAX,0x71
004BC86B  0F 85 01 08 00 00         JNZ 0x004bd072
004BC871  8B 03                     MOV EAX,dword ptr [EBX]
004BC873  68 20 04 00 00            PUSH 0x420
004BC878  6A 04                     PUSH 0x4
004BC87A  8B CB                     MOV ECX,EBX
004BC87C  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
004BC882  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BC888  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BC88D  33 C0                     XOR EAX,EAX
004BC88F  5F                        POP EDI
004BC890  5E                        POP ESI
004BC891  5B                        POP EBX
004BC892  8B E5                     MOV ESP,EBP
004BC894  5D                        POP EBP
004BC895  C2 04 00                  RET 0x4
switchD_004bbeff::caseD_1f:
004BC898  8B 8B AC 05 00 00         MOV ECX,dword ptr [EBX + 0x5ac]
004BC89E  83 F9 3A                  CMP ECX,0x3a
004BC8A1  75 25                     JNZ 0x004bc8c8
004BC8A3  8B 50 17                  MOV EDX,dword ptr [EAX + 0x17]
004BC8A6  80 3A 02                  CMP byte ptr [EDX],0x2
004BC8A9  75 1D                     JNZ 0x004bc8c8
004BC8AB  8B CB                     MOV ECX,EBX
004BC8AD  E8 ED 84 F4 FF            CALL 0x00404d9f
004BC8B2  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BC8B8  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BC8BD  33 C0                     XOR EAX,EAX
004BC8BF  5F                        POP EDI
004BC8C0  5E                        POP ESI
004BC8C1  5B                        POP EBX
004BC8C2  8B E5                     MOV ESP,EBP
004BC8C4  5D                        POP EBP
004BC8C5  C2 04 00                  RET 0x4
LAB_004bc8c8:
004BC8C8  83 F9 64                  CMP ECX,0x64
004BC8CB  0F 85 A1 07 00 00         JNZ 0x004bd072
004BC8D1  8B 40 17                  MOV EAX,dword ptr [EAX + 0x17]
004BC8D4  80 38 02                  CMP byte ptr [EAX],0x2
004BC8D7  0F 85 95 07 00 00         JNZ 0x004bd072
004BC8DD  8B CB                     MOV ECX,EBX
004BC8DF  E8 23 63 F4 FF            CALL 0x00402c07
004BC8E4  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BC8EA  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BC8EF  33 C0                     XOR EAX,EAX
004BC8F1  5F                        POP EDI
004BC8F2  5E                        POP ESI
004BC8F3  5B                        POP EBX
004BC8F4  8B E5                     MOV ESP,EBP
004BC8F6  5D                        POP EBP
004BC8F7  C2 04 00                  RET 0x4
switchD_004bbeff::caseD_17:
004BC8FA  8B 78 17                  MOV EDI,dword ptr [EAX + 0x17]
004BC8FD  8B 83 AC 05 00 00         MOV EAX,dword ptr [EBX + 0x5ac]
004BC903  83 F8 4C                  CMP EAX,0x4c
004BC906  0F 85 A1 00 00 00         JNZ 0x004bc9ad
004BC90C  8A 07                     MOV AL,byte ptr [EDI]
004BC90E  3C 06                     CMP AL,0x6
004BC910  75 20                     JNZ 0x004bc932
004BC912  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BC918  C7 83 E0 04 00 00 01 00 00 00  MOV dword ptr [EBX + 0x4e0],0x1
004BC922  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BC927  33 C0                     XOR EAX,EAX
004BC929  5F                        POP EDI
004BC92A  5E                        POP ESI
004BC92B  5B                        POP EBX
004BC92C  8B E5                     MOV ESP,EBP
004BC92E  5D                        POP EBP
004BC92F  C2 04 00                  RET 0x4
LAB_004bc932:
004BC932  3C 07                     CMP AL,0x7
004BC934  75 20                     JNZ 0x004bc956
004BC936  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BC93C  C7 83 E0 04 00 00 00 00 00 00  MOV dword ptr [EBX + 0x4e0],0x0
004BC946  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BC94B  33 C0                     XOR EAX,EAX
004BC94D  5F                        POP EDI
004BC94E  5E                        POP ESI
004BC94F  5B                        POP EBX
004BC950  8B E5                     MOV ESP,EBP
004BC952  5D                        POP EBP
004BC953  C2 04 00                  RET 0x4
LAB_004bc956:
004BC956  3C 08                     CMP AL,0x8
004BC958  0F 85 14 07 00 00         JNZ 0x004bd072
004BC95E  8B 83 D0 04 00 00         MOV EAX,dword ptr [EBX + 0x4d0]
004BC964  83 E8 00                  SUB EAX,0x0
004BC967  0F 84 AF 00 00 00         JZ 0x004bca1c
004BC96D  48                        DEC EAX
004BC96E  74 1D                     JZ 0x004bc98d
004BC970  48                        DEC EAX
004BC971  0F 84 A5 00 00 00         JZ 0x004bca1c
004BC977  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BC97D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BC982  33 C0                     XOR EAX,EAX
004BC984  5F                        POP EDI
004BC985  5E                        POP ESI
004BC986  5B                        POP EBX
004BC987  8B E5                     MOV ESP,EBP
004BC989  5D                        POP EBP
004BC98A  C2 04 00                  RET 0x4
LAB_004bc98d:
004BC98D  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BC993  C7 83 D4 04 00 00 02 00 00 00  MOV dword ptr [EBX + 0x4d4],0x2
004BC99D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BC9A2  33 C0                     XOR EAX,EAX
004BC9A4  5F                        POP EDI
004BC9A5  5E                        POP ESI
004BC9A6  5B                        POP EBX
004BC9A7  8B E5                     MOV ESP,EBP
004BC9A9  5D                        POP EBP
004BC9AA  C2 04 00                  RET 0x4
LAB_004bc9ad:
004BC9AD  83 F8 43                  CMP EAX,0x43
004BC9B0  0F 85 96 00 00 00         JNZ 0x004bca4c
004BC9B6  8A 07                     MOV AL,byte ptr [EDI]
004BC9B8  3C 06                     CMP AL,0x6
004BC9BA  75 20                     JNZ 0x004bc9dc
004BC9BC  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BC9C2  C7 83 E0 04 00 00 01 00 00 00  MOV dword ptr [EBX + 0x4e0],0x1
004BC9CC  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BC9D1  33 C0                     XOR EAX,EAX
004BC9D3  5F                        POP EDI
004BC9D4  5E                        POP ESI
004BC9D5  5B                        POP EBX
004BC9D6  8B E5                     MOV ESP,EBP
004BC9D8  5D                        POP EBP
004BC9D9  C2 04 00                  RET 0x4
LAB_004bc9dc:
004BC9DC  3C 07                     CMP AL,0x7
004BC9DE  75 20                     JNZ 0x004bca00
004BC9E0  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BC9E6  C7 83 E0 04 00 00 00 00 00 00  MOV dword ptr [EBX + 0x4e0],0x0
004BC9F0  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BC9F5  33 C0                     XOR EAX,EAX
004BC9F7  5F                        POP EDI
004BC9F8  5E                        POP ESI
004BC9F9  5B                        POP EBX
004BC9FA  8B E5                     MOV ESP,EBP
004BC9FC  5D                        POP EBP
004BC9FD  C2 04 00                  RET 0x4
LAB_004bca00:
004BCA00  3C 09                     CMP AL,0x9
004BCA02  0F 85 6A 06 00 00         JNZ 0x004bd072
004BCA08  8B 83 D0 04 00 00         MOV EAX,dword ptr [EBX + 0x4d0]
004BCA0E  83 E8 00                  SUB EAX,0x0
004BCA11  74 09                     JZ 0x004bca1c
004BCA13  83 E8 02                  SUB EAX,0x2
004BCA16  0F 85 56 06 00 00         JNZ 0x004bd072
LAB_004bca1c:
004BCA1C  81 BB D8 04 00 00 88 13 00 00  CMP dword ptr [EBX + 0x4d8],0x1388
004BCA26  0F 8C 46 06 00 00         JL 0x004bd072
004BCA2C  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BCA32  C7 83 D4 04 00 00 01 00 00 00  MOV dword ptr [EBX + 0x4d4],0x1
004BCA3C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BCA41  33 C0                     XOR EAX,EAX
004BCA43  5F                        POP EDI
004BCA44  5E                        POP ESI
004BCA45  5B                        POP EBX
004BCA46  8B E5                     MOV ESP,EBP
004BCA48  5D                        POP EBP
004BCA49  C2 04 00                  RET 0x4
LAB_004bca4c:
004BCA4C  83 F8 36                  CMP EAX,0x36
004BCA4F  74 09                     JZ 0x004bca5a
004BCA51  83 F8 5D                  CMP EAX,0x5d
004BCA54  0F 85 EC 00 00 00         JNZ 0x004bcb46
LAB_004bca5a:
004BCA5A  80 3F 0B                  CMP byte ptr [EDI],0xb
004BCA5D  0F 85 E3 00 00 00         JNZ 0x004bcb46
004BCA63  8B 8B 39 02 00 00         MOV ECX,dword ptr [EBX + 0x239]
004BCA69  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004BCA6C  8B 14 8D B0 8F 79 00      MOV EDX,dword ptr [ECX*0x4 + 0x798fb0]
004BCA73  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004BCA79  52                        PUSH EDX
004BCA7A  50                        PUSH EAX
004BCA7B  E8 EB 4D F4 FF            CALL 0x0040186b
004BCA80  85 C0                     TEST EAX,EAX
004BCA82  74 13                     JZ 0x004bca97
004BCA84  8B 4F 09                  MOV ECX,dword ptr [EDI + 0x9]
004BCA87  8B 57 05                  MOV EDX,dword ptr [EDI + 0x5]
004BCA8A  8B 47 01                  MOV EAX,dword ptr [EDI + 0x1]
004BCA8D  51                        PUSH ECX
004BCA8E  52                        PUSH EDX
004BCA8F  50                        PUSH EAX
004BCA90  8B CB                     MOV ECX,EBX
004BCA92  E8 7E 62 F4 FF            CALL 0x00402d15
LAB_004bca97:
004BCA97  8B 4B 10                  MOV ECX,dword ptr [EBX + 0x10]
004BCA9A  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004BCA9D  33 D2                     XOR EDX,EDX
004BCA9F  8A 91 2D 11 00 00         MOV DL,byte ptr [ECX + 0x112d]
004BCAA5  3B C2                     CMP EAX,EDX
004BCAA7  0F 85 C5 05 00 00         JNZ 0x004bd072
004BCAAD  8A 83 3D 02 00 00         MOV AL,byte ptr [EBX + 0x23d]
004BCAB3  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004BCAB9  50                        PUSH EAX
004BCABA  E8 F8 7E F4 FF            CALL 0x004049b7
004BCABF  25 FF 00 00 00            AND EAX,0xff
004BCAC4  48                        DEC EAX
004BCAC5  74 58                     JZ 0x004bcb1f
004BCAC7  48                        DEC EAX
004BCAC8  74 2E                     JZ 0x004bcaf8
004BCACA  48                        DEC EAX
004BCACB  0F 85 A1 05 00 00         JNZ 0x004bd072
004BCAD1  8B 13                     MOV EDX,dword ptr [EBX]
004BCAD3  68 9F 03 00 00            PUSH 0x39f
004BCAD8  6A 04                     PUSH 0x4
004BCADA  8B CB                     MOV ECX,EBX
004BCADC  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
004BCAE2  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BCAE8  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BCAED  33 C0                     XOR EAX,EAX
004BCAEF  5F                        POP EDI
004BCAF0  5E                        POP ESI
004BCAF1  5B                        POP EBX
004BCAF2  8B E5                     MOV ESP,EBP
004BCAF4  5D                        POP EBP
004BCAF5  C2 04 00                  RET 0x4
LAB_004bcaf8:
004BCAF8  8B 03                     MOV EAX,dword ptr [EBX]
004BCAFA  68 D8 02 00 00            PUSH 0x2d8
004BCAFF  6A 04                     PUSH 0x4
004BCB01  8B CB                     MOV ECX,EBX
004BCB03  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
004BCB09  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BCB0F  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BCB14  33 C0                     XOR EAX,EAX
004BCB16  5F                        POP EDI
004BCB17  5E                        POP ESI
004BCB18  5B                        POP EBX
004BCB19  8B E5                     MOV ESP,EBP
004BCB1B  5D                        POP EBP
004BCB1C  C2 04 00                  RET 0x4
LAB_004bcb1f:
004BCB1F  8B 13                     MOV EDX,dword ptr [EBX]
004BCB21  68 10 02 00 00            PUSH 0x210
004BCB26  6A 04                     PUSH 0x4
004BCB28  8B CB                     MOV ECX,EBX
004BCB2A  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
004BCB30  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BCB36  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BCB3B  33 C0                     XOR EAX,EAX
004BCB3D  5F                        POP EDI
004BCB3E  5E                        POP ESI
004BCB3F  5B                        POP EBX
004BCB40  8B E5                     MOV ESP,EBP
004BCB42  5D                        POP EBP
004BCB43  C2 04 00                  RET 0x4
LAB_004bcb46:
004BCB46  83 F8 3C                  CMP EAX,0x3c
004BCB49  0F 84 6C 01 00 00         JZ 0x004bccbb
004BCB4F  83 F8 53                  CMP EAX,0x53
004BCB52  0F 84 63 01 00 00         JZ 0x004bccbb
004BCB58  83 F8 70                  CMP EAX,0x70
004BCB5B  0F 85 89 00 00 00         JNZ 0x004bcbea
004BCB61  80 3F 12                  CMP byte ptr [EDI],0x12
004BCB64  0F 85 08 05 00 00         JNZ 0x004bd072
004BCB6A  8B 83 F0 04 00 00         MOV EAX,dword ptr [EBX + 0x4f0]
004BCB70  85 C0                     TEST EAX,EAX
004BCB72  0F 85 FA 04 00 00         JNZ 0x004bd072
004BCB78  83 BB EC 04 00 00 64      CMP dword ptr [EBX + 0x4ec],0x64
004BCB7F  0F 8C ED 04 00 00         JL 0x004bd072
004BCB85  B8 01 00 00 00            MOV EAX,0x1
004BCB8A  89 83 D0 04 00 00         MOV dword ptr [EBX + 0x4d0],EAX
004BCB90  89 83 61 02 00 00         MOV dword ptr [EBX + 0x261],EAX
004BCB96  8B 83 65 02 00 00         MOV EAX,dword ptr [EBX + 0x265]
004BCB9C  0C 02                     OR AL,0x2
004BCB9E  89 83 65 02 00 00         MOV dword ptr [EBX + 0x265],EAX
004BCBA4  83 C8 FF                  OR EAX,0xffffffff
004BCBA7  89 83 A5 02 00 00         MOV dword ptr [EBX + 0x2a5],EAX
004BCBAD  89 83 A9 02 00 00         MOV dword ptr [EBX + 0x2a9],EAX
004BCBB3  89 83 AD 02 00 00         MOV dword ptr [EBX + 0x2ad],EAX
004BCBB9  C7 83 EC 04 00 00 00 00 00 00  MOV dword ptr [EBX + 0x4ec],0x0
004BCBC3  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004BCBC8  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
004BCBCE  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BCBD4  89 8B D8 04 00 00         MOV dword ptr [EBX + 0x4d8],ECX
004BCBDA  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BCBDF  33 C0                     XOR EAX,EAX
004BCBE1  5F                        POP EDI
004BCBE2  5E                        POP ESI
004BCBE3  5B                        POP EBX
004BCBE4  8B E5                     MOV ESP,EBP
004BCBE6  5D                        POP EBP
004BCBE7  C2 04 00                  RET 0x4
LAB_004bcbea:
004BCBEA  83 F8 6D                  CMP EAX,0x6d
004BCBED  0F 85 7F 04 00 00         JNZ 0x004bd072
004BCBF3  8A 07                     MOV AL,byte ptr [EDI]
004BCBF5  3C 19                     CMP AL,0x19
004BCBF7  75 5A                     JNZ 0x004bcc53
004BCBF9  8B 47 1D                  MOV EAX,dword ptr [EDI + 0x1d]
004BCBFC  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004BCC02  8D 55 EC                  LEA EDX,[EBP + -0x14]
004BCC05  52                        PUSH EDX
004BCC06  50                        PUSH EAX
004BCC07  E8 C4 96 22 00            CALL 0x006e62d0
004BCC0C  85 C0                     TEST EAX,EAX
004BCC0E  0F 85 5E 04 00 00         JNZ 0x004bd072
004BCC14  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
004BCC17  51                        PUSH ECX
004BCC18  8B CB                     MOV ECX,EBX
004BCC1A  E8 C1 86 F4 FF            CALL 0x004052e0
004BCC1F  85 C0                     TEST EAX,EAX
004BCC21  0F 84 4B 04 00 00         JZ 0x004bd072
004BCC27  8B 83 D0 04 00 00         MOV EAX,dword ptr [EBX + 0x4d0]
004BCC2D  85 C0                     TEST EAX,EAX
004BCC2F  75 0F                     JNZ 0x004bcc40
004BCC31  8B 83 D4 04 00 00         MOV EAX,dword ptr [EBX + 0x4d4]
004BCC37  85 C0                     TEST EAX,EAX
004BCC39  B8 64 00 00 00            MOV EAX,0x64
004BCC3E  74 05                     JZ 0x004bcc45
LAB_004bcc40:
004BCC40  B8 32 00 00 00            MOV EAX,0x32
LAB_004bcc45:
004BCC45  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
004BCC48  50                        PUSH EAX
004BCC49  52                        PUSH EDX
004BCC4A  8B CB                     MOV ECX,EBX
004BCC4C  E8 D1 44 F4 FF            CALL 0x00401122
004BCC51  EB 2B                     JMP 0x004bcc7e
LAB_004bcc53:
004BCC53  3C 1A                     CMP AL,0x1a
004BCC55  0F 85 17 04 00 00         JNZ 0x004bd072
004BCC5B  8B 7F 1D                  MOV EDI,dword ptr [EDI + 0x1d]
004BCC5E  83 FF 02                  CMP EDI,0x2
004BCC61  0F 83 0B 04 00 00         JNC 0x004bd072
004BCC67  8B 84 BB D0 04 00 00      MOV EAX,dword ptr [EBX + EDI*0x4 + 0x4d0]
004BCC6E  85 C0                     TEST EAX,EAX
004BCC70  0F 84 FC 03 00 00         JZ 0x004bd072
004BCC76  50                        PUSH EAX
004BCC77  8B CB                     MOV ECX,EBX
004BCC79  E8 AD 4F F4 FF            CALL 0x00401c2b
LAB_004bcc7e:
004BCC7E  8B 43 10                  MOV EAX,dword ptr [EBX + 0x10]
004BCC81  33 C9                     XOR ECX,ECX
004BCC83  8A 88 2D 11 00 00         MOV CL,byte ptr [EAX + 0x112d]
004BCC89  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004BCC8C  3B C1                     CMP EAX,ECX
004BCC8E  0F 85 DE 03 00 00         JNZ 0x004bd072
004BCC94  8B 13                     MOV EDX,dword ptr [EBX]
004BCC96  68 0B 04 00 00            PUSH 0x40b
004BCC9B  6A 04                     PUSH 0x4
004BCC9D  8B CB                     MOV ECX,EBX
004BCC9F  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
004BCCA5  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BCCAB  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BCCB0  33 C0                     XOR EAX,EAX
004BCCB2  5F                        POP EDI
004BCCB3  5E                        POP ESI
004BCCB4  5B                        POP EBX
004BCCB5  8B E5                     MOV ESP,EBP
004BCCB7  5D                        POP EBP
004BCCB8  C2 04 00                  RET 0x4
LAB_004bccbb:
004BCCBB  8A 07                     MOV AL,byte ptr [EDI]
004BCCBD  3C 0C                     CMP AL,0xc
004BCCBF  75 52                     JNZ 0x004bcd13
004BCCC1  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004BCCC4  69 C0 62 0A 00 00         IMUL EAX,EAX,0xa62
004BCCCA  8B 88 2E 58 7F 00         MOV ECX,dword ptr [EAX + 0x7f582e]
004BCCD0  85 C9                     TEST ECX,ECX
004BCCD2  0F 85 9A 03 00 00         JNZ 0x004bd072
004BCCD8  8B 4B 1C                  MOV ECX,dword ptr [EBX + 0x1c]
004BCCDB  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
004BCCE1  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
004BCCE7  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
004BCCEA  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
004BCCED  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004BCCF3  C1 E8 10                  SHR EAX,0x10
004BCCF6  50                        PUSH EAX
004BCCF7  52                        PUSH EDX
004BCCF8  E8 89 67 F4 FF            CALL 0x00403486
004BCCFD  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BCD03  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BCD08  33 C0                     XOR EAX,EAX
004BCD0A  5F                        POP EDI
004BCD0B  5E                        POP ESI
004BCD0C  5B                        POP EBX
004BCD0D  8B E5                     MOV ESP,EBP
004BCD0F  5D                        POP EBP
004BCD10  C2 04 00                  RET 0x4
LAB_004bcd13:
004BCD13  3C 0D                     CMP AL,0xd
004BCD15  0F 85 57 03 00 00         JNZ 0x004bd072
004BCD1B  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004BCD1E  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004BCD24  50                        PUSH EAX
004BCD25  E8 87 5A F4 FF            CALL 0x004027b1
004BCD2A  8B 4B 10                  MOV ECX,dword ptr [EBX + 0x10]
004BCD2D  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004BCD30  33 D2                     XOR EDX,EDX
004BCD32  8A 91 2D 11 00 00         MOV DL,byte ptr [ECX + 0x112d]
004BCD38  3B C2                     CMP EAX,EDX
004BCD3A  0F 85 32 03 00 00         JNZ 0x004bd072
004BCD40  8B 0D 98 16 80 00         MOV ECX,dword ptr [0x00801698]
004BCD46  85 C9                     TEST ECX,ECX
004BCD48  0F 84 24 03 00 00         JZ 0x004bd072
004BCD4E  8B 01                     MOV EAX,dword ptr [ECX]
004BCD50  6A 01                     PUSH 0x1
004BCD52  FF 50 1C                  CALL dword ptr [EAX + 0x1c]
004BCD55  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BCD5B  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BCD60  33 C0                     XOR EAX,EAX
004BCD62  5F                        POP EDI
004BCD63  5E                        POP ESI
004BCD64  5B                        POP EBX
004BCD65  8B E5                     MOV ESP,EBP
004BCD67  5D                        POP EBP
004BCD68  C2 04 00                  RET 0x4
switchD_004bbeff::caseD_27:
004BCD6B  8B 93 AC 05 00 00         MOV EDX,dword ptr [EBX + 0x5ac]
004BCD71  83 FA 50                  CMP EDX,0x50
004BCD74  75 2B                     JNZ 0x004bcda1
004BCD76  8B 40 17                  MOV EAX,dword ptr [EAX + 0x17]
004BCD79  33 C9                     XOR ECX,ECX
004BCD7B  33 D2                     XOR EDX,EDX
004BCD7D  8A 48 01                  MOV CL,byte ptr [EAX + 0x1]
004BCD80  8A 10                     MOV DL,byte ptr [EAX]
004BCD82  51                        PUSH ECX
004BCD83  52                        PUSH EDX
004BCD84  8B CB                     MOV ECX,EBX
004BCD86  E8 FF 58 F4 FF            CALL 0x0040268a
004BCD8B  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BCD91  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BCD96  33 C0                     XOR EAX,EAX
004BCD98  5F                        POP EDI
004BCD99  5E                        POP ESI
004BCD9A  5B                        POP EBX
004BCD9B  8B E5                     MOV ESP,EBP
004BCD9D  5D                        POP EBP
004BCD9E  C2 04 00                  RET 0x4
LAB_004bcda1:
004BCDA1  83 FA 34                  CMP EDX,0x34
004BCDA4  75 2B                     JNZ 0x004bcdd1
004BCDA6  8B 48 17                  MOV ECX,dword ptr [EAX + 0x17]
004BCDA9  80 39 02                  CMP byte ptr [ECX],0x2
004BCDAC  75 23                     JNZ 0x004bcdd1
004BCDAE  33 C0                     XOR EAX,EAX
004BCDB0  8A 41 01                  MOV AL,byte ptr [ECX + 0x1]
004BCDB3  8B CB                     MOV ECX,EBX
004BCDB5  50                        PUSH EAX
004BCDB6  E8 43 62 F4 FF            CALL 0x00402ffe
004BCDBB  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BCDC1  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BCDC6  33 C0                     XOR EAX,EAX
004BCDC8  5F                        POP EDI
004BCDC9  5E                        POP ESI
004BCDCA  5B                        POP EBX
004BCDCB  8B E5                     MOV ESP,EBP
004BCDCD  5D                        POP EBP
004BCDCE  C2 04 00                  RET 0x4
LAB_004bcdd1:
004BCDD1  83 FA 5B                  CMP EDX,0x5b
004BCDD4  0F 85 98 02 00 00         JNZ 0x004bd072
004BCDDA  8B 40 17                  MOV EAX,dword ptr [EAX + 0x17]
004BCDDD  80 38 02                  CMP byte ptr [EAX],0x2
004BCDE0  0F 85 8C 02 00 00         JNZ 0x004bd072
004BCDE6  33 C9                     XOR ECX,ECX
004BCDE8  8A 48 01                  MOV CL,byte ptr [EAX + 0x1]
004BCDEB  51                        PUSH ECX
004BCDEC  8B CB                     MOV ECX,EBX
004BCDEE  E8 37 63 F4 FF            CALL 0x0040312a
004BCDF3  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BCDF9  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BCDFE  33 C0                     XOR EAX,EAX
004BCE00  5F                        POP EDI
004BCE01  5E                        POP ESI
004BCE02  5B                        POP EBX
004BCE03  8B E5                     MOV ESP,EBP
004BCE05  5D                        POP EBP
004BCE06  C2 04 00                  RET 0x4
switchD_004bbeff::caseD_23:
004BCE09  8B 40 17                  MOV EAX,dword ptr [EAX + 0x17]
004BCE0C  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
004BCE0F  85 D2                     TEST EDX,EDX
004BCE11  0F 8C 5B 02 00 00         JL 0x004bd072
004BCE17  0F BF 35 40 B2 7F 00      MOVSX ESI,word ptr [0x007fb240]
004BCE1E  3B D6                     CMP EDX,ESI
004BCE20  0F 8D 4C 02 00 00         JGE 0x004bd072
004BCE26  8B 78 08                  MOV EDI,dword ptr [EAX + 0x8]
004BCE29  85 FF                     TEST EDI,EDI
004BCE2B  0F 8C 41 02 00 00         JL 0x004bd072
004BCE31  0F BF 0D 42 B2 7F 00      MOVSX ECX,word ptr [0x007fb242]
004BCE38  3B F9                     CMP EDI,ECX
004BCE3A  0F 8D 32 02 00 00         JGE 0x004bd072
004BCE40  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
004BCE43  85 C9                     TEST ECX,ECX
004BCE45  0F 8C 27 02 00 00         JL 0x004bd072
004BCE4B  3B CE                     CMP ECX,ESI
004BCE4D  0F 8D 1F 02 00 00         JGE 0x004bd072
004BCE53  8B 00                     MOV EAX,dword ptr [EAX]
004BCE55  83 F8 32                  CMP EAX,0x32
004BCE58  0F 82 14 02 00 00         JC 0x004bd072
004BCE5E  83 F8 74                  CMP EAX,0x74
004BCE61  0F 83 0B 02 00 00         JNC 0x004bd072
004BCE67  8B B3 AC 05 00 00         MOV ESI,dword ptr [EBX + 0x5ac]
004BCE6D  83 FE 53                  CMP ESI,0x53
004BCE70  75 21                     JNZ 0x004bce93
004BCE72  51                        PUSH ECX
004BCE73  57                        PUSH EDI
004BCE74  52                        PUSH EDX
004BCE75  50                        PUSH EAX
004BCE76  8B CB                     MOV ECX,EBX
004BCE78  E8 8E 8B F4 FF            CALL 0x00405a0b
004BCE7D  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BCE83  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BCE88  33 C0                     XOR EAX,EAX
004BCE8A  5F                        POP EDI
004BCE8B  5E                        POP ESI
004BCE8C  5B                        POP EBX
004BCE8D  8B E5                     MOV ESP,EBP
004BCE8F  5D                        POP EBP
004BCE90  C2 04 00                  RET 0x4
LAB_004bce93:
004BCE93  83 FE 6C                  CMP ESI,0x6c
004BCE96  0F 85 D6 01 00 00         JNZ 0x004bd072
004BCE9C  51                        PUSH ECX
004BCE9D  57                        PUSH EDI
004BCE9E  52                        PUSH EDX
004BCE9F  8B CB                     MOV ECX,EBX
004BCEA1  E8 8C 46 F4 FF            CALL 0x00401532
004BCEA6  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BCEAC  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BCEB1  33 C0                     XOR EAX,EAX
004BCEB3  5F                        POP EDI
004BCEB4  5E                        POP ESI
004BCEB5  5B                        POP EBX
004BCEB6  8B E5                     MOV ESP,EBP
004BCEB8  5D                        POP EBP
004BCEB9  C2 04 00                  RET 0x4
switchD_004bbeff::caseD_20:
004BCEBC  8B 8B AC 05 00 00         MOV ECX,dword ptr [EBX + 0x5ac]
004BCEC2  8B 40 17                  MOV EAX,dword ptr [EAX + 0x17]
004BCEC5  83 F9 52                  CMP ECX,0x52
004BCEC8  74 09                     JZ 0x004bced3
004BCECA  83 F9 5F                  CMP ECX,0x5f
004BCECD  0F 85 9F 01 00 00         JNZ 0x004bd072
LAB_004bced3:
004BCED3  8A 08                     MOV CL,byte ptr [EAX]
004BCED5  80 F9 01                  CMP CL,0x1
004BCED8  75 28                     JNZ 0x004bcf02
004BCEDA  8B 50 03                  MOV EDX,dword ptr [EAX + 0x3]
004BCEDD  33 C9                     XOR ECX,ECX
004BCEDF  66 8B 48 01               MOV CX,word ptr [EAX + 0x1]
004BCEE3  52                        PUSH EDX
004BCEE4  51                        PUSH ECX
004BCEE5  8B CB                     MOV ECX,EBX
004BCEE7  E8 4A 4C F4 FF            CALL 0x00401b36
004BCEEC  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BCEF2  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BCEF7  33 C0                     XOR EAX,EAX
004BCEF9  5F                        POP EDI
004BCEFA  5E                        POP ESI
004BCEFB  5B                        POP EBX
004BCEFC  8B E5                     MOV ESP,EBP
004BCEFE  5D                        POP EBP
004BCEFF  C2 04 00                  RET 0x4
LAB_004bcf02:
004BCF02  33 D2                     XOR EDX,EDX
004BCF04  81 E1 FF 00 00 00         AND ECX,0xff
004BCF0A  66 8B 50 07               MOV DX,word ptr [EAX + 0x7]
004BCF0E  52                        PUSH EDX
004BCF0F  8B 50 03                  MOV EDX,dword ptr [EAX + 0x3]
004BCF12  52                        PUSH EDX
004BCF13  33 D2                     XOR EDX,EDX
004BCF15  66 8B 50 01               MOV DX,word ptr [EAX + 0x1]
004BCF19  52                        PUSH EDX
004BCF1A  51                        PUSH ECX
004BCF1B  8B CB                     MOV ECX,EBX
004BCF1D  E8 FA 4C F4 FF            CALL 0x00401c1c
004BCF22  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BCF28  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BCF2D  33 C0                     XOR EAX,EAX
004BCF2F  5F                        POP EDI
004BCF30  5E                        POP ESI
004BCF31  5B                        POP EBX
004BCF32  8B E5                     MOV ESP,EBP
004BCF34  5D                        POP EBP
004BCF35  C2 04 00                  RET 0x4
switchD_004bbeff::caseD_1a:
004BCF38  8B 40 17                  MOV EAX,dword ptr [EAX + 0x17]
004BCF3B  80 38 02                  CMP byte ptr [EAX],0x2
004BCF3E  0F 85 2E 01 00 00         JNZ 0x004bd072
004BCF44  8B 48 09                  MOV ECX,dword ptr [EAX + 0x9]
004BCF47  8B 50 05                  MOV EDX,dword ptr [EAX + 0x5]
004BCF4A  8B 40 01                  MOV EAX,dword ptr [EAX + 0x1]
004BCF4D  51                        PUSH ECX
004BCF4E  52                        PUSH EDX
004BCF4F  50                        PUSH EAX
004BCF50  8B CB                     MOV ECX,EBX
004BCF52  E8 73 44 F4 FF            CALL 0x004013ca
004BCF57  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BCF5D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BCF62  33 C0                     XOR EAX,EAX
004BCF64  5F                        POP EDI
004BCF65  5E                        POP ESI
004BCF66  5B                        POP EBX
004BCF67  8B E5                     MOV ESP,EBP
004BCF69  5D                        POP EBP
004BCF6A  C2 04 00                  RET 0x4
switchD_004bbeff::caseD_2a:
004BCF6D  83 BB AC 05 00 00 6D      CMP dword ptr [EBX + 0x5ac],0x6d
004BCF74  0F 85 F8 00 00 00         JNZ 0x004bd072
004BCF7A  8B 48 17                  MOV ECX,dword ptr [EAX + 0x17]
004BCF7D  33 C0                     XOR EAX,EAX
004BCF7F  8A 01                     MOV AL,byte ptr [ECX]
004BCF81  83 F8 05                  CMP EAX,0x5
004BCF84  0F 87 E8 00 00 00         JA 0x004bd072
switchD_004bcf8a::switchD:
004BCF8A  FF 24 85 C8 D3 4B 00      JMP dword ptr [EAX*0x4 + 0x4bd3c8]
switchD_004bcf8a::caseD_1:
004BCF91  8B 83 D0 04 00 00         MOV EAX,dword ptr [EBX + 0x4d0]
004BCF97  85 C0                     TEST EAX,EAX
004BCF99  0F 84 D3 00 00 00         JZ 0x004bd072
004BCF9F  8B 93 E0 04 00 00         MOV EDX,dword ptr [EBX + 0x4e0]
004BCFA5  8B CB                     MOV ECX,EBX
004BCFA7  83 C2 05                  ADD EDX,0x5
004BCFAA  52                        PUSH EDX
004BCFAB  6A 00                     PUSH 0x0
004BCFAD  E8 E5 80 F4 FF            CALL 0x00405097
004BCFB2  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BCFB8  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BCFBD  33 C0                     XOR EAX,EAX
004BCFBF  5F                        POP EDI
004BCFC0  5E                        POP ESI
004BCFC1  5B                        POP EBX
004BCFC2  8B E5                     MOV ESP,EBP
004BCFC4  5D                        POP EBP
004BCFC5  C2 04 00                  RET 0x4
switchD_004bcf8a::caseD_0:
004BCFC8  8B 83 D0 04 00 00         MOV EAX,dword ptr [EBX + 0x4d0]
004BCFCE  85 C0                     TEST EAX,EAX
004BCFD0  0F 84 9C 00 00 00         JZ 0x004bd072
004BCFD6  8B 83 E0 04 00 00         MOV EAX,dword ptr [EBX + 0x4e0]
004BCFDC  8B CB                     MOV ECX,EBX
004BCFDE  83 E8 05                  SUB EAX,0x5
004BCFE1  50                        PUSH EAX
004BCFE2  6A 00                     PUSH 0x0
004BCFE4  E8 AE 80 F4 FF            CALL 0x00405097
004BCFE9  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BCFEF  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BCFF4  33 C0                     XOR EAX,EAX
004BCFF6  5F                        POP EDI
004BCFF7  5E                        POP ESI
004BCFF8  5B                        POP EBX
004BCFF9  8B E5                     MOV ESP,EBP
004BCFFB  5D                        POP EBP
004BCFFC  C2 04 00                  RET 0x4
switchD_004bcf8a::caseD_3:
004BCFFF  8B 83 D4 04 00 00         MOV EAX,dword ptr [EBX + 0x4d4]
004BD005  85 C0                     TEST EAX,EAX
004BD007  74 69                     JZ 0x004bd072
004BD009  8B 8B E4 04 00 00         MOV ECX,dword ptr [EBX + 0x4e4]
004BD00F  83 C1 05                  ADD ECX,0x5
004BD012  51                        PUSH ECX
004BD013  6A 01                     PUSH 0x1
004BD015  8B CB                     MOV ECX,EBX
004BD017  E8 7B 80 F4 FF            CALL 0x00405097
004BD01C  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BD022  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BD027  33 C0                     XOR EAX,EAX
004BD029  5F                        POP EDI
004BD02A  5E                        POP ESI
004BD02B  5B                        POP EBX
004BD02C  8B E5                     MOV ESP,EBP
004BD02E  5D                        POP EBP
004BD02F  C2 04 00                  RET 0x4
switchD_004bcf8a::caseD_2:
004BD032  8B 83 D4 04 00 00         MOV EAX,dword ptr [EBX + 0x4d4]
004BD038  85 C0                     TEST EAX,EAX
004BD03A  74 36                     JZ 0x004bd072
004BD03C  8B 93 E4 04 00 00         MOV EDX,dword ptr [EBX + 0x4e4]
004BD042  8B CB                     MOV ECX,EBX
004BD044  83 EA 05                  SUB EDX,0x5
004BD047  52                        PUSH EDX
004BD048  6A 01                     PUSH 0x1
004BD04A  E8 48 80 F4 FF            CALL 0x00405097
004BD04F  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BD055  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BD05A  33 C0                     XOR EAX,EAX
004BD05C  5F                        POP EDI
004BD05D  5E                        POP ESI
004BD05E  5B                        POP EBX
004BD05F  8B E5                     MOV ESP,EBP
004BD061  5D                        POP EBP
004BD062  C2 04 00                  RET 0x4
switchD_004bcf8a::caseD_4:
004BD065  6A 00                     PUSH 0x0
004BD067  EB 02                     JMP 0x004bd06b
switchD_004bcf8a::caseD_5:
004BD069  6A 01                     PUSH 0x1
LAB_004bd06b:
004BD06B  8B CB                     MOV ECX,EBX
004BD06D  E8 CE 8B F4 FF            CALL 0x00405c40
switchD_004bbeff::caseD_a:
004BD072  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
004BD078  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004BD07D  33 C0                     XOR EAX,EAX
004BD07F  5F                        POP EDI
004BD080  5E                        POP ESI
004BD081  5B                        POP EBX
004BD082  8B E5                     MOV ESP,EBP
004BD084  5D                        POP EBP
004BD085  C2 04 00                  RET 0x4
LAB_004bd088:
004BD088  8B 8D 40 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff40]
004BD08E  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004BD091  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004BD097  8B 42 10                  MOV EAX,dword ptr [EDX + 0x10]
004BD09A  50                        PUSH EAX
004BD09B  68 48 C8 7A 00            PUSH 0x7ac848
004BD0A0  57                        PUSH EDI
004BD0A1  6A 00                     PUSH 0x0
004BD0A3  68 D9 06 00 00            PUSH 0x6d9
004BD0A8  68 20 C8 7A 00            PUSH 0x7ac820
004BD0AD  E8 1E 04 1F 00            CALL 0x006ad4d0
004BD0B2  83 C4 18                  ADD ESP,0x18
004BD0B5  85 C0                     TEST EAX,EAX
004BD0B7  74 01                     JZ 0x004bd0ba
004BD0B9  CC                        INT3
LAB_004bd0ba:
004BD0BA  68 DA 06 00 00            PUSH 0x6da
004BD0BF  68 20 C8 7A 00            PUSH 0x7ac820
004BD0C4  6A 00                     PUSH 0x0
004BD0C6  57                        PUSH EDI
004BD0C7  E8 74 8D 1E 00            CALL 0x006a5e40
004BD0CC  8B C7                     MOV EAX,EDI
004BD0CE  5F                        POP EDI
004BD0CF  5E                        POP ESI
004BD0D0  5B                        POP EBX
004BD0D1  8B E5                     MOV ESP,EBP
004BD0D3  5D                        POP EBP
004BD0D4  C2 04 00                  RET 0x4
