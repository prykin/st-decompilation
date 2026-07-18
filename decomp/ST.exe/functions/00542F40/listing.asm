InterSystemC::GetMessage:
00542F40  55                        PUSH EBP
00542F41  8B EC                     MOV EBP,ESP
00542F43  83 EC 4C                  SUB ESP,0x4c
00542F46  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00542F4B  53                        PUSH EBX
00542F4C  56                        PUSH ESI
00542F4D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00542F50  57                        PUSH EDI
00542F51  8D 55 B8                  LEA EDX,[EBP + -0x48]
00542F54  8D 4D B4                  LEA ECX,[EBP + -0x4c]
00542F57  6A 00                     PUSH 0x0
00542F59  52                        PUSH EDX
00542F5A  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00542F5D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00542F63  E8 88 A8 1E 00            CALL 0x0072d7f0
00542F68  8B F0                     MOV ESI,EAX
00542F6A  83 C4 08                  ADD ESP,0x8
00542F6D  85 F6                     TEST ESI,ESI
00542F6F  0F 85 38 03 00 00         JNZ 0x005432ad
00542F75  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00542F78  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00542F7B  57                        PUSH EDI
00542F7C  E8 7F 2F 1A 00            CALL 0x006e5f00
00542F81  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
00542F84  3D 03 B9 00 00            CMP EAX,0xb903
00542F89  0F 87 6A 01 00 00         JA 0x005430f9
00542F8F  0F 84 2C 01 00 00         JZ 0x005430c1
00542F95  3D 00 B9 00 00            CMP EAX,0xb900
00542F9A  0F 87 C7 00 00 00         JA 0x00543067
00542FA0  0F 84 E0 01 00 00         JZ 0x00543186
00542FA6  83 F8 05                  CMP EAX,0x5
00542FA9  74 43                     JZ 0x00542fee
00542FAB  3D FF B8 00 00            CMP EAX,0xb8ff
00542FB0  0F 85 E3 02 00 00         JNZ 0x00543299
00542FB6  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
00542FBC  85 C9                     TEST ECX,ECX
00542FBE  74 05                     JZ 0x00542fc5
00542FC0  E8 93 00 EC FF            CALL 0x00403058
LAB_00542fc5:
00542FC5  8B 0D DC 16 80 00         MOV ECX,dword ptr [0x008016dc]
00542FCB  85 C9                     TEST ECX,ECX
00542FCD  0F 84 C6 02 00 00         JZ 0x00543299
00542FD3  6A 01                     PUSH 0x1
00542FD5  E8 68 2A EC FF            CALL 0x00405a42
00542FDA  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00542FDD  33 C0                     XOR EAX,EAX
00542FDF  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00542FE5  5F                        POP EDI
00542FE6  5E                        POP ESI
00542FE7  5B                        POP EBX
00542FE8  8B E5                     MOV ESP,EBP
00542FEA  5D                        POP EBP
00542FEB  C2 04 00                  RET 0x4
LAB_00542fee:
00542FEE  A1 58 2A 80 00            MOV EAX,[0x00802a58]
00542FF3  85 C0                     TEST EAX,EAX
00542FF5  0F 85 9E 02 00 00         JNZ 0x00543299
00542FFB  A1 48 73 80 00            MOV EAX,[0x00807348]
00543000  6A 01                     PUSH 0x1
00543002  25 FF 00 00 00            AND EAX,0xff
00543007  6A 00                     PUSH 0x0
00543009  50                        PUSH EAX
0054300A  6A 01                     PUSH 0x1
0054300C  6A 00                     PUSH 0x0
0054300E  68 C8 7C 7C 00            PUSH 0x7c7cc8
00543013  E8 64 27 EC FF            CALL 0x0040577c
00543018  83 C4 08                  ADD ESP,0x8
0054301B  50                        PUSH EAX
0054301C  E8 DF FB 1A 00            CALL 0x006f2c00
00543021  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
00543027  83 C4 0C                  ADD ESP,0xc
0054302A  50                        PUSH EAX
0054302B  6A 01                     PUSH 0x1
0054302D  E8 AE EC 1A 00            CALL 0x006f1ce0
00543032  50                        PUSH EAX
00543033  6A 01                     PUSH 0x1
00543035  6A 00                     PUSH 0x0
00543037  6A 00                     PUSH 0x0
00543039  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0054303C  E8 F7 06 EC FF            CALL 0x00403738
00543041  83 C4 10                  ADD ESP,0x10
00543044  8D 4D F8                  LEA ECX,[EBP + -0x8]
00543047  51                        PUSH ECX
00543048  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
0054304E  E8 8D F0 1A 00            CALL 0x006f20e0
00543053  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00543056  33 C0                     XOR EAX,EAX
00543058  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0054305E  5F                        POP EDI
0054305F  5E                        POP ESI
00543060  5B                        POP EBX
00543061  8B E5                     MOV ESP,EBP
00543063  5D                        POP EBP
00543064  C2 04 00                  RET 0x4
LAB_00543067:
00543067  2D 01 B9 00 00            SUB EAX,0xb901
0054306C  74 1B                     JZ 0x00543089
0054306E  48                        DEC EAX
0054306F  0F 84 11 01 00 00         JZ 0x00543186
00543075  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00543078  33 C0                     XOR EAX,EAX
0054307A  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00543080  5F                        POP EDI
00543081  5E                        POP ESI
00543082  5B                        POP EBX
00543083  8B E5                     MOV ESP,EBP
00543085  5D                        POP EBP
00543086  C2 04 00                  RET 0x4
LAB_00543089:
00543089  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
0054308F  85 C9                     TEST ECX,ECX
00543091  74 05                     JZ 0x00543098
00543093  E8 C0 FF EB FF            CALL 0x00403058
LAB_00543098:
00543098  8B 0D E4 16 80 00         MOV ECX,dword ptr [0x008016e4]
0054309E  85 C9                     TEST ECX,ECX
005430A0  0F 84 F3 01 00 00         JZ 0x00543299
005430A6  6A 01                     PUSH 0x1
005430A8  E8 B2 11 EC FF            CALL 0x0040425f
005430AD  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
005430B0  33 C0                     XOR EAX,EAX
005430B2  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005430B8  5F                        POP EDI
005430B9  5E                        POP ESI
005430BA  5B                        POP EBX
005430BB  8B E5                     MOV ESP,EBP
005430BD  5D                        POP EBP
005430BE  C2 04 00                  RET 0x4
LAB_005430c1:
005430C1  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
005430C7  85 C9                     TEST ECX,ECX
005430C9  74 05                     JZ 0x005430d0
005430CB  E8 88 FF EB FF            CALL 0x00403058
LAB_005430d0:
005430D0  8B 0D 90 16 80 00         MOV ECX,dword ptr [0x00801690]
005430D6  85 C9                     TEST ECX,ECX
005430D8  0F 84 BB 01 00 00         JZ 0x00543299
005430DE  8B 11                     MOV EDX,dword ptr [ECX]
005430E0  6A 01                     PUSH 0x1
005430E2  FF 52 18                  CALL dword ptr [EDX + 0x18]
005430E5  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
005430E8  33 C0                     XOR EAX,EAX
005430EA  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005430F0  5F                        POP EDI
005430F1  5E                        POP ESI
005430F2  5B                        POP EBX
005430F3  8B E5                     MOV ESP,EBP
005430F5  5D                        POP EBP
005430F6  C2 04 00                  RET 0x4
LAB_005430f9:
005430F9  05 FC 46 FF FF            ADD EAX,0xffff46fc
005430FE  83 F8 04                  CMP EAX,0x4
00543101  0F 87 92 01 00 00         JA 0x00543299
switchD_00543107::switchD:
00543107  FF 24 85 FC 32 54 00      JMP dword ptr [EAX*0x4 + 0x5432fc]
switchD_00543107::caseD_b905:
0054310E  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
00543114  85 C9                     TEST ECX,ECX
00543116  74 05                     JZ 0x0054311d
00543118  E8 3B FF EB FF            CALL 0x00403058
LAB_0054311d:
0054311D  8B 0D DC 16 80 00         MOV ECX,dword ptr [0x008016dc]
00543123  85 C9                     TEST ECX,ECX
00543125  0F 84 6E 01 00 00         JZ 0x00543299
0054312B  6A 0E                     PUSH 0xe
0054312D  E8 10 29 EC FF            CALL 0x00405a42
00543132  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00543135  33 C0                     XOR EAX,EAX
00543137  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0054313D  5F                        POP EDI
0054313E  5E                        POP ESI
0054313F  5B                        POP EBX
00543140  8B E5                     MOV ESP,EBP
00543142  5D                        POP EBP
00543143  C2 04 00                  RET 0x4
switchD_00543107::caseD_b907:
00543146  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
0054314C  85 C9                     TEST ECX,ECX
0054314E  0F 84 45 01 00 00         JZ 0x00543299
00543154  E8 FF FE EB FF            CALL 0x00403058
00543159  A1 30 2A 80 00            MOV EAX,[0x00802a30]
0054315E  68 AE 00 00 00            PUSH 0xae
00543163  C6 80 DE 04 00 00 01      MOV byte ptr [EAX + 0x4de],0x1
0054316A  E8 C0 2C EC FF            CALL 0x00405e2f
0054316F  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00543172  83 C4 04                  ADD ESP,0x4
00543175  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0054317B  33 C0                     XOR EAX,EAX
0054317D  5F                        POP EDI
0054317E  5E                        POP ESI
0054317F  5B                        POP EBX
00543180  8B E5                     MOV ESP,EBP
00543182  5D                        POP EBP
00543183  C2 04 00                  RET 0x4
switchD_00543107::caseD_b904:
00543186  A1 58 2A 80 00            MOV EAX,[0x00802a58]
0054318B  85 C0                     TEST EAX,EAX
0054318D  0F 85 06 01 00 00         JNZ 0x00543299
00543193  8B 77 18                  MOV ESI,dword ptr [EDI + 0x18]
00543196  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00543199  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
0054319C  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
0054319F  51                        PUSH ECX
005431A0  8B 0E                     MOV ECX,dword ptr [ESI]
005431A2  52                        PUSH EDX
005431A3  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005431A9  50                        PUSH EAX
005431AA  51                        PUSH ECX
005431AB  52                        PUSH EDX
005431AC  E8 CF 2D 17 00            CALL 0x006b5f80
005431B1  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
005431B4  2D 00 B9 00 00            SUB EAX,0xb900
005431B9  74 1F                     JZ 0x005431da
005431BB  83 E8 02                  SUB EAX,0x2
005431BE  74 13                     JZ 0x005431d3
005431C0  83 E8 02                  SUB EAX,0x2
005431C3  74 07                     JZ 0x005431cc
005431C5  BB BC 7C 7C 00            MOV EBX,0x7c7cbc
005431CA  EB 13                     JMP 0x005431df
LAB_005431cc:
005431CC  BB AC 7C 7C 00            MOV EBX,0x7c7cac
005431D1  EB 0C                     JMP 0x005431df
LAB_005431d3:
005431D3  BB 9C 7C 7C 00            MOV EBX,0x7c7c9c
005431D8  EB 05                     JMP 0x005431df
LAB_005431da:
005431DA  BB 48 7C 7C 00            MOV EBX,0x7c7c48
LAB_005431df:
005431DF  6A 00                     PUSH 0x0
005431E1  6A 00                     PUSH 0x0
005431E3  6A 01                     PUSH 0x1
005431E5  6A 00                     PUSH 0x0
005431E7  6A FF                     PUSH -0x1
005431E9  57                        PUSH EDI
005431EA  E8 D8 F3 EB FF            CALL 0x004025c7
005431EF  83 C4 04                  ADD ESP,0x4
005431F2  50                        PUSH EAX
005431F3  6A 01                     PUSH 0x1
005431F5  6A 00                     PUSH 0x0
005431F7  53                        PUSH EBX
005431F8  E8 7F 25 EC FF            CALL 0x0040577c
005431FD  83 C4 08                  ADD ESP,0x8
00543200  50                        PUSH EAX
00543201  E8 FA F9 1A 00            CALL 0x006f2c00
00543206  83 C4 0C                  ADD ESP,0xc
00543209  50                        PUSH EAX
0054320A  A1 94 67 80 00            MOV EAX,[0x00806794]
0054320F  6A 01                     PUSH 0x1
00543211  50                        PUSH EAX
00543212  E8 D9 68 1C 00            CALL 0x00709af0
00543217  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
0054321A  8B 16                     MOV EDX,dword ptr [ESI]
0054321C  50                        PUSH EAX
0054321D  6A 01                     PUSH 0x1
0054321F  51                        PUSH ECX
00543220  52                        PUSH EDX
00543221  EB 6E                     JMP 0x00543291
switchD_00543107::caseD_b908:
00543223  A1 58 2A 80 00            MOV EAX,[0x00802a58]
00543228  85 C0                     TEST EAX,EAX
0054322A  75 6D                     JNZ 0x00543299
0054322C  8B 77 18                  MOV ESI,dword ptr [EDI + 0x18]
0054322F  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
00543232  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
00543235  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
00543238  50                        PUSH EAX
00543239  8B 06                     MOV EAX,dword ptr [ESI]
0054323B  51                        PUSH ECX
0054323C  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
00543242  52                        PUSH EDX
00543243  50                        PUSH EAX
00543244  51                        PUSH ECX
00543245  E8 36 2D 17 00            CALL 0x006b5f80
0054324A  6A 00                     PUSH 0x0
0054324C  6A 00                     PUSH 0x0
0054324E  6A 01                     PUSH 0x1
00543250  6A 00                     PUSH 0x0
00543252  6A FF                     PUSH -0x1
00543254  57                        PUSH EDI
00543255  E8 6D F3 EB FF            CALL 0x004025c7
0054325A  83 C4 04                  ADD ESP,0x4
0054325D  50                        PUSH EAX
0054325E  6A 01                     PUSH 0x1
00543260  6A 00                     PUSH 0x0
00543262  68 90 7C 7C 00            PUSH 0x7c7c90
00543267  E8 10 25 EC FF            CALL 0x0040577c
0054326C  83 C4 08                  ADD ESP,0x8
0054326F  50                        PUSH EAX
00543270  E8 8B F9 1A 00            CALL 0x006f2c00
00543275  8B 15 94 67 80 00         MOV EDX,dword ptr [0x00806794]
0054327B  83 C4 0C                  ADD ESP,0xc
0054327E  50                        PUSH EAX
0054327F  6A 06                     PUSH 0x6
00543281  52                        PUSH EDX
00543282  E8 69 68 1C 00            CALL 0x00709af0
00543287  8B 0E                     MOV ECX,dword ptr [ESI]
00543289  50                        PUSH EAX
0054328A  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
0054328D  6A 06                     PUSH 0x6
0054328F  50                        PUSH EAX
00543290  51                        PUSH ECX
LAB_00543291:
00543291  E8 A2 04 EC FF            CALL 0x00403738
00543296  83 C4 30                  ADD ESP,0x30
switchD_00543107::default:
00543299  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
0054329C  33 C0                     XOR EAX,EAX
0054329E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005432A4  5F                        POP EDI
005432A5  5E                        POP ESI
005432A6  5B                        POP EBX
005432A7  8B E5                     MOV ESP,EBP
005432A9  5D                        POP EBP
005432AA  C2 04 00                  RET 0x4
LAB_005432ad:
005432AD  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
005432B0  68 70 7C 7C 00            PUSH 0x7c7c70
005432B5  68 CC 4C 7A 00            PUSH 0x7a4ccc
005432BA  56                        PUSH ESI
005432BB  6A 00                     PUSH 0x0
005432BD  68 1F 01 00 00            PUSH 0x11f
005432C2  68 E8 7B 7C 00            PUSH 0x7c7be8
005432C7  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005432CC  E8 FF A1 16 00            CALL 0x006ad4d0
005432D1  83 C4 18                  ADD ESP,0x18
005432D4  85 C0                     TEST EAX,EAX
005432D6  74 01                     JZ 0x005432d9
005432D8  CC                        INT3
LAB_005432d9:
005432D9  68 1F 01 00 00            PUSH 0x11f
005432DE  68 E8 7B 7C 00            PUSH 0x7c7be8
005432E3  6A 00                     PUSH 0x0
005432E5  56                        PUSH ESI
005432E6  E8 55 2B 16 00            CALL 0x006a5e40
005432EB  5F                        POP EDI
005432EC  5E                        POP ESI
005432ED  B8 FF FF 00 00            MOV EAX,0xffff
005432F2  5B                        POP EBX
005432F3  8B E5                     MOV ESP,EBP
005432F5  5D                        POP EBP
005432F6  C2 04 00                  RET 0x4
