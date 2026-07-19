_EnumMines:
00678240  55                        PUSH EBP
00678241  8B EC                     MOV EBP,ESP
00678243  83 EC 68                  SUB ESP,0x68
00678246  8A 45 10                  MOV AL,byte ptr [EBP + 0x10]
00678249  53                        PUSH EBX
0067824A  56                        PUSH ESI
0067824B  3C 08                     CMP AL,0x8
0067824D  57                        PUSH EDI
0067824E  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
00678255  75 08                     JNZ 0x0067825f
00678257  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
0067825A  88 45 FF                  MOV byte ptr [EBP + -0x1],AL
0067825D  EB 0F                     JMP 0x0067826e
LAB_0067825f:
0067825F  84 C0                     TEST AL,AL
00678261  7C 07                     JL 0x0067826a
00678263  3C 08                     CMP AL,0x8
00678265  88 45 FF                  MOV byte ptr [EBP + -0x1],AL
00678268  7E 04                     JLE 0x0067826e
LAB_0067826a:
0067826A  C6 45 FF FF               MOV byte ptr [EBP + -0x1],0xff
LAB_0067826e:
0067826E  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
00678274  8D 45 9C                  LEA EAX,[EBP + -0x64]
00678277  8D 55 98                  LEA EDX,[EBP + -0x68]
0067827A  6A 00                     PUSH 0x0
0067827C  50                        PUSH EAX
0067827D  89 4D 98                  MOV dword ptr [EBP + -0x68],ECX
00678280  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00678286  E8 65 55 0B 00            CALL 0x0072d7f0
0067828B  8B F0                     MOV ESI,EAX
0067828D  83 C4 08                  ADD ESP,0x8
00678290  85 F6                     TEST ESI,ESI
00678292  0F 85 D8 01 00 00         JNZ 0x00678470
00678298  8B 0D 58 A1 7F 00         MOV ECX,dword ptr [0x007fa158]
0067829E  85 C9                     TEST ECX,ECX
006782A0  75 1E                     JNZ 0x006782c0
006782A2  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006782A8  68 1F 04 00 00            PUSH 0x41f
006782AD  68 58 2D 7D 00            PUSH 0x7d2d58
006782B2  51                        PUSH ECX
006782B3  6A CC                     PUSH -0x34
006782B5  E8 86 DB 02 00            CALL 0x006a5e40
006782BA  8B 0D 58 A1 7F 00         MOV ECX,dword ptr [0x007fa158]
LAB_006782c0:
006782C0  8B 71 0C                  MOV ESI,dword ptr [ECX + 0xc]
006782C3  4E                        DEC ESI
006782C4  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
006782C7  0F 88 90 01 00 00         JS 0x0067845d
LAB_006782cd:
006782CD  3B 71 0C                  CMP ESI,dword ptr [ECX + 0xc]
006782D0  73 0D                     JNC 0x006782df
006782D2  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
006782D5  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
006782D8  0F AF C6                  IMUL EAX,ESI
006782DB  03 C2                     ADD EAX,EDX
006782DD  EB 02                     JMP 0x006782e1
LAB_006782df:
006782DF  33 C0                     XOR EAX,EAX
LAB_006782e1:
006782E1  8B 38                     MOV EDI,dword ptr [EAX]
006782E3  85 FF                     TEST EDI,EDI
006782E5  0F 84 4E 01 00 00         JZ 0x00678439
006782EB  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006782EE  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
006782F1  3B C2                     CMP EAX,EDX
006782F3  0F 85 40 01 00 00         JNZ 0x00678439
006782F9  8B 07                     MOV EAX,dword ptr [EDI]
006782FB  8B CF                     MOV ECX,EDI
006782FD  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
00678300  66 8B 4D 0C               MOV CX,word ptr [EBP + 0xc]
00678304  66 85 C9                  TEST CX,CX
00678307  74 0B                     JZ 0x00678314
00678309  0F BF C9                  MOVSX ECX,CX
0067830C  3B C8                     CMP ECX,EAX
0067830E  0F 85 1F 01 00 00         JNZ 0x00678433
LAB_00678314:
00678314  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00678317  BB 01 00 00 00            MOV EBX,0x1
0067831C  85 C0                     TEST EAX,EAX
0067831E  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
00678321  74 48                     JZ 0x0067836b
00678323  80 38 00                  CMP byte ptr [EAX],0x0
00678326  74 43                     JZ 0x0067836b
00678328  8B 17                     MOV EDX,dword ptr [EDI]
0067832A  8D 45 DC                  LEA EAX,[EBP + -0x24]
0067832D  50                        PUSH EAX
0067832E  8B CF                     MOV ECX,EDI
00678330  FF 52 74                  CALL dword ptr [EDX + 0x74]
00678333  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00678336  8D 75 DC                  LEA ESI,[EBP + -0x24]
LAB_00678339:
00678339  8A 10                     MOV DL,byte ptr [EAX]
0067833B  8A CA                     MOV CL,DL
0067833D  3A 16                     CMP DL,byte ptr [ESI]
0067833F  75 1C                     JNZ 0x0067835d
00678341  84 C9                     TEST CL,CL
00678343  74 14                     JZ 0x00678359
00678345  8A 50 01                  MOV DL,byte ptr [EAX + 0x1]
00678348  8A CA                     MOV CL,DL
0067834A  3A 56 01                  CMP DL,byte ptr [ESI + 0x1]
0067834D  75 0E                     JNZ 0x0067835d
0067834F  83 C0 02                  ADD EAX,0x2
00678352  83 C6 02                  ADD ESI,0x2
00678355  84 C9                     TEST CL,CL
00678357  75 E0                     JNZ 0x00678339
LAB_00678359:
00678359  33 C0                     XOR EAX,EAX
0067835B  EB 05                     JMP 0x00678362
LAB_0067835d:
0067835D  1B C0                     SBB EAX,EAX
0067835F  83 D8 FF                  SBB EAX,-0x1
LAB_00678362:
00678362  85 C0                     TEST EAX,EAX
00678364  74 05                     JZ 0x0067836b
00678366  33 DB                     XOR EBX,EBX
00678368  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
LAB_0067836b:
0067836B  85 DB                     TEST EBX,EBX
0067836D  0F 84 BD 00 00 00         JZ 0x00678430
00678373  80 7D FF FF               CMP byte ptr [EBP + -0x1],0xff
00678377  74 13                     JZ 0x0067838c
00678379  8B 07                     MOV EAX,dword ptr [EDI]
0067837B  8B CF                     MOV ECX,EDI
0067837D  FF 50 6C                  CALL dword ptr [EAX + 0x6c]
00678380  0F BE 4D FF               MOVSX ECX,byte ptr [EBP + -0x1]
00678384  3B C8                     CMP ECX,EAX
00678386  0F 85 A4 00 00 00         JNZ 0x00678430
LAB_0067838c:
0067838C  66 8B 75 24               MOV SI,word ptr [EBP + 0x24]
00678390  66 85 F6                  TEST SI,SI
00678393  7E 7A                     JLE 0x0067840f
00678395  66 83 7D 28 00            CMP word ptr [EBP + 0x28],0x0
0067839A  7E 73                     JLE 0x0067840f
0067839C  66 83 7D 2C 00            CMP word ptr [EBP + 0x2c],0x0
006783A1  7E 6C                     JLE 0x0067840f
006783A3  8D 55 F8                  LEA EDX,[EBP + -0x8]
006783A6  8D 45 FA                  LEA EAX,[EBP + -0x6]
006783A9  52                        PUSH EDX
006783AA  8D 4D FC                  LEA ECX,[EBP + -0x4]
006783AD  50                        PUSH EAX
006783AE  51                        PUSH ECX
006783AF  8B CF                     MOV ECX,EDI
006783B1  E8 0F 95 D8 FF            CALL 0x004018c5
006783B6  66 8B 45 FC               MOV AX,word ptr [EBP + -0x4]
006783BA  66 8B 5D 18               MOV BX,word ptr [EBP + 0x18]
006783BE  66 3B C3                  CMP AX,BX
006783C1  7C 45                     JL 0x00678408
006783C3  66 8B 4D FA               MOV CX,word ptr [EBP + -0x6]
006783C7  66 3B 4D 1C               CMP CX,word ptr [EBP + 0x1c]
006783CB  7C 3B                     JL 0x00678408
006783CD  66 8B 55 F8               MOV DX,word ptr [EBP + -0x8]
006783D1  66 3B 55 20               CMP DX,word ptr [EBP + 0x20]
006783D5  7C 31                     JL 0x00678408
006783D7  0F BF DB                  MOVSX EBX,BX
006783DA  0F BF F6                  MOVSX ESI,SI
006783DD  0F BF C0                  MOVSX EAX,AX
006783E0  03 DE                     ADD EBX,ESI
006783E2  3B C3                     CMP EAX,EBX
006783E4  7D 22                     JGE 0x00678408
006783E6  0F BF 45 1C               MOVSX EAX,word ptr [EBP + 0x1c]
006783EA  0F BF 75 28               MOVSX ESI,word ptr [EBP + 0x28]
006783EE  0F BF C9                  MOVSX ECX,CX
006783F1  03 C6                     ADD EAX,ESI
006783F3  3B C8                     CMP ECX,EAX
006783F5  7D 11                     JGE 0x00678408
006783F7  0F BF 45 20               MOVSX EAX,word ptr [EBP + 0x20]
006783FB  0F BF 4D 2C               MOVSX ECX,word ptr [EBP + 0x2c]
006783FF  0F BF D2                  MOVSX EDX,DX
00678402  03 C1                     ADD EAX,ECX
00678404  3B D0                     CMP EDX,EAX
00678406  7C 04                     JL 0x0067840c
LAB_00678408:
00678408  33 DB                     XOR EBX,EBX
0067840A  EB 03                     JMP 0x0067840f
LAB_0067840c:
0067840C  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
LAB_0067840f:
0067840F  85 DB                     TEST EBX,EBX
00678411  74 1D                     JZ 0x00678430
00678413  8B 45 30                  MOV EAX,dword ptr [EBP + 0x30]
00678416  85 C0                     TEST EAX,EAX
00678418  74 16                     JZ 0x00678430
0067841A  8B 4D 34                  MOV ECX,dword ptr [EBP + 0x34]
0067841D  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00678420  51                        PUSH ECX
00678421  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00678424  57                        PUSH EDI
00678425  52                        PUSH EDX
00678426  51                        PUSH ECX
00678427  FF D0                     CALL EAX
00678429  83 C4 10                  ADD ESP,0x10
0067842C  85 C0                     TEST EAX,EAX
0067842E  75 26                     JNZ 0x00678456
LAB_00678430:
00678430  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
LAB_00678433:
00678433  8B 0D 58 A1 7F 00         MOV ECX,dword ptr [0x007fa158]
LAB_00678439:
00678439  4E                        DEC ESI
0067843A  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
0067843D  0F 89 8A FE FF FF         JNS 0x006782cd
00678443  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
00678446  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00678449  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0067844F  5F                        POP EDI
00678450  5E                        POP ESI
00678451  5B                        POP EBX
00678452  8B E5                     MOV ESP,EBP
00678454  5D                        POP EBP
00678455  C3                        RET
LAB_00678456:
00678456  C7 45 EC FF FF FF FF      MOV dword ptr [EBP + -0x14],0xffffffff
LAB_0067845d:
0067845D  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
00678460  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00678463  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00678469  5F                        POP EDI
0067846A  5E                        POP ESI
0067846B  5B                        POP EBX
0067846C  8B E5                     MOV ESP,EBP
0067846E  5D                        POP EBP
0067846F  C3                        RET
LAB_00678470:
00678470  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
00678473  68 30 2E 7D 00            PUSH 0x7d2e30
00678478  68 CC 4C 7A 00            PUSH 0x7a4ccc
0067847D  56                        PUSH ESI
0067847E  6A 00                     PUSH 0x0
00678480  68 39 04 00 00            PUSH 0x439
00678485  68 58 2D 7D 00            PUSH 0x7d2d58
0067848A  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0067848F  E8 3C 50 03 00            CALL 0x006ad4d0
00678494  83 C4 18                  ADD ESP,0x18
00678497  85 C0                     TEST EAX,EAX
00678499  74 01                     JZ 0x0067849c
0067849B  CC                        INT3
LAB_0067849c:
0067849C  68 3A 04 00 00            PUSH 0x43a
006784A1  68 58 2D 7D 00            PUSH 0x7d2d58
006784A6  6A 00                     PUSH 0x0
006784A8  56                        PUSH ESI
006784A9  E8 92 D9 02 00            CALL 0x006a5e40
006784AE  8B C6                     MOV EAX,ESI
006784B0  5F                        POP EDI
006784B1  5E                        POP ESI
006784B2  5B                        POP EBX
006784B3  8B E5                     MOV ESP,EBP
006784B5  5D                        POP EBP
006784B6  C3                        RET
