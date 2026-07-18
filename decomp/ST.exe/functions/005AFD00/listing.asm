ChooseMapTy::PrepFiles:
005AFD00  55                        PUSH EBP
005AFD01  8B EC                     MOV EBP,ESP
005AFD03  81 EC 6C 03 00 00         SUB ESP,0x36c
005AFD09  33 C0                     XOR EAX,EAX
005AFD0B  53                        PUSH EBX
005AFD0C  8A 81 5F 1A 00 00         MOV AL,byte ptr [ECX + 0x1a5f]
005AFD12  56                        PUSH ESI
005AFD13  33 F6                     XOR ESI,ESI
005AFD15  48                        DEC EAX
005AFD16  83 F8 12                  CMP EAX,0x12
005AFD19  57                        PUSH EDI
005AFD1A  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
005AFD1D  89 75 D8                  MOV dword ptr [EBP + -0x28],ESI
005AFD20  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
005AFD23  89 75 D4                  MOV dword ptr [EBP + -0x2c],ESI
005AFD26  77 68                     JA 0x005afd90
005AFD28  33 C9                     XOR ECX,ECX
005AFD2A  8A 88 48 08 5B 00         MOV CL,byte ptr [EAX + 0x5b0848]
switchD_005afd30::switchD:
005AFD30  FF 24 8D 28 08 5B 00      JMP dword ptr [ECX*0x4 + 0x5b0828]
switchD_005afd30::caseD_9:
005AFD37  C7 45 F8 16 01 00 88      MOV dword ptr [EBP + -0x8],0x88000116
005AFD3E  EB 50                     JMP 0x005afd90
switchD_005afd30::caseD_a:
005AFD40  C7 45 F8 16 02 00 88      MOV dword ptr [EBP + -0x8],0x88000216
005AFD47  EB 47                     JMP 0x005afd90
switchD_005afd30::caseD_b:
005AFD49  C7 45 F8 16 04 00 88      MOV dword ptr [EBP + -0x8],0x88000416
005AFD50  EB 3E                     JMP 0x005afd90
switchD_005afd30::caseD_13:
005AFD52  33 C0                     XOR EAX,EAX
005AFD54  A0 00 34 80 00            MOV AL,[0x00803400]
005AFD59  83 C0 FC                  ADD EAX,-0x4
005AFD5C  83 F8 11                  CMP EAX,0x11
005AFD5F  77 2F                     JA 0x005afd90
005AFD61  33 D2                     XOR EDX,EDX
005AFD63  8A 90 70 08 5B 00         MOV DL,byte ptr [EAX + 0x5b0870]
switchD_005afd69::switchD:
005AFD69  FF 24 95 5C 08 5B 00      JMP dword ptr [EDX*0x4 + 0x5b085c]
switchD_005afd30::caseD_1:
005AFD70  C7 45 D4 05 04 00 8F      MOV dword ptr [EBP + -0x2c],0x8f000405
switchD_005afd30::caseD_2:
005AFD77  C7 45 F8 05 02 00 8F      MOV dword ptr [EBP + -0x8],0x8f000205
005AFD7E  EB 10                     JMP 0x005afd90
switchD_005afd69::caseD_14:
005AFD80  C7 45 F8 05 08 00 8F      MOV dword ptr [EBP + -0x8],0x8f000805
005AFD87  EB 07                     JMP 0x005afd90
switchD_005afd30::caseD_c:
005AFD89  C7 45 F8 16 05 00 88      MOV dword ptr [EBP + -0x8],0x88000516
switchD_005afd30::caseD_3:
005AFD90  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005AFD95  8D 95 64 FF FF FF         LEA EDX,[EBP + 0xffffff64]
005AFD9B  8D 8D 60 FF FF FF         LEA ECX,[EBP + 0xffffff60]
005AFDA1  56                        PUSH ESI
005AFDA2  52                        PUSH EDX
005AFDA3  89 85 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],EAX
005AFDA9  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005AFDAF  E8 3C DA 17 00            CALL 0x0072d7f0
005AFDB4  8B F8                     MOV EDI,EAX
005AFDB6  83 C4 08                  ADD ESP,0x8
005AFDB9  3B FE                     CMP EDI,ESI
005AFDBB  0F 85 1C 0A 00 00         JNZ 0x005b07dd
005AFDC1  8B 5D DC                  MOV EBX,dword ptr [EBP + -0x24]
005AFDC4  8B 83 97 1C 00 00         MOV EAX,dword ptr [EBX + 0x1c97]
005AFDCA  3B C6                     CMP EAX,ESI
005AFDCC  74 0C                     JZ 0x005afdda
005AFDCE  50                        PUSH EAX
005AFDCF  E8 9C 57 10 00            CALL 0x006b5570
005AFDD4  89 B3 97 1C 00 00         MOV dword ptr [EBX + 0x1c97],ESI
LAB_005afdda:
005AFDDA  8B 83 9B 1C 00 00         MOV EAX,dword ptr [EBX + 0x1c9b]
005AFDE0  3B C6                     CMP EAX,ESI
005AFDE2  74 0C                     JZ 0x005afdf0
005AFDE4  50                        PUSH EAX
005AFDE5  E8 26 E3 0F 00            CALL 0x006ae110
005AFDEA  89 B3 9B 1C 00 00         MOV dword ptr [EBX + 0x1c9b],ESI
LAB_005afdf0:
005AFDF0  8B 83 9F 1C 00 00         MOV EAX,dword ptr [EBX + 0x1c9f]
005AFDF6  3B C6                     CMP EAX,ESI
005AFDF8  74 0C                     JZ 0x005afe06
005AFDFA  50                        PUSH EAX
005AFDFB  E8 70 57 10 00            CALL 0x006b5570
005AFE00  89 B3 9F 1C 00 00         MOV dword ptr [EBX + 0x1c9f],ESI
LAB_005afe06:
005AFE06  6A 0A                     PUSH 0xa
005AFE08  6A 32                     PUSH 0x32
005AFE0A  56                        PUSH ESI
005AFE0B  E8 E0 56 10 00            CALL 0x006b54f0
005AFE10  6A 0A                     PUSH 0xa
005AFE12  6A 08                     PUSH 0x8
005AFE14  6A 32                     PUSH 0x32
005AFE16  56                        PUSH ESI
005AFE17  89 83 97 1C 00 00         MOV dword ptr [EBX + 0x1c97],EAX
005AFE1D  E8 6E E4 0F 00            CALL 0x006ae290
005AFE22  6A 0A                     PUSH 0xa
005AFE24  6A 0A                     PUSH 0xa
005AFE26  56                        PUSH ESI
005AFE27  89 83 9B 1C 00 00         MOV dword ptr [EBX + 0x1c9b],EAX
005AFE2D  E8 BE 56 10 00            CALL 0x006b54f0
005AFE32  8B 8B 6C 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a6c]
005AFE38  89 83 9F 1C 00 00         MOV dword ptr [EBX + 0x1c9f],EAX
005AFE3E  8D 43 1D                  LEA EAX,[EBX + 0x1d]
005AFE41  C7 43 2D 20 00 00 00      MOV dword ptr [EBX + 0x2d],0x20
005AFE48  50                        PUSH EAX
005AFE49  51                        PUSH ECX
005AFE4A  6A 02                     PUSH 0x2
005AFE4C  8B CB                     MOV ECX,EBX
005AFE4E  89 73 31                  MOV dword ptr [EBX + 0x31],ESI
005AFE51  E8 2A 62 13 00            CALL 0x006e6080
005AFE56  8B 93 5B 1A 00 00         MOV EDX,dword ptr [EBX + 0x1a5b]
005AFE5C  39 B2 E6 02 00 00         CMP dword ptr [EDX + 0x2e6],ESI
005AFE62  74 28                     JZ 0x005afe8c
005AFE64  B9 06 00 00 00            MOV ECX,0x6
005AFE69  33 C0                     XOR EAX,EAX
005AFE6B  8D 7D A4                  LEA EDI,[EBP + -0x5c]
005AFE6E  F3 AB                     STOSD.REP ES:EDI
005AFE70  66 AB                     STOSW ES:EDI
005AFE72  83 C8 FF                  OR EAX,0xffffffff
005AFE75  66 89 45 A6               MOV word ptr [EBP + -0x5a],AX
005AFE79  66 89 45 A4               MOV word ptr [EBP + -0x5c],AX
005AFE7D  8B 8A E6 02 00 00         MOV ECX,dword ptr [EDX + 0x2e6]
005AFE83  8D 45 A4                  LEA EAX,[EBP + -0x5c]
005AFE86  50                        PUSH EAX
005AFE87  E8 C5 4C E5 FF            CALL 0x00404b51
LAB_005afe8c:
005AFE8C  8B 83 7B 1C 00 00         MOV EAX,dword ptr [EBX + 0x1c7b]
005AFE92  56                        PUSH ESI
005AFE93  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005AFE96  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
005AFE99  51                        PUSH ECX
005AFE9A  52                        PUSH EDX
005AFE9B  56                        PUSH ESI
005AFE9C  56                        PUSH ESI
005AFE9D  56                        PUSH ESI
005AFE9E  50                        PUSH EAX
005AFE9F  E8 CC 42 10 00            CALL 0x006b4170
005AFEA4  BF 3F 00 00 00            MOV EDI,0x3f
005AFEA9  8D B3 23 1C 00 00         LEA ESI,[EBX + 0x1c23]
LAB_005afeaf:
005AFEAF  8B 06                     MOV EAX,dword ptr [ESI]
005AFEB1  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005AFEB7  57                        PUSH EDI
005AFEB8  68 14 01 00 00            PUSH 0x114
005AFEBD  6A FF                     PUSH -0x1
005AFEBF  50                        PUSH EAX
005AFEC0  51                        PUSH ECX
005AFEC1  E8 7A 37 10 00            CALL 0x006b3640
005AFEC6  83 C7 13                  ADD EDI,0x13
005AFEC9  83 C6 04                  ADD ESI,0x4
005AFECC  81 FF E1 01 00 00         CMP EDI,0x1e1
005AFED2  7C DB                     JL 0x005afeaf
005AFED4  8D BB A7 1D 00 00         LEA EDI,[EBX + 0x1da7]
005AFEDA  83 C9 FF                  OR ECX,0xffffffff
005AFEDD  33 C0                     XOR EAX,EAX
005AFEDF  8D 93 AF 1F 00 00         LEA EDX,[EBX + 0x1faf]
005AFEE5  F2 AE                     SCASB.REPNE ES:EDI
005AFEE7  F7 D1                     NOT ECX
005AFEE9  2B F9                     SUB EDI,ECX
005AFEEB  8B C1                     MOV EAX,ECX
005AFEED  8B F7                     MOV ESI,EDI
005AFEEF  8B FA                     MOV EDI,EDX
005AFEF1  C1 E9 02                  SHR ECX,0x2
005AFEF4  F3 A5                     MOVSD.REP ES:EDI,ESI
005AFEF6  8B C8                     MOV ECX,EAX
005AFEF8  33 C0                     XOR EAX,EAX
005AFEFA  83 E1 03                  AND ECX,0x3
005AFEFD  F3 A4                     MOVSB.REP ES:EDI,ESI
005AFEFF  BF BC C8 7C 00            MOV EDI,0x7cc8bc
005AFF04  83 C9 FF                  OR ECX,0xffffffff
005AFF07  F2 AE                     SCASB.REPNE ES:EDI
005AFF09  F7 D1                     NOT ECX
005AFF0B  2B F9                     SUB EDI,ECX
005AFF0D  8B C1                     MOV EAX,ECX
005AFF0F  8B F7                     MOV ESI,EDI
005AFF11  8B FA                     MOV EDI,EDX
005AFF13  8B D0                     MOV EDX,EAX
005AFF15  83 C9 FF                  OR ECX,0xffffffff
005AFF18  33 C0                     XOR EAX,EAX
005AFF1A  F2 AE                     SCASB.REPNE ES:EDI
005AFF1C  8B CA                     MOV ECX,EDX
005AFF1E  4F                        DEC EDI
005AFF1F  C1 E9 02                  SHR ECX,0x2
005AFF22  F3 A5                     MOVSD.REP ES:EDI,ESI
005AFF24  8B CA                     MOV ECX,EDX
005AFF26  83 E1 03                  AND ECX,0x3
005AFF29  F3 A4                     MOVSB.REP ES:EDI,ESI
005AFF2B  8A 83 5F 1A 00 00         MOV AL,byte ptr [EBX + 0x1a5f]
005AFF31  B9 01 00 00 00            MOV ECX,0x1
005AFF36  84 C0                     TEST AL,AL
005AFF38  76 14                     JBE 0x005aff4e
005AFF3A  3C 05                     CMP AL,0x5
005AFF3C  76 0D                     JBE 0x005aff4b
005AFF3E  3C 13                     CMP AL,0x13
005AFF40  75 0C                     JNZ 0x005aff4e
005AFF42  80 3D 00 34 80 00 0C      CMP byte ptr [0x00803400],0xc
005AFF49  74 03                     JZ 0x005aff4e
LAB_005aff4b:
005AFF4B  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
LAB_005aff4e:
005AFF4E  8D BB A3 1C 00 00         LEA EDI,[EBX + 0x1ca3]
005AFF54  8D B3 A7 1D 00 00         LEA ESI,[EBX + 0x1da7]
LAB_005aff5a:
005AFF5A  8A 0E                     MOV CL,byte ptr [ESI]
005AFF5C  8A 17                     MOV DL,byte ptr [EDI]
005AFF5E  8A C1                     MOV AL,CL
005AFF60  3A CA                     CMP CL,DL
005AFF62  75 1E                     JNZ 0x005aff82
005AFF64  84 C0                     TEST AL,AL
005AFF66  74 16                     JZ 0x005aff7e
005AFF68  8A 56 01                  MOV DL,byte ptr [ESI + 0x1]
005AFF6B  8A 4F 01                  MOV CL,byte ptr [EDI + 0x1]
005AFF6E  8A C2                     MOV AL,DL
005AFF70  3A D1                     CMP DL,CL
005AFF72  75 0E                     JNZ 0x005aff82
005AFF74  83 C6 02                  ADD ESI,0x2
005AFF77  83 C7 02                  ADD EDI,0x2
005AFF7A  84 C0                     TEST AL,AL
005AFF7C  75 DC                     JNZ 0x005aff5a
LAB_005aff7e:
005AFF7E  33 C0                     XOR EAX,EAX
005AFF80  EB 05                     JMP 0x005aff87
LAB_005aff82:
005AFF82  1B C0                     SBB EAX,EAX
005AFF84  83 D8 FF                  SBB EAX,-0x1
LAB_005aff87:
005AFF87  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
005AFF8A  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
005AFF8D  85 C0                     TEST EAX,EAX
005AFF8F  0F 84 89 02 00 00         JZ 0x005b021e
005AFF95  8D 85 98 FD FF FF         LEA EAX,[EBP + 0xfffffd98]
005AFF9B  50                        PUSH EAX
005AFF9C  8D 83 AF 1F 00 00         LEA EAX,[EBX + 0x1faf]
005AFFA2  50                        PUSH EAX
005AFFA3  FF 15 EC BC 85 00         CALL dword ptr [0x0085bcec]
005AFFA9  33 C9                     XOR ECX,ECX
005AFFAB  83 F8 FF                  CMP EAX,-0x1
005AFFAE  0F 95 C1                  SETNZ CL
005AFFB1  85 C9                     TEST ECX,ECX
005AFFB3  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
005AFFB6  0F 84 53 02 00 00         JZ 0x005b020f
LAB_005affbc:
005AFFBC  F6 85 98 FD FF FF 10      TEST byte ptr [EBP + 0xfffffd98],0x10
005AFFC3  0F 84 2A 02 00 00         JZ 0x005b01f3
005AFFC9  BF B8 C8 7C 00            MOV EDI,0x7cc8b8
005AFFCE  8D B5 C4 FD FF FF         LEA ESI,[EBP + 0xfffffdc4]
LAB_005affd4:
005AFFD4  8A 0E                     MOV CL,byte ptr [ESI]
005AFFD6  8A 17                     MOV DL,byte ptr [EDI]
005AFFD8  8A C1                     MOV AL,CL
005AFFDA  3A CA                     CMP CL,DL
005AFFDC  75 1E                     JNZ 0x005afffc
005AFFDE  84 C0                     TEST AL,AL
005AFFE0  74 16                     JZ 0x005afff8
005AFFE2  8A 56 01                  MOV DL,byte ptr [ESI + 0x1]
005AFFE5  8A 4F 01                  MOV CL,byte ptr [EDI + 0x1]
005AFFE8  8A C2                     MOV AL,DL
005AFFEA  3A D1                     CMP DL,CL
005AFFEC  75 0E                     JNZ 0x005afffc
005AFFEE  83 C6 02                  ADD ESI,0x2
005AFFF1  83 C7 02                  ADD EDI,0x2
005AFFF4  84 C0                     TEST AL,AL
005AFFF6  75 DC                     JNZ 0x005affd4
LAB_005afff8:
005AFFF8  33 C0                     XOR EAX,EAX
005AFFFA  EB 05                     JMP 0x005b0001
LAB_005afffc:
005AFFFC  1B C0                     SBB EAX,EAX
005AFFFE  83 D8 FF                  SBB EAX,-0x1
LAB_005b0001:
005B0001  85 C0                     TEST EAX,EAX
005B0003  0F 84 EA 01 00 00         JZ 0x005b01f3
005B0009  BF B4 C8 7C 00            MOV EDI,0x7cc8b4
005B000E  8D B5 C4 FD FF FF         LEA ESI,[EBP + 0xfffffdc4]
LAB_005b0014:
005B0014  8A 0E                     MOV CL,byte ptr [ESI]
005B0016  8A 17                     MOV DL,byte ptr [EDI]
005B0018  8A C1                     MOV AL,CL
005B001A  3A CA                     CMP CL,DL
005B001C  75 1E                     JNZ 0x005b003c
005B001E  84 C0                     TEST AL,AL
005B0020  74 16                     JZ 0x005b0038
005B0022  8A 56 01                  MOV DL,byte ptr [ESI + 0x1]
005B0025  8A 4F 01                  MOV CL,byte ptr [EDI + 0x1]
005B0028  8A C2                     MOV AL,DL
005B002A  3A D1                     CMP DL,CL
005B002C  75 0E                     JNZ 0x005b003c
005B002E  83 C6 02                  ADD ESI,0x2
005B0031  83 C7 02                  ADD EDI,0x2
005B0034  84 C0                     TEST AL,AL
005B0036  75 DC                     JNZ 0x005b0014
LAB_005b0038:
005B0038  33 C0                     XOR EAX,EAX
005B003A  EB 05                     JMP 0x005b0041
LAB_005b003c:
005B003C  1B C0                     SBB EAX,EAX
005B003E  83 D8 FF                  SBB EAX,-0x1
LAB_005b0041:
005B0041  85 C0                     TEST EAX,EAX
005B0043  75 0B                     JNZ 0x005b0050
005B0045  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
005B0048  85 C0                     TEST EAX,EAX
005B004A  0F 84 A3 01 00 00         JZ 0x005b01f3
LAB_005b0050:
005B0050  80 BB 5F 1A 00 00 03      CMP byte ptr [EBX + 0x1a5f],0x3
005B0057  0F 85 83 01 00 00         JNZ 0x005b01e0
005B005D  8D BB A7 1D 00 00         LEA EDI,[EBX + 0x1da7]
005B0063  83 C9 FF                  OR ECX,0xffffffff
005B0066  33 C0                     XOR EAX,EAX
005B0068  8D 93 AF 1F 00 00         LEA EDX,[EBX + 0x1faf]
005B006E  F2 AE                     SCASB.REPNE ES:EDI
005B0070  F7 D1                     NOT ECX
005B0072  2B F9                     SUB EDI,ECX
005B0074  52                        PUSH EDX
005B0075  8B C1                     MOV EAX,ECX
005B0077  8B F7                     MOV ESI,EDI
005B0079  8B FA                     MOV EDI,EDX
005B007B  52                        PUSH EDX
005B007C  C1 E9 02                  SHR ECX,0x2
005B007F  F3 A5                     MOVSD.REP ES:EDI,ESI
005B0081  8B C8                     MOV ECX,EAX
005B0083  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
005B0086  83 E1 03                  AND ECX,0x3
005B0089  F3 A4                     MOVSB.REP ES:EDI,ESI
005B008B  E8 F0 81 10 00            CALL 0x006b8280
005B0090  8D BD C4 FD FF FF         LEA EDI,[EBP + 0xfffffdc4]
005B0096  83 C9 FF                  OR ECX,0xffffffff
005B0099  33 C0                     XOR EAX,EAX
005B009B  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
005B009E  F2 AE                     SCASB.REPNE ES:EDI
005B00A0  F7 D1                     NOT ECX
005B00A2  2B F9                     SUB EDI,ECX
005B00A4  53                        PUSH EBX
005B00A5  8B F7                     MOV ESI,EDI
005B00A7  8B D1                     MOV EDX,ECX
005B00A9  8B FB                     MOV EDI,EBX
005B00AB  83 C9 FF                  OR ECX,0xffffffff
005B00AE  F2 AE                     SCASB.REPNE ES:EDI
005B00B0  8B CA                     MOV ECX,EDX
005B00B2  4F                        DEC EDI
005B00B3  C1 E9 02                  SHR ECX,0x2
005B00B6  F3 A5                     MOVSD.REP ES:EDI,ESI
005B00B8  8B CA                     MOV ECX,EDX
005B00BA  53                        PUSH EBX
005B00BB  83 E1 03                  AND ECX,0x3
005B00BE  F3 A4                     MOVSB.REP ES:EDI,ESI
005B00C0  E8 BB 81 10 00            CALL 0x006b8280
005B00C5  8B 3D 60 C0 79 00         MOV EDI,dword ptr [0x0079c060]
005B00CB  83 C9 FF                  OR ECX,0xffffffff
005B00CE  33 C0                     XOR EAX,EAX
005B00D0  6A 00                     PUSH 0x0
005B00D2  F2 AE                     SCASB.REPNE ES:EDI
005B00D4  F7 D1                     NOT ECX
005B00D6  2B F9                     SUB EDI,ECX
005B00D8  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
005B00DF  8B F7                     MOV ESI,EDI
005B00E1  8B D1                     MOV EDX,ECX
005B00E3  8B FB                     MOV EDI,EBX
005B00E5  83 C9 FF                  OR ECX,0xffffffff
005B00E8  F2 AE                     SCASB.REPNE ES:EDI
005B00EA  8B CA                     MOV ECX,EDX
005B00EC  4F                        DEC EDI
005B00ED  C1 E9 02                  SHR ECX,0x2
005B00F0  F3 A5                     MOVSD.REP ES:EDI,ESI
005B00F2  8B CA                     MOV ECX,EDX
005B00F4  8D 95 20 FF FF FF         LEA EDX,[EBP + 0xffffff20]
005B00FA  83 E1 03                  AND ECX,0x3
005B00FD  52                        PUSH EDX
005B00FE  F3 A4                     MOVSB.REP ES:EDI,ESI
005B0100  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005B0105  8D 8D 1C FF FF FF         LEA ECX,[EBP + 0xffffff1c]
005B010B  89 85 1C FF FF FF         MOV dword ptr [EBP + 0xffffff1c],EAX
005B0111  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B0117  E8 D4 D6 17 00            CALL 0x0072d7f0
005B011C  8B 5D DC                  MOV EBX,dword ptr [EBP + -0x24]
005B011F  83 C4 08                  ADD ESP,0x8
005B0122  85 C0                     TEST EAX,EAX
005B0124  0F 85 9C 00 00 00         JNZ 0x005b01c6
005B012A  6A 00                     PUSH 0x0
005B012C  6A 00                     PUSH 0x0
005B012E  8D 83 AF 1F 00 00         LEA EAX,[EBX + 0x1faf]
005B0134  6A 00                     PUSH 0x0
005B0136  50                        PUSH EAX
005B0137  68 45 03 00 00            PUSH 0x345
005B013C  E8 7F 0D 14 00            CALL 0x006f0ec0
005B0141  8B F0                     MOV ESI,EAX
005B0143  A1 CB C4 80 00            MOV EAX,[0x0080c4cb]
005B0148  83 C4 14                  ADD ESP,0x14
005B014B  85 C0                     TEST EAX,EAX
005B014D  74 06                     JZ 0x005b0155
005B014F  50                        PUSH EAX
005B0150  E8 1B 54 10 00            CALL 0x006b5570
LAB_005b0155:
005B0155  8B 0D 74 C0 79 00         MOV ECX,dword ptr [0x0079c074]
005B015B  6A 00                     PUSH 0x0
005B015D  51                        PUSH ECX
005B015E  56                        PUSH ESI
005B015F  E8 AC A8 16 00            CALL 0x0071aa10
005B0164  83 C4 0C                  ADD ESP,0xc
005B0167  A3 CB C4 80 00            MOV [0x0080c4cb],EAX
005B016C  85 C0                     TEST EAX,EAX
005B016E  75 0F                     JNZ 0x005b017f
005B0170  6A 0A                     PUSH 0xa
005B0172  6A 0A                     PUSH 0xa
005B0174  50                        PUSH EAX
005B0175  E8 76 53 10 00            CALL 0x006b54f0
005B017A  A3 CB C4 80 00            MOV [0x0080c4cb],EAX
LAB_005b017f:
005B017F  B9 41 00 00 00            MOV ECX,0x41
005B0184  33 C0                     XOR EAX,EAX
005B0186  BF 16 ED 80 00            MOV EDI,0x80ed16
005B018B  50                        PUSH EAX
005B018C  F3 AB                     STOSD.REP ES:EDI
005B018E  A1 64 C0 79 00            MOV EAX,[0x0079c064]
005B0193  8D 55 F0                  LEA EDX,[EBP + -0x10]
005B0196  52                        PUSH EDX
005B0197  50                        PUSH EAX
005B0198  6A 0C                     PUSH 0xc
005B019A  8B CE                     MOV ECX,ESI
005B019C  C7 45 F0 16 ED 80 00      MOV dword ptr [EBP + -0x10],0x80ed16
005B01A3  E8 38 1B 14 00            CALL 0x006f1ce0
005B01A8  85 C0                     TEST EAX,EAX
005B01AA  75 03                     JNZ 0x005b01af
005B01AC  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_005b01af:
005B01AF  56                        PUSH ESI
005B01B0  E8 BB 0F 14 00            CALL 0x006f1170
005B01B5  8B 8D 1C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff1c]
005B01BB  83 C4 04                  ADD ESP,0x4
005B01BE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B01C4  EB 13                     JMP 0x005b01d9
LAB_005b01c6:
005B01C6  8B 95 1C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff1c]
005B01CC  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
005B01D3  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
LAB_005b01d9:
005B01D9  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005B01DC  85 C0                     TEST EAX,EAX
005B01DE  74 13                     JZ 0x005b01f3
LAB_005b01e0:
005B01E0  8B 8B 9F 1C 00 00         MOV ECX,dword ptr [EBX + 0x1c9f]
005B01E6  8D 85 C4 FD FF FF         LEA EAX,[EBP + 0xfffffdc4]
005B01EC  50                        PUSH EAX
005B01ED  51                        PUSH ECX
005B01EE  E8 AD 58 10 00            CALL 0x006b5aa0
LAB_005b01f3:
005B01F3  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
005B01F6  8D 95 98 FD FF FF         LEA EDX,[EBP + 0xfffffd98]
005B01FC  52                        PUSH EDX
005B01FD  50                        PUSH EAX
005B01FE  FF 15 F0 BC 85 00         CALL dword ptr [0x0085bcf0]
005B0204  85 C0                     TEST EAX,EAX
005B0206  0F 85 B0 FD FF FF         JNZ 0x005affbc
005B020C  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
LAB_005b020f:
005B020F  83 F8 FF                  CMP EAX,-0x1
005B0212  74 0A                     JZ 0x005b021e
005B0214  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
005B0217  51                        PUSH ECX
005B0218  FF 15 F4 BC 85 00         CALL dword ptr [0x0085bcf4]
LAB_005b021e:
005B021E  8D BB A7 1D 00 00         LEA EDI,[EBX + 0x1da7]
005B0224  83 C9 FF                  OR ECX,0xffffffff
005B0227  33 C0                     XOR EAX,EAX
005B0229  8D 93 AF 1F 00 00         LEA EDX,[EBX + 0x1faf]
005B022F  F2 AE                     SCASB.REPNE ES:EDI
005B0231  F7 D1                     NOT ECX
005B0233  2B F9                     SUB EDI,ECX
005B0235  8B C1                     MOV EAX,ECX
005B0237  8B F7                     MOV ESI,EDI
005B0239  8B FA                     MOV EDI,EDX
005B023B  C1 E9 02                  SHR ECX,0x2
005B023E  F3 A5                     MOVSD.REP ES:EDI,ESI
005B0240  8B C8                     MOV ECX,EAX
005B0242  83 E1 03                  AND ECX,0x3
005B0245  F3 A4                     MOVSB.REP ES:EDI,ESI
005B0247  8A 83 5F 1A 00 00         MOV AL,byte ptr [EBX + 0x1a5f]
005B024D  3C 09                     CMP AL,0x9
005B024F  72 33                     JC 0x005b0284
005B0251  3C 0C                     CMP AL,0xc
005B0253  77 2F                     JA 0x005b0284
005B0255  8B 3D 6C C0 79 00         MOV EDI,dword ptr [0x0079c06c]
005B025B  83 C9 FF                  OR ECX,0xffffffff
005B025E  33 C0                     XOR EAX,EAX
005B0260  F2 AE                     SCASB.REPNE ES:EDI
005B0262  F7 D1                     NOT ECX
005B0264  2B F9                     SUB EDI,ECX
005B0266  8B C1                     MOV EAX,ECX
005B0268  8B F7                     MOV ESI,EDI
005B026A  8B FA                     MOV EDI,EDX
005B026C  8B D0                     MOV EDX,EAX
005B026E  83 C9 FF                  OR ECX,0xffffffff
005B0271  33 C0                     XOR EAX,EAX
005B0273  F2 AE                     SCASB.REPNE ES:EDI
005B0275  8B CA                     MOV ECX,EDX
005B0277  4F                        DEC EDI
005B0278  C1 E9 02                  SHR ECX,0x2
005B027B  F3 A5                     MOVSD.REP ES:EDI,ESI
005B027D  8B CA                     MOV ECX,EDX
005B027F  83 E1 03                  AND ECX,0x3
005B0282  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_005b0284:
005B0284  BF D8 72 7C 00            MOV EDI,0x7c72d8
005B0289  83 C9 FF                  OR ECX,0xffffffff
005B028C  33 C0                     XOR EAX,EAX
005B028E  F2 AE                     SCASB.REPNE ES:EDI
005B0290  F7 D1                     NOT ECX
005B0292  2B F9                     SUB EDI,ECX
005B0294  8B F7                     MOV ESI,EDI
005B0296  8B D1                     MOV EDX,ECX
005B0298  8D BB AF 1F 00 00         LEA EDI,[EBX + 0x1faf]
005B029E  83 C9 FF                  OR ECX,0xffffffff
005B02A1  F2 AE                     SCASB.REPNE ES:EDI
005B02A3  8B CA                     MOV ECX,EDX
005B02A5  4F                        DEC EDI
005B02A6  C1 E9 02                  SHR ECX,0x2
005B02A9  F3 A5                     MOVSD.REP ES:EDI,ESI
005B02AB  8B CA                     MOV ECX,EDX
005B02AD  83 E1 03                  AND ECX,0x3
005B02B0  F3 A4                     MOVSB.REP ES:EDI,ESI
005B02B2  8B 3D 58 C0 79 00         MOV EDI,dword ptr [0x0079c058]
005B02B8  83 C9 FF                  OR ECX,0xffffffff
005B02BB  F2 AE                     SCASB.REPNE ES:EDI
005B02BD  F7 D1                     NOT ECX
005B02BF  2B F9                     SUB EDI,ECX
005B02C1  8B F7                     MOV ESI,EDI
005B02C3  8B D1                     MOV EDX,ECX
005B02C5  8D BB AF 1F 00 00         LEA EDI,[EBX + 0x1faf]
005B02CB  83 C9 FF                  OR ECX,0xffffffff
005B02CE  F2 AE                     SCASB.REPNE ES:EDI
005B02D0  8B CA                     MOV ECX,EDX
005B02D2  4F                        DEC EDI
005B02D3  C1 E9 02                  SHR ECX,0x2
005B02D6  F3 A5                     MOVSD.REP ES:EDI,ESI
005B02D8  8B CA                     MOV ECX,EDX
005B02DA  83 E1 03                  AND ECX,0x3
005B02DD  F3 A4                     MOVSB.REP ES:EDI,ESI
005B02DF  80 BB 5F 1A 00 00 03      CMP byte ptr [EBX + 0x1a5f],0x3
005B02E6  74 21                     JZ 0x005b0309
005B02E8  8D 85 98 FD FF FF         LEA EAX,[EBP + 0xfffffd98]
005B02EE  50                        PUSH EAX
005B02EF  8D 83 AF 1F 00 00         LEA EAX,[EBX + 0x1faf]
005B02F5  50                        PUSH EAX
005B02F6  FF 15 EC BC 85 00         CALL dword ptr [0x0085bcec]
005B02FC  33 C9                     XOR ECX,ECX
005B02FE  83 F8 FF                  CMP EAX,-0x1
005B0301  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
005B0304  0F 95 C1                  SETNZ CL
005B0307  EB 05                     JMP 0x005b030e
LAB_005b0309:
005B0309  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
005B030C  33 C9                     XOR ECX,ECX
LAB_005b030e:
005B030E  85 C9                     TEST ECX,ECX
005B0310  0F 84 53 02 00 00         JZ 0x005b0569
LAB_005b0316:
005B0316  F6 85 98 FD FF FF 10      TEST byte ptr [EBP + 0xfffffd98],0x10
005B031D  0F 85 2A 02 00 00         JNZ 0x005b054d
005B0323  8D 8D 94 FC FF FF         LEA ECX,[EBP + 0xfffffc94]
005B0329  6A 00                     PUSH 0x0
005B032B  51                        PUSH ECX
005B032C  6A 00                     PUSH 0x0
005B032E  8D 95 C4 FD FF FF         LEA EDX,[EBP + 0xfffffdc4]
005B0334  6A 00                     PUSH 0x0
005B0336  52                        PUSH EDX
005B0337  C7 45 E0 00 00 00 00      MOV dword ptr [EBP + -0x20],0x0
005B033E  E8 ED E3 17 00            CALL 0x0072e730
005B0343  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005B0348  8D 95 DC FE FF FF         LEA EDX,[EBP + 0xfffffedc]
005B034E  8D 8D D8 FE FF FF         LEA ECX,[EBP + 0xfffffed8]
005B0354  6A 00                     PUSH 0x0
005B0356  52                        PUSH EDX
005B0357  89 85 D8 FE FF FF         MOV dword ptr [EBP + 0xfffffed8],EAX
005B035D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B0363  E8 88 D4 17 00            CALL 0x0072d7f0
005B0368  83 C4 1C                  ADD ESP,0x1c
005B036B  85 C0                     TEST EAX,EAX
005B036D  0F 85 CC 01 00 00         JNZ 0x005b053f
005B0373  8B 5D DC                  MOV EBX,dword ptr [EBP + -0x24]
005B0376  83 C9 FF                  OR ECX,0xffffffff
005B0379  8D BB A7 1D 00 00         LEA EDI,[EBX + 0x1da7]
005B037F  8D 93 AF 1F 00 00         LEA EDX,[EBX + 0x1faf]
005B0385  F2 AE                     SCASB.REPNE ES:EDI
005B0387  F7 D1                     NOT ECX
005B0389  2B F9                     SUB EDI,ECX
005B038B  8B C1                     MOV EAX,ECX
005B038D  8B F7                     MOV ESI,EDI
005B038F  8B FA                     MOV EDI,EDX
005B0391  C1 E9 02                  SHR ECX,0x2
005B0394  F3 A5                     MOVSD.REP ES:EDI,ESI
005B0396  8B C8                     MOV ECX,EAX
005B0398  33 C0                     XOR EAX,EAX
005B039A  83 E1 03                  AND ECX,0x3
005B039D  F3 A4                     MOVSB.REP ES:EDI,ESI
005B039F  8D BD 94 FC FF FF         LEA EDI,[EBP + 0xfffffc94]
005B03A5  83 C9 FF                  OR ECX,0xffffffff
005B03A8  F2 AE                     SCASB.REPNE ES:EDI
005B03AA  F7 D1                     NOT ECX
005B03AC  2B F9                     SUB EDI,ECX
005B03AE  8B C1                     MOV EAX,ECX
005B03B0  8B F7                     MOV ESI,EDI
005B03B2  8B FA                     MOV EDI,EDX
005B03B4  8B D0                     MOV EDX,EAX
005B03B6  83 C9 FF                  OR ECX,0xffffffff
005B03B9  33 C0                     XOR EAX,EAX
005B03BB  F2 AE                     SCASB.REPNE ES:EDI
005B03BD  8B CA                     MOV ECX,EDX
005B03BF  4F                        DEC EDI
005B03C0  C1 E9 02                  SHR ECX,0x2
005B03C3  F3 A5                     MOVSD.REP ES:EDI,ESI
005B03C5  50                        PUSH EAX
005B03C6  50                        PUSH EAX
005B03C7  8B CA                     MOV ECX,EDX
005B03C9  50                        PUSH EAX
005B03CA  8D 83 AF 1F 00 00         LEA EAX,[EBX + 0x1faf]
005B03D0  83 E1 03                  AND ECX,0x3
005B03D3  50                        PUSH EAX
005B03D4  68 45 03 00 00            PUSH 0x345
005B03D9  F3 A4                     MOVSB.REP ES:EDI,ESI
005B03DB  E8 E0 0A 14 00            CALL 0x006f0ec0
005B03E0  8B F0                     MOV ESI,EAX
005B03E2  33 C0                     XOR EAX,EAX
005B03E4  8A 83 5F 1A 00 00         MOV AL,byte ptr [EBX + 0x1a5f]
005B03EA  83 C4 14                  ADD ESP,0x14
005B03ED  33 FF                     XOR EDI,EDI
005B03EF  48                        DEC EAX
005B03F0  83 F8 12                  CMP EAX,0x12
005B03F3  77 28                     JA 0x005b041d
005B03F5  33 C9                     XOR ECX,ECX
005B03F7  8A 88 94 08 5B 00         MOV CL,byte ptr [EAX + 0x5b0894]
switchD_005b03fd::switchD:
005B03FD  FF 24 8D 84 08 5B 00      JMP dword ptr [ECX*0x4 + 0x5b0884]
switchD_005b03fd::caseD_9:
005B0404  BF 01 00 00 00            MOV EDI,0x1
005B0409  EB 12                     JMP 0x005b041d
switchD_005b03fd::caseD_1:
005B040B  33 FF                     XOR EDI,EDI
005B040D  EB 0E                     JMP 0x005b041d
switchD_005b03fd::caseD_13:
005B040F  A0 00 34 80 00            MOV AL,[0x00803400]
005B0414  33 D2                     XOR EDX,EDX
005B0416  3C 0C                     CMP AL,0xc
005B0418  0F 94 C2                  SETZ DL
005B041B  8B FA                     MOV EDI,EDX
switchD_005b03fd::caseD_3:
005B041D  85 FF                     TEST EDI,EDI
005B041F  74 6A                     JZ 0x005b048b
005B0421  8B 15 70 C0 79 00         MOV EDX,dword ptr [0x0079c070]
005B0427  8D 4D F0                  LEA ECX,[EBP + -0x10]
005B042A  6A 00                     PUSH 0x0
005B042C  51                        PUSH ECX
005B042D  8D 45 E0                  LEA EAX,[EBP + -0x20]
005B0430  52                        PUSH EDX
005B0431  68 80 00 00 00            PUSH 0x80
005B0436  8B CE                     MOV ECX,ESI
005B0438  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
005B043B  E8 A0 18 14 00            CALL 0x006f1ce0
005B0440  85 C0                     TEST EAX,EAX
005B0442  0F 84 E0 00 00 00         JZ 0x005b0528
005B0448  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005B044B  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
005B044E  3B C1                     CMP EAX,ECX
005B0450  0F 85 D2 00 00 00         JNZ 0x005b0528
005B0456  8B 93 9B 1C 00 00         MOV EDX,dword ptr [EBX + 0x1c9b]
005B045C  8D 8D AC FD FF FF         LEA ECX,[EBP + 0xfffffdac]
005B0462  51                        PUSH ECX
005B0463  52                        PUSH EDX
005B0464  E8 57 DD 0F 00            CALL 0x006ae1c0
005B0469  8B 3D 6C C0 79 00         MOV EDI,dword ptr [0x0079c06c]
005B046F  83 C9 FF                  OR ECX,0xffffffff
005B0472  33 C0                     XOR EAX,EAX
005B0474  F2 AE                     SCASB.REPNE ES:EDI
005B0476  F7 D1                     NOT ECX
005B0478  49                        DEC ECX
005B0479  8D 85 94 FC FF FF         LEA EAX,[EBP + 0xfffffc94]
005B047F  51                        PUSH ECX
005B0480  50                        PUSH EAX
005B0481  E8 BA 7D 10 00            CALL 0x006b8240
005B0486  E9 90 00 00 00            JMP 0x005b051b
LAB_005b048b:
005B048B  A1 78 C0 79 00            MOV EAX,[0x0079c078]
005B0490  8D 55 F0                  LEA EDX,[EBP + -0x10]
005B0493  6A 00                     PUSH 0x0
005B0495  52                        PUSH EDX
005B0496  50                        PUSH EAX
005B0497  6A 00                     PUSH 0x0
005B0499  8B CE                     MOV ECX,ESI
005B049B  C7 45 F0 B6 87 80 00      MOV dword ptr [EBP + -0x10],0x8087b6
005B04A2  E8 39 18 14 00            CALL 0x006f1ce0
005B04A7  85 C0                     TEST EAX,EAX
005B04A9  74 7D                     JZ 0x005b0528
005B04AB  A1 B6 87 80 00            MOV EAX,[0x008087b6]
005B04B0  85 C0                     TEST EAX,EAX
005B04B2  74 74                     JZ 0x005b0528
005B04B4  8B 0D BA 87 80 00         MOV ECX,dword ptr [0x008087ba]
005B04BA  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005B04BD  3B C8                     CMP ECX,EAX
005B04BF  74 17                     JZ 0x005b04d8
005B04C1  8A 83 5F 1A 00 00         MOV AL,byte ptr [EBX + 0x1a5f]
005B04C7  3C 01                     CMP AL,0x1
005B04C9  74 08                     JZ 0x005b04d3
005B04CB  3C 13                     CMP AL,0x13
005B04CD  74 04                     JZ 0x005b04d3
005B04CF  3C 04                     CMP AL,0x4
005B04D1  75 55                     JNZ 0x005b0528
LAB_005b04d3:
005B04D3  3B 4D D4                  CMP ECX,dword ptr [EBP + -0x2c]
005B04D6  75 50                     JNZ 0x005b0528
LAB_005b04d8:
005B04D8  80 BB 5F 1A 00 00 02      CMP byte ptr [EBX + 0x1a5f],0x2
005B04DF  75 34                     JNZ 0x005b0515
005B04E1  32 C9                     XOR CL,CL
005B04E3  B8 C7 87 80 00            MOV EAX,0x8087c7
005B04E8  BF 08 00 00 00            MOV EDI,0x8
LAB_005b04ed:
005B04ED  80 78 22 08               CMP byte ptr [EAX + 0x22],0x8
005B04F1  73 07                     JNC 0x005b04fa
005B04F3  80 38 00                  CMP byte ptr [EAX],0x0
005B04F6  75 02                     JNZ 0x005b04fa
005B04F8  FE C1                     INC CL
LAB_005b04fa:
005B04FA  83 C0 51                  ADD EAX,0x51
005B04FD  4F                        DEC EDI
005B04FE  75 ED                     JNZ 0x005b04ed
005B0500  80 F9 02                  CMP CL,0x2
005B0503  73 23                     JNC 0x005b0528
005B0505  8B 93 97 1C 00 00         MOV EDX,dword ptr [EBX + 0x1c97]
005B050B  8D 8D 94 FC FF FF         LEA ECX,[EBP + 0xfffffc94]
005B0511  51                        PUSH ECX
005B0512  52                        PUSH EDX
005B0513  EB 0E                     JMP 0x005b0523
LAB_005b0515:
005B0515  8D 85 94 FC FF FF         LEA EAX,[EBP + 0xfffffc94]
LAB_005b051b:
005B051B  8B 8B 97 1C 00 00         MOV ECX,dword ptr [EBX + 0x1c97]
005B0521  50                        PUSH EAX
005B0522  51                        PUSH ECX
LAB_005b0523:
005B0523  E8 78 55 10 00            CALL 0x006b5aa0
LAB_005b0528:
005B0528  56                        PUSH ESI
005B0529  E8 42 0C 14 00            CALL 0x006f1170
005B052E  8B 95 D8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffed8]
005B0534  83 C4 04                  ADD ESP,0x4
005B0537  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005B053D  EB 0E                     JMP 0x005b054d
LAB_005b053f:
005B053F  8B 85 D8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffed8]
005B0545  8B 5D DC                  MOV EBX,dword ptr [EBP + -0x24]
005B0548  A3 F8 8D 85 00            MOV [0x00858df8],EAX
LAB_005b054d:
005B054D  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
005B0550  8D 8D 98 FD FF FF         LEA ECX,[EBP + 0xfffffd98]
005B0556  51                        PUSH ECX
005B0557  52                        PUSH EDX
005B0558  FF 15 F0 BC 85 00         CALL dword ptr [0x0085bcf0]
005B055E  85 C0                     TEST EAX,EAX
005B0560  0F 85 B0 FD FF FF         JNZ 0x005b0316
005B0566  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
LAB_005b0569:
005B0569  83 F8 FF                  CMP EAX,-0x1
005B056C  74 07                     JZ 0x005b0575
005B056E  50                        PUSH EAX
005B056F  FF 15 F4 BC 85 00         CALL dword ptr [0x0085bcf4]
LAB_005b0575:
005B0575  8B 83 9F 1C 00 00         MOV EAX,dword ptr [EBX + 0x1c9f]
005B057B  8B 8B 97 1C 00 00         MOV ECX,dword ptr [EBX + 0x1c97]
005B0581  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
005B0584  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
005B0587  03 D0                     ADD EDX,EAX
005B0589  85 D2                     TEST EDX,EDX
005B058B  0F 8E EA 01 00 00         JLE 0x005b077b
005B0591  83 F8 01                  CMP EAX,0x1
005B0594  76 6C                     JBE 0x005b0602
005B0596  48                        DEC EAX
005B0597  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_005b059a:
005B059A  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005B059D  33 F6                     XOR ESI,ESI
005B059F  3B C6                     CMP EAX,ESI
005B05A1  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
005B05A4  76 55                     JBE 0x005b05fb
LAB_005b05a6:
005B05A6  8B 83 9F 1C 00 00         MOV EAX,dword ptr [EBX + 0x1c9f]
005B05AC  8D 7E 01                  LEA EDI,[ESI + 0x1]
005B05AF  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005B05B2  3B F9                     CMP EDI,ECX
005B05B4  7D 09                     JGE 0x005b05bf
005B05B6  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
005B05B9  8B 54 B2 04               MOV EDX,dword ptr [EDX + ESI*0x4 + 0x4]
005B05BD  EB 02                     JMP 0x005b05c1
LAB_005b05bf:
005B05BF  33 D2                     XOR EDX,EDX
LAB_005b05c1:
005B05C1  3B F1                     CMP ESI,ECX
005B05C3  7D 08                     JGE 0x005b05cd
005B05C5  8B 40 14                  MOV EAX,dword ptr [EAX + 0x14]
005B05C8  8B 04 B0                  MOV EAX,dword ptr [EAX + ESI*0x4]
005B05CB  EB 02                     JMP 0x005b05cf
LAB_005b05cd:
005B05CD  33 C0                     XOR EAX,EAX
LAB_005b05cf:
005B05CF  52                        PUSH EDX
005B05D0  50                        PUSH EAX
005B05D1  E8 4A E0 17 00            CALL 0x0072e620
005B05D6  83 C4 08                  ADD ESP,0x8
005B05D9  85 C0                     TEST EAX,EAX
005B05DB  7E 15                     JLE 0x005b05f2
005B05DD  8B 8B 9F 1C 00 00         MOV ECX,dword ptr [EBX + 0x1c9f]
005B05E3  57                        PUSH EDI
005B05E4  56                        PUSH ESI
005B05E5  51                        PUSH ECX
005B05E6  E8 15 7C 10 00            CALL 0x006b8200
005B05EB  C7 45 E8 01 00 00 00      MOV dword ptr [EBP + -0x18],0x1
LAB_005b05f2:
005B05F2  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005B05F5  8B F7                     MOV ESI,EDI
005B05F7  3B F0                     CMP ESI,EAX
005B05F9  72 AB                     JC 0x005b05a6
LAB_005b05fb:
005B05FB  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
005B05FE  85 C0                     TEST EAX,EAX
005B0600  75 98                     JNZ 0x005b059a
LAB_005b0602:
005B0602  8B 93 97 1C 00 00         MOV EDX,dword ptr [EBX + 0x1c97]
005B0608  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
005B060B  83 F9 01                  CMP ECX,0x1
005B060E  0F 86 F8 00 00 00         JBE 0x005b070c
005B0614  8A 83 5F 1A 00 00         MOV AL,byte ptr [EBX + 0x1a5f]
005B061A  3C 09                     CMP AL,0x9
005B061C  72 1B                     JC 0x005b0639
005B061E  3C 0C                     CMP AL,0xc
005B0620  76 11                     JBE 0x005b0633
005B0622  3C 13                     CMP AL,0x13
005B0624  75 13                     JNZ 0x005b0639
005B0626  80 3D 00 34 80 00 0C      CMP byte ptr [0x00803400],0xc
005B062D  0F 94 45 FF               SETZ byte ptr [EBP + -0x1]
005B0631  EB 0A                     JMP 0x005b063d
LAB_005b0633:
005B0633  C6 45 FF 01               MOV byte ptr [EBP + -0x1],0x1
005B0637  EB 04                     JMP 0x005b063d
LAB_005b0639:
005B0639  C6 45 FF 00               MOV byte ptr [EBP + -0x1],0x0
LAB_005b063d:
005B063D  49                        DEC ECX
005B063E  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_005b0641:
005B0641  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005B0644  33 F6                     XOR ESI,ESI
005B0646  3B C6                     CMP EAX,ESI
005B0648  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
005B064B  0F 86 B0 00 00 00         JBE 0x005b0701
LAB_005b0651:
005B0651  8A 45 FF                  MOV AL,byte ptr [EBP + -0x1]
005B0654  84 C0                     TEST AL,AL
005B0656  74 50                     JZ 0x005b06a8
005B0658  8B 8B 9B 1C 00 00         MOV ECX,dword ptr [EBX + 0x1c9b]
005B065E  8D 45 C8                  LEA EAX,[EBP + -0x38]
005B0661  50                        PUSH EAX
005B0662  8B D6                     MOV EDX,ESI
005B0664  E8 07 C6 0F 00            CALL 0x006acc70
005B0669  8D 4D C0                  LEA ECX,[EBP + -0x40]
005B066C  8D 7E 01                  LEA EDI,[ESI + 0x1]
005B066F  51                        PUSH ECX
005B0670  8B 8B 9B 1C 00 00         MOV ECX,dword ptr [EBX + 0x1c9b]
005B0676  8B D7                     MOV EDX,EDI
005B0678  E8 F3 C5 0F 00            CALL 0x006acc70
005B067D  8D 55 C0                  LEA EDX,[EBP + -0x40]
005B0680  8D 45 C8                  LEA EAX,[EBP + -0x38]
005B0683  52                        PUSH EDX
005B0684  50                        PUSH EAX
005B0685  FF 15 D8 BC 85 00         CALL dword ptr [0x0085bcd8]
005B068B  85 C0                     TEST EAX,EAX
005B068D  7D 65                     JGE 0x005b06f4
005B068F  8B 8B 9B 1C 00 00         MOV ECX,dword ptr [EBX + 0x1c9b]
005B0695  57                        PUSH EDI
005B0696  56                        PUSH ESI
005B0697  51                        PUSH ECX
005B0698  E8 33 06 10 00            CALL 0x006b0cd0
005B069D  8B 93 97 1C 00 00         MOV EDX,dword ptr [EBX + 0x1c97]
005B06A3  57                        PUSH EDI
005B06A4  56                        PUSH ESI
005B06A5  52                        PUSH EDX
005B06A6  EB 40                     JMP 0x005b06e8
LAB_005b06a8:
005B06A8  8B 83 97 1C 00 00         MOV EAX,dword ptr [EBX + 0x1c97]
005B06AE  8D 7E 01                  LEA EDI,[ESI + 0x1]
005B06B1  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005B06B4  3B F9                     CMP EDI,ECX
005B06B6  7D 09                     JGE 0x005b06c1
005B06B8  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
005B06BB  8B 54 B2 04               MOV EDX,dword ptr [EDX + ESI*0x4 + 0x4]
005B06BF  EB 02                     JMP 0x005b06c3
LAB_005b06c1:
005B06C1  33 D2                     XOR EDX,EDX
LAB_005b06c3:
005B06C3  3B F1                     CMP ESI,ECX
005B06C5  7D 08                     JGE 0x005b06cf
005B06C7  8B 40 14                  MOV EAX,dword ptr [EAX + 0x14]
005B06CA  8B 04 B0                  MOV EAX,dword ptr [EAX + ESI*0x4]
005B06CD  EB 02                     JMP 0x005b06d1
LAB_005b06cf:
005B06CF  33 C0                     XOR EAX,EAX
LAB_005b06d1:
005B06D1  52                        PUSH EDX
005B06D2  50                        PUSH EAX
005B06D3  E8 48 DF 17 00            CALL 0x0072e620
005B06D8  83 C4 08                  ADD ESP,0x8
005B06DB  85 C0                     TEST EAX,EAX
005B06DD  7E 15                     JLE 0x005b06f4
005B06DF  8B 8B 97 1C 00 00         MOV ECX,dword ptr [EBX + 0x1c97]
005B06E5  57                        PUSH EDI
005B06E6  56                        PUSH ESI
005B06E7  51                        PUSH ECX
LAB_005b06e8:
005B06E8  E8 13 7B 10 00            CALL 0x006b8200
005B06ED  C7 45 E8 01 00 00 00      MOV dword ptr [EBP + -0x18],0x1
LAB_005b06f4:
005B06F4  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005B06F7  8B F7                     MOV ESI,EDI
005B06F9  3B F0                     CMP ESI,EAX
005B06FB  0F 82 50 FF FF FF         JC 0x005b0651
LAB_005b0701:
005B0701  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
005B0704  85 C0                     TEST EAX,EAX
005B0706  0F 85 35 FF FF FF         JNZ 0x005b0641
LAB_005b070c:
005B070C  8B 93 9F 1C 00 00         MOV EDX,dword ptr [EBX + 0x1c9f]
005B0712  8B 83 97 1C 00 00         MOV EAX,dword ptr [EBX + 0x1c97]
005B0718  8B 8B 6C 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a6c]
005B071E  8D 7B 1D                  LEA EDI,[EBX + 0x1d]
005B0721  8B 72 08                  MOV ESI,dword ptr [EDX + 0x8]
005B0724  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
005B0727  57                        PUSH EDI
005B0728  03 F2                     ADD ESI,EDX
005B072A  51                        PUSH ECX
005B072B  6A 02                     PUSH 0x2
005B072D  8B CB                     MOV ECX,EBX
005B072F  C7 43 2D 28 00 00 00      MOV dword ptr [EBX + 0x2d],0x28
005B0736  89 73 31                  MOV dword ptr [EBX + 0x31],ESI
005B0739  E8 42 59 13 00            CALL 0x006e6080
005B073E  8B 93 6C 1A 00 00         MOV EDX,dword ptr [EBX + 0x1a6c]
005B0744  57                        PUSH EDI
005B0745  52                        PUSH EDX
005B0746  6A 02                     PUSH 0x2
005B0748  8B CB                     MOV ECX,EBX
005B074A  C7 43 2D 20 00 00 00      MOV dword ptr [EBX + 0x2d],0x20
005B0751  C7 43 31 01 00 00 00      MOV dword ptr [EBX + 0x31],0x1
005B0758  E8 23 59 13 00            CALL 0x006e6080
005B075D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005B0760  C7 43 2D 22 00 00 00      MOV dword ptr [EBX + 0x2d],0x22
005B0767  3B C6                     CMP EAX,ESI
005B0769  72 03                     JC 0x005b076e
005B076B  8D 46 FF                  LEA EAX,[ESI + -0x1]
LAB_005b076e:
005B076E  89 43 31                  MOV dword ptr [EBX + 0x31],EAX
005B0771  8B 83 6C 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a6c]
005B0777  57                        PUSH EDI
005B0778  50                        PUSH EAX
005B0779  EB 31                     JMP 0x005b07ac
LAB_005b077b:
005B077B  8B 8B 6C 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a6c]
005B0781  8D 73 1D                  LEA ESI,[EBX + 0x1d]
005B0784  56                        PUSH ESI
005B0785  51                        PUSH ECX
005B0786  6A 02                     PUSH 0x2
005B0788  8B CB                     MOV ECX,EBX
005B078A  C7 43 2D 22 00 00 00      MOV dword ptr [EBX + 0x2d],0x22
005B0791  C7 43 31 00 00 00 00      MOV dword ptr [EBX + 0x31],0x0
005B0798  E8 E3 58 13 00            CALL 0x006e6080
005B079D  8B 93 6C 1A 00 00         MOV EDX,dword ptr [EBX + 0x1a6c]
005B07A3  56                        PUSH ESI
005B07A4  C7 43 2D 05 00 00 00      MOV dword ptr [EBX + 0x2d],0x5
005B07AB  52                        PUSH EDX
LAB_005b07ac:
005B07AC  6A 02                     PUSH 0x2
005B07AE  8B CB                     MOV ECX,EBX
005B07B0  E8 CB 58 13 00            CALL 0x006e6080
005B07B5  8B 43 61                  MOV EAX,dword ptr [EBX + 0x61]
005B07B8  8B 8D 60 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff60]
005B07BE  C7 83 64 1A 00 00 01 00 00 00  MOV dword ptr [EBX + 0x1a64],0x1
005B07C8  89 83 68 1A 00 00         MOV dword ptr [EBX + 0x1a68],EAX
005B07CE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B07D4  5F                        POP EDI
005B07D5  5E                        POP ESI
005B07D6  5B                        POP EBX
005B07D7  8B E5                     MOV ESP,EBP
005B07D9  5D                        POP EBP
005B07DA  C2 04 00                  RET 0x4
LAB_005b07dd:
005B07DD  8B 95 60 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff60]
005B07E3  68 98 C8 7C 00            PUSH 0x7cc898
005B07E8  68 CC 4C 7A 00            PUSH 0x7a4ccc
005B07ED  57                        PUSH EDI
005B07EE  56                        PUSH ESI
005B07EF  68 F5 04 00 00            PUSH 0x4f5
005B07F4  68 28 C7 7C 00            PUSH 0x7cc728
005B07F9  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005B07FF  E8 CC CC 0F 00            CALL 0x006ad4d0
005B0804  83 C4 18                  ADD ESP,0x18
005B0807  85 C0                     TEST EAX,EAX
005B0809  74 01                     JZ 0x005b080c
005B080B  CC                        INT3
LAB_005b080c:
005B080C  68 F5 04 00 00            PUSH 0x4f5
005B0811  68 28 C7 7C 00            PUSH 0x7cc728
005B0816  56                        PUSH ESI
005B0817  57                        PUSH EDI
005B0818  E8 23 56 0F 00            CALL 0x006a5e40
005B081D  5F                        POP EDI
005B081E  5E                        POP ESI
005B081F  5B                        POP EBX
005B0820  8B E5                     MOV ESP,EBP
005B0822  5D                        POP EBP
005B0823  C2 04 00                  RET 0x4
