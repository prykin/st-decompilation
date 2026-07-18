FUN_005097e0:
005097E0  55                        PUSH EBP
005097E1  8B EC                     MOV EBP,ESP
005097E3  81 EC 40 0B 00 00         SUB ESP,0xb40
005097E9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005097EE  53                        PUSH EBX
005097EF  56                        PUSH ESI
005097F0  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
005097F3  33 DB                     XOR EBX,EBX
005097F5  57                        PUSH EDI
005097F6  8D 95 FC FE FF FF         LEA EDX,[EBP + 0xfffffefc]
005097FC  8D 8D F8 FE FF FF         LEA ECX,[EBP + 0xfffffef8]
00509802  53                        PUSH EBX
00509803  52                        PUSH EDX
00509804  89 85 F8 FE FF FF         MOV dword ptr [EBP + 0xfffffef8],EAX
0050980A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00509810  E8 DB 3F 22 00            CALL 0x0072d7f0
00509815  8B F0                     MOV ESI,EAX
00509817  83 C4 08                  ADD ESP,0x8
0050981A  3B F3                     CMP ESI,EBX
0050981C  0F 85 2E 08 00 00         JNZ 0x0050a050
00509822  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
00509825  84 C0                     TEST AL,AL
00509827  74 0B                     JZ 0x00509834
00509829  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
0050982F  E8 C8 A8 EF FF            CALL 0x004040fc
LAB_00509834:
00509834  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
00509837  8B 86 02 03 00 00         MOV EAX,dword ptr [ESI + 0x302]
0050983D  3B C3                     CMP EAX,EBX
0050983F  74 09                     JZ 0x0050984a
00509841  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00509844  50                        PUSH EAX
00509845  E8 66 BE 1D 00            CALL 0x006e56b0
LAB_0050984a:
0050984A  8B 86 0C 03 00 00         MOV EAX,dword ptr [ESI + 0x30c]
00509850  89 9E 02 03 00 00         MOV dword ptr [ESI + 0x302],EBX
00509856  3B C3                     CMP EAX,EBX
00509858  74 09                     JZ 0x00509863
0050985A  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0050985D  50                        PUSH EAX
0050985E  E8 4D BE 1D 00            CALL 0x006e56b0
LAB_00509863:
00509863  8B 86 14 03 00 00         MOV EAX,dword ptr [ESI + 0x314]
00509869  8D BE 14 03 00 00         LEA EDI,[ESI + 0x314]
0050986F  3B C3                     CMP EAX,EBX
00509871  89 9E 0C 03 00 00         MOV dword ptr [ESI + 0x30c],EBX
00509877  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
0050987A  74 09                     JZ 0x00509885
0050987C  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0050987F  50                        PUSH EAX
00509880  E8 2B BE 1D 00            CALL 0x006e56b0
LAB_00509885:
00509885  8B 86 18 03 00 00         MOV EAX,dword ptr [ESI + 0x318]
0050988B  89 1F                     MOV dword ptr [EDI],EBX
0050988D  3B C3                     CMP EAX,EBX
0050988F  74 09                     JZ 0x0050989a
00509891  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00509894  50                        PUSH EAX
00509895  E8 16 BE 1D 00            CALL 0x006e56b0
LAB_0050989a:
0050989A  8B 86 D0 09 00 00         MOV EAX,dword ptr [ESI + 0x9d0]
005098A0  89 9E 18 03 00 00         MOV dword ptr [ESI + 0x318],EBX
005098A6  3B C3                     CMP EAX,EBX
005098A8  74 09                     JZ 0x005098b3
005098AA  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005098AD  50                        PUSH EAX
005098AE  E8 FD BD 1D 00            CALL 0x006e56b0
LAB_005098b3:
005098B3  89 9E D0 09 00 00         MOV dword ptr [ESI + 0x9d0],EBX
005098B9  8D BE 15 0A 00 00         LEA EDI,[ESI + 0xa15]
005098BF  BB 06 00 00 00            MOV EBX,0x6
LAB_005098c4:
005098C4  8B 07                     MOV EAX,dword ptr [EDI]
005098C6  85 C0                     TEST EAX,EAX
005098C8  74 0F                     JZ 0x005098d9
005098CA  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005098CD  50                        PUSH EAX
005098CE  E8 DD BD 1D 00            CALL 0x006e56b0
005098D3  C7 07 00 00 00 00         MOV dword ptr [EDI],0x0
LAB_005098d9:
005098D9  83 C7 04                  ADD EDI,0x4
005098DC  4B                        DEC EBX
005098DD  75 E5                     JNZ 0x005098c4
005098DF  8A 86 FA 0B 00 00         MOV AL,byte ptr [ESI + 0xbfa]
005098E5  84 C0                     TEST AL,AL
005098E7  0F 84 28 07 00 00         JZ 0x0050a015
005098ED  3C 03                     CMP AL,0x3
005098EF  0F 84 20 07 00 00         JZ 0x0050a015
005098F5  3C 04                     CMP AL,0x4
005098F7  0F 84 18 07 00 00         JZ 0x0050a015
005098FD  B9 14 00 00 00            MOV ECX,0x14
00509902  33 C0                     XOR EAX,EAX
00509904  8D 7D 94                  LEA EDI,[EBP + -0x6c]
00509907  88 45 F4                  MOV byte ptr [EBP + -0xc],AL
0050990A  F3 AB                     STOSD.REP ES:EDI
0050990C  8D 8E 6A 08 00 00         LEA ECX,[ESI + 0x86a]
00509912  8D 86 FE 0B 00 00         LEA EAX,[ESI + 0xbfe]
00509918  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0050991B  B9 01 F4 FF FF            MOV ECX,0xfffff401
00509920  2B CE                     SUB ECX,ESI
00509922  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00509925  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
LAB_00509928:
00509928  80 38 00                  CMP byte ptr [EAX],0x0
0050992B  0F 84 D1 00 00 00         JZ 0x00509a02
00509931  03 C1                     ADD EAX,ECX
00509933  BF 0E 00 00 00            MOV EDI,0xe
00509938  83 F8 04                  CMP EAX,0x4
0050993B  BB 0F 00 00 00            MOV EBX,0xf
00509940  77 26                     JA 0x00509968
switchD_00509942::switchD:
00509942  FF 24 85 98 A0 50 00      JMP dword ptr [EAX*0x4 + 0x50a098]
switchD_00509942::caseD_0:
00509949  BF 4B 00 00 00            MOV EDI,0x4b
0050994E  EB 18                     JMP 0x00509968
switchD_00509942::caseD_1:
00509950  BF 88 00 00 00            MOV EDI,0x88
00509955  EB 11                     JMP 0x00509968
switchD_00509942::caseD_3:
00509957  BF 88 00 00 00            MOV EDI,0x88
0050995C  EB 05                     JMP 0x00509963
switchD_00509942::caseD_4:
0050995E  BF 4B 00 00 00            MOV EDI,0x4b
switchD_00509942::caseD_2:
00509963  BB 37 00 00 00            MOV EBX,0x37
switchD_00509942::default:
00509968  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0050996B  8B CE                     MOV ECX,ESI
0050996D  52                        PUSH EDX
0050996E  6A 00                     PUSH 0x0
00509970  E8 C9 97 EF FF            CALL 0x0040313e
00509975  8A 86 FC 0B 00 00         MOV AL,byte ptr [ESI + 0xbfc]
0050997B  84 C0                     TEST AL,AL
0050997D  74 0D                     JZ 0x0050998c
0050997F  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00509982  33 C0                     XOR EAX,EAX
00509984  8A 41 06                  MOV AL,byte ptr [ECX + 0x6]
00509987  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0050998A  EB 07                     JMP 0x00509993
LAB_0050998c:
0050998C  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_00509993:
00509993  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00509996  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00509999  8B 86 F5 0B 00 00         MOV EAX,dword ptr [ESI + 0xbf5]
0050999F  6A 00                     PUSH 0x0
005099A1  52                        PUSH EDX
005099A2  8A 11                     MOV DL,byte ptr [ECX]
005099A4  6A 00                     PUSH 0x0
005099A6  6A 01                     PUSH 0x1
005099A8  6A 00                     PUSH 0x0
005099AA  50                        PUSH EAX
005099AB  52                        PUSH EDX
005099AC  E8 E2 BA EF FF            CALL 0x00405493
005099B1  83 C4 08                  ADD ESP,0x8
005099B4  50                        PUSH EAX
005099B5  E8 C2 BD EF FF            CALL 0x0040577c
005099BA  83 C4 08                  ADD ESP,0x8
005099BD  50                        PUSH EAX
005099BE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005099C1  6A 01                     PUSH 0x1
005099C3  53                        PUSH EBX
005099C4  57                        PUSH EDI
005099C5  50                        PUSH EAX
005099C6  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
005099C9  6A 05                     PUSH 0x5
005099CB  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
005099CE  C1 E1 05                  SHL ECX,0x5
005099D1  2B C8                     SUB ECX,EAX
005099D3  8D 94 8D C0 F4 FF FF      LEA EDX,[EBP + ECX*0x4 + 0xfffff4c0]
005099DA  8B CE                     MOV ECX,ESI
005099DC  52                        PUSH EDX
005099DD  E8 D8 A7 EF FF            CALL 0x004041ba
005099E2  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
005099E5  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
005099E8  C1 E1 05                  SHL ECX,0x5
005099EB  2B C8                     SUB ECX,EAX
005099ED  40                        INC EAX
005099EE  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
005099F1  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
005099F4  C7 84 8D D0 F5 FF FF 01 00 00 00  MOV dword ptr [EBP + ECX*0x4 + 0xfffff5d0],0x1
005099FF  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
LAB_00509a02:
00509A02  8A 55 F4                  MOV DL,byte ptr [EBP + -0xc]
00509A05  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
00509A08  FE C2                     INC DL
00509A0A  83 C7 27                  ADD EDI,0x27
00509A0D  40                        INC EAX
00509A0E  80 FA 06                  CMP DL,0x6
00509A11  88 55 F4                  MOV byte ptr [EBP + -0xc],DL
00509A14  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
00509A17  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00509A1A  0F 82 08 FF FF FF         JC 0x00509928
00509A20  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00509A23  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00509A26  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
00509A29  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
00509A2C  8D 45 94                  LEA EAX,[EBP + -0x6c]
00509A2F  6A 00                     PUSH 0x0
00509A31  8D 95 C0 F4 FF FF         LEA EDX,[EBP + 0xfffff4c0]
00509A37  BB 02 00 00 00            MOV EBX,0x2
00509A3C  50                        PUSH EAX
00509A3D  8D 86 02 03 00 00         LEA EAX,[ESI + 0x302]
00509A43  C7 45 94 01 00 00 00      MOV dword ptr [EBP + -0x6c],0x1
00509A4A  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
00509A4D  C7 45 98 FF FF FF FF      MOV dword ptr [EBP + -0x68],0xffffffff
00509A54  89 5D A8                  MOV dword ptr [EBP + -0x58],EBX
00509A57  C7 45 AC 03 B2 00 00      MOV dword ptr [EBP + -0x54],0xb203
00509A5E  89 5D C8                  MOV dword ptr [EBP + -0x38],EBX
00509A61  C7 45 CC 04 B2 00 00      MOV dword ptr [EBP + -0x34],0xb204
00509A68  8B 11                     MOV EDX,dword ptr [ECX]
00509A6A  6A 00                     PUSH 0x0
00509A6C  50                        PUSH EAX
00509A6D  6A 09                     PUSH 0x9
00509A6F  FF 52 08                  CALL dword ptr [EDX + 0x8]
00509A72  6A 00                     PUSH 0x0
00509A74  8B CE                     MOV ECX,ESI
00509A76  E8 26 B1 EF FF            CALL 0x00404ba1
00509A7B  8B 86 C4 09 00 00         MOV EAX,dword ptr [ESI + 0x9c4]
00509A81  85 C0                     TEST EAX,EAX
00509A83  74 2D                     JZ 0x00509ab2
00509A85  8A 8E FC 0B 00 00         MOV CL,byte ptr [ESI + 0xbfc]
00509A8B  C7 46 28 20 00 00 00      MOV dword ptr [ESI + 0x28],0x20
00509A92  84 C9                     TEST CL,CL
00509A94  74 0A                     JZ 0x00509aa0
00509A96  33 C9                     XOR ECX,ECX
00509A98  8A 8E 0A 0C 00 00         MOV CL,byte ptr [ESI + 0xc0a]
00509A9E  EB 02                     JMP 0x00509aa2
LAB_00509aa0:
00509AA0  33 C9                     XOR ECX,ECX
LAB_00509aa2:
00509AA2  89 4E 2C                  MOV dword ptr [ESI + 0x2c],ECX
00509AA5  8D 4E 18                  LEA ECX,[ESI + 0x18]
00509AA8  51                        PUSH ECX
00509AA9  50                        PUSH EAX
00509AAA  53                        PUSH EBX
00509AAB  8B CE                     MOV ECX,ESI
00509AAD  E8 CE C5 1D 00            CALL 0x006e6080
LAB_00509ab2:
00509AB2  80 BE FB 0B 00 00 02      CMP byte ptr [ESI + 0xbfb],0x2
00509AB9  0F 84 A1 00 00 00         JZ 0x00509b60
00509ABF  8B 86 F5 0B 00 00         MOV EAX,dword ptr [ESI + 0xbf5]
00509AC5  83 C0 CE                  ADD EAX,-0x32
00509AC8  83 F8 1E                  CMP EAX,0x1e
00509ACB  0F 87 6A 05 00 00         JA 0x0050a03b
00509AD1  33 D2                     XOR EDX,EDX
00509AD3  8A 90 CC A0 50 00         MOV DL,byte ptr [EAX + 0x50a0cc]
switchD_00509ad9::switchD:
00509AD9  FF 24 95 AC A0 50 00      JMP dword ptr [EDX*0x4 + 0x50a0ac]
switchD_00509ad9::caseD_43:
00509AE0  8A 86 FC 0B 00 00         MOV AL,byte ptr [ESI + 0xbfc]
00509AE6  84 C0                     TEST AL,AL
00509AE8  74 11                     JZ 0x00509afb
00509AEA  8A 86 11 0C 00 00         MOV AL,byte ptr [ESI + 0xc11]
00509AF0  F6 D8                     NEG AL
00509AF2  1B C0                     SBB EAX,EAX
00509AF4  23 C3                     AND EAX,EBX
00509AF6  40                        INC EAX
00509AF7  8B F8                     MOV EDI,EAX
00509AF9  EB 02                     JMP 0x00509afd
LAB_00509afb:
00509AFB  33 FF                     XOR EDI,EDI
LAB_00509afd:
00509AFD  6A 00                     PUSH 0x0
00509AFF  6A 00                     PUSH 0x0
00509B01  6A 00                     PUSH 0x0
00509B03  6A 00                     PUSH 0x0
00509B05  6A 00                     PUSH 0x0
00509B07  6A 00                     PUSH 0x0
00509B09  6A 00                     PUSH 0x0
00509B0B  68 2E B1 00 00            PUSH 0xb12e
00509B10  68 2D B1 00 00            PUSH 0xb12d
00509B15  6A 00                     PUSH 0x0
00509B17  68 C0 23 7C 00            PUSH 0x7c23c0
00509B1C  E8 5B BC EF FF            CALL 0x0040577c
00509B21  83 C4 08                  ADD ESP,0x8
00509B24  8B CE                     MOV ECX,ESI
00509B26  50                        PUSH EAX
00509B27  6A 01                     PUSH 0x1
00509B29  6A 58                     PUSH 0x58
00509B2B  6A FF                     PUSH -0x1
00509B2D  57                        PUSH EDI
00509B2E  6A 03                     PUSH 0x3
00509B30  6A 05                     PUSH 0x5
00509B32  E8 B2 7C EF FF            CALL 0x004017e9
00509B37  8B 95 F8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffef8]
00509B3D  89 86 0C 03 00 00         MOV dword ptr [ESI + 0x30c],EAX
00509B43  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00509B49  5F                        POP EDI
00509B4A  5E                        POP ESI
00509B4B  5B                        POP EBX
00509B4C  8B E5                     MOV ESP,EBP
00509B4E  5D                        POP EBP
00509B4F  C2 04 00                  RET 0x4
switchD_00509ad9::caseD_32:
00509B52  8B 86 12 0C 00 00         MOV EAX,dword ptr [ESI + 0xc12]
00509B58  85 C0                     TEST EAX,EAX
00509B5A  0F 84 DB 04 00 00         JZ 0x0050a03b
LAB_00509b60:
00509B60  6A 00                     PUSH 0x0
00509B62  6A 00                     PUSH 0x0
00509B64  6A 00                     PUSH 0x0
00509B66  6A 00                     PUSH 0x0
00509B68  6A 00                     PUSH 0x0
00509B6A  6A 00                     PUSH 0x0
00509B6C  6A 00                     PUSH 0x0
00509B6E  68 3F B1 00 00            PUSH 0xb13f
00509B73  68 2F B1 00 00            PUSH 0xb12f
00509B78  6A 00                     PUSH 0x0
00509B7A  68 B4 23 7C 00            PUSH 0x7c23b4
00509B7F  E8 F8 BB EF FF            CALL 0x0040577c
00509B84  8A 9E FC 0B 00 00         MOV BL,byte ptr [ESI + 0xbfc]
00509B8A  83 C4 08                  ADD ESP,0x8
00509B8D  33 C9                     XOR ECX,ECX
00509B8F  50                        PUSH EAX
00509B90  6A 01                     PUSH 0x1
00509B92  84 DB                     TEST BL,BL
00509B94  6A 6E                     PUSH 0x6e
00509B96  68 92 00 00 00            PUSH 0x92
00509B9B  0F 95 C1                  SETNZ CL
00509B9E  51                        PUSH ECX
00509B9F  6A 00                     PUSH 0x0
00509BA1  6A 05                     PUSH 0x5
00509BA3  8B CE                     MOV ECX,ESI
00509BA5  E8 3F 7C EF FF            CALL 0x004017e9
00509BAA  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00509BAD  89 02                     MOV dword ptr [EDX],EAX
00509BAF  8B 95 F8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffef8]
00509BB5  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00509BBB  5F                        POP EDI
00509BBC  5E                        POP ESI
00509BBD  5B                        POP EBX
00509BBE  8B E5                     MOV ESP,EBP
00509BC0  5D                        POP EBP
00509BC1  C2 04 00                  RET 0x4
switchD_00509ad9::caseD_35:
00509BC4  8A 86 31 0C 00 00         MOV AL,byte ptr [ESI + 0xc31]
00509BCA  84 C0                     TEST AL,AL
00509BCC  0F 84 69 04 00 00         JZ 0x0050a03b
00509BD2  6A 00                     PUSH 0x0
00509BD4  6A 00                     PUSH 0x0
00509BD6  6A 00                     PUSH 0x0
00509BD8  6A 00                     PUSH 0x0
00509BDA  6A 00                     PUSH 0x0
00509BDC  6A 00                     PUSH 0x0
00509BDE  6A 00                     PUSH 0x0
00509BE0  68 3F B1 00 00            PUSH 0xb13f
00509BE5  68 2F B1 00 00            PUSH 0xb12f
00509BEA  6A 00                     PUSH 0x0
00509BEC  68 B4 23 7C 00            PUSH 0x7c23b4
00509BF1  E8 86 BB EF FF            CALL 0x0040577c
00509BF6  8A 9E FC 0B 00 00         MOV BL,byte ptr [ESI + 0xbfc]
00509BFC  83 C4 08                  ADD ESP,0x8
00509BFF  50                        PUSH EAX
00509C00  33 C0                     XOR EAX,EAX
00509C02  84 DB                     TEST BL,BL
00509C04  6A 01                     PUSH 0x1
00509C06  6A 6E                     PUSH 0x6e
00509C08  0F 95 C0                  SETNZ AL
00509C0B  68 92 00 00 00            PUSH 0x92
00509C10  50                        PUSH EAX
LAB_00509c11:
00509C11  6A 00                     PUSH 0x0
00509C13  6A 05                     PUSH 0x5
00509C15  8B CE                     MOV ECX,ESI
00509C17  E8 CD 7B EF FF            CALL 0x004017e9
00509C1C  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00509C1F  8B 95 F8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffef8]
00509C25  89 01                     MOV dword ptr [ECX],EAX
00509C27  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00509C2D  5F                        POP EDI
00509C2E  5E                        POP ESI
00509C2F  5B                        POP EBX
00509C30  8B E5                     MOV ESP,EBP
00509C32  5D                        POP EBP
00509C33  C2 04 00                  RET 0x4
switchD_00509ad9::caseD_3c:
00509C36  80 BE 3C 0C 00 00 01      CMP byte ptr [ESI + 0xc3c],0x1
00509C3D  0F 85 F8 03 00 00         JNZ 0x0050a03b
00509C43  6A 00                     PUSH 0x0
00509C45  6A 00                     PUSH 0x0
00509C47  6A 00                     PUSH 0x0
00509C49  6A 00                     PUSH 0x0
00509C4B  6A 00                     PUSH 0x0
00509C4D  6A 00                     PUSH 0x0
00509C4F  6A 00                     PUSH 0x0
00509C51  68 3F B1 00 00            PUSH 0xb13f
00509C56  68 2F B1 00 00            PUSH 0xb12f
00509C5B  6A 00                     PUSH 0x0
00509C5D  68 B4 23 7C 00            PUSH 0x7c23b4
00509C62  E8 15 BB EF FF            CALL 0x0040577c
00509C67  8A 9E FC 0B 00 00         MOV BL,byte ptr [ESI + 0xbfc]
00509C6D  83 C4 08                  ADD ESP,0x8
00509C70  33 D2                     XOR EDX,EDX
00509C72  50                        PUSH EAX
00509C73  6A 01                     PUSH 0x1
00509C75  84 DB                     TEST BL,BL
00509C77  6A 6E                     PUSH 0x6e
00509C79  68 92 00 00 00            PUSH 0x92
00509C7E  0F 95 C2                  SETNZ DL
00509C81  52                        PUSH EDX
00509C82  EB 8D                     JMP 0x00509c11
switchD_00509ad9::caseD_33:
00509C84  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
00509C87  BB 2F B1 00 00            MOV EBX,0xb12f
00509C8C  C7 45 F8 4C 00 00 00      MOV dword ptr [EBP + -0x8],0x4c
00509C93  C7 45 FC 02 00 00 00      MOV dword ptr [EBP + -0x4],0x2
LAB_00509c9a:
00509C9A  8B 87 FE 08 00 00         MOV EAX,dword ptr [EDI + 0x8fe]
00509CA0  85 C0                     TEST EAX,EAX
00509CA2  74 4A                     JZ 0x00509cee
00509CA4  6A 00                     PUSH 0x0
00509CA6  6A 00                     PUSH 0x0
00509CA8  6A 00                     PUSH 0x0
00509CAA  6A 00                     PUSH 0x0
00509CAC  6A 00                     PUSH 0x0
00509CAE  6A 00                     PUSH 0x0
00509CB0  6A 00                     PUSH 0x0
00509CB2  68 3F B1 00 00            PUSH 0xb13f
00509CB7  53                        PUSH EBX
00509CB8  6A 00                     PUSH 0x0
00509CBA  68 B4 23 7C 00            PUSH 0x7c23b4
00509CBF  E8 B8 BA EF FF            CALL 0x0040577c
00509CC4  8A 8E FC 0B 00 00         MOV CL,byte ptr [ESI + 0xbfc]
00509CCA  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00509CCD  83 C4 08                  ADD ESP,0x8
00509CD0  50                        PUSH EAX
00509CD1  33 C0                     XOR EAX,EAX
00509CD3  84 C9                     TEST CL,CL
00509CD5  6A 01                     PUSH 0x1
00509CD7  52                        PUSH EDX
00509CD8  0F 95 C0                  SETNZ AL
00509CDB  68 92 00 00 00            PUSH 0x92
00509CE0  50                        PUSH EAX
00509CE1  6A 00                     PUSH 0x0
00509CE3  6A 05                     PUSH 0x5
00509CE5  8B CE                     MOV ECX,ESI
00509CE7  E8 FD 7A EF FF            CALL 0x004017e9
00509CEC  89 07                     MOV dword ptr [EDI],EAX
LAB_00509cee:
00509CEE  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00509CF1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00509CF4  83 C7 04                  ADD EDI,0x4
00509CF7  43                        INC EBX
00509CF8  83 C1 22                  ADD ECX,0x22
00509CFB  48                        DEC EAX
00509CFC  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00509CFF  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00509D02  75 96                     JNZ 0x00509c9a
00509D04  8B 95 F8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffef8]
00509D0A  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00509D10  5F                        POP EDI
00509D11  5E                        POP ESI
00509D12  5B                        POP EBX
00509D13  8B E5                     MOV ESP,EBP
00509D15  5D                        POP EBP
00509D16  C2 04 00                  RET 0x4
switchD_00509ad9::caseD_34:
00509D19  B9 16 00 00 00            MOV ECX,0x16
00509D1E  33 C0                     XOR EAX,EAX
00509D20  8D BD 3C FF FF FF         LEA EDI,[EBP + 0xffffff3c]
00509D26  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00509D29  F3 AB                     STOSD.REP ES:EDI
00509D2B  B9 54 00 00 00            MOV ECX,0x54
00509D30  8D BD A8 FD FF FF         LEA EDI,[EBP + 0xfffffda8]
00509D36  F3 AB                     STOSD.REP ES:EDI
00509D38  8B 8E 38 01 00 00         MOV ECX,dword ptr [ESI + 0x138]
00509D3E  8B 7E 50                  MOV EDI,dword ptr [ESI + 0x50]
00509D41  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00509D44  33 C9                     XOR ECX,ECX
00509D46  8D 85 AC FD FF FF         LEA EAX,[EBP + 0xfffffdac]
00509D4C  83 C7 63                  ADD EDI,0x63
LAB_00509d4f:
00509D4F  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00509D52  8D 59 01                  LEA EBX,[ECX + 0x1]
00509D55  89 58 FC                  MOV dword ptr [EAX + -0x4],EBX
00509D58  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
00509D5E  89 78 08                  MOV dword ptr [EAX + 0x8],EDI
00509D61  C7 40 10 2E 00 00 00      MOV dword ptr [EAX + 0x10],0x2e
00509D68  85 D2                     TEST EDX,EDX
00509D6A  74 08                     JZ 0x00509d74
00509D6C  8B 96 A8 00 00 00         MOV EDX,dword ptr [ESI + 0xa8]
00509D72  EB 06                     JMP 0x00509d7a
LAB_00509d74:
00509D74  8B 15 34 67 80 00         MOV EDX,dword ptr [0x00806734]
LAB_00509d7a:
00509D7A  83 C2 22                  ADD EDX,0x22
00509D7D  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
00509D80  33 D2                     XOR EDX,EDX
00509D82  C7 40 14 10 00 00 00      MOV dword ptr [EAX + 0x14],0x10
00509D89  89 50 44                  MOV dword ptr [EAX + 0x44],EDX
00509D8C  C7 40 54 01 01 00 00      MOV dword ptr [EAX + 0x54],0x101
00509D93  C7 40 28 01 01 00 00      MOV dword ptr [EAX + 0x28],0x101
00509D9A  C7 40 58 03 00 00 00      MOV dword ptr [EAX + 0x58],0x3
00509DA1  C7 40 2C 03 00 00 00      MOV dword ptr [EAX + 0x2c],0x3
00509DA8  C7 40 30 01 42 00 00      MOV dword ptr [EAX + 0x30],0x4201
00509DAF  C7 40 5C 02 42 00 00      MOV dword ptr [EAX + 0x5c],0x4202
00509DB6  66 89 50 60               MOV word ptr [EAX + 0x60],DX
00509DBA  66 89 50 34               MOV word ptr [EAX + 0x34],DX
00509DBE  66 C7 40 62 02 00         MOV word ptr [EAX + 0x62],0x2
00509DC4  2B CA                     SUB ECX,EDX
00509DC6  66 C7 40 36 02 00         MOV word ptr [EAX + 0x36],0x2
00509DCC  74 0A                     JZ 0x00509dd8
00509DCE  49                        DEC ECX
00509DCF  75 12                     JNZ 0x00509de3
00509DD1  B9 A7 3A 00 00            MOV ECX,0x3aa7
00509DD6  EB 05                     JMP 0x00509ddd
LAB_00509dd8:
00509DD8  B9 A6 3A 00 00            MOV ECX,0x3aa6
LAB_00509ddd:
00509DDD  89 48 64                  MOV dword ptr [EAX + 0x64],ECX
00509DE0  89 48 38                  MOV dword ptr [EAX + 0x38],ECX
LAB_00509de3:
00509DE3  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00509DE6  83 C7 31                  ADD EDI,0x31
00509DE9  83 C0 70                  ADD EAX,0x70
00509DEC  4A                        DEC EDX
00509DED  8B CB                     MOV ECX,EBX
00509DEF  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00509DF2  0F 85 57 FF FF FF         JNZ 0x00509d4f
00509DF8  8D 85 A8 FD FF FF         LEA EAX,[EBP + 0xfffffda8]
00509DFE  33 D2                     XOR EDX,EDX
00509E00  8A 96 D4 09 00 00         MOV DL,byte ptr [ESI + 0x9d4]
00509E06  89 45 84                  MOV dword ptr [EBP + -0x7c],EAX
00509E09  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00509E0C  B9 01 00 00 00            MOV ECX,0x1
00509E11  89 85 4C FF FF FF         MOV dword ptr [EBP + 0xffffff4c],EAX
00509E17  89 85 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],EAX
00509E1D  8D 85 3C FF FF FF         LEA EAX,[EBP + 0xffffff3c]
00509E23  89 8D 3C FF FF FF         MOV dword ptr [EBP + 0xffffff3c],ECX
00509E29  89 8D 40 FF FF FF         MOV dword ptr [EBP + 0xffffff40],ECX
00509E2F  89 55 88                  MOV dword ptr [EBP + -0x78],EDX
00509E32  89 4D 8C                  MOV dword ptr [EBP + -0x74],ECX
00509E35  89 4D 90                  MOV dword ptr [EBP + -0x70],ECX
00509E38  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00509E3B  6A 00                     PUSH 0x0
00509E3D  BA 02 00 00 00            MOV EDX,0x2
00509E42  50                        PUSH EAX
00509E43  8D 86 D0 09 00 00         LEA EAX,[ESI + 0x9d0]
00509E49  89 95 50 FF FF FF         MOV dword ptr [EBP + 0xffffff50],EDX
00509E4F  C7 85 54 FF FF FF 07 B2 00 00  MOV dword ptr [EBP + 0xffffff54],0xb207
00509E59  89 95 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EDX
00509E5F  C7 85 74 FF FF FF 06 B2 00 00  MOV dword ptr [EBP + 0xffffff74],0xb206
00509E69  8B 11                     MOV EDX,dword ptr [ECX]
00509E6B  6A 00                     PUSH 0x0
00509E6D  50                        PUSH EAX
00509E6E  6A 05                     PUSH 0x5
00509E70  FF 52 08                  CALL dword ptr [EDX + 0x8]
00509E73  8B 96 94 01 00 00         MOV EDX,dword ptr [ESI + 0x194]
00509E79  8B 8E F9 09 00 00         MOV ECX,dword ptr [ESI + 0x9f9]
00509E7F  C6 45 F8 00               MOV byte ptr [EBP + -0x8],0x0
00509E83  C7 45 F4 3B 00 00 00      MOV dword ptr [EBP + -0xc],0x3b
00509E8A  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
00509E8D  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
00509E90  2B C2                     SUB EAX,EDX
00509E92  B9 3A 00 00 00            MOV ECX,0x3a
00509E97  99                        CDQ
00509E98  2B C2                     SUB EAX,EDX
00509E9A  8D 96 2D 0A 00 00         LEA EDX,[ESI + 0xa2d]
00509EA0  8B D8                     MOV EBX,EAX
00509EA2  33 C0                     XOR EAX,EAX
00509EA4  8B FA                     MOV EDI,EDX
00509EA6  F3 AB                     STOSD.REP ES:EDI
00509EA8  D1 FB                     SAR EBX,0x1
00509EAA  66 AB                     STOSW ES:EDI
00509EAC  83 C3 08                  ADD EBX,0x8
00509EAF  8D 86 15 0A 00 00         LEA EAX,[ESI + 0xa15]
00509EB5  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
00509EB8  BB 8F B1 00 00            MOV EBX,0xb18f
00509EBD  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00509EC0  8B FA                     MOV EDI,EDX
LAB_00509ec2:
00509EC2  C6 07 02                  MOV byte ptr [EDI],0x2
00509EC5  A0 4E 87 80 00            MOV AL,[0x0080874e]
00509ECA  3C 01                     CMP AL,0x1
00509ECC  75 11                     JNZ 0x00509edf
00509ECE  8A 96 D4 09 00 00         MOV DL,byte ptr [ESI + 0x9d4]
00509ED4  33 C0                     XOR EAX,EAX
00509ED6  80 FA 01                  CMP DL,0x1
00509ED9  0F 95 C0                  SETNZ AL
00509EDC  40                        INC EAX
00509EDD  EB 0F                     JMP 0x00509eee
LAB_00509edf:
00509EDF  8A 86 D4 09 00 00         MOV AL,byte ptr [ESI + 0x9d4]
00509EE5  FE C8                     DEC AL
00509EE7  F6 D8                     NEG AL
00509EE9  1B C0                     SBB EAX,EAX
00509EEB  83 C0 02                  ADD EAX,0x2
LAB_00509eee:
00509EEE  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00509EF1  51                        PUSH ECX
00509EF2  50                        PUSH EAX
00509EF3  E8 C5 95 EF FF            CALL 0x004034bd
00509EF8  83 C4 08                  ADD ESP,0x8
00509EFB  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00509EFE  8D 53 10                  LEA EDX,[EBX + 0x10]
00509F01  89 47 01                  MOV dword ptr [EDI + 0x1],EAX
00509F04  6A 00                     PUSH 0x0
00509F06  6A 0A                     PUSH 0xa
00509F08  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00509F0B  6A 11                     PUSH 0x11
00509F0D  6A 00                     PUSH 0x0
00509F0F  57                        PUSH EDI
00509F10  6A 00                     PUSH 0x0
00509F12  6A 01                     PUSH 0x1
00509F14  52                        PUSH EDX
00509F15  53                        PUSH EBX
00509F16  6A 00                     PUSH 0x0
00509F18  6A 00                     PUSH 0x0
00509F1A  50                        PUSH EAX
00509F1B  51                        PUSH ECX
00509F1C  8A 8E FC 0B 00 00         MOV CL,byte ptr [ESI + 0xbfc]
00509F22  33 D2                     XOR EDX,EDX
00509F24  84 C9                     TEST CL,CL
00509F26  0F 95 C2                  SETNZ DL
00509F29  52                        PUSH EDX
00509F2A  6A 00                     PUSH 0x0
00509F2C  6A 05                     PUSH 0x5
00509F2E  8B CE                     MOV ECX,ESI
00509F30  E8 B4 78 EF FF            CALL 0x004017e9
00509F35  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00509F38  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00509F3B  83 C7 27                  ADD EDI,0x27
00509F3E  83 C2 0B                  ADD EDX,0xb
00509F41  89 01                     MOV dword ptr [ECX],EAX
00509F43  8A 45 F8                  MOV AL,byte ptr [EBP + -0x8]
00509F46  FE C0                     INC AL
00509F48  43                        INC EBX
00509F49  83 C1 04                  ADD ECX,0x4
00509F4C  3C 06                     CMP AL,0x6
00509F4E  88 45 F8                  MOV byte ptr [EBP + -0x8],AL
00509F51  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00509F54  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00509F57  0F 82 65 FF FF FF         JC 0x00509ec2
00509F5D  8B 95 F8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffef8]
00509F63  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00509F69  5F                        POP EDI
00509F6A  5E                        POP ESI
00509F6B  5B                        POP EBX
00509F6C  8B E5                     MOV ESP,EBP
00509F6E  5D                        POP EBP
00509F6F  C2 04 00                  RET 0x4
switchD_00509ad9::caseD_50:
00509F72  8B 8E F9 09 00 00         MOV ECX,dword ptr [ESI + 0x9f9]
00509F78  8B 96 94 01 00 00         MOV EDX,dword ptr [ESI + 0x194]
00509F7E  BF 7F B1 00 00            MOV EDI,0xb17f
00509F83  C7 45 F8 06 00 00 00      MOV dword ptr [EBP + -0x8],0x6
00509F8A  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
00509F8D  8B 59 04                  MOV EBX,dword ptr [ECX + 0x4]
00509F90  2B C3                     SUB EAX,EBX
00509F92  BB 3B 00 00 00            MOV EBX,0x3b
00509F97  99                        CDQ
00509F98  2B C2                     SUB EAX,EDX
00509F9A  D1 F8                     SAR EAX,0x1
00509F9C  83 C0 08                  ADD EAX,0x8
00509F9F  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00509FA2  8D 86 15 0A 00 00         LEA EAX,[ESI + 0xa15]
00509FA8  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_00509fab:
00509FAB  8D 47 F0                  LEA EAX,[EDI + -0x10]
00509FAE  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00509FB1  50                        PUSH EAX
00509FB2  6A 0A                     PUSH 0xa
00509FB4  68 AA 00 00 00            PUSH 0xaa
00509FB9  6A 00                     PUSH 0x0
00509FBB  68 20 4F 00 00            PUSH 0x4f20
00509FC0  6A 00                     PUSH 0x0
00509FC2  6A 02                     PUSH 0x2
00509FC4  8D 4F E0                  LEA ECX,[EDI + -0x20]
00509FC7  57                        PUSH EDI
00509FC8  51                        PUSH ECX
00509FC9  8A 8E FC 0B 00 00         MOV CL,byte ptr [ESI + 0xbfc]
00509FCF  33 C0                     XOR EAX,EAX
00509FD1  6A 00                     PUSH 0x0
00509FD3  6A 00                     PUSH 0x0
00509FD5  84 C9                     TEST CL,CL
00509FD7  53                        PUSH EBX
00509FD8  52                        PUSH EDX
00509FD9  0F 95 C0                  SETNZ AL
00509FDC  50                        PUSH EAX
00509FDD  6A 00                     PUSH 0x0
00509FDF  6A 05                     PUSH 0x5
00509FE1  8B CE                     MOV ECX,ESI
00509FE3  E8 01 78 EF FF            CALL 0x004017e9
00509FE8  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00509FEB  47                        INC EDI
00509FEC  83 C3 0B                  ADD EBX,0xb
00509FEF  89 01                     MOV dword ptr [ECX],EAX
00509FF1  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00509FF4  83 C1 04                  ADD ECX,0x4
00509FF7  48                        DEC EAX
00509FF8  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00509FFB  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00509FFE  75 AB                     JNZ 0x00509fab
0050A000  8B 95 F8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffef8]
0050A006  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0050A00C  5F                        POP EDI
0050A00D  5E                        POP ESI
0050A00E  5B                        POP EBX
0050A00F  8B E5                     MOV ESP,EBP
0050A011  5D                        POP EBP
0050A012  C2 04 00                  RET 0x4
LAB_0050a015:
0050A015  8B 86 C4 09 00 00         MOV EAX,dword ptr [ESI + 0x9c4]
0050A01B  85 C0                     TEST EAX,EAX
0050A01D  74 1C                     JZ 0x0050a03b
0050A01F  8D 4E 18                  LEA ECX,[ESI + 0x18]
0050A022  C7 46 28 20 00 00 00      MOV dword ptr [ESI + 0x28],0x20
0050A029  51                        PUSH ECX
0050A02A  50                        PUSH EAX
0050A02B  6A 02                     PUSH 0x2
0050A02D  8B CE                     MOV ECX,ESI
0050A02F  C7 46 2C 00 00 00 00      MOV dword ptr [ESI + 0x2c],0x0
0050A036  E8 45 C0 1D 00            CALL 0x006e6080
switchD_00509ad9::caseD_36:
0050A03B  8B 95 F8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffef8]
0050A041  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0050A047  5F                        POP EDI
0050A048  5E                        POP ESI
0050A049  5B                        POP EBX
0050A04A  8B E5                     MOV ESP,EBP
0050A04C  5D                        POP EBP
0050A04D  C2 04 00                  RET 0x4
LAB_0050a050:
0050A050  8B 85 F8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffef8]
0050A056  68 98 28 7C 00            PUSH 0x7c2898
0050A05B  68 CC 4C 7A 00            PUSH 0x7a4ccc
0050A060  56                        PUSH ESI
0050A061  53                        PUSH EBX
0050A062  68 3E 05 00 00            PUSH 0x53e
0050A067  68 00 27 7C 00            PUSH 0x7c2700
0050A06C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0050A071  E8 5A 34 1A 00            CALL 0x006ad4d0
0050A076  83 C4 18                  ADD ESP,0x18
0050A079  85 C0                     TEST EAX,EAX
0050A07B  74 01                     JZ 0x0050a07e
0050A07D  CC                        INT3
LAB_0050a07e:
0050A07E  68 3E 05 00 00            PUSH 0x53e
0050A083  68 00 27 7C 00            PUSH 0x7c2700
0050A088  53                        PUSH EBX
0050A089  56                        PUSH ESI
0050A08A  E8 B1 BD 19 00            CALL 0x006a5e40
0050A08F  5F                        POP EDI
0050A090  5E                        POP ESI
0050A091  5B                        POP EBX
0050A092  8B E5                     MOV ESP,EBP
0050A094  5D                        POP EBP
0050A095  C2 04 00                  RET 0x4
