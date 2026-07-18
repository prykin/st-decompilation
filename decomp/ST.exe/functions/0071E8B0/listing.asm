FUN_0071e8b0:
0071E8B0  55                        PUSH EBP
0071E8B1  8B EC                     MOV EBP,ESP
0071E8B3  83 EC 6C                  SUB ESP,0x6c
0071E8B6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0071E8BB  53                        PUSH EBX
0071E8BC  56                        PUSH ESI
0071E8BD  57                        PUSH EDI
0071E8BE  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0071E8C1  33 FF                     XOR EDI,EDI
0071E8C3  8D 55 98                  LEA EDX,[EBP + -0x68]
0071E8C6  8D 4D 94                  LEA ECX,[EBP + -0x6c]
0071E8C9  57                        PUSH EDI
0071E8CA  52                        PUSH EDX
0071E8CB  89 45 94                  MOV dword ptr [EBP + -0x6c],EAX
0071E8CE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0071E8D4  E8 17 EF 00 00            CALL 0x0072d7f0
0071E8D9  8B F0                     MOV ESI,EAX
0071E8DB  83 C4 08                  ADD ESP,0x8
0071E8DE  3B F7                     CMP ESI,EDI
0071E8E0  0F 85 30 08 00 00         JNZ 0x0071f116
0071E8E6  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0071E8E9  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
0071E8EC  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
0071E8EF  83 F8 64                  CMP EAX,0x64
0071E8F2  0F 87 03 08 00 00         JA 0x0071f0fb
0071E8F8  33 C9                     XOR ECX,ECX
0071E8FA  8A 88 A0 F1 71 00         MOV CL,byte ptr [EAX + 0x71f1a0]
switchD_0071e900::switchD:
0071E900  FF 24 8D 64 F1 71 00      JMP dword ptr [ECX*0x4 + 0x71f164]
switchD_0071e900::caseD_2:
0071E907  8B 7E 14                  MOV EDI,dword ptr [ESI + 0x14]
0071E90A  85 FF                     TEST EDI,EDI
0071E90C  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0071E90F  75 15                     JNZ 0x0071e926
0071E911  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0071E917  6A 2A                     PUSH 0x2a
0071E919  68 68 0A 7F 00            PUSH 0x7f0a68
0071E91E  52                        PUSH EDX
0071E91F  6A CC                     PUSH -0x34
0071E921  E8 1A 75 F8 FF            CALL 0x006a5e40
LAB_0071e926:
0071E926  8B 07                     MOV EAX,dword ptr [EDI]
0071E928  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
0071E92B  8B 4F 04                  MOV ECX,dword ptr [EDI + 0x4]
0071E92E  89 4B 20                  MOV dword ptr [EBX + 0x20],ECX
0071E931  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
0071E934  89 93 CC 01 00 00         MOV dword ptr [EBX + 0x1cc],EDX
0071E93A  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0071E93D  89 83 D0 01 00 00         MOV dword ptr [EBX + 0x1d0],EAX
0071E943  8B 4F 10                  MOV ECX,dword ptr [EDI + 0x10]
0071E946  89 8B D4 01 00 00         MOV dword ptr [EBX + 0x1d4],ECX
0071E94C  8B 57 14                  MOV EDX,dword ptr [EDI + 0x14]
0071E94F  89 93 D8 01 00 00         MOV dword ptr [EBX + 0x1d8],EDX
0071E955  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
0071E958  89 83 DC 01 00 00         MOV dword ptr [EBX + 0x1dc],EAX
0071E95E  8B 4F 1C                  MOV ECX,dword ptr [EDI + 0x1c]
0071E961  89 8B E0 01 00 00         MOV dword ptr [EBX + 0x1e0],ECX
0071E967  8B 57 28                  MOV EDX,dword ptr [EDI + 0x28]
0071E96A  89 93 E4 01 00 00         MOV dword ptr [EBX + 0x1e4],EDX
0071E970  8B 47 2C                  MOV EAX,dword ptr [EDI + 0x2c]
0071E973  89 83 E8 01 00 00         MOV dword ptr [EBX + 0x1e8],EAX
0071E979  8B 4F 20                  MOV ECX,dword ptr [EDI + 0x20]
0071E97C  89 4B 24                  MOV dword ptr [EBX + 0x24],ECX
0071E97F  8B 57 24                  MOV EDX,dword ptr [EDI + 0x24]
0071E982  89 53 28                  MOV dword ptr [EBX + 0x28],EDX
0071E985  8B 83 E4 01 00 00         MOV EAX,dword ptr [EBX + 0x1e4]
0071E98B  8B B3 D4 01 00 00         MOV ESI,dword ptr [EBX + 0x1d4]
0071E991  8B C8                     MOV ECX,EAX
0071E993  03 CE                     ADD ECX,ESI
0071E995  8B B3 D8 01 00 00         MOV ESI,dword ptr [EBX + 0x1d8]
0071E99B  0F AF 8B DC 01 00 00      IMUL ECX,dword ptr [EBX + 0x1dc]
0071E9A2  2B C8                     SUB ECX,EAX
0071E9A4  8B 83 E8 01 00 00         MOV EAX,dword ptr [EBX + 0x1e8]
0071E9AA  8B D0                     MOV EDX,EAX
0071E9AC  89 4B 2C                  MOV dword ptr [EBX + 0x2c],ECX
0071E9AF  03 D6                     ADD EDX,ESI
0071E9B1  8D 77 30                  LEA ESI,[EDI + 0x30]
0071E9B4  0F AF 93 E0 01 00 00      IMUL EDX,dword ptr [EBX + 0x1e0]
0071E9BB  2B D0                     SUB EDX,EAX
0071E9BD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0071E9C0  8D BB 34 01 00 00         LEA EDI,[EBX + 0x134]
0071E9C6  B9 08 00 00 00            MOV ECX,0x8
0071E9CB  89 53 30                  MOV dword ptr [EBX + 0x30],EDX
0071E9CE  F3 A5                     MOVSD.REP ES:EDI,ESI
0071E9D0  8D 70 70                  LEA ESI,[EAX + 0x70]
0071E9D3  8D BB 54 01 00 00         LEA EDI,[EBX + 0x154]
0071E9D9  B9 08 00 00 00            MOV ECX,0x8
0071E9DE  89 9B 50 01 00 00         MOV dword ptr [EBX + 0x150],EBX
0071E9E4  F3 A5                     MOVSD.REP ES:EDI,ESI
0071E9E6  8D 70 50                  LEA ESI,[EAX + 0x50]
0071E9E9  8D BB 74 01 00 00         LEA EDI,[EBX + 0x174]
0071E9EF  B9 08 00 00 00            MOV ECX,0x8
0071E9F4  89 9B 70 01 00 00         MOV dword ptr [EBX + 0x170],EBX
0071E9FA  F3 A5                     MOVSD.REP ES:EDI,ESI
0071E9FC  8D B0 90 00 00 00         LEA ESI,[EAX + 0x90]
0071EA02  8D BB 94 01 00 00         LEA EDI,[EBX + 0x194]
0071EA08  B9 08 00 00 00            MOV ECX,0x8
0071EA0D  89 9B 90 01 00 00         MOV dword ptr [EBX + 0x190],EBX
0071EA13  F3 A5                     MOVSD.REP ES:EDI,ESI
0071EA15  89 9B B0 01 00 00         MOV dword ptr [EBX + 0x1b0],EBX
0071EA1B  8B B8 68 08 00 00         MOV EDI,dword ptr [EAX + 0x868]
0071EA21  33 C9                     XOR ECX,ECX
0071EA23  85 FF                     TEST EDI,EDI
0071EA25  0F 94 C1                  SETZ CL
0071EA28  89 4B 34                  MOV dword ptr [EBX + 0x34],ECX
0071EA2B  8B B0 6C 08 00 00         MOV ESI,dword ptr [EAX + 0x86c]
0071EA31  33 D2                     XOR EDX,EDX
0071EA33  85 F6                     TEST ESI,ESI
0071EA35  0F 94 C2                  SETZ DL
0071EA38  89 53 38                  MOV dword ptr [EBX + 0x38],EDX
0071EA3B  8B 90 B0 00 00 00         MOV EDX,dword ptr [EAX + 0xb0]
0071EA41  85 D2                     TEST EDX,EDX
0071EA43  74 63                     JZ 0x0071eaa8
0071EA45  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
0071EA48  C7 80 60 04 00 00 02 00 00 00  MOV dword ptr [EAX + 0x460],0x2
0071EA52  89 88 5C 04 00 00         MOV dword ptr [EAX + 0x45c],ECX
0071EA58  C7 80 64 04 00 00 2C 00 00 00  MOV dword ptr [EAX + 0x464],0x2c
0071EA62  8B 8B D0 01 00 00         MOV ECX,dword ptr [EBX + 0x1d0]
0071EA68  8B B3 E0 01 00 00         MOV ESI,dword ptr [EBX + 0x1e0]
0071EA6E  3B CE                     CMP ECX,ESI
0071EA70  7E 05                     JLE 0x0071ea77
0071EA72  2B CE                     SUB ECX,ESI
0071EA74  41                        INC ECX
0071EA75  EB 02                     JMP 0x0071ea79
LAB_0071ea77:
0071EA77  33 C9                     XOR ECX,ECX
LAB_0071ea79:
0071EA79  89 88 74 04 00 00         MOV dword ptr [EAX + 0x474],ECX
0071EA7F  8B 8B F0 01 00 00         MOV ECX,dword ptr [EBX + 0x1f0]
0071EA85  89 88 78 04 00 00         MOV dword ptr [EAX + 0x478],ECX
0071EA8B  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
0071EA8E  05 B4 00 00 00            ADD EAX,0xb4
0071EA93  6A 00                     PUSH 0x0
0071EA95  8B 31                     MOV ESI,dword ptr [ECX]
0071EA97  50                        PUSH EAX
0071EA98  8D 83 B4 01 00 00         LEA EAX,[EBX + 0x1b4]
0071EA9E  6A 00                     PUSH 0x0
0071EAA0  50                        PUSH EAX
0071EAA1  52                        PUSH EDX
0071EAA2  FF 56 08                  CALL dword ptr [ESI + 0x8]
0071EAA5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0071eaa8:
0071EAA8  8B B0 8C 04 00 00         MOV ESI,dword ptr [EAX + 0x48c]
0071EAAE  85 F6                     TEST ESI,ESI
0071EAB0  74 63                     JZ 0x0071eb15
0071EAB2  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
0071EAB5  C7 80 3C 08 00 00 02 00 00 00  MOV dword ptr [EAX + 0x83c],0x2
0071EABF  89 88 38 08 00 00         MOV dword ptr [EAX + 0x838],ECX
0071EAC5  C7 80 40 08 00 00 2D 00 00 00  MOV dword ptr [EAX + 0x840],0x2d
0071EACF  8B 8B CC 01 00 00         MOV ECX,dword ptr [EBX + 0x1cc]
0071EAD5  8B 93 DC 01 00 00         MOV EDX,dword ptr [EBX + 0x1dc]
0071EADB  3B CA                     CMP ECX,EDX
0071EADD  7E 05                     JLE 0x0071eae4
0071EADF  2B CA                     SUB ECX,EDX
0071EAE1  41                        INC ECX
0071EAE2  EB 02                     JMP 0x0071eae6
LAB_0071eae4:
0071EAE4  33 C9                     XOR ECX,ECX
LAB_0071eae6:
0071EAE6  89 88 50 08 00 00         MOV dword ptr [EAX + 0x850],ECX
0071EAEC  8B 93 EC 01 00 00         MOV EDX,dword ptr [EBX + 0x1ec]
0071EAF2  89 90 54 08 00 00         MOV dword ptr [EAX + 0x854],EDX
0071EAF8  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
0071EAFB  05 90 04 00 00            ADD EAX,0x490
0071EB00  6A 00                     PUSH 0x0
0071EB02  8B 11                     MOV EDX,dword ptr [ECX]
0071EB04  50                        PUSH EAX
0071EB05  8D 83 B8 01 00 00         LEA EAX,[EBX + 0x1b8]
0071EB0B  6A 00                     PUSH 0x0
0071EB0D  50                        PUSH EAX
0071EB0E  56                        PUSH ESI
0071EB0F  FF 52 08                  CALL dword ptr [EDX + 0x8]
0071EB12  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0071eb15:
0071EB15  8B 88 74 08 00 00         MOV ECX,dword ptr [EAX + 0x874]
0071EB1B  89 8B C0 01 00 00         MOV dword ptr [EBX + 0x1c0],ECX
0071EB21  8B 90 70 08 00 00         MOV EDX,dword ptr [EAX + 0x870]
0071EB27  89 93 C8 01 00 00         MOV dword ptr [EBX + 0x1c8],EDX
0071EB2D  C7 83 F4 01 00 00 00 00 00 00  MOV dword ptr [EBX + 0x1f4],0x0
0071EB37  E9 BC 05 00 00            JMP 0x0071f0f8
switchD_0071e900::caseD_3:
0071EB3C  8B 83 B4 01 00 00         MOV EAX,dword ptr [EBX + 0x1b4]
0071EB42  3B C7                     CMP EAX,EDI
0071EB44  74 09                     JZ 0x0071eb4f
0071EB46  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
0071EB49  50                        PUSH EAX
0071EB4A  E8 61 6B FC FF            CALL 0x006e56b0
LAB_0071eb4f:
0071EB4F  8B 83 B8 01 00 00         MOV EAX,dword ptr [EBX + 0x1b8]
0071EB55  89 BB B4 01 00 00         MOV dword ptr [EBX + 0x1b4],EDI
0071EB5B  3B C7                     CMP EAX,EDI
0071EB5D  74 09                     JZ 0x0071eb68
0071EB5F  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
0071EB62  50                        PUSH EAX
0071EB63  E8 48 6B FC FF            CALL 0x006e56b0
LAB_0071eb68:
0071EB68  89 BB B8 01 00 00         MOV dword ptr [EBX + 0x1b8],EDI
0071EB6E  E9 88 05 00 00            JMP 0x0071f0fb
switchD_0071e900::caseD_8:
0071EB73  F7 43 1C 00 00 00 70      TEST dword ptr [EBX + 0x1c],0x70000000
0071EB7A  0F 84 7B 05 00 00         JZ 0x0071f0fb
0071EB80  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
0071EB83  8D 4D D8                  LEA ECX,[EBP + -0x28]
0071EB86  51                        PUSH ECX
0071EB87  6A 01                     PUSH 0x1
0071EB89  6A 03                     PUSH 0x3
0071EB8B  8B CB                     MOV ECX,EBX
0071EB8D  C7 45 E8 13 00 00 00      MOV dword ptr [EBP + -0x18],0x13
0071EB94  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0071EB97  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
0071EB9A  E8 61 74 FC FF            CALL 0x006e6000
0071EB9F  39 BB 84 01 00 00         CMP dword ptr [EBX + 0x184],EDI
0071EBA5  0F 84 50 05 00 00         JZ 0x0071f0fb
0071EBAB  F6 43 1C 01               TEST byte ptr [EBX + 0x1c],0x1
0071EBAF  0F 84 46 05 00 00         JZ 0x0071f0fb
0071EBB5  66 8B 93 EC 01 00 00      MOV DX,word ptr [EBX + 0x1ec]
0071EBBC  66 8B 83 F0 01 00 00      MOV AX,word ptr [EBX + 0x1f0]
0071EBC3  8D 8B 74 01 00 00         LEA ECX,[EBX + 0x174]
0071EBC9  66 89 93 88 01 00 00      MOV word ptr [EBX + 0x188],DX
0071EBD0  51                        PUSH ECX
0071EBD1  8B CB                     MOV ECX,EBX
0071EBD3  66 89 83 8A 01 00 00      MOV word ptr [EBX + 0x18a],AX
0071EBDA  E8 41 74 FC FF            CALL 0x006e6020
0071EBDF  E9 17 05 00 00            JMP 0x0071f0fb
switchD_0071e900::caseD_9:
0071EBE4  F7 43 1C 00 00 00 70      TEST dword ptr [EBX + 0x1c],0x70000000
0071EBEB  0F 85 0A 05 00 00         JNZ 0x0071f0fb
0071EBF1  8B 53 08                  MOV EDX,dword ptr [EBX + 0x8]
0071EBF4  8D 45 D8                  LEA EAX,[EBP + -0x28]
0071EBF7  50                        PUSH EAX
0071EBF8  6A 01                     PUSH 0x1
0071EBFA  6A 03                     PUSH 0x3
0071EBFC  8B CB                     MOV ECX,EBX
0071EBFE  C7 45 E8 14 00 00 00      MOV dword ptr [EBP + -0x18],0x14
0071EC05  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0071EC08  E8 F3 73 FC FF            CALL 0x006e6000
0071EC0D  E9 E9 04 00 00            JMP 0x0071f0fb
switchD_0071e900::caseD_20:
0071EC12  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
0071EC15  8B 53 1C                  MOV EDX,dword ptr [EBX + 0x1c]
0071EC18  8B 83 B8 01 00 00         MOV EAX,dword ptr [EBX + 0x1b8]
0071EC1E  81 E1 FF FF FF 00         AND ECX,0xffffff
0071EC24  0B D1                     OR EDX,ECX
0071EC26  B9 08 00 00 00            MOV ECX,0x8
0071EC2B  8D 7D D8                  LEA EDI,[EBP + -0x28]
0071EC2E  89 53 1C                  MOV dword ptr [EBX + 0x1c],EDX
0071EC31  F3 A5                     MOVSD.REP ES:EDI,ESI
0071EC33  85 C0                     TEST EAX,EAX
0071EC35  BF 20 00 00 00            MOV EDI,0x20
0071EC3A  74 27                     JZ 0x0071ec63
0071EC3C  8B 93 CC 01 00 00         MOV EDX,dword ptr [EBX + 0x1cc]
0071EC42  8B 8B DC 01 00 00         MOV ECX,dword ptr [EBX + 0x1dc]
0071EC48  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0071EC4B  33 C0                     XOR EAX,EAX
0071EC4D  3B D1                     CMP EDX,ECX
0071EC4F  8D 4D D8                  LEA ECX,[EBP + -0x28]
0071EC52  0F 9F C0                  SETG AL
0071EC55  51                        PUSH ECX
0071EC56  8B CB                     MOV ECX,EBX
0071EC58  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
0071EC5B  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0071EC5E  E8 FD 73 FC FF            CALL 0x006e6060
LAB_0071ec63:
0071EC63  8B 83 B4 01 00 00         MOV EAX,dword ptr [EBX + 0x1b4]
0071EC69  85 C0                     TEST EAX,EAX
0071EC6B  0F 84 87 04 00 00         JZ 0x0071f0f8
0071EC71  8B 93 D0 01 00 00         MOV EDX,dword ptr [EBX + 0x1d0]
0071EC77  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0071EC7D  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0071EC80  33 C0                     XOR EAX,EAX
0071EC82  3B D1                     CMP EDX,ECX
0071EC84  8D 4D D8                  LEA ECX,[EBP + -0x28]
0071EC87  0F 9F C0                  SETG AL
0071EC8A  51                        PUSH ECX
0071EC8B  8B CB                     MOV ECX,EBX
0071EC8D  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
0071EC90  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0071EC93  E8 C8 73 FC FF            CALL 0x006e6060
0071EC98  E9 5B 04 00 00            JMP 0x0071f0f8
switchD_0071e900::caseD_22:
0071EC9D  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0071ECA3  33 C0                     XOR EAX,EAX
0071ECA5  66 8B 46 14               MOV AX,word ptr [ESI + 0x14]
0071ECA9  3B CF                     CMP ECX,EDI
0071ECAB  C7 45 E4 02 00 00 00      MOV dword ptr [EBP + -0x1c],0x2
0071ECB2  C7 45 E8 22 00 00 00      MOV dword ptr [EBP + -0x18],0x22
0071ECB9  89 83 EC 01 00 00         MOV dword ptr [EBX + 0x1ec],EAX
0071ECBF  74 11                     JZ 0x0071ecd2
0071ECC1  8D 55 D8                  LEA EDX,[EBP + -0x28]
0071ECC4  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
0071ECC7  52                        PUSH EDX
0071ECC8  8B CB                     MOV ECX,EBX
0071ECCA  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0071ECCD  E8 8E 73 FC FF            CALL 0x006e6060
LAB_0071ecd2:
0071ECD2  8B 8B B4 01 00 00         MOV ECX,dword ptr [EBX + 0x1b4]
0071ECD8  33 C0                     XOR EAX,EAX
0071ECDA  66 8B 46 16               MOV AX,word ptr [ESI + 0x16]
0071ECDE  3B CF                     CMP ECX,EDI
0071ECE0  89 83 F0 01 00 00         MOV dword ptr [EBX + 0x1f0],EAX
0071ECE6  74 11                     JZ 0x0071ecf9
0071ECE8  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0071ECEB  8D 45 D8                  LEA EAX,[EBP + -0x28]
0071ECEE  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
0071ECF1  50                        PUSH EAX
0071ECF2  8B CB                     MOV ECX,EBX
0071ECF4  E8 67 73 FC FF            CALL 0x006e6060
LAB_0071ecf9:
0071ECF9  39 BB 84 01 00 00         CMP dword ptr [EBX + 0x184],EDI
0071ECFF  74 36                     JZ 0x0071ed37
0071ED01  F6 43 1C 01               TEST byte ptr [EBX + 0x1c],0x1
0071ED05  74 30                     JZ 0x0071ed37
0071ED07  66 39 7E 18               CMP word ptr [ESI + 0x18],DI
0071ED0B  75 2A                     JNZ 0x0071ed37
0071ED0D  66 8B 8B EC 01 00 00      MOV CX,word ptr [EBX + 0x1ec]
0071ED14  66 8B 93 F0 01 00 00      MOV DX,word ptr [EBX + 0x1f0]
0071ED1B  8D 83 74 01 00 00         LEA EAX,[EBX + 0x174]
0071ED21  66 89 8B 88 01 00 00      MOV word ptr [EBX + 0x188],CX
0071ED28  50                        PUSH EAX
0071ED29  8B CB                     MOV ECX,EBX
0071ED2B  66 89 93 8A 01 00 00      MOV word ptr [EBX + 0x18a],DX
0071ED32  E8 E9 72 FC FF            CALL 0x006e6020
LAB_0071ed37:
0071ED37  8B 13                     MOV EDX,dword ptr [EBX]
0071ED39  8B CB                     MOV ECX,EBX
0071ED3B  FF 52 04                  CALL dword ptr [EDX + 0x4]
0071ED3E  E9 B8 03 00 00            JMP 0x0071f0fb
switchD_0071e900::caseD_28:
0071ED43  33 C0                     XOR EAX,EAX
0071ED45  33 C9                     XOR ECX,ECX
0071ED47  66 8B 46 14               MOV AX,word ptr [ESI + 0x14]
0071ED4B  89 BB EC 01 00 00         MOV dword ptr [EBX + 0x1ec],EDI
0071ED51  89 83 CC 01 00 00         MOV dword ptr [EBX + 0x1cc],EAX
0071ED57  8B 83 84 01 00 00         MOV EAX,dword ptr [EBX + 0x184]
0071ED5D  66 8B 4E 16               MOV CX,word ptr [ESI + 0x16]
0071ED61  3B C7                     CMP EAX,EDI
0071ED63  89 8B D0 01 00 00         MOV dword ptr [EBX + 0x1d0],ECX
0071ED69  89 BB F0 01 00 00         MOV dword ptr [EBX + 0x1f0],EDI
0071ED6F  74 28                     JZ 0x0071ed99
0071ED71  F6 43 1C 01               TEST byte ptr [EBX + 0x1c],0x1
0071ED75  74 22                     JZ 0x0071ed99
0071ED77  8D 8B 74 01 00 00         LEA ECX,[EBX + 0x174]
0071ED7D  66 8B D7                  MOV DX,DI
0071ED80  66 8B C7                  MOV AX,DI
0071ED83  51                        PUSH ECX
0071ED84  8B CB                     MOV ECX,EBX
0071ED86  66 89 93 88 01 00 00      MOV word ptr [EBX + 0x188],DX
0071ED8D  66 89 83 8A 01 00 00      MOV word ptr [EBX + 0x18a],AX
0071ED94  E8 87 72 FC FF            CALL 0x006e6020
LAB_0071ed99:
0071ED99  8B 13                     MOV EDX,dword ptr [EBX]
0071ED9B  8B CB                     MOV ECX,EBX
0071ED9D  FF 52 04                  CALL dword ptr [EDX + 0x4]
0071EDA0  B9 08 00 00 00            MOV ECX,0x8
0071EDA5  33 C0                     XOR EAX,EAX
0071EDA7  8D 7D D8                  LEA EDI,[EBP + -0x28]
0071EDAA  F3 AB                     STOSD.REP ES:EDI
0071EDAC  8B 83 B8 01 00 00         MOV EAX,dword ptr [EBX + 0x1b8]
0071EDB2  C7 45 E4 02 00 00 00      MOV dword ptr [EBP + -0x1c],0x2
0071EDB9  85 C0                     TEST EAX,EAX
0071EDBB  BF 20 00 00 00            MOV EDI,0x20
0071EDC0  74 73                     JZ 0x0071ee35
0071EDC2  8B 93 DC 01 00 00         MOV EDX,dword ptr [EBX + 0x1dc]
0071EDC8  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0071EDCB  8B 83 CC 01 00 00         MOV EAX,dword ptr [EBX + 0x1cc]
0071EDD1  33 C9                     XOR ECX,ECX
0071EDD3  3B C2                     CMP EAX,EDX
0071EDD5  8D 55 D8                  LEA EDX,[EBP + -0x28]
0071EDD8  0F 9F C1                  SETG CL
0071EDDB  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0071EDDE  52                        PUSH EDX
0071EDDF  8B CB                     MOV ECX,EBX
0071EDE1  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
0071EDE4  E8 77 72 FC FF            CALL 0x006e6060
0071EDE9  8B 83 CC 01 00 00         MOV EAX,dword ptr [EBX + 0x1cc]
0071EDEF  8B 8B DC 01 00 00         MOV ECX,dword ptr [EBX + 0x1dc]
0071EDF5  3B C1                     CMP EAX,ECX
0071EDF7  C7 45 E8 28 00 00 00      MOV dword ptr [EBP + -0x18],0x28
0071EDFE  7E 08                     JLE 0x0071ee08
0071EE00  2B C1                     SUB EAX,ECX
0071EE02  40                        INC EAX
0071EE03  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0071EE06  EB 07                     JMP 0x0071ee0f
LAB_0071ee08:
0071EE08  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
LAB_0071ee0f:
0071EE0F  8D 45 D8                  LEA EAX,[EBP + -0x28]
0071EE12  8B CB                     MOV ECX,EBX
0071EE14  50                        PUSH EAX
0071EE15  E8 46 72 FC FF            CALL 0x006e6060
0071EE1A  8B 8B EC 01 00 00         MOV ECX,dword ptr [EBX + 0x1ec]
0071EE20  8D 55 D8                  LEA EDX,[EBP + -0x28]
0071EE23  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0071EE26  52                        PUSH EDX
0071EE27  8B CB                     MOV ECX,EBX
0071EE29  C7 45 E8 22 00 00 00      MOV dword ptr [EBP + -0x18],0x22
0071EE30  E8 2B 72 FC FF            CALL 0x006e6060
LAB_0071ee35:
0071EE35  8B 83 B4 01 00 00         MOV EAX,dword ptr [EBX + 0x1b4]
0071EE3B  85 C0                     TEST EAX,EAX
0071EE3D  0F 84 B8 02 00 00         JZ 0x0071f0fb
0071EE43  8B 93 E0 01 00 00         MOV EDX,dword ptr [EBX + 0x1e0]
0071EE49  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0071EE4C  8B 83 D0 01 00 00         MOV EAX,dword ptr [EBX + 0x1d0]
0071EE52  33 C9                     XOR ECX,ECX
0071EE54  3B C2                     CMP EAX,EDX
0071EE56  8D 55 D8                  LEA EDX,[EBP + -0x28]
0071EE59  0F 9F C1                  SETG CL
0071EE5C  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0071EE5F  52                        PUSH EDX
0071EE60  8B CB                     MOV ECX,EBX
0071EE62  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
0071EE65  E8 F6 71 FC FF            CALL 0x006e6060
0071EE6A  8B 83 D0 01 00 00         MOV EAX,dword ptr [EBX + 0x1d0]
0071EE70  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0071EE76  3B C1                     CMP EAX,ECX
0071EE78  C7 45 E8 28 00 00 00      MOV dword ptr [EBP + -0x18],0x28
0071EE7F  7E 08                     JLE 0x0071ee89
0071EE81  2B C1                     SUB EAX,ECX
0071EE83  40                        INC EAX
0071EE84  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0071EE87  EB 07                     JMP 0x0071ee90
LAB_0071ee89:
0071EE89  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
LAB_0071ee90:
0071EE90  8D 45 D8                  LEA EAX,[EBP + -0x28]
0071EE93  8B CB                     MOV ECX,EBX
0071EE95  50                        PUSH EAX
0071EE96  E8 C5 71 FC FF            CALL 0x006e6060
0071EE9B  8B 8B F0 01 00 00         MOV ECX,dword ptr [EBX + 0x1f0]
0071EEA1  8D 55 D8                  LEA EDX,[EBP + -0x28]
0071EEA4  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0071EEA7  52                        PUSH EDX
0071EEA8  8B CB                     MOV ECX,EBX
0071EEAA  C7 45 E8 22 00 00 00      MOV dword ptr [EBP + -0x18],0x22
0071EEB1  E8 AA 71 FC FF            CALL 0x006e6060
0071EEB6  E9 40 02 00 00            JMP 0x0071f0fb
switchD_0071e900::caseD_26:
0071EEBB  66 8B 83 EC 01 00 00      MOV AX,word ptr [EBX + 0x1ec]
0071EEC2  66 89 46 14               MOV word ptr [ESI + 0x14],AX
0071EEC6  66 8B 8B F0 01 00 00      MOV CX,word ptr [EBX + 0x1f0]
0071EECD  66 89 4E 16               MOV word ptr [ESI + 0x16],CX
0071EED1  E9 25 02 00 00            JMP 0x0071f0fb
switchD_0071e900::caseD_2c:
0071EED6  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
0071EED9  8B 03                     MOV EAX,dword ptr [EBX]
0071EEDB  8B CB                     MOV ECX,EBX
0071EEDD  89 93 F0 01 00 00         MOV dword ptr [EBX + 0x1f0],EDX
0071EEE3  FF 50 04                  CALL dword ptr [EAX + 0x4]
0071EEE6  39 BB 84 01 00 00         CMP dword ptr [EBX + 0x184],EDI
0071EEEC  0F 84 09 02 00 00         JZ 0x0071f0fb
0071EEF2  F6 43 1C 01               TEST byte ptr [EBX + 0x1c],0x1
0071EEF6  0F 84 FF 01 00 00         JZ 0x0071f0fb
0071EEFC  66 8B 8B EC 01 00 00      MOV CX,word ptr [EBX + 0x1ec]
0071EF03  66 8B 93 F0 01 00 00      MOV DX,word ptr [EBX + 0x1f0]
0071EF0A  8D 83 74 01 00 00         LEA EAX,[EBX + 0x174]
0071EF10  66 89 8B 88 01 00 00      MOV word ptr [EBX + 0x188],CX
0071EF17  50                        PUSH EAX
0071EF18  8B CB                     MOV ECX,EBX
0071EF1A  66 89 93 8A 01 00 00      MOV word ptr [EBX + 0x18a],DX
0071EF21  E8 FA 70 FC FF            CALL 0x006e6020
0071EF26  E9 D0 01 00 00            JMP 0x0071f0fb
switchD_0071e900::caseD_2d:
0071EF2B  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
0071EF2E  8B 13                     MOV EDX,dword ptr [EBX]
0071EF30  89 8B EC 01 00 00         MOV dword ptr [EBX + 0x1ec],ECX
0071EF36  8B CB                     MOV ECX,EBX
0071EF38  FF 52 04                  CALL dword ptr [EDX + 0x4]
0071EF3B  39 BB 84 01 00 00         CMP dword ptr [EBX + 0x184],EDI
0071EF41  0F 84 B4 01 00 00         JZ 0x0071f0fb
0071EF47  F6 43 1C 01               TEST byte ptr [EBX + 0x1c],0x1
0071EF4B  0F 84 AA 01 00 00         JZ 0x0071f0fb
0071EF51  66 8B 8B F0 01 00 00      MOV CX,word ptr [EBX + 0x1f0]
0071EF58  66 8B 83 EC 01 00 00      MOV AX,word ptr [EBX + 0x1ec]
0071EF5F  8D 93 74 01 00 00         LEA EDX,[EBX + 0x174]
0071EF65  66 89 8B 8A 01 00 00      MOV word ptr [EBX + 0x18a],CX
0071EF6C  52                        PUSH EDX
0071EF6D  8B CB                     MOV ECX,EBX
0071EF6F  66 89 83 88 01 00 00      MOV word ptr [EBX + 0x188],AX
0071EF76  E8 A5 70 FC FF            CALL 0x006e6020
0071EF7B  E9 7B 01 00 00            JMP 0x0071f0fb
switchD_0071e900::caseD_0:
0071EF80  F6 43 20 01               TEST byte ptr [EBX + 0x20],0x1
0071EF84  0F 84 71 01 00 00         JZ 0x0071f0fb
0071EF8A  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
0071EF90  8B 8B C0 01 00 00         MOV ECX,dword ptr [EBX + 0x1c0]
0071EF96  8B 93 C4 01 00 00         MOV EDX,dword ptr [EBX + 0x1c4]
0071EF9C  03 CA                     ADD ECX,EDX
0071EF9E  3B C1                     CMP EAX,ECX
0071EFA0  0F 82 55 01 00 00         JC 0x0071f0fb
0071EFA6  8B 93 F4 01 00 00         MOV EDX,dword ptr [EBX + 0x1f4]
0071EFAC  8B 8B C8 01 00 00         MOV ECX,dword ptr [EBX + 0x1c8]
0071EFB2  42                        INC EDX
0071EFB3  89 83 C4 01 00 00         MOV dword ptr [EBX + 0x1c4],EAX
0071EFB9  8B C2                     MOV EAX,EDX
0071EFBB  89 93 F4 01 00 00         MOV dword ptr [EBX + 0x1f4],EDX
0071EFC1  3B C1                     CMP EAX,ECX
0071EFC3  7C 06                     JL 0x0071efcb
0071EFC5  89 BB F4 01 00 00         MOV dword ptr [EBX + 0x1f4],EDI
LAB_0071efcb:
0071EFCB  8B 13                     MOV EDX,dword ptr [EBX]
0071EFCD  8B CB                     MOV ECX,EBX
0071EFCF  FF 52 04                  CALL dword ptr [EDX + 0x4]
0071EFD2  E9 24 01 00 00            JMP 0x0071f0fb
switchD_0071e900::caseD_60:
0071EFD7  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
0071EFDA  33 C0                     XOR EAX,EAX
0071EFDC  66 8B 46 18               MOV AX,word ptr [ESI + 0x18]
0071EFE0  33 C9                     XOR ECX,ECX
0071EFE2  66 8B 4E 1A               MOV CX,word ptr [ESI + 0x1a]
0071EFE6  3B C2                     CMP EAX,EDX
0071EFE8  7C 24                     JL 0x0071f00e
0071EFEA  8B 7B 2C                  MOV EDI,dword ptr [EBX + 0x2c]
0071EFED  03 FA                     ADD EDI,EDX
0071EFEF  3B C7                     CMP EAX,EDI
0071EFF1  7D 19                     JGE 0x0071f00c
0071EFF3  8B 43 28                  MOV EAX,dword ptr [EBX + 0x28]
0071EFF6  3B C8                     CMP ECX,EAX
0071EFF8  7C 12                     JL 0x0071f00c
0071EFFA  8B 53 30                  MOV EDX,dword ptr [EBX + 0x30]
0071EFFD  03 D0                     ADD EDX,EAX
0071EFFF  3B CA                     CMP ECX,EDX
0071F001  7D 09                     JGE 0x0071f00c
0071F003  B8 01 00 00 00            MOV EAX,0x1
0071F008  33 FF                     XOR EDI,EDI
0071F00A  EB 04                     JMP 0x0071f010
LAB_0071f00c:
0071F00C  33 FF                     XOR EDI,EDI
LAB_0071f00e:
0071F00E  33 C0                     XOR EAX,EAX
LAB_0071f010:
0071F010  3B C7                     CMP EAX,EDI
0071F012  89 83 BC 01 00 00         MOV dword ptr [EBX + 0x1bc],EAX
0071F018  0F 84 DD 00 00 00         JZ 0x0071f0fb
0071F01E  39 BB A4 01 00 00         CMP dword ptr [EBX + 0x1a4],EDI
0071F024  0F 84 D1 00 00 00         JZ 0x0071f0fb
0071F02A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0071F02D  8D B3 94 01 00 00         LEA ESI,[EBX + 0x194]
0071F033  B9 08 00 00 00            MOV ECX,0x8
0071F038  8D 7D D8                  LEA EDI,[EBP + -0x28]
0071F03B  F3 A5                     MOVSD.REP ES:EDI,ESI
0071F03D  8D 4D D8                  LEA ECX,[EBP + -0x28]
0071F040  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0071F043  51                        PUSH ECX
0071F044  8B CB                     MOV ECX,EBX
0071F046  E8 95 6F FC FF            CALL 0x006e5fe0
0071F04B  E9 A8 00 00 00            JMP 0x0071f0f8
switchD_0071e900::caseD_2b:
0071F050  66 8B 83 BC 01 00 00      MOV AX,word ptr [EBX + 0x1bc]
0071F057  66 3B C7                  CMP AX,DI
0071F05A  66 89 46 14               MOV word ptr [ESI + 0x14],AX
0071F05E  0F 85 97 00 00 00         JNZ 0x0071f0fb
0071F064  8B 83 B4 01 00 00         MOV EAX,dword ptr [EBX + 0x1b4]
0071F06A  C7 45 E4 02 00 00 00      MOV dword ptr [EBP + -0x1c],0x2
0071F071  3B C7                     CMP EAX,EDI
0071F073  C7 45 E8 2B 00 00 00      MOV dword ptr [EBP + -0x18],0x2b
0071F07A  74 1C                     JZ 0x0071f098
0071F07C  8D 55 D8                  LEA EDX,[EBP + -0x28]
0071F07F  8B CB                     MOV ECX,EBX
0071F081  52                        PUSH EDX
0071F082  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0071F085  E8 D6 6F FC FF            CALL 0x006e6060
0071F08A  66 39 7D EC               CMP word ptr [EBP + -0x14],DI
0071F08E  74 08                     JZ 0x0071f098
0071F090  66 C7 46 14 01 00         MOV word ptr [ESI + 0x14],0x1
0071F096  EB 63                     JMP 0x0071f0fb
LAB_0071f098:
0071F098  8B 83 B8 01 00 00         MOV EAX,dword ptr [EBX + 0x1b8]
0071F09E  3B C7                     CMP EAX,EDI
0071F0A0  74 59                     JZ 0x0071f0fb
0071F0A2  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0071F0A5  8D 45 D8                  LEA EAX,[EBP + -0x28]
0071F0A8  50                        PUSH EAX
0071F0A9  8B CB                     MOV ECX,EBX
0071F0AB  E8 B0 6F FC FF            CALL 0x006e6060
0071F0B0  66 39 7D EC               CMP word ptr [EBP + -0x14],DI
0071F0B4  74 45                     JZ 0x0071f0fb
0071F0B6  66 C7 46 14 01 00         MOV word ptr [ESI + 0x14],0x1
0071F0BC  EB 3D                     JMP 0x0071f0fb
switchD_0071e900::caseD_24:
0071F0BE  8B 83 B4 01 00 00         MOV EAX,dword ptr [EBX + 0x1b4]
0071F0C4  B9 08 00 00 00            MOV ECX,0x8
0071F0C9  8D 7D D8                  LEA EDI,[EBP + -0x28]
0071F0CC  85 C0                     TEST EAX,EAX
0071F0CE  F3 A5                     MOVSD.REP ES:EDI,ESI
0071F0D0  74 0E                     JZ 0x0071f0e0
0071F0D2  8D 4D D8                  LEA ECX,[EBP + -0x28]
0071F0D5  51                        PUSH ECX
0071F0D6  50                        PUSH EAX
0071F0D7  6A 02                     PUSH 0x2
0071F0D9  8B CB                     MOV ECX,EBX
0071F0DB  E8 A0 6F FC FF            CALL 0x006e6080
LAB_0071f0e0:
0071F0E0  8B 83 B8 01 00 00         MOV EAX,dword ptr [EBX + 0x1b8]
0071F0E6  85 C0                     TEST EAX,EAX
0071F0E8  74 0E                     JZ 0x0071f0f8
0071F0EA  8D 55 D8                  LEA EDX,[EBP + -0x28]
0071F0ED  8B CB                     MOV ECX,EBX
0071F0EF  52                        PUSH EDX
0071F0F0  50                        PUSH EAX
0071F0F1  6A 02                     PUSH 0x2
0071F0F3  E8 88 6F FC FF            CALL 0x006e6080
LAB_0071f0f8:
0071F0F8  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
switchD_0071e900::caseD_1:
0071F0FB  56                        PUSH ESI
0071F0FC  8B CB                     MOV ECX,EBX
0071F0FE  E8 7D C6 00 00            CALL 0x0072b780
0071F103  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
0071F106  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0071F10B  33 C0                     XOR EAX,EAX
0071F10D  5F                        POP EDI
0071F10E  5E                        POP ESI
0071F10F  5B                        POP EBX
0071F110  8B E5                     MOV ESP,EBP
0071F112  5D                        POP EBP
0071F113  C2 04 00                  RET 0x4
LAB_0071f116:
0071F116  8B 4D 94                  MOV ECX,dword ptr [EBP + -0x6c]
0071F119  68 A0 0A 7F 00            PUSH 0x7f0aa0
0071F11E  68 CC 4C 7A 00            PUSH 0x7a4ccc
0071F123  56                        PUSH ESI
0071F124  57                        PUSH EDI
0071F125  68 08 01 00 00            PUSH 0x108
0071F12A  68 68 0A 7F 00            PUSH 0x7f0a68
0071F12F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0071F135  E8 96 E3 F8 FF            CALL 0x006ad4d0
0071F13A  83 C4 18                  ADD ESP,0x18
0071F13D  85 C0                     TEST EAX,EAX
0071F13F  74 01                     JZ 0x0071f142
0071F141  CC                        INT3
LAB_0071f142:
0071F142  68 09 01 00 00            PUSH 0x109
0071F147  68 68 0A 7F 00            PUSH 0x7f0a68
0071F14C  57                        PUSH EDI
0071F14D  56                        PUSH ESI
0071F14E  E8 ED 6C F8 FF            CALL 0x006a5e40
0071F153  5F                        POP EDI
0071F154  5E                        POP ESI
0071F155  B8 FF FF 00 00            MOV EAX,0xffff
0071F15A  5B                        POP EBX
0071F15B  8B E5                     MOV ESP,EBP
0071F15D  5D                        POP EBP
0071F15E  C2 04 00                  RET 0x4
