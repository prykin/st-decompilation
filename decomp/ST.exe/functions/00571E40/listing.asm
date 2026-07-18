FUN_00571e40:
00571E40  55                        PUSH EBP
00571E41  8B EC                     MOV EBP,ESP
00571E43  81 EC 20 01 00 00         SUB ESP,0x120
00571E49  53                        PUSH EBX
00571E4A  56                        PUSH ESI
00571E4B  8D 45 FC                  LEA EAX,[EBP + -0x4]
00571E4E  57                        PUSH EDI
00571E4F  50                        PUSH EAX
00571E50  68 34 A4 7C 00            PUSH 0x7ca434
00571E55  8B D9                     MOV EBX,ECX
00571E57  68 01 00 00 80            PUSH 0x80000001
00571E5C  FF 15 58 B9 85 00         CALL dword ptr [0x0085b958]
00571E62  85 C0                     TEST EAX,EAX
00571E64  0F 85 23 05 00 00         JNZ 0x0057238d
00571E6A  8D 4D F8                  LEA ECX,[EBP + -0x8]
00571E6D  8B 35 54 B9 85 00         MOV ESI,dword ptr [0x0085b954]
00571E73  8D 7B 28                  LEA EDI,[EBX + 0x28]
00571E76  51                        PUSH ECX
00571E77  8D 55 F4                  LEA EDX,[EBP + -0xc]
00571E7A  57                        PUSH EDI
00571E7B  52                        PUSH EDX
00571E7C  50                        PUSH EAX
00571E7D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00571E80  68 AC A4 7C 00            PUSH 0x7ca4ac
00571E85  50                        PUSH EAX
00571E86  C7 45 F8 04 01 00 00      MOV dword ptr [EBP + -0x8],0x104
00571E8D  FF D6                     CALL ESI
00571E8F  85 C0                     TEST EAX,EAX
00571E91  74 15                     JZ 0x00571ea8
00571E93  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00571E96  51                        PUSH ECX
00571E97  FF 15 68 B9 85 00         CALL dword ptr [0x0085b968]
00571E9D  5F                        POP EDI
00571E9E  5E                        POP ESI
00571E9F  33 C0                     XOR EAX,EAX
00571EA1  5B                        POP EBX
00571EA2  8B E5                     MOV ESP,EBP
00571EA4  5D                        POP EBP
00571EA5  C2 04 00                  RET 0x4
LAB_00571ea8:
00571EA8  57                        PUSH EDI
00571EA9  57                        PUSH EDI
00571EAA  E8 D1 63 14 00            CALL 0x006b8280
00571EAF  8A 53 2B                  MOV DL,byte ptr [EBX + 0x2b]
00571EB2  57                        PUSH EDI
00571EB3  88 55 F3                  MOV byte ptr [EBP + -0xd],DL
00571EB6  C6 43 2B 00               MOV byte ptr [EBX + 0x2b],0x0
00571EBA  FF 15 64 BC 85 00         CALL dword ptr [0x0085bc64]
00571EC0  8A 4D F3                  MOV CL,byte ptr [EBP + -0xd]
00571EC3  83 F8 03                  CMP EAX,0x3
00571EC6  88 4B 2B                  MOV byte ptr [EBX + 0x2b],CL
00571EC9  74 15                     JZ 0x00571ee0
00571ECB  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00571ECE  52                        PUSH EDX
00571ECF  FF 15 68 B9 85 00         CALL dword ptr [0x0085b968]
00571ED5  5F                        POP EDI
00571ED6  5E                        POP ESI
00571ED7  33 C0                     XOR EAX,EAX
00571ED9  5B                        POP EBX
00571EDA  8B E5                     MOV ESP,EBP
00571EDC  5D                        POP EBP
00571EDD  C2 04 00                  RET 0x4
LAB_00571ee0:
00571EE0  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00571EE3  8D 45 F8                  LEA EAX,[EBP + -0x8]
00571EE6  8D BB 2C 01 00 00         LEA EDI,[EBX + 0x12c]
00571EEC  50                        PUSH EAX
00571EED  8D 4D F4                  LEA ECX,[EBP + -0xc]
00571EF0  57                        PUSH EDI
00571EF1  51                        PUSH ECX
00571EF2  6A 00                     PUSH 0x0
00571EF4  68 A0 A4 7C 00            PUSH 0x7ca4a0
00571EF9  52                        PUSH EDX
00571EFA  C7 45 F8 04 01 00 00      MOV dword ptr [EBP + -0x8],0x104
00571F01  FF D6                     CALL ESI
00571F03  85 C0                     TEST EAX,EAX
00571F05  0F 85 82 04 00 00         JNZ 0x0057238d
00571F0B  57                        PUSH EDI
00571F0C  57                        PUSH EDI
00571F0D  E8 6E 63 14 00            CALL 0x006b8280
00571F12  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00571F15  8D 4D F8                  LEA ECX,[EBP + -0x8]
00571F18  8D BB 38 04 00 00         LEA EDI,[EBX + 0x438]
00571F1E  51                        PUSH ECX
00571F1F  8D 55 F4                  LEA EDX,[EBP + -0xc]
00571F22  57                        PUSH EDI
00571F23  52                        PUSH EDX
00571F24  6A 00                     PUSH 0x0
00571F26  68 B8 A4 7C 00            PUSH 0x7ca4b8
00571F2B  50                        PUSH EAX
00571F2C  C7 45 F8 04 01 00 00      MOV dword ptr [EBP + -0x8],0x104
00571F33  FF D6                     CALL ESI
00571F35  85 C0                     TEST EAX,EAX
00571F37  74 15                     JZ 0x00571f4e
00571F39  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00571F3C  51                        PUSH ECX
00571F3D  FF 15 68 B9 85 00         CALL dword ptr [0x0085b968]
00571F43  5F                        POP EDI
00571F44  5E                        POP ESI
00571F45  33 C0                     XOR EAX,EAX
00571F47  5B                        POP EBX
00571F48  8B E5                     MOV ESP,EBP
00571F4A  5D                        POP EBP
00571F4B  C2 04 00                  RET 0x4
LAB_00571f4e:
00571F4E  57                        PUSH EDI
00571F4F  57                        PUSH EDI
00571F50  E8 2B 63 14 00            CALL 0x006b8280
00571F55  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00571F58  8D 55 F8                  LEA EDX,[EBP + -0x8]
00571F5B  8D BB 30 02 00 00         LEA EDI,[EBX + 0x230]
00571F61  52                        PUSH EDX
00571F62  8D 45 F4                  LEA EAX,[EBP + -0xc]
00571F65  57                        PUSH EDI
00571F66  50                        PUSH EAX
00571F67  6A 00                     PUSH 0x0
00571F69  68 C4 A4 7C 00            PUSH 0x7ca4c4
00571F6E  51                        PUSH ECX
00571F6F  C7 45 F8 04 01 00 00      MOV dword ptr [EBP + -0x8],0x104
00571F76  FF D6                     CALL ESI
00571F78  85 C0                     TEST EAX,EAX
00571F7A  74 15                     JZ 0x00571f91
00571F7C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00571F7F  52                        PUSH EDX
00571F80  FF 15 68 B9 85 00         CALL dword ptr [0x0085b968]
00571F86  5F                        POP EDI
00571F87  5E                        POP ESI
00571F88  33 C0                     XOR EAX,EAX
00571F8A  5B                        POP EBX
00571F8B  8B E5                     MOV ESP,EBP
00571F8D  5D                        POP EBP
00571F8E  C2 04 00                  RET 0x4
LAB_00571f91:
00571F91  57                        PUSH EDI
00571F92  57                        PUSH EDI
00571F93  E8 E8 62 14 00            CALL 0x006b8280
00571F98  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00571F9B  8D 45 F8                  LEA EAX,[EBP + -0x8]
00571F9E  8D BB 34 03 00 00         LEA EDI,[EBX + 0x334]
00571FA4  50                        PUSH EAX
00571FA5  8D 4D F4                  LEA ECX,[EBP + -0xc]
00571FA8  57                        PUSH EDI
00571FA9  51                        PUSH ECX
00571FAA  6A 00                     PUSH 0x0
00571FAC  68 D0 A4 7C 00            PUSH 0x7ca4d0
00571FB1  52                        PUSH EDX
00571FB2  C7 45 F8 04 01 00 00      MOV dword ptr [EBP + -0x8],0x104
00571FB9  FF D6                     CALL ESI
00571FBB  85 C0                     TEST EAX,EAX
00571FBD  0F 85 CA 03 00 00         JNZ 0x0057238d
00571FC3  57                        PUSH EDI
00571FC4  57                        PUSH EDI
00571FC5  E8 B6 62 14 00            CALL 0x006b8280
00571FCA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00571FCD  8D 4D F8                  LEA ECX,[EBP + -0x8]
00571FD0  8D BB 3C 05 00 00         LEA EDI,[EBX + 0x53c]
00571FD6  51                        PUSH ECX
00571FD7  8D 55 F4                  LEA EDX,[EBP + -0xc]
00571FDA  57                        PUSH EDI
00571FDB  52                        PUSH EDX
00571FDC  6A 00                     PUSH 0x0
00571FDE  68 E4 A4 7C 00            PUSH 0x7ca4e4
00571FE3  50                        PUSH EAX
00571FE4  C7 45 F8 04 01 00 00      MOV dword ptr [EBP + -0x8],0x104
00571FEB  FF D6                     CALL ESI
00571FED  85 C0                     TEST EAX,EAX
00571FEF  74 15                     JZ 0x00572006
00571FF1  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00571FF4  51                        PUSH ECX
00571FF5  FF 15 68 B9 85 00         CALL dword ptr [0x0085b968]
00571FFB  5F                        POP EDI
00571FFC  5E                        POP ESI
00571FFD  33 C0                     XOR EAX,EAX
00571FFF  5B                        POP EBX
00572000  8B E5                     MOV ESP,EBP
00572002  5D                        POP EBP
00572003  C2 04 00                  RET 0x4
LAB_00572006:
00572006  57                        PUSH EDI
00572007  57                        PUSH EDI
00572008  E8 73 62 14 00            CALL 0x006b8280
0057200D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00572010  8B 3D 68 B9 85 00         MOV EDI,dword ptr [0x0085b968]
00572016  52                        PUSH EDX
00572017  FF D7                     CALL EDI
00572019  A1 CC B0 79 00            MOV EAX,[0x0079b0cc]
0057201E  8D 8D E0 FE FF FF         LEA ECX,[EBP + 0xfffffee0]
00572024  50                        PUSH EAX
00572025  8D 43 28                  LEA EAX,[EBX + 0x28]
00572028  50                        PUSH EAX
00572029  68 E4 6E 7C 00            PUSH 0x7c6ee4
0057202E  51                        PUSH ECX
0057202F  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
00572035  83 C4 10                  ADD ESP,0x10
00572038  8D 95 E0 FE FF FF         LEA EDX,[EBP + 0xfffffee0]
0057203E  6A 00                     PUSH 0x0
00572040  52                        PUSH EDX
00572041  FF 15 7C BC 85 00         CALL dword ptr [0x0085bc7c]
00572047  8D 45 FC                  LEA EAX,[EBP + -0x4]
0057204A  50                        PUSH EAX
0057204B  68 6C A4 7C 00            PUSH 0x7ca46c
00572050  68 01 00 00 80            PUSH 0x80000001
00572055  FF 15 58 B9 85 00         CALL dword ptr [0x0085b958]
0057205B  85 C0                     TEST EAX,EAX
0057205D  75 27                     JNZ 0x00572086
0057205F  8D 4D F8                  LEA ECX,[EBP + -0x8]
00572062  8D 93 7D 07 00 00         LEA EDX,[EBX + 0x77d]
00572068  51                        PUSH ECX
00572069  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0057206C  8D 45 F4                  LEA EAX,[EBP + -0xc]
0057206F  52                        PUSH EDX
00572070  50                        PUSH EAX
00572071  6A 00                     PUSH 0x0
00572073  68 F0 A4 7C 00            PUSH 0x7ca4f0
00572078  51                        PUSH ECX
00572079  C7 45 F8 04 00 00 00      MOV dword ptr [EBP + -0x8],0x4
00572080  FF D6                     CALL ESI
00572082  85 C0                     TEST EAX,EAX
00572084  74 11                     JZ 0x00572097
LAB_00572086:
00572086  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00572089  52                        PUSH EDX
0057208A  FF D7                     CALL EDI
0057208C  5F                        POP EDI
0057208D  5E                        POP ESI
0057208E  33 C0                     XOR EAX,EAX
00572090  5B                        POP EBX
00572091  8B E5                     MOV ESP,EBP
00572093  5D                        POP EBP
00572094  C2 04 00                  RET 0x4
LAB_00572097:
00572097  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0057209A  8D 45 F8                  LEA EAX,[EBP + -0x8]
0057209D  8D BB 79 07 00 00         LEA EDI,[EBX + 0x779]
005720A3  50                        PUSH EAX
005720A4  8D 4D F4                  LEA ECX,[EBP + -0xc]
005720A7  57                        PUSH EDI
005720A8  51                        PUSH ECX
005720A9  6A 00                     PUSH 0x0
005720AB  68 F8 A4 7C 00            PUSH 0x7ca4f8
005720B0  52                        PUSH EDX
005720B1  C7 45 F8 04 00 00 00      MOV dword ptr [EBP + -0x8],0x4
005720B8  FF D6                     CALL ESI
005720BA  85 C0                     TEST EAX,EAX
005720BC  0F 85 CB 02 00 00         JNZ 0x0057238d
005720C2  8B 0F                     MOV ECX,dword ptr [EDI]
005720C4  8B C1                     MOV EAX,ECX
005720C6  C1 E8 10                  SHR EAX,0x10
005720C9  3D B0 DE 00 00            CMP EAX,0xdeb0
005720CE  7F 19                     JG 0x005720e9
005720D0  74 26                     JZ 0x005720f8
005720D2  3D DD D0 00 00            CMP EAX,0xd0dd
005720D7  74 1F                     JZ 0x005720f8
005720D9  3D D0 DD 00 00            CMP EAX,0xddd0
005720DE  7E 10                     JLE 0x005720f0
005720E0  3D D2 DD 00 00            CMP EAX,0xddd2
005720E5  7E 11                     JLE 0x005720f8
005720E7  EB 07                     JMP 0x005720f0
LAB_005720e9:
005720E9  3D FF FF 00 00            CMP EAX,0xffff
005720EE  74 08                     JZ 0x005720f8
LAB_005720f0:
005720F0  81 C9 FF FF DD D0         OR ECX,0xd0ddffff
005720F6  89 0F                     MOV dword ptr [EDI],ECX
LAB_005720f8:
005720F8  8D 4D F8                  LEA ECX,[EBP + -0x8]
005720FB  8D 93 45 06 00 00         LEA EDX,[EBX + 0x645]
00572101  51                        PUSH ECX
00572102  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00572105  8D 45 F4                  LEA EAX,[EBP + -0xc]
00572108  52                        PUSH EDX
00572109  50                        PUSH EAX
0057210A  6A 00                     PUSH 0x0
0057210C  68 00 A5 7C 00            PUSH 0x7ca500
00572111  51                        PUSH ECX
00572112  C7 45 F8 04 01 00 00      MOV dword ptr [EBP + -0x8],0x104
00572119  FF D6                     CALL ESI
0057211B  85 C0                     TEST EAX,EAX
0057211D  74 15                     JZ 0x00572134
0057211F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00572122  52                        PUSH EDX
00572123  FF 15 68 B9 85 00         CALL dword ptr [0x0085b968]
00572129  5F                        POP EDI
0057212A  5E                        POP ESI
0057212B  33 C0                     XOR EAX,EAX
0057212D  5B                        POP EBX
0057212E  8B E5                     MOV ESP,EBP
00572130  5D                        POP EBP
00572131  C2 04 00                  RET 0x4
LAB_00572134:
00572134  8D 4D F8                  LEA ECX,[EBP + -0x8]
00572137  8D 83 49 07 00 00         LEA EAX,[EBX + 0x749]
0057213D  51                        PUSH ECX
0057213E  8D 55 F4                  LEA EDX,[EBP + -0xc]
00572141  50                        PUSH EAX
00572142  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00572145  52                        PUSH EDX
00572146  6A 00                     PUSH 0x0
00572148  68 08 A5 7C 00            PUSH 0x7ca508
0057214D  50                        PUSH EAX
0057214E  C7 45 F8 30 00 00 00      MOV dword ptr [EBP + -0x8],0x30
00572155  FF D6                     CALL ESI
00572157  85 C0                     TEST EAX,EAX
00572159  74 2C                     JZ 0x00572187
0057215B  BF 84 A6 7C 00            MOV EDI,0x7ca684
00572160  83 C9 FF                  OR ECX,0xffffffff
00572163  33 C0                     XOR EAX,EAX
00572165  F2 AE                     SCASB.REPNE ES:EDI
00572167  F7 D1                     NOT ECX
00572169  2B F9                     SUB EDI,ECX
0057216B  8B D1                     MOV EDX,ECX
0057216D  8B F7                     MOV ESI,EDI
0057216F  8D BB 49 07 00 00         LEA EDI,[EBX + 0x749]
00572175  C1 E9 02                  SHR ECX,0x2
00572178  F3 A5                     MOVSD.REP ES:EDI,ESI
0057217A  8B CA                     MOV ECX,EDX
0057217C  83 E1 03                  AND ECX,0x3
0057217F  F3 A4                     MOVSB.REP ES:EDI,ESI
00572181  8B 35 54 B9 85 00         MOV ESI,dword ptr [0x0085b954]
LAB_00572187:
00572187  8D 93 85 07 00 00         LEA EDX,[EBX + 0x785]
0057218D  B9 10 00 00 00            MOV ECX,0x10
00572192  33 C0                     XOR EAX,EAX
00572194  8B FA                     MOV EDI,EDX
00572196  F3 AB                     STOSD.REP ES:EDI
00572198  8D 45 F8                  LEA EAX,[EBP + -0x8]
0057219B  8D 4D F4                  LEA ECX,[EBP + -0xc]
0057219E  50                        PUSH EAX
0057219F  52                        PUSH EDX
005721A0  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005721A3  51                        PUSH ECX
005721A4  6A 00                     PUSH 0x0
005721A6  68 10 A5 7C 00            PUSH 0x7ca510
005721AB  52                        PUSH EDX
005721AC  C7 45 F8 40 00 00 00      MOV dword ptr [EBP + -0x8],0x40
005721B3  FF D6                     CALL ESI
005721B5  85 C0                     TEST EAX,EAX
005721B7  0F 85 D0 01 00 00         JNZ 0x0057238d
005721BD  8D 4D F8                  LEA ECX,[EBP + -0x8]
005721C0  8D 93 81 07 00 00         LEA EDX,[EBX + 0x781]
005721C6  51                        PUSH ECX
005721C7  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005721CA  8D 45 F4                  LEA EAX,[EBP + -0xc]
005721CD  52                        PUSH EDX
005721CE  50                        PUSH EAX
005721CF  6A 00                     PUSH 0x0
005721D1  68 34 A5 7C 00            PUSH 0x7ca534
005721D6  51                        PUSH ECX
005721D7  C7 45 F8 04 00 00 00      MOV dword ptr [EBP + -0x8],0x4
005721DE  FF D6                     CALL ESI
005721E0  85 C0                     TEST EAX,EAX
005721E2  74 15                     JZ 0x005721f9
005721E4  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005721E7  52                        PUSH EDX
005721E8  FF 15 68 B9 85 00         CALL dword ptr [0x0085b968]
005721EE  5F                        POP EDI
005721EF  5E                        POP ESI
005721F0  33 C0                     XOR EAX,EAX
005721F2  5B                        POP EBX
005721F3  8B E5                     MOV ESP,EBP
005721F5  5D                        POP EBP
005721F6  C2 04 00                  RET 0x4
LAB_005721f9:
005721F9  8D 93 AE 0D 00 00         LEA EDX,[EBX + 0xdae]
005721FF  B9 10 00 00 00            MOV ECX,0x10
00572204  33 C0                     XOR EAX,EAX
00572206  8B FA                     MOV EDI,EDX
00572208  F3 AB                     STOSD.REP ES:EDI
0057220A  8D 45 F8                  LEA EAX,[EBP + -0x8]
0057220D  8D 4D F4                  LEA ECX,[EBP + -0xc]
00572210  50                        PUSH EAX
00572211  52                        PUSH EDX
00572212  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00572215  51                        PUSH ECX
00572216  6A 00                     PUSH 0x0
00572218  68 3C A5 7C 00            PUSH 0x7ca53c
0057221D  52                        PUSH EDX
0057221E  C7 45 F8 40 00 00 00      MOV dword ptr [EBP + -0x8],0x40
00572225  FF D6                     CALL ESI
00572227  85 C0                     TEST EAX,EAX
00572229  0F 85 5E 01 00 00         JNZ 0x0057238d
0057222F  F6 45 08 02               TEST byte ptr [EBP + 0x8],0x2
00572233  74 3A                     JZ 0x0057226f
00572235  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00572238  8D 4D E4                  LEA ECX,[EBP + -0x1c]
0057223B  51                        PUSH ECX
0057223C  8D 55 F4                  LEA EDX,[EBP + -0xc]
0057223F  68 F8 71 80 00            PUSH 0x8071f8
00572244  52                        PUSH EDX
00572245  6A 00                     PUSH 0x0
00572247  68 1C A5 7C 00            PUSH 0x7ca51c
0057224C  50                        PUSH EAX
0057224D  C7 45 E4 00 01 00 00      MOV dword ptr [EBP + -0x1c],0x100
00572254  FF D6                     CALL ESI
00572256  85 C0                     TEST EAX,EAX
00572258  74 15                     JZ 0x0057226f
0057225A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0057225D  51                        PUSH ECX
0057225E  FF 15 68 B9 85 00         CALL dword ptr [0x0085b968]
00572264  5F                        POP EDI
00572265  5E                        POP ESI
00572266  33 C0                     XOR EAX,EAX
00572268  5B                        POP EBX
00572269  8B E5                     MOV ESP,EBP
0057226B  5D                        POP EBP
0057226C  C2 04 00                  RET 0x4
LAB_0057226f:
0057226F  F6 45 08 01               TEST byte ptr [EBP + 0x8],0x1
00572273  0F 84 FC 00 00 00         JZ 0x00572375
00572279  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0057227C  8D 55 08                  LEA EDX,[EBP + 0x8]
0057227F  8D 83 40 06 00 00         LEA EAX,[EBX + 0x640]
00572285  52                        PUSH EDX
00572286  50                        PUSH EAX
00572287  8D 45 F4                  LEA EAX,[EBP + -0xc]
0057228A  50                        PUSH EAX
0057228B  6A 00                     PUSH 0x0
0057228D  68 24 A5 7C 00            PUSH 0x7ca524
00572292  51                        PUSH ECX
00572293  C7 45 08 05 00 00 00      MOV dword ptr [EBP + 0x8],0x5
0057229A  FF D6                     CALL ESI
0057229C  85 C0                     TEST EAX,EAX
0057229E  74 15                     JZ 0x005722b5
005722A0  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005722A3  52                        PUSH EDX
005722A4  FF 15 68 B9 85 00         CALL dword ptr [0x0085b968]
005722AA  5F                        POP EDI
005722AB  5E                        POP ESI
005722AC  33 C0                     XOR EAX,EAX
005722AE  5B                        POP EBX
005722AF  8B E5                     MOV ESP,EBP
005722B1  5D                        POP EBP
005722B2  C2 04 00                  RET 0x4
LAB_005722b5:
005722B5  BF 94 A6 7C 00            MOV EDI,0x7ca694
005722BA  8D B3 40 06 00 00         LEA ESI,[EBX + 0x640]
LAB_005722c0:
005722C0  8A 0E                     MOV CL,byte ptr [ESI]
005722C2  8A 17                     MOV DL,byte ptr [EDI]
005722C4  8A C1                     MOV AL,CL
005722C6  3A CA                     CMP CL,DL
005722C8  75 1E                     JNZ 0x005722e8
005722CA  84 C0                     TEST AL,AL
005722CC  74 16                     JZ 0x005722e4
005722CE  8A 56 01                  MOV DL,byte ptr [ESI + 0x1]
005722D1  8A 4F 01                  MOV CL,byte ptr [EDI + 0x1]
005722D4  8A C2                     MOV AL,DL
005722D6  3A D1                     CMP DL,CL
005722D8  75 0E                     JNZ 0x005722e8
005722DA  83 C6 02                  ADD ESI,0x2
005722DD  83 C7 02                  ADD EDI,0x2
005722E0  84 C0                     TEST AL,AL
005722E2  75 DC                     JNZ 0x005722c0
LAB_005722e4:
005722E4  33 C0                     XOR EAX,EAX
005722E6  EB 05                     JMP 0x005722ed
LAB_005722e8:
005722E8  1B C0                     SBB EAX,EAX
005722EA  83 D8 FF                  SBB EAX,-0x1
LAB_005722ed:
005722ED  85 C0                     TEST EAX,EAX
005722EF  74 7D                     JZ 0x0057236e
005722F1  A1 90 A6 7C 00            MOV EAX,[0x007ca690]
005722F6  8A 93 40 06 00 00         MOV DL,byte ptr [EBX + 0x640]
005722FC  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
005722FF  33 C9                     XOR ECX,ECX
00572301  8D 45 E8                  LEA EAX,[EBP + -0x18]
00572304  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
00572307  50                        PUSH EAX
00572308  66 89 4D F0               MOV word ptr [EBP + -0x10],CX
0057230C  88 55 E8                  MOV byte ptr [EBP + -0x18],DL
0057230F  FF 15 64 BC 85 00         CALL dword ptr [0x0085bc64]
00572315  83 F8 05                  CMP EAX,0x5
00572318  74 23                     JZ 0x0057233d
0057231A  BF 94 A6 7C 00            MOV EDI,0x7ca694
0057231F  83 C9 FF                  OR ECX,0xffffffff
00572322  33 C0                     XOR EAX,EAX
00572324  F2 AE                     SCASB.REPNE ES:EDI
00572326  F7 D1                     NOT ECX
00572328  2B F9                     SUB EDI,ECX
0057232A  8B D1                     MOV EDX,ECX
0057232C  8B F7                     MOV ESI,EDI
0057232E  8D BB 40 06 00 00         LEA EDI,[EBX + 0x640]
00572334  C1 E9 02                  SHR ECX,0x2
00572337  F3 A5                     MOVSD.REP ES:EDI,ESI
00572339  8B CA                     MOV ECX,EDX
0057233B  EB 1F                     JMP 0x0057235c
LAB_0057233d:
0057233D  8D 7D E8                  LEA EDI,[EBP + -0x18]
00572340  83 C9 FF                  OR ECX,0xffffffff
00572343  33 C0                     XOR EAX,EAX
00572345  F2 AE                     SCASB.REPNE ES:EDI
00572347  F7 D1                     NOT ECX
00572349  2B F9                     SUB EDI,ECX
0057234B  8B C1                     MOV EAX,ECX
0057234D  8B F7                     MOV ESI,EDI
0057234F  8D BB 40 06 00 00         LEA EDI,[EBX + 0x640]
00572355  C1 E9 02                  SHR ECX,0x2
00572358  F3 A5                     MOVSD.REP ES:EDI,ESI
0057235A  8B C8                     MOV ECX,EAX
LAB_0057235c:
0057235C  8D 83 40 06 00 00         LEA EAX,[EBX + 0x640]
00572362  83 E1 03                  AND ECX,0x3
00572365  50                        PUSH EAX
00572366  50                        PUSH EAX
00572367  F3 A4                     MOVSB.REP ES:EDI,ESI
00572369  E8 52 55 14 00            CALL 0x006b78c0
LAB_0057236e:
0057236E  8B CB                     MOV ECX,EBX
00572370  E8 33 03 E9 FF            CALL 0x004026a8
LAB_00572375:
00572375  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00572378  51                        PUSH ECX
00572379  FF 15 68 B9 85 00         CALL dword ptr [0x0085b968]
0057237F  5F                        POP EDI
00572380  5E                        POP ESI
00572381  B8 01 00 00 00            MOV EAX,0x1
00572386  5B                        POP EBX
00572387  8B E5                     MOV ESP,EBP
00572389  5D                        POP EBP
0057238A  C2 04 00                  RET 0x4
LAB_0057238d:
0057238D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00572390  50                        PUSH EAX
00572391  FF 15 68 B9 85 00         CALL dword ptr [0x0085b968]
00572397  5F                        POP EDI
00572398  5E                        POP ESI
00572399  33 C0                     XOR EAX,EAX
0057239B  5B                        POP EBX
0057239C  8B E5                     MOV ESP,EBP
0057239E  5D                        POP EBP
0057239F  C2 04 00                  RET 0x4
