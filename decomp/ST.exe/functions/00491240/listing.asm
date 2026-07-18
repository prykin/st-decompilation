FUN_00491240:
00491240  55                        PUSH EBP
00491241  8B EC                     MOV EBP,ESP
00491243  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00491246  53                        PUSH EBX
00491247  56                        PUSH ESI
00491248  8B F1                     MOV ESI,ECX
0049124A  57                        PUSH EDI
0049124B  3B 86 A2 05 00 00         CMP EAX,dword ptr [ESI + 0x5a2]
00491251  74 30                     JZ 0x00491283
00491253  68 D0 BA 7A 00            PUSH 0x7abad0
00491258  68 CC 4C 7A 00            PUSH 0x7a4ccc
0049125D  6A 00                     PUSH 0x0
0049125F  6A 00                     PUSH 0x0
00491261  68 CB 4F 00 00            PUSH 0x4fcb
00491266  68 3C 9D 7A 00            PUSH 0x7a9d3c
0049126B  E8 60 C2 21 00            CALL 0x006ad4d0
00491270  83 C4 18                  ADD ESP,0x18
00491273  85 C0                     TEST EAX,EAX
00491275  0F 84 90 02 00 00         JZ 0x0049150b
0049127B  CC                        INT3
LAB_00491283:
00491283  66 8B 4D 10               MOV CX,word ptr [EBP + 0x10]
00491287  66 8B 55 18               MOV DX,word ptr [EBP + 0x18]
0049128B  66 8B 46 5F               MOV AX,word ptr [ESI + 0x5f]
0049128F  66 89 8E AC 05 00 00      MOV word ptr [ESI + 0x5ac],CX
00491296  66 8B 4D 14               MOV CX,word ptr [EBP + 0x14]
0049129A  66 8B 5D 0C               MOV BX,word ptr [EBP + 0xc]
0049129E  66 89 8E AE 05 00 00      MOV word ptr [ESI + 0x5ae],CX
004912A5  66 89 96 B0 05 00 00      MOV word ptr [ESI + 0x5b0],DX
004912AC  0F BF D0                  MOVSX EDX,AX
004912AF  0F BF C9                  MOVSX ECX,CX
004912B2  2B CA                     SUB ECX,EDX
004912B4  83 CF FF                  OR EDI,0xffffffff
004912B7  83 C1 04                  ADD ECX,0x4
004912BA  C7 86 C0 05 00 00 01 00 00 00  MOV dword ptr [ESI + 0x5c0],0x1
004912C4  83 F9 08                  CMP ECX,0x8
004912C7  66 89 9E AA 05 00 00      MOV word ptr [ESI + 0x5aa],BX
004912CE  0F 87 31 01 00 00         JA 0x00491405
switchD_004912d4::switchD:
004912D4  FF 24 8D 14 15 49 00      JMP dword ptr [ECX*0x4 + 0x491514]
switchD_004912d4::caseD_4:
004912DB  8D 50 01                  LEA EDX,[EAX + 0x1]
004912DE  8D 48 02                  LEA ECX,[EAX + 0x2]
004912E1  66 89 96 B2 05 00 00      MOV word ptr [ESI + 0x5b2],DX
004912E8  8D 50 03                  LEA EDX,[EAX + 0x3]
004912EB  83 C0 04                  ADD EAX,0x4
004912EE  66 89 8E B4 05 00 00      MOV word ptr [ESI + 0x5b4],CX
004912F5  66 89 96 B6 05 00 00      MOV word ptr [ESI + 0x5b6],DX
004912FC  66 89 86 B8 05 00 00      MOV word ptr [ESI + 0x5b8],AX
00491303  66 89 BE BA 05 00 00      MOV word ptr [ESI + 0x5ba],DI
0049130A  E9 36 01 00 00            JMP 0x00491445
switchD_004912d4::caseD_3:
0049130F  8D 48 01                  LEA ECX,[EAX + 0x1]
00491312  8D 50 02                  LEA EDX,[EAX + 0x2]
00491315  83 C0 03                  ADD EAX,0x3
00491318  66 89 8E B2 05 00 00      MOV word ptr [ESI + 0x5b2],CX
0049131F  66 89 96 B4 05 00 00      MOV word ptr [ESI + 0x5b4],DX
00491326  66 89 86 B6 05 00 00      MOV word ptr [ESI + 0x5b6],AX
0049132D  66 89 BE B8 05 00 00      MOV word ptr [ESI + 0x5b8],DI
00491334  E9 0C 01 00 00            JMP 0x00491445
switchD_004912d4::caseD_2:
00491339  8D 48 01                  LEA ECX,[EAX + 0x1]
0049133C  83 C0 02                  ADD EAX,0x2
0049133F  66 89 8E B2 05 00 00      MOV word ptr [ESI + 0x5b2],CX
00491346  66 89 86 B4 05 00 00      MOV word ptr [ESI + 0x5b4],AX
0049134D  66 89 BE B6 05 00 00      MOV word ptr [ESI + 0x5b6],DI
00491354  E9 EC 00 00 00            JMP 0x00491445
switchD_004912d4::caseD_1:
00491359  40                        INC EAX
0049135A  66 89 BE B4 05 00 00      MOV word ptr [ESI + 0x5b4],DI
00491361  66 89 86 B2 05 00 00      MOV word ptr [ESI + 0x5b2],AX
00491368  E9 D8 00 00 00            JMP 0x00491445
switchD_004912d4::caseD_0:
0049136D  66 89 BE B2 05 00 00      MOV word ptr [ESI + 0x5b2],DI
00491374  E9 CC 00 00 00            JMP 0x00491445
switchD_004912d4::caseD_ffffffff:
00491379  48                        DEC EAX
0049137A  66 89 BE B4 05 00 00      MOV word ptr [ESI + 0x5b4],DI
00491381  66 89 86 B2 05 00 00      MOV word ptr [ESI + 0x5b2],AX
00491388  E9 B8 00 00 00            JMP 0x00491445
switchD_004912d4::caseD_fffffffe:
0049138D  8D 50 FF                  LEA EDX,[EAX + -0x1]
00491390  83 C0 FE                  ADD EAX,-0x2
00491393  66 89 96 B2 05 00 00      MOV word ptr [ESI + 0x5b2],DX
0049139A  66 89 86 B4 05 00 00      MOV word ptr [ESI + 0x5b4],AX
004913A1  66 89 BE B6 05 00 00      MOV word ptr [ESI + 0x5b6],DI
004913A8  E9 98 00 00 00            JMP 0x00491445
switchD_004912d4::caseD_fffffffd:
004913AD  8D 48 FF                  LEA ECX,[EAX + -0x1]
004913B0  8D 50 FE                  LEA EDX,[EAX + -0x2]
004913B3  83 C0 FD                  ADD EAX,-0x3
004913B6  66 89 8E B2 05 00 00      MOV word ptr [ESI + 0x5b2],CX
004913BD  66 89 96 B4 05 00 00      MOV word ptr [ESI + 0x5b4],DX
004913C4  66 89 86 B6 05 00 00      MOV word ptr [ESI + 0x5b6],AX
004913CB  66 89 BE B8 05 00 00      MOV word ptr [ESI + 0x5b8],DI
004913D2  EB 71                     JMP 0x00491445
switchD_004912d4::caseD_fffffffc:
004913D4  8D 48 FF                  LEA ECX,[EAX + -0x1]
004913D7  8D 50 FE                  LEA EDX,[EAX + -0x2]
004913DA  66 89 8E B2 05 00 00      MOV word ptr [ESI + 0x5b2],CX
004913E1  8D 48 FD                  LEA ECX,[EAX + -0x3]
004913E4  83 C0 FC                  ADD EAX,-0x4
004913E7  66 89 96 B4 05 00 00      MOV word ptr [ESI + 0x5b4],DX
004913EE  66 89 8E B6 05 00 00      MOV word ptr [ESI + 0x5b6],CX
004913F5  66 89 86 B8 05 00 00      MOV word ptr [ESI + 0x5b8],AX
004913FC  66 89 BE BA 05 00 00      MOV word ptr [ESI + 0x5ba],DI
00491403  EB 40                     JMP 0x00491445
switchD_004912d4::default:
00491405  68 A4 BA 7A 00            PUSH 0x7abaa4
0049140A  68 CC 4C 7A 00            PUSH 0x7a4ccc
0049140F  6A 00                     PUSH 0x0
00491411  6A 00                     PUSH 0x0
00491413  68 E6 4F 00 00            PUSH 0x4fe6
00491418  68 3C 9D 7A 00            PUSH 0x7a9d3c
0049141D  E8 AE C0 21 00            CALL 0x006ad4d0
00491422  83 C4 18                  ADD ESP,0x18
00491425  85 C0                     TEST EAX,EAX
00491427  74 01                     JZ 0x0049142a
00491429  CC                        INT3
LAB_0049142a:
0049142A  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00491430  68 E6 4F 00 00            PUSH 0x4fe6
00491435  68 3C 9D 7A 00            PUSH 0x7a9d3c
0049143A  52                        PUSH EDX
0049143B  68 0B 00 FE AF            PUSH 0xaffe000b
00491440  E8 FB 49 21 00            CALL 0x006a5e40
LAB_00491445:
00491445  66 8B 86 B2 05 00 00      MOV AX,word ptr [ESI + 0x5b2]
0049144C  66 3B C7                  CMP AX,DI
0049144F  74 31                     JZ 0x00491482
00491451  0F BF 4D 10               MOVSX ECX,word ptr [EBP + 0x10]
00491455  0F BF C0                  MOVSX EAX,AX
00491458  0F BF D3                  MOVSX EDX,BX
0049145B  50                        PUSH EAX
0049145C  33 FF                     XOR EDI,EDI
0049145E  51                        PUSH ECX
0049145F  52                        PUSH EDX
00491460  8B CE                     MOV ECX,ESI
00491462  89 BE C4 05 00 00         MOV dword ptr [ESI + 0x5c4],EDI
00491468  89 BE BC 05 00 00         MOV dword ptr [ESI + 0x5bc],EDI
0049146E  E8 F8 3A F7 FF            CALL 0x00404f6b
00491473  57                        PUSH EDI
00491474  8B CE                     MOV ECX,ESI
00491476  E8 63 1D F7 FF            CALL 0x004031de
0049147B  5F                        POP EDI
0049147C  5E                        POP ESI
0049147D  5B                        POP EBX
0049147E  5D                        POP EBP
0049147F  C2 14 00                  RET 0x14
LAB_00491482:
00491482  66 8B 86 AA 05 00 00      MOV AX,word ptr [ESI + 0x5aa]
00491489  66 69 C0 C9 00            IMUL AX,AX,0xc9
0049148E  83 C0 64                  ADD EAX,0x64
00491491  66 39 46 41               CMP word ptr [ESI + 0x41],AX
00491495  75 6A                     JNZ 0x00491501
00491497  66 8B 8E AC 05 00 00      MOV CX,word ptr [ESI + 0x5ac]
0049149E  66 69 C9 C9 00            IMUL CX,CX,0xc9
004914A3  83 C1 64                  ADD ECX,0x64
004914A6  66 39 4E 43               CMP word ptr [ESI + 0x43],CX
004914AA  75 55                     JNZ 0x00491501
004914AC  66 8B 96 AE 05 00 00      MOV DX,word ptr [ESI + 0x5ae]
004914B3  66 69 D2 C8 00            IMUL DX,DX,0xc8
004914B8  83 C2 64                  ADD EDX,0x64
004914BB  66 39 56 45               CMP word ptr [ESI + 0x45],DX
004914BF  74 11                     JZ 0x004914d2
004914C1  C7 86 C4 05 00 00 03 00 00 00  MOV dword ptr [ESI + 0x5c4],0x3
004914CB  5F                        POP EDI
004914CC  5E                        POP ESI
004914CD  5B                        POP EBX
004914CE  5D                        POP EBP
004914CF  C2 14 00                  RET 0x14
LAB_004914d2:
004914D2  66 8B 46 6C               MOV AX,word ptr [ESI + 0x6c]
004914D6  66 3B 86 B0 05 00 00      CMP AX,word ptr [ESI + 0x5b0]
004914DD  74 11                     JZ 0x004914f0
004914DF  C7 86 C4 05 00 00 05 00 00 00  MOV dword ptr [ESI + 0x5c4],0x5
004914E9  5F                        POP EDI
004914EA  5E                        POP ESI
004914EB  5B                        POP EBX
004914EC  5D                        POP EBP
004914ED  C2 14 00                  RET 0x14
LAB_004914f0:
004914F0  C7 86 C4 05 00 00 06 00 00 00  MOV dword ptr [ESI + 0x5c4],0x6
004914FA  5F                        POP EDI
004914FB  5E                        POP ESI
004914FC  5B                        POP EBX
004914FD  5D                        POP EBP
004914FE  C2 14 00                  RET 0x14
LAB_00491501:
00491501  C7 86 C4 05 00 00 01 00 00 00  MOV dword ptr [ESI + 0x5c4],0x1
LAB_0049150b:
0049150B  5F                        POP EDI
0049150C  5E                        POP ESI
0049150D  5B                        POP EBX
0049150E  5D                        POP EBP
0049150F  C2 14 00                  RET 0x14
