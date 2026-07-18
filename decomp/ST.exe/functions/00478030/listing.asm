FUN_00478030:
00478030  55                        PUSH EBP
00478031  8B EC                     MOV EBP,ESP
00478033  51                        PUSH ECX
00478034  56                        PUSH ESI
00478035  8B F1                     MOV ESI,ECX
00478037  57                        PUSH EDI
00478038  8B 86 11 06 00 00         MOV EAX,dword ptr [ESI + 0x611]
0047803E  83 F8 05                  CMP EAX,0x5
00478041  0F 87 65 04 00 00         JA 0x004784ac
switchD_00478047::switchD:
00478047  FF 24 85 DC 84 47 00      JMP dword ptr [EAX*0x4 + 0x4784dc]
switchD_00478047::caseD_0:
0047804E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00478051  8B CE                     MOV ECX,ESI
00478053  50                        PUSH EAX
00478054  E8 97 BD F8 FF            CALL 0x00403df0
00478059  5F                        POP EDI
0047805A  5E                        POP ESI
0047805B  8B E5                     MOV ESP,EBP
0047805D  5D                        POP EBP
0047805E  C2 04 00                  RET 0x4
switchD_00478047::caseD_2:
00478061  8B 86 15 06 00 00         MOV EAX,dword ptr [ESI + 0x615]
00478067  85 C0                     TEST EAX,EAX
00478069  0F 84 A7 01 00 00         JZ 0x00478216
0047806F  83 F8 01                  CMP EAX,0x1
00478072  0F 84 9E 01 00 00         JZ 0x00478216
00478078  83 F8 02                  CMP EAX,0x2
0047807B  0F 84 95 01 00 00         JZ 0x00478216
00478081  83 F8 03                  CMP EAX,0x3
00478084  BF 04 00 00 00            MOV EDI,0x4
00478089  75 53                     JNZ 0x004780de
0047808B  66 8B 86 07 06 00 00      MOV AX,word ptr [ESI + 0x607]
00478092  66 8B 8E 05 06 00 00      MOV CX,word ptr [ESI + 0x605]
00478099  66 69 C0 C8 00            IMUL AX,AX,0xc8
0047809E  66 69 C9 C9 00            IMUL CX,CX,0xc9
004780A3  83 C0 64                  ADD EAX,0x64
004780A6  8B 16                     MOV EDX,dword ptr [ESI]
004780A8  50                        PUSH EAX
004780A9  66 8B 86 03 06 00 00      MOV AX,word ptr [ESI + 0x603]
004780B0  66 69 C0 C9 00            IMUL AX,AX,0xc9
004780B5  83 C1 64                  ADD ECX,0x64
004780B8  83 C0 64                  ADD EAX,0x64
004780BB  51                        PUSH ECX
004780BC  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
004780C0  50                        PUSH EAX
004780C1  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
004780C5  51                        PUSH ECX
004780C6  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
004780CA  50                        PUSH EAX
004780CB  51                        PUSH ECX
004780CC  8B CE                     MOV ECX,ESI
004780CE  FF 52 10                  CALL dword ptr [EDX + 0x10]
004780D1  66 89 86 0F 06 00 00      MOV word ptr [ESI + 0x60f],AX
004780D8  89 BE 15 06 00 00         MOV dword ptr [ESI + 0x615],EDI
LAB_004780de:
004780DE  39 BE 15 06 00 00         CMP dword ptr [ESI + 0x615],EDI
004780E4  75 63                     JNZ 0x00478149
004780E6  66 8B 96 0F 06 00 00      MOV DX,word ptr [ESI + 0x60f]
004780ED  8B CE                     MOV ECX,ESI
004780EF  52                        PUSH EDX
004780F0  E8 BD AF F8 FF            CALL 0x004030b2
004780F5  50                        PUSH EAX
004780F6  8B CE                     MOV ECX,ESI
004780F8  E8 FF A1 F8 FF            CALL 0x004022fc
004780FD  83 F8 FF                  CMP EAX,-0x1
00478100  74 13                     JZ 0x00478115
00478102  85 C0                     TEST EAX,EAX
00478104  75 43                     JNZ 0x00478149
00478106  C7 86 15 06 00 00 05 00 00 00  MOV dword ptr [ESI + 0x615],0x5
00478110  E9 5E 02 00 00            JMP 0x00478373
LAB_00478115:
00478115  68 1C B3 7A 00            PUSH 0x7ab31c
0047811A  68 CC 4C 7A 00            PUSH 0x7a4ccc
0047811F  6A 00                     PUSH 0x0
00478121  6A 00                     PUSH 0x0
00478123  68 36 33 00 00            PUSH 0x3336
00478128  68 3C 9D 7A 00            PUSH 0x7a9d3c
0047812D  E8 9E 53 23 00            CALL 0x006ad4d0
00478132  83 C4 18                  ADD ESP,0x18
00478135  85 C0                     TEST EAX,EAX
00478137  0F 84 94 03 00 00         JZ 0x004784d1
0047813D  CC                        INT3
LAB_00478149:
00478149  8B 86 15 06 00 00         MOV EAX,dword ptr [ESI + 0x615]
0047814F  BF 06 00 00 00            MOV EDI,0x6
00478154  83 F8 05                  CMP EAX,0x5
00478157  75 50                     JNZ 0x004781a9
00478159  8A 4E 61                  MOV CL,byte ptr [ESI + 0x61]
0047815C  66 8B 96 07 06 00 00      MOV DX,word ptr [ESI + 0x607]
00478163  66 8B 86 05 06 00 00      MOV AX,word ptr [ESI + 0x605]
0047816A  51                        PUSH ECX
0047816B  66 8B 8E 03 06 00 00      MOV CX,word ptr [ESI + 0x603]
00478172  66 69 D2 C8 00            IMUL DX,DX,0xc8
00478177  66 69 C0 C9 00            IMUL AX,AX,0xc9
0047817C  66 69 C9 C9 00            IMUL CX,CX,0xc9
00478181  83 C2 64                  ADD EDX,0x64
00478184  83 C0 64                  ADD EAX,0x64
00478187  52                        PUSH EDX
00478188  66 8B 56 45               MOV DX,word ptr [ESI + 0x45]
0047818C  83 C1 64                  ADD ECX,0x64
0047818F  50                        PUSH EAX
00478190  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
00478194  51                        PUSH ECX
00478195  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
00478199  52                        PUSH EDX
0047819A  50                        PUSH EAX
0047819B  51                        PUSH ECX
0047819C  8B CE                     MOV ECX,ESI
0047819E  E8 B2 A2 F8 FF            CALL 0x00402455
004781A3  89 BE 15 06 00 00         MOV dword ptr [ESI + 0x615],EDI
LAB_004781a9:
004781A9  39 BE 15 06 00 00         CMP dword ptr [ESI + 0x615],EDI
004781AF  0F 85 F9 00 00 00         JNZ 0x004782ae
004781B5  8D 55 08                  LEA EDX,[EBP + 0x8]
004781B8  8D 45 FC                  LEA EAX,[EBP + -0x4]
004781BB  52                        PUSH EDX
004781BC  50                        PUSH EAX
004781BD  8B CE                     MOV ECX,ESI
004781BF  E8 83 A6 F8 FF            CALL 0x00402847
004781C4  83 F8 FF                  CMP EAX,-0x1
004781C7  74 1E                     JZ 0x004781e7
004781C9  85 C0                     TEST EAX,EAX
004781CB  0F 85 DD 00 00 00         JNZ 0x004782ae
004781D1  8B 16                     MOV EDX,dword ptr [ESI]
004781D3  8B CE                     MOV ECX,ESI
004781D5  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
004781DB  F7 D8                     NEG EAX
004781DD  5F                        POP EDI
004781DE  5E                        POP ESI
004781DF  1B C0                     SBB EAX,EAX
004781E1  8B E5                     MOV ESP,EBP
004781E3  5D                        POP EBP
004781E4  C2 04 00                  RET 0x4
LAB_004781e7:
004781E7  68 EC B2 7A 00            PUSH 0x7ab2ec
004781EC  68 CC 4C 7A 00            PUSH 0x7a4ccc
004781F1  6A 00                     PUSH 0x0
004781F3  6A 00                     PUSH 0x0
004781F5  68 4B 33 00 00            PUSH 0x334b
004781FA  68 3C 9D 7A 00            PUSH 0x7a9d3c
004781FF  E8 CC 52 23 00            CALL 0x006ad4d0
00478204  83 C4 18                  ADD ESP,0x18
00478207  85 C0                     TEST EAX,EAX
00478209  74 01                     JZ 0x0047820c
0047820B  CC                        INT3
LAB_0047820c:
0047820C  68 4C 33 00 00            PUSH 0x334c
00478211  E9 74 02 00 00            JMP 0x0047848a
switchD_00478047::caseD_1:
00478216  5F                        POP EDI
00478217  33 C0                     XOR EAX,EAX
00478219  5E                        POP ESI
0047821A  8B E5                     MOV ESP,EBP
0047821C  5D                        POP EBP
0047821D  C2 04 00                  RET 0x4
switchD_00478047::caseD_3:
00478220  66 8B 86 FD 05 00 00      MOV AX,word ptr [ESI + 0x5fd]
00478227  8A 8E FC 05 00 00         MOV CL,byte ptr [ESI + 0x5fc]
0047822D  6A 01                     PUSH 0x1
0047822F  50                        PUSH EAX
00478230  51                        PUSH ECX
00478231  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00478237  E8 7E A6 F8 FF            CALL 0x004028ba
0047823C  8B F8                     MOV EDI,EAX
0047823E  85 FF                     TEST EDI,EDI
00478240  74 26                     JZ 0x00478268
00478242  8B 57 18                  MOV EDX,dword ptr [EDI + 0x18]
00478245  8B 86 FF 05 00 00         MOV EAX,dword ptr [ESI + 0x5ff]
0047824B  3B D0                     CMP EDX,EAX
0047824D  75 19                     JNZ 0x00478268
0047824F  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
00478252  8B 07                     MOV EAX,dword ptr [EDI]
00478254  51                        PUSH ECX
00478255  8B CF                     MOV ECX,EDI
00478257  FF 90 08 01 00 00         CALL dword ptr [EAX + 0x108]
0047825D  85 C0                     TEST EAX,EAX
0047825F  74 07                     JZ 0x00478268
00478261  8B CF                     MOV ECX,EDI
00478263  E8 B6 D8 F8 FF            CALL 0x00405b1e
LAB_00478268:
00478268  0F BF 86 09 06 00 00      MOVSX EAX,word ptr [ESI + 0x609]
0047826F  40                        INC EAX
00478270  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00478273  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
00478276  0F BF 4E 41               MOVSX ECX,word ptr [ESI + 0x41]
0047827A  8D 04 D0                  LEA EAX,[EAX + EDX*0x8]
0047827D  3B C8                     CMP ECX,EAX
0047827F  75 48                     JNZ 0x004782c9
00478281  0F BF 86 0B 06 00 00      MOVSX EAX,word ptr [ESI + 0x60b]
00478288  40                        INC EAX
00478289  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0047828C  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
0047828F  0F BF 4E 43               MOVSX ECX,word ptr [ESI + 0x43]
00478293  8D 04 D0                  LEA EAX,[EAX + EDX*0x8]
00478296  3B C8                     CMP ECX,EAX
00478298  75 2F                     JNZ 0x004782c9
0047829A  C7 86 11 06 00 00 04 00 00 00  MOV dword ptr [ESI + 0x611],0x4
004782A4  C7 86 15 06 00 00 00 00 00 00  MOV dword ptr [ESI + 0x615],0x0
LAB_004782ae:
004782AE  8B 16                     MOV EDX,dword ptr [ESI]
004782B0  8B CE                     MOV ECX,ESI
004782B2  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
004782B8  F7 D8                     NEG EAX
004782BA  1B C0                     SBB EAX,EAX
004782BC  5F                        POP EDI
004782BD  24 FD                     AND AL,0xfd
004782BF  5E                        POP ESI
004782C0  83 C0 02                  ADD EAX,0x2
004782C3  8B E5                     MOV ESP,EBP
004782C5  5D                        POP EBP
004782C6  C2 04 00                  RET 0x4
LAB_004782c9:
004782C9  8B 06                     MOV EAX,dword ptr [ESI]
004782CB  8B CE                     MOV ECX,ESI
004782CD  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
004782D3  F7 D8                     NEG EAX
004782D5  5F                        POP EDI
004782D6  5E                        POP ESI
004782D7  1B C0                     SBB EAX,EAX
004782D9  8B E5                     MOV ESP,EBP
004782DB  5D                        POP EBP
004782DC  C2 04 00                  RET 0x4
switchD_00478047::caseD_4:
004782DF  8B 86 15 06 00 00         MOV EAX,dword ptr [ESI + 0x615]
004782E5  BF 01 00 00 00            MOV EDI,0x1
004782EA  85 C0                     TEST EAX,EAX
004782EC  75 53                     JNZ 0x00478341
004782EE  66 8B 86 07 06 00 00      MOV AX,word ptr [ESI + 0x607]
004782F5  66 8B 8E 05 06 00 00      MOV CX,word ptr [ESI + 0x605]
004782FC  66 69 C0 C8 00            IMUL AX,AX,0xc8
00478301  66 69 C9 C9 00            IMUL CX,CX,0xc9
00478306  83 C0 64                  ADD EAX,0x64
00478309  8B 16                     MOV EDX,dword ptr [ESI]
0047830B  50                        PUSH EAX
0047830C  66 8B 86 03 06 00 00      MOV AX,word ptr [ESI + 0x603]
00478313  66 69 C0 C9 00            IMUL AX,AX,0xc9
00478318  83 C1 64                  ADD ECX,0x64
0047831B  83 C0 64                  ADD EAX,0x64
0047831E  51                        PUSH ECX
0047831F  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
00478323  50                        PUSH EAX
00478324  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
00478328  51                        PUSH ECX
00478329  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
0047832D  50                        PUSH EAX
0047832E  51                        PUSH ECX
0047832F  8B CE                     MOV ECX,ESI
00478331  FF 52 10                  CALL dword ptr [EDX + 0x10]
00478334  66 89 86 0F 06 00 00      MOV word ptr [ESI + 0x60f],AX
0047833B  89 BE 15 06 00 00         MOV dword ptr [ESI + 0x615],EDI
LAB_00478341:
00478341  39 BE 15 06 00 00         CMP dword ptr [ESI + 0x615],EDI
00478347  75 79                     JNZ 0x004783c2
00478349  66 8B 96 0F 06 00 00      MOV DX,word ptr [ESI + 0x60f]
00478350  8B CE                     MOV ECX,ESI
00478352  52                        PUSH EDX
00478353  E8 5A AD F8 FF            CALL 0x004030b2
00478358  50                        PUSH EAX
00478359  8B CE                     MOV ECX,ESI
0047835B  E8 9C 9F F8 FF            CALL 0x004022fc
00478360  83 F8 FF                  CMP EAX,-0x1
00478363  74 29                     JZ 0x0047838e
00478365  85 C0                     TEST EAX,EAX
00478367  75 59                     JNZ 0x004783c2
00478369  C7 86 15 06 00 00 02 00 00 00  MOV dword ptr [ESI + 0x615],0x2
LAB_00478373:
00478373  8B 06                     MOV EAX,dword ptr [ESI]
00478375  8B CE                     MOV ECX,ESI
00478377  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
0047837D  F7 D8                     NEG EAX
0047837F  1B C0                     SBB EAX,EAX
00478381  5F                        POP EDI
00478382  24 FD                     AND AL,0xfd
00478384  5E                        POP ESI
00478385  83 C0 02                  ADD EAX,0x2
00478388  8B E5                     MOV ESP,EBP
0047838A  5D                        POP EBP
0047838B  C2 04 00                  RET 0x4
LAB_0047838e:
0047838E  68 C0 B2 7A 00            PUSH 0x7ab2c0
00478393  68 CC 4C 7A 00            PUSH 0x7a4ccc
00478398  6A 00                     PUSH 0x0
0047839A  6A 00                     PUSH 0x0
0047839C  68 73 33 00 00            PUSH 0x3373
004783A1  68 3C 9D 7A 00            PUSH 0x7a9d3c
004783A6  E8 25 51 23 00            CALL 0x006ad4d0
004783AB  83 C4 18                  ADD ESP,0x18
004783AE  85 C0                     TEST EAX,EAX
004783B0  0F 84 1B 01 00 00         JZ 0x004784d1
004783B6  CC                        INT3
LAB_004783c2:
004783C2  8B 86 15 06 00 00         MOV EAX,dword ptr [ESI + 0x615]
004783C8  BF 03 00 00 00            MOV EDI,0x3
004783CD  83 F8 02                  CMP EAX,0x2
004783D0  75 50                     JNZ 0x00478422
004783D2  8A 4E 61                  MOV CL,byte ptr [ESI + 0x61]
004783D5  66 8B 96 07 06 00 00      MOV DX,word ptr [ESI + 0x607]
004783DC  66 8B 86 05 06 00 00      MOV AX,word ptr [ESI + 0x605]
004783E3  51                        PUSH ECX
004783E4  66 8B 8E 03 06 00 00      MOV CX,word ptr [ESI + 0x603]
004783EB  66 69 D2 C8 00            IMUL DX,DX,0xc8
004783F0  66 69 C0 C9 00            IMUL AX,AX,0xc9
004783F5  66 69 C9 C9 00            IMUL CX,CX,0xc9
004783FA  83 C2 64                  ADD EDX,0x64
004783FD  83 C0 64                  ADD EAX,0x64
00478400  52                        PUSH EDX
00478401  66 8B 56 45               MOV DX,word ptr [ESI + 0x45]
00478405  83 C1 64                  ADD ECX,0x64
00478408  50                        PUSH EAX
00478409  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
0047840D  51                        PUSH ECX
0047840E  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
00478412  52                        PUSH EDX
00478413  50                        PUSH EAX
00478414  51                        PUSH ECX
00478415  8B CE                     MOV ECX,ESI
00478417  E8 39 A0 F8 FF            CALL 0x00402455
0047841C  89 BE 15 06 00 00         MOV dword ptr [ESI + 0x615],EDI
LAB_00478422:
00478422  39 BE 15 06 00 00         CMP dword ptr [ESI + 0x615],EDI
00478428  0F 85 80 FE FF FF         JNZ 0x004782ae
0047842E  8D 55 08                  LEA EDX,[EBP + 0x8]
00478431  8D 45 FC                  LEA EAX,[EBP + -0x4]
00478434  52                        PUSH EDX
00478435  50                        PUSH EAX
00478436  8B CE                     MOV ECX,ESI
00478438  E8 0A A4 F8 FF            CALL 0x00402847
0047843D  83 F8 FF                  CMP EAX,-0x1
00478440  74 1E                     JZ 0x00478460
00478442  85 C0                     TEST EAX,EAX
00478444  0F 85 64 FE FF FF         JNZ 0x004782ae
0047844A  8B 16                     MOV EDX,dword ptr [ESI]
0047844C  8B CE                     MOV ECX,ESI
0047844E  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
00478454  F7 D8                     NEG EAX
00478456  5F                        POP EDI
00478457  5E                        POP ESI
00478458  1B C0                     SBB EAX,EAX
0047845A  8B E5                     MOV ESP,EBP
0047845C  5D                        POP EBP
0047845D  C2 04 00                  RET 0x4
LAB_00478460:
00478460  68 90 B2 7A 00            PUSH 0x7ab290
00478465  68 CC 4C 7A 00            PUSH 0x7a4ccc
0047846A  6A 00                     PUSH 0x0
0047846C  6A 00                     PUSH 0x0
0047846E  68 88 33 00 00            PUSH 0x3388
00478473  68 3C 9D 7A 00            PUSH 0x7a9d3c
00478478  E8 53 50 23 00            CALL 0x006ad4d0
0047847D  83 C4 18                  ADD ESP,0x18
00478480  85 C0                     TEST EAX,EAX
00478482  74 01                     JZ 0x00478485
00478484  CC                        INT3
LAB_00478485:
00478485  68 89 33 00 00            PUSH 0x3389
LAB_0047848a:
0047848A  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0047848F  68 3C 9D 7A 00            PUSH 0x7a9d3c
00478494  50                        PUSH EAX
00478495  68 FF FF 00 00            PUSH 0xffff
0047849A  E8 A1 D9 22 00            CALL 0x006a5e40
0047849F  5F                        POP EDI
004784A0  B8 FF FF 00 00            MOV EAX,0xffff
004784A5  5E                        POP ESI
004784A6  8B E5                     MOV ESP,EBP
004784A8  5D                        POP EBP
004784A9  C2 04 00                  RET 0x4
switchD_00478047::default:
004784AC  68 60 B2 7A 00            PUSH 0x7ab260
004784B1  68 CC 4C 7A 00            PUSH 0x7a4ccc
004784B6  6A 00                     PUSH 0x0
004784B8  6A 00                     PUSH 0x0
004784BA  68 96 33 00 00            PUSH 0x3396
004784BF  68 3C 9D 7A 00            PUSH 0x7a9d3c
004784C4  E8 07 50 23 00            CALL 0x006ad4d0
004784C9  83 C4 18                  ADD ESP,0x18
004784CC  85 C0                     TEST EAX,EAX
004784CE  74 01                     JZ 0x004784d1
004784D0  CC                        INT3
LAB_004784d1:
004784D1  5F                        POP EDI
004784D2  83 C8 FF                  OR EAX,0xffffffff
004784D5  5E                        POP ESI
004784D6  8B E5                     MOV ESP,EBP
004784D8  5D                        POP EBP
004784D9  C2 04 00                  RET 0x4
