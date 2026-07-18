FUN_00660f70:
00660F70  55                        PUSH EBP
00660F71  8B EC                     MOV EBP,ESP
00660F73  83 EC 68                  SUB ESP,0x68
00660F76  53                        PUSH EBX
00660F77  56                        PUSH ESI
00660F78  8B F1                     MOV ESI,ECX
00660F7A  57                        PUSH EDI
00660F7B  8B 86 84 02 00 00         MOV EAX,dword ptr [ESI + 0x284]
00660F81  85 C0                     TEST EAX,EAX
00660F83  0F 84 31 04 00 00         JZ 0x006613ba
00660F89  8B 86 0B 02 00 00         MOV EAX,dword ptr [ESI + 0x20b]
00660F8F  85 C0                     TEST EAX,EAX
00660F91  0F 84 23 04 00 00         JZ 0x006613ba
00660F97  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00660F9D  85 C9                     TEST ECX,ECX
00660F9F  0F 84 15 04 00 00         JZ 0x006613ba
00660FA5  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
00660FA8  50                        PUSH EAX
00660FA9  E8 17 0E DA FF            CALL 0x00401dc5
00660FAE  66 8B 56 7B               MOV DX,word ptr [ESI + 0x7b]
00660FB2  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00660FB5  66 8B CA                  MOV CX,DX
00660FB8  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
00660FBF  66 49                     DEC CX
00660FC1  66 F7 D9                  NEG CX
00660FC4  1B C9                     SBB ECX,ECX
00660FC6  83 E1 02                  AND ECX,0x2
00660FC9  41                        INC ECX
00660FCA  85 C9                     TEST ECX,ECX
00660FCC  0F 8E E8 03 00 00         JLE 0x006613ba
00660FD2  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00660FD5  8B 3D 74 A1 7F 00         MOV EDI,dword ptr [0x007fa174]
00660FDB  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
LAB_00660fde:
00660FDE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00660FE1  8B 00                     MOV EAX,dword ptr [EAX]
00660FE3  85 C0                     TEST EAX,EAX
00660FE5  0F 84 93 03 00 00         JZ 0x0066137e
00660FEB  83 F8 01                  CMP EAX,0x1
00660FEE  72 05                     JC 0x00660ff5
00660FF0  83 F8 29                  CMP EAX,0x29
00660FF3  72 0A                     JC 0x00660fff
LAB_00660ff5:
00660FF5  66 83 FA 01               CMP DX,0x1
00660FF9  0F 85 7F 03 00 00         JNZ 0x0066137e
LAB_00660fff:
00660FFF  83 F8 01                  CMP EAX,0x1
00661002  7C 75                     JL 0x00661079
00661004  83 F8 29                  CMP EAX,0x29
00661007  7D 70                     JGE 0x00661079
00661009  85 FF                     TEST EDI,EDI
0066100B  74 6C                     JZ 0x00661079
0066100D  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
00661010  50                        PUSH EAX
00661011  51                        PUSH ECX
00661012  8B CF                     MOV ECX,EDI
00661014  E8 24 31 DA FF            CALL 0x0040413d
LAB_00661019:
00661019  85 C0                     TEST EAX,EAX
0066101B  0F 84 57 03 00 00         JZ 0x00661378
00661021  8B 3D 74 A1 7F 00         MOV EDI,dword ptr [0x007fa174]
LAB_00661027:
00661027  8A 86 FF 00 00 00         MOV AL,byte ptr [ESI + 0xff]
0066102D  84 C0                     TEST AL,AL
0066102F  0F 84 28 01 00 00         JZ 0x0066115d
00661035  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00661038  8B 01                     MOV EAX,dword ptr [ECX]
0066103A  83 C0 F8                  ADD EAX,-0x8
0066103D  83 F8 5C                  CMP EAX,0x5c
00661040  0F 87 17 01 00 00         JA 0x0066115d
00661046  33 D2                     XOR EDX,EDX
00661048  8A 90 DC 13 66 00         MOV DL,byte ptr [EAX + 0x6613dc]
switchD_0066104e::switchD:
0066104E  FF 24 95 C4 13 66 00      JMP dword ptr [EDX*0x4 + 0x6613c4]
switchD_0066104e::caseD_8:
00661055  8B 86 84 02 00 00         MOV EAX,dword ptr [ESI + 0x284]
0066105B  66 83 7E 39 03            CMP word ptr [ESI + 0x39],0x3
00661060  8B 88 38 01 00 00         MOV ECX,dword ptr [EAX + 0x138]
00661066  0F 85 87 00 00 00         JNZ 0x006610f3
0066106C  85 C9                     TEST ECX,ECX
0066106E  0F 84 0A 03 00 00         JZ 0x0066137e
00661074  E9 E4 00 00 00            JMP 0x0066115d
LAB_00661079:
00661079  83 F8 32                  CMP EAX,0x32
0066107C  7C 17                     JL 0x00661095
0066107E  83 F8 74                  CMP EAX,0x74
00661081  7D 12                     JGE 0x00661095
00661083  85 FF                     TEST EDI,EDI
00661085  74 0E                     JZ 0x00661095
00661087  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
0066108A  50                        PUSH EAX
0066108B  52                        PUSH EDX
0066108C  8B CF                     MOV ECX,EDI
0066108E  E8 09 36 DA FF            CALL 0x0040469c
00661093  EB 84                     JMP 0x00661019
LAB_00661095:
00661095  3D A3 00 00 00            CMP EAX,0xa3
0066109A  74 15                     JZ 0x006610b1
0066109C  3D A8 00 00 00            CMP EAX,0xa8
006610A1  74 0E                     JZ 0x006610b1
006610A3  3D B2 00 00 00            CMP EAX,0xb2
006610A8  74 07                     JZ 0x006610b1
006610AA  3D BE 00 00 00            CMP EAX,0xbe
006610AF  75 15                     JNZ 0x006610c6
LAB_006610b1:
006610B1  85 FF                     TEST EDI,EDI
006610B3  74 11                     JZ 0x006610c6
006610B5  50                        PUSH EAX
006610B6  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
006610B9  50                        PUSH EAX
006610BA  8B CF                     MOV ECX,EDI
006610BC  E8 D8 06 DA FF            CALL 0x00401799
006610C1  E9 53 FF FF FF            JMP 0x00661019
LAB_006610c6:
006610C6  3D DD 00 00 00            CMP EAX,0xdd
006610CB  74 19                     JZ 0x006610e6
006610CD  3D DE 00 00 00            CMP EAX,0xde
006610D2  74 12                     JZ 0x006610e6
006610D4  3D E2 00 00 00            CMP EAX,0xe2
006610D9  74 0B                     JZ 0x006610e6
006610DB  3D DC 00 00 00            CMP EAX,0xdc
006610E0  0F 85 98 02 00 00         JNZ 0x0066137e
LAB_006610e6:
006610E6  85 FF                     TEST EDI,EDI
006610E8  0F 85 39 FF FF FF         JNZ 0x00661027
006610EE  E9 8B 02 00 00            JMP 0x0066137e
LAB_006610f3:
006610F3  85 C9                     TEST ECX,ECX
006610F5  75 66                     JNZ 0x0066115d
006610F7  8B 88 34 01 00 00         MOV ECX,dword ptr [EAX + 0x134]
006610FD  85 C9                     TEST ECX,ECX
006610FF  0F 84 79 02 00 00         JZ 0x0066137e
00661105  EB 56                     JMP 0x0066115d
switchD_0066104e::caseD_39:
00661107  8B 8E 84 02 00 00         MOV ECX,dword ptr [ESI + 0x284]
0066110D  8B 81 38 01 00 00         MOV EAX,dword ptr [ECX + 0x138]
00661113  85 C0                     TEST EAX,EAX
00661115  0F 84 63 02 00 00         JZ 0x0066137e
0066111B  EB 40                     JMP 0x0066115d
switchD_0066104e::caseD_4f:
0066111D  8B 96 84 02 00 00         MOV EDX,dword ptr [ESI + 0x284]
00661123  8B 82 34 01 00 00         MOV EAX,dword ptr [EDX + 0x134]
00661129  85 C0                     TEST EAX,EAX
0066112B  0F 84 4D 02 00 00         JZ 0x0066137e
00661131  EB 2A                     JMP 0x0066115d
switchD_0066104e::caseD_3a:
00661133  8B 86 84 02 00 00         MOV EAX,dword ptr [ESI + 0x284]
00661139  8B 88 3C 01 00 00         MOV ECX,dword ptr [EAX + 0x13c]
0066113F  85 C9                     TEST ECX,ECX
00661141  0F 84 37 02 00 00         JZ 0x0066137e
00661147  EB 14                     JMP 0x0066115d
switchD_0066104e::caseD_64:
00661149  8B 8E 84 02 00 00         MOV ECX,dword ptr [ESI + 0x284]
0066114F  8B 81 40 01 00 00         MOV EAX,dword ptr [ECX + 0x140]
00661155  85 C0                     TEST EAX,EAX
00661157  0F 84 21 02 00 00         JZ 0x0066137e
switchD_0066104e::caseD_9:
0066115D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00661160  8B 02                     MOV EAX,dword ptr [EDX]
00661162  83 F8 32                  CMP EAX,0x32
00661165  0F 82 4E 01 00 00         JC 0x006612b9
0066116B  83 F8 74                  CMP EAX,0x74
0066116E  0F 83 45 01 00 00         JNC 0x006612b9
00661174  66 8B 53 0E               MOV DX,word ptr [EBX + 0xe]
00661178  66 85 D2                  TEST DX,DX
0066117B  7C 42                     JL 0x006611bf
0066117D  66 8B 4B 10               MOV CX,word ptr [EBX + 0x10]
00661181  66 85 C9                  TEST CX,CX
00661184  7C 39                     JL 0x006611bf
00661186  66 8B 43 12               MOV AX,word ptr [EBX + 0x12]
0066118A  66 85 C0                  TEST AX,AX
0066118D  7C 30                     JL 0x006611bf
0066118F  8B 7E 24                  MOV EDI,dword ptr [ESI + 0x24]
00661192  6A 00                     PUSH 0x0
00661194  6A 00                     PUSH 0x0
00661196  6A 00                     PUSH 0x0
00661198  6A 00                     PUSH 0x0
0066119A  6A 00                     PUSH 0x0
0066119C  57                        PUSH EDI
0066119D  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
006611A0  0F BF C0                  MOVSX EAX,AX
006611A3  8B 3F                     MOV EDI,dword ptr [EDI]
006611A5  0F BF C9                  MOVSX ECX,CX
006611A8  0F BF D2                  MOVSX EDX,DX
006611AB  57                        PUSH EDI
006611AC  50                        PUSH EAX
006611AD  51                        PUSH ECX
006611AE  52                        PUSH EDX
006611AF  E8 75 16 DA FF            CALL 0x00402829
006611B4  83 C4 28                  ADD ESP,0x28
006611B7  85 C0                     TEST EAX,EAX
006611B9  0F 85 D9 00 00 00         JNZ 0x00661298
LAB_006611bf:
006611BF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006611C2  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
006611C9  8B 00                     MOV EAX,dword ptr [EAX]
006611CB  83 F8 54                  CMP EAX,0x54
006611CE  72 4A                     JC 0x0066121a
006611D0  83 F8 5A                  CMP EAX,0x5a
006611D3  77 45                     JA 0x0066121a
006611D5  6A 53                     PUSH 0x53
006611D7  8B CE                     MOV ECX,ESI
006611D9  E8 D8 47 DA FF            CALL 0x004059b6
006611DE  8B F8                     MOV EDI,EAX
006611E0  85 FF                     TEST EDI,EDI
006611E2  74 36                     JZ 0x0066121a
006611E4  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
006611E7  85 C0                     TEST EAX,EAX
006611E9  74 29                     JZ 0x00661214
006611EB  76 05                     JBE 0x006611f2
006611ED  8B 47 1C                  MOV EAX,dword ptr [EDI + 0x1c]
006611F0  EB 02                     JMP 0x006611f4
LAB_006611f2:
006611F2  33 C0                     XOR EAX,EAX
LAB_006611f4:
006611F4  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
006611FA  66 8B 00                  MOV AX,word ptr [EAX]
006611FD  85 C9                     TEST ECX,ECX
006611FF  74 13                     JZ 0x00661214
00661201  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
00661204  6A 01                     PUSH 0x1
00661206  50                        PUSH EAX
00661207  52                        PUSH EDX
00661208  E8 AD 16 DA FF            CALL 0x004028ba
0066120D  85 C0                     TEST EAX,EAX
0066120F  74 03                     JZ 0x00661214
00661211  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_00661214:
00661214  57                        PUSH EDI
00661215  E8 F6 CE 04 00            CALL 0x006ae110
LAB_0066121a:
0066121A  0F BF 5B 0E               MOVSX EBX,word ptr [EBX + 0xe]
0066121E  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
00661221  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00661224  8B 86 84 02 00 00         MOV EAX,dword ptr [ESI + 0x284]
0066122A  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0066122D  0F BF 5B 10               MOVSX EBX,word ptr [EBX + 0x10]
00661231  0F BF 88 86 00 00 00      MOVSX ECX,word ptr [EAX + 0x86]
00661238  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
0066123B  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0066123E  0F BF 90 84 00 00 00      MOVSX EDX,word ptr [EAX + 0x84]
00661245  0F BF 5B 12               MOVSX EBX,word ptr [EBX + 0x12]
00661249  0F BF 80 82 00 00 00      MOVSX EAX,word ptr [EAX + 0x82]
00661250  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
00661253  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
00661256  8B 3F                     MOV EDI,dword ptr [EDI]
00661258  53                        PUSH EBX
00661259  51                        PUSH ECX
0066125A  52                        PUSH EDX
0066125B  50                        PUSH EAX
0066125C  8D 45 E8                  LEA EAX,[EBP + -0x18]
0066125F  8D 4D EC                  LEA ECX,[EBP + -0x14]
00661262  50                        PUSH EAX
00661263  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
00661266  8D 55 F0                  LEA EDX,[EBP + -0x10]
00661269  51                        PUSH ECX
0066126A  52                        PUSH EDX
0066126B  57                        PUSH EDI
0066126C  50                        PUSH EAX
0066126D  E8 91 2C DA FF            CALL 0x00403f03
00661272  83 C4 24                  ADD ESP,0x24
00661275  85 C0                     TEST EAX,EAX
00661277  0F 84 3D 01 00 00         JZ 0x006613ba
0066127D  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00661280  66 8B 4D F0               MOV CX,word ptr [EBP + -0x10]
00661284  66 8B 55 EC               MOV DX,word ptr [EBP + -0x14]
00661288  66 8B 45 E8               MOV AX,word ptr [EBP + -0x18]
0066128C  66 89 4B 0E               MOV word ptr [EBX + 0xe],CX
00661290  66 89 53 10               MOV word ptr [EBX + 0x10],DX
00661294  66 89 43 12               MOV word ptr [EBX + 0x12],AX
LAB_00661298:
00661298  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066129B  33 C9                     XOR ECX,ECX
0066129D  66 8B 4E 7D               MOV CX,word ptr [ESI + 0x7d]
006612A1  8B 02                     MOV EAX,dword ptr [EDX]
006612A3  51                        PUSH ECX
006612A4  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
006612A7  50                        PUSH EAX
006612A8  51                        PUSH ECX
006612A9  E8 97 21 DA FF            CALL 0x00403445
006612AE  83 C4 0C                  ADD ESP,0xc
006612B1  85 C0                     TEST EAX,EAX
006612B3  0F 8F 01 01 00 00         JG 0x006613ba
LAB_006612b9:
006612B9  B9 12 00 00 00            MOV ECX,0x12
006612BE  33 C0                     XOR EAX,EAX
006612C0  8D 7D 98                  LEA EDI,[EBP + -0x68]
006612C3  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006612C6  F3 AB                     STOSD.REP ES:EDI
006612C8  66 8B 4B 0C               MOV CX,word ptr [EBX + 0xc]
006612CC  66 AB                     STOSW ES:EDI
006612CE  8B 02                     MOV EAX,dword ptr [EDX]
006612D0  66 8B 55 0C               MOV DX,word ptr [EBP + 0xc]
006612D4  66 89 4D 9E               MOV word ptr [EBP + -0x62],CX
006612D8  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
006612DB  85 C9                     TEST ECX,ECX
006612DD  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
006612E0  66 89 55 9C               MOV word ptr [EBP + -0x64],DX
006612E4  74 11                     JZ 0x006612f7
006612E6  8B 81 5C 06 00 00         MOV EAX,dword ptr [ECX + 0x65c]
006612EC  8D 50 01                  LEA EDX,[EAX + 0x1]
006612EF  89 91 5C 06 00 00         MOV dword ptr [ECX + 0x65c],EDX
006612F5  EB 02                     JMP 0x006612f9
LAB_006612f7:
006612F7  33 C0                     XOR EAX,EAX
LAB_006612f9:
006612F9  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
006612FC  66 8B 46 7D               MOV AX,word ptr [ESI + 0x7d]
00661300  66 8B 4B 0E               MOV CX,word ptr [EBX + 0xe]
00661304  66 8B 53 10               MOV DX,word ptr [EBX + 0x10]
00661308  66 89 45 A4               MOV word ptr [EBP + -0x5c],AX
0066130C  66 8B 43 12               MOV AX,word ptr [EBX + 0x12]
00661310  66 89 45 B2               MOV word ptr [EBP + -0x4e],AX
00661314  8A 43 14                  MOV AL,byte ptr [EBX + 0x14]
00661317  84 C0                     TEST AL,AL
00661319  C7 45 A6 00 00 00 00      MOV dword ptr [EBP + -0x5a],0x0
00661320  66 89 4D AE               MOV word ptr [EBP + -0x52],CX
00661324  66 89 55 B0               MOV word ptr [EBP + -0x50],DX
00661328  7C 09                     JL 0x00661333
0066132A  3C 08                     CMP AL,0x8
0066132C  7D 05                     JGE 0x00661333
0066132E  88 45 B4                  MOV byte ptr [EBP + -0x4c],AL
00661331  EB 19                     JMP 0x0066134c
LAB_00661333:
00661333  8A 86 81 00 00 00         MOV AL,byte ptr [ESI + 0x81]
00661339  84 C0                     TEST AL,AL
0066133B  7C 09                     JL 0x00661346
0066133D  3C 08                     CMP AL,0x8
0066133F  7D 05                     JGE 0x00661346
00661341  88 45 B4                  MOV byte ptr [EBP + -0x4c],AL
00661344  EB 06                     JMP 0x0066134c
LAB_00661346:
00661346  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
00661349  88 4D B4                  MOV byte ptr [EBP + -0x4c],CL
LAB_0066134c:
0066134C  8D 53 15                  LEA EDX,[EBX + 0x15]
0066134F  6A 0E                     PUSH 0xe
00661351  8D 45 B5                  LEA EAX,[EBP + -0x4b]
00661354  52                        PUSH EDX
00661355  50                        PUSH EAX
00661356  E8 E5 CF 0C 00            CALL 0x0072e340
0066135B  66 8B 4E 7F               MOV CX,word ptr [ESI + 0x7f]
0066135F  83 C4 0C                  ADD ESP,0xc
00661362  8D 55 98                  LEA EDX,[EBP + -0x68]
00661365  6A 00                     PUSH 0x0
00661367  51                        PUSH ECX
00661368  8B 8E 84 02 00 00         MOV ECX,dword ptr [ESI + 0x284]
0066136E  52                        PUSH EDX
0066136F  E8 4A 43 DA FF            CALL 0x004056be
00661374  85 C0                     TEST EAX,EAX
00661376  74 3C                     JZ 0x006613b4
LAB_00661378:
00661378  8B 3D 74 A1 7F 00         MOV EDI,dword ptr [0x007fa174]
LAB_0066137e:
0066137E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00661381  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00661384  83 C2 04                  ADD EDX,0x4
00661387  40                        INC EAX
00661388  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0066138B  66 8B 56 7B               MOV DX,word ptr [ESI + 0x7b]
0066138F  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00661392  66 8B C2                  MOV AX,DX
00661395  66 48                     DEC AX
00661397  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0066139A  66 F7 D8                  NEG AX
0066139D  1B C0                     SBB EAX,EAX
0066139F  83 E0 02                  AND EAX,0x2
006613A2  40                        INC EAX
006613A3  3B C8                     CMP ECX,EAX
006613A5  0F 8C 33 FC FF FF         JL 0x00660fde
006613AB  5F                        POP EDI
006613AC  5E                        POP ESI
006613AD  5B                        POP EBX
006613AE  8B E5                     MOV ESP,EBP
006613B0  5D                        POP EBP
006613B1  C2 08 00                  RET 0x8
LAB_006613b4:
006613B4  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
006613B7  89 4B 24                  MOV dword ptr [EBX + 0x24],ECX
LAB_006613ba:
006613BA  5F                        POP EDI
006613BB  5E                        POP ESI
006613BC  5B                        POP EBX
006613BD  8B E5                     MOV ESP,EBP
006613BF  5D                        POP EBP
006613C0  C2 08 00                  RET 0x8
