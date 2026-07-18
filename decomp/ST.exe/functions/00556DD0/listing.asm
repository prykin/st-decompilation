FUN_00556dd0:
00556DD0  55                        PUSH EBP
00556DD1  8B EC                     MOV EBP,ESP
00556DD3  83 EC 78                  SUB ESP,0x78
00556DD6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00556DD9  53                        PUSH EBX
00556DDA  BB 01 00 00 00            MOV EBX,0x1
00556DDF  56                        PUSH ESI
00556DE0  8A 50 6C                  MOV DL,byte ptr [EAX + 0x6c]
00556DE3  57                        PUSH EDI
00556DE4  84 D3                     TEST BL,DL
00556DE6  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
00556DE9  75 0E                     JNZ 0x00556df9
00556DEB  8B 15 1E 73 80 00         MOV EDX,dword ptr [0x0080731e]
00556DF1  85 D2                     TEST EDX,EDX
00556DF3  0F 84 B6 07 00 00         JZ 0x005575af
LAB_00556df9:
00556DF9  8B 51 24                  MOV EDX,dword ptr [ECX + 0x24]
00556DFC  85 D2                     TEST EDX,EDX
00556DFE  0F 84 AB 07 00 00         JZ 0x005575af
00556E04  85 C0                     TEST EAX,EAX
00556E06  0F 84 A3 07 00 00         JZ 0x005575af
00556E0C  A1 70 67 80 00            MOV EAX,[0x00806770]
00556E11  85 C0                     TEST EAX,EAX
00556E13  0F 84 96 07 00 00         JZ 0x005575af
00556E19  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00556E1E  8D 55 8C                  LEA EDX,[EBP + -0x74]
00556E21  8D 4D 88                  LEA ECX,[EBP + -0x78]
00556E24  6A 00                     PUSH 0x0
00556E26  52                        PUSH EDX
00556E27  89 45 88                  MOV dword ptr [EBP + -0x78],EAX
00556E2A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00556E30  E8 BB 69 1D 00            CALL 0x0072d7f0
00556E35  8B F0                     MOV ESI,EAX
00556E37  83 C4 08                  ADD ESP,0x8
00556E3A  85 F6                     TEST ESI,ESI
00556E3C  0F 85 22 07 00 00         JNZ 0x00557564
00556E42  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00556E45  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
00556E48  8B 4E 20                  MOV ECX,dword ptr [ESI + 0x20]
00556E4B  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00556E4E  50                        PUSH EAX
00556E4F  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00556E52  51                        PUSH ECX
00556E53  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
00556E56  52                        PUSH EDX
00556E57  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
00556E5A  50                        PUSH EAX
00556E5B  51                        PUSH ECX
00556E5C  52                        PUSH EDX
00556E5D  E8 AB 60 15 00            CALL 0x006acf0d
00556E62  83 C4 18                  ADD ESP,0x18
00556E65  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00556E68  85 C0                     TEST EAX,EAX
00556E6A  0F 85 2B 02 00 00         JNZ 0x0055709b
00556E70  8B 56 60                  MOV EDX,dword ptr [ESI + 0x60]
00556E73  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
00556E76  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
00556E79  85 D2                     TEST EDX,EDX
00556E7B  7E 3C                     JLE 0x00556eb9
00556E7D  8D 3C 10                  LEA EDI,[EAX + EDX*0x1]
00556E80  2B C2                     SUB EAX,EDX
00556E82  8B D8                     MOV EBX,EAX
00556E84  79 22                     JNS 0x00556ea8
00556E86  8B 41 1C                  MOV EAX,dword ptr [ECX + 0x1c]
00556E89  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00556E8F  05 39 30 00 00            ADD EAX,0x3039
LAB_00556e94:
00556E94  2B FB                     SUB EDI,EBX
00556E96  89 41 1C                  MOV dword ptr [ECX + 0x1c],EAX
00556E99  47                        INC EDI
00556E9A  33 D2                     XOR EDX,EDX
00556E9C  C1 E8 10                  SHR EAX,0x10
00556E9F  F7 F7                     DIV EDI
00556EA1  03 D3                     ADD EDX,EBX
00556EA3  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00556EA6  EB 14                     JMP 0x00556ebc
LAB_00556ea8:
00556EA8  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
00556EAB  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00556EB1  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00556EB7  EB DB                     JMP 0x00556e94
LAB_00556eb9:
00556EB9  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_00556ebc:
00556EBC  8B 56 5C                  MOV EDX,dword ptr [ESI + 0x5c]
00556EBF  85 D2                     TEST EDX,EDX
00556EC1  7E 4B                     JLE 0x00556f0e
00556EC3  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
00556EC6  8D 3C 10                  LEA EDI,[EAX + EDX*0x1]
00556EC9  2B C2                     SUB EAX,EDX
00556ECB  8B D8                     MOV EBX,EAX
00556ECD  79 20                     JNS 0x00556eef
00556ECF  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
00556ED2  2B FB                     SUB EDI,EBX
00556ED4  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00556EDA  47                        INC EDI
00556EDB  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00556EE1  33 D2                     XOR EDX,EDX
00556EE3  89 41 1C                  MOV dword ptr [ECX + 0x1c],EAX
00556EE6  C1 E8 10                  SHR EAX,0x10
00556EE9  F7 F7                     DIV EDI
00556EEB  03 D3                     ADD EDX,EBX
00556EED  EB 22                     JMP 0x00556f11
LAB_00556eef:
00556EEF  8B 41 1C                  MOV EAX,dword ptr [ECX + 0x1c]
00556EF2  2B FB                     SUB EDI,EBX
00556EF4  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00556EFA  05 39 30 00 00            ADD EAX,0x3039
00556EFF  47                        INC EDI
00556F00  89 41 1C                  MOV dword ptr [ECX + 0x1c],EAX
00556F03  33 D2                     XOR EDX,EDX
00556F05  C1 E8 10                  SHR EAX,0x10
00556F08  F7 F7                     DIV EDI
00556F0A  03 D3                     ADD EDX,EBX
00556F0C  EB 03                     JMP 0x00556f11
LAB_00556f0e:
00556F0E  8B 56 38                  MOV EDX,dword ptr [ESI + 0x38]
LAB_00556f11:
00556F11  8B 46 34                  MOV EAX,dword ptr [ESI + 0x34]
00556F14  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00556F17  8B 56 58                  MOV EDX,dword ptr [ESI + 0x58]
00556F1A  85 D2                     TEST EDX,EDX
00556F1C  7E 3C                     JLE 0x00556f5a
00556F1E  8D 3C 10                  LEA EDI,[EAX + EDX*0x1]
00556F21  2B C2                     SUB EAX,EDX
00556F23  8B D8                     MOV EBX,EAX
00556F25  79 22                     JNS 0x00556f49
00556F27  8B 41 1C                  MOV EAX,dword ptr [ECX + 0x1c]
00556F2A  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00556F30  05 39 30 00 00            ADD EAX,0x3039
LAB_00556f35:
00556F35  2B FB                     SUB EDI,EBX
00556F37  89 41 1C                  MOV dword ptr [ECX + 0x1c],EAX
00556F3A  47                        INC EDI
00556F3B  33 D2                     XOR EDX,EDX
00556F3D  C1 E8 10                  SHR EAX,0x10
00556F40  F7 F7                     DIV EDI
00556F42  03 D3                     ADD EDX,EBX
00556F44  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
00556F47  EB 14                     JMP 0x00556f5d
LAB_00556f49:
00556F49  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
00556F4C  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00556F52  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00556F58  EB DB                     JMP 0x00556f35
LAB_00556f5a:
00556F5A  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_00556f5d:
00556F5D  8B 56 54                  MOV EDX,dword ptr [ESI + 0x54]
00556F60  85 D2                     TEST EDX,EDX
00556F62  7E 4B                     JLE 0x00556faf
00556F64  8B 46 30                  MOV EAX,dword ptr [ESI + 0x30]
00556F67  8D 3C 10                  LEA EDI,[EAX + EDX*0x1]
00556F6A  2B C2                     SUB EAX,EDX
00556F6C  8B D8                     MOV EBX,EAX
00556F6E  79 20                     JNS 0x00556f90
00556F70  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
00556F73  2B FB                     SUB EDI,EBX
00556F75  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00556F7B  47                        INC EDI
00556F7C  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00556F82  33 D2                     XOR EDX,EDX
00556F84  89 41 1C                  MOV dword ptr [ECX + 0x1c],EAX
00556F87  C1 E8 10                  SHR EAX,0x10
00556F8A  F7 F7                     DIV EDI
00556F8C  03 D3                     ADD EDX,EBX
00556F8E  EB 22                     JMP 0x00556fb2
LAB_00556f90:
00556F90  8B 41 1C                  MOV EAX,dword ptr [ECX + 0x1c]
00556F93  2B FB                     SUB EDI,EBX
00556F95  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00556F9B  05 39 30 00 00            ADD EAX,0x3039
00556FA0  47                        INC EDI
00556FA1  89 41 1C                  MOV dword ptr [ECX + 0x1c],EAX
00556FA4  33 D2                     XOR EDX,EDX
00556FA6  C1 E8 10                  SHR EAX,0x10
00556FA9  F7 F7                     DIV EDI
00556FAB  03 D3                     ADD EDX,EBX
00556FAD  EB 03                     JMP 0x00556fb2
LAB_00556faf:
00556FAF  8B 56 30                  MOV EDX,dword ptr [ESI + 0x30]
LAB_00556fb2:
00556FB2  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
00556FB5  8B 56 50                  MOV EDX,dword ptr [ESI + 0x50]
00556FB8  85 D2                     TEST EDX,EDX
00556FBA  7E 45                     JLE 0x00557001
00556FBC  8B 46 2C                  MOV EAX,dword ptr [ESI + 0x2c]
00556FBF  8D 3C 10                  LEA EDI,[EAX + EDX*0x1]
00556FC2  2B C2                     SUB EAX,EDX
00556FC4  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00556FC7  79 27                     JNS 0x00556ff0
00556FC9  8B 41 1C                  MOV EAX,dword ptr [ECX + 0x1c]
00556FCC  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00556FD2  05 39 30 00 00            ADD EAX,0x3039
LAB_00556fd7:
00556FD7  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00556FDA  89 41 1C                  MOV dword ptr [ECX + 0x1c],EAX
00556FDD  2B FA                     SUB EDI,EDX
00556FDF  33 D2                     XOR EDX,EDX
00556FE1  47                        INC EDI
00556FE2  C1 E8 10                  SHR EAX,0x10
00556FE5  F7 F7                     DIV EDI
00556FE7  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00556FEA  8B DA                     MOV EBX,EDX
00556FEC  03 D8                     ADD EBX,EAX
00556FEE  EB 14                     JMP 0x00557004
LAB_00556ff0:
00556FF0  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
00556FF3  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00556FF9  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00556FFF  EB D6                     JMP 0x00556fd7
LAB_00557001:
00557001  8B 5E 2C                  MOV EBX,dword ptr [ESI + 0x2c]
LAB_00557004:
00557004  8B 56 4C                  MOV EDX,dword ptr [ESI + 0x4c]
00557007  85 D2                     TEST EDX,EDX
00557009  7E 41                     JLE 0x0055704c
0055700B  8B 46 28                  MOV EAX,dword ptr [ESI + 0x28]
0055700E  8D 3C 10                  LEA EDI,[EAX + EDX*0x1]
00557011  2B C2                     SUB EAX,EDX
00557013  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00557016  79 23                     JNS 0x0055703b
00557018  8B 41 1C                  MOV EAX,dword ptr [ECX + 0x1c]
0055701B  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00557021  05 39 30 00 00            ADD EAX,0x3039
LAB_00557026:
00557026  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00557029  89 41 1C                  MOV dword ptr [ECX + 0x1c],EAX
0055702C  2B FA                     SUB EDI,EDX
0055702E  33 D2                     XOR EDX,EDX
00557030  47                        INC EDI
00557031  C1 E8 10                  SHR EAX,0x10
00557034  F7 F7                     DIV EDI
00557036  03 55 F8                  ADD EDX,dword ptr [EBP + -0x8]
00557039  EB 14                     JMP 0x0055704f
LAB_0055703b:
0055703B  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
0055703E  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00557044  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0055704A  EB DA                     JMP 0x00557026
LAB_0055704c:
0055704C  8B 56 28                  MOV EDX,dword ptr [ESI + 0x28]
LAB_0055704f:
0055704F  8B 46 6C                  MOV EAX,dword ptr [ESI + 0x6c]
00557052  50                        PUSH EAX
00557053  8B 46 68                  MOV EAX,dword ptr [ESI + 0x68]
00557056  50                        PUSH EAX
00557057  8B 46 64                  MOV EAX,dword ptr [ESI + 0x64]
0055705A  50                        PUSH EAX
0055705B  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0055705E  50                        PUSH EAX
0055705F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00557062  50                        PUSH EAX
00557063  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00557066  50                        PUSH EAX
00557067  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0055706A  50                        PUSH EAX
0055706B  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
0055706E  53                        PUSH EBX
0055706F  52                        PUSH EDX
00557070  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
00557073  52                        PUSH EDX
00557074  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
00557077  50                        PUSH EAX
00557078  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
0055707B  52                        PUSH EDX
0055707C  8B 16                     MOV EDX,dword ptr [ESI]
0055707E  6A 00                     PUSH 0x0
00557080  50                        PUSH EAX
00557081  52                        PUSH EDX
00557082  E8 AC A3 EA FF            CALL 0x00401433
LAB_00557087:
00557087  8B 4D 88                  MOV ECX,dword ptr [EBP + -0x78]
0055708A  33 C0                     XOR EAX,EAX
0055708C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00557092  5F                        POP EDI
00557093  5E                        POP ESI
00557094  5B                        POP EBX
00557095  8B E5                     MOV ESP,EBP
00557097  5D                        POP EBP
00557098  C2 04 00                  RET 0x4
LAB_0055709b:
0055709B  8B 06                     MOV EAX,dword ptr [ESI]
0055709D  8B 3D 60 67 80 00         MOV EDI,dword ptr [0x00806760]
005570A3  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
005570A6  39 1C CD 0C 90 7C 00      CMP dword ptr [ECX*0x8 + 0x7c900c],EBX
005570AD  74 06                     JZ 0x005570b5
005570AF  8B 3D 70 67 80 00         MOV EDI,dword ptr [0x00806770]
LAB_005570b5:
005570B5  53                        PUSH EBX
005570B6  6A 1D                     PUSH 0x1d
005570B8  50                        PUSH EAX
005570B9  E8 00 DC EA FF            CALL 0x00404cbe
005570BE  83 C4 04                  ADD ESP,0x4
005570C1  50                        PUSH EAX
005570C2  57                        PUSH EDI
005570C3  E8 98 FD 1B 00            CALL 0x00716e60
005570C8  8B F8                     MOV EDI,EAX
005570CA  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
005570CD  83 C4 10                  ADD ESP,0x10
005570D0  89 7D CC                  MOV dword ptr [EBP + -0x34],EDI
005570D3  85 C0                     TEST EAX,EAX
005570D5  0F 8D EA 00 00 00         JGE 0x005571c5
005570DB  8B 4E 60                  MOV ECX,dword ptr [ESI + 0x60]
005570DE  B8 67 66 66 66            MOV EAX,0x66666667
005570E3  0F AF CF                  IMUL ECX,EDI
005570E6  0F AF CF                  IMUL ECX,EDI
005570E9  F7 E9                     IMUL ECX
005570EB  8B CA                     MOV ECX,EDX
005570ED  B8 67 66 66 66            MOV EAX,0x66666667
005570F2  C1 F9 03                  SAR ECX,0x3
005570F5  8B D1                     MOV EDX,ECX
005570F7  C1 EA 1F                  SHR EDX,0x1f
005570FA  03 CA                     ADD ECX,EDX
005570FC  8B 56 54                  MOV EDX,dword ptr [ESI + 0x54]
005570FF  0F AF D7                  IMUL EDX,EDI
00557102  F7 EA                     IMUL EDX
00557104  C1 FA 02                  SAR EDX,0x2
00557107  8B C2                     MOV EAX,EDX
00557109  03 D1                     ADD EDX,ECX
0055710B  8B 4E 48                  MOV ECX,dword ptr [ESI + 0x48]
0055710E  C1 E8 1F                  SHR EAX,0x1f
00557111  03 C2                     ADD EAX,EDX
00557113  03 C1                     ADD EAX,ECX
00557115  8B 4E 5C                  MOV ECX,dword ptr [ESI + 0x5c]
00557118  0F AF CF                  IMUL ECX,EDI
0055711B  0F AF CF                  IMUL ECX,EDI
0055711E  50                        PUSH EAX
0055711F  B8 67 66 66 66            MOV EAX,0x66666667
00557124  F7 E9                     IMUL ECX
00557126  8B CA                     MOV ECX,EDX
00557128  B8 67 66 66 66            MOV EAX,0x66666667
0055712D  C1 F9 03                  SAR ECX,0x3
00557130  8B D1                     MOV EDX,ECX
00557132  C1 EA 1F                  SHR EDX,0x1f
00557135  03 CA                     ADD ECX,EDX
00557137  8B 56 50                  MOV EDX,dword ptr [ESI + 0x50]
0055713A  0F AF D7                  IMUL EDX,EDI
0055713D  F7 EA                     IMUL EDX
0055713F  C1 FA 02                  SAR EDX,0x2
00557142  8B C2                     MOV EAX,EDX
00557144  03 D1                     ADD EDX,ECX
00557146  8B 4E 58                  MOV ECX,dword ptr [ESI + 0x58]
00557149  0F AF CF                  IMUL ECX,EDI
0055714C  0F AF CF                  IMUL ECX,EDI
0055714F  C1 E8 1F                  SHR EAX,0x1f
00557152  03 C2                     ADD EAX,EDX
00557154  8B 56 44                  MOV EDX,dword ptr [ESI + 0x44]
00557157  03 C2                     ADD EAX,EDX
00557159  50                        PUSH EAX
0055715A  B8 67 66 66 66            MOV EAX,0x66666667
0055715F  F7 E9                     IMUL ECX
00557161  8B CA                     MOV ECX,EDX
00557163  B8 67 66 66 66            MOV EAX,0x66666667
00557168  C1 F9 03                  SAR ECX,0x3
0055716B  8B D1                     MOV EDX,ECX
0055716D  C1 EA 1F                  SHR EDX,0x1f
00557170  03 CA                     ADD ECX,EDX
00557172  8B 56 4C                  MOV EDX,dword ptr [ESI + 0x4c]
00557175  0F AF D7                  IMUL EDX,EDI
00557178  F7 EA                     IMUL EDX
0055717A  C1 FA 02                  SAR EDX,0x2
0055717D  8B C2                     MOV EAX,EDX
0055717F  03 D1                     ADD EDX,ECX
00557181  C1 E8 1F                  SHR EAX,0x1f
00557184  03 C2                     ADD EAX,EDX
00557186  8B 56 40                  MOV EDX,dword ptr [ESI + 0x40]
00557189  03 C2                     ADD EAX,EDX
0055718B  50                        PUSH EAX
0055718C  6A 00                     PUSH 0x0
0055718E  6A 00                     PUSH 0x0
00557190  6A 00                     PUSH 0x0
00557192  E8 76 5D 15 00            CALL 0x006acf0d
00557197  8B 0E                     MOV ECX,dword ptr [ESI]
00557199  83 C4 18                  ADD ESP,0x18
0055719C  99                        CDQ
0055719D  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
005571A0  2B C2                     SUB EAX,EDX
005571A2  D1 F8                     SAR EAX,0x1
005571A4  8B 0C CD 08 90 7C 00      MOV ECX,dword ptr [ECX*0x8 + 0x7c9008]
005571AB  3B C1                     CMP EAX,ECX
005571AD  7E 0E                     JLE 0x005571bd
005571AF  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005571B2  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005571B5  C1 E0 02                  SHL EAX,0x2
005571B8  99                        CDQ
005571B9  F7 F9                     IDIV ECX
005571BB  EB 05                     JMP 0x005571c2
LAB_005571bd:
005571BD  B8 64 00 00 00            MOV EAX,0x64
LAB_005571c2:
005571C2  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
LAB_005571c5:
005571C5  8B 7D D0                  MOV EDI,dword ptr [EBP + -0x30]
005571C8  C7 45 D4 00 00 00 00      MOV dword ptr [EBP + -0x2c],0x0
LAB_005571cf:
005571CF  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005571D2  8B 06                     MOV EAX,dword ptr [ESI]
005571D4  85 C9                     TEST ECX,ECX
005571D6  7F 0C                     JG 0x005571e4
005571D8  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
005571DB  8B 04 D5 08 90 7C 00      MOV EAX,dword ptr [EDX*0x8 + 0x7c9008]
005571E2  EB 16                     JMP 0x005571fa
LAB_005571e4:
005571E4  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
005571E7  8B 04 C5 08 90 7C 00      MOV EAX,dword ptr [EAX*0x8 + 0x7c9008]
005571EE  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005571F1  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005571F4  C1 E0 02                  SHL EAX,0x2
005571F7  99                        CDQ
005571F8  F7 F9                     IDIV ECX
LAB_005571fa:
005571FA  0F AF 45 D4               IMUL EAX,dword ptr [EBP + -0x2c]
005571FE  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00557201  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00557204  3B C1                     CMP EAX,ECX
00557206  0F 8D 7B FE FF FF         JGE 0x00557087
0055720C  8B 56 60                  MOV EDX,dword ptr [ESI + 0x60]
0055720F  85 D2                     TEST EDX,EDX
00557211  7E 3F                     JLE 0x00557252
00557213  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
00557216  8D 0C 10                  LEA ECX,[EAX + EDX*0x1]
00557219  2B C2                     SUB EAX,EDX
0055721B  8B D8                     MOV EBX,EAX
0055721D  79 23                     JNS 0x00557242
0055721F  8B 57 1C                  MOV EDX,dword ptr [EDI + 0x1c]
00557222  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00557228  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
LAB_0055722e:
0055722E  2B CB                     SUB ECX,EBX
00557230  89 47 1C                  MOV dword ptr [EDI + 0x1c],EAX
00557233  41                        INC ECX
00557234  33 D2                     XOR EDX,EDX
00557236  C1 E8 10                  SHR EAX,0x10
00557239  F7 F1                     DIV ECX
0055723B  03 D3                     ADD EDX,EBX
0055723D  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
00557240  EB 16                     JMP 0x00557258
LAB_00557242:
00557242  8B 47 1C                  MOV EAX,dword ptr [EDI + 0x1c]
00557245  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0055724B  05 39 30 00 00            ADD EAX,0x3039
00557250  EB DC                     JMP 0x0055722e
LAB_00557252:
00557252  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
00557255  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
LAB_00557258:
00557258  8B 56 5C                  MOV EDX,dword ptr [ESI + 0x5c]
0055725B  85 D2                     TEST EDX,EDX
0055725D  7E 3F                     JLE 0x0055729e
0055725F  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
00557262  8D 0C 10                  LEA ECX,[EAX + EDX*0x1]
00557265  2B C2                     SUB EAX,EDX
00557267  8B D8                     MOV EBX,EAX
00557269  79 23                     JNS 0x0055728e
0055726B  8B 57 1C                  MOV EDX,dword ptr [EDI + 0x1c]
0055726E  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00557274  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
LAB_0055727a:
0055727A  2B CB                     SUB ECX,EBX
0055727C  89 47 1C                  MOV dword ptr [EDI + 0x1c],EAX
0055727F  41                        INC ECX
00557280  33 D2                     XOR EDX,EDX
00557282  C1 E8 10                  SHR EAX,0x10
00557285  F7 F1                     DIV ECX
00557287  03 D3                     ADD EDX,EBX
00557289  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0055728C  EB 16                     JMP 0x005572a4
LAB_0055728e:
0055728E  8B 47 1C                  MOV EAX,dword ptr [EDI + 0x1c]
00557291  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00557297  05 39 30 00 00            ADD EAX,0x3039
0055729C  EB DC                     JMP 0x0055727a
LAB_0055729e:
0055729E  8B 4E 38                  MOV ECX,dword ptr [ESI + 0x38]
005572A1  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
LAB_005572a4:
005572A4  8B 56 58                  MOV EDX,dword ptr [ESI + 0x58]
005572A7  85 D2                     TEST EDX,EDX
005572A9  7E 3F                     JLE 0x005572ea
005572AB  8B 46 34                  MOV EAX,dword ptr [ESI + 0x34]
005572AE  8D 0C 10                  LEA ECX,[EAX + EDX*0x1]
005572B1  2B C2                     SUB EAX,EDX
005572B3  8B D8                     MOV EBX,EAX
005572B5  79 23                     JNS 0x005572da
005572B7  8B 57 1C                  MOV EDX,dword ptr [EDI + 0x1c]
005572BA  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
005572C0  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
LAB_005572c6:
005572C6  2B CB                     SUB ECX,EBX
005572C8  89 47 1C                  MOV dword ptr [EDI + 0x1c],EAX
005572CB  41                        INC ECX
005572CC  33 D2                     XOR EDX,EDX
005572CE  C1 E8 10                  SHR EAX,0x10
005572D1  F7 F1                     DIV ECX
005572D3  03 D3                     ADD EDX,EBX
005572D5  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
005572D8  EB 16                     JMP 0x005572f0
LAB_005572da:
005572DA  8B 47 1C                  MOV EAX,dword ptr [EDI + 0x1c]
005572DD  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
005572E3  05 39 30 00 00            ADD EAX,0x3039
005572E8  EB DC                     JMP 0x005572c6
LAB_005572ea:
005572EA  8B 4E 34                  MOV ECX,dword ptr [ESI + 0x34]
005572ED  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
LAB_005572f0:
005572F0  8B 56 54                  MOV EDX,dword ptr [ESI + 0x54]
005572F3  85 D2                     TEST EDX,EDX
005572F5  7E 3F                     JLE 0x00557336
005572F7  8B 46 30                  MOV EAX,dword ptr [ESI + 0x30]
005572FA  8D 0C 10                  LEA ECX,[EAX + EDX*0x1]
005572FD  2B C2                     SUB EAX,EDX
005572FF  8B D8                     MOV EBX,EAX
00557301  79 23                     JNS 0x00557326
00557303  8B 57 1C                  MOV EDX,dword ptr [EDI + 0x1c]
00557306  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0055730C  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
LAB_00557312:
00557312  2B CB                     SUB ECX,EBX
00557314  89 47 1C                  MOV dword ptr [EDI + 0x1c],EAX
00557317  41                        INC ECX
00557318  33 D2                     XOR EDX,EDX
0055731A  C1 E8 10                  SHR EAX,0x10
0055731D  F7 F1                     DIV ECX
0055731F  03 D3                     ADD EDX,EBX
00557321  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
00557324  EB 16                     JMP 0x0055733c
LAB_00557326:
00557326  8B 47 1C                  MOV EAX,dword ptr [EDI + 0x1c]
00557329  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0055732F  05 39 30 00 00            ADD EAX,0x3039
00557334  EB DC                     JMP 0x00557312
LAB_00557336:
00557336  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
00557339  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
LAB_0055733c:
0055733C  8B 56 50                  MOV EDX,dword ptr [ESI + 0x50]
0055733F  85 D2                     TEST EDX,EDX
00557341  7E 3F                     JLE 0x00557382
00557343  8B 46 2C                  MOV EAX,dword ptr [ESI + 0x2c]
00557346  8D 0C 10                  LEA ECX,[EAX + EDX*0x1]
00557349  2B C2                     SUB EAX,EDX
0055734B  8B D8                     MOV EBX,EAX
0055734D  79 23                     JNS 0x00557372
0055734F  8B 57 1C                  MOV EDX,dword ptr [EDI + 0x1c]
00557352  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00557358  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
LAB_0055735e:
0055735E  2B CB                     SUB ECX,EBX
00557360  89 47 1C                  MOV dword ptr [EDI + 0x1c],EAX
00557363  41                        INC ECX
00557364  33 D2                     XOR EDX,EDX
00557366  C1 E8 10                  SHR EAX,0x10
00557369  F7 F1                     DIV ECX
0055736B  03 D3                     ADD EDX,EBX
0055736D  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
00557370  EB 16                     JMP 0x00557388
LAB_00557372:
00557372  8B 47 1C                  MOV EAX,dword ptr [EDI + 0x1c]
00557375  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0055737B  05 39 30 00 00            ADD EAX,0x3039
00557380  EB DC                     JMP 0x0055735e
LAB_00557382:
00557382  8B 4E 2C                  MOV ECX,dword ptr [ESI + 0x2c]
00557385  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
LAB_00557388:
00557388  8B 56 4C                  MOV EDX,dword ptr [ESI + 0x4c]
0055738B  85 D2                     TEST EDX,EDX
0055738D  7E 3F                     JLE 0x005573ce
0055738F  8B 46 28                  MOV EAX,dword ptr [ESI + 0x28]
00557392  8D 0C 10                  LEA ECX,[EAX + EDX*0x1]
00557395  2B C2                     SUB EAX,EDX
00557397  8B D8                     MOV EBX,EAX
00557399  79 23                     JNS 0x005573be
0055739B  8B 57 1C                  MOV EDX,dword ptr [EDI + 0x1c]
0055739E  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
005573A4  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
LAB_005573aa:
005573AA  2B CB                     SUB ECX,EBX
005573AC  89 47 1C                  MOV dword ptr [EDI + 0x1c],EAX
005573AF  41                        INC ECX
005573B0  33 D2                     XOR EDX,EDX
005573B2  C1 E8 10                  SHR EAX,0x10
005573B5  F7 F1                     DIV ECX
005573B7  03 D3                     ADD EDX,EBX
005573B9  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
005573BC  EB 16                     JMP 0x005573d4
LAB_005573be:
005573BE  8B 47 1C                  MOV EAX,dword ptr [EDI + 0x1c]
005573C1  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
005573C7  05 39 30 00 00            ADD EAX,0x3039
005573CC  EB DC                     JMP 0x005573aa
LAB_005573ce:
005573CE  8B 4E 28                  MOV ECX,dword ptr [ESI + 0x28]
005573D1  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
LAB_005573d4:
005573D4  8B 46 48                  MOV EAX,dword ptr [ESI + 0x48]
005573D7  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005573DA  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005573DD  85 C0                     TEST EAX,EAX
005573DF  7E 45                     JLE 0x00557426
005573E1  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
005573E4  8B 5E 24                  MOV EBX,dword ptr [ESI + 0x24]
005573E7  2B CA                     SUB ECX,EDX
005573E9  0F AF DA                  IMUL EBX,EDX
005573EC  0F AF C1                  IMUL EAX,ECX
005573EF  03 C3                     ADD EAX,EBX
005573F1  99                        CDQ
005573F2  F7 7D FC                  IDIV dword ptr [EBP + -0x4]
005573F5  8B 56 48                  MOV EDX,dword ptr [ESI + 0x48]
005573F8  8D 1C 10                  LEA EBX,[EAX + EDX*0x1]
005573FB  2B C2                     SUB EAX,EDX
005573FD  8B 57 1C                  MOV EDX,dword ptr [EDI + 0x1c]
00557400  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
00557403  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00557409  81 C2 39 30 00 00         ADD EDX,0x3039
0055740F  2B D8                     SUB EBX,EAX
00557411  8B C2                     MOV EAX,EDX
00557413  89 57 1C                  MOV dword ptr [EDI + 0x1c],EDX
00557416  43                        INC EBX
00557417  33 D2                     XOR EDX,EDX
00557419  C1 E8 10                  SHR EAX,0x10
0055741C  F7 F3                     DIV EBX
0055741E  03 55 D8                  ADD EDX,dword ptr [EBP + -0x28]
00557421  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
00557424  EB 17                     JMP 0x0055743d
LAB_00557426:
00557426  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00557429  8B 5E 24                  MOV EBX,dword ptr [ESI + 0x24]
0055742C  2B CA                     SUB ECX,EDX
0055742E  0F AF DA                  IMUL EBX,EDX
00557431  0F AF C1                  IMUL EAX,ECX
00557434  03 C3                     ADD EAX,EBX
00557436  99                        CDQ
00557437  F7 7D FC                  IDIV dword ptr [EBP + -0x4]
0055743A  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
LAB_0055743d:
0055743D  8B 46 44                  MOV EAX,dword ptr [ESI + 0x44]
00557440  85 C0                     TEST EAX,EAX
00557442  8B C1                     MOV EAX,ECX
00557444  7E 42                     JLE 0x00557488
00557446  8B 56 20                  MOV EDX,dword ptr [ESI + 0x20]
00557449  0F AF 46 14               IMUL EAX,dword ptr [ESI + 0x14]
0055744D  0F AF 55 F8               IMUL EDX,dword ptr [EBP + -0x8]
00557451  03 C2                     ADD EAX,EDX
00557453  99                        CDQ
00557454  F7 7D FC                  IDIV dword ptr [EBP + -0x4]
00557457  8B 56 44                  MOV EDX,dword ptr [ESI + 0x44]
0055745A  8D 1C 10                  LEA EBX,[EAX + EDX*0x1]
0055745D  2B C2                     SUB EAX,EDX
0055745F  8B D0                     MOV EDX,EAX
00557461  8B 47 1C                  MOV EAX,dword ptr [EDI + 0x1c]
00557464  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0055746A  05 39 30 00 00            ADD EAX,0x3039
0055746F  2B DA                     SUB EBX,EDX
00557471  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00557474  89 47 1C                  MOV dword ptr [EDI + 0x1c],EAX
00557477  43                        INC EBX
00557478  33 D2                     XOR EDX,EDX
0055747A  C1 E8 10                  SHR EAX,0x10
0055747D  F7 F3                     DIV EBX
0055747F  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00557482  8B DA                     MOV EBX,EDX
00557484  03 D8                     ADD EBX,EAX
00557486  EB 13                     JMP 0x0055749b
LAB_00557488:
00557488  8B 56 20                  MOV EDX,dword ptr [ESI + 0x20]
0055748B  0F AF 46 14               IMUL EAX,dword ptr [ESI + 0x14]
0055748F  0F AF 55 F8               IMUL EDX,dword ptr [EBP + -0x8]
00557493  03 C2                     ADD EAX,EDX
00557495  99                        CDQ
00557496  F7 7D FC                  IDIV dword ptr [EBP + -0x4]
00557499  8B D8                     MOV EBX,EAX
LAB_0055749b:
0055749B  8B 46 40                  MOV EAX,dword ptr [ESI + 0x40]
0055749E  85 C0                     TEST EAX,EAX
005574A0  8B C1                     MOV EAX,ECX
005574A2  7E 52                     JLE 0x005574f6
005574A4  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005574A7  0F AF 46 10               IMUL EAX,dword ptr [ESI + 0x10]
005574AB  0F AF 4E 1C               IMUL ECX,dword ptr [ESI + 0x1c]
005574AF  03 C1                     ADD EAX,ECX
005574B1  99                        CDQ
005574B2  F7 7D FC                  IDIV dword ptr [EBP + -0x4]
005574B5  8B 56 40                  MOV EDX,dword ptr [ESI + 0x40]
005574B8  8D 0C 10                  LEA ECX,[EAX + EDX*0x1]
005574BB  2B C2                     SUB EAX,EDX
005574BD  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005574C0  79 24                     JNS 0x005574e6
005574C2  8B 57 1C                  MOV EDX,dword ptr [EDI + 0x1c]
005574C5  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
005574CB  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
LAB_005574d1:
005574D1  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
005574D4  89 47 1C                  MOV dword ptr [EDI + 0x1c],EAX
005574D7  2B CA                     SUB ECX,EDX
005574D9  33 D2                     XOR EDX,EDX
005574DB  41                        INC ECX
005574DC  C1 E8 10                  SHR EAX,0x10
005574DF  F7 F1                     DIV ECX
005574E1  03 55 F4                  ADD EDX,dword ptr [EBP + -0xc]
005574E4  EB 23                     JMP 0x00557509
LAB_005574e6:
005574E6  8B 47 1C                  MOV EAX,dword ptr [EDI + 0x1c]
005574E9  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
005574EF  05 39 30 00 00            ADD EAX,0x3039
005574F4  EB DB                     JMP 0x005574d1
LAB_005574f6:
005574F6  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005574F9  0F AF 46 10               IMUL EAX,dword ptr [ESI + 0x10]
005574FD  0F AF 4E 1C               IMUL ECX,dword ptr [ESI + 0x1c]
00557501  03 C1                     ADD EAX,ECX
00557503  99                        CDQ
00557504  F7 7D FC                  IDIV dword ptr [EBP + -0x4]
00557507  8B D0                     MOV EDX,EAX
LAB_00557509:
00557509  8B 46 6C                  MOV EAX,dword ptr [ESI + 0x6c]
0055750C  8B 4E 68                  MOV ECX,dword ptr [ESI + 0x68]
0055750F  50                        PUSH EAX
00557510  8B 46 64                  MOV EAX,dword ptr [ESI + 0x64]
00557513  51                        PUSH ECX
00557514  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00557517  50                        PUSH EAX
00557518  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0055751B  51                        PUSH ECX
0055751C  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0055751F  50                        PUSH EAX
00557520  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00557523  51                        PUSH ECX
00557524  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00557527  50                        PUSH EAX
00557528  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0055752B  51                        PUSH ECX
0055752C  50                        PUSH EAX
0055752D  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00557530  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
00557533  0F AF 45 F8               IMUL EAX,dword ptr [EBP + -0x8]
00557537  0F AF 45 CC               IMUL EAX,dword ptr [EBP + -0x34]
0055753B  51                        PUSH ECX
0055753C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0055753F  53                        PUSH EBX
00557540  52                        PUSH EDX
00557541  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
00557544  99                        CDQ
00557545  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
00557548  C1 E1 02                  SHL ECX,0x2
0055754B  F7 F9                     IDIV ECX
0055754D  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
00557550  8B CF                     MOV ECX,EDI
00557552  50                        PUSH EAX
00557553  8B 06                     MOV EAX,dword ptr [ESI]
00557555  52                        PUSH EDX
00557556  50                        PUSH EAX
00557557  E8 D7 9E EA FF            CALL 0x00401433
0055755C  FF 45 D4                  INC dword ptr [EBP + -0x2c]
0055755F  E9 6B FC FF FF            JMP 0x005571cf
LAB_00557564:
00557564  8B 55 88                  MOV EDX,dword ptr [EBP + -0x78]
00557567  68 5C 92 7C 00            PUSH 0x7c925c
0055756C  68 CC 4C 7A 00            PUSH 0x7a4ccc
00557571  56                        PUSH ESI
00557572  6A 00                     PUSH 0x0
00557574  68 F7 01 00 00            PUSH 0x1f7
00557579  68 04 91 7C 00            PUSH 0x7c9104
0055757E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00557584  E8 47 5F 15 00            CALL 0x006ad4d0
00557589  83 C4 18                  ADD ESP,0x18
0055758C  85 C0                     TEST EAX,EAX
0055758E  74 01                     JZ 0x00557591
00557590  CC                        INT3
LAB_00557591:
00557591  68 F8 01 00 00            PUSH 0x1f8
00557596  68 04 91 7C 00            PUSH 0x7c9104
0055759B  6A 00                     PUSH 0x0
0055759D  56                        PUSH ESI
0055759E  E8 9D E8 14 00            CALL 0x006a5e40
005575A3  83 C8 FF                  OR EAX,0xffffffff
005575A6  5F                        POP EDI
005575A7  5E                        POP ESI
005575A8  5B                        POP EBX
005575A9  8B E5                     MOV ESP,EBP
005575AB  5D                        POP EBP
005575AC  C2 04 00                  RET 0x4
LAB_005575af:
005575AF  5F                        POP EDI
005575B0  5E                        POP ESI
005575B1  33 C0                     XOR EAX,EAX
005575B3  5B                        POP EBX
005575B4  8B E5                     MOV ESP,EBP
005575B6  5D                        POP EBP
005575B7  C2 04 00                  RET 0x4
