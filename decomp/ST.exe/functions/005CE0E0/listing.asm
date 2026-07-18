FUN_005ce0e0:
005CE0E0  55                        PUSH EBP
005CE0E1  8B EC                     MOV EBP,ESP
005CE0E3  81 EC 44 01 00 00         SUB ESP,0x144
005CE0E9  8A 41 65                  MOV AL,byte ptr [ECX + 0x65]
005CE0EC  53                        PUSH EBX
005CE0ED  56                        PUSH ESI
005CE0EE  33 F6                     XOR ESI,ESI
005CE0F0  88 45 E7                  MOV byte ptr [EBP + -0x19],AL
005CE0F3  57                        PUSH EDI
005CE0F4  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
005CE0F7  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
005CE0FD  8D 85 C0 FE FF FF         LEA EAX,[EBP + 0xfffffec0]
005CE103  8D 95 BC FE FF FF         LEA EDX,[EBP + 0xfffffebc]
005CE109  56                        PUSH ESI
005CE10A  50                        PUSH EAX
005CE10B  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
005CE10E  C7 45 E0 FF FF FF FF      MOV dword ptr [EBP + -0x20],0xffffffff
005CE115  89 8D BC FE FF FF         MOV dword ptr [EBP + 0xfffffebc],ECX
005CE11B  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005CE121  E8 CA F6 15 00            CALL 0x0072d7f0
005CE126  8B F8                     MOV EDI,EAX
005CE128  83 C4 08                  ADD ESP,0x8
005CE12B  3B FE                     CMP EDI,ESI
005CE12D  0F 85 C7 14 00 00         JNZ 0x005cf5fa
005CE133  8B 5D A8                  MOV EBX,dword ptr [EBP + -0x58]
005CE136  8B CB                     MOV ECX,EBX
005CE138  E8 46 42 E3 FF            CALL 0x00402383
005CE13D  85 C0                     TEST EAX,EAX
005CE13F  0F 84 B1 00 00 00         JZ 0x005ce1f6
005CE145  80 7D E7 03               CMP byte ptr [EBP + -0x19],0x3
005CE149  0F 85 A7 00 00 00         JNZ 0x005ce1f6
005CE14F  80 7B 65 01               CMP byte ptr [EBX + 0x65],0x1
005CE153  0F 85 9D 00 00 00         JNZ 0x005ce1f6
005CE159  8B 8B 00 22 00 00         MOV ECX,dword ptr [EBX + 0x2200]
005CE15F  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005CE165  51                        PUSH ECX
005CE166  52                        PUSH EDX
005CE167  E8 C4 52 0E 00            CALL 0x006b3430
005CE16C  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005CE171  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005CE177  8B 88 54 05 00 00         MOV ECX,dword ptr [EAX + 0x554]
005CE17D  51                        PUSH ECX
005CE17E  52                        PUSH EDX
005CE17F  E8 AC 52 0E 00            CALL 0x006b3430
005CE184  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005CE189  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005CE18F  8B 88 58 05 00 00         MOV ECX,dword ptr [EAX + 0x558]
005CE195  51                        PUSH ECX
005CE196  52                        PUSH EDX
005CE197  E8 94 52 0E 00            CALL 0x006b3430
005CE19C  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005CE1A1  8B 88 60 05 00 00         MOV ECX,dword ptr [EAX + 0x560]
005CE1A7  83 F9 FF                  CMP ECX,-0x1
005CE1AA  74 22                     JZ 0x005ce1ce
005CE1AC  8B 90 7C 05 00 00         MOV EDX,dword ptr [EAX + 0x57c]
005CE1B2  52                        PUSH EDX
005CE1B3  8B 90 78 05 00 00         MOV EDX,dword ptr [EAX + 0x578]
005CE1B9  8B 80 A4 05 00 00         MOV EAX,dword ptr [EAX + 0x5a4]
005CE1BF  52                        PUSH EDX
005CE1C0  6A FE                     PUSH -0x2
005CE1C2  51                        PUSH ECX
005CE1C3  50                        PUSH EAX
005CE1C4  E8 07 53 0E 00            CALL 0x006b34d0
005CE1C9  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005ce1ce:
005CE1CE  8B 88 F1 05 00 00         MOV ECX,dword ptr [EAX + 0x5f1]
005CE1D4  83 F9 FF                  CMP ECX,-0x1
005CE1D7  74 1D                     JZ 0x005ce1f6
005CE1D9  8B 90 0D 06 00 00         MOV EDX,dword ptr [EAX + 0x60d]
005CE1DF  52                        PUSH EDX
005CE1E0  8B 90 09 06 00 00         MOV EDX,dword ptr [EAX + 0x609]
005CE1E6  8B 80 35 06 00 00         MOV EAX,dword ptr [EAX + 0x635]
005CE1EC  52                        PUSH EDX
005CE1ED  6A FE                     PUSH -0x2
005CE1EF  51                        PUSH ECX
005CE1F0  50                        PUSH EAX
005CE1F1  E8 DA 52 0E 00            CALL 0x006b34d0
LAB_005ce1f6:
005CE1F6  8B 15 64 17 81 00         MOV EDX,dword ptr [0x00811764]
005CE1FC  56                        PUSH ESI
005CE1FD  8D 4D D4                  LEA ECX,[EBP + -0x2c]
005CE200  6A FF                     PUSH -0x1
005CE202  51                        PUSH ECX
005CE203  6A FF                     PUSH -0x1
005CE205  52                        PUSH EDX
005CE206  E8 05 93 0E 00            CALL 0x006b7510
005CE20B  A0 7E 87 80 00            MOV AL,[0x0080877e]
005CE210  84 C0                     TEST AL,AL
005CE212  74 37                     JZ 0x005ce24b
005CE214  8A 83 2E 22 00 00         MOV AL,byte ptr [EBX + 0x222e]
005CE21A  84 C0                     TEST AL,AL
005CE21C  0F 84 59 01 00 00         JZ 0x005ce37b
005CE222  8B 43 61                  MOV EAX,dword ptr [EBX + 0x61]
005CE225  8B 93 33 22 00 00         MOV EDX,dword ptr [EBX + 0x2233]
005CE22B  2B C2                     SUB EAX,EDX
005CE22D  3D 30 75 00 00            CMP EAX,0x7530
005CE232  0F 82 43 01 00 00         JC 0x005ce37b
005CE238  8B CB                     MOV ECX,EBX
005CE23A  C6 83 2E 22 00 00 00      MOV byte ptr [EBX + 0x222e],0x0
005CE241  E8 D8 64 E3 FF            CALL 0x0040471e
005CE246  E9 30 01 00 00            JMP 0x005ce37b
LAB_005ce24b:
005CE24B  8B 43 61                  MOV EAX,dword ptr [EBX + 0x61]
005CE24E  8B BB 0D 22 00 00         MOV EDI,dword ptr [EBX + 0x220d]
005CE254  8B C8                     MOV ECX,EAX
005CE256  2B CF                     SUB ECX,EDI
005CE258  81 F9 20 03 00 00         CMP ECX,0x320
005CE25E  72 7A                     JC 0x005ce2da
005CE260  8B 93 21 22 00 00         MOV EDX,dword ptr [EBX + 0x2221]
005CE266  8B 8B 11 22 00 00         MOV ECX,dword ptr [EBX + 0x2211]
005CE26C  89 95 12 FF FF FF         MOV dword ptr [EBP + 0xffffff12],EDX
005CE272  8B 15 64 17 81 00         MOV EDX,dword ptr [0x00811764]
005CE278  56                        PUSH ESI
005CE279  52                        PUSH EDX
005CE27A  C6 85 02 FF FF FF 04      MOV byte ptr [EBP + 0xffffff02],0x4
005CE281  89 8D 22 FF FF FF         MOV dword ptr [EBP + 0xffffff22],ECX
005CE287  89 85 1E FF FF FF         MOV dword ptr [EBP + 0xffffff1e],EAX
005CE28D  E8 6E 82 0E 00            CALL 0x006b6500
005CE292  8B 0D 64 17 81 00         MOV ECX,dword ptr [0x00811764]
005CE298  6A FF                     PUSH -0x1
005CE29A  6A 01                     PUSH 0x1
005CE29C  8D 85 00 FF FF FF         LEA EAX,[EBP + 0xffffff00]
005CE2A2  6A 26                     PUSH 0x26
005CE2A4  50                        PUSH EAX
005CE2A5  6A 1A                     PUSH 0x1a
005CE2A7  6A 01                     PUSH 0x1
005CE2A9  51                        PUSH ECX
005CE2AA  E8 B1 70 14 00            CALL 0x00715360
005CE2AF  8B 15 3C 73 80 00         MOV EDX,dword ptr [0x0080733c]
005CE2B5  A1 64 17 81 00            MOV EAX,[0x00811764]
005CE2BA  83 C4 1C                  ADD ESP,0x1c
005CE2BD  52                        PUSH EDX
005CE2BE  50                        PUSH EAX
005CE2BF  E8 3C 82 0E 00            CALL 0x006b6500
005CE2C4  8B 83 21 22 00 00         MOV EAX,dword ptr [EBX + 0x2221]
005CE2CA  40                        INC EAX
005CE2CB  89 83 21 22 00 00         MOV dword ptr [EBX + 0x2221],EAX
005CE2D1  8B 43 61                  MOV EAX,dword ptr [EBX + 0x61]
005CE2D4  89 83 0D 22 00 00         MOV dword ptr [EBX + 0x220d],EAX
LAB_005ce2da:
005CE2DA  39 75 D4                  CMP dword ptr [EBP + -0x2c],ESI
005CE2DD  0F 85 98 00 00 00         JNZ 0x005ce37b
005CE2E3  2B 83 09 22 00 00         SUB EAX,dword ptr [EBX + 0x2209]
005CE2E9  3D 60 EA 00 00            CMP EAX,0xea60
005CE2EE  0F 86 87 00 00 00         JBE 0x005ce37b
005CE2F4  8A 83 25 22 00 00         MOV AL,byte ptr [EBX + 0x2225]
005CE2FA  84 C0                     TEST AL,AL
005CE2FC  75 7D                     JNZ 0x005ce37b
005CE2FE  B9 08 00 00 00            MOV ECX,0x8
005CE303  33 C0                     XOR EAX,EAX
005CE305  8D BD 28 FF FF FF         LEA EDI,[EBP + 0xffffff28]
005CE30B  C6 83 25 22 00 00 01      MOV byte ptr [EBX + 0x2225],0x1
005CE312  F3 AB                     STOSD.REP ES:EDI
005CE314  8A 0D A0 67 80 00         MOV CL,byte ptr [0x008067a0]
005CE31A  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005CE320  F6 D9                     NEG CL
005CE322  1B C9                     SBB ECX,ECX
005CE324  83 E1 04                  AND ECX,0x4
005CE327  81 C1 4D 69 00 00         ADD ECX,0x694d
005CE32D  89 8D 38 FF FF FF         MOV dword ptr [EBP + 0xffffff38],ECX
005CE333  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005CE339  3B CE                     CMP ECX,ESI
005CE33B  74 31                     JZ 0x005ce36e
005CE33D  8B 53 08                  MOV EDX,dword ptr [EBX + 0x8]
005CE340  56                        PUSH ESI
005CE341  56                        PUSH ESI
005CE342  56                        PUSH ESI
005CE343  8D 8D 28 FF FF FF         LEA ECX,[EBP + 0xffffff28]
005CE349  56                        PUSH ESI
005CE34A  51                        PUSH ECX
005CE34B  89 95 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],EDX
005CE351  C7 85 34 FF FF FF 02 00 00 00  MOV dword ptr [EBP + 0xffffff34],0x2
005CE35B  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005CE361  56                        PUSH ESI
005CE362  68 22 25 00 00            PUSH 0x2522
005CE367  E8 3C 5C E3 FF            CALL 0x00403fa8
005CE36C  EB 0D                     JMP 0x005ce37b
LAB_005ce36e:
005CE36E  8B 13                     MOV EDX,dword ptr [EBX]
005CE370  8D 85 28 FF FF FF         LEA EAX,[EBP + 0xffffff28]
005CE376  50                        PUSH EAX
005CE377  8B CB                     MOV ECX,EBX
005CE379  FF 12                     CALL dword ptr [EDX]
LAB_005ce37b:
005CE37B  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
005CE37E  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
005CE381  3B C6                     CMP EAX,ESI
005CE383  0F 8E 15 10 00 00         JLE 0x005cf39e
LAB_005ce389:
005CE389  6A 00                     PUSH 0x0
005CE38B  8D 4D D8                  LEA ECX,[EBP + -0x28]
005CE38E  6A FF                     PUSH -0x1
005CE390  8D 55 F8                  LEA EDX,[EBP + -0x8]
005CE393  51                        PUSH ECX
005CE394  8D 45 EC                  LEA EAX,[EBP + -0x14]
005CE397  52                        PUSH EDX
005CE398  8B 15 64 17 81 00         MOV EDX,dword ptr [0x00811764]
005CE39E  8D 4D DC                  LEA ECX,[EBP + -0x24]
005CE3A1  50                        PUSH EAX
005CE3A2  51                        PUSH ECX
005CE3A3  6A FF                     PUSH -0x1
005CE3A5  52                        PUSH EDX
005CE3A6  E8 85 72 14 00            CALL 0x00715630
005CE3AB  8B F0                     MOV ESI,EAX
005CE3AD  83 C4 20                  ADD ESP,0x20
005CE3B0  83 FE 01                  CMP ESI,0x1
005CE3B3  75 15                     JNZ 0x005ce3ca
005CE3B5  83 7D DC 1B               CMP dword ptr [EBP + -0x24],0x1b
005CE3B9  75 0F                     JNZ 0x005ce3ca
005CE3BB  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005CE3BE  8B 8B 5B 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a5b]
005CE3C4  50                        PUSH EAX
005CE3C5  E8 F2 47 E3 FF            CALL 0x00402bbc
LAB_005ce3ca:
005CE3CA  A0 7E 87 80 00            MOV AL,[0x0080877e]
005CE3CF  84 C0                     TEST AL,AL
005CE3D1  0F 84 0A 06 00 00         JZ 0x005ce9e1
005CE3D7  83 FE B3                  CMP ESI,-0x4d
005CE3DA  0F 84 81 05 00 00         JZ 0x005ce961
005CE3E0  83 FE 01                  CMP ESI,0x1
005CE3E3  0F 85 A3 0F 00 00         JNZ 0x005cf38c
005CE3E9  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
005CE3EC  8D 41 EF                  LEA EAX,[ECX + -0x11]
005CE3EF  83 F8 1D                  CMP EAX,0x1d
005CE3F2  0F 87 50 05 00 00         JA 0x005ce948
005CE3F8  33 D2                     XOR EDX,EDX
005CE3FA  8A 90 70 F6 5C 00         MOV DL,byte ptr [EAX + 0x5cf670]
switchD_005ce400::switchD:
005CE400  FF 24 95 44 F6 5C 00      JMP dword ptr [EDX*0x4 + 0x5cf644]
switchD_005ce400::caseD_1a:
005CE407  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
005CE40A  80 7E 02 04               CMP byte ptr [ESI + 0x2],0x4
005CE40E  0F 85 34 05 00 00         JNZ 0x005ce948
005CE414  A1 D5 7D 80 00            MOV EAX,[0x00807dd5]
005CE419  8A 8B 2E 22 00 00         MOV CL,byte ptr [EBX + 0x222e]
005CE41F  C1 E8 10                  SHR EAX,0x10
005CE422  8A 15 3B 73 80 00         MOV DL,byte ptr [0x0080733b]
005CE428  66 89 85 74 FF FF FF      MOV word ptr [EBP + 0xffffff74],AX
005CE42F  A0 61 73 80 00            MOV AL,[0x00807361]
005CE434  88 55 80                  MOV byte ptr [EBP + -0x80],DL
005CE437  84 C9                     TEST CL,CL
005CE439  0F 95 C1                  SETNZ CL
005CE43C  41                        INC ECX
005CE43D  88 45 81                  MOV byte ptr [EBP + -0x7f],AL
005CE440  A1 BE 87 80 00            MOV EAX,[0x008087be]
005CE445  88 8D 76 FF FF FF         MOV byte ptr [EBP + 0xffffff76],CL
005CE44B  8B 0D 54 87 80 00         MOV ECX,dword ptr [0x00808754]
005CE451  8B 3D 50 87 80 00         MOV EDI,dword ptr [0x00808750]
005CE457  89 4D 82                  MOV dword ptr [EBP + -0x7e],ECX
005CE45A  8B 56 12                  MOV EDX,dword ptr [ESI + 0x12]
005CE45D  89 85 77 FF FF FF         MOV dword ptr [EBP + 0xffffff77],EAX
005CE463  8A 83 26 1E 00 00         MOV AL,byte ptr [EBX + 0x1e26]
005CE469  33 C9                     XOR ECX,ECX
005CE46B  3C 0C                     CMP AL,0xc
005CE46D  0F 95 C1                  SETNZ CL
005CE470  49                        DEC ECX
005CE471  25 FF 00 00 00            AND EAX,0xff
005CE476  23 CF                     AND ECX,EDI
005CE478  89 55 86                  MOV dword ptr [EBP + -0x7a],EDX
005CE47B  8B 15 AB 8A 80 00         MOV EDX,dword ptr [0x00808aab]
005CE481  89 8D 7B FF FF FF         MOV dword ptr [EBP + 0xffffff7b],ECX
005CE487  8B 8B 21 21 00 00         MOV ECX,dword ptr [EBX + 0x2121]
005CE48D  83 C0 FC                  ADD EAX,-0x4
005CE490  83 F8 0F                  CMP EAX,0xf
005CE493  89 55 8A                  MOV dword ptr [EBP + -0x76],EDX
005CE496  89 4D 8E                  MOV dword ptr [EBP + -0x72],ECX
005CE499  77 47                     JA 0x005ce4e2
005CE49B  33 D2                     XOR EDX,EDX
005CE49D  8A 90 A8 F6 5C 00         MOV DL,byte ptr [EAX + 0x5cf6a8]
switchD_005ce4a3::switchD:
005CE4A3  FF 24 95 90 F6 5C 00      JMP dword ptr [EDX*0x4 + 0x5cf690]
switchD_005ce4a3::caseD_4:
005CE4AA  C6 85 7F FF FF FF 02      MOV byte ptr [EBP + 0xffffff7f],0x2
005CE4B1  EB 2F                     JMP 0x005ce4e2
switchD_005ce4a3::caseD_5:
005CE4B3  C6 85 7F FF FF FF 03      MOV byte ptr [EBP + 0xffffff7f],0x3
005CE4BA  EB 26                     JMP 0x005ce4e2
switchD_005ce4a3::caseD_7:
005CE4BC  C6 85 7F FF FF FF 01      MOV byte ptr [EBP + 0xffffff7f],0x1
005CE4C3  EB 1D                     JMP 0x005ce4e2
switchD_005ce4a3::caseD_c:
005CE4C5  C6 85 7F FF FF FF 05      MOV byte ptr [EBP + 0xffffff7f],0x5
005CE4CC  EB 14                     JMP 0x005ce4e2
switchD_005ce4a3::caseD_13:
005CE4CE  A0 00 34 80 00            MOV AL,[0x00803400]
005CE4D3  3C 14                     CMP AL,0x14
005CE4D5  72 0B                     JC 0x005ce4e2
005CE4D7  3C 15                     CMP AL,0x15
005CE4D9  77 07                     JA 0x005ce4e2
005CE4DB  C6 85 7F FF FF FF 04      MOV byte ptr [EBP + 0xffffff7f],0x4
switchD_005ce4a3::caseD_6:
005CE4E2  8B 46 22                  MOV EAX,dword ptr [ESI + 0x22]
005CE4E5  8B 15 64 17 81 00         MOV EDX,dword ptr [0x00811764]
005CE4EB  8D 7E 22                  LEA EDI,[ESI + 0x22]
005CE4EE  89 45 96                  MOV dword ptr [EBP + -0x6a],EAX
005CE4F1  8B 4E 1E                  MOV ECX,dword ptr [ESI + 0x1e]
005CE4F4  6A 00                     PUSH 0x0
005CE4F6  52                        PUSH EDX
005CE4F7  89 4D 92                  MOV dword ptr [EBP + -0x6e],ECX
005CE4FA  E8 01 80 0E 00            CALL 0x006b6500
005CE4FF  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
005CE502  8B 15 64 17 81 00         MOV EDX,dword ptr [0x00811764]
005CE508  6A FF                     PUSH -0x1
005CE50A  6A 01                     PUSH 0x1
005CE50C  8D 85 74 FF FF FF         LEA EAX,[EBP + 0xffffff74]
005CE512  6A 26                     PUSH 0x26
005CE514  50                        PUSH EAX
005CE515  6A 1A                     PUSH 0x1a
005CE517  51                        PUSH ECX
005CE518  52                        PUSH EDX
005CE519  E8 42 6E 14 00            CALL 0x00715360
005CE51E  A1 3C 73 80 00            MOV EAX,[0x0080733c]
005CE523  8B 0D 64 17 81 00         MOV ECX,dword ptr [0x00811764]
005CE529  83 C4 1C                  ADD ESP,0x1c
005CE52C  50                        PUSH EAX
005CE52D  51                        PUSH ECX
005CE52E  E8 CD 7F 0E 00            CALL 0x006b6500
005CE533  8B 17                     MOV EDX,dword ptr [EDI]
005CE535  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
005CE538  52                        PUSH EDX
005CE539  50                        PUSH EAX
005CE53A  8B CB                     MOV ECX,EBX
005CE53C  E8 43 65 E3 FF            CALL 0x00404a84
005CE541  E9 02 04 00 00            JMP 0x005ce948
switchD_005ce400::caseD_11:
005CE546  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
005CE549  51                        PUSH ECX
005CE54A  8B CB                     MOV ECX,EBX
005CE54C  E8 0C 64 E3 FF            CALL 0x0040495d
005CE551  8B CB                     MOV ECX,EBX
005CE553  E8 6E 50 E3 FF            CALL 0x004035c6
005CE558  8B 13                     MOV EDX,dword ptr [EBX]
005CE55A  8B CB                     MOV ECX,EBX
005CE55C  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
005CE55F  8B CB                     MOV ECX,EBX
005CE561  E8 34 45 E3 FF            CALL 0x00402a9a
005CE566  8B 83 21 21 00 00         MOV EAX,dword ptr [EBX + 0x2121]
005CE56C  C7 45 E0 00 00 00 00      MOV dword ptr [EBP + -0x20],0x0
005CE573  40                        INC EAX
005CE574  89 83 21 21 00 00         MOV dword ptr [EBX + 0x2121],EAX
005CE57A  E9 C9 03 00 00            JMP 0x005ce948
switchD_005ce400::caseD_1d:
005CE57F  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
005CE582  8B CB                     MOV ECX,EBX
005CE584  50                        PUSH EAX
005CE585  E8 FF 64 E3 FF            CALL 0x00404a89
005CE58A  E9 B9 03 00 00            JMP 0x005ce948
switchD_005ce400::caseD_1f:
005CE58F  6A FF                     PUSH -0x1
005CE591  6A 01                     PUSH 0x1
005CE593  68 32 02 00 00            PUSH 0x232
005CE598  68 E0 3D 85 00            PUSH 0x853de0
005CE59D  6A 1E                     PUSH 0x1e
LAB_005ce59f:
005CE59F  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
005CE5A2  8B 15 64 17 81 00         MOV EDX,dword ptr [0x00811764]
005CE5A8  51                        PUSH ECX
005CE5A9  52                        PUSH EDX
005CE5AA  E8 B1 6D 14 00            CALL 0x00715360
005CE5AF  83 C4 1C                  ADD ESP,0x1c
005CE5B2  E9 91 03 00 00            JMP 0x005ce948
switchD_005ce400::caseD_21:
005CE5B7  6A FF                     PUSH -0x1
005CE5B9  6A 01                     PUSH 0x1
005CE5BB  8D 83 53 1F 00 00         LEA EAX,[EBX + 0x1f53]
005CE5C1  6A 0D                     PUSH 0xd
005CE5C3  50                        PUSH EAX
005CE5C4  6A 20                     PUSH 0x20
005CE5C6  EB D7                     JMP 0x005ce59f
switchD_005ce400::caseD_23:
005CE5C8  8B 75 E0                  MOV ESI,dword ptr [EBP + -0x20]
005CE5CB  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
005CE5CE  33 C0                     XOR EAX,EAX
005CE5D0  83 FE FF                  CMP ESI,-0x1
005CE5D3  0F 95 C0                  SETNZ AL
005CE5D6  48                        DEC EAX
005CE5D7  23 C1                     AND EAX,ECX
005CE5D9  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
005CE5DC  E9 67 03 00 00            JMP 0x005ce948
switchD_005ce400::caseD_24:
005CE5E1  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
005CE5E4  85 FF                     TEST EDI,EDI
005CE5E6  0F 84 5C 03 00 00         JZ 0x005ce948
005CE5EC  8B 83 84 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f84]
005CE5F2  85 C0                     TEST EAX,EAX
005CE5F4  74 16                     JZ 0x005ce60c
005CE5F6  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
005CE5F9  8B CF                     MOV ECX,EDI
005CE5FB  8B 09                     MOV ECX,dword ptr [ECX]
005CE5FD  3B CA                     CMP ECX,EDX
005CE5FF  73 0B                     JNC 0x005ce60c
005CE601  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
005CE604  0F AF F1                  IMUL ESI,ECX
005CE607  03 70 1C                  ADD ESI,dword ptr [EAX + 0x1c]
005CE60A  EB 02                     JMP 0x005ce60e
LAB_005ce60c:
005CE60C  33 F6                     XOR ESI,ESI
LAB_005ce60e:
005CE60E  85 F6                     TEST ESI,ESI
005CE610  0F 84 32 03 00 00         JZ 0x005ce948
005CE616  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005CE619  8D 42 04                  LEA EAX,[EDX + 0x4]
005CE61C  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005CE61F  8B 00                     MOV EAX,dword ptr [EAX]
005CE621  85 C0                     TEST EAX,EAX
005CE623  7C 11                     JL 0x005ce636
005CE625  83 F8 03                  CMP EAX,0x3
005CE628  7E 05                     JLE 0x005ce62f
005CE62A  83 F8 07                  CMP EAX,0x7
005CE62D  75 07                     JNZ 0x005ce636
LAB_005ce62f:
005CE62F  C7 45 E0 00 00 00 00      MOV dword ptr [EBP + -0x20],0x0
LAB_005ce636:
005CE636  8D 43 1D                  LEA EAX,[EBX + 0x1d]
005CE639  8B CB                     MOV ECX,EBX
005CE63B  50                        PUSH EAX
005CE63C  68 EF 00 01 00            PUSH 0x100ef
005CE641  6A 03                     PUSH 0x3
005CE643  C7 43 2D 03 00 01 00      MOV dword ptr [EBX + 0x2d],0x10003
005CE64A  E8 31 7A 11 00            CALL 0x006e6080
005CE64F  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005CE652  8B 00                     MOV EAX,dword ptr [EAX]
005CE654  83 F8 07                  CMP EAX,0x7
005CE657  0F 87 EB 02 00 00         JA 0x005ce948
switchD_005ce65d::switchD:
005CE65D  FF 24 85 B8 F6 5C 00      JMP dword ptr [EAX*0x4 + 0x5cf6b8]
switchD_005ce65d::caseD_0:
005CE664  8B 0F                     MOV ECX,dword ptr [EDI]
005CE666  51                        PUSH ECX
005CE667  8B CB                     MOV ECX,EBX
005CE669  E8 99 6D E3 FF            CALL 0x00405407
005CE66E  E9 D5 02 00 00            JMP 0x005ce948
switchD_005ce65d::caseD_1:
005CE673  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
005CE676  8B 07                     MOV EAX,dword ptr [EDI]
005CE678  52                        PUSH EDX
005CE679  50                        PUSH EAX
005CE67A  8B CB                     MOV ECX,EBX
005CE67C  E8 C5 74 E3 FF            CALL 0x00405b46
005CE681  E9 C2 02 00 00            JMP 0x005ce948
switchD_005ce65d::caseD_2:
005CE686  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
005CE689  8B 17                     MOV EDX,dword ptr [EDI]
005CE68B  51                        PUSH ECX
005CE68C  52                        PUSH EDX
005CE68D  8B CB                     MOV ECX,EBX
005CE68F  E8 12 5B E3 FF            CALL 0x004041a6
005CE694  E9 AF 02 00 00            JMP 0x005ce948
switchD_005ce65d::caseD_3:
005CE699  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
005CE69C  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
005CE69F  8D 47 10                  LEA EAX,[EDI + 0x10]
005CE6A2  50                        PUSH EAX
005CE6A3  8B 07                     MOV EAX,dword ptr [EDI]
005CE6A5  51                        PUSH ECX
005CE6A6  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
005CE6A9  52                        PUSH EDX
005CE6AA  50                        PUSH EAX
005CE6AB  51                        PUSH ECX
005CE6AC  8B CB                     MOV ECX,EBX
005CE6AE  E8 28 35 E3 FF            CALL 0x00401bdb
005CE6B3  E9 90 02 00 00            JMP 0x005ce948
switchD_005ce65d::caseD_5:
005CE6B8  8B 57 0C                  MOV EDX,dword ptr [EDI + 0xc]
005CE6BB  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
005CE6BE  8B 0F                     MOV ECX,dword ptr [EDI]
005CE6C0  52                        PUSH EDX
005CE6C1  50                        PUSH EAX
005CE6C2  51                        PUSH ECX
005CE6C3  8B CB                     MOV ECX,EBX
005CE6C5  E8 9E 39 E3 FF            CALL 0x00402068
005CE6CA  6A 00                     PUSH 0x0
005CE6CC  8B CB                     MOV ECX,EBX
005CE6CE  E8 B6 63 E3 FF            CALL 0x00404a89
005CE6D3  E9 70 02 00 00            JMP 0x005ce948
switchD_005ce65d::caseD_7:
005CE6D8  8A 57 08                  MOV DL,byte ptr [EDI + 0x8]
005CE6DB  8D BB 8C 1F 00 00         LEA EDI,[EBX + 0x1f8c]
005CE6E1  88 56 4F                  MOV byte ptr [ESI + 0x4f],DL
005CE6E4  8B 83 21 21 00 00         MOV EAX,dword ptr [EBX + 0x2121]
005CE6EA  40                        INC EAX
005CE6EB  C7 45 F4 0A 00 00 00      MOV dword ptr [EBP + -0xc],0xa
005CE6F2  89 83 21 21 00 00         MOV dword ptr [EBX + 0x2121],EAX
LAB_005ce6f8:
005CE6F8  BE 08 00 00 00            MOV ESI,0x8
LAB_005ce6fd:
005CE6FD  83 3F 00                  CMP dword ptr [EDI],0x0
005CE700  74 17                     JZ 0x005ce719
005CE702  8D 43 1D                  LEA EAX,[EBX + 0x1d]
005CE705  C7 43 2D 05 00 00 00      MOV dword ptr [EBX + 0x2d],0x5
005CE70C  50                        PUSH EAX
005CE70D  8B 07                     MOV EAX,dword ptr [EDI]
005CE70F  50                        PUSH EAX
005CE710  6A 02                     PUSH 0x2
005CE712  8B CB                     MOV ECX,EBX
005CE714  E8 67 79 11 00            CALL 0x006e6080
LAB_005ce719:
005CE719  83 C7 04                  ADD EDI,0x4
005CE71C  4E                        DEC ESI
005CE71D  75 DE                     JNZ 0x005ce6fd
005CE71F  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005CE722  48                        DEC EAX
005CE723  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005CE726  75 D0                     JNZ 0x005ce6f8
005CE728  E9 1B 02 00 00            JMP 0x005ce948
switchD_005ce400::caseD_28:
005CE72D  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
005CE730  85 FF                     TEST EDI,EDI
005CE732  0F 84 10 02 00 00         JZ 0x005ce948
005CE738  8B 8B 84 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f84]
005CE73E  85 C9                     TEST ECX,ECX
005CE740  74 16                     JZ 0x005ce758
005CE742  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
005CE745  8B D7                     MOV EDX,EDI
005CE747  8B 12                     MOV EDX,dword ptr [EDX]
005CE749  3B D0                     CMP EDX,EAX
005CE74B  73 0B                     JNC 0x005ce758
005CE74D  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005CE750  0F AF C2                  IMUL EAX,EDX
005CE753  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
005CE756  EB 02                     JMP 0x005ce75a
LAB_005ce758:
005CE758  33 C0                     XOR EAX,EAX
LAB_005ce75a:
005CE75A  85 C0                     TEST EAX,EAX
005CE75C  0F 84 E6 01 00 00         JZ 0x005ce948
005CE762  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005CE765  83 78 04 03               CMP dword ptr [EAX + 0x4],0x3
005CE769  0F 85 D9 01 00 00         JNZ 0x005ce948
005CE76F  8D 4B 1D                  LEA ECX,[EBX + 0x1d]
005CE772  C7 45 E0 00 00 00 00      MOV dword ptr [EBP + -0x20],0x0
005CE779  51                        PUSH ECX
005CE77A  68 EF 00 01 00            PUSH 0x100ef
005CE77F  6A 03                     PUSH 0x3
005CE781  8B CB                     MOV ECX,EBX
005CE783  C7 43 2D 03 00 01 00      MOV dword ptr [EBX + 0x2d],0x10003
005CE78A  E8 F1 78 11 00            CALL 0x006e6080
005CE78F  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
005CE792  8B 0F                     MOV ECX,dword ptr [EDI]
005CE794  8D 57 10                  LEA EDX,[EDI + 0x10]
005CE797  52                        PUSH EDX
005CE798  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
005CE79B  50                        PUSH EAX
005CE79C  51                        PUSH ECX
005CE79D  52                        PUSH EDX
005CE79E  8B CB                     MOV ECX,EBX
005CE7A0  E8 02 2C E3 FF            CALL 0x004013a7
005CE7A5  E9 9E 01 00 00            JMP 0x005ce948
switchD_005ce400::caseD_2e:
005CE7AA  8A 83 2E 22 00 00         MOV AL,byte ptr [EBX + 0x222e]
005CE7B0  84 C0                     TEST AL,AL
005CE7B2  0F 84 90 01 00 00         JZ 0x005ce948
005CE7B8  8B 93 2F 22 00 00         MOV EDX,dword ptr [EBX + 0x222f]
005CE7BE  85 D2                     TEST EDX,EDX
005CE7C0  0F 84 82 01 00 00         JZ 0x005ce948
005CE7C6  8B 72 0C                  MOV ESI,dword ptr [EDX + 0xc]
005CE7C9  33 C9                     XOR ECX,ECX
005CE7CB  85 F6                     TEST ESI,ESI
005CE7CD  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
005CE7D0  7E 30                     JLE 0x005ce802
005CE7D2  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
005CE7D5  3B CE                     CMP ECX,ESI
LAB_005ce7d7:
005CE7D7  73 0B                     JNC 0x005ce7e4
005CE7D9  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
005CE7DC  0F AF C1                  IMUL EAX,ECX
005CE7DF  03 42 1C                  ADD EAX,dword ptr [EDX + 0x1c]
005CE7E2  EB 02                     JMP 0x005ce7e6
LAB_005ce7e4:
005CE7E4  33 C0                     XOR EAX,EAX
LAB_005ce7e6:
005CE7E6  85 C0                     TEST EAX,EAX
005CE7E8  74 04                     JZ 0x005ce7ee
005CE7EA  39 38                     CMP dword ptr [EAX],EDI
005CE7EC  74 0A                     JZ 0x005ce7f8
LAB_005ce7ee:
005CE7EE  41                        INC ECX
005CE7EF  3B CE                     CMP ECX,ESI
005CE7F1  7C E4                     JL 0x005ce7d7
005CE7F3  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
005CE7F6  EB 0A                     JMP 0x005ce802
LAB_005ce7f8:
005CE7F8  51                        PUSH ECX
005CE7F9  52                        PUSH EDX
005CE7FA  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
005CE7FD  E8 6E 24 0E 00            CALL 0x006b0c70
LAB_005ce802:
005CE802  8B 83 2F 22 00 00         MOV EAX,dword ptr [EBX + 0x222f]
005CE808  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005CE80B  85 C9                     TEST ECX,ECX
005CE80D  0F 85 35 01 00 00         JNZ 0x005ce948
005CE813  8B CB                     MOV ECX,EBX
005CE815  C6 83 2E 22 00 00 00      MOV byte ptr [EBX + 0x222e],0x0
005CE81C  E8 FD 5E E3 FF            CALL 0x0040471e
005CE821  A0 A0 67 80 00            MOV AL,[0x008067a0]
005CE826  84 C0                     TEST AL,AL
005CE828  0F 84 1A 01 00 00         JZ 0x005ce948
005CE82E  8D 8B 5F 1A 00 00         LEA ECX,[EBX + 0x1a5f]
005CE834  51                        PUSH ECX
005CE835  6A 06                     PUSH 0x6
005CE837  B9 90 2A 80 00            MOV ECX,0x802a90
005CE83C  FF 15 70 C0 85 00         CALL dword ptr [0x0085c070]
005CE842  B9 90 2A 80 00            MOV ECX,0x802a90
005CE847  FF 15 78 C0 85 00         CALL dword ptr [0x0085c078]
005CE84D  E9 F6 00 00 00            JMP 0x005ce948
switchD_005ce400::caseD_25:
005CE852  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005CE855  85 C0                     TEST EAX,EAX
005CE857  0F 84 2F 0B 00 00         JZ 0x005cf38c
005CE85D  83 7D D8 04               CMP dword ptr [EBP + -0x28],0x4
005CE861  0F 82 E1 00 00 00         JC 0x005ce948
005CE867  A0 61 73 80 00            MOV AL,[0x00807361]
005CE86C  84 C0                     TEST AL,AL
005CE86E  0F 84 D4 00 00 00         JZ 0x005ce948
005CE874  8A 83 43 22 00 00         MOV AL,byte ptr [EBX + 0x2243]
005CE87A  84 C0                     TEST AL,AL
005CE87C  0F 84 C6 00 00 00         JZ 0x005ce948
005CE882  8B 8B 5B 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a5b]
005CE888  8B 81 9A 06 00 00         MOV EAX,dword ptr [ECX + 0x69a]
005CE88E  85 C0                     TEST EAX,EAX
005CE890  75 21                     JNZ 0x005ce8b3
005CE892  E8 4D 39 E3 FF            CALL 0x004021e4
005CE897  8B 93 5B 1A 00 00         MOV EDX,dword ptr [EBX + 0x1a5b]
005CE89D  8B 82 9A 06 00 00         MOV EAX,dword ptr [EDX + 0x69a]
005CE8A3  85 C0                     TEST EAX,EAX
005CE8A5  75 0C                     JNZ 0x005ce8b3
005CE8A7  C6 83 43 22 00 00 00      MOV byte ptr [EBX + 0x2243],0x0
005CE8AE  E9 95 00 00 00            JMP 0x005ce948
LAB_005ce8b3:
005CE8B3  8B 93 37 22 00 00         MOV EDX,dword ptr [EBX + 0x2237]
005CE8B9  33 C0                     XOR EAX,EAX
005CE8BB  33 C9                     XOR ECX,ECX
005CE8BD  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005CE8C0  8B 72 0C                  MOV ESI,dword ptr [EDX + 0xc]
005CE8C3  85 F6                     TEST ESI,ESI
005CE8C5  76 37                     JBE 0x005ce8fe
005CE8C7  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
005CE8CA  3B CE                     CMP ECX,ESI
005CE8CC  73 0B                     JNC 0x005ce8d9
LAB_005ce8ce:
005CE8CE  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
005CE8D1  0F AF C1                  IMUL EAX,ECX
005CE8D4  03 42 1C                  ADD EAX,dword ptr [EDX + 0x1c]
005CE8D7  EB 02                     JMP 0x005ce8db
LAB_005ce8d9:
005CE8D9  33 C0                     XOR EAX,EAX
LAB_005ce8db:
005CE8DB  85 C0                     TEST EAX,EAX
005CE8DD  74 04                     JZ 0x005ce8e3
005CE8DF  39 38                     CMP dword ptr [EAX],EDI
005CE8E1  74 0A                     JZ 0x005ce8ed
LAB_005ce8e3:
005CE8E3  41                        INC ECX
005CE8E4  3B CE                     CMP ECX,ESI
005CE8E6  72 E6                     JC 0x005ce8ce
005CE8E8  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005CE8EB  EB 11                     JMP 0x005ce8fe
LAB_005ce8ed:
005CE8ED  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005CE8F0  51                        PUSH ECX
005CE8F1  50                        PUSH EAX
005CE8F2  8B CB                     MOV ECX,EBX
005CE8F4  E8 42 50 E3 FF            CALL 0x0040393b
005CE8F9  B8 01 00 00 00            MOV EAX,0x1
LAB_005ce8fe:
005CE8FE  85 C0                     TEST EAX,EAX
005CE900  75 46                     JNZ 0x005ce948
005CE902  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
005CE905  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005CE90B  89 95 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EDX
005CE911  8B 88 A6 06 00 00         MOV ECX,dword ptr [EAX + 0x6a6]
005CE917  51                        PUSH ECX
005CE918  E8 53 C3 0D 00            CALL 0x006aac70
005CE91D  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005CE920  89 85 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EAX
005CE926  8D 85 68 FF FF FF         LEA EAX,[EBP + 0xffffff68]
005CE92C  52                        PUSH EDX
005CE92D  50                        PUSH EAX
005CE92E  8B CB                     MOV ECX,EBX
005CE930  E8 06 50 E3 FF            CALL 0x0040393b
005CE935  8B 93 37 22 00 00         MOV EDX,dword ptr [EBX + 0x2237]
005CE93B  8D 8D 68 FF FF FF         LEA ECX,[EBP + 0xffffff68]
005CE941  51                        PUSH ECX
005CE942  52                        PUSH EDX
005CE943  E8 78 F8 0D 00            CALL 0x006ae1c0
switchD_005ce400::caseD_12:
005CE948  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005CE94B  85 C0                     TEST EAX,EAX
005CE94D  0F 84 39 0A 00 00         JZ 0x005cf38c
005CE953  8D 45 F8                  LEA EAX,[EBP + -0x8]
005CE956  50                        PUSH EAX
005CE957  E8 04 C7 0D 00            CALL 0x006ab060
005CE95C  E9 2B 0A 00 00            JMP 0x005cf38c
LAB_005ce961:
005CE961  B9 08 00 00 00            MOV ECX,0x8
005CE966  33 C0                     XOR EAX,EAX
005CE968  8D BD 48 FF FF FF         LEA EDI,[EBP + 0xffffff48]
005CE96E  C6 83 25 22 00 00 01      MOV byte ptr [EBX + 0x2225],0x1
005CE975  F3 AB                     STOSD.REP ES:EDI
005CE977  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005CE97D  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005CE983  85 C9                     TEST ECX,ECX
005CE985  74 43                     JZ 0x005ce9ca
005CE987  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
005CE98A  6A 00                     PUSH 0x0
005CE98C  6A 00                     PUSH 0x0
005CE98E  6A 00                     PUSH 0x0
005CE990  89 8D 50 FF FF FF         MOV dword ptr [EBP + 0xffffff50],ECX
005CE996  C7 85 54 FF FF FF 02 00 00 00  MOV dword ptr [EBP + 0xffffff54],0x2
005CE9A0  C7 85 58 FF FF FF 47 69 00 00  MOV dword ptr [EBP + 0xffffff58],0x6947
005CE9AA  6A 00                     PUSH 0x0
005CE9AC  8D 95 48 FF FF FF         LEA EDX,[EBP + 0xffffff48]
LAB_005ce9b2:
005CE9B2  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005CE9B8  52                        PUSH EDX
005CE9B9  6A 00                     PUSH 0x0
005CE9BB  68 22 25 00 00            PUSH 0x2522
005CE9C0  E8 E3 55 E3 FF            CALL 0x00403fa8
005CE9C5  E9 C2 09 00 00            JMP 0x005cf38c
LAB_005ce9ca:
005CE9CA  8B 03                     MOV EAX,dword ptr [EBX]
005CE9CC  C7 85 58 FF FF FF 47 69 00 00  MOV dword ptr [EBP + 0xffffff58],0x6947
005CE9D6  8D 8D 48 FF FF FF         LEA ECX,[EBP + 0xffffff48]
005CE9DC  E9 A6 09 00 00            JMP 0x005cf387
LAB_005ce9e1:
005CE9E1  B9 08 00 00 00            MOV ECX,0x8
005CE9E6  33 C0                     XOR EAX,EAX
005CE9E8  8D 7D AC                  LEA EDI,[EBP + -0x54]
005CE9EB  83 FE B3                  CMP ESI,-0x4d
005CE9EE  F3 AB                     STOSD.REP ES:EDI
005CE9F0  0F 84 44 09 00 00         JZ 0x005cf33a
005CE9F6  83 FE 01                  CMP ESI,0x1
005CE9F9  0F 85 8D 09 00 00         JNZ 0x005cf38c
005CE9FF  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
005CEA02  8B 43 61                  MOV EAX,dword ptr [EBX + 0x61]
005CEA05  89 83 09 22 00 00         MOV dword ptr [EBX + 0x2209],EAX
005CEA0B  8D 72 F0                  LEA ESI,[EDX + -0x10]
005CEA0E  83 FE 25                  CMP ESI,0x25
005CEA11  0F 87 0D 04 00 00         JA 0x005cee24
005CEA17  33 C9                     XOR ECX,ECX
005CEA19  8A 8E FC F6 5C 00         MOV CL,byte ptr [ESI + 0x5cf6fc]
switchD_005cea1f::switchD:
005CEA1F  FF 24 8D D8 F6 5C 00      JMP dword ptr [ECX*0x4 + 0x5cf6d8]
switchD_005cea1f::caseD_1a:
005CEA26  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005CEA29  8B F2                     MOV ESI,EDX
005CEA2B  8A 4A 02                  MOV CL,byte ptr [EDX + 0x2]
005CEA2E  8D 7A 02                  LEA EDI,[EDX + 0x2]
005CEA31  80 F9 03                  CMP CL,0x3
005CEA34  75 1C                     JNZ 0x005cea52
005CEA36  80 7B 65 01               CMP byte ptr [EBX + 0x65],0x1
005CEA3A  75 16                     JNZ 0x005cea52
005CEA3C  8B 13                     MOV EDX,dword ptr [EBX]
005CEA3E  8D 45 AC                  LEA EAX,[EBP + -0x54]
005CEA41  50                        PUSH EAX
005CEA42  8B CB                     MOV ECX,EBX
005CEA44  C7 45 BC 4F 69 00 00      MOV dword ptr [EBP + -0x44],0x694f
005CEA4B  FF 12                     CALL dword ptr [EDX]
005CEA4D  E9 D2 03 00 00            JMP 0x005cee24
LAB_005cea52:
005CEA52  80 F9 01                  CMP CL,0x1
005CEA55  0F 85 77 02 00 00         JNZ 0x005cecd2
005CEA5B  8A 4A 0B                  MOV CL,byte ptr [EDX + 0xb]
005CEA5E  80 F9 01                  CMP CL,0x1
005CEA61  0F 84 1B 01 00 00         JZ 0x005ceb82
005CEA67  0F 86 65 02 00 00         JBE 0x005cecd2
005CEA6D  80 F9 05                  CMP CL,0x5
005CEA70  0F 87 5C 02 00 00         JA 0x005cecd2
005CEA76  8B 4A 16                  MOV ECX,dword ptr [EDX + 0x16]
005CEA79  8B 15 AB 8A 80 00         MOV EDX,dword ptr [0x00808aab]
005CEA7F  3B CA                     CMP ECX,EDX
005CEA81  74 55                     JZ 0x005cead8
005CEA83  8B 8B 19 22 00 00         MOV ECX,dword ptr [EBX + 0x2219]
005CEA89  8B D0                     MOV EDX,EAX
005CEA8B  2B D1                     SUB EDX,ECX
005CEA8D  81 FA B8 0B 00 00         CMP EDX,0xbb8
005CEA93  72 43                     JC 0x005cead8
005CEA95  A1 64 17 81 00            MOV EAX,[0x00811764]
005CEA9A  6A 01                     PUSH 0x1
005CEA9C  50                        PUSH EAX
005CEA9D  E8 5E 7A 0E 00            CALL 0x006b6500
005CEAA2  8B 0D 64 17 81 00         MOV ECX,dword ptr [0x00811764]
005CEAA8  6A FF                     PUSH -0x1
005CEAAA  6A 00                     PUSH 0x0
005CEAAC  6A 00                     PUSH 0x0
005CEAAE  6A 00                     PUSH 0x0
005CEAB0  6A 1D                     PUSH 0x1d
005CEAB2  6A 01                     PUSH 0x1
005CEAB4  51                        PUSH ECX
005CEAB5  E8 A6 68 14 00            CALL 0x00715360
005CEABA  8B 15 3C 73 80 00         MOV EDX,dword ptr [0x0080733c]
005CEAC0  A1 64 17 81 00            MOV EAX,[0x00811764]
005CEAC5  83 C4 1C                  ADD ESP,0x1c
005CEAC8  52                        PUSH EDX
005CEAC9  50                        PUSH EAX
005CEACA  E8 31 7A 0E 00            CALL 0x006b6500
005CEACF  8B 43 61                  MOV EAX,dword ptr [EBX + 0x61]
005CEAD2  89 83 19 22 00 00         MOV dword ptr [EBX + 0x2219],EAX
LAB_005cead8:
005CEAD8  8B 8B 84 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f84]
005CEADE  85 C9                     TEST ECX,ECX
005CEAE0  0F 84 EC 01 00 00         JZ 0x005cecd2
005CEAE6  8B 4E 1A                  MOV ECX,dword ptr [ESI + 0x1a]
005CEAE9  8B 93 21 21 00 00         MOV EDX,dword ptr [EBX + 0x2121]
005CEAEF  3B CA                     CMP ECX,EDX
005CEAF1  74 55                     JZ 0x005ceb48
005CEAF3  8B 8B 1D 22 00 00         MOV ECX,dword ptr [EBX + 0x221d]
005CEAF9  8B D0                     MOV EDX,EAX
005CEAFB  2B D1                     SUB EDX,ECX
005CEAFD  81 FA D0 07 00 00         CMP EDX,0x7d0
005CEB03  72 43                     JC 0x005ceb48
005CEB05  A1 64 17 81 00            MOV EAX,[0x00811764]
005CEB0A  6A 01                     PUSH 0x1
005CEB0C  50                        PUSH EAX
005CEB0D  E8 EE 79 0E 00            CALL 0x006b6500
005CEB12  8B 0D 64 17 81 00         MOV ECX,dword ptr [0x00811764]
005CEB18  6A FF                     PUSH -0x1
005CEB1A  6A 00                     PUSH 0x0
005CEB1C  6A 00                     PUSH 0x0
005CEB1E  6A 00                     PUSH 0x0
005CEB20  6A 23                     PUSH 0x23
005CEB22  6A 01                     PUSH 0x1
005CEB24  51                        PUSH ECX
005CEB25  E8 36 68 14 00            CALL 0x00715360
005CEB2A  8B 15 3C 73 80 00         MOV EDX,dword ptr [0x0080733c]
005CEB30  A1 64 17 81 00            MOV EAX,[0x00811764]
005CEB35  83 C4 1C                  ADD ESP,0x1c
005CEB38  52                        PUSH EDX
005CEB39  50                        PUSH EAX
005CEB3A  E8 C1 79 0E 00            CALL 0x006b6500
005CEB3F  8B 43 61                  MOV EAX,dword ptr [EBX + 0x61]
005CEB42  89 83 1D 22 00 00         MOV dword ptr [EBX + 0x221d],EAX
LAB_005ceb48:
005CEB48  8B 8B 84 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f84]
005CEB4E  85 C9                     TEST ECX,ECX
005CEB50  0F 84 7C 01 00 00         JZ 0x005cecd2
005CEB56  2B 83 1D 22 00 00         SUB EAX,dword ptr [EBX + 0x221d]
005CEB5C  3D D0 07 00 00            CMP EAX,0x7d0
005CEB61  0F 82 6B 01 00 00         JC 0x005cecd2
005CEB67  8A 93 26 1E 00 00         MOV DL,byte ptr [EBX + 0x1e26]
005CEB6D  33 C9                     XOR ECX,ECX
005CEB6F  80 FA 10                  CMP DL,0x10
005CEB72  0F 94 C1                  SETZ CL
005CEB75  51                        PUSH ECX
005CEB76  8B CB                     MOV ECX,EBX
005CEB78  E8 24 5B E3 FF            CALL 0x004046a1
005CEB7D  E9 50 01 00 00            JMP 0x005cecd2
LAB_005ceb82:
005CEB82  80 7B 65 01               CMP byte ptr [EBX + 0x65],0x1
005CEB86  0F 85 46 01 00 00         JNZ 0x005cecd2
005CEB8C  8B 4A 03                  MOV ECX,dword ptr [EDX + 0x3]
005CEB8F  3B 0D 58 99 80 00         CMP ECX,dword ptr [0x00809958]
005CEB95  74 70                     JZ 0x005cec07
005CEB97  8B C8                     MOV ECX,EAX
005CEB99  2B 8B 15 22 00 00         SUB ECX,dword ptr [EBX + 0x2215]
005CEB9F  81 F9 B8 0B 00 00         CMP ECX,0xbb8
005CEBA5  72 60                     JC 0x005cec07
005CEBA7  8B 15 64 17 81 00         MOV EDX,dword ptr [0x00811764]
005CEBAD  6A 01                     PUSH 0x1
005CEBAF  52                        PUSH EDX
005CEBB0  E8 4B 79 0E 00            CALL 0x006b6500
005CEBB5  A1 64 17 81 00            MOV EAX,[0x00811764]
005CEBBA  6A FF                     PUSH -0x1
005CEBBC  6A 00                     PUSH 0x0
005CEBBE  6A 00                     PUSH 0x0
005CEBC0  6A 00                     PUSH 0x0
005CEBC2  6A 21                     PUSH 0x21
005CEBC4  6A 01                     PUSH 0x1
005CEBC6  50                        PUSH EAX
005CEBC7  E8 94 67 14 00            CALL 0x00715360
005CEBCC  8B 0D 64 17 81 00         MOV ECX,dword ptr [0x00811764]
005CEBD2  6A FF                     PUSH -0x1
005CEBD4  6A 00                     PUSH 0x0
005CEBD6  6A 00                     PUSH 0x0
005CEBD8  6A 00                     PUSH 0x0
005CEBDA  6A 1F                     PUSH 0x1f
005CEBDC  6A 01                     PUSH 0x1
005CEBDE  51                        PUSH ECX
005CEBDF  E8 7C 67 14 00            CALL 0x00715360
005CEBE4  8B 15 3C 73 80 00         MOV EDX,dword ptr [0x0080733c]
005CEBEA  A1 64 17 81 00            MOV EAX,[0x00811764]
005CEBEF  83 C4 38                  ADD ESP,0x38
005CEBF2  52                        PUSH EDX
005CEBF3  50                        PUSH EAX
005CEBF4  E8 07 79 0E 00            CALL 0x006b6500
005CEBF9  8B 4B 61                  MOV ECX,dword ptr [EBX + 0x61]
005CEBFC  89 8B 15 22 00 00         MOV dword ptr [EBX + 0x2215],ECX
005CEC02  E9 CB 00 00 00            JMP 0x005cecd2
LAB_005cec07:
005CEC07  8B 52 16                  MOV EDX,dword ptr [EDX + 0x16]
005CEC0A  8B 0D AB 8A 80 00         MOV ECX,dword ptr [0x00808aab]
005CEC10  3B D1                     CMP EDX,ECX
005CEC12  74 56                     JZ 0x005cec6a
005CEC14  8B 93 19 22 00 00         MOV EDX,dword ptr [EBX + 0x2219]
005CEC1A  8B C8                     MOV ECX,EAX
005CEC1C  2B CA                     SUB ECX,EDX
005CEC1E  81 F9 B8 0B 00 00         CMP ECX,0xbb8
005CEC24  72 44                     JC 0x005cec6a
005CEC26  8B 15 64 17 81 00         MOV EDX,dword ptr [0x00811764]
005CEC2C  6A 01                     PUSH 0x1
005CEC2E  52                        PUSH EDX
005CEC2F  E8 CC 78 0E 00            CALL 0x006b6500
005CEC34  A1 64 17 81 00            MOV EAX,[0x00811764]
005CEC39  6A FF                     PUSH -0x1
005CEC3B  6A 00                     PUSH 0x0
005CEC3D  6A 00                     PUSH 0x0
005CEC3F  6A 00                     PUSH 0x0
005CEC41  6A 1D                     PUSH 0x1d
005CEC43  6A 01                     PUSH 0x1
005CEC45  50                        PUSH EAX
005CEC46  E8 15 67 14 00            CALL 0x00715360
005CEC4B  8B 0D 3C 73 80 00         MOV ECX,dword ptr [0x0080733c]
005CEC51  8B 15 64 17 81 00         MOV EDX,dword ptr [0x00811764]
005CEC57  83 C4 1C                  ADD ESP,0x1c
005CEC5A  51                        PUSH ECX
005CEC5B  52                        PUSH EDX
005CEC5C  E8 9F 78 0E 00            CALL 0x006b6500
005CEC61  8B 43 61                  MOV EAX,dword ptr [EBX + 0x61]
005CEC64  89 83 19 22 00 00         MOV dword ptr [EBX + 0x2219],EAX
LAB_005cec6a:
005CEC6A  8B 8B 84 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f84]
005CEC70  85 C9                     TEST ECX,ECX
005CEC72  74 5E                     JZ 0x005cecd2
005CEC74  8B 4E 1A                  MOV ECX,dword ptr [ESI + 0x1a]
005CEC77  8B 93 21 21 00 00         MOV EDX,dword ptr [EBX + 0x2121]
005CEC7D  3B CA                     CMP ECX,EDX
005CEC7F  74 51                     JZ 0x005cecd2
005CEC81  2B 83 1D 22 00 00         SUB EAX,dword ptr [EBX + 0x221d]
005CEC87  3D D0 07 00 00            CMP EAX,0x7d0
005CEC8C  72 44                     JC 0x005cecd2
005CEC8E  8B 15 64 17 81 00         MOV EDX,dword ptr [0x00811764]
005CEC94  6A 01                     PUSH 0x1
005CEC96  52                        PUSH EDX
005CEC97  E8 64 78 0E 00            CALL 0x006b6500
005CEC9C  A1 64 17 81 00            MOV EAX,[0x00811764]
005CECA1  6A FF                     PUSH -0x1
005CECA3  6A 00                     PUSH 0x0
005CECA5  6A 00                     PUSH 0x0
005CECA7  6A 00                     PUSH 0x0
005CECA9  6A 23                     PUSH 0x23
005CECAB  6A 01                     PUSH 0x1
005CECAD  50                        PUSH EAX
005CECAE  E8 AD 66 14 00            CALL 0x00715360
005CECB3  8B 0D 3C 73 80 00         MOV ECX,dword ptr [0x0080733c]
005CECB9  8B 15 64 17 81 00         MOV EDX,dword ptr [0x00811764]
005CECBF  83 C4 1C                  ADD ESP,0x1c
005CECC2  51                        PUSH ECX
005CECC3  52                        PUSH EDX
005CECC4  E8 37 78 0E 00            CALL 0x006b6500
005CECC9  8B 43 61                  MOV EAX,dword ptr [EBX + 0x61]
005CECCC  89 83 1D 22 00 00         MOV dword ptr [EBX + 0x221d],EAX
LAB_005cecd2:
005CECD2  8B 43 61                  MOV EAX,dword ptr [EBX + 0x61]
005CECD5  8B 56 1E                  MOV EDX,dword ptr [ESI + 0x1e]
005CECD8  2B C2                     SUB EAX,EDX
005CECDA  89 83 11 22 00 00         MOV dword ptr [EBX + 0x2211],EAX
005CECE0  8B 0D 7F 87 80 00         MOV ECX,dword ptr [0x0080877f]
005CECE6  50                        PUSH EAX
005CECE7  51                        PUSH ECX
005CECE8  8B CB                     MOV ECX,EBX
005CECEA  E8 95 5D E3 FF            CALL 0x00404a84
005CECEF  80 3F 02                  CMP byte ptr [EDI],0x2
005CECF2  0F 85 2C 01 00 00         JNZ 0x005cee24
005CECF8  80 7B 65 01               CMP byte ptr [EBX + 0x65],0x1
005CECFC  0F 85 22 01 00 00         JNZ 0x005cee24
005CED02  8B 46 03                  MOV EAX,dword ptr [ESI + 0x3]
005CED05  8B 0D BE 87 80 00         MOV ECX,dword ptr [0x008087be]
005CED0B  3B C1                     CMP EAX,ECX
005CED0D  0F 85 11 01 00 00         JNZ 0x005cee24
005CED13  80 BB 26 1E 00 00 0E      CMP byte ptr [EBX + 0x1e26],0xe
005CED1A  75 0C                     JNZ 0x005ced28
005CED1C  3B 05 58 99 80 00         CMP EAX,dword ptr [0x00809958]
005CED22  0F 85 FC 00 00 00         JNZ 0x005cee24
LAB_005ced28:
005CED28  8B 56 16                  MOV EDX,dword ptr [ESI + 0x16]
005CED2B  A1 AB 8A 80 00            MOV EAX,[0x00808aab]
005CED30  3B D0                     CMP EDX,EAX
005CED32  0F 85 EC 00 00 00         JNZ 0x005cee24
005CED38  8B 46 1A                  MOV EAX,dword ptr [ESI + 0x1a]
005CED3B  8B 8B 21 21 00 00         MOV ECX,dword ptr [EBX + 0x2121]
005CED41  3B C1                     CMP EAX,ECX
005CED43  0F 85 DB 00 00 00         JNZ 0x005cee24
005CED49  8D 43 1D                  LEA EAX,[EBX + 0x1d]
005CED4C  8B CB                     MOV ECX,EBX
005CED4E  50                        PUSH EAX
005CED4F  68 EF 00 01 00            PUSH 0x100ef
005CED54  6A 03                     PUSH 0x3
005CED56  C6 45 FF 00               MOV byte ptr [EBP + -0x1],0x0
005CED5A  C7 43 2D 03 00 01 00      MOV dword ptr [EBX + 0x2d],0x10003
005CED61  E8 1A 73 11 00            CALL 0x006e6080
005CED66  8A 4E 0C                  MOV CL,byte ptr [ESI + 0xc]
005CED69  88 0D 3B 73 80 00         MOV byte ptr [0x0080733b],CL
005CED6F  8B 56 0E                  MOV EDX,dword ptr [ESI + 0xe]
005CED72  89 15 54 87 80 00         MOV dword ptr [0x00808754],EDX
005CED78  8B BB 84 1F 00 00         MOV EDI,dword ptr [EBX + 0x1f84]
005CED7E  33 F6                     XOR ESI,ESI
005CED80  8B 57 0C                  MOV EDX,dword ptr [EDI + 0xc]
005CED83  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
005CED86  85 D2                     TEST EDX,EDX
005CED88  7E 40                     JLE 0x005cedca
005CED8A  3B F2                     CMP ESI,EDX
LAB_005ced8c:
005CED8C  73 0D                     JNC 0x005ced9b
005CED8E  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
005CED91  8B 4F 1C                  MOV ECX,dword ptr [EDI + 0x1c]
005CED94  0F AF C6                  IMUL EAX,ESI
005CED97  03 C1                     ADD EAX,ECX
005CED99  EB 02                     JMP 0x005ced9d
LAB_005ced9b:
005CED9B  33 C0                     XOR EAX,EAX
LAB_005ced9d:
005CED9D  85 C0                     TEST EAX,EAX
005CED9F  74 18                     JZ 0x005cedb9
005CEDA1  8A 48 04                  MOV CL,byte ptr [EAX + 0x4]
005CEDA4  80 F9 02                  CMP CL,0x2
005CEDA7  74 05                     JZ 0x005cedae
005CEDA9  80 F9 03                  CMP CL,0x3
005CEDAC  75 0B                     JNZ 0x005cedb9
LAB_005cedae:
005CEDAE  8B 0D 7F 87 80 00         MOV ECX,dword ptr [0x0080877f]
005CEDB4  39 48 06                  CMP dword ptr [EAX + 0x6],ECX
005CEDB7  74 0A                     JZ 0x005cedc3
LAB_005cedb9:
005CEDB9  46                        INC ESI
005CEDBA  3B F2                     CMP ESI,EDX
005CEDBC  7C CE                     JL 0x005ced8c
005CEDBE  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
005CEDC1  EB 07                     JMP 0x005cedca
LAB_005cedc3:
005CEDC3  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
005CEDC6  C6 45 FF 01               MOV byte ptr [EBP + -0x1],0x1
LAB_005cedca:
005CEDCA  8A 45 FF                  MOV AL,byte ptr [EBP + -0x1]
005CEDCD  84 C0                     TEST AL,AL
005CEDCF  74 1A                     JZ 0x005cedeb
005CEDD1  8B 13                     MOV EDX,dword ptr [EBX]
005CEDD3  8D 43 1D                  LEA EAX,[EBX + 0x1d]
005CEDD6  50                        PUSH EAX
005CEDD7  8B CB                     MOV ECX,EBX
005CEDD9  C7 43 2D 4A 69 00 00      MOV dword ptr [EBX + 0x2d],0x694a
005CEDE0  C7 43 31 01 00 00 00      MOV dword ptr [EBX + 0x31],0x1
005CEDE7  FF 12                     CALL dword ptr [EDX]
005CEDE9  EB 39                     JMP 0x005cee24
LAB_005cedeb:
005CEDEB  8A 15 A0 67 80 00         MOV DL,byte ptr [0x008067a0]
005CEDF1  8D 43 1D                  LEA EAX,[EBX + 0x1d]
005CEDF4  F6 DA                     NEG DL
005CEDF6  1B D2                     SBB EDX,EDX
005CEDF8  50                        PUSH EAX
005CEDF9  83 E2 04                  AND EDX,0x4
005CEDFC  8B CB                     MOV ECX,EBX
005CEDFE  81 C2 4D 69 00 00         ADD EDX,0x694d
005CEE04  89 53 2D                  MOV dword ptr [EBX + 0x2d],EDX
005CEE07  8B 13                     MOV EDX,dword ptr [EBX]
005CEE09  FF 12                     CALL dword ptr [EDX]
005CEE0B  EB 17                     JMP 0x005cee24
switchD_005cea1f::caseD_12:
005CEE0D  80 7B 65 01               CMP byte ptr [EBX + 0x65],0x1
005CEE11  75 11                     JNZ 0x005cee24
005CEE13  C7 45 BC 4F 69 00 00      MOV dword ptr [EBP + -0x44],0x694f
LAB_005cee1a:
005CEE1A  8B 03                     MOV EAX,dword ptr [EBX]
005CEE1C  8D 4D AC                  LEA ECX,[EBP + -0x54]
005CEE1F  51                        PUSH ECX
005CEE20  8B CB                     MOV ECX,EBX
005CEE22  FF 10                     CALL dword ptr [EAX]
switchD_005cea1f::caseD_11:
005CEE24  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005CEE27  85 C0                     TEST EAX,EAX
005CEE29  0F 84 5D 05 00 00         JZ 0x005cf38c
005CEE2F  8D 55 F8                  LEA EDX,[EBP + -0x8]
005CEE32  52                        PUSH EDX
005CEE33  E8 28 C2 0D 00            CALL 0x006ab060
005CEE38  E9 4F 05 00 00            JMP 0x005cf38c
switchD_005cea1f::caseD_10:
005CEE3D  80 7B 65 01               CMP byte ptr [EBX + 0x65],0x1
005CEE41  75 E1                     JNZ 0x005cee24
005CEE43  8A 15 A0 67 80 00         MOV DL,byte ptr [0x008067a0]
005CEE49  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005CEE4F  F6 DA                     NEG DL
005CEE51  1B D2                     SBB EDX,EDX
005CEE53  83 E2 04                  AND EDX,0x4
005CEE56  81 C2 4D 69 00 00         ADD EDX,0x694d
005CEE5C  89 55 BC                  MOV dword ptr [EBP + -0x44],EDX
005CEE5F  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005CEE65  85 C9                     TEST ECX,ECX
005CEE67  74 B1                     JZ 0x005cee1a
005CEE69  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
005CEE6C  6A 00                     PUSH 0x0
005CEE6E  6A 00                     PUSH 0x0
005CEE70  6A 00                     PUSH 0x0
005CEE72  8D 55 AC                  LEA EDX,[EBP + -0x54]
005CEE75  6A 00                     PUSH 0x0
005CEE77  52                        PUSH EDX
005CEE78  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
005CEE7B  C7 45 B8 02 00 00 00      MOV dword ptr [EBP + -0x48],0x2
005CEE82  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005CEE88  6A 00                     PUSH 0x0
005CEE8A  68 24 25 00 00            PUSH 0x2524
005CEE8F  E8 14 51 E3 FF            CALL 0x00403fa8
005CEE94  EB 8E                     JMP 0x005cee24
switchD_005cea1f::caseD_1c:
005CEE96  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005CEE99  8B 15 AB 8A 80 00         MOV EDX,dword ptr [0x00808aab]
005CEE9F  3B 50 6C                  CMP EDX,dword ptr [EAX + 0x6c]
005CEEA2  74 80                     JZ 0x005cee24
005CEEA4  8A 0D 8F 8A 80 00         MOV CL,byte ptr [0x00808a8f]
005CEEAA  8A 50 50                  MOV DL,byte ptr [EAX + 0x50]
005CEEAD  3A CA                     CMP CL,DL
005CEEAF  C6 45 FF 00               MOV byte ptr [EBP + -0x1],0x0
005CEEB3  C6 45 F3 00               MOV byte ptr [EBP + -0xd],0x0
005CEEB7  74 04                     JZ 0x005ceebd
005CEEB9  C6 45 FF 01               MOV byte ptr [EBP + -0x1],0x1
LAB_005ceebd:
005CEEBD  B9 10 00 00 00            MOV ECX,0x10
005CEEC2  8D 78 10                  LEA EDI,[EAX + 0x10]
005CEEC5  BE 4F 8A 80 00            MOV ESI,0x808a4f
005CEECA  33 D2                     XOR EDX,EDX
005CEECC  F3 A7                     CMPSD.REPE ES:EDI,ESI
005CEECE  74 04                     JZ 0x005ceed4
005CEED0  C6 45 F3 01               MOV byte ptr [EBP + -0xd],0x1
LAB_005ceed4:
005CEED4  6A 01                     PUSH 0x1
005CEED6  50                        PUSH EAX
005CEED7  68 B6 87 80 00            PUSH 0x8087b6
005CEEDC  E8 E2 58 E3 FF            CALL 0x004047c3
005CEEE1  A0 A8 8A 80 00            MOV AL,[0x00808aa8]
005CEEE6  8B 35 02 C5 80 00         MOV ESI,dword ptr [0x0080c502]
005CEEEC  A2 4B 73 80 00            MOV [0x0080734b],AL
005CEEF1  83 C4 0C                  ADD ESP,0xc
005CEEF4  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
005CEEF7  33 C0                     XOR EAX,EAX
005CEEF9  85 D2                     TEST EDX,EDX
005CEEFB  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005CEEFE  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
005CEF01  0F 8E 96 00 00 00         JLE 0x005cef9d
005CEF07  3B C2                     CMP EAX,EDX
LAB_005cef09:
005CEF09  73 0D                     JNC 0x005cef18
005CEF0B  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
005CEF0E  8B 7E 1C                  MOV EDI,dword ptr [ESI + 0x1c]
005CEF11  0F AF C8                  IMUL ECX,EAX
005CEF14  03 CF                     ADD ECX,EDI
005CEF16  EB 02                     JMP 0x005cef1a
LAB_005cef18:
005CEF18  33 C9                     XOR ECX,ECX
LAB_005cef1a:
005CEF1A  85 C9                     TEST ECX,ECX
005CEF1C  74 4F                     JZ 0x005cef6d
005CEF1E  8B B9 90 00 00 00         MOV EDI,dword ptr [ECX + 0x90]
005CEF24  3B 3D 5C 99 80 00         CMP EDI,dword ptr [0x0080995c]
005CEF2A  75 41                     JNZ 0x005cef6d
005CEF2C  BF 60 99 80 00            MOV EDI,0x809960
005CEF31  8D 71 4C                  LEA ESI,[ECX + 0x4c]
LAB_005cef34:
005CEF34  8A 16                     MOV DL,byte ptr [ESI]
005CEF36  8A C2                     MOV AL,DL
005CEF38  3A 17                     CMP DL,byte ptr [EDI]
005CEF3A  75 1C                     JNZ 0x005cef58
005CEF3C  84 C0                     TEST AL,AL
005CEF3E  74 14                     JZ 0x005cef54
005CEF40  8A 56 01                  MOV DL,byte ptr [ESI + 0x1]
005CEF43  8A C2                     MOV AL,DL
005CEF45  3A 57 01                  CMP DL,byte ptr [EDI + 0x1]
005CEF48  75 0E                     JNZ 0x005cef58
005CEF4A  83 C6 02                  ADD ESI,0x2
005CEF4D  83 C7 02                  ADD EDI,0x2
005CEF50  84 C0                     TEST AL,AL
005CEF52  75 E0                     JNZ 0x005cef34
LAB_005cef54:
005CEF54  33 C0                     XOR EAX,EAX
005CEF56  EB 05                     JMP 0x005cef5d
LAB_005cef58:
005CEF58  1B C0                     SBB EAX,EAX
005CEF5A  83 D8 FF                  SBB EAX,-0x1
LAB_005cef5d:
005CEF5D  85 C0                     TEST EAX,EAX
005CEF5F  74 16                     JZ 0x005cef77
005CEF61  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
005CEF64  8B 35 02 C5 80 00         MOV ESI,dword ptr [0x0080c502]
005CEF6A  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
LAB_005cef6d:
005CEF6D  40                        INC EAX
005CEF6E  3B C2                     CMP EAX,EDX
005CEF70  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005CEF73  7C 94                     JL 0x005cef09
005CEF75  EB 26                     JMP 0x005cef9d
LAB_005cef77:
005CEF77  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005CEF7A  8B 93 63 1C 00 00         MOV EDX,dword ptr [EBX + 0x1c63]
005CEF80  89 83 5F 1C 00 00         MOV dword ptr [EBX + 0x1c5f],EAX
005CEF86  8B 83 43 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f43]
005CEF8C  83 C1 70                  ADD ECX,0x70
005CEF8F  52                        PUSH EDX
005CEF90  51                        PUSH ECX
005CEF91  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005CEF97  50                        PUSH EAX
005CEF98  E8 56 3C E3 FF            CALL 0x00402bf3
LAB_005cef9d:
005CEF9D  8D B3 25 21 00 00         LEA ESI,[EBX + 0x2125]
005CEFA3  BF 0E 00 00 00            MOV EDI,0xe
LAB_005cefa8:
005CEFA8  83 3E 00                  CMP dword ptr [ESI],0x0
005CEFAB  74 17                     JZ 0x005cefc4
005CEFAD  C7 43 2D 05 00 00 00      MOV dword ptr [EBX + 0x2d],0x5
005CEFB4  8B 16                     MOV EDX,dword ptr [ESI]
005CEFB6  8D 4B 1D                  LEA ECX,[EBX + 0x1d]
005CEFB9  51                        PUSH ECX
005CEFBA  52                        PUSH EDX
005CEFBB  6A 02                     PUSH 0x2
005CEFBD  8B CB                     MOV ECX,EBX
005CEFBF  E8 BC 70 11 00            CALL 0x006e6080
LAB_005cefc4:
005CEFC4  83 C6 04                  ADD ESI,0x4
005CEFC7  4F                        DEC EDI
005CEFC8  75 DE                     JNZ 0x005cefa8
005CEFCA  8A 45 FF                  MOV AL,byte ptr [EBP + -0x1]
005CEFCD  84 C0                     TEST AL,AL
005CEFCF  74 0E                     JZ 0x005cefdf
005CEFD1  8B 03                     MOV EAX,dword ptr [EBX]
005CEFD3  8B CB                     MOV ECX,EBX
005CEFD5  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
005CEFD8  8A 45 FF                  MOV AL,byte ptr [EBP + -0x1]
005CEFDB  84 C0                     TEST AL,AL
005CEFDD  75 44                     JNZ 0x005cf023
LAB_005cefdf:
005CEFDF  8A 45 F3                  MOV AL,byte ptr [EBP + -0xd]
005CEFE2  84 C0                     TEST AL,AL
005CEFE4  74 3D                     JZ 0x005cf023
005CEFE6  8D B3 8C 1F 00 00         LEA ESI,[EBX + 0x1f8c]
005CEFEC  C7 45 F4 0A 00 00 00      MOV dword ptr [EBP + -0xc],0xa
LAB_005ceff3:
005CEFF3  BF 08 00 00 00            MOV EDI,0x8
LAB_005ceff8:
005CEFF8  83 3E 00                  CMP dword ptr [ESI],0x0
005CEFFB  74 17                     JZ 0x005cf014
005CEFFD  C7 43 2D 05 00 00 00      MOV dword ptr [EBX + 0x2d],0x5
005CF004  8B 16                     MOV EDX,dword ptr [ESI]
005CF006  8D 4B 1D                  LEA ECX,[EBX + 0x1d]
005CF009  51                        PUSH ECX
005CF00A  52                        PUSH EDX
005CF00B  6A 02                     PUSH 0x2
005CF00D  8B CB                     MOV ECX,EBX
005CF00F  E8 6C 70 11 00            CALL 0x006e6080
LAB_005cf014:
005CF014  83 C6 04                  ADD ESI,0x4
005CF017  4F                        DEC EDI
005CF018  75 DE                     JNZ 0x005ceff8
005CF01A  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005CF01D  48                        DEC EAX
005CF01E  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005CF021  75 D0                     JNZ 0x005ceff3
LAB_005cf023:
005CF023  8B CB                     MOV ECX,EBX
005CF025  E8 70 3A E3 FF            CALL 0x00402a9a
005CF02A  E9 F5 FD FF FF            JMP 0x005cee24
switchD_005cea1f::caseD_1e:
005CF02F  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
005CF032  A1 58 99 80 00            MOV EAX,[0x00809958]
005CF037  3B 06                     CMP EAX,dword ptr [ESI]
005CF039  0F 84 E5 FD FF FF         JZ 0x005cee24
005CF03F  80 7B 65 01               CMP byte ptr [EBX + 0x65],0x1
005CF043  0F 85 DB FD FF FF         JNZ 0x005cee24
005CF049  B9 8C 00 00 00            MOV ECX,0x8c
005CF04E  BF E0 3D 85 00            MOV EDI,0x853de0
005CF053  F3 A5                     MOVSD.REP ES:EDI,ESI
005CF055  8B CB                     MOV ECX,EBX
005CF057  66 A5                     MOVSW ES:EDI,ESI
005CF059  E8 74 34 E3 FF            CALL 0x004024d2
005CF05E  E9 C1 FD FF FF            JMP 0x005cee24
switchD_005cea1f::caseD_20:
005CF063  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
005CF066  8D 83 53 1F 00 00         LEA EAX,[EBX + 0x1f53]
005CF06C  B9 0D 00 00 00            MOV ECX,0xd
005CF071  8B F0                     MOV ESI,EAX
005CF073  33 D2                     XOR EDX,EDX
005CF075  F3 A6                     CMPSB.REPE ES:EDI,ESI
005CF077  0F 84 A7 FD FF FF         JZ 0x005cee24
005CF07D  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
005CF080  BF 06 00 00 00            MOV EDI,0x6
005CF085  8B 0E                     MOV ECX,dword ptr [ESI]
005CF087  89 08                     MOV dword ptr [EAX],ECX
005CF089  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
005CF08C  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
005CF08F  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
005CF092  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
005CF095  8A 56 0C                  MOV DL,byte ptr [ESI + 0xc]
005CF098  88 50 0C                  MOV byte ptr [EAX + 0xc],DL
005CF09B  8D B3 60 1F 00 00         LEA ESI,[EBX + 0x1f60]
LAB_005cf0a1:
005CF0A1  83 3E 00                  CMP dword ptr [ESI],0x0
005CF0A4  74 17                     JZ 0x005cf0bd
005CF0A6  C7 43 2D 05 00 00 00      MOV dword ptr [EBX + 0x2d],0x5
005CF0AD  8B 0E                     MOV ECX,dword ptr [ESI]
005CF0AF  8D 43 1D                  LEA EAX,[EBX + 0x1d]
005CF0B2  50                        PUSH EAX
005CF0B3  51                        PUSH ECX
005CF0B4  6A 02                     PUSH 0x2
005CF0B6  8B CB                     MOV ECX,EBX
005CF0B8  E8 C3 6F 11 00            CALL 0x006e6080
LAB_005cf0bd:
005CF0BD  83 C6 04                  ADD ESI,0x4
005CF0C0  4F                        DEC EDI
005CF0C1  75 DE                     JNZ 0x005cf0a1
005CF0C3  8B 93 80 1F 00 00         MOV EDX,dword ptr [EBX + 0x1f80]
005CF0C9  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005CF0CE  52                        PUSH EDX
005CF0CF  50                        PUSH EAX
005CF0D0  E8 FB 44 0E 00            CALL 0x006b35d0
005CF0D5  E9 4A FD FF FF            JMP 0x005cee24
switchD_005cea1f::caseD_22:
005CF0DA  8B 83 84 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f84]
005CF0E0  85 C0                     TEST EAX,EAX
005CF0E2  0F 84 C8 01 00 00         JZ 0x005cf2b0
005CF0E8  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
005CF0EB  8B 8B 21 21 00 00         MOV ECX,dword ptr [EBX + 0x2121]
005CF0F1  3B 0E                     CMP ECX,dword ptr [ESI]
005CF0F3  0F 84 B7 01 00 00         JZ 0x005cf2b0
005CF0F9  8B 15 AB 8A 80 00         MOV EDX,dword ptr [0x00808aab]
005CF0FF  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
005CF102  3B D0                     CMP EDX,EAX
005CF104  0F 85 A6 01 00 00         JNZ 0x005cf2b0
005CF10A  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
005CF10D  83 C0 F7                  ADD EAX,-0x9
005CF110  85 C0                     TEST EAX,EAX
005CF112  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005CF115  0F 8C 77 01 00 00         JL 0x005cf292
005CF11B  8D 4B 1D                  LEA ECX,[EBX + 0x1d]
005CF11E  C7 43 2D 03 00 01 00      MOV dword ptr [EBX + 0x2d],0x10003
005CF125  51                        PUSH ECX
005CF126  68 EF 00 01 00            PUSH 0x100ef
005CF12B  6A 03                     PUSH 0x3
005CF12D  8B CB                     MOV ECX,EBX
005CF12F  E8 4C 6F 11 00            CALL 0x006e6080
005CF134  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005CF137  83 C6 08                  ADD ESI,0x8
005CF13A  46                        INC ESI
005CF13B  33 FF                     XOR EDI,EDI
005CF13D  8B 02                     MOV EAX,dword ptr [EDX]
005CF13F  89 83 21 21 00 00         MOV dword ptr [EBX + 0x2121],EAX
005CF145  8A 4E FF                  MOV CL,byte ptr [ESI + -0x1]
005CF148  8B 83 84 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f84]
005CF14E  88 4D F3                  MOV byte ptr [EBP + -0xd],CL
005CF151  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005CF154  85 C9                     TEST ECX,ECX
005CF156  7E 32                     JLE 0x005cf18a
005CF158  3B F9                     CMP EDI,ECX
LAB_005cf15a:
005CF15A  73 0D                     JNC 0x005cf169
005CF15C  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005CF15F  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
005CF162  0F AF CF                  IMUL ECX,EDI
005CF165  03 CA                     ADD ECX,EDX
005CF167  EB 02                     JMP 0x005cf16b
LAB_005cf169:
005CF169  33 C9                     XOR ECX,ECX
LAB_005cf16b:
005CF16B  85 C9                     TEST ECX,ECX
005CF16D  74 0D                     JZ 0x005cf17c
005CF16F  8B 49 50                  MOV ECX,dword ptr [ECX + 0x50]
005CF172  85 C9                     TEST ECX,ECX
005CF174  74 06                     JZ 0x005cf17c
005CF176  51                        PUSH ECX
005CF177  E8 94 EF 0D 00            CALL 0x006ae110
LAB_005cf17c:
005CF17C  8B 83 84 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f84]
005CF182  47                        INC EDI
005CF183  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005CF186  3B F9                     CMP EDI,ECX
005CF188  7C D0                     JL 0x005cf15a
LAB_005cf18a:
005CF18A  B8 AB AA AA AA            MOV EAX,0xaaaaaaab
005CF18F  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005CF192  F7 65 D8                  MUL dword ptr [EBP + -0x28]
005CF195  8B 83 84 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f84]
005CF19B  8B FA                     MOV EDI,EDX
005CF19D  C1 EF 06                  SHR EDI,0x6
005CF1A0  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
005CF1A3  89 7D D0                  MOV dword ptr [EBP + -0x30],EDI
005CF1A6  0F AF 50 08               IMUL EDX,dword ptr [EAX + 0x8]
005CF1AA  3B CA                     CMP ECX,EDX
005CF1AC  7E 1C                     JLE 0x005cf1ca
005CF1AE  8B 40 1C                  MOV EAX,dword ptr [EAX + 0x1c]
005CF1B1  51                        PUSH ECX
005CF1B2  50                        PUSH EAX
005CF1B3  E8 98 DD 0D 00            CALL 0x006acf50
005CF1B8  8B 8B 84 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f84]
005CF1BE  89 41 1C                  MOV dword ptr [ECX + 0x1c],EAX
005CF1C1  8B 93 84 1F 00 00         MOV EDX,dword ptr [EBX + 0x1f84]
005CF1C7  89 7A 10                  MOV dword ptr [EDX + 0x10],EDI
LAB_005cf1ca:
005CF1CA  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005CF1CD  8B 83 84 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f84]
005CF1D3  8B D1                     MOV EDX,ECX
005CF1D5  8B 78 1C                  MOV EDI,dword ptr [EAX + 0x1c]
005CF1D8  C1 E9 02                  SHR ECX,0x2
005CF1DB  F3 A5                     MOVSD.REP ES:EDI,ESI
005CF1DD  8B CA                     MOV ECX,EDX
005CF1DF  83 E1 03                  AND ECX,0x3
005CF1E2  F3 A4                     MOVSB.REP ES:EDI,ESI
005CF1E4  8B 83 84 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f84]
005CF1EA  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
005CF1ED  33 FF                     XOR EDI,EDI
005CF1EF  89 48 0C                  MOV dword ptr [EAX + 0xc],ECX
005CF1F2  8B 83 84 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f84]
005CF1F8  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005CF1FB  85 C9                     TEST ECX,ECX
005CF1FD  0F 8E 8F 00 00 00         JLE 0x005cf292
005CF203  3B F9                     CMP EDI,ECX
LAB_005cf205:
005CF205  73 0D                     JNC 0x005cf214
005CF207  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
005CF20A  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
005CF20D  0F AF F7                  IMUL ESI,EDI
005CF210  03 F1                     ADD ESI,ECX
005CF212  EB 02                     JMP 0x005cf216
LAB_005cf214:
005CF214  33 F6                     XOR ESI,ESI
LAB_005cf216:
005CF216  85 F6                     TEST ESI,ESI
005CF218  74 66                     JZ 0x005cf280
005CF21A  8A 4D F3                  MOV CL,byte ptr [EBP + -0xd]
005CF21D  80 F9 05                  CMP CL,0x5
005CF220  74 44                     JZ 0x005cf266
005CF222  8A 83 26 1E 00 00         MOV AL,byte ptr [EBX + 0x1e26]
005CF228  3C 0F                     CMP AL,0xf
005CF22A  74 3A                     JZ 0x005cf266
005CF22C  80 F9 0C                  CMP CL,0xc
005CF22F  74 1F                     JZ 0x005cf250
005CF231  3C 10                     CMP AL,0x10
005CF233  74 1B                     JZ 0x005cf250
005CF235  8B 15 5C 99 80 00         MOV EDX,dword ptr [0x0080995c]
005CF23B  8B 8B 43 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f43]
005CF241  33 C0                     XOR EAX,EAX
005CF243  52                        PUSH EDX
005CF244  8A 46 03                  MOV AL,byte ptr [ESI + 0x3]
005CF247  50                        PUSH EAX
005CF248  51                        PUSH ECX
005CF249  E8 F6 4C E3 FF            CALL 0x00403f44
005CF24E  EB 2A                     JMP 0x005cf27a
LAB_005cf250:
005CF250  8B 83 3F 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f3f]
005CF256  33 D2                     XOR EDX,EDX
005CF258  8A 56 02                  MOV DL,byte ptr [ESI + 0x2]
005CF25B  6A FF                     PUSH -0x1
005CF25D  52                        PUSH EDX
005CF25E  50                        PUSH EAX
005CF25F  E8 57 2B E3 FF            CALL 0x00401dbb
005CF264  EB 14                     JMP 0x005cf27a
LAB_005cf266:
005CF266  8B 93 3F 1F 00 00         MOV EDX,dword ptr [EBX + 0x1f3f]
005CF26C  33 C9                     XOR ECX,ECX
005CF26E  8A 4E 02                  MOV CL,byte ptr [ESI + 0x2]
005CF271  6A FF                     PUSH -0x1
005CF273  51                        PUSH ECX
005CF274  52                        PUSH EDX
005CF275  E8 F0 53 E3 FF            CALL 0x0040466a
LAB_005cf27a:
005CF27A  83 C4 0C                  ADD ESP,0xc
005CF27D  89 46 50                  MOV dword ptr [ESI + 0x50],EAX
LAB_005cf280:
005CF280  8B 83 84 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f84]
005CF286  47                        INC EDI
005CF287  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005CF28A  3B F9                     CMP EDI,ECX
005CF28C  0F 8C 73 FF FF FF         JL 0x005cf205
LAB_005cf292:
005CF292  80 BB 26 1E 00 00 10      CMP byte ptr [EBX + 0x1e26],0x10
005CF299  74 07                     JZ 0x005cf2a2
005CF29B  8B CB                     MOV ECX,EBX
005CF29D  E8 DB 68 E3 FF            CALL 0x00405b7d
LAB_005cf2a2:
005CF2A2  8B 03                     MOV EAX,dword ptr [EBX]
005CF2A4  8B CB                     MOV ECX,EBX
005CF2A6  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
005CF2A9  8B CB                     MOV ECX,EBX
005CF2AB  E8 EA 37 E3 FF            CALL 0x00402a9a
LAB_005cf2b0:
005CF2B0  8A 93 26 1E 00 00         MOV DL,byte ptr [EBX + 0x1e26]
005CF2B6  33 C9                     XOR ECX,ECX
005CF2B8  80 FA 10                  CMP DL,0x10
005CF2BB  0F 94 C1                  SETZ CL
005CF2BE  51                        PUSH ECX
005CF2BF  8B CB                     MOV ECX,EBX
005CF2C1  E8 DB 53 E3 FF            CALL 0x004046a1
005CF2C6  E9 59 FB FF FF            JMP 0x005cee24
switchD_005cea1f::caseD_31:
005CF2CB  8A 83 25 22 00 00         MOV AL,byte ptr [EBX + 0x2225]
005CF2D1  84 C0                     TEST AL,AL
005CF2D3  0F 85 4B FB FF FF         JNZ 0x005cee24
005CF2D9  C6 83 25 22 00 00 01      MOV byte ptr [EBX + 0x2225],0x1
005CF2E0  8A 15 A0 67 80 00         MOV DL,byte ptr [0x008067a0]
005CF2E6  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005CF2EC  F6 DA                     NEG DL
005CF2EE  1B D2                     SBB EDX,EDX
005CF2F0  83 E2 04                  AND EDX,0x4
005CF2F3  81 C2 4D 69 00 00         ADD EDX,0x694d
005CF2F9  89 55 BC                  MOV dword ptr [EBP + -0x44],EDX
005CF2FC  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005CF302  85 C9                     TEST ECX,ECX
005CF304  0F 84 10 FB FF FF         JZ 0x005cee1a
005CF30A  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
005CF30D  6A 00                     PUSH 0x0
005CF30F  6A 00                     PUSH 0x0
005CF311  6A 00                     PUSH 0x0
005CF313  8D 55 AC                  LEA EDX,[EBP + -0x54]
005CF316  6A 00                     PUSH 0x0
005CF318  52                        PUSH EDX
005CF319  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
005CF31C  C7 45 B8 02 00 00 00      MOV dword ptr [EBP + -0x48],0x2
005CF323  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005CF329  6A 00                     PUSH 0x0
005CF32B  68 22 25 00 00            PUSH 0x2522
005CF330  E8 73 4C E3 FF            CALL 0x00403fa8
005CF335  E9 EA FA FF FF            JMP 0x005cee24
LAB_005cf33a:
005CF33A  C6 83 25 22 00 00 01      MOV byte ptr [EBX + 0x2225],0x1
005CF341  A0 A0 67 80 00            MOV AL,[0x008067a0]
005CF346  F6 D8                     NEG AL
005CF348  1B C0                     SBB EAX,EAX
005CF34A  83 E0 04                  AND EAX,0x4
005CF34D  05 4D 69 00 00            ADD EAX,0x694d
005CF352  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
005CF355  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005CF35B  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005CF361  85 C9                     TEST ECX,ECX
005CF363  74 1D                     JZ 0x005cf382
005CF365  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
005CF368  6A 00                     PUSH 0x0
005CF36A  6A 00                     PUSH 0x0
005CF36C  6A 00                     PUSH 0x0
005CF36E  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
005CF371  C7 45 B8 02 00 00 00      MOV dword ptr [EBP + -0x48],0x2
005CF378  6A 00                     PUSH 0x0
005CF37A  8D 55 AC                  LEA EDX,[EBP + -0x54]
005CF37D  E9 30 F6 FF FF            JMP 0x005ce9b2
LAB_005cf382:
005CF382  8B 03                     MOV EAX,dword ptr [EBX]
005CF384  8D 4D AC                  LEA ECX,[EBP + -0x54]
LAB_005cf387:
005CF387  51                        PUSH ECX
005CF388  8B CB                     MOV ECX,EBX
005CF38A  FF 10                     CALL dword ptr [EAX]
LAB_005cf38c:
005CF38C  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
005CF38F  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
005CF392  40                        INC EAX
005CF393  3B C1                     CMP EAX,ECX
005CF395  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
005CF398  0F 8C EB EF FF FF         JL 0x005ce389
LAB_005cf39e:
005CF39E  A0 7E 87 80 00            MOV AL,[0x0080877e]
005CF3A3  84 C0                     TEST AL,AL
005CF3A5  0F 84 38 02 00 00         JZ 0x005cf5e3
005CF3AB  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
005CF3AE  83 F8 FF                  CMP EAX,-0x1
005CF3B1  74 08                     JZ 0x005cf3bb
005CF3B3  50                        PUSH EAX
005CF3B4  8B CB                     MOV ECX,EBX
005CF3B6  E8 1A 47 E3 FF            CALL 0x00403ad5
LAB_005cf3bb:
005CF3BB  8B 93 37 22 00 00         MOV EDX,dword ptr [EBX + 0x2237]
005CF3C1  8B 83 3B 22 00 00         MOV EAX,dword ptr [EBX + 0x223b]
005CF3C7  3B 42 0C                  CMP EAX,dword ptr [EDX + 0xc]
005CF3CA  0F 83 13 02 00 00         JNC 0x005cf5e3
005CF3D0  8B 8B 5B 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a5b]
005CF3D6  8B 81 9A 06 00 00         MOV EAX,dword ptr [ECX + 0x69a]
005CF3DC  85 C0                     TEST EAX,EAX
005CF3DE  0F 84 FF 01 00 00         JZ 0x005cf5e3
005CF3E4  8B 83 3F 22 00 00         MOV EAX,dword ptr [EBX + 0x223f]
005CF3EA  85 C0                     TEST EAX,EAX
005CF3EC  74 09                     JZ 0x005cf3f7
005CF3EE  48                        DEC EAX
005CF3EF  89 83 3F 22 00 00         MOV dword ptr [EBX + 0x223f],EAX
005CF3F5  EB 0C                     JMP 0x005cf403
LAB_005cf3f7:
005CF3F7  8B 89 AA 06 00 00         MOV ECX,dword ptr [ECX + 0x6aa]
005CF3FD  89 8B 3F 22 00 00         MOV dword ptr [EBX + 0x223f],ECX
LAB_005cf403:
005CF403  8B 15 64 17 81 00         MOV EDX,dword ptr [0x00811764]
005CF409  8B 02                     MOV EAX,dword ptr [EDX]
005CF40B  8D 55 A0                  LEA EDX,[EBP + -0x60]
005CF40E  52                        PUSH EDX
005CF40F  8B 15 7F 87 80 00         MOV EDX,dword ptr [0x0080877f]
005CF415  8B 08                     MOV ECX,dword ptr [EAX]
005CF417  6A 00                     PUSH 0x0
005CF419  6A 01                     PUSH 0x1
005CF41B  6A 00                     PUSH 0x0
005CF41D  52                        PUSH EDX
005CF41E  50                        PUSH EAX
005CF41F  FF 91 C8 00 00 00         CALL dword ptr [ECX + 0xc8]
005CF425  85 C0                     TEST EAX,EAX
005CF427  0F 85 B6 01 00 00         JNZ 0x005cf5e3
005CF42D  81 7D A0 00 04 00 00      CMP dword ptr [EBP + -0x60],0x400
005CF434  0F 83 A9 01 00 00         JNC 0x005cf5e3
005CF43A  8B 83 3F 22 00 00         MOV EAX,dword ptr [EBX + 0x223f]
005CF440  85 C0                     TEST EAX,EAX
005CF442  0F 85 9B 01 00 00         JNZ 0x005cf5e3
005CF448  8B 8B 37 22 00 00         MOV ECX,dword ptr [EBX + 0x2237]
005CF44E  8B 93 3B 22 00 00         MOV EDX,dword ptr [EBX + 0x223b]
005CF454  3B 51 0C                  CMP EDX,dword ptr [ECX + 0xc]
005CF457  73 0B                     JNC 0x005cf464
005CF459  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005CF45C  0F AF C2                  IMUL EAX,EDX
005CF45F  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
005CF462  EB 02                     JMP 0x005cf466
LAB_005cf464:
005CF464  33 C0                     XOR EAX,EAX
LAB_005cf466:
005CF466  85 C0                     TEST EAX,EAX
005CF468  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005CF46B  0F 84 72 01 00 00         JZ 0x005cf5e3
005CF471  8B 8B 5B 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a5b]
005CF477  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
005CF47A  83 C0 08                  ADD EAX,0x8
005CF47D  89 75 9C                  MOV dword ptr [EBP + -0x64],ESI
005CF480  8B 91 A6 06 00 00         MOV EDX,dword ptr [ECX + 0x6a6]
005CF486  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
005CF489  33 C0                     XOR EAX,EAX
005CF48B  85 D2                     TEST EDX,EDX
005CF48D  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
005CF490  0F 86 29 01 00 00         JBE 0x005cf5bf
LAB_005cf496:
005CF496  80 3C 30 00               CMP byte ptr [EAX + ESI*0x1],0x0
005CF49A  75 0D                     JNZ 0x005cf4a9
005CF49C  40                        INC EAX
005CF49D  3B C2                     CMP EAX,EDX
005CF49F  72 F5                     JC 0x005cf496
005CF4A1  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
005CF4A4  E9 16 01 00 00            JMP 0x005cf5bf
LAB_005cf4a9:
005CF4A9  8B 91 A6 06 00 00         MOV EDX,dword ptr [ECX + 0x6a6]
005CF4AF  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
005CF4B2  4A                        DEC EDX
005CF4B3  3B C2                     CMP EAX,EDX
005CF4B5  75 12                     JNZ 0x005cf4c9
005CF4B7  8B 81 9E 06 00 00         MOV EAX,dword ptr [ECX + 0x69e]
005CF4BD  33 D2                     XOR EDX,EDX
005CF4BF  F7 B1 A2 06 00 00         DIV dword ptr [ECX + 0x6a2]
005CF4C5  8B F2                     MOV ESI,EDX
005CF4C7  EB 06                     JMP 0x005cf4cf
LAB_005cf4c9:
005CF4C9  8B B1 A2 06 00 00         MOV ESI,dword ptr [ECX + 0x6a2]
LAB_005cf4cf:
005CF4CF  8D 46 1C                  LEA EAX,[ESI + 0x1c]
005CF4D2  50                        PUSH EAX
005CF4D3  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
005CF4D6  E8 95 B7 0D 00            CALL 0x006aac70
005CF4DB  8B 0D BE 87 80 00         MOV ECX,dword ptr [0x008087be]
005CF4E1  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
005CF4E4  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
005CF4E7  89 08                     MOV dword ptr [EAX],ECX
005CF4E9  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
005CF4EC  8B 8B 5B 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a5b]
005CF4F2  6A FF                     PUSH -0x1
005CF4F4  6A 01                     PUSH 0x1
005CF4F6  8B 89 A6 06 00 00         MOV ECX,dword ptr [ECX + 0x6a6]
005CF4FC  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
005CF4FF  8B 8B 5B 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a5b]
005CF505  8B 89 9E 06 00 00         MOV ECX,dword ptr [ECX + 0x69e]
005CF50B  89 48 0C                  MOV dword ptr [EAX + 0xc],ECX
005CF50E  8B 8B 5B 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a5b]
005CF514  8B 89 AE 06 00 00         MOV ECX,dword ptr [ECX + 0x6ae]
005CF51A  89 48 10                  MOV dword ptr [EAX + 0x10],ECX
005CF51D  8B 8B 5B 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a5b]
005CF523  8B 89 B2 06 00 00         MOV ECX,dword ptr [ECX + 0x6b2]
005CF529  89 48 14                  MOV dword ptr [EAX + 0x14],ECX
005CF52C  8B 8B 5B 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a5b]
005CF532  8B 89 A2 06 00 00         MOV ECX,dword ptr [ECX + 0x6a2]
005CF538  89 48 18                  MOV dword ptr [EAX + 0x18],ECX
005CF53B  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005CF541  8B CE                     MOV ECX,ESI
005CF543  8B B0 A2 06 00 00         MOV ESI,dword ptr [EAX + 0x6a2]
005CF549  8B B8 9A 06 00 00         MOV EDI,dword ptr [EAX + 0x69a]
005CF54F  0F AF F2                  IMUL ESI,EDX
005CF552  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
005CF555  8B C1                     MOV EAX,ECX
005CF557  03 F7                     ADD ESI,EDI
005CF559  8D 7A 1C                  LEA EDI,[EDX + 0x1c]
005CF55C  C1 E9 02                  SHR ECX,0x2
005CF55F  F3 A5                     MOVSD.REP ES:EDI,ESI
005CF561  8B C8                     MOV ECX,EAX
005CF563  83 E1 03                  AND ECX,0x3
005CF566  F3 A4                     MOVSB.REP ES:EDI,ESI
005CF568  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
005CF56B  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
005CF56E  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
005CF571  51                        PUSH ECX
005CF572  8B 06                     MOV EAX,dword ptr [ESI]
005CF574  8B 0D 64 17 81 00         MOV ECX,dword ptr [0x00811764]
005CF57A  52                        PUSH EDX
005CF57B  6A 26                     PUSH 0x26
005CF57D  50                        PUSH EAX
005CF57E  51                        PUSH ECX
005CF57F  E8 DC 5D 14 00            CALL 0x00715360
005CF584  83 C4 1C                  ADD ESP,0x1c
005CF587  8D 55 CC                  LEA EDX,[EBP + -0x34]
005CF58A  52                        PUSH EDX
005CF58B  E8 D0 BA 0D 00            CALL 0x006ab060
005CF590  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
005CF593  8B 4D 9C                  MOV ECX,dword ptr [EBP + -0x64]
005CF596  C6 04 08 00               MOV byte ptr [EAX + ECX*0x1],0x0
005CF59A  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
005CF59D  48                        DEC EAX
005CF59E  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
005CF5A1  75 1C                     JNZ 0x005cf5bf
005CF5A3  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
005CF5A6  52                        PUSH EDX
005CF5A7  E8 B4 BA 0D 00            CALL 0x006ab060
005CF5AC  8B 83 3B 22 00 00         MOV EAX,dword ptr [EBX + 0x223b]
005CF5B2  8B 8B 37 22 00 00         MOV ECX,dword ptr [EBX + 0x2237]
005CF5B8  50                        PUSH EAX
005CF5B9  51                        PUSH ECX
005CF5BA  E8 B1 16 0E 00            CALL 0x006b0c70
LAB_005cf5bf:
005CF5BF  8B 93 3B 22 00 00         MOV EDX,dword ptr [EBX + 0x223b]
005CF5C5  42                        INC EDX
005CF5C6  89 93 3B 22 00 00         MOV dword ptr [EBX + 0x223b],EDX
005CF5CC  8B C2                     MOV EAX,EDX
005CF5CE  8B 93 37 22 00 00         MOV EDX,dword ptr [EBX + 0x2237]
005CF5D4  3B 42 0C                  CMP EAX,dword ptr [EDX + 0xc]
005CF5D7  72 0A                     JC 0x005cf5e3
005CF5D9  C7 83 3B 22 00 00 00 00 00 00  MOV dword ptr [EBX + 0x223b],0x0
LAB_005cf5e3:
005CF5E3  8B 85 BC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffebc]
005CF5E9  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005CF5EE  B8 01 00 00 00            MOV EAX,0x1
005CF5F3  5F                        POP EDI
005CF5F4  5E                        POP ESI
005CF5F5  5B                        POP EBX
005CF5F6  8B E5                     MOV ESP,EBP
005CF5F8  5D                        POP EBP
005CF5F9  C3                        RET
LAB_005cf5fa:
005CF5FA  8B 8D BC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffebc]
005CF600  68 80 D3 7C 00            PUSH 0x7cd380
005CF605  68 CC 4C 7A 00            PUSH 0x7a4ccc
005CF60A  57                        PUSH EDI
005CF60B  56                        PUSH ESI
005CF60C  68 A9 04 00 00            PUSH 0x4a9
005CF611  68 58 D2 7C 00            PUSH 0x7cd258
005CF616  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005CF61C  E8 AF DE 0D 00            CALL 0x006ad4d0
005CF621  83 C4 18                  ADD ESP,0x18
005CF624  85 C0                     TEST EAX,EAX
005CF626  74 01                     JZ 0x005cf629
005CF628  CC                        INT3
LAB_005cf629:
005CF629  68 A9 04 00 00            PUSH 0x4a9
005CF62E  68 58 D2 7C 00            PUSH 0x7cd258
005CF633  56                        PUSH ESI
005CF634  57                        PUSH EDI
005CF635  E8 06 68 0D 00            CALL 0x006a5e40
005CF63A  5F                        POP EDI
005CF63B  5E                        POP ESI
005CF63C  33 C0                     XOR EAX,EAX
005CF63E  5B                        POP EBX
005CF63F  8B E5                     MOV ESP,EBP
005CF641  5D                        POP EBP
005CF642  C3                        RET
