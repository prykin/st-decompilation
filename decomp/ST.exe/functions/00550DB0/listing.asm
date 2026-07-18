FUN_00550db0:
00550DB0  55                        PUSH EBP
00550DB1  8B EC                     MOV EBP,ESP
00550DB3  81 EC DC 05 00 00         SUB ESP,0x5dc
00550DB9  53                        PUSH EBX
00550DBA  56                        PUSH ESI
00550DBB  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00550DBE  57                        PUSH EDI
00550DBF  B9 16 00 00 00            MOV ECX,0x16
00550DC4  33 C0                     XOR EAX,EAX
00550DC6  8D 7D 90                  LEA EDI,[EBP + -0x70]
00550DC9  8D 95 50 FF FF FF         LEA EDX,[EBP + 0xffffff50]
00550DCF  F3 AB                     STOSD.REP ES:EDI
00550DD1  B9 54 00 00 00            MOV ECX,0x54
00550DD6  8D BD 24 FA FF FF         LEA EDI,[EBP + 0xfffffa24]
00550DDC  F3 AB                     STOSD.REP ES:EDI
00550DDE  B9 F6 00 00 00            MOV ECX,0xf6
00550DE3  8D BD 74 FB FF FF         LEA EDI,[EBP + 0xfffffb74]
00550DE9  F3 AB                     STOSD.REP ES:EDI
00550DEB  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00550DF0  8D 8D 4C FF FF FF         LEA ECX,[EBP + 0xffffff4c]
00550DF6  6A 00                     PUSH 0x0
00550DF8  52                        PUSH EDX
00550DF9  89 85 4C FF FF FF         MOV dword ptr [EBP + 0xffffff4c],EAX
00550DFF  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00550E05  E8 E6 C9 1D 00            CALL 0x0072d7f0
00550E0A  8B F0                     MOV ESI,EAX
00550E0C  83 C4 08                  ADD ESP,0x8
00550E0F  85 F6                     TEST ESI,ESI
00550E11  0F 85 7A 03 00 00         JNZ 0x00551191
00550E17  A0 4E 87 80 00            MOV AL,[0x0080874e]
00550E1C  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
00550E1F  2C 03                     SUB AL,0x3
00550E21  6A 77                     PUSH 0x77
00550E23  F6 D8                     NEG AL
00550E25  1B C0                     SBB EAX,EAX
00550E27  89 1D 44 2A 80 00         MOV dword ptr [0x00802a44],EBX
00550E2D  24 FA                     AND AL,0xfa
00550E2F  05 DE 00 00 00            ADD EAX,0xde
00550E34  50                        PUSH EAX
00550E35  68 C0 36 00 00            PUSH 0x36c0
00550E3A  6A 0B                     PUSH 0xb
00550E3C  68 BF 00 00 00            PUSH 0xbf
00550E41  6A 03                     PUSH 0x3
00550E43  6A 40                     PUSH 0x40
00550E45  56                        PUSH ESI
00550E46  68 80 86 7C 00            PUSH 0x7c8680
00550E4B  E8 2C 49 EB FF            CALL 0x0040577c
00550E50  83 C4 08                  ADD ESP,0x8
00550E53  8B CB                     MOV ECX,EBX
00550E55  50                        PUSH EAX
00550E56  E8 A5 29 EB FF            CALL 0x00403800
00550E5B  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
00550E61  56                        PUSH ESI
00550E62  68 1C 21 7C 00            PUSH 0x7c211c
00550E67  51                        PUSH ECX
00550E68  68 9D 01 00 00            PUSH 0x19d
00550E6D  E8 3E C0 1B 00            CALL 0x0070ceb0
00550E72  BF 01 00 00 00            MOV EDI,0x1
00550E77  56                        PUSH ESI
00550E78  56                        PUSH ESI
00550E79  57                        PUSH EDI
00550E7A  89 83 DD 01 00 00         MOV dword ptr [EBX + 0x1dd],EAX
00550E80  56                        PUSH ESI
00550E81  89 78 58                  MOV dword ptr [EAX + 0x58],EDI
00550E84  89 70 5C                  MOV dword ptr [EAX + 0x5c],ESI
00550E87  8B 15 94 67 80 00         MOV EDX,dword ptr [0x00806794]
00550E8D  6A FF                     PUSH -0x1
00550E8F  68 4C 20 7C 00            PUSH 0x7c204c
00550E94  6A 0B                     PUSH 0xb
00550E96  52                        PUSH EDX
00550E97  E8 54 8C 1B 00            CALL 0x00709af0
00550E9C  56                        PUSH ESI
00550E9D  56                        PUSH ESI
00550E9E  57                        PUSH EDI
00550E9F  56                        PUSH ESI
00550EA0  89 83 D1 01 00 00         MOV dword ptr [EBX + 0x1d1],EAX
00550EA6  A1 94 67 80 00            MOV EAX,[0x00806794]
00550EAB  6A FF                     PUSH -0x1
00550EAD  68 48 20 7C 00            PUSH 0x7c2048
00550EB2  6A 0B                     PUSH 0xb
00550EB4  50                        PUSH EAX
00550EB5  E8 36 8C 1B 00            CALL 0x00709af0
00550EBA  83 C4 50                  ADD ESP,0x50
00550EBD  89 83 D5 01 00 00         MOV dword ptr [EBX + 0x1d5],EAX
00550EC3  56                        PUSH ESI
00550EC4  56                        PUSH ESI
00550EC5  57                        PUSH EDI
00550EC6  56                        PUSH ESI
00550EC7  6A FF                     PUSH -0x1
00550EC9  56                        PUSH ESI
00550ECA  68 70 86 7C 00            PUSH 0x7c8670
00550ECF  E8 A8 48 EB FF            CALL 0x0040577c
00550ED4  8B 0D 94 67 80 00         MOV ECX,dword ptr [0x00806794]
00550EDA  83 C4 08                  ADD ESP,0x8
00550EDD  50                        PUSH EAX
00550EDE  6A 0B                     PUSH 0xb
00550EE0  51                        PUSH ECX
00550EE1  E8 0A 8C 1B 00            CALL 0x00709af0
00550EE6  8A 93 D0 01 00 00         MOV DL,byte ptr [EBX + 0x1d0]
00550EEC  89 83 D9 01 00 00         MOV dword ptr [EBX + 0x1d9],EAX
00550EF2  8B 43 5C                  MOV EAX,dword ptr [EBX + 0x5c]
00550EF5  88 55 FF                  MOV byte ptr [EBP + -0x1],DL
00550EF8  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00550EFB  A0 4E 87 80 00            MOV AL,[0x0080874e]
00550F00  83 C4 20                  ADD ESP,0x20
00550F03  32 C9                     XOR CL,CL
00550F05  33 D2                     XOR EDX,EDX
00550F07  3C 03                     CMP AL,0x3
00550F09  0F 95 C2                  SETNZ DL
00550F0C  83 C2 3B                  ADD EDX,0x3b
00550F0F  2C 03                     SUB AL,0x3
00550F11  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00550F14  8B 53 3C                  MOV EDX,dword ptr [EBX + 0x3c]
00550F17  8D B5 28 FA FF FF         LEA ESI,[EBP + 0xfffffa28]
00550F1D  F6 D8                     NEG AL
00550F1F  1B C0                     SBB EAX,EAX
00550F21  24 FE                     AND AL,0xfe
00550F23  83 C0 22                  ADD EAX,0x22
00550F26  03 C2                     ADD EAX,EDX
00550F28  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_00550f2b:
00550F2B  8A 55 FF                  MOV DL,byte ptr [EBP + -0x1]
00550F2E  33 C0                     XOR EAX,EAX
00550F30  3A CA                     CMP CL,DL
00550F32  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00550F35  0F 94 C0                  SETZ AL
00550F38  89 7E FC                  MOV dword ptr [ESI + -0x4],EDI
00550F3B  89 06                     MOV dword ptr [ESI],EAX
00550F3D  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00550F40  89 46 08                  MOV dword ptr [ESI + 0x8],EAX
00550F43  C7 46 10 3A 00 00 00      MOV dword ptr [ESI + 0x10],0x3a
00550F4A  85 D2                     TEST EDX,EDX
00550F4C  8B 15 34 67 80 00         MOV EDX,dword ptr [0x00806734]
00550F52  74 03                     JZ 0x00550f57
00550F54  8B 53 44                  MOV EDX,dword ptr [EBX + 0x44]
LAB_00550f57:
00550F57  83 C2 17                  ADD EDX,0x17
00550F5A  FE C1                     INC CL
00550F5C  89 56 0C                  MOV dword ptr [ESI + 0xc],EDX
00550F5F  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00550F62  C7 46 14 13 00 00 00      MOV dword ptr [ESI + 0x14],0x13
00550F69  47                        INC EDI
00550F6A  03 C2                     ADD EAX,EDX
00550F6C  83 C6 70                  ADD ESI,0x70
00550F6F  80 F9 02                  CMP CL,0x2
00550F72  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00550F75  72 B4                     JC 0x00550f2b
00550F77  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
00550F7A  8D 8D 24 FA FF FF         LEA ECX,[EBP + 0xfffffa24]
00550F80  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
00550F83  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
00550F86  8D 45 90                  LEA EAX,[EBP + -0x70]
00550F89  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
00550F8C  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
00550F8F  6A 00                     PUSH 0x0
00550F91  BE 01 00 00 00            MOV ESI,0x1
00550F96  BF 02 00 00 00            MOV EDI,0x2
00550F9B  50                        PUSH EAX
00550F9C  8D 83 C4 01 00 00         LEA EAX,[EBX + 0x1c4]
00550FA2  89 75 90                  MOV dword ptr [EBP + -0x70],ESI
00550FA5  89 75 94                  MOV dword ptr [EBP + -0x6c],ESI
00550FA8  89 75 DC                  MOV dword ptr [EBP + -0x24],ESI
00550FAB  89 7D A4                  MOV dword ptr [EBP + -0x5c],EDI
00550FAE  C7 45 A8 0A B2 00 00      MOV dword ptr [EBP + -0x58],0xb20a
00550FB5  89 7D C4                  MOV dword ptr [EBP + -0x3c],EDI
00550FB8  C7 45 C8 0B B2 00 00      MOV dword ptr [EBP + -0x38],0xb20b
00550FBF  89 75 E0                  MOV dword ptr [EBP + -0x20],ESI
00550FC2  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
00550FC5  8B 11                     MOV EDX,dword ptr [ECX]
00550FC7  6A 00                     PUSH 0x0
00550FC9  50                        PUSH EAX
00550FCA  6A 05                     PUSH 0x5
00550FCC  FF 52 08                  CALL dword ptr [EDX + 0x8]
00550FCF  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
00550FD2  33 C0                     XOR EAX,EAX
00550FD4  56                        PUSH ESI
00550FD5  50                        PUSH EAX
00550FD6  50                        PUSH EAX
00550FD7  56                        PUSH ESI
00550FD8  50                        PUSH EAX
00550FD9  68 D8 22 7C 00            PUSH 0x7c22d8
00550FDE  89 85 74 FB FF FF         MOV dword ptr [EBP + 0xfffffb74],EAX
00550FE4  89 8D 1C FF FF FF         MOV dword ptr [EBP + 0xffffff1c],ECX
00550FEA  89 BD 20 FF FF FF         MOV dword ptr [EBP + 0xffffff20],EDI
00550FF0  C7 85 24 FF FF FF 0C B2 00 00  MOV dword ptr [EBP + 0xffffff24],0xb20c
00550FFA  89 BD F8 FC FF FF         MOV dword ptr [EBP + 0xfffffcf8],EDI
00551000  89 BD 78 FB FF FF         MOV dword ptr [EBP + 0xfffffb78],EDI
00551006  89 B5 88 FC FF FF         MOV dword ptr [EBP + 0xfffffc88],ESI
0055100C  89 B5 84 FC FF FF         MOV dword ptr [EBP + 0xfffffc84],ESI
00551012  89 85 7C FB FF FF         MOV dword ptr [EBP + 0xfffffb7c],EAX
00551018  89 BD 80 FB FF FF         MOV dword ptr [EBP + 0xfffffb80],EDI
0055101E  E8 59 47 EB FF            CALL 0x0040577c
00551023  83 C4 08                  ADD ESP,0x8
00551026  50                        PUSH EAX
00551027  E8 D4 1B 1A 00            CALL 0x006f2c00
0055102C  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
00551032  83 C4 0C                  ADD ESP,0xc
00551035  50                        PUSH EAX
00551036  56                        PUSH ESI
00551037  E8 A4 0C 1A 00            CALL 0x006f1ce0
0055103C  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0055103F  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
00551042  8D 4D EC                  LEA ECX,[EBP + -0x14]
00551045  89 95 8C FB FF FF         MOV dword ptr [EBP + 0xfffffb8c],EDX
0055104B  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
0055104E  51                        PUSH ECX
0055104F  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
00551055  89 85 90 FB FF FF         MOV dword ptr [EBP + 0xfffffb90],EAX
0055105B  E8 80 10 1A 00            CALL 0x006f20e0
00551060  8B 53 3C                  MOV EDX,dword ptr [EBX + 0x3c]
00551063  8B 43 5C                  MOV EAX,dword ptr [EBX + 0x5c]
00551066  83 C2 69                  ADD EDX,0x69
00551069  89 95 84 FB FF FF         MOV dword ptr [EBP + 0xfffffb84],EDX
0055106F  8B 15 34 67 80 00         MOV EDX,dword ptr [0x00806734]
00551075  85 C0                     TEST EAX,EAX
00551077  8B CA                     MOV ECX,EDX
00551079  74 03                     JZ 0x0055107e
0055107B  8B 4B 44                  MOV ECX,dword ptr [EBX + 0x44]
LAB_0055107e:
0055107E  83 C1 46                  ADD ECX,0x46
00551081  89 BD E0 FB FF FF         MOV dword ptr [EBP + 0xfffffbe0],EDI
00551087  89 8D 88 FB FF FF         MOV dword ptr [EBP + 0xfffffb88],ECX
0055108D  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
00551090  89 8D DC FB FF FF         MOV dword ptr [EBP + 0xfffffbdc],ECX
00551096  B9 5F 00 00 00            MOV ECX,0x5f
0055109B  8D B5 7C FB FF FF         LEA ESI,[EBP + 0xfffffb7c]
005510A1  8D BD FC FC FF FF         LEA EDI,[EBP + 0xfffffcfc]
005510A7  C7 85 E4 FB FF FF 05 C0 00 00  MOV dword ptr [EBP + 0xfffffbe4],0xc005
005510B1  C7 85 8C FC FF FF F4 01 00 00  MOV dword ptr [EBP + 0xfffffc8c],0x1f4
005510BB  C7 85 90 FC FF FF 28 00 00 00  MOV dword ptr [EBP + 0xfffffc90],0x28
005510C5  85 C0                     TEST EAX,EAX
005510C7  F3 A5                     MOVSD.REP ES:EDI,ESI
005510C9  8B C2                     MOV EAX,EDX
005510CB  74 03                     JZ 0x005510d0
005510CD  8B 43 44                  MOV EAX,dword ptr [EBX + 0x44]
LAB_005510d0:
005510D0  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
005510D3  83 C0 57                  ADD EAX,0x57
005510D6  89 85 08 FD FF FF         MOV dword ptr [EBP + 0xfffffd08],EAX
005510DC  8D 85 74 FB FF FF         LEA EAX,[EBP + 0xfffffb74]
005510E2  6A 00                     PUSH 0x0
005510E4  8D B3 C0 01 00 00         LEA ESI,[EBX + 0x1c0]
005510EA  50                        PUSH EAX
005510EB  C7 85 64 FD FF FF 06 C0 00 00  MOV dword ptr [EBP + 0xfffffd64],0xc006
005510F5  C7 85 40 FF FF FF 01 00 00 00  MOV dword ptr [EBP + 0xffffff40],0x1
005510FF  C7 85 44 FF FF FF 14 00 00 00  MOV dword ptr [EBP + 0xffffff44],0x14
00551109  C7 85 48 FF FF FF 0A 00 00 00  MOV dword ptr [EBP + 0xffffff48],0xa
00551113  8B 11                     MOV EDX,dword ptr [ECX]
00551115  6A 00                     PUSH 0x0
00551117  56                        PUSH ESI
00551118  6A 04                     PUSH 0x4
0055111A  FF 52 08                  CALL dword ptr [EDX + 0x8]
0055111D  8B 0E                     MOV ECX,dword ptr [ESI]
0055111F  8D 7B 18                  LEA EDI,[EBX + 0x18]
00551122  57                        PUSH EDI
00551123  51                        PUSH ECX
00551124  6A 02                     PUSH 0x2
00551126  8B CB                     MOV ECX,EBX
00551128  C7 43 28 28 00 00 00      MOV dword ptr [EBX + 0x28],0x28
0055112F  C7 43 2C A1 86 01 00      MOV dword ptr [EBX + 0x2c],0x186a1
00551136  E8 45 4F 19 00            CALL 0x006e6080
0055113B  8B 0E                     MOV ECX,dword ptr [ESI]
0055113D  33 D2                     XOR EDX,EDX
0055113F  8A 93 D0 01 00 00         MOV DL,byte ptr [EBX + 0x1d0]
00551145  33 C0                     XOR EAX,EAX
00551147  C7 43 28 22 00 00 00      MOV dword ptr [EBX + 0x28],0x22
0055114E  57                        PUSH EDI
0055114F  66 8B 84 53 BC 01 00 00   MOV AX,word ptr [EBX + EDX*0x2 + 0x1bc]
00551157  51                        PUSH ECX
00551158  6A 02                     PUSH 0x2
0055115A  8B CB                     MOV ECX,EBX
0055115C  89 43 2C                  MOV dword ptr [EBX + 0x2c],EAX
0055115F  E8 1C 4F 19 00            CALL 0x006e6080
00551164  8B 16                     MOV EDX,dword ptr [ESI]
00551166  57                        PUSH EDI
00551167  52                        PUSH EDX
00551168  6A 02                     PUSH 0x2
0055116A  8B CB                     MOV ECX,EBX
0055116C  C7 43 28 20 00 00 00      MOV dword ptr [EBX + 0x28],0x20
00551173  C7 43 2C 01 00 00 00      MOV dword ptr [EBX + 0x2c],0x1
0055117A  E8 01 4F 19 00            CALL 0x006e6080
0055117F  8B 85 4C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff4c]
00551185  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0055118A  5F                        POP EDI
0055118B  5E                        POP ESI
0055118C  5B                        POP EBX
0055118D  8B E5                     MOV ESP,EBP
0055118F  5D                        POP EBP
00551190  C3                        RET
LAB_00551191:
00551191  8B 8D 4C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff4c]
00551197  68 4C 86 7C 00            PUSH 0x7c864c
0055119C  68 CC 4C 7A 00            PUSH 0x7a4ccc
005511A1  56                        PUSH ESI
005511A2  6A 00                     PUSH 0x0
005511A4  6A 53                     PUSH 0x53
005511A6  68 24 86 7C 00            PUSH 0x7c8624
005511AB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005511B1  E8 1A C3 15 00            CALL 0x006ad4d0
005511B6  83 C4 18                  ADD ESP,0x18
005511B9  85 C0                     TEST EAX,EAX
005511BB  74 01                     JZ 0x005511be
005511BD  CC                        INT3
LAB_005511be:
005511BE  6A 53                     PUSH 0x53
005511C0  68 24 86 7C 00            PUSH 0x7c8624
005511C5  6A 00                     PUSH 0x0
005511C7  56                        PUSH ESI
005511C8  E8 73 4C 15 00            CALL 0x006a5e40
005511CD  5F                        POP EDI
005511CE  5E                        POP ESI
005511CF  5B                        POP EBX
005511D0  8B E5                     MOV ESP,EBP
005511D2  5D                        POP EBP
005511D3  C3                        RET
