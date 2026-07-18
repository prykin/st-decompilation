FUN_00572d30:
00572D30  55                        PUSH EBP
00572D31  8B EC                     MOV EBP,ESP
00572D33  83 EC 18                  SUB ESP,0x18
00572D36  53                        PUSH EBX
00572D37  56                        PUSH ESI
00572D38  8D 45 FC                  LEA EAX,[EBP + -0x4]
00572D3B  57                        PUSH EDI
00572D3C  50                        PUSH EAX
00572D3D  68 6C A4 7C 00            PUSH 0x7ca46c
00572D42  8B D9                     MOV EBX,ECX
00572D44  68 02 00 00 80            PUSH 0x80000002
00572D49  FF 15 60 B9 85 00         CALL dword ptr [0x0085b960]
00572D4F  85 C0                     TEST EAX,EAX
00572D51  0F 85 A8 03 00 00         JNZ 0x005730ff
00572D57  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00572D5A  8B 35 5C B9 85 00         MOV ESI,dword ptr [0x0085b95c]
00572D60  8D 8B 79 07 00 00         LEA ECX,[EBX + 0x779]
00572D66  6A 04                     PUSH 0x4
00572D68  51                        PUSH ECX
00572D69  6A 04                     PUSH 0x4
00572D6B  50                        PUSH EAX
00572D6C  68 F8 A4 7C 00            PUSH 0x7ca4f8
00572D71  52                        PUSH EDX
00572D72  FF D6                     CALL ESI
00572D74  85 C0                     TEST EAX,EAX
00572D76  0F 85 79 03 00 00         JNZ 0x005730f5
00572D7C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00572D7F  8D 8B 7D 07 00 00         LEA ECX,[EBX + 0x77d]
00572D85  6A 04                     PUSH 0x4
00572D87  51                        PUSH ECX
00572D88  6A 04                     PUSH 0x4
00572D8A  50                        PUSH EAX
00572D8B  68 F0 A4 7C 00            PUSH 0x7ca4f0
00572D90  52                        PUSH EDX
00572D91  FF D6                     CALL ESI
00572D93  85 C0                     TEST EAX,EAX
00572D95  0F 85 5A 03 00 00         JNZ 0x005730f5
00572D9B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00572D9E  8D 8B 45 06 00 00         LEA ECX,[EBX + 0x645]
00572DA4  68 04 01 00 00            PUSH 0x104
00572DA9  51                        PUSH ECX
00572DAA  6A 01                     PUSH 0x1
00572DAC  50                        PUSH EAX
00572DAD  68 00 A5 7C 00            PUSH 0x7ca500
00572DB2  52                        PUSH EDX
00572DB3  FF D6                     CALL ESI
00572DB5  85 C0                     TEST EAX,EAX
00572DB7  0F 85 38 03 00 00         JNZ 0x005730f5
00572DBD  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00572DC0  8D 8B 49 07 00 00         LEA ECX,[EBX + 0x749]
00572DC6  6A 30                     PUSH 0x30
00572DC8  51                        PUSH ECX
00572DC9  6A 01                     PUSH 0x1
00572DCB  50                        PUSH EAX
00572DCC  68 08 A5 7C 00            PUSH 0x7ca508
00572DD1  52                        PUSH EDX
00572DD2  FF D6                     CALL ESI
00572DD4  85 C0                     TEST EAX,EAX
00572DD6  0F 85 19 03 00 00         JNZ 0x005730f5
00572DDC  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00572DDF  8D 8B 85 07 00 00         LEA ECX,[EBX + 0x785]
00572DE5  6A 40                     PUSH 0x40
00572DE7  51                        PUSH ECX
00572DE8  6A 01                     PUSH 0x1
00572DEA  50                        PUSH EAX
00572DEB  68 10 A5 7C 00            PUSH 0x7ca510
00572DF0  52                        PUSH EDX
00572DF1  FF D6                     CALL ESI
00572DF3  85 C0                     TEST EAX,EAX
00572DF5  0F 85 FA 02 00 00         JNZ 0x005730f5
00572DFB  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00572DFE  85 C0                     TEST EAX,EAX
00572E00  0F 84 89 00 00 00         JZ 0x00572e8f
00572E06  8B 0D 90 A6 7C 00         MOV ECX,dword ptr [0x007ca690]
00572E0C  33 D2                     XOR EDX,EDX
00572E0E  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
00572E11  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
00572E14  8B CB                     MOV ECX,EBX
00572E16  66 89 55 F0               MOV word ptr [EBP + -0x10],DX
00572E1A  E8 65 EF E8 FF            CALL 0x00401d84
00572E1F  88 45 E8                  MOV byte ptr [EBP + -0x18],AL
00572E22  8D 45 E8                  LEA EAX,[EBP + -0x18]
00572E25  50                        PUSH EAX
00572E26  FF 15 64 BC 85 00         CALL dword ptr [0x0085bc64]
00572E2C  83 F8 05                  CMP EAX,0x5
00572E2F  74 25                     JZ 0x00572e56
00572E31  BF 94 A6 7C 00            MOV EDI,0x7ca694
00572E36  83 C9 FF                  OR ECX,0xffffffff
00572E39  33 C0                     XOR EAX,EAX
00572E3B  8D 55 E8                  LEA EDX,[EBP + -0x18]
00572E3E  F2 AE                     SCASB.REPNE ES:EDI
00572E40  F7 D1                     NOT ECX
00572E42  2B F9                     SUB EDI,ECX
00572E44  8B C1                     MOV EAX,ECX
00572E46  8B F7                     MOV ESI,EDI
00572E48  8B FA                     MOV EDI,EDX
00572E4A  C1 E9 02                  SHR ECX,0x2
00572E4D  F3 A5                     MOVSD.REP ES:EDI,ESI
00572E4F  8B C8                     MOV ECX,EAX
00572E51  83 E1 03                  AND ECX,0x3
00572E54  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_00572e56:
00572E56  8D 4D E8                  LEA ECX,[EBP + -0x18]
00572E59  8D 55 E8                  LEA EDX,[EBP + -0x18]
00572E5C  51                        PUSH ECX
00572E5D  52                        PUSH EDX
00572E5E  E8 5D 4A 14 00            CALL 0x006b78c0
00572E63  8D 7D E8                  LEA EDI,[EBP + -0x18]
00572E66  83 C9 FF                  OR ECX,0xffffffff
00572E69  33 C0                     XOR EAX,EAX
00572E6B  8D 93 40 06 00 00         LEA EDX,[EBX + 0x640]
00572E71  F2 AE                     SCASB.REPNE ES:EDI
00572E73  F7 D1                     NOT ECX
00572E75  2B F9                     SUB EDI,ECX
00572E77  8B C1                     MOV EAX,ECX
00572E79  8B F7                     MOV ESI,EDI
00572E7B  8B FA                     MOV EDI,EDX
00572E7D  C1 E9 02                  SHR ECX,0x2
00572E80  F3 A5                     MOVSD.REP ES:EDI,ESI
00572E82  8B C8                     MOV ECX,EAX
00572E84  83 E1 03                  AND ECX,0x3
00572E87  F3 A4                     MOVSB.REP ES:EDI,ESI
00572E89  8B 35 5C B9 85 00         MOV ESI,dword ptr [0x0085b95c]
LAB_00572e8f:
00572E8F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00572E92  8D 8B 40 06 00 00         LEA ECX,[EBX + 0x640]
00572E98  6A 05                     PUSH 0x5
00572E9A  51                        PUSH ECX
00572E9B  6A 01                     PUSH 0x1
00572E9D  6A 00                     PUSH 0x0
00572E9F  68 24 A5 7C 00            PUSH 0x7ca524
00572EA4  52                        PUSH EDX
00572EA5  FF D6                     CALL ESI
00572EA7  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00572EAA  8D 83 81 07 00 00         LEA EAX,[EBX + 0x781]
00572EB0  6A 04                     PUSH 0x4
00572EB2  50                        PUSH EAX
00572EB3  6A 04                     PUSH 0x4
00572EB5  6A 00                     PUSH 0x0
00572EB7  68 34 A5 7C 00            PUSH 0x7ca534
00572EBC  51                        PUSH ECX
00572EBD  FF D6                     CALL ESI
00572EBF  85 C0                     TEST EAX,EAX
00572EC1  74 15                     JZ 0x00572ed8
00572EC3  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00572EC6  52                        PUSH EDX
00572EC7  FF 15 68 B9 85 00         CALL dword ptr [0x0085b968]
00572ECD  5F                        POP EDI
00572ECE  5E                        POP ESI
00572ECF  33 C0                     XOR EAX,EAX
00572ED1  5B                        POP EBX
00572ED2  8B E5                     MOV ESP,EBP
00572ED4  5D                        POP EBP
00572ED5  C2 08 00                  RET 0x8
LAB_00572ed8:
00572ED8  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00572EDB  8D 83 AE 0D 00 00         LEA EAX,[EBX + 0xdae]
00572EE1  6A 40                     PUSH 0x40
00572EE3  50                        PUSH EAX
00572EE4  6A 01                     PUSH 0x1
00572EE6  6A 00                     PUSH 0x0
00572EE8  68 3C A5 7C 00            PUSH 0x7ca53c
00572EED  51                        PUSH ECX
00572EEE  FF D6                     CALL ESI
00572EF0  85 C0                     TEST EAX,EAX
00572EF2  74 15                     JZ 0x00572f09
00572EF4  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00572EF7  52                        PUSH EDX
00572EF8  FF 15 68 B9 85 00         CALL dword ptr [0x0085b968]
00572EFE  5F                        POP EDI
00572EFF  5E                        POP ESI
00572F00  33 C0                     XOR EAX,EAX
00572F02  5B                        POP EBX
00572F03  8B E5                     MOV ESP,EBP
00572F05  5D                        POP EBP
00572F06  C2 08 00                  RET 0x8
LAB_00572f09:
00572F09  F6 45 0C 02               TEST byte ptr [EBP + 0xc],0x2
00572F0D  74 32                     JZ 0x00572f41
00572F0F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00572F12  68 00 01 00 00            PUSH 0x100
00572F17  68 F8 71 80 00            PUSH 0x8071f8
00572F1C  6A 03                     PUSH 0x3
00572F1E  6A 00                     PUSH 0x0
00572F20  68 1C A5 7C 00            PUSH 0x7ca51c
00572F25  50                        PUSH EAX
00572F26  FF D6                     CALL ESI
00572F28  85 C0                     TEST EAX,EAX
00572F2A  74 15                     JZ 0x00572f41
00572F2C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00572F2F  51                        PUSH ECX
00572F30  FF 15 68 B9 85 00         CALL dword ptr [0x0085b968]
00572F36  5F                        POP EDI
00572F37  5E                        POP ESI
00572F38  33 C0                     XOR EAX,EAX
00572F3A  5B                        POP EBX
00572F3B  8B E5                     MOV ESP,EBP
00572F3D  5D                        POP EBP
00572F3E  C2 08 00                  RET 0x8
LAB_00572f41:
00572F41  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00572F44  52                        PUSH EDX
00572F45  FF 15 68 B9 85 00         CALL dword ptr [0x0085b968]
00572F4B  8D 7B 28                  LEA EDI,[EBX + 0x28]
00572F4E  57                        PUSH EDI
00572F4F  57                        PUSH EDI
00572F50  E8 2B 53 14 00            CALL 0x006b8280
00572F55  8D 83 2C 01 00 00         LEA EAX,[EBX + 0x12c]
00572F5B  50                        PUSH EAX
00572F5C  50                        PUSH EAX
00572F5D  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00572F60  E8 1B 53 14 00            CALL 0x006b8280
00572F65  8D 83 38 04 00 00         LEA EAX,[EBX + 0x438]
00572F6B  50                        PUSH EAX
00572F6C  50                        PUSH EAX
00572F6D  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00572F70  E8 0B 53 14 00            CALL 0x006b8280
00572F75  8D 83 30 02 00 00         LEA EAX,[EBX + 0x230]
00572F7B  50                        PUSH EAX
00572F7C  50                        PUSH EAX
00572F7D  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
00572F80  E8 FB 52 14 00            CALL 0x006b8280
00572F85  8D 83 34 03 00 00         LEA EAX,[EBX + 0x334]
00572F8B  50                        PUSH EAX
00572F8C  50                        PUSH EAX
00572F8D  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00572F90  E8 EB 52 14 00            CALL 0x006b8280
00572F95  81 C3 3C 05 00 00         ADD EBX,0x53c
00572F9B  53                        PUSH EBX
00572F9C  53                        PUSH EBX
00572F9D  E8 DE 52 14 00            CALL 0x006b8280
00572FA2  8D 45 FC                  LEA EAX,[EBP + -0x4]
00572FA5  50                        PUSH EAX
00572FA6  68 34 A4 7C 00            PUSH 0x7ca434
00572FAB  68 02 00 00 80            PUSH 0x80000002
00572FB0  FF 15 60 B9 85 00         CALL dword ptr [0x0085b960]
00572FB6  85 C0                     TEST EAX,EAX
00572FB8  0F 85 41 01 00 00         JNZ 0x005730ff
00572FBE  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00572FC1  68 04 01 00 00            PUSH 0x104
00572FC6  57                        PUSH EDI
00572FC7  6A 01                     PUSH 0x1
00572FC9  50                        PUSH EAX
00572FCA  68 AC A4 7C 00            PUSH 0x7ca4ac
00572FCF  51                        PUSH ECX
00572FD0  FF D6                     CALL ESI
00572FD2  85 C0                     TEST EAX,EAX
00572FD4  74 15                     JZ 0x00572feb
00572FD6  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00572FD9  52                        PUSH EDX
00572FDA  FF 15 68 B9 85 00         CALL dword ptr [0x0085b968]
00572FE0  5F                        POP EDI
00572FE1  5E                        POP ESI
00572FE2  33 C0                     XOR EAX,EAX
00572FE4  5B                        POP EBX
00572FE5  8B E5                     MOV ESP,EBP
00572FE7  5D                        POP EBP
00572FE8  C2 08 00                  RET 0x8
LAB_00572feb:
00572FEB  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00572FEE  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00572FF1  68 04 01 00 00            PUSH 0x104
00572FF6  50                        PUSH EAX
00572FF7  6A 01                     PUSH 0x1
00572FF9  6A 00                     PUSH 0x0
00572FFB  68 C4 A4 7C 00            PUSH 0x7ca4c4
00573000  51                        PUSH ECX
00573001  FF D6                     CALL ESI
00573003  85 C0                     TEST EAX,EAX
00573005  74 15                     JZ 0x0057301c
00573007  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0057300A  52                        PUSH EDX
0057300B  FF 15 68 B9 85 00         CALL dword ptr [0x0085b968]
00573011  5F                        POP EDI
00573012  5E                        POP ESI
00573013  33 C0                     XOR EAX,EAX
00573015  5B                        POP EBX
00573016  8B E5                     MOV ESP,EBP
00573018  5D                        POP EBP
00573019  C2 08 00                  RET 0x8
LAB_0057301c:
0057301C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0057301F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00573022  68 04 01 00 00            PUSH 0x104
00573027  50                        PUSH EAX
00573028  6A 01                     PUSH 0x1
0057302A  6A 00                     PUSH 0x0
0057302C  68 D0 A4 7C 00            PUSH 0x7ca4d0
00573031  51                        PUSH ECX
00573032  FF D6                     CALL ESI
00573034  85 C0                     TEST EAX,EAX
00573036  74 15                     JZ 0x0057304d
00573038  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0057303B  52                        PUSH EDX
0057303C  FF 15 68 B9 85 00         CALL dword ptr [0x0085b968]
00573042  5F                        POP EDI
00573043  5E                        POP ESI
00573044  33 C0                     XOR EAX,EAX
00573046  5B                        POP EBX
00573047  8B E5                     MOV ESP,EBP
00573049  5D                        POP EBP
0057304A  C2 08 00                  RET 0x8
LAB_0057304d:
0057304D  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00573050  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00573053  68 04 01 00 00            PUSH 0x104
00573058  50                        PUSH EAX
00573059  6A 01                     PUSH 0x1
0057305B  6A 00                     PUSH 0x0
0057305D  68 A0 A4 7C 00            PUSH 0x7ca4a0
00573062  51                        PUSH ECX
00573063  FF D6                     CALL ESI
00573065  85 C0                     TEST EAX,EAX
00573067  74 15                     JZ 0x0057307e
00573069  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0057306C  52                        PUSH EDX
0057306D  FF 15 68 B9 85 00         CALL dword ptr [0x0085b968]
00573073  5F                        POP EDI
00573074  5E                        POP ESI
00573075  33 C0                     XOR EAX,EAX
00573077  5B                        POP EBX
00573078  8B E5                     MOV ESP,EBP
0057307A  5D                        POP EBP
0057307B  C2 08 00                  RET 0x8
LAB_0057307e:
0057307E  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00573081  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00573084  68 04 01 00 00            PUSH 0x104
00573089  50                        PUSH EAX
0057308A  6A 01                     PUSH 0x1
0057308C  6A 00                     PUSH 0x0
0057308E  68 B8 A4 7C 00            PUSH 0x7ca4b8
00573093  51                        PUSH ECX
00573094  FF D6                     CALL ESI
00573096  85 C0                     TEST EAX,EAX
00573098  74 15                     JZ 0x005730af
0057309A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0057309D  52                        PUSH EDX
0057309E  FF 15 68 B9 85 00         CALL dword ptr [0x0085b968]
005730A4  5F                        POP EDI
005730A5  5E                        POP ESI
005730A6  33 C0                     XOR EAX,EAX
005730A8  5B                        POP EBX
005730A9  8B E5                     MOV ESP,EBP
005730AB  5D                        POP EBP
005730AC  C2 08 00                  RET 0x8
LAB_005730af:
005730AF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005730B2  68 04 01 00 00            PUSH 0x104
005730B7  53                        PUSH EBX
005730B8  6A 01                     PUSH 0x1
005730BA  6A 00                     PUSH 0x0
005730BC  68 E4 A4 7C 00            PUSH 0x7ca4e4
005730C1  50                        PUSH EAX
005730C2  FF D6                     CALL ESI
005730C4  85 C0                     TEST EAX,EAX
005730C6  74 15                     JZ 0x005730dd
005730C8  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005730CB  51                        PUSH ECX
005730CC  FF 15 68 B9 85 00         CALL dword ptr [0x0085b968]
005730D2  5F                        POP EDI
005730D3  5E                        POP ESI
005730D4  33 C0                     XOR EAX,EAX
005730D6  5B                        POP EBX
005730D7  8B E5                     MOV ESP,EBP
005730D9  5D                        POP EBP
005730DA  C2 08 00                  RET 0x8
LAB_005730dd:
005730DD  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005730E0  52                        PUSH EDX
005730E1  FF 15 68 B9 85 00         CALL dword ptr [0x0085b968]
005730E7  5F                        POP EDI
005730E8  5E                        POP ESI
005730E9  B8 01 00 00 00            MOV EAX,0x1
005730EE  5B                        POP EBX
005730EF  8B E5                     MOV ESP,EBP
005730F1  5D                        POP EBP
005730F2  C2 08 00                  RET 0x8
LAB_005730f5:
005730F5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005730F8  50                        PUSH EAX
005730F9  FF 15 68 B9 85 00         CALL dword ptr [0x0085b968]
LAB_005730ff:
005730FF  5F                        POP EDI
00573100  5E                        POP ESI
00573101  33 C0                     XOR EAX,EAX
00573103  5B                        POP EBX
00573104  8B E5                     MOV ESP,EBP
00573106  5D                        POP EBP
00573107  C2 08 00                  RET 0x8
