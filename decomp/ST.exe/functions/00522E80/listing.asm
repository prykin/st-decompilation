IntercomPanelTy::GetMessage:
00522E80  55                        PUSH EBP
00522E81  8B EC                     MOV EBP,ESP
00522E83  81 EC D8 08 00 00         SUB ESP,0x8d8
00522E89  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00522E8E  53                        PUSH EBX
00522E8F  56                        PUSH ESI
00522E90  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00522E93  57                        PUSH EDI
00522E94  8D 55 B8                  LEA EDX,[EBP + -0x48]
00522E97  8D 4D B4                  LEA ECX,[EBP + -0x4c]
00522E9A  6A 00                     PUSH 0x0
00522E9C  52                        PUSH EDX
00522E9D  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00522EA0  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00522EA6  E8 45 A9 20 00            CALL 0x0072d7f0
00522EAB  8B F0                     MOV ESI,EAX
00522EAD  83 C4 08                  ADD ESP,0x8
00522EB0  85 F6                     TEST ESI,ESI
00522EB2  0F 85 DC 03 00 00         JNZ 0x00523294
00522EB8  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00522EBB  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00522EBE  8B 43 10                  MOV EAX,dword ptr [EBX + 0x10]
00522EC1  83 E8 02                  SUB EAX,0x2
00522EC4  75 07                     JNZ 0x00522ecd
00522EC6  8B CE                     MOV ECX,ESI
00522EC8  E8 FD 02 EE FF            CALL 0x004031ca
LAB_00522ecd:
00522ECD  53                        PUSH EBX
00522ECE  8B CE                     MOV ECX,ESI
00522ED0  E8 23 E9 ED FF            CALL 0x004017f8
00522ED5  8B 43 10                  MOV EAX,dword ptr [EBX + 0x10]
00522ED8  3D 9F C0 00 00            CMP EAX,0xc09f
00522EDD  0F 87 94 02 00 00         JA 0x00523177
00522EE3  0F 84 2A 02 00 00         JZ 0x00523113
00522EE9  83 E8 00                  SUB EAX,0x0
00522EEC  74 40                     JZ 0x00522f2e
00522EEE  83 E8 02                  SUB EAX,0x2
00522EF1  74 21                     JZ 0x00522f14
00522EF3  48                        DEC EAX
00522EF4  0F 85 6A 02 00 00         JNZ 0x00523164
00522EFA  8B CE                     MOV ECX,ESI
00522EFC  E8 ED F2 ED FF            CALL 0x004021ee
00522F01  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
00522F04  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00522F09  33 C0                     XOR EAX,EAX
00522F0B  5F                        POP EDI
00522F0C  5E                        POP ESI
00522F0D  5B                        POP EBX
00522F0E  8B E5                     MOV ESP,EBP
00522F10  5D                        POP EBP
00522F11  C2 04 00                  RET 0x4
LAB_00522f14:
00522F14  8B CE                     MOV ECX,ESI
00522F16  E8 68 26 EE FF            CALL 0x00405583
00522F1B  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
00522F1E  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00522F23  33 C0                     XOR EAX,EAX
00522F25  5F                        POP EDI
00522F26  5E                        POP ESI
00522F27  5B                        POP EBX
00522F28  8B E5                     MOV ESP,EBP
00522F2A  5D                        POP EBP
00522F2B  C2 04 00                  RET 0x4
LAB_00522f2e:
00522F2E  33 C0                     XOR EAX,EAX
00522F30  66 8B 86 72 01 00 00      MOV AX,word ptr [ESI + 0x172]
00522F37  83 E8 03                  SUB EAX,0x3
00522F3A  74 66                     JZ 0x00522fa2
00522F3C  48                        DEC EAX
00522F3D  0F 85 21 02 00 00         JNZ 0x00523164
00522F43  8B 86 8C 01 00 00         MOV EAX,dword ptr [ESI + 0x18c]
00522F49  8B 7E 48                  MOV EDI,dword ptr [ESI + 0x48]
00522F4C  8B 4E 44                  MOV ECX,dword ptr [ESI + 0x44]
00522F4F  2B C7                     SUB EAX,EDI
00522F51  3B C8                     CMP ECX,EAX
00522F53  7E 06                     JLE 0x00522f5b
00522F55  83 C1 FB                  ADD ECX,-0x5
00522F58  89 4E 44                  MOV dword ptr [ESI + 0x44],ECX
LAB_00522f5b:
00522F5B  39 46 44                  CMP dword ptr [ESI + 0x44],EAX
00522F5E  7F 16                     JG 0x00522f76
00522F60  89 46 44                  MOV dword ptr [ESI + 0x44],EAX
00522F63  66 C7 86 72 01 00 00 02 00  MOV word ptr [ESI + 0x172],0x2
00522F6C  C7 86 7C 01 00 00 00 00 00 00  MOV dword ptr [ESI + 0x17c],0x0
LAB_00522f76:
00522F76  8B 46 44                  MOV EAX,dword ptr [ESI + 0x44]
00522F79  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
00522F7C  8B 56 60                  MOV EDX,dword ptr [ESI + 0x60]
00522F7F  50                        PUSH EAX
00522F80  A1 A8 75 80 00            MOV EAX,[0x008075a8]
00522F85  51                        PUSH ECX
00522F86  6A FF                     PUSH -0x1
00522F88  52                        PUSH EDX
00522F89  50                        PUSH EAX
00522F8A  E8 B1 06 19 00            CALL 0x006b3640
00522F8F  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
00522F92  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00522F97  33 C0                     XOR EAX,EAX
00522F99  5F                        POP EDI
00522F9A  5E                        POP ESI
00522F9B  5B                        POP EBX
00522F9C  8B E5                     MOV ESP,EBP
00522F9E  5D                        POP EBP
00522F9F  C2 04 00                  RET 0x4
LAB_00522fa2:
00522FA2  8B 46 44                  MOV EAX,dword ptr [ESI + 0x44]
00522FA5  8B 96 8C 01 00 00         MOV EDX,dword ptr [ESI + 0x18c]
00522FAB  3B C2                     CMP EAX,EDX
00522FAD  7D 06                     JGE 0x00522fb5
00522FAF  83 C0 05                  ADD EAX,0x5
00522FB2  89 46 44                  MOV dword ptr [ESI + 0x44],EAX
LAB_00522fb5:
00522FB5  39 56 44                  CMP dword ptr [ESI + 0x44],EDX
00522FB8  0F 8C 28 01 00 00         JL 0x005230e6
00522FBE  B9 23 02 00 00            MOV ECX,0x223
00522FC3  33 C0                     XOR EAX,EAX
00522FC5  8D BD 28 F7 FF FF         LEA EDI,[EBP + 0xfffff728]
00522FCB  BB 01 00 00 00            MOV EBX,0x1
00522FD0  F3 AB                     STOSD.REP ES:EDI
00522FD2  8B BE 80 01 00 00         MOV EDI,dword ptr [ESI + 0x180]
00522FD8  89 56 44                  MOV dword ptr [ESI + 0x44],EDX
00522FDB  66 89 9E 72 01 00 00      MOV word ptr [ESI + 0x172],BX
00522FE2  89 9D 28 F7 FF FF         MOV dword ptr [EBP + 0xfffff728],EBX
00522FE8  C7 85 2C F7 FF FF 09 00 00 00  MOV dword ptr [EBP + 0xfffff72c],0x9
00522FF2  89 BD 30 F7 FF FF         MOV dword ptr [EBP + 0xfffff730],EDI
00522FF8  8B 87 A0 00 00 00         MOV EAX,dword ptr [EDI + 0xa0]
00522FFE  85 C0                     TEST EAX,EAX
00523000  74 09                     JZ 0x0052300b
00523002  57                        PUSH EDI
00523003  E8 88 D7 1E 00            CALL 0x00710790
00523008  83 C4 04                  ADD ESP,0x4
LAB_0052300b:
0052300B  8A 0D 4E 87 80 00         MOV CL,byte ptr [0x0080874e]
00523011  8B 97 8A 00 00 00         MOV EDX,dword ptr [EDI + 0x8a]
00523017  8A C1                     MOV AL,CL
00523019  8B 7E 3C                  MOV EDI,dword ptr [ESI + 0x3c]
0052301C  2C 03                     SUB AL,0x3
0052301E  42                        INC EDX
0052301F  F6 D8                     NEG AL
00523021  1B C0                     SBB EAX,EAX
00523023  89 95 40 F7 FF FF         MOV dword ptr [EBP + 0xfffff740],EDX
00523029  24 E7                     AND AL,0xe7
0052302B  80 E9 03                  SUB CL,0x3
0052302E  83 C0 1E                  ADD EAX,0x1e
00523031  53                        PUSH EBX
00523032  03 C7                     ADD EAX,EDI
00523034  89 5D 88                  MOV dword ptr [EBP + -0x78],EBX
00523037  89 85 34 F7 FF FF         MOV dword ptr [EBP + 0xfffff734],EAX
0052303D  B8 14 00 00 00            MOV EAX,0x14
00523042  2B C2                     SUB EAX,EDX
00523044  89 5D 84                  MOV dword ptr [EBP + -0x7c],EBX
00523047  99                        CDQ
00523048  2B C2                     SUB EAX,EDX
0052304A  8B 56 44                  MOV EDX,dword ptr [ESI + 0x44]
0052304D  D1 F8                     SAR EAX,0x1
0052304F  F6 D9                     NEG CL
00523051  1B C9                     SBB ECX,ECX
00523053  8D 44 10 05               LEA EAX,[EAX + EDX*0x1 + 0x5]
00523057  83 E1 32                  AND ECX,0x32
0052305A  89 85 38 F7 FF FF         MOV dword ptr [EBP + 0xfffff738],EAX
00523060  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00523063  81 C1 BC 02 00 00         ADD ECX,0x2bc
00523069  89 8D 3C F7 FF FF         MOV dword ptr [EBP + 0xfffff73c],ECX
0052306F  8B 8E 98 01 00 00         MOV ECX,dword ptr [ESI + 0x198]
00523075  89 8D 48 F7 FF FF         MOV dword ptr [EBP + 0xfffff748],ECX
0052307B  89 85 54 F7 FF FF         MOV dword ptr [EBP + 0xfffff754],EAX
00523081  B9 02 00 00 00            MOV ECX,0x2
00523086  89 85 74 F7 FF FF         MOV dword ptr [EBP + 0xfffff774],EAX
0052308C  89 85 B4 F7 FF FF         MOV dword ptr [EBP + 0xfffff7b4],EAX
00523092  8D 85 28 F7 FF FF         LEA EAX,[EBP + 0xfffff728]
00523098  89 8D 58 F7 FF FF         MOV dword ptr [EBP + 0xfffff758],ECX
0052309E  89 8D 78 F7 FF FF         MOV dword ptr [EBP + 0xfffff778],ECX
005230A4  89 8D B8 F7 FF FF         MOV dword ptr [EBP + 0xfffff7b8],ECX
005230AA  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005230AD  50                        PUSH EAX
005230AE  8D 86 A0 01 00 00         LEA EAX,[ESI + 0x1a0]
005230B4  C7 85 44 F7 FF FF 04 01 00 00  MOV dword ptr [EBP + 0xfffff744],0x104
005230BE  C7 85 5C F7 FF FF A0 C0 00 00  MOV dword ptr [EBP + 0xfffff75c],0xc0a0
005230C8  C7 85 7C F7 FF FF AF C0 00 00  MOV dword ptr [EBP + 0xfffff77c],0xc0af
005230D2  C7 85 BC F7 FF FF 9F C0 00 00  MOV dword ptr [EBP + 0xfffff7bc],0xc09f
005230DC  8B 11                     MOV EDX,dword ptr [ECX]
005230DE  6A 00                     PUSH 0x0
005230E0  50                        PUSH EAX
005230E1  6A 06                     PUSH 0x6
005230E3  FF 52 08                  CALL dword ptr [EDX + 0x8]
LAB_005230e6:
005230E6  8B 4E 44                  MOV ECX,dword ptr [ESI + 0x44]
005230E9  8B 56 3C                  MOV EDX,dword ptr [ESI + 0x3c]
005230EC  8B 46 60                  MOV EAX,dword ptr [ESI + 0x60]
005230EF  51                        PUSH ECX
005230F0  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005230F6  52                        PUSH EDX
005230F7  6A FF                     PUSH -0x1
005230F9  50                        PUSH EAX
005230FA  51                        PUSH ECX
005230FB  E8 40 05 19 00            CALL 0x006b3640
00523100  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
00523103  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00523108  33 C0                     XOR EAX,EAX
0052310A  5F                        POP EDI
0052310B  5E                        POP ESI
0052310C  5B                        POP EBX
0052310D  8B E5                     MOV ESP,EBP
0052310F  5D                        POP EBP
00523110  C2 04 00                  RET 0x4
LAB_00523113:
00523113  8B CE                     MOV ECX,ESI
00523115  E8 06 00 EE FF            CALL 0x00403120
0052311A  8B 96 98 01 00 00         MOV EDX,dword ptr [ESI + 0x198]
00523120  68 A0 16 80 00            PUSH 0x8016a0
00523125  6A 00                     PUSH 0x0
00523127  52                        PUSH EDX
00523128  E8 F3 2E 19 00            CALL 0x006b6020
0052312D  8B 96 A0 01 00 00         MOV EDX,dword ptr [ESI + 0x1a0]
00523133  8B 86 98 01 00 00         MOV EAX,dword ptr [ESI + 0x198]
00523139  8D 4E 18                  LEA ECX,[ESI + 0x18]
0052313C  C7 46 28 33 00 00 00      MOV dword ptr [ESI + 0x28],0x33
00523143  51                        PUSH ECX
00523144  52                        PUSH EDX
00523145  6A 02                     PUSH 0x2
00523147  8B CE                     MOV ECX,ESI
00523149  89 46 2C                  MOV dword ptr [ESI + 0x2c],EAX
0052314C  E8 2F 2F 1C 00            CALL 0x006e6080
LAB_00523151:
00523151  66 83 BE 72 01 00 00 01   CMP word ptr [ESI + 0x172],0x1
00523159  75 09                     JNZ 0x00523164
0052315B  6A 00                     PUSH 0x0
0052315D  8B CE                     MOV ECX,ESI
0052315F  E8 6B EC ED FF            CALL 0x00401dcf
LAB_00523164:
00523164  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
00523167  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0052316C  33 C0                     XOR EAX,EAX
0052316E  5F                        POP EDI
0052316F  5E                        POP ESI
00523170  5B                        POP EBX
00523171  8B E5                     MOV ESP,EBP
00523173  5D                        POP EBP
00523174  C2 04 00                  RET 0x4
LAB_00523177:
00523177  2D A0 C0 00 00            SUB EAX,0xc0a0
0052317C  74 D3                     JZ 0x00523151
0052317E  83 E8 0F                  SUB EAX,0xf
00523181  75 E1                     JNZ 0x00523164
00523183  8B 86 9C 01 00 00         MOV EAX,dword ptr [ESI + 0x19c]
00523189  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
0052318C  85 C9                     TEST ECX,ECX
0052318E  75 18                     JNZ 0x005231a8
00523190  66 8B 48 0E               MOV CX,word ptr [EAX + 0xe]
00523194  0F AF 48 04               IMUL ECX,dword ptr [EAX + 0x4]
00523198  83 C1 1F                  ADD ECX,0x1f
0052319B  C1 E9 03                  SHR ECX,0x3
0052319E  81 E1 FC FF FF 1F         AND ECX,0x1ffffffc
005231A4  0F AF 48 08               IMUL ECX,dword ptr [EAX + 0x8]
LAB_005231a8:
005231A8  50                        PUSH EAX
005231A9  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005231AC  E8 EF 1D 19 00            CALL 0x006b4fa0
005231B1  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005231B4  8B F8                     MOV EDI,EAX
005231B6  8B D1                     MOV EDX,ECX
005231B8  33 C0                     XOR EAX,EAX
005231BA  C1 E9 02                  SHR ECX,0x2
005231BD  F3 AB                     STOSD.REP ES:EDI
005231BF  8B CA                     MOV ECX,EDX
005231C1  6A 00                     PUSH 0x0
005231C3  83 E1 03                  AND ECX,0x3
005231C6  6A 00                     PUSH 0x0
005231C8  F3 AA                     STOSB.REP ES:EDI
005231CA  8B 86 9C 01 00 00         MOV EAX,dword ptr [ESI + 0x19c]
005231D0  8B 8E 80 01 00 00         MOV ECX,dword ptr [ESI + 0x180]
005231D6  6A 00                     PUSH 0x0
005231D8  6A 00                     PUSH 0x0
005231DA  6A 00                     PUSH 0x0
005231DC  50                        PUSH EAX
005231DD  E8 AE D8 1E 00            CALL 0x00710a90
005231E2  8B 4B 14                  MOV ECX,dword ptr [EBX + 0x14]
005231E5  6A 00                     PUSH 0x0
005231E7  6A FF                     PUSH -0x1
005231E9  6A 00                     PUSH 0x0
005231EB  8B 11                     MOV EDX,dword ptr [ECX]
005231ED  8B 8E 80 01 00 00         MOV ECX,dword ptr [ESI + 0x180]
005231F3  52                        PUSH EDX
005231F4  E8 C7 E7 1E 00            CALL 0x007119c0
005231F9  66 8B 4B 18               MOV CX,word ptr [EBX + 0x18]
005231FD  66 81 F9 FF FF            CMP CX,0xffff
00523202  75 06                     JNZ 0x0052320a
00523204  66 39 4B 1A               CMP word ptr [EBX + 0x1a],CX
00523208  74 2A                     JZ 0x00523234
LAB_0052320a:
0052320A  8B 96 9C 01 00 00         MOV EDX,dword ptr [ESI + 0x19c]
00523210  33 C0                     XOR EAX,EAX
00523212  66 8B 43 1A               MOV AX,word ptr [EBX + 0x1a]
00523216  6A 0D                     PUSH 0xd
00523218  8B 7A 08                  MOV EDI,dword ptr [EDX + 0x8]
0052321B  81 E1 FF FF 00 00         AND ECX,0xffff
00523221  6A 6C                     PUSH 0x6c
00523223  8D 7C 07 FD               LEA EDI,[EDI + EAX*0x1 + -0x3]
00523227  40                        INC EAX
00523228  57                        PUSH EDI
00523229  51                        PUSH ECX
0052322A  50                        PUSH EAX
0052322B  51                        PUSH ECX
0052322C  6A 00                     PUSH 0x0
0052322E  52                        PUSH EDX
0052322F  E8 DC 28 19 00            CALL 0x006b5b10
LAB_00523234:
00523234  8B 86 9C 01 00 00         MOV EAX,dword ptr [ESI + 0x19c]
0052323A  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0052323D  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
00523240  51                        PUSH ECX
00523241  52                        PUSH EDX
00523242  6A 00                     PUSH 0x0
00523244  6A 00                     PUSH 0x0
00523246  6A 00                     PUSH 0x0
00523248  50                        PUSH EAX
00523249  A0 4E 87 80 00            MOV AL,[0x0080874e]
0052324E  8B 4E 68                  MOV ECX,dword ptr [ESI + 0x68]
00523251  2C 03                     SUB AL,0x3
00523253  6A 05                     PUSH 0x5
00523255  F6 D8                     NEG AL
00523257  1B C0                     SBB EAX,EAX
00523259  24 E7                     AND AL,0xe7
0052325B  83 C0 1E                  ADD EAX,0x1e
0052325E  50                        PUSH EAX
0052325F  6A 00                     PUSH 0x0
00523261  51                        PUSH ECX
00523262  E8 89 23 19 00            CALL 0x006b55f0
00523267  8B 56 44                  MOV EDX,dword ptr [ESI + 0x44]
0052326A  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
0052326D  8B 4E 60                  MOV ECX,dword ptr [ESI + 0x60]
00523270  52                        PUSH EDX
00523271  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
00523277  50                        PUSH EAX
00523278  6A FF                     PUSH -0x1
0052327A  51                        PUSH ECX
0052327B  52                        PUSH EDX
0052327C  E8 BF 03 19 00            CALL 0x006b3640
00523281  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
00523284  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00523289  33 C0                     XOR EAX,EAX
0052328B  5F                        POP EDI
0052328C  5E                        POP ESI
0052328D  5B                        POP EBX
0052328E  8B E5                     MOV ESP,EBP
00523290  5D                        POP EBP
00523291  C2 04 00                  RET 0x4
LAB_00523294:
00523294  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
00523297  68 A0 41 7C 00            PUSH 0x7c41a0
0052329C  68 CC 4C 7A 00            PUSH 0x7a4ccc
005232A1  56                        PUSH ESI
005232A2  6A 00                     PUSH 0x0
005232A4  68 97 01 00 00            PUSH 0x197
005232A9  68 1C 40 7C 00            PUSH 0x7c401c
005232AE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005232B4  E8 17 A2 18 00            CALL 0x006ad4d0
005232B9  83 C4 18                  ADD ESP,0x18
005232BC  85 C0                     TEST EAX,EAX
005232BE  74 01                     JZ 0x005232c1
005232C0  CC                        INT3
LAB_005232c1:
005232C1  68 97 01 00 00            PUSH 0x197
005232C6  68 1C 40 7C 00            PUSH 0x7c401c
005232CB  6A 00                     PUSH 0x0
005232CD  56                        PUSH ESI
005232CE  E8 6D 2B 18 00            CALL 0x006a5e40
005232D3  5F                        POP EDI
005232D4  5E                        POP ESI
005232D5  B8 FF FF 00 00            MOV EAX,0xffff
005232DA  5B                        POP EBX
005232DB  8B E5                     MOV ESP,EBP
005232DD  5D                        POP EBP
005232DE  C2 04 00                  RET 0x4
