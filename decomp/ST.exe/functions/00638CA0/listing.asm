FUN_00638ca0:
00638CA0  55                        PUSH EBP
00638CA1  8B EC                     MOV EBP,ESP
00638CA3  83 EC 0C                  SUB ESP,0xc
00638CA6  53                        PUSH EBX
00638CA7  56                        PUSH ESI
00638CA8  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00638CAB  8B D9                     MOV EBX,ECX
00638CAD  56                        PUSH ESI
00638CAE  E8 54 C2 DC FF            CALL 0x00404f07
00638CB3  3D FF FF 00 00            CMP EAX,0xffff
00638CB8  75 08                     JNZ 0x00638cc2
00638CBA  5E                        POP ESI
00638CBB  5B                        POP EBX
00638CBC  8B E5                     MOV ESP,EBP
00638CBE  5D                        POP EBP
00638CBF  C2 04 00                  RET 0x4
LAB_00638cc2:
00638CC2  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
00638CC5  57                        PUSH EDI
00638CC6  83 F8 03                  CMP EAX,0x3
00638CC9  0F 87 9A 05 00 00         JA 0x00639269
00638CCF  0F 84 7E 05 00 00         JZ 0x00639253
00638CD5  83 E8 00                  SUB EAX,0x0
00638CD8  0F 84 8B 00 00 00         JZ 0x00638d69
00638CDE  83 E8 02                  SUB EAX,0x2
00638CE1  0F 85 B9 05 00 00         JNZ 0x006392a0
00638CE7  8B 76 14                  MOV ESI,dword ptr [ESI + 0x14]
00638CEA  83 7E 0C 02               CMP dword ptr [ESI + 0xc],0x2
00638CEE  74 24                     JZ 0x00638d14
00638CF0  B9 0B 00 00 00            MOV ECX,0xb
00638CF5  8D BB 31 02 00 00         LEA EDI,[EBX + 0x231]
00638CFB  F3 A5                     MOVSD.REP ES:EDI,ESI
00638CFD  66 A5                     MOVSW ES:EDI,ESI
00638CFF  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00638D04  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
00638D0A  51                        PUSH ECX
00638D0B  8B CB                     MOV ECX,EBX
00638D0D  E8 8B A4 DC FF            CALL 0x0040319d
00638D12  EB 28                     JMP 0x00638d3c
LAB_00638d14:
00638D14  56                        PUSH ESI
00638D15  8B CB                     MOV ECX,EBX
00638D17  E8 98 C9 DC FF            CALL 0x004056b4
00638D1C  B9 0B 00 00 00            MOV ECX,0xb
00638D21  33 C0                     XOR EAX,EAX
00638D23  8D BB AB 02 00 00         LEA EDI,[EBX + 0x2ab]
00638D29  F3 AB                     STOSD.REP ES:EDI
00638D2B  AA                        STOSB ES:EDI
00638D2C  80 BB 6F 02 00 00 02      CMP byte ptr [EBX + 0x26f],0x2
00638D33  75 07                     JNZ 0x00638d3c
00638D35  C6 83 6F 02 00 00 03      MOV byte ptr [EBX + 0x26f],0x3
LAB_00638d3c:
00638D3C  8A 83 70 02 00 00         MOV AL,byte ptr [EBX + 0x270]
00638D42  84 C0                     TEST AL,AL
00638D44  0F 84 56 05 00 00         JZ 0x006392a0
00638D4A  80 BB 6F 02 00 00 01      CMP byte ptr [EBX + 0x26f],0x1
00638D51  0F 84 49 05 00 00         JZ 0x006392a0
00638D57  8B CB                     MOV ECX,EBX
00638D59  E8 D6 94 DC FF            CALL 0x00402234
00638D5E  5F                        POP EDI
00638D5F  5E                        POP ESI
00638D60  33 C0                     XOR EAX,EAX
00638D62  5B                        POP EBX
00638D63  8B E5                     MOV ESP,EBP
00638D65  5D                        POP EBP
00638D66  C2 04 00                  RET 0x4
LAB_00638d69:
00638D69  33 C0                     XOR EAX,EAX
00638D6B  8A 83 6F 02 00 00         MOV AL,byte ptr [EBX + 0x26f]
00638D71  83 F8 03                  CMP EAX,0x3
00638D74  0F 87 26 05 00 00         JA 0x006392a0
switchD_00638d7a::switchD:
00638D7A  FF 24 85 AC 92 63 00      JMP dword ptr [EAX*0x4 + 0x6392ac]
switchD_00638d7a::caseD_1:
00638D81  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
00638D87  8B 8B 51 02 00 00         MOV ECX,dword ptr [EBX + 0x251]
00638D8D  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
00638D93  8B 93 A3 02 00 00         MOV EDX,dword ptr [EBX + 0x2a3]
00638D99  2B C2                     SUB EAX,EDX
00638D9B  3B C1                     CMP EAX,ECX
00638D9D  0F 82 FD 04 00 00         JC 0x006392a0
00638DA3  8A 83 70 02 00 00         MOV AL,byte ptr [EBX + 0x270]
00638DA9  C6 83 6F 02 00 00 00      MOV byte ptr [EBX + 0x26f],0x0
00638DB0  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00638DB6  84 C0                     TEST AL,AL
00638DB8  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
00638DBE  C7 83 51 02 00 00 00 00 00 00  MOV dword ptr [EBX + 0x251],0x0
00638DC8  89 93 A3 02 00 00         MOV dword ptr [EBX + 0x2a3],EDX
00638DCE  0F 84 CC 04 00 00         JZ 0x006392a0
00638DD4  8B CB                     MOV ECX,EBX
00638DD6  E8 59 94 DC FF            CALL 0x00402234
00638DDB  5F                        POP EDI
00638DDC  5E                        POP ESI
00638DDD  33 C0                     XOR EAX,EAX
00638DDF  5B                        POP EBX
00638DE0  8B E5                     MOV ESP,EBP
00638DE2  5D                        POP EBP
00638DE3  C2 04 00                  RET 0x4
switchD_00638d7a::caseD_0:
00638DE6  8A 83 70 02 00 00         MOV AL,byte ptr [EBX + 0x270]
00638DEC  84 C0                     TEST AL,AL
00638DEE  75 07                     JNZ 0x00638df7
00638DF0  8B CB                     MOV ECX,EBX
00638DF2  E8 3D 94 DC FF            CALL 0x00402234
LAB_00638df7:
00638DF7  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00638DFC  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
00638E02  51                        PUSH ECX
00638E03  8B CB                     MOV ECX,EBX
00638E05  E8 9B A5 DC FF            CALL 0x004033a5
00638E0A  83 F8 01                  CMP EAX,0x1
00638E0D  7C 7E                     JL 0x00638e8d
00638E0F  8B 83 BF 02 00 00         MOV EAX,dword ptr [EBX + 0x2bf]
00638E15  85 C0                     TEST EAX,EAX
00638E17  74 3E                     JZ 0x00638e57
00638E19  8B 8B C7 02 00 00         MOV ECX,dword ptr [EBX + 0x2c7]
00638E1F  85 C9                     TEST ECX,ECX
00638E21  75 1B                     JNZ 0x00638e3e
00638E23  8B 90 ED 01 00 00         MOV EDX,dword ptr [EAX + 0x1ed]
00638E29  8B 83 ED 01 00 00         MOV EAX,dword ptr [EBX + 0x1ed]
00638E2F  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
00638E35  52                        PUSH EDX
00638E36  50                        PUSH EAX
00638E37  E8 24 16 0B 00            CALL 0x006ea460
00638E3C  EB 19                     JMP 0x00638e57
LAB_00638e3e:
00638E3E  8B 88 ED 01 00 00         MOV ECX,dword ptr [EAX + 0x1ed]
00638E44  8B 93 ED 01 00 00         MOV EDX,dword ptr [EBX + 0x1ed]
00638E4A  51                        PUSH ECX
00638E4B  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
00638E51  52                        PUSH EDX
00638E52  E8 89 15 0B 00            CALL 0x006ea3e0
LAB_00638e57:
00638E57  6A 53                     PUSH 0x53
00638E59  6A 5A                     PUSH 0x5a
00638E5B  6A 01                     PUSH 0x1
00638E5D  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
00638E63  E8 64 C4 DC FF            CALL 0x004052cc
00638E68  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
00638E6E  50                        PUSH EAX
00638E6F  E8 6C 16 0B 00            CALL 0x006ea4e0
00638E74  8B CB                     MOV ECX,EBX
00638E76  C6 83 6F 02 00 00 02      MOV byte ptr [EBX + 0x26f],0x2
00638E7D  E8 B2 93 DC FF            CALL 0x00402234
00638E82  5F                        POP EDI
00638E83  5E                        POP ESI
00638E84  33 C0                     XOR EAX,EAX
00638E86  5B                        POP EBX
00638E87  8B E5                     MOV ESP,EBP
00638E89  5D                        POP EBP
00638E8A  C2 04 00                  RET 0x4
LAB_00638e8d:
00638E8D  8A 83 70 02 00 00         MOV AL,byte ptr [EBX + 0x270]
00638E93  84 C0                     TEST AL,AL
00638E95  0F 84 05 04 00 00         JZ 0x006392a0
00638E9B  66 8B 83 82 02 00 00      MOV AX,word ptr [EBX + 0x282]
00638EA2  66 8B 8B 7E 02 00 00      MOV CX,word ptr [EBX + 0x27e]
00638EA9  66 8B 93 7A 02 00 00      MOV DX,word ptr [EBX + 0x27a]
00638EB0  50                        PUSH EAX
00638EB1  51                        PUSH ECX
00638EB2  52                        PUSH EDX
00638EB3  8B CB                     MOV ECX,EBX
00638EB5  E8 4D A2 DC FF            CALL 0x00403107
00638EBA  8B 03                     MOV EAX,dword ptr [EBX]
00638EBC  8B CB                     MOV ECX,EBX
00638EBE  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
00638EC4  8B 35 88 2A 80 00         MOV ESI,dword ptr [0x00802a88]
00638ECA  85 F6                     TEST ESI,ESI
00638ECC  0F 84 CE 03 00 00         JZ 0x006392a0
00638ED2  8B 8B 82 02 00 00         MOV ECX,dword ptr [EBX + 0x282]
00638ED8  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00638EDD  85 C9                     TEST ECX,ECX
00638EDF  7C 14                     JL 0x00638ef5
00638EE1  F7 E9                     IMUL ECX
00638EE3  C1 FA 06                  SAR EDX,0x6
00638EE6  8B CA                     MOV ECX,EDX
00638EE8  C1 E9 1F                  SHR ECX,0x1f
00638EEB  03 D1                     ADD EDX,ECX
00638EED  0F BF D2                  MOVSX EDX,DX
00638EF0  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
00638EF3  EB 13                     JMP 0x00638f08
LAB_00638ef5:
00638EF5  F7 E9                     IMUL ECX
00638EF7  C1 FA 06                  SAR EDX,0x6
00638EFA  8B C2                     MOV EAX,EDX
00638EFC  C1 E8 1F                  SHR EAX,0x1f
00638EFF  03 D0                     ADD EDX,EAX
00638F01  0F BF C2                  MOVSX EAX,DX
00638F04  48                        DEC EAX
00638F05  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_00638f08:
00638F08  8B 8B 7E 02 00 00         MOV ECX,dword ptr [EBX + 0x27e]
00638F0E  B8 79 19 8C 02            MOV EAX,0x28c1979
00638F13  85 C9                     TEST ECX,ECX
00638F15  7C 10                     JL 0x00638f27
00638F17  F7 E9                     IMUL ECX
00638F19  D1 FA                     SAR EDX,0x1
00638F1B  8B CA                     MOV ECX,EDX
00638F1D  C1 E9 1F                  SHR ECX,0x1f
00638F20  03 D1                     ADD EDX,ECX
00638F22  0F BF FA                  MOVSX EDI,DX
00638F25  EB 0F                     JMP 0x00638f36
LAB_00638f27:
00638F27  F7 E9                     IMUL ECX
00638F29  D1 FA                     SAR EDX,0x1
00638F2B  8B C2                     MOV EAX,EDX
00638F2D  C1 E8 1F                  SHR EAX,0x1f
00638F30  03 D0                     ADD EDX,EAX
00638F32  0F BF FA                  MOVSX EDI,DX
00638F35  4F                        DEC EDI
LAB_00638f36:
00638F36  8B 8B 7A 02 00 00         MOV ECX,dword ptr [EBX + 0x27a]
00638F3C  B8 79 19 8C 02            MOV EAX,0x28c1979
00638F41  85 C9                     TEST ECX,ECX
00638F43  7C 10                     JL 0x00638f55
00638F45  F7 E9                     IMUL ECX
00638F47  D1 FA                     SAR EDX,0x1
00638F49  8B CA                     MOV ECX,EDX
00638F4B  C1 E9 1F                  SHR ECX,0x1f
00638F4E  03 D1                     ADD EDX,ECX
00638F50  0F BF C2                  MOVSX EAX,DX
00638F53  EB 0F                     JMP 0x00638f64
LAB_00638f55:
00638F55  F7 E9                     IMUL ECX
00638F57  D1 FA                     SAR EDX,0x1
00638F59  8B C2                     MOV EAX,EDX
00638F5B  C1 E8 1F                  SHR EAX,0x1f
00638F5E  03 D0                     ADD EDX,EAX
00638F60  0F BF C2                  MOVSX EAX,DX
00638F63  48                        DEC EAX
LAB_00638f64:
00638F64  80 3D 4D 87 80 00 FF      CMP byte ptr [0x0080874d],0xff
00638F6B  74 68                     JZ 0x00638fd5
00638F6D  8B 8E F8 00 00 00         MOV ECX,dword ptr [ESI + 0xf8]
00638F73  85 C9                     TEST ECX,ECX
00638F75  74 5E                     JZ 0x00638fd5
00638F77  8D 4D F4                  LEA ECX,[EBP + -0xc]
00638F7A  8D 55 F8                  LEA EDX,[EBP + -0x8]
00638F7D  51                        PUSH ECX
00638F7E  52                        PUSH EDX
00638F7F  57                        PUSH EDI
00638F80  50                        PUSH EAX
00638F81  8B 86 0C 01 00 00         MOV EAX,dword ptr [ESI + 0x10c]
00638F87  8B CE                     MOV ECX,ESI
00638F89  50                        PUSH EAX
00638F8A  E8 C4 AF DC FF            CALL 0x00403f53
00638F8F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00638F92  85 C0                     TEST EAX,EAX
00638F94  7C 3F                     JL 0x00638fd5
00638F96  83 F8 05                  CMP EAX,0x5
00638F99  7D 3A                     JGE 0x00638fd5
00638F9B  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
00638F9E  85 FF                     TEST EDI,EDI
00638FA0  7C 33                     JL 0x00638fd5
00638FA2  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
00638FA5  3B F9                     CMP EDI,ECX
00638FA7  7D 2C                     JGE 0x00638fd5
00638FA9  8B 14 85 D0 AE 79 00      MOV EDX,dword ptr [EAX*0x4 + 0x79aed0]
00638FB0  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00638FB3  03 C2                     ADD EAX,EDX
00638FB5  85 C0                     TEST EAX,EAX
00638FB7  7C 1C                     JL 0x00638fd5
00638FB9  3B 46 34                  CMP EAX,dword ptr [ESI + 0x34]
00638FBC  7D 17                     JGE 0x00638fd5
00638FBE  8B 76 4C                  MOV ESI,dword ptr [ESI + 0x4c]
00638FC1  85 F6                     TEST ESI,ESI
00638FC3  74 10                     JZ 0x00638fd5
00638FC5  0F AF C1                  IMUL EAX,ECX
00638FC8  03 C6                     ADD EAX,ESI
00638FCA  33 C9                     XOR ECX,ECX
00638FCC  8A 0C 38                  MOV CL,byte ptr [EAX + EDI*0x1]
00638FCF  8B C1                     MOV EAX,ECX
00638FD1  85 C0                     TEST EAX,EAX
00638FD3  74 2D                     JZ 0x00639002
LAB_00638fd5:
00638FD5  8A 83 71 02 00 00         MOV AL,byte ptr [EBX + 0x271]
00638FDB  84 C0                     TEST AL,AL
00638FDD  0F 85 BD 02 00 00         JNZ 0x006392a0
00638FE3  6A 00                     PUSH 0x0
00638FE5  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
00638FEB  E8 92 99 DC FF            CALL 0x00402982
00638FF0  5F                        POP EDI
00638FF1  C6 83 71 02 00 00 01      MOV byte ptr [EBX + 0x271],0x1
00638FF8  5E                        POP ESI
00638FF9  33 C0                     XOR EAX,EAX
00638FFB  5B                        POP EBX
00638FFC  8B E5                     MOV ESP,EBP
00638FFE  5D                        POP EBP
00638FFF  C2 04 00                  RET 0x4
LAB_00639002:
00639002  8A 83 71 02 00 00         MOV AL,byte ptr [EBX + 0x271]
00639008  84 C0                     TEST AL,AL
0063900A  0F 84 90 02 00 00         JZ 0x006392a0
00639010  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
00639016  E8 F4 AC DC FF            CALL 0x00403d0f
0063901B  5F                        POP EDI
0063901C  C6 83 71 02 00 00 00      MOV byte ptr [EBX + 0x271],0x0
00639023  5E                        POP ESI
00639024  33 C0                     XOR EAX,EAX
00639026  5B                        POP EBX
00639027  8B E5                     MOV ESP,EBP
00639029  5D                        POP EBP
0063902A  C2 04 00                  RET 0x4
switchD_00638d7a::caseD_2:
0063902D  8A 83 70 02 00 00         MOV AL,byte ptr [EBX + 0x270]
00639033  84 C0                     TEST AL,AL
00639035  75 12                     JNZ 0x00639049
00639037  5F                        POP EDI
00639038  C6 83 6F 02 00 00 03      MOV byte ptr [EBX + 0x26f],0x3
0063903F  5E                        POP ESI
00639040  33 C0                     XOR EAX,EAX
00639042  5B                        POP EBX
00639043  8B E5                     MOV ESP,EBP
00639045  5D                        POP EBP
00639046  C2 04 00                  RET 0x4
LAB_00639049:
00639049  8D B3 D5 01 00 00         LEA ESI,[EBX + 0x1d5]
0063904F  6A 0D                     PUSH 0xd
00639051  8B CE                     MOV ECX,ESI
00639053  E8 57 B2 DC FF            CALL 0x004042af
00639058  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0063905B  8A 83 A2 02 00 00         MOV AL,byte ptr [EBX + 0x2a2]
00639061  84 C0                     TEST AL,AL
00639063  74 2C                     JZ 0x00639091
00639065  6A 0E                     PUSH 0xe
00639067  8B CE                     MOV ECX,ESI
00639069  E8 3E 92 DC FF            CALL 0x004022ac
0063906E  8B F8                     MOV EDI,EAX
00639070  6A 0E                     PUSH 0xe
00639072  8B CE                     MOV ECX,ESI
00639074  4F                        DEC EDI
00639075  E8 35 B2 DC FF            CALL 0x004042af
0063907A  3B C7                     CMP EAX,EDI
0063907C  7C 13                     JL 0x00639091
0063907E  8A 83 70 02 00 00         MOV AL,byte ptr [EBX + 0x270]
00639084  84 C0                     TEST AL,AL
00639086  74 09                     JZ 0x00639091
00639088  6A 0E                     PUSH 0xe
0063908A  8B CE                     MOV ECX,ESI
0063908C  E8 D3 B1 DC FF            CALL 0x00404264
LAB_00639091:
00639091  83 7D 08 17               CMP dword ptr [EBP + 0x8],0x17
00639095  75 20                     JNZ 0x006390b7
00639097  8A 83 70 02 00 00         MOV AL,byte ptr [EBX + 0x270]
0063909D  84 C0                     TEST AL,AL
0063909F  74 16                     JZ 0x006390b7
006390A1  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
006390A7  8B CE                     MOV ECX,ESI
006390A9  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
006390AF  50                        PUSH EAX
006390B0  6A 0F                     PUSH 0xf
006390B2  E8 89 C1 DC FF            CALL 0x00405240
LAB_006390b7:
006390B7  6A 0D                     PUSH 0xd
006390B9  8B CE                     MOV ECX,ESI
006390BB  E8 EC 91 DC FF            CALL 0x004022ac
006390C0  8B F8                     MOV EDI,EAX
006390C2  6A 0D                     PUSH 0xd
006390C4  8B CE                     MOV ECX,ESI
006390C6  4F                        DEC EDI
006390C7  E8 E3 B1 DC FF            CALL 0x004042af
006390CC  3B F8                     CMP EDI,EAX
006390CE  75 09                     JNZ 0x006390d9
006390D0  6A 0D                     PUSH 0xd
006390D2  8B CE                     MOV ECX,ESI
006390D4  E8 8B B1 DC FF            CALL 0x00404264
LAB_006390d9:
006390D9  6A 0F                     PUSH 0xf
006390DB  8B CE                     MOV ECX,ESI
006390DD  E8 CA 91 DC FF            CALL 0x004022ac
006390E2  8B F8                     MOV EDI,EAX
006390E4  6A 0F                     PUSH 0xf
006390E6  8B CE                     MOV ECX,ESI
006390E8  4F                        DEC EDI
006390E9  E8 C1 B1 DC FF            CALL 0x004042af
006390EE  3B F8                     CMP EDI,EAX
006390F0  75 07                     JNZ 0x006390f9
006390F2  C6 83 6F 02 00 00 03      MOV byte ptr [EBX + 0x26f],0x3
LAB_006390f9:
006390F9  8B 13                     MOV EDX,dword ptr [EBX]
006390FB  8B CB                     MOV ECX,EBX
006390FD  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
00639103  8B 35 88 2A 80 00         MOV ESI,dword ptr [0x00802a88]
00639109  85 F6                     TEST ESI,ESI
0063910B  0F 84 8F 01 00 00         JZ 0x006392a0
00639111  8B 8B 82 02 00 00         MOV ECX,dword ptr [EBX + 0x282]
00639117  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0063911C  85 C9                     TEST ECX,ECX
0063911E  7C 14                     JL 0x00639134
00639120  F7 E9                     IMUL ECX
00639122  C1 FA 06                  SAR EDX,0x6
00639125  8B C2                     MOV EAX,EDX
00639127  C1 E8 1F                  SHR EAX,0x1f
0063912A  03 D0                     ADD EDX,EAX
0063912C  0F BF CA                  MOVSX ECX,DX
0063912F  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
00639132  EB 13                     JMP 0x00639147
LAB_00639134:
00639134  F7 E9                     IMUL ECX
00639136  C1 FA 06                  SAR EDX,0x6
00639139  8B C2                     MOV EAX,EDX
0063913B  C1 E8 1F                  SHR EAX,0x1f
0063913E  03 D0                     ADD EDX,EAX
00639140  0F BF C2                  MOVSX EAX,DX
00639143  48                        DEC EAX
00639144  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_00639147:
00639147  8B 8B 7E 02 00 00         MOV ECX,dword ptr [EBX + 0x27e]
0063914D  B8 79 19 8C 02            MOV EAX,0x28c1979
00639152  85 C9                     TEST ECX,ECX
00639154  7C 10                     JL 0x00639166
00639156  F7 E9                     IMUL ECX
00639158  D1 FA                     SAR EDX,0x1
0063915A  8B CA                     MOV ECX,EDX
0063915C  C1 E9 1F                  SHR ECX,0x1f
0063915F  03 D1                     ADD EDX,ECX
00639161  0F BF FA                  MOVSX EDI,DX
00639164  EB 0F                     JMP 0x00639175
LAB_00639166:
00639166  F7 E9                     IMUL ECX
00639168  D1 FA                     SAR EDX,0x1
0063916A  8B C2                     MOV EAX,EDX
0063916C  C1 E8 1F                  SHR EAX,0x1f
0063916F  03 D0                     ADD EDX,EAX
00639171  0F BF FA                  MOVSX EDI,DX
00639174  4F                        DEC EDI
LAB_00639175:
00639175  8B 8B 7A 02 00 00         MOV ECX,dword ptr [EBX + 0x27a]
0063917B  B8 79 19 8C 02            MOV EAX,0x28c1979
00639180  85 C9                     TEST ECX,ECX
00639182  7C 10                     JL 0x00639194
00639184  F7 E9                     IMUL ECX
00639186  D1 FA                     SAR EDX,0x1
00639188  8B CA                     MOV ECX,EDX
0063918A  C1 E9 1F                  SHR ECX,0x1f
0063918D  03 D1                     ADD EDX,ECX
0063918F  0F BF C2                  MOVSX EAX,DX
00639192  EB 0F                     JMP 0x006391a3
LAB_00639194:
00639194  F7 E9                     IMUL ECX
00639196  D1 FA                     SAR EDX,0x1
00639198  8B C2                     MOV EAX,EDX
0063919A  C1 E8 1F                  SHR EAX,0x1f
0063919D  03 D0                     ADD EDX,EAX
0063919F  0F BF C2                  MOVSX EAX,DX
006391A2  48                        DEC EAX
LAB_006391a3:
006391A3  80 3D 4D 87 80 00 FF      CMP byte ptr [0x0080874d],0xff
006391AA  0F 84 25 FE FF FF         JZ 0x00638fd5
006391B0  8B 8E F8 00 00 00         MOV ECX,dword ptr [ESI + 0xf8]
006391B6  85 C9                     TEST ECX,ECX
006391B8  0F 84 17 FE FF FF         JZ 0x00638fd5
006391BE  8D 4D F8                  LEA ECX,[EBP + -0x8]
006391C1  8D 55 F4                  LEA EDX,[EBP + -0xc]
006391C4  51                        PUSH ECX
006391C5  52                        PUSH EDX
006391C6  57                        PUSH EDI
006391C7  50                        PUSH EAX
006391C8  8B 86 0C 01 00 00         MOV EAX,dword ptr [ESI + 0x10c]
006391CE  8B CE                     MOV ECX,ESI
006391D0  50                        PUSH EAX
006391D1  E8 7D AD DC FF            CALL 0x00403f53
006391D6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006391D9  85 C0                     TEST EAX,EAX
006391DB  0F 8C F4 FD FF FF         JL 0x00638fd5
006391E1  83 F8 05                  CMP EAX,0x5
006391E4  0F 8D EB FD FF FF         JGE 0x00638fd5
006391EA  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
006391ED  85 FF                     TEST EDI,EDI
006391EF  0F 8C E0 FD FF FF         JL 0x00638fd5
006391F5  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
006391F8  3B F9                     CMP EDI,ECX
006391FA  0F 8D D5 FD FF FF         JGE 0x00638fd5
00639200  8B 14 85 D0 AE 79 00      MOV EDX,dword ptr [EAX*0x4 + 0x79aed0]
00639207  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0063920A  03 C2                     ADD EAX,EDX
0063920C  85 C0                     TEST EAX,EAX
0063920E  0F 8C C1 FD FF FF         JL 0x00638fd5
00639214  3B 46 34                  CMP EAX,dword ptr [ESI + 0x34]
00639217  0F 8D B8 FD FF FF         JGE 0x00638fd5
0063921D  8B 76 4C                  MOV ESI,dword ptr [ESI + 0x4c]
00639220  85 F6                     TEST ESI,ESI
00639222  0F 84 AD FD FF FF         JZ 0x00638fd5
00639228  0F AF C1                  IMUL EAX,ECX
0063922B  03 C6                     ADD EAX,ESI
0063922D  33 C9                     XOR ECX,ECX
0063922F  8A 0C 38                  MOV CL,byte ptr [EAX + EDI*0x1]
00639232  8B C1                     MOV EAX,ECX
00639234  85 C0                     TEST EAX,EAX
00639236  0F 84 C6 FD FF FF         JZ 0x00639002
0063923C  E9 94 FD FF FF            JMP 0x00638fd5
switchD_00638d7a::caseD_3:
00639241  8B CB                     MOV ECX,EBX
00639243  E8 3C C2 DC FF            CALL 0x00405484
00639248  5F                        POP EDI
00639249  5E                        POP ESI
0063924A  33 C0                     XOR EAX,EAX
0063924C  5B                        POP EBX
0063924D  8B E5                     MOV ESP,EBP
0063924F  5D                        POP EBP
00639250  C2 04 00                  RET 0x4
LAB_00639253:
00639253  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
00639259  E8 77 8F DC FF            CALL 0x004021d5
0063925E  5F                        POP EDI
0063925F  5E                        POP ESI
00639260  33 C0                     XOR EAX,EAX
00639262  5B                        POP EBX
00639263  8B E5                     MOV ESP,EBP
00639265  5D                        POP EBP
00639266  C2 04 00                  RET 0x4
LAB_00639269:
00639269  3D 0F 01 00 00            CMP EAX,0x10f
0063926E  75 30                     JNZ 0x006392a0
00639270  6A 7A                     PUSH 0x7a
00639272  E8 F9 19 07 00            CALL 0x006aac70
00639277  50                        PUSH EAX
00639278  8B CB                     MOV ECX,EBX
0063927A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0063927D  E8 45 98 DC FF            CALL 0x00402ac7
00639282  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00639285  8B 43 18                  MOV EAX,dword ptr [EBX + 0x18]
00639288  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0063928E  6A 7A                     PUSH 0x7a
00639290  52                        PUSH EDX
00639291  50                        PUSH EAX
00639292  E8 62 93 DC FF            CALL 0x004025f9
00639297  8D 4D FC                  LEA ECX,[EBP + -0x4]
0063929A  51                        PUSH ECX
0063929B  E8 C0 1D 07 00            CALL 0x006ab060
switchD_00638d7a::default:
006392A0  5F                        POP EDI
006392A1  5E                        POP ESI
006392A2  33 C0                     XOR EAX,EAX
006392A4  5B                        POP EBX
006392A5  8B E5                     MOV ESP,EBP
006392A7  5D                        POP EBP
006392A8  C2 04 00                  RET 0x4
