FUN_00728da0:
00728DA0  55                        PUSH EBP
00728DA1  8B EC                     MOV EBP,ESP
00728DA3  6A FF                     PUSH -0x1
00728DA5  68 F8 E2 79 00            PUSH 0x79e2f8
00728DAA  68 64 D9 72 00            PUSH 0x72d964
00728DAF  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
00728DB5  50                        PUSH EAX
00728DB6  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
00728DBD  81 EC A0 00 00 00         SUB ESP,0xa0
00728DC3  53                        PUSH EBX
00728DC4  56                        PUSH ESI
00728DC5  57                        PUSH EDI
00728DC6  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00728DC9  89 8D 50 FF FF FF         MOV dword ptr [EBP + 0xffffff50],ECX
00728DCF  33 C0                     XOR EAX,EAX
00728DD1  89 45 8C                  MOV dword ptr [EBP + -0x74],EAX
00728DD4  89 85 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],EAX
00728DDA  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
00728DDD  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
00728DE0  89 35 0C 71 85 00         MOV dword ptr [0x0085710c],ESI
00728DE6  83 FE 03                  CMP ESI,0x3
00728DE9  0F 8C E4 07 00 00         JL 0x007295d3
00728DEF  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00728DF2  8D 3C F5 00 00 00 00      LEA EDI,[ESI*0x8 + 0x0]
00728DF9  8B C7                     MOV EAX,EDI
00728DFB  83 C0 03                  ADD EAX,0x3
00728DFE  24 FC                     AND AL,0xfc
00728E00  E8 3B 4C 00 00            CALL 0x0072da40
00728E05  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00728E08  8B C4                     MOV EAX,ESP
00728E0A  8B D8                     MOV EBX,EAX
00728E0C  89 5D D4                  MOV dword ptr [EBP + -0x2c],EBX
00728E0F  8B C7                     MOV EAX,EDI
00728E11  83 C0 03                  ADD EAX,0x3
00728E14  24 FC                     AND AL,0xfc
00728E16  E8 25 4C 00 00            CALL 0x0072da40
00728E1B  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00728E1E  8B C4                     MOV EAX,ESP
00728E20  89 85 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EAX
00728E26  8B C6                     MOV EAX,ESI
00728E28  83 C0 03                  ADD EAX,0x3
00728E2B  24 FC                     AND AL,0xfc
00728E2D  E8 0E 4C 00 00            CALL 0x0072da40
00728E32  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00728E35  8B C4                     MOV EAX,ESP
00728E37  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00728E3A  83 CA FF                  OR EDX,0xffffffff
00728E3D  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00728E40  C7 05 0C 71 85 00 01 00 00 00  MOV dword ptr [0x0085710c],0x1
00728E4A  89 1D 10 71 85 00         MOV dword ptr [0x00857110],EBX
00728E50  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00728E53  8B 08                     MOV ECX,dword ptr [EAX]
00728E55  89 0B                     MOV dword ptr [EBX],ECX
00728E57  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00728E5A  89 4B 04                  MOV dword ptr [EBX + 0x4],ECX
00728E5D  8B 0D 10 71 85 00         MOV ECX,dword ptr [0x00857110]
00728E63  83 C1 08                  ADD ECX,0x8
00728E66  89 0D 10 71 85 00         MOV dword ptr [0x00857110],ECX
00728E6C  83 C0 08                  ADD EAX,0x8
00728E6F  83 FE 01                  CMP ESI,0x1
00728E72  7E 3F                     JLE 0x00728eb3
00728E74  4E                        DEC ESI
LAB_00728e75:
00728E75  66 8B 38                  MOV DI,word ptr [EAX]
00728E78  66 3B 79 F8               CMP DI,word ptr [ECX + -0x8]
00728E7C  75 0A                     JNZ 0x00728e88
00728E7E  66 8B 78 02               MOV DI,word ptr [EAX + 0x2]
00728E82  66 3B 79 FA               CMP DI,word ptr [ECX + -0x6]
00728E86  74 25                     JZ 0x00728ead
LAB_00728e88:
00728E88  8B 38                     MOV EDI,dword ptr [EAX]
00728E8A  89 39                     MOV dword ptr [ECX],EDI
00728E8C  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00728E8F  8B 3D 10 71 85 00         MOV EDI,dword ptr [0x00857110]
00728E95  89 4F 04                  MOV dword ptr [EDI + 0x4],ECX
00728E98  8B 0D 10 71 85 00         MOV ECX,dword ptr [0x00857110]
00728E9E  83 C1 08                  ADD ECX,0x8
00728EA1  89 0D 10 71 85 00         MOV dword ptr [0x00857110],ECX
00728EA7  FF 05 0C 71 85 00         INC dword ptr [0x0085710c]
LAB_00728ead:
00728EAD  83 C0 08                  ADD EAX,0x8
00728EB0  4E                        DEC ESI
00728EB1  75 C2                     JNZ 0x00728e75
LAB_00728eb3:
00728EB3  89 1D 10 71 85 00         MOV dword ptr [0x00857110],EBX
00728EB9  66 8B 0B                  MOV CX,word ptr [EBX]
00728EBC  A1 0C 71 85 00            MOV EAX,[0x0085710c]
00728EC1  66 3B 4C C3 F8            CMP CX,word ptr [EBX + EAX*0x8 + -0x8]
00728EC6  75 11                     JNZ 0x00728ed9
00728EC8  66 8B 4B 02               MOV CX,word ptr [EBX + 0x2]
00728ECC  66 3B 4C C3 FA            CMP CX,word ptr [EBX + EAX*0x8 + -0x6]
00728ED1  75 06                     JNZ 0x00728ed9
00728ED3  48                        DEC EAX
00728ED4  A3 0C 71 85 00            MOV [0x0085710c],EAX
LAB_00728ed9:
00728ED9  89 55 98                  MOV dword ptr [EBP + -0x68],EDX
00728EDC  C7 85 70 FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff70],0x0
LAB_00728ee6:
00728EE6  8B 0D 0C 71 85 00         MOV ECX,dword ptr [0x0085710c]
00728EEC  83 F9 03                  CMP ECX,0x3
00728EEF  0F 8E 50 05 00 00         JLE 0x00729445
00728EF5  0F BF 33                  MOVSX ESI,word ptr [EBX]
00728EF8  89 75 C0                  MOV dword ptr [EBP + -0x40],ESI
00728EFB  89 B5 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],ESI
00728F01  0F BF 43 02               MOVSX EAX,word ptr [EBX + 0x2]
00728F05  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00728F08  89 85 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EAX
00728F0E  33 DB                     XOR EBX,EBX
00728F10  89 1D 14 71 85 00         MOV dword ptr [0x00857114],EBX
00728F16  89 1D 04 71 85 00         MOV dword ptr [0x00857104],EBX
00728F1C  33 C0                     XOR EAX,EAX
00728F1E  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
00728F21  8B D1                     MOV EDX,ECX
00728F23  C1 E9 02                  SHR ECX,0x2
00728F26  F3 AB                     STOSD.REP ES:EDI
00728F28  8B CA                     MOV ECX,EDX
00728F2A  83 E1 03                  AND ECX,0x3
00728F2D  F3 AA                     STOSB.REP ES:EDI
00728F2F  8B 3D 10 71 85 00         MOV EDI,dword ptr [0x00857110]
00728F35  A1 0C 71 85 00            MOV EAX,[0x0085710c]
00728F3A  0F BF 54 C7 FA            MOVSX EDX,word ptr [EDI + EAX*0x8 + -0x6]
00728F3F  33 C0                     XOR EAX,EAX
LAB_00728f41:
00728F41  0F BF 0C C7               MOVSX ECX,word ptr [EDI + EAX*0x8]
00728F45  39 8D 68 FF FF FF         CMP dword ptr [EBP + 0xffffff68],ECX
00728F4B  7E 06                     JLE 0x00728f53
00728F4D  89 8D 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],ECX
LAB_00728f53:
00728F53  3B F1                     CMP ESI,ECX
00728F55  7D 05                     JGE 0x00728f5c
00728F57  8B F1                     MOV ESI,ECX
00728F59  89 75 C0                  MOV dword ptr [EBP + -0x40],ESI
LAB_00728f5c:
00728F5C  0F BF 4C C7 02            MOVSX ECX,word ptr [EDI + EAX*0x8 + 0x2]
00728F61  3B CA                     CMP ECX,EDX
00728F63  75 0B                     JNZ 0x00728f70
00728F65  40                        INC EAX
00728F66  3B 05 0C 71 85 00         CMP EAX,dword ptr [0x0085710c]
00728F6C  7C D3                     JL 0x00728f41
00728F6E  33 C0                     XOR EAX,EAX
LAB_00728f70:
00728F70  8D 34 C7                  LEA ESI,[EDI + EAX*0x8]
00728F73  0F BF 16                  MOVSX EDX,word ptr [ESI]
00728F76  0F BF 7E 02               MOVSX EDI,word ptr [ESI + 0x2]
00728F7A  89 BD 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EDI
00728F80  8B DF                     MOV EBX,EDI
00728F82  8B C8                     MOV ECX,EAX
LAB_00728f84:
00728F84  49                        DEC ECX
00728F85  79 07                     JNS 0x00728f8e
00728F87  8B 0D 0C 71 85 00         MOV ECX,dword ptr [0x0085710c]
00728F8D  49                        DEC ECX
LAB_00728f8e:
00728F8E  3B C8                     CMP ECX,EAX
00728F90  74 0F                     JZ 0x00728fa1
00728F92  8B 1D 10 71 85 00         MOV EBX,dword ptr [0x00857110]
00728F98  0F BF 5C CB 02            MOVSX EBX,word ptr [EBX + ECX*0x8 + 0x2]
00728F9D  3B DF                     CMP EBX,EDI
00728F9F  74 E3                     JZ 0x00728f84
LAB_00728fa1:
00728FA1  C7 45 B0 00 00 00 00      MOV dword ptr [EBP + -0x50],0x0
00728FA8  C7 85 7C FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff7c],0x0
00728FB2  C7 45 D8 00 00 00 00      MOV dword ptr [EBP + -0x28],0x0
00728FB9  C7 45 BC FF FF FF 7F      MOV dword ptr [EBP + -0x44],0x7fffffff
00728FC0  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
00728FC3  89 75 A4                  MOV dword ptr [EBP + -0x5c],ESI
00728FC6  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
LAB_00728fcd:
00728FCD  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
00728FD0  41                        INC ECX
00728FD1  89 4D C4                  MOV dword ptr [EBP + -0x3c],ECX
00728FD4  3B 0D 0C 71 85 00         CMP ECX,dword ptr [0x0085710c]
00728FDA  7C 20                     JL 0x00728ffc
00728FDC  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00728FDF  85 C9                     TEST ECX,ECX
00728FE1  75 50                     JNZ 0x00729033
00728FE3  C7 45 E4 01 00 00 00      MOV dword ptr [EBP + -0x1c],0x1
00728FEA  8B 35 10 71 85 00         MOV ESI,dword ptr [0x00857110]
00728FF0  89 75 A4                  MOV dword ptr [EBP + -0x5c],ESI
00728FF3  C7 45 C4 00 00 00 00      MOV dword ptr [EBP + -0x3c],0x0
00728FFA  EB 09                     JMP 0x00729005
LAB_00728ffc:
00728FFC  8B 75 A4                  MOV ESI,dword ptr [EBP + -0x5c]
00728FFF  83 C6 08                  ADD ESI,0x8
00729002  89 75 A4                  MOV dword ptr [EBP + -0x5c],ESI
LAB_00729005:
00729005  0F BF 0E                  MOVSX ECX,word ptr [ESI]
00729008  89 4D 8C                  MOV dword ptr [EBP + -0x74],ECX
0072900B  0F BF 76 02               MOVSX ESI,word ptr [ESI + 0x2]
0072900F  89 B5 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],ESI
00729015  39 8D 68 FF FF FF         CMP dword ptr [EBP + 0xffffff68],ECX
0072901B  7E 06                     JLE 0x00729023
0072901D  89 8D 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],ECX
LAB_00729023:
00729023  39 4D C0                  CMP dword ptr [EBP + -0x40],ECX
00729026  7D 03                     JGE 0x0072902b
00729028  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
LAB_0072902b:
0072902B  39 BD 6C FF FF FF         CMP dword ptr [EBP + 0xffffff6c],EDI
00729031  74 9A                     JZ 0x00728fcd
LAB_00729033:
00729033  3B FB                     CMP EDI,EBX
00729035  0F 8E 97 00 00 00         JLE 0x007290d2
0072903B  3B BD 6C FF FF FF         CMP EDI,dword ptr [EBP + 0xffffff6c]
00729041  0F 8E 89 00 00 00         JLE 0x007290d0
00729047  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0072904A  8A 0C 08                  MOV CL,byte ptr [EAX + ECX*0x1]
0072904D  F6 C1 01                  TEST CL,0x1
00729050  75 7E                     JNZ 0x007290d0
00729052  80 C9 01                  OR CL,0x1
00729055  8B 75 E0                  MOV ESI,dword ptr [EBP + -0x20]
00729058  88 0C 30                  MOV byte ptr [EAX + ESI*0x1],CL
0072905B  8D 70 FF                  LEA ESI,[EAX + -0x1]
0072905E  85 F6                     TEST ESI,ESI
00729060  7D 07                     JGE 0x00729069
00729062  8B 35 0C 71 85 00         MOV ESI,dword ptr [0x0085710c]
00729068  4E                        DEC ESI
LAB_00729069:
00729069  8B 1D 10 71 85 00         MOV EBX,dword ptr [0x00857110]
0072906F  0F BF 1C F3               MOVSX EBX,word ptr [EBX + ESI*0x8]
00729073  89 5D A0                  MOV dword ptr [EBP + -0x60],EBX
00729076  8B 1D 10 71 85 00         MOV EBX,dword ptr [0x00857110]
0072907C  0F BF 74 F3 02            MOVSX ESI,word ptr [EBX + ESI*0x8 + 0x2]
00729081  2B 55 A0                  SUB EDX,dword ptr [EBP + -0x60]
00729084  8B 9D 6C FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff6c]
0072908A  2B DE                     SUB EBX,ESI
0072908C  0F AF D3                  IMUL EDX,EBX
0072908F  8B DF                     MOV EBX,EDI
00729091  2B DE                     SUB EBX,ESI
00729093  8B 75 8C                  MOV ESI,dword ptr [EBP + -0x74]
00729096  2B 75 A0                  SUB ESI,dword ptr [EBP + -0x60]
00729099  0F AF DE                  IMUL EBX,ESI
0072909C  2B DA                     SUB EBX,EDX
0072909E  89 5D C8                  MOV dword ptr [EBP + -0x38],EBX
007290A1  79 14                     JNS 0x007290b7
007290A3  80 C9 04                  OR CL,0x4
007290A6  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
007290A9  88 0C 10                  MOV byte ptr [EAX + EDX*0x1],CL
007290AC  FF 45 D8                  INC dword ptr [EBP + -0x28]
007290AF  39 45 BC                  CMP dword ptr [EBP + -0x44],EAX
007290B2  7E 03                     JLE 0x007290b7
007290B4  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
LAB_007290b7:
007290B7  FF 45 B0                  INC dword ptr [EBP + -0x50]
007290BA  39 7D B4                  CMP dword ptr [EBP + -0x4c],EDI
007290BD  0F 8D A9 00 00 00         JGE 0x0072916c
007290C3  89 7D B4                  MOV dword ptr [EBP + -0x4c],EDI
007290C6  A3 04 71 85 00            MOV [0x00857104],EAX
007290CB  E9 9C 00 00 00            JMP 0x0072916c
LAB_007290d0:
007290D0  3B FB                     CMP EDI,EBX
LAB_007290d2:
007290D2  0F 8D 94 00 00 00         JGE 0x0072916c
007290D8  3B BD 6C FF FF FF         CMP EDI,dword ptr [EBP + 0xffffff6c]
007290DE  0F 8D 88 00 00 00         JGE 0x0072916c
007290E4  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
007290E7  8A 0C 08                  MOV CL,byte ptr [EAX + ECX*0x1]
007290EA  F6 C1 02                  TEST CL,0x2
007290ED  75 7D                     JNZ 0x0072916c
007290EF  80 C9 02                  OR CL,0x2
007290F2  8B 75 E0                  MOV ESI,dword ptr [EBP + -0x20]
007290F5  88 0C 30                  MOV byte ptr [EAX + ESI*0x1],CL
007290F8  8D 70 FF                  LEA ESI,[EAX + -0x1]
007290FB  85 F6                     TEST ESI,ESI
007290FD  7D 07                     JGE 0x00729106
007290FF  8B 35 0C 71 85 00         MOV ESI,dword ptr [0x0085710c]
00729105  4E                        DEC ESI
LAB_00729106:
00729106  8B 1D 10 71 85 00         MOV EBX,dword ptr [0x00857110]
0072910C  0F BF 3C F3               MOVSX EDI,word ptr [EBX + ESI*0x8]
00729110  89 7D A0                  MOV dword ptr [EBP + -0x60],EDI
00729113  0F BF 74 F3 02            MOVSX ESI,word ptr [EBX + ESI*0x8 + 0x2]
00729118  2B D7                     SUB EDX,EDI
0072911A  8B BD 6C FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff6c]
00729120  2B FE                     SUB EDI,ESI
00729122  0F AF D7                  IMUL EDX,EDI
00729125  8B BD 74 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff74]
0072912B  8B DF                     MOV EBX,EDI
0072912D  2B DE                     SUB EBX,ESI
0072912F  8B 75 8C                  MOV ESI,dword ptr [EBP + -0x74]
00729132  2B 75 A0                  SUB ESI,dword ptr [EBP + -0x60]
00729135  0F AF DE                  IMUL EBX,ESI
00729138  2B DA                     SUB EBX,EDX
0072913A  89 5D C8                  MOV dword ptr [EBP + -0x38],EBX
0072913D  79 14                     JNS 0x00729153
0072913F  80 C9 04                  OR CL,0x4
00729142  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
00729145  88 0C 10                  MOV byte ptr [EAX + EDX*0x1],CL
00729148  FF 45 D8                  INC dword ptr [EBP + -0x28]
0072914B  39 45 BC                  CMP dword ptr [EBP + -0x44],EAX
0072914E  7E 03                     JLE 0x00729153
00729150  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
LAB_00729153:
00729153  FF 85 7C FF FF FF         INC dword ptr [EBP + 0xffffff7c]
00729159  39 BD 64 FF FF FF         CMP dword ptr [EBP + 0xffffff64],EDI
0072915F  7E 0B                     JLE 0x0072916c
00729161  89 BD 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EDI
00729167  A3 14 71 85 00            MOV [0x00857114],EAX
LAB_0072916c:
0072916C  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0072916F  85 C0                     TEST EAX,EAX
00729171  0F 84 B5 02 00 00         JZ 0x0072942c
00729177  A1 0C 71 85 00            MOV EAX,[0x0085710c]
0072917C  8B C8                     MOV ECX,EAX
0072917E  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
00729181  BA 01 00 00 00            MOV EDX,0x1
00729186  39 55 B0                  CMP dword ptr [EBP + -0x50],EDX
00729189  7F 08                     JG 0x00729193
0072918B  39 95 7C FF FF FF         CMP dword ptr [EBP + 0xffffff7c],EDX
00729191  7E 0C                     JLE 0x0072919f
LAB_00729193:
00729193  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
00729196  3B D0                     CMP EDX,EAX
00729198  7D 05                     JGE 0x0072919f
0072919A  8B CA                     MOV ECX,EDX
0072919C  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
LAB_0072919f:
0072919F  3B C8                     CMP ECX,EAX
007291A1  0F 8D 51 03 00 00         JGE 0x007294f8
007291A7  8B 5D D0                  MOV EBX,dword ptr [EBP + -0x30]
007291AA  A1 10 71 85 00            MOV EAX,[0x00857110]
007291AF  0F BF 4C D8 02            MOVSX ECX,word ptr [EAX + EBX*0x8 + 0x2]
007291B4  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
007291B7  F6 04 13 01               TEST byte ptr [EBX + EDX*0x1],0x1
007291BB  74 7D                     JZ 0x0072923a
007291BD  33 D2                     XOR EDX,EDX
007291BF  89 55 88                  MOV dword ptr [EBP + -0x78],EDX
007291C2  8B F3                     MOV ESI,EBX
007291C4  8B 3D 0C 71 85 00         MOV EDI,dword ptr [0x0085710c]
LAB_007291ca:
007291CA  46                        INC ESI
007291CB  3B F7                     CMP ESI,EDI
007291CD  7C 02                     JL 0x007291d1
007291CF  33 F6                     XOR ESI,ESI
LAB_007291d1:
007291D1  3B F3                     CMP ESI,EBX
007291D3  74 20                     JZ 0x007291f5
007291D5  FF 45 88                  INC dword ptr [EBP + -0x78]
007291D8  A1 10 71 85 00            MOV EAX,[0x00857110]
007291DD  0F BF 44 F0 02            MOVSX EAX,word ptr [EAX + ESI*0x8 + 0x2]
007291E2  3B C8                     CMP ECX,EAX
007291E4  74 09                     JZ 0x007291ef
007291E6  BA 01 00 00 00            MOV EDX,0x1
007291EB  7C 0A                     JL 0x007291f7
007291ED  75 DB                     JNZ 0x007291ca
LAB_007291ef:
007291EF  85 D2                     TEST EDX,EDX
007291F1  75 04                     JNZ 0x007291f7
007291F3  EB D5                     JMP 0x007291ca
LAB_007291f5:
007291F5  8B F7                     MOV ESI,EDI
LAB_007291f7:
007291F7  3B F7                     CMP ESI,EDI
007291F9  0F 8D A7 00 00 00         JGE 0x007292a6
007291FF  33 FF                     XOR EDI,EDI
00729201  33 DB                     XOR EBX,EBX
00729203  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
LAB_00729206:
00729206  4A                        DEC EDX
00729207  79 07                     JNS 0x00729210
00729209  8B 15 0C 71 85 00         MOV EDX,dword ptr [0x0085710c]
0072920F  4A                        DEC EDX
LAB_00729210:
00729210  3B 55 D0                  CMP EDX,dword ptr [EBP + -0x30]
00729213  74 1C                     JZ 0x00729231
00729215  47                        INC EDI
00729216  A1 10 71 85 00            MOV EAX,[0x00857110]
0072921B  0F BF 44 D0 02            MOVSX EAX,word ptr [EAX + EDX*0x8 + 0x2]
00729220  3B C8                     CMP ECX,EAX
00729222  74 09                     JZ 0x0072922d
00729224  BB 01 00 00 00            MOV EBX,0x1
00729229  7C 06                     JL 0x00729231
0072922B  75 D9                     JNZ 0x00729206
LAB_0072922d:
0072922D  85 DB                     TEST EBX,EBX
0072922F  74 D5                     JZ 0x00729206
LAB_00729231:
00729231  3B 7D 88                  CMP EDI,dword ptr [EBP + -0x78]
00729234  7D 70                     JGE 0x007292a6
00729236  8B F2                     MOV ESI,EDX
00729238  EB 6C                     JMP 0x007292a6
LAB_0072923a:
0072923A  33 D2                     XOR EDX,EDX
0072923C  8B F3                     MOV ESI,EBX
LAB_0072923e:
0072923E  46                        INC ESI
0072923F  A1 0C 71 85 00            MOV EAX,[0x0085710c]
00729244  3B F0                     CMP ESI,EAX
00729246  7C 02                     JL 0x0072924a
00729248  33 F6                     XOR ESI,ESI
LAB_0072924a:
0072924A  3B F3                     CMP ESI,EBX
0072924C  74 1D                     JZ 0x0072926b
0072924E  A1 10 71 85 00            MOV EAX,[0x00857110]
00729253  0F BF 44 F0 02            MOVSX EAX,word ptr [EAX + ESI*0x8 + 0x2]
00729258  3B C8                     CMP ECX,EAX
0072925A  74 09                     JZ 0x00729265
0072925C  BA 01 00 00 00            MOV EDX,0x1
00729261  7F 0A                     JG 0x0072926d
00729263  75 D9                     JNZ 0x0072923e
LAB_00729265:
00729265  85 D2                     TEST EDX,EDX
00729267  75 04                     JNZ 0x0072926d
00729269  EB D3                     JMP 0x0072923e
LAB_0072926b:
0072926B  8B F0                     MOV ESI,EAX
LAB_0072926d:
0072926D  3B 35 0C 71 85 00         CMP ESI,dword ptr [0x0085710c]
00729273  0F 8D 7F 02 00 00         JGE 0x007294f8
00729279  33 FF                     XOR EDI,EDI
0072927B  8B D3                     MOV EDX,EBX
LAB_0072927d:
0072927D  4A                        DEC EDX
0072927E  79 07                     JNS 0x00729287
00729280  8B 15 0C 71 85 00         MOV EDX,dword ptr [0x0085710c]
00729286  4A                        DEC EDX
LAB_00729287:
00729287  3B D3                     CMP EDX,EBX
00729289  74 1B                     JZ 0x007292a6
0072928B  A1 10 71 85 00            MOV EAX,[0x00857110]
00729290  0F BF 44 F0 02            MOVSX EAX,word ptr [EAX + ESI*0x8 + 0x2]
00729295  3B C8                     CMP ECX,EAX
00729297  74 09                     JZ 0x007292a2
00729299  BF 01 00 00 00            MOV EDI,0x1
0072929E  7F 06                     JG 0x007292a6
007292A0  75 DB                     JNZ 0x0072927d
LAB_007292a2:
007292A2  85 FF                     TEST EDI,EDI
007292A4  74 D7                     JZ 0x0072927d
LAB_007292a6:
007292A6  3B 35 0C 71 85 00         CMP ESI,dword ptr [0x0085710c]
007292AC  0F 8D 46 02 00 00         JGE 0x007294f8
007292B2  8B BD 70 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff70]
007292B8  3B 7D 98                  CMP EDI,dword ptr [EBP + -0x68]
007292BB  7C 47                     JL 0x00729304
007292BD  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
007292C4  8B 0D 0C 71 85 00         MOV ECX,dword ptr [0x0085710c]
007292CA  8D 04 CD 00 00 00 00      LEA EAX,[ECX*0x8 + 0x0]
007292D1  83 C0 03                  ADD EAX,0x3
007292D4  24 FC                     AND AL,0xfc
007292D6  E8 65 47 00 00            CALL 0x0072da40
007292DB  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
007292DE  8B C4                     MOV EAX,ESP
007292E0  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
007292E3  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
007292EA  8B 95 78 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff78]
007292F0  89 44 FA 04               MOV dword ptr [EDX + EDI*0x8 + 0x4],EAX
007292F4  89 7D 98                  MOV dword ptr [EBP + -0x68],EDI
007292F7  EB 15                     JMP 0x0072930e
LAB_00729304:
00729304  8B 85 78 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff78]
0072930A  8B 44 F8 04               MOV EAX,dword ptr [EAX + EDI*0x8 + 0x4]
LAB_0072930e:
0072930E  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
00729311  33 D2                     XOR EDX,EDX
LAB_00729313:
00729313  8B 3D 10 71 85 00         MOV EDI,dword ptr [0x00857110]
00729319  8D 3C CF                  LEA EDI,[EDI + ECX*0x8]
0072931C  8B 1F                     MOV EBX,dword ptr [EDI]
0072931E  89 18                     MOV dword ptr [EAX],EBX
00729320  8B 7F 04                  MOV EDI,dword ptr [EDI + 0x4]
00729323  89 78 04                  MOV dword ptr [EAX + 0x4],EDI
00729326  83 C0 08                  ADD EAX,0x8
00729329  42                        INC EDX
0072932A  3B CE                     CMP ECX,ESI
0072932C  0F 85 E6 00 00 00         JNZ 0x00729418
00729332  8B 9D 78 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff78]
00729338  8B BD 70 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff70]
0072933E  89 14 FB                  MOV dword ptr [EBX + EDI*0x8],EDX
00729341  47                        INC EDI
00729342  89 BD 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EDI
00729348  3B 7D 98                  CMP EDI,dword ptr [EBP + -0x68]
0072934B  7C 41                     JL 0x0072938e
0072934D  C7 45 FC 02 00 00 00      MOV dword ptr [EBP + -0x4],0x2
00729354  8B 0D 0C 71 85 00         MOV ECX,dword ptr [0x0085710c]
0072935A  8D 04 CD 00 00 00 00      LEA EAX,[ECX*0x8 + 0x0]
00729361  83 C0 03                  ADD EAX,0x3
00729364  24 FC                     AND AL,0xfc
00729366  E8 D5 46 00 00            CALL 0x0072da40
0072936B  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0072936E  8B C4                     MOV EAX,ESP
00729370  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
00729373  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
0072937A  89 44 FB 04               MOV dword ptr [EBX + EDI*0x8 + 0x4],EAX
0072937E  89 7D 98                  MOV dword ptr [EBP + -0x68],EDI
00729381  EB 0F                     JMP 0x00729392
LAB_0072938e:
0072938E  8B 44 FB 04               MOV EAX,dword ptr [EBX + EDI*0x8 + 0x4]
LAB_00729392:
00729392  8B CE                     MOV ECX,ESI
00729394  8B 15 10 71 85 00         MOV EDX,dword ptr [0x00857110]
0072939A  8D 14 F2                  LEA EDX,[EDX + ESI*0x8]
0072939D  8B 3A                     MOV EDI,dword ptr [EDX]
0072939F  89 38                     MOV dword ptr [EAX],EDI
007293A1  8B 52 04                  MOV EDX,dword ptr [EDX + 0x4]
007293A4  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
007293A7  83 C0 08                  ADD EAX,0x8
007293AA  BA 01 00 00 00            MOV EDX,0x1
007293AF  8B 7D D0                  MOV EDI,dword ptr [EBP + -0x30]
007293B2  3B F7                     CMP ESI,EDI
007293B4  74 26                     JZ 0x007293dc
LAB_007293b6:
007293B6  41                        INC ECX
007293B7  3B 0D 0C 71 85 00         CMP ECX,dword ptr [0x0085710c]
007293BD  7C 02                     JL 0x007293c1
007293BF  33 C9                     XOR ECX,ECX
LAB_007293c1:
007293C1  8B 35 10 71 85 00         MOV ESI,dword ptr [0x00857110]
007293C7  8D 34 CE                  LEA ESI,[ESI + ECX*0x8]
007293CA  8B 1E                     MOV EBX,dword ptr [ESI]
007293CC  89 18                     MOV dword ptr [EAX],EBX
007293CE  8B 76 04                  MOV ESI,dword ptr [ESI + 0x4]
007293D1  89 70 04                  MOV dword ptr [EAX + 0x4],ESI
007293D4  83 C0 08                  ADD EAX,0x8
007293D7  42                        INC EDX
007293D8  3B CF                     CMP ECX,EDI
007293DA  75 DA                     JNZ 0x007293b6
LAB_007293dc:
007293DC  89 15 0C 71 85 00         MOV dword ptr [0x0085710c],EDX
007293E2  8D 0C D5 00 00 00 00      LEA ECX,[EDX*0x8 + 0x0]
007293E9  8B 85 78 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff78]
007293EF  8B 95 70 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff70]
007293F5  8B 74 D0 04               MOV ESI,dword ptr [EAX + EDX*0x8 + 0x4]
007293F9  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
007293FC  8B F8                     MOV EDI,EAX
007293FE  8B D1                     MOV EDX,ECX
00729400  C1 E9 02                  SHR ECX,0x2
00729403  F3 A5                     MOVSD.REP ES:EDI,ESI
00729405  8B CA                     MOV ECX,EDX
00729407  83 E1 03                  AND ECX,0x3
0072940A  F3 A4                     MOVSB.REP ES:EDI,ESI
0072940C  A3 10 71 85 00            MOV [0x00857110],EAX
00729411  8B D8                     MOV EBX,EAX
00729413  E9 CE FA FF FF            JMP 0x00728ee6
LAB_00729418:
00729418  41                        INC ECX
00729419  3B 0D 0C 71 85 00         CMP ECX,dword ptr [0x0085710c]
0072941F  0F 8C EE FE FF FF         JL 0x00729313
00729425  33 C9                     XOR ECX,ECX
00729427  E9 E7 FE FF FF            JMP 0x00729313
LAB_0072942c:
0072942C  8B DF                     MOV EBX,EDI
0072942E  8B 55 8C                  MOV EDX,dword ptr [EBP + -0x74]
00729431  8B BD 6C FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff6c]
00729437  89 BD 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EDI
0072943D  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
00729440  E9 88 FB FF FF            JMP 0x00728fcd
LAB_00729445:
00729445  0F BF 0B                  MOVSX ECX,word ptr [EBX]
00729448  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
0072944B  8B F1                     MOV ESI,ECX
0072944D  89 B5 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],ESI
00729453  0F BF 53 02               MOVSX EDX,word ptr [EBX + 0x2]
00729457  89 55 B4                  MOV dword ptr [EBP + -0x4c],EDX
0072945A  8B FA                     MOV EDI,EDX
0072945C  89 BD 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EDI
00729462  33 C0                     XOR EAX,EAX
00729464  A3 14 71 85 00            MOV [0x00857114],EAX
00729469  A3 04 71 85 00            MOV [0x00857104],EAX
0072946E  0F BF 43 08               MOVSX EAX,word ptr [EBX + 0x8]
00729472  3B C8                     CMP ECX,EAX
00729474  7E 08                     JLE 0x0072947e
00729476  8B F0                     MOV ESI,EAX
00729478  89 B5 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],ESI
LAB_0072947e:
0072947E  7D 05                     JGE 0x00729485
00729480  8B C8                     MOV ECX,EAX
00729482  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
LAB_00729485:
00729485  0F BF 43 0A               MOVSX EAX,word ptr [EBX + 0xa]
00729489  3B D0                     CMP EDX,EAX
0072948B  7E 12                     JLE 0x0072949f
0072948D  8B F8                     MOV EDI,EAX
0072948F  89 BD 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EDI
00729495  C7 05 14 71 85 00 01 00 00 00  MOV dword ptr [0x00857114],0x1
LAB_0072949f:
0072949F  0F BF 43 0A               MOVSX EAX,word ptr [EBX + 0xa]
007294A3  3B D0                     CMP EDX,EAX
007294A5  7D 0F                     JGE 0x007294b6
007294A7  8B D0                     MOV EDX,EAX
007294A9  89 55 B4                  MOV dword ptr [EBP + -0x4c],EDX
007294AC  C7 05 04 71 85 00 01 00 00 00  MOV dword ptr [0x00857104],0x1
LAB_007294b6:
007294B6  0F BF 43 10               MOVSX EAX,word ptr [EBX + 0x10]
007294BA  3B F0                     CMP ESI,EAX
007294BC  7E 06                     JLE 0x007294c4
007294BE  89 85 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EAX
LAB_007294c4:
007294C4  3B C8                     CMP ECX,EAX
007294C6  7D 03                     JGE 0x007294cb
007294C8  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
LAB_007294cb:
007294CB  0F BF 43 12               MOVSX EAX,word ptr [EBX + 0x12]
007294CF  3B F8                     CMP EDI,EAX
007294D1  7E 10                     JLE 0x007294e3
007294D3  89 85 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EAX
007294D9  C7 05 14 71 85 00 02 00 00 00  MOV dword ptr [0x00857114],0x2
LAB_007294e3:
007294E3  0F BF 43 12               MOVSX EAX,word ptr [EBX + 0x12]
007294E7  3B D0                     CMP EDX,EAX
007294E9  7D 0D                     JGE 0x007294f8
007294EB  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
007294EE  C7 05 04 71 85 00 02 00 00 00  MOV dword ptr [0x00857104],0x2
LAB_007294f8:
007294F8  83 3D 0C 71 85 00 03      CMP dword ptr [0x0085710c],0x3
007294FF  7C 70                     JL 0x00729571
00729501  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00729504  85 C0                     TEST EAX,EAX
00729506  74 52                     JZ 0x0072955a
00729508  8B 85 68 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff68]
0072950E  8B 8D 50 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff50]
00729514  3B 41 30                  CMP EAX,dword ptr [ECX + 0x30]
00729517  7C 2E                     JL 0x00729547
00729519  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
0072951C  3B 51 38                  CMP EDX,dword ptr [ECX + 0x38]
0072951F  7D 26                     JGE 0x00729547
00729521  8B 85 64 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff64]
00729527  3B 41 34                  CMP EAX,dword ptr [ECX + 0x34]
0072952A  7C 1B                     JL 0x00729547
0072952C  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
0072952F  3B 51 3C                  CMP EDX,dword ptr [ECX + 0x3c]
00729532  7D 13                     JGE 0x00729547
00729534  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00729537  50                        PUSH EAX
00729538  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0072953B  52                        PUSH EDX
0072953C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072953F  50                        PUSH EAX
00729540  E8 FB F0 FF FF            CALL 0x00728640
00729545  EB 2A                     JMP 0x00729571
LAB_00729547:
00729547  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
0072954A  52                        PUSH EDX
0072954B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0072954E  50                        PUSH EAX
0072954F  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00729552  52                        PUSH EDX
00729553  E8 48 F3 FF FF            CALL 0x007288a0
00729558  EB 17                     JMP 0x00729571
LAB_0072955a:
0072955A  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0072955D  50                        PUSH EAX
0072955E  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00729561  51                        PUSH ECX
00729562  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00729565  52                        PUSH EDX
00729566  8B 8D 50 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff50]
0072956C  E8 0F F5 FF FF            CALL 0x00728a80
LAB_00729571:
00729571  8B 85 70 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff70]
00729577  48                        DEC EAX
00729578  89 85 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EAX
0072957E  78 50                     JS 0x007295d0
00729580  8B B5 78 FF FF FF         MOV ESI,dword ptr [EBP + 0xffffff78]
00729586  8B D0                     MOV EDX,EAX
00729588  8B 04 D6                  MOV EAX,dword ptr [ESI + EDX*0x8]
0072958B  A3 0C 71 85 00            MOV [0x0085710c],EAX
00729590  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
00729597  8B 74 D6 04               MOV ESI,dword ptr [ESI + EDX*0x8 + 0x4]
0072959B  8B 5D D4                  MOV EBX,dword ptr [EBP + -0x2c]
0072959E  8B FB                     MOV EDI,EBX
007295A0  8B C1                     MOV EAX,ECX
007295A2  C1 E9 02                  SHR ECX,0x2
007295A5  F3 A5                     MOVSD.REP ES:EDI,ESI
007295A7  8B C8                     MOV ECX,EAX
007295A9  83 E1 03                  AND ECX,0x3
007295AC  F3 A4                     MOVSB.REP ES:EDI,ESI
007295AE  89 1D 10 71 85 00         MOV dword ptr [0x00857110],EBX
007295B4  E9 2D F9 FF FF            JMP 0x00728ee6
