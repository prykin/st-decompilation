FUN_006051b0:
006051B0  55                        PUSH EBP
006051B1  8B EC                     MOV EBP,ESP
006051B3  83 EC 64                  SUB ESP,0x64
006051B6  8B 81 E9 01 00 00         MOV EAX,dword ptr [ECX + 0x1e9]
006051BC  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
006051BF  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006051C2  53                        PUSH EBX
006051C3  8B 14 85 98 ED 7C 00      MOV EDX,dword ptr [EAX*0x4 + 0x7ced98]
006051CA  56                        PUSH ESI
006051CB  85 C9                     TEST ECX,ECX
006051CD  8B 0C 85 70 ED 7C 00      MOV ECX,dword ptr [EAX*0x4 + 0x7ced70]
006051D4  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006051D7  57                        PUSH EDI
006051D8  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006051DB  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006051E0  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006051E3  8D 55 A0                  LEA EDX,[EBP + -0x60]
006051E6  8D 4D 9C                  LEA ECX,[EBP + -0x64]
006051E9  6A 00                     PUSH 0x0
006051EB  52                        PUSH EDX
006051EC  C7 45 E0 00 00 00 00      MOV dword ptr [EBP + -0x20],0x0
006051F3  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
006051F6  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006051FC  E8 EF 85 12 00            CALL 0x0072d7f0
00605201  8B F0                     MOV ESI,EAX
00605203  83 C4 08                  ADD ESP,0x8
00605206  85 F6                     TEST ESI,ESI
00605208  0F 85 E6 03 00 00         JNZ 0x006055f4
0060520E  8A 45 10                  MOV AL,byte ptr [EBP + 0x10]
00605211  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
00605214  84 C0                     TEST AL,AL
00605216  0F 84 96 00 00 00         JZ 0x006052b2
0060521C  8B 8E AF 02 00 00         MOV ECX,dword ptr [ESI + 0x2af]
00605222  85 C9                     TEST ECX,ECX
00605224  0F 84 88 00 00 00         JZ 0x006052b2
0060522A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0060522D  8B 15 74 67 80 00         MOV EDX,dword ptr [0x00806774]
00605233  6A 1D                     PUSH 0x1d
00605235  8B 04 85 C0 ED 7C 00      MOV EAX,dword ptr [EAX*0x4 + 0x7cedc0]
0060523C  50                        PUSH EAX
0060523D  52                        PUSH EDX
0060523E  6A 0F                     PUSH 0xf
00605240  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00605243  E8 3B EF DF FF            CALL 0x00404183
00605248  85 C0                     TEST EAX,EAX
0060524A  0F 85 E3 03 00 00         JNZ 0x00605633
00605250  8B 86 9F 02 00 00         MOV EAX,dword ptr [ESI + 0x29f]
00605256  8B 8E AF 02 00 00         MOV ECX,dword ptr [ESI + 0x2af]
0060525C  50                        PUSH EAX
0060525D  6A 0F                     PUSH 0xf
0060525F  E8 00 BE DF FF            CALL 0x00401064
00605264  8B 8E AF 02 00 00         MOV ECX,dword ptr [ESI + 0x2af]
0060526A  6A 0F                     PUSH 0xf
0060526C  E8 35 08 E0 FF            CALL 0x00405aa6
00605271  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00605277  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
0060527D  8B 8E AF 02 00 00         MOV ECX,dword ptr [ESI + 0x2af]
00605283  52                        PUSH EDX
00605284  6A 0F                     PUSH 0xf
00605286  E8 B5 FF DF FF            CALL 0x00405240
0060528B  8B 8E AF 02 00 00         MOV ECX,dword ptr [ESI + 0x2af]
00605291  6A 0F                     PUSH 0xf
00605293  E8 14 D0 DF FF            CALL 0x004022ac
00605298  89 86 A3 02 00 00         MOV dword ptr [ESI + 0x2a3],EAX
0060529E  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
006052A1  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006052A6  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006052A9  5F                        POP EDI
006052AA  5E                        POP ESI
006052AB  5B                        POP EBX
006052AC  8B E5                     MOV ESP,EBP
006052AE  5D                        POP EBP
006052AF  C2 0C 00                  RET 0xc
LAB_006052b2:
006052B2  8B 86 AF 02 00 00         MOV EAX,dword ptr [ESI + 0x2af]
006052B8  85 C0                     TEST EAX,EAX
006052BA  75 1F                     JNZ 0x006052db
006052BC  6A 40                     PUSH 0x40
006052BE  E8 6D 92 12 00            CALL 0x0072e530
006052C3  83 C4 04                  ADD ESP,0x4
006052C6  85 C0                     TEST EAX,EAX
006052C8  74 09                     JZ 0x006052d3
006052CA  8B C8                     MOV ECX,EAX
006052CC  E8 45 C0 DF FF            CALL 0x00401316
006052D1  EB 02                     JMP 0x006052d5
LAB_006052d3:
006052D3  33 C0                     XOR EAX,EAX
LAB_006052d5:
006052D5  89 86 AF 02 00 00         MOV dword ptr [ESI + 0x2af],EAX
LAB_006052db:
006052DB  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006052DE  6A 11                     PUSH 0x11
006052E0  8A 88 E8 ED 7C 00         MOV CL,byte ptr [EAX + 0x7cede8]
006052E6  84 C9                     TEST CL,CL
006052E8  75 50                     JNZ 0x0060533a
006052EA  8B 0D CC 73 80 00         MOV ECX,dword ptr [0x008073cc]
006052F0  68 8C 00 00 00            PUSH 0x8c
006052F5  68 B4 00 00 00            PUSH 0xb4
006052FA  6A 00                     PUSH 0x0
006052FC  6A 45                     PUSH 0x45
006052FE  6A 5A                     PUSH 0x5a
00605300  51                        PUSH ECX
00605301  8B 8E AF 02 00 00         MOV ECX,dword ptr [ESI + 0x2af]
00605307  E8 6F 00 E0 FF            CALL 0x0040537b
0060530C  85 C0                     TEST EAX,EAX
0060530E  0F 84 91 00 00 00         JZ 0x006053a5
00605314  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0060531A  68 6A 03 00 00            PUSH 0x36a
0060531F  68 30 F6 7C 00            PUSH 0x7cf630
00605324  52                        PUSH EDX
00605325  6A FF                     PUSH -0x1
00605327  E8 14 0B 0A 00            CALL 0x006a5e40
0060532C  B8 FF FF 00 00            MOV EAX,0xffff
00605331  5F                        POP EDI
00605332  5E                        POP ESI
00605333  5B                        POP EBX
00605334  8B E5                     MOV ESP,EBP
00605336  5D                        POP EBP
00605337  C2 0C 00                  RET 0xc
LAB_0060533a:
0060533A  A1 CC 73 80 00            MOV EAX,[0x008073cc]
0060533F  8B 8E AF 02 00 00         MOV ECX,dword ptr [ESI + 0x2af]
00605345  68 BE 00 00 00            PUSH 0xbe
0060534A  68 F0 00 00 00            PUSH 0xf0
0060534F  6A 00                     PUSH 0x0
00605351  6A 56                     PUSH 0x56
00605353  6A 78                     PUSH 0x78
00605355  50                        PUSH EAX
00605356  E8 20 00 E0 FF            CALL 0x0040537b
0060535B  85 C0                     TEST EAX,EAX
0060535D  74 26                     JZ 0x00605385
0060535F  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00605365  68 70 03 00 00            PUSH 0x370
0060536A  68 30 F6 7C 00            PUSH 0x7cf630
0060536F  51                        PUSH ECX
00605370  6A FF                     PUSH -0x1
00605372  E8 C9 0A 0A 00            CALL 0x006a5e40
00605377  B8 FF FF 00 00            MOV EAX,0xffff
0060537C  5F                        POP EDI
0060537D  5E                        POP ESI
0060537E  5B                        POP EBX
0060537F  8B E5                     MOV ESP,EBP
00605381  5D                        POP EBP
00605382  C2 0C 00                  RET 0xc
LAB_00605385:
00605385  8B 96 AF 02 00 00         MOV EDX,dword ptr [ESI + 0x2af]
0060538B  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00605391  68 CD CC DC 40            PUSH 0x40dccccd
00605396  6A 00                     PUSH 0x0
00605398  8B 42 18                  MOV EAX,dword ptr [EDX + 0x18]
0060539B  6A 00                     PUSH 0x0
0060539D  6A 00                     PUSH 0x0
0060539F  50                        PUSH EAX
006053A0  E8 6B 3E 0E 00            CALL 0x006e9210
LAB_006053a5:
006053A5  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006053A8  8B 15 74 67 80 00         MOV EDX,dword ptr [0x00806774]
006053AE  6A 1D                     PUSH 0x1d
006053B0  51                        PUSH ECX
006053B1  8B 8E AF 02 00 00         MOV ECX,dword ptr [ESI + 0x2af]
006053B7  52                        PUSH EDX
006053B8  6A 0D                     PUSH 0xd
006053BA  E8 C4 ED DF FF            CALL 0x00404183
006053BF  85 C0                     TEST EAX,EAX
006053C1  0F 85 6C 02 00 00         JNZ 0x00605633
006053C7  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006053CA  8B 0D 74 67 80 00         MOV ECX,dword ptr [0x00806774]
006053D0  6A 1D                     PUSH 0x1d
006053D2  50                        PUSH EAX
006053D3  51                        PUSH ECX
006053D4  8B 8E AF 02 00 00         MOV ECX,dword ptr [ESI + 0x2af]
006053DA  6A 0E                     PUSH 0xe
006053DC  E8 A2 ED DF FF            CALL 0x00404183
006053E1  85 C0                     TEST EAX,EAX
006053E3  0F 85 4A 02 00 00         JNZ 0x00605633
006053E9  8B 96 96 02 00 00         MOV EDX,dword ptr [ESI + 0x296]
006053EF  8B 8E AF 02 00 00         MOV ECX,dword ptr [ESI + 0x2af]
006053F5  52                        PUSH EDX
006053F6  6A 0D                     PUSH 0xd
006053F8  E8 67 BC DF FF            CALL 0x00401064
006053FD  DB 86 92 02 00 00         FILD dword ptr [ESI + 0x292]
00605403  51                        PUSH ECX
00605404  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0060540A  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00605410  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
00605416  D9 1C 24                  FSTP float ptr [ESP]
00605419  DB 86 8E 02 00 00         FILD dword ptr [ESI + 0x28e]
0060541F  51                        PUSH ECX
00605420  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00605426  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0060542C  D9 1C 24                  FSTP float ptr [ESP]
0060542F  DB 86 8A 02 00 00         FILD dword ptr [ESI + 0x28a]
00605435  51                        PUSH ECX
00605436  8B 8E AF 02 00 00         MOV ECX,dword ptr [ESI + 0x2af]
0060543C  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00605442  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00605448  D9 1C 24                  FSTP float ptr [ESP]
0060544B  E8 89 F1 DF FF            CALL 0x004045d9
00605450  8B 8E AF 02 00 00         MOV ECX,dword ptr [ESI + 0x2af]
00605456  6A 0D                     PUSH 0xd
00605458  E8 49 06 E0 FF            CALL 0x00405aa6
0060545D  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00605462  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
00605468  51                        PUSH ECX
00605469  8B 8E AF 02 00 00         MOV ECX,dword ptr [ESI + 0x2af]
0060546F  6A 0D                     PUSH 0xd
00605471  E8 CA FD DF FF            CALL 0x00405240
00605476  C7 86 86 02 00 00 01 00 00 00  MOV dword ptr [ESI + 0x286],0x1
00605480  8B 3D 88 2A 80 00         MOV EDI,dword ptr [0x00802a88]
00605486  85 FF                     TEST EDI,EDI
00605488  0F 84 52 01 00 00         JZ 0x006055e0
0060548E  8B 8E 92 02 00 00         MOV ECX,dword ptr [ESI + 0x292]
00605494  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00605499  85 C9                     TEST ECX,ECX
0060549B  7C 14                     JL 0x006054b1
0060549D  F7 E9                     IMUL ECX
0060549F  C1 FA 06                  SAR EDX,0x6
006054A2  8B C2                     MOV EAX,EDX
006054A4  C1 E8 1F                  SHR EAX,0x1f
006054A7  03 D0                     ADD EDX,EAX
006054A9  0F BF CA                  MOVSX ECX,DX
006054AC  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
006054AF  EB 13                     JMP 0x006054c4
LAB_006054b1:
006054B1  F7 E9                     IMUL ECX
006054B3  C1 FA 06                  SAR EDX,0x6
006054B6  8B C2                     MOV EAX,EDX
006054B8  C1 E8 1F                  SHR EAX,0x1f
006054BB  03 D0                     ADD EDX,EAX
006054BD  0F BF C2                  MOVSX EAX,DX
006054C0  48                        DEC EAX
006054C1  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_006054c4:
006054C4  8B 8E 8E 02 00 00         MOV ECX,dword ptr [ESI + 0x28e]
006054CA  B8 79 19 8C 02            MOV EAX,0x28c1979
006054CF  85 C9                     TEST ECX,ECX
006054D1  7C 10                     JL 0x006054e3
006054D3  F7 E9                     IMUL ECX
006054D5  D1 FA                     SAR EDX,0x1
006054D7  8B CA                     MOV ECX,EDX
006054D9  C1 E9 1F                  SHR ECX,0x1f
006054DC  03 D1                     ADD EDX,ECX
006054DE  0F BF DA                  MOVSX EBX,DX
006054E1  EB 0F                     JMP 0x006054f2
LAB_006054e3:
006054E3  F7 E9                     IMUL ECX
006054E5  D1 FA                     SAR EDX,0x1
006054E7  8B C2                     MOV EAX,EDX
006054E9  C1 E8 1F                  SHR EAX,0x1f
006054EC  03 D0                     ADD EDX,EAX
006054EE  0F BF DA                  MOVSX EBX,DX
006054F1  4B                        DEC EBX
LAB_006054f2:
006054F2  8B 8E 8A 02 00 00         MOV ECX,dword ptr [ESI + 0x28a]
006054F8  B8 79 19 8C 02            MOV EAX,0x28c1979
006054FD  85 C9                     TEST ECX,ECX
006054FF  7C 10                     JL 0x00605511
00605501  F7 E9                     IMUL ECX
00605503  D1 FA                     SAR EDX,0x1
00605505  8B CA                     MOV ECX,EDX
00605507  C1 E9 1F                  SHR ECX,0x1f
0060550A  03 D1                     ADD EDX,ECX
0060550C  0F BF C2                  MOVSX EAX,DX
0060550F  EB 0F                     JMP 0x00605520
LAB_00605511:
00605511  F7 E9                     IMUL ECX
00605513  D1 FA                     SAR EDX,0x1
00605515  8B C2                     MOV EAX,EDX
00605517  C1 E8 1F                  SHR EAX,0x1f
0060551A  03 D0                     ADD EDX,EAX
0060551C  0F BF C2                  MOVSX EAX,DX
0060551F  48                        DEC EAX
LAB_00605520:
00605520  80 3D 4D 87 80 00 FF      CMP byte ptr [0x0080874d],0xff
00605527  0F 84 94 00 00 00         JZ 0x006055c1
0060552D  8B 8F F8 00 00 00         MOV ECX,dword ptr [EDI + 0xf8]
00605533  85 C9                     TEST ECX,ECX
00605535  0F 84 86 00 00 00         JZ 0x006055c1
0060553B  8D 4D E4                  LEA ECX,[EBP + -0x1c]
0060553E  8D 55 E8                  LEA EDX,[EBP + -0x18]
00605541  51                        PUSH ECX
00605542  52                        PUSH EDX
00605543  53                        PUSH EBX
00605544  50                        PUSH EAX
00605545  8B 87 0C 01 00 00         MOV EAX,dword ptr [EDI + 0x10c]
0060554B  8B CF                     MOV ECX,EDI
0060554D  50                        PUSH EAX
0060554E  E8 00 EA DF FF            CALL 0x00403f53
00605553  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00605556  85 C9                     TEST ECX,ECX
00605558  7C 67                     JL 0x006055c1
0060555A  83 F9 05                  CMP ECX,0x5
0060555D  7D 62                     JGE 0x006055c1
0060555F  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00605562  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
00605565  85 D2                     TEST EDX,EDX
00605567  7C 1E                     JL 0x00605587
00605569  3B 57 30                  CMP EDX,dword ptr [EDI + 0x30]
0060556C  7D 19                     JGE 0x00605587
0060556E  8B 04 8D D0 AE 79 00      MOV EAX,dword ptr [ECX*0x4 + 0x79aed0]
00605575  03 C3                     ADD EAX,EBX
00605577  85 C0                     TEST EAX,EAX
00605579  7C 0C                     JL 0x00605587
0060557B  3B 47 34                  CMP EAX,dword ptr [EDI + 0x34]
0060557E  7D 07                     JGE 0x00605587
00605580  B8 01 00 00 00            MOV EAX,0x1
00605585  EB 02                     JMP 0x00605589
LAB_00605587:
00605587  33 C0                     XOR EAX,EAX
LAB_00605589:
00605589  85 C0                     TEST EAX,EAX
0060558B  74 26                     JZ 0x006055b3
0060558D  8B 47 4C                  MOV EAX,dword ptr [EDI + 0x4c]
00605590  85 C0                     TEST EAX,EAX
00605592  74 1F                     JZ 0x006055b3
00605594  8B 0C 8D D0 AE 79 00      MOV ECX,dword ptr [ECX*0x4 + 0x79aed0]
0060559B  03 CB                     ADD ECX,EBX
0060559D  0F AF 4F 30               IMUL ECX,dword ptr [EDI + 0x30]
006055A1  03 C8                     ADD ECX,EAX
006055A3  33 C0                     XOR EAX,EAX
006055A5  8A 04 11                  MOV AL,byte ptr [ECX + EDX*0x1]
006055A8  33 D2                     XOR EDX,EDX
006055AA  85 C0                     TEST EAX,EAX
006055AC  0F 95 C2                  SETNZ DL
006055AF  8B C2                     MOV EAX,EDX
006055B1  EB 13                     JMP 0x006055c6
LAB_006055b3:
006055B3  83 C8 FF                  OR EAX,0xffffffff
006055B6  33 D2                     XOR EDX,EDX
006055B8  85 C0                     TEST EAX,EAX
006055BA  0F 95 C2                  SETNZ DL
006055BD  8B C2                     MOV EAX,EDX
006055BF  EB 05                     JMP 0x006055c6
LAB_006055c1:
006055C1  B8 01 00 00 00            MOV EAX,0x1
LAB_006055c6:
006055C6  83 F8 01                  CMP EAX,0x1
006055C9  74 15                     JZ 0x006055e0
006055CB  8B 8E AF 02 00 00         MOV ECX,dword ptr [ESI + 0x2af]
006055D1  E8 39 E7 DF FF            CALL 0x00403d0f
006055D6  C7 86 86 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x286],0x0
LAB_006055e0:
006055E0  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
006055E3  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006055E8  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006055EB  5F                        POP EDI
006055EC  5E                        POP ESI
006055ED  5B                        POP EBX
006055EE  8B E5                     MOV ESP,EBP
006055F0  5D                        POP EBP
006055F1  C2 0C 00                  RET 0xc
LAB_006055f4:
006055F4  8B 4D 9C                  MOV ECX,dword ptr [EBP + -0x64]
006055F7  68 B0 F6 7C 00            PUSH 0x7cf6b0
006055FC  68 CC 4C 7A 00            PUSH 0x7a4ccc
00605601  56                        PUSH ESI
00605602  6A 00                     PUSH 0x0
00605604  68 8C 03 00 00            PUSH 0x38c
00605609  68 30 F6 7C 00            PUSH 0x7cf630
0060560E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00605614  E8 B7 7E 0A 00            CALL 0x006ad4d0
00605619  83 C4 18                  ADD ESP,0x18
0060561C  85 C0                     TEST EAX,EAX
0060561E  74 01                     JZ 0x00605621
00605620  CC                        INT3
LAB_00605621:
00605621  68 8E 03 00 00            PUSH 0x38e
00605626  68 30 F6 7C 00            PUSH 0x7cf630
0060562B  6A 00                     PUSH 0x0
0060562D  56                        PUSH ESI
0060562E  E8 0D 08 0A 00            CALL 0x006a5e40
LAB_00605633:
00605633  5F                        POP EDI
00605634  5E                        POP ESI
00605635  B8 FF FF 00 00            MOV EAX,0xffff
0060563A  5B                        POP EBX
0060563B  8B E5                     MOV ESP,EBP
0060563D  5D                        POP EBP
0060563E  C2 0C 00                  RET 0xc
