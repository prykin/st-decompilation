FUN_006b1d50:
006B1D50  55                        PUSH EBP
006B1D51  8B EC                     MOV EBP,ESP
006B1D53  81 EC 84 00 00 00         SUB ESP,0x84
006B1D59  53                        PUSH EBX
006B1D5A  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006B1D5D  56                        PUSH ESI
006B1D5E  57                        PUSH EDI
006B1D5F  8B BB A0 01 00 00         MOV EDI,dword ptr [EBX + 0x1a0]
006B1D65  8B 93 A8 01 00 00         MOV EDX,dword ptr [EBX + 0x1a8]
006B1D6B  33 C0                     XOR EAX,EAX
006B1D6D  8B F2                     MOV ESI,EDX
006B1D6F  3B C7                     CMP EAX,EDI
006B1D71  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006B1D74  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006B1D77  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
006B1D7A  7D 28                     JGE 0x006b1da4
LAB_006b1d7c:
006B1D7C  F7 06 01 80 00 00         TEST dword ptr [ESI],0x8001
006B1D82  74 0B                     JZ 0x006b1d8f
006B1D84  40                        INC EAX
006B1D85  81 C6 D4 00 00 00         ADD ESI,0xd4
006B1D8B  3B C7                     CMP EAX,EDI
006B1D8D  7C ED                     JL 0x006b1d7c
LAB_006b1d8f:
006B1D8F  3B C7                     CMP EAX,EDI
006B1D91  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006B1D94  7D 0E                     JGE 0x006b1da4
006B1D96  8B 46 40                  MOV EAX,dword ptr [ESI + 0x40]
006B1D99  3B C7                     CMP EAX,EDI
006B1D9B  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006B1D9E  0F 8C 38 01 00 00         JL 0x006b1edc
LAB_006b1da4:
006B1DA4  8B 83 A4 01 00 00         MOV EAX,dword ptr [EBX + 0x1a4]
006B1DAA  3B F8                     CMP EDI,EAX
006B1DAC  0F 8C E7 00 00 00         JL 0x006b1e99
006B1DB2  83 C0 0A                  ADD EAX,0xa
006B1DB5  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
006B1DB8  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
006B1DBB  D1 E1                     SHL ECX,0x1
006B1DBD  2B C8                     SUB ECX,EAX
006B1DBF  C1 E1 02                  SHL ECX,0x2
006B1DC2  51                        PUSH ECX
006B1DC3  52                        PUSH EDX
006B1DC4  E8 87 DD 00 00            CALL 0x006bfb50
006B1DC9  8B D0                     MOV EDX,EAX
006B1DCB  85 D2                     TEST EDX,EDX
006B1DCD  75 0C                     JNZ 0x006b1ddb
006B1DCF  C7 45 FC FE FF FF FF      MOV dword ptr [EBP + -0x4],0xfffffffe
006B1DD6  E9 07 02 00 00            JMP 0x006b1fe2
LAB_006b1ddb:
006B1DDB  8D 34 7F                  LEA ESI,[EDI + EDI*0x2]
006B1DDE  B9 12 02 00 00            MOV ECX,0x212
006B1DE3  33 C0                     XOR EAX,EAX
006B1DE5  89 93 A8 01 00 00         MOV dword ptr [EBX + 0x1a8],EDX
006B1DEB  8D 34 F6                  LEA ESI,[ESI + ESI*0x8]
006B1DEE  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006B1DF1  D1 E6                     SHL ESI,0x1
006B1DF3  2B F7                     SUB ESI,EDI
006B1DF5  8D 3C B2                  LEA EDI,[EDX + ESI*0x4]
006B1DF8  F3 AB                     STOSD.REP ES:EDI
006B1DFA  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006B1DFD  8B 83 A8 01 00 00         MOV EAX,dword ptr [EBX + 0x1a8]
006B1E03  85 C9                     TEST ECX,ECX
006B1E05  7E 23                     JLE 0x006b1e2a
006B1E07  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
LAB_006b1e0a:
006B1E0A  8B 50 40                  MOV EDX,dword ptr [EAX + 0x40]
006B1E0D  8B B3 B0 01 00 00         MOV ESI,dword ptr [EBX + 0x1b0]
006B1E13  89 04 96                  MOV dword ptr [ESI + EDX*0x4],EAX
006B1E16  8B 50 48                  MOV EDX,dword ptr [EAX + 0x48]
006B1E19  8B B3 AC 01 00 00         MOV ESI,dword ptr [EBX + 0x1ac]
006B1E1F  89 04 96                  MOV dword ptr [ESI + EDX*0x4],EAX
006B1E22  05 D4 00 00 00            ADD EAX,0xd4
006B1E27  49                        DEC ECX
006B1E28  75 E0                     JNZ 0x006b1e0a
LAB_006b1e2a:
006B1E2A  8B 83 A4 01 00 00         MOV EAX,dword ptr [EBX + 0x1a4]
006B1E30  8B 93 B0 01 00 00         MOV EDX,dword ptr [EBX + 0x1b0]
006B1E36  8D 0C 85 28 00 00 00      LEA ECX,[EAX*0x4 + 0x28]
006B1E3D  51                        PUSH ECX
006B1E3E  52                        PUSH EDX
006B1E3F  E8 0C DD 00 00            CALL 0x006bfb50
006B1E44  85 C0                     TEST EAX,EAX
006B1E46  75 0C                     JNZ 0x006b1e54
006B1E48  C7 45 FC FE FF FF FF      MOV dword ptr [EBP + -0x4],0xfffffffe
006B1E4F  E9 8E 01 00 00            JMP 0x006b1fe2
LAB_006b1e54:
006B1E54  8B 93 AC 01 00 00         MOV EDX,dword ptr [EBX + 0x1ac]
006B1E5A  89 83 B0 01 00 00         MOV dword ptr [EBX + 0x1b0],EAX
006B1E60  8B 83 A4 01 00 00         MOV EAX,dword ptr [EBX + 0x1a4]
006B1E66  8D 0C 85 28 00 00 00      LEA ECX,[EAX*0x4 + 0x28]
006B1E6D  51                        PUSH ECX
006B1E6E  52                        PUSH EDX
006B1E6F  E8 DC DC 00 00            CALL 0x006bfb50
006B1E74  85 C0                     TEST EAX,EAX
006B1E76  75 0C                     JNZ 0x006b1e84
006B1E78  C7 45 FC FE FF FF FF      MOV dword ptr [EBP + -0x4],0xfffffffe
006B1E7F  E9 5E 01 00 00            JMP 0x006b1fe2
LAB_006b1e84:
006B1E84  89 83 AC 01 00 00         MOV dword ptr [EBX + 0x1ac],EAX
006B1E8A  8B 83 A4 01 00 00         MOV EAX,dword ptr [EBX + 0x1a4]
006B1E90  83 C0 0A                  ADD EAX,0xa
006B1E93  89 83 A4 01 00 00         MOV dword ptr [EBX + 0x1a4],EAX
LAB_006b1e99:
006B1E99  8B 83 A0 01 00 00         MOV EAX,dword ptr [EBX + 0x1a0]
006B1E9F  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006B1EA2  8D 48 01                  LEA ECX,[EAX + 0x1]
006B1EA5  89 8B A0 01 00 00         MOV dword ptr [EBX + 0x1a0],ECX
006B1EAB  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
006B1EAE  8D 14 C9                  LEA EDX,[ECX + ECX*0x8]
006B1EB1  8B 8B A8 01 00 00         MOV ECX,dword ptr [EBX + 0x1a8]
006B1EB7  D1 E2                     SHL EDX,0x1
006B1EB9  2B D0                     SUB EDX,EAX
006B1EBB  8D 34 91                  LEA ESI,[ECX + EDX*0x4]
006B1EBE  8B 93 B0 01 00 00         MOV EDX,dword ptr [EBX + 0x1b0]
006B1EC4  89 34 82                  MOV dword ptr [EDX + EAX*0x4],ESI
006B1EC7  8B 8B AC 01 00 00         MOV ECX,dword ptr [EBX + 0x1ac]
006B1ECD  89 34 81                  MOV dword ptr [ECX + EAX*0x4],ESI
006B1ED0  89 46 48                  MOV dword ptr [ESI + 0x48],EAX
006B1ED3  C7 46 44 FF FF FF 7F      MOV dword ptr [ESI + 0x44],0x7fffffff
006B1EDA  EB 1D                     JMP 0x006b1ef9
LAB_006b1edc:
006B1EDC  8B 46 48                  MOV EAX,dword ptr [ESI + 0x48]
006B1EDF  8B 56 44                  MOV EDX,dword ptr [ESI + 0x44]
006B1EE2  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006B1EE5  B9 35 00 00 00            MOV ECX,0x35
006B1EEA  33 C0                     XOR EAX,EAX
006B1EEC  8B FE                     MOV EDI,ESI
006B1EEE  F3 AB                     STOSD.REP ES:EDI
006B1EF0  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006B1EF3  89 56 44                  MOV dword ptr [ESI + 0x44],EDX
006B1EF6  89 4E 48                  MOV dword ptr [ESI + 0x48],ECX
LAB_006b1ef9:
006B1EF9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B1EFC  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006B1EFF  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006B1F02  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006B1F05  89 46 40                  MOV dword ptr [ESI + 0x40],EAX
006B1F08  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006B1F0B  89 96 C8 00 00 00         MOV dword ptr [ESI + 0xc8],EDX
006B1F11  8B D0                     MOV EDX,EAX
006B1F13  89 4E 54                  MOV dword ptr [ESI + 0x54],ECX
006B1F16  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
006B1F19  81 E2 10 80 00 FF         AND EDX,0xff008010
006B1F1F  89 BE CC 00 00 00         MOV dword ptr [ESI + 0xcc],EDI
006B1F25  81 CA 10 80 00 00         OR EDX,0x8010
006B1F2B  C7 46 4C FE FF FF FF      MOV dword ptr [ESI + 0x4c],0xfffffffe
006B1F32  85 C9                     TEST ECX,ECX
006B1F34  89 16                     MOV dword ptr [ESI],EDX
006B1F36  74 07                     JZ 0x006b1f3f
006B1F38  8B CA                     MOV ECX,EDX
006B1F3A  80 CD 02                  OR CH,0x2
006B1F3D  89 0E                     MOV dword ptr [ESI],ECX
LAB_006b1f3f:
006B1F3F  85 FF                     TEST EDI,EDI
006B1F41  74 6D                     JZ 0x006b1fb0
006B1F43  A9 00 00 00 60            TEST EAX,0x60000000
006B1F48  74 66                     JZ 0x006b1fb0
006B1F4A  A9 00 00 00 40            TEST EAX,0x40000000
006B1F4F  74 0E                     JZ 0x006b1f5f
006B1F51  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
006B1F54  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
006B1F57  89 45 88                  MOV dword ptr [EBP + -0x78],EAX
006B1F5A  89 4D 84                  MOV dword ptr [EBP + -0x7c],ECX
006B1F5D  EB 25                     JMP 0x006b1f84
LAB_006b1f5f:
006B1F5F  8B 17                     MOV EDX,dword ptr [EDI]
006B1F61  8D 85 7C FF FF FF         LEA EAX,[EBP + 0xffffff7c]
006B1F67  50                        PUSH EAX
006B1F68  57                        PUSH EDI
006B1F69  C7 85 7C FF FF FF 7C 00 00 00  MOV dword ptr [EBP + 0xffffff7c],0x7c
006B1F73  C7 45 80 06 00 00 00      MOV dword ptr [EBP + -0x80],0x6
006B1F7A  FF 52 58                  CALL dword ptr [EDX + 0x58]
006B1F7D  85 C0                     TEST EAX,EAX
006B1F7F  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006B1F82  75 5E                     JNZ 0x006b1fe2
LAB_006b1f84:
006B1F84  8B 4D 88                  MOV ECX,dword ptr [EBP + -0x78]
006B1F87  89 4E 38                  MOV dword ptr [ESI + 0x38],ECX
006B1F8A  8B 55 88                  MOV EDX,dword ptr [EBP + -0x78]
006B1F8D  89 56 30                  MOV dword ptr [ESI + 0x30],EDX
006B1F90  8B 45 88                  MOV EAX,dword ptr [EBP + -0x78]
006B1F93  89 46 20                  MOV dword ptr [ESI + 0x20],EAX
006B1F96  8B 4D 88                  MOV ECX,dword ptr [EBP + -0x78]
006B1F99  89 4E 0C                  MOV dword ptr [ESI + 0xc],ECX
006B1F9C  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
006B1F9F  33 D2                     XOR EDX,EDX
006B1FA1  F7 75 14                  DIV dword ptr [EBP + 0x14]
006B1FA4  89 46 3C                  MOV dword ptr [ESI + 0x3c],EAX
006B1FA7  89 46 34                  MOV dword ptr [ESI + 0x34],EAX
006B1FAA  89 46 24                  MOV dword ptr [ESI + 0x24],EAX
006B1FAD  89 46 10                  MOV dword ptr [ESI + 0x10],EAX
LAB_006b1fb0:
006B1FB0  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006B1FB3  85 C9                     TEST ECX,ECX
006B1FB5  7E 0F                     JLE 0x006b1fc6
006B1FB7  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006B1FBA  85 C0                     TEST EAX,EAX
006B1FBC  7E 08                     JLE 0x006b1fc6
006B1FBE  89 4E 38                  MOV dword ptr [ESI + 0x38],ECX
006B1FC1  89 46 3C                  MOV dword ptr [ESI + 0x3c],EAX
006B1FC4  EB 0A                     JMP 0x006b1fd0
LAB_006b1fc6:
006B1FC6  85 FF                     TEST EDI,EDI
006B1FC8  74 06                     JZ 0x006b1fd0
006B1FCA  56                        PUSH ESI
006B1FCB  E8 10 DC 01 00            CALL 0x006cfbe0
LAB_006b1fd0:
006B1FD0  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006B1FD3  85 C0                     TEST EAX,EAX
006B1FD5  7C 0B                     JL 0x006b1fe2
006B1FD7  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006B1FDA  50                        PUSH EAX
006B1FDB  52                        PUSH EDX
006B1FDC  53                        PUSH EBX
006B1FDD  E8 3E 00 00 00            CALL 0x006b2020
LAB_006b1fe2:
006B1FE2  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B1FE5  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006B1FE8  5F                        POP EDI
006B1FE9  5E                        POP ESI
006B1FEA  89 08                     MOV dword ptr [EAX],ECX
006B1FEC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006B1FEF  85 C0                     TEST EAX,EAX
006B1FF1  5B                        POP EBX
006B1FF2  74 20                     JZ 0x006b2014
006B1FF4  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006B1FFA  68 22 03 00 00            PUSH 0x322
006B1FFF  68 C0 DA 7E 00            PUSH 0x7edac0
006B2004  52                        PUSH EDX
006B2005  50                        PUSH EAX
006B2006  E8 35 3E FF FF            CALL 0x006a5e40
006B200B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006B200E  8B E5                     MOV ESP,EBP
006B2010  5D                        POP EBP
006B2011  C2 28 00                  RET 0x28
LAB_006b2014:
006B2014  33 C0                     XOR EAX,EAX
006B2016  8B E5                     MOV ESP,EBP
006B2018  5D                        POP EBP
006B2019  C2 28 00                  RET 0x28
