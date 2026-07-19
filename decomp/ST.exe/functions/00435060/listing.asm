STAllPlayersC::SelfCheckObjControl:
00435060  55                        PUSH EBP
00435061  8B EC                     MOV EBP,ESP
00435063  83 EC 10                  SUB ESP,0x10
00435066  A0 4D 87 80 00            MOV AL,[0x0080874d]
0043506B  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0043506E  3C FF                     CMP AL,0xff
00435070  0F 84 01 02 00 00         JZ 0x00435277
00435076  33 C9                     XOR ECX,ECX
00435078  53                        PUSH EBX
00435079  8A C8                     MOV CL,AL
0043507B  56                        PUSH ESI
0043507C  8B C1                     MOV EAX,ECX
0043507E  57                        PUSH EDI
0043507F  C7 45 FC 04 00 00 00      MOV dword ptr [EBP + -0x4],0x4
00435086  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00435089  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
0043508C  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
0043508F  C1 E2 04                  SHL EDX,0x4
00435092  03 D0                     ADD EDX,EAX
00435094  8D 04 55 83 4F 7F 00      LEA EAX,[EDX*0x2 + 0x7f4f83]
0043509B  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_0043509e:
0043509E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004350A1  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
004350A4  C1 E1 04                  SHL ECX,0x4
004350A7  8B 04 11                  MOV EAX,dword ptr [ECX + EDX*0x1]
004350AA  8D 34 11                  LEA ESI,[ECX + EDX*0x1]
004350AD  85 C0                     TEST EAX,EAX
004350AF  0F 84 AD 00 00 00         JZ 0x00435162
004350B5  83 F8 3C                  CMP EAX,0x3c
004350B8  74 5A                     JZ 0x00435114
004350BA  3D AE 01 00 00            CMP EAX,0x1ae
004350BF  74 27                     JZ 0x004350e8
004350C1  68 34 73 7A 00            PUSH 0x7a7334
004350C6  68 CC 4C 7A 00            PUSH 0x7a4ccc
004350CB  6A 00                     PUSH 0x0
004350CD  6A 00                     PUSH 0x0
004350CF  68 BB 10 00 00            PUSH 0x10bb
004350D4  68 04 60 7A 00            PUSH 0x7a6004
004350D9  E8 F2 83 27 00            CALL 0x006ad4d0
004350DE  83 C4 18                  ADD ESP,0x18
004350E1  85 C0                     TEST EAX,EAX
004350E3  74 7D                     JZ 0x00435162
004350E5  CC                        INT3
LAB_004350e8:
004350E8  66 8B 46 08               MOV AX,word ptr [ESI + 0x8]
004350EC  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004350EF  6A 03                     PUSH 0x3
004350F1  50                        PUSH EAX
004350F2  6A FF                     PUSH -0x1
004350F4  E8 C1 D7 FC FF            CALL 0x004028ba
004350F9  8B C8                     MOV ECX,EAX
004350FB  85 C9                     TEST ECX,ECX
004350FD  74 63                     JZ 0x00435162
004350FF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00435102  85 C0                     TEST EAX,EAX
00435104  75 07                     JNZ 0x0043510d
00435106  E8 BD F1 FC FF            CALL 0x004042c8
0043510B  EB 55                     JMP 0x00435162
LAB_0043510d:
0043510D  E8 0D E1 FC FF            CALL 0x0040321f
00435112  EB 4E                     JMP 0x00435162
LAB_00435114:
00435114  8B 46 0A                  MOV EAX,dword ptr [ESI + 0xa]
00435117  85 C0                     TEST EAX,EAX
00435119  74 47                     JZ 0x00435162
0043511B  8B 58 0C                  MOV EBX,dword ptr [EAX + 0xc]
0043511E  33 FF                     XOR EDI,EDI
00435120  85 DB                     TEST EBX,EBX
00435122  7E 3E                     JLE 0x00435162
LAB_00435124:
00435124  8D 4D F8                  LEA ECX,[EBP + -0x8]
00435127  8B D7                     MOV EDX,EDI
00435129  51                        PUSH ECX
0043512A  8B 4E 0A                  MOV ECX,dword ptr [ESI + 0xa]
0043512D  E8 3E 7B 27 00            CALL 0x006acc70
00435132  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00435135  8A 46 04                  MOV AL,byte ptr [ESI + 0x4]
00435138  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0043513B  6A 01                     PUSH 0x1
0043513D  52                        PUSH EDX
0043513E  50                        PUSH EAX
0043513F  E8 76 D7 FC FF            CALL 0x004028ba
00435144  8B C8                     MOV ECX,EAX
00435146  85 C9                     TEST ECX,ECX
00435148  74 13                     JZ 0x0043515d
0043514A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0043514D  85 C0                     TEST EAX,EAX
0043514F  75 07                     JNZ 0x00435158
00435151  E8 72 F1 FC FF            CALL 0x004042c8
00435156  EB 05                     JMP 0x0043515d
LAB_00435158:
00435158  E8 C2 E0 FC FF            CALL 0x0040321f
LAB_0043515d:
0043515D  47                        INC EDI
0043515E  3B FB                     CMP EDI,EBX
00435160  7C C2                     JL 0x00435124
LAB_00435162:
00435162  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00435165  48                        DEC EAX
00435166  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00435169  0F 89 2F FF FF FF         JNS 0x0043509e
0043516F  33 C0                     XOR EAX,EAX
00435171  BF 04 00 00 00            MOV EDI,0x4
00435176  A0 4D 87 80 00            MOV AL,[0x0080874d]
0043517B  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0043517E  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00435181  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
00435184  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
00435187  C1 E1 04                  SHL ECX,0x4
0043518A  03 C8                     ADD ECX,EAX
0043518C  8D 14 4D D3 4F 7F 00      LEA EDX,[ECX*0x2 + 0x7f4fd3]
00435193  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
LAB_00435196:
00435196  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00435199  8B C7                     MOV EAX,EDI
0043519B  C1 E0 04                  SHL EAX,0x4
0043519E  8D 34 08                  LEA ESI,[EAX + ECX*0x1]
004351A1  8B 04 08                  MOV EAX,dword ptr [EAX + ECX*0x1]
004351A4  3D 9A 01 00 00            CMP EAX,0x19a
004351A9  0F 8F CC 00 00 00         JG 0x0043527b
004351AF  74 68                     JZ 0x00435219
004351B1  85 C0                     TEST EAX,EAX
004351B3  0F 84 B1 00 00 00         JZ 0x0043526a
004351B9  83 F8 5A                  CMP EAX,0x5a
004351BC  74 35                     JZ 0x004351f3
004351BE  3D 72 01 00 00            CMP EAX,0x172
004351C3  0F 85 BE 00 00 00         JNZ 0x00435287
004351C9  66 8B 56 08               MOV DX,word ptr [ESI + 0x8]
004351CD  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004351D0  6A 02                     PUSH 0x2
004351D2  52                        PUSH EDX
004351D3  6A FF                     PUSH -0x1
004351D5  E8 E0 D6 FC FF            CALL 0x004028ba
004351DA  8B C8                     MOV ECX,EAX
004351DC  85 C9                     TEST ECX,ECX
004351DE  0F 84 86 00 00 00         JZ 0x0043526a
004351E4  85 FF                     TEST EDI,EDI
004351E6  0F 85 09 01 00 00         JNZ 0x004352f5
004351EC  E8 D7 F0 FC FF            CALL 0x004042c8
004351F1  EB 77                     JMP 0x0043526a
LAB_004351f3:
004351F3  66 8B 46 08               MOV AX,word ptr [ESI + 0x8]
004351F7  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004351FA  6A 04                     PUSH 0x4
004351FC  50                        PUSH EAX
004351FD  6A FF                     PUSH -0x1
004351FF  E8 B6 D6 FC FF            CALL 0x004028ba
00435204  8B C8                     MOV ECX,EAX
00435206  85 C9                     TEST ECX,ECX
00435208  74 60                     JZ 0x0043526a
0043520A  85 FF                     TEST EDI,EDI
0043520C  0F 85 E3 00 00 00         JNZ 0x004352f5
00435212  E8 B1 F0 FC FF            CALL 0x004042c8
00435217  EB 51                     JMP 0x0043526a
LAB_00435219:
00435219  8B 46 0A                  MOV EAX,dword ptr [ESI + 0xa]
0043521C  85 C0                     TEST EAX,EAX
0043521E  74 4A                     JZ 0x0043526a
00435220  8B 58 0C                  MOV EBX,dword ptr [EAX + 0xc]
00435223  33 FF                     XOR EDI,EDI
00435225  85 DB                     TEST EBX,EBX
00435227  7E 3E                     JLE 0x00435267
LAB_00435229:
00435229  8D 4D F8                  LEA ECX,[EBP + -0x8]
0043522C  8B D7                     MOV EDX,EDI
0043522E  51                        PUSH ECX
0043522F  8B 4E 0A                  MOV ECX,dword ptr [ESI + 0xa]
00435232  E8 39 7A 27 00            CALL 0x006acc70
00435237  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0043523A  8A 46 04                  MOV AL,byte ptr [ESI + 0x4]
0043523D  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00435240  6A 01                     PUSH 0x1
00435242  52                        PUSH EDX
00435243  50                        PUSH EAX
00435244  E8 71 D6 FC FF            CALL 0x004028ba
00435249  8B C8                     MOV ECX,EAX
0043524B  85 C9                     TEST ECX,ECX
0043524D  74 13                     JZ 0x00435262
0043524F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00435252  85 C0                     TEST EAX,EAX
00435254  75 07                     JNZ 0x0043525d
00435256  E8 6D F0 FC FF            CALL 0x004042c8
0043525B  EB 05                     JMP 0x00435262
LAB_0043525d:
0043525D  E8 BD DF FC FF            CALL 0x0040321f
LAB_00435262:
00435262  47                        INC EDI
00435263  3B FB                     CMP EDI,EBX
00435265  7C C2                     JL 0x00435229
LAB_00435267:
00435267  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_0043526a:
0043526A  4F                        DEC EDI
0043526B  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0043526E  0F 89 22 FF FF FF         JNS 0x00435196
00435274  5F                        POP EDI
00435275  5E                        POP ESI
00435276  5B                        POP EBX
LAB_00435277:
00435277  8B E5                     MOV ESP,EBP
00435279  5D                        POP EBP
0043527A  C3                        RET
LAB_0043527b:
0043527B  2D A4 01 00 00            SUB EAX,0x1a4
00435280  74 4E                     JZ 0x004352d0
00435282  83 E8 14                  SUB EAX,0x14
00435285  74 27                     JZ 0x004352ae
LAB_00435287:
00435287  68 E8 72 7A 00            PUSH 0x7a72e8
0043528C  68 CC 4C 7A 00            PUSH 0x7a4ccc
00435291  6A 00                     PUSH 0x0
00435293  6A 00                     PUSH 0x0
00435295  68 EC 10 00 00            PUSH 0x10ec
0043529A  68 04 60 7A 00            PUSH 0x7a6004
0043529F  E8 2C 82 27 00            CALL 0x006ad4d0
004352A4  83 C4 18                  ADD ESP,0x18
004352A7  85 C0                     TEST EAX,EAX
004352A9  74 BF                     JZ 0x0043526a
004352AB  CC                        INT3
LAB_004352ae:
004352AE  66 8B 4E 08               MOV CX,word ptr [ESI + 0x8]
004352B2  6A 06                     PUSH 0x6
004352B4  51                        PUSH ECX
004352B5  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004352B8  6A FF                     PUSH -0x1
004352BA  E8 FB D5 FC FF            CALL 0x004028ba
004352BF  8B C8                     MOV ECX,EAX
004352C1  85 C9                     TEST ECX,ECX
004352C3  74 A5                     JZ 0x0043526a
004352C5  85 FF                     TEST EDI,EDI
004352C7  75 2C                     JNZ 0x004352f5
004352C9  E8 FA EF FC FF            CALL 0x004042c8
004352CE  EB 9A                     JMP 0x0043526a
LAB_004352d0:
004352D0  66 8B 56 08               MOV DX,word ptr [ESI + 0x8]
004352D4  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004352D7  6A 05                     PUSH 0x5
004352D9  52                        PUSH EDX
004352DA  6A FF                     PUSH -0x1
004352DC  E8 D9 D5 FC FF            CALL 0x004028ba
004352E1  8B C8                     MOV ECX,EAX
004352E3  85 C9                     TEST ECX,ECX
004352E5  74 83                     JZ 0x0043526a
004352E7  85 FF                     TEST EDI,EDI
004352E9  75 0A                     JNZ 0x004352f5
004352EB  E8 D8 EF FC FF            CALL 0x004042c8
004352F0  E9 75 FF FF FF            JMP 0x0043526a
LAB_004352f5:
004352F5  E8 25 DF FC FF            CALL 0x0040321f
004352FA  E9 6B FF FF FF            JMP 0x0043526a
