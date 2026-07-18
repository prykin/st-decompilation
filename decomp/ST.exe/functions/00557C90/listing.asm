VisibleClassTy::Init:
00557C90  55                        PUSH EBP
00557C91  8B EC                     MOV EBP,ESP
00557C93  83 EC 50                  SUB ESP,0x50
00557C96  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00557C9B  53                        PUSH EBX
00557C9C  56                        PUSH ESI
00557C9D  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00557CA0  33 F6                     XOR ESI,ESI
00557CA2  57                        PUSH EDI
00557CA3  8D 55 B4                  LEA EDX,[EBP + -0x4c]
00557CA6  8D 4D B0                  LEA ECX,[EBP + -0x50]
00557CA9  56                        PUSH ESI
00557CAA  52                        PUSH EDX
00557CAB  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00557CAE  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
00557CB1  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00557CB7  E8 34 5B 1D 00            CALL 0x0072d7f0
00557CBC  8B F8                     MOV EDI,EAX
00557CBE  83 C4 08                  ADD ESP,0x8
00557CC1  3B FE                     CMP EDI,ESI
00557CC3  0F 85 11 03 00 00         JNZ 0x00557fda
00557CC9  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
00557CCC  8B 87 14 01 00 00         MOV EAX,dword ptr [EDI + 0x114]
00557CD2  F7 D8                     NEG EAX
00557CD4  1B C0                     SBB EAX,EAX
00557CD6  25 65 37 40 00            AND EAX,0x403765
00557CDB  A3 50 2A 80 00            MOV [0x00802a50],EAX
00557CE0  8B 87 14 01 00 00         MOV EAX,dword ptr [EDI + 0x114]
00557CE6  3B C6                     CMP EAX,ESI
00557CE8  0F 84 C2 02 00 00         JZ 0x00557fb0
00557CEE  8D 9F D8 01 00 00         LEA EBX,[EDI + 0x1d8]
LAB_00557cf4:
00557CF4  8B 0D C8 AE 79 00         MOV ECX,dword ptr [0x0079aec8]
00557CFA  6A 01                     PUSH 0x1
00557CFC  6A 00                     PUSH 0x0
00557CFE  6A 1C                     PUSH 0x1c
00557D00  56                        PUSH ESI
00557D01  6A 01                     PUSH 0x1
00557D03  51                        PUSH ECX
00557D04  E8 F7 AE 19 00            CALL 0x006f2c00
00557D09  8B 15 70 67 80 00         MOV EDX,dword ptr [0x00806770]
00557D0F  83 C4 0C                  ADD ESP,0xc
00557D12  50                        PUSH EAX
00557D13  52                        PUSH EDX
00557D14  E8 17 37 1B 00            CALL 0x0070b430
00557D19  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00557D1C  83 C4 14                  ADD ESP,0x14
00557D1F  0F BF 48 09               MOVSX ECX,word ptr [EAX + 0x9]
00557D23  89 0C B5 90 92 7C 00      MOV dword ptr [ESI*0x4 + 0x7c9290],ECX
00557D2A  8D 8B 40 FF FF FF         LEA ECX,[EBX + 0xffffff40]
00557D30  0F BF 50 0B               MOVSX EDX,word ptr [EAX + 0xb]
00557D34  89 14 B5 9C 92 7C 00      MOV dword ptr [ESI*0x4 + 0x7c929c],EDX
00557D3B  83 C0 11                  ADD EAX,0x11
00557D3E  C7 45 F8 10 00 00 00      MOV dword ptr [EBP + -0x8],0x10
LAB_00557d45:
00557D45  8B 10                     MOV EDX,dword ptr [EAX]
00557D47  83 C0 04                  ADD EAX,0x4
00557D4A  89 11                     MOV dword ptr [ECX],EDX
00557D4C  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00557D4F  83 C1 04                  ADD ECX,0x4
00557D52  4A                        DEC EDX
00557D53  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00557D56  75 ED                     JNZ 0x00557d45
00557D58  8D 45 FC                  LEA EAX,[EBP + -0x4]
00557D5B  50                        PUSH EAX
00557D5C  E8 9F 38 1B 00            CALL 0x0070b600
00557D61  8B 0D CC AE 79 00         MOV ECX,dword ptr [0x0079aecc]
00557D67  83 C4 04                  ADD ESP,0x4
00557D6A  6A 01                     PUSH 0x1
00557D6C  6A 00                     PUSH 0x0
00557D6E  6A 1C                     PUSH 0x1c
00557D70  56                        PUSH ESI
00557D71  6A 01                     PUSH 0x1
00557D73  51                        PUSH ECX
00557D74  E8 87 AE 19 00            CALL 0x006f2c00
00557D79  8B 15 70 67 80 00         MOV EDX,dword ptr [0x00806770]
00557D7F  83 C4 0C                  ADD ESP,0xc
00557D82  50                        PUSH EAX
00557D83  52                        PUSH EDX
00557D84  E8 A7 36 1B 00            CALL 0x0070b430
00557D89  83 C4 14                  ADD ESP,0x14
00557D8C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00557D8F  83 C0 11                  ADD EAX,0x11
00557D92  B9 10 00 00 00            MOV ECX,0x10
LAB_00557d97:
00557D97  8B 10                     MOV EDX,dword ptr [EAX]
00557D99  83 C0 04                  ADD EAX,0x4
00557D9C  89 13                     MOV dword ptr [EBX],EDX
00557D9E  83 C3 04                  ADD EBX,0x4
00557DA1  49                        DEC ECX
00557DA2  75 F3                     JNZ 0x00557d97
00557DA4  8D 45 FC                  LEA EAX,[EBP + -0x4]
00557DA7  50                        PUSH EAX
00557DA8  E8 53 38 1B 00            CALL 0x0070b600
00557DAD  83 C4 04                  ADD ESP,0x4
00557DB0  46                        INC ESI
00557DB1  83 FE 03                  CMP ESI,0x3
00557DB4  0F 8C 3A FF FF FF         JL 0x00557cf4
00557DBA  8B 4F 34                  MOV ECX,dword ptr [EDI + 0x34]
00557DBD  8B 57 30                  MOV EDX,dword ptr [EDI + 0x30]
00557DC0  68 9C 92 7C 00            PUSH 0x7c929c
00557DC5  68 90 92 7C 00            PUSH 0x7c9290
00557DCA  6A 10                     PUSH 0x10
00557DCC  8D 87 D8 01 00 00         LEA EAX,[EDI + 0x1d8]
00557DD2  6A 03                     PUSH 0x3
00557DD4  50                        PUSH EAX
00557DD5  8B 47 4C                  MOV EAX,dword ptr [EDI + 0x4c]
00557DD8  51                        PUSH ECX
00557DD9  52                        PUSH EDX
00557DDA  8B 57 2C                  MOV EDX,dword ptr [EDI + 0x2c]
00557DDD  8D 8F 18 01 00 00         LEA ECX,[EDI + 0x118]
00557DE3  50                        PUSH EAX
00557DE4  8B 47 28                  MOV EAX,dword ptr [EDI + 0x28]
00557DE7  51                        PUSH ECX
00557DE8  52                        PUSH EDX
00557DE9  8D 4F 3C                  LEA ECX,[EDI + 0x3c]
00557DEC  50                        PUSH EAX
00557DED  51                        PUSH ECX
00557DEE  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00557DF4  E8 F7 F8 1B 00            CALL 0x007176f0
00557DF9  8B 8F 10 01 00 00         MOV ECX,dword ptr [EDI + 0x110]
00557DFF  33 F6                     XOR ESI,ESI
00557E01  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00557E04  85 C0                     TEST EAX,EAX
00557E06  0F 8E 69 01 00 00         JLE 0x00557f75
00557E0C  3B F0                     CMP ESI,EAX
LAB_00557e0e:
00557E0E  73 0D                     JNC 0x00557e1d
00557E10  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00557E13  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
00557E16  0F AF C6                  IMUL EAX,ESI
00557E19  03 C2                     ADD EAX,EDX
00557E1B  EB 02                     JMP 0x00557e1f
LAB_00557e1d:
00557E1D  33 C0                     XOR EAX,EAX
LAB_00557e1f:
00557E1F  33 C9                     XOR ECX,ECX
00557E21  8A 08                     MOV CL,byte ptr [EAX]
00557E23  83 F9 06                  CMP ECX,0x6
00557E26  0F 87 37 01 00 00         JA 0x00557f63
switchD_00557e2c::switchD:
00557E2C  FF 24 8D 2C 80 55 00      JMP dword ptr [ECX*0x4 + 0x55802c]
switchD_00557e2c::caseD_0:
00557E33  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
00557E36  68 01 40 00 00            PUSH 0x4001
00557E3B  52                        PUSH EDX
00557E3C  33 C9                     XOR ECX,ECX
00557E3E  8A 48 07                  MOV CL,byte ptr [EAX + 0x7]
00557E41  33 D2                     XOR EDX,EDX
00557E43  8A 50 01                  MOV DL,byte ptr [EAX + 0x1]
00557E46  51                        PUSH ECX
00557E47  0F BE 48 06               MOVSX ECX,byte ptr [EAX + 0x6]
00557E4B  52                        PUSH EDX
00557E4C  51                        PUSH ECX
00557E4D  0F BF 50 04               MOVSX EDX,word ptr [EAX + 0x4]
00557E51  0F BF 40 02               MOVSX EAX,word ptr [EAX + 0x2]
00557E55  52                        PUSH EDX
00557E56  50                        PUSH EAX
00557E57  8B CF                     MOV ECX,EDI
00557E59  E8 2E BA EA FF            CALL 0x0040388c
00557E5E  E9 00 01 00 00            JMP 0x00557f63
switchD_00557e2c::caseD_1:
00557E63  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00557E66  33 D2                     XOR EDX,EDX
00557E68  8A 50 07                  MOV DL,byte ptr [EAX + 0x7]
00557E6B  6A 02                     PUSH 0x2
00557E6D  51                        PUSH ECX
00557E6E  52                        PUSH EDX
00557E6F  0F BE 50 06               MOVSX EDX,byte ptr [EAX + 0x6]
00557E73  33 C9                     XOR ECX,ECX
00557E75  8A 48 01                  MOV CL,byte ptr [EAX + 0x1]
00557E78  51                        PUSH ECX
00557E79  52                        PUSH EDX
00557E7A  0F BF 48 04               MOVSX ECX,word ptr [EAX + 0x4]
00557E7E  0F BF 50 02               MOVSX EDX,word ptr [EAX + 0x2]
00557E82  51                        PUSH ECX
00557E83  52                        PUSH EDX
00557E84  8B CF                     MOV ECX,EDI
00557E86  E8 9F AD EA FF            CALL 0x00402c2a
00557E8B  E9 D3 00 00 00            JMP 0x00557f63
switchD_00557e2c::caseD_2:
00557E90  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00557E93  33 D2                     XOR EDX,EDX
00557E95  8A 50 07                  MOV DL,byte ptr [EAX + 0x7]
00557E98  6A 04                     PUSH 0x4
00557E9A  51                        PUSH ECX
00557E9B  52                        PUSH EDX
00557E9C  0F BE 50 06               MOVSX EDX,byte ptr [EAX + 0x6]
00557EA0  33 C9                     XOR ECX,ECX
00557EA2  8A 48 01                  MOV CL,byte ptr [EAX + 0x1]
00557EA5  51                        PUSH ECX
00557EA6  52                        PUSH EDX
00557EA7  0F BF 48 04               MOVSX ECX,word ptr [EAX + 0x4]
00557EAB  0F BF 50 02               MOVSX EDX,word ptr [EAX + 0x2]
00557EAF  51                        PUSH ECX
00557EB0  52                        PUSH EDX
00557EB1  8B CF                     MOV ECX,EDI
00557EB3  E8 28 A2 EA FF            CALL 0x004020e0
00557EB8  E9 A6 00 00 00            JMP 0x00557f63
switchD_00557e2c::caseD_3:
00557EBD  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00557EC0  33 D2                     XOR EDX,EDX
00557EC2  8A 50 07                  MOV DL,byte ptr [EAX + 0x7]
00557EC5  6A 08                     PUSH 0x8
00557EC7  51                        PUSH ECX
00557EC8  52                        PUSH EDX
00557EC9  0F BE 50 06               MOVSX EDX,byte ptr [EAX + 0x6]
00557ECD  33 C9                     XOR ECX,ECX
00557ECF  8A 48 01                  MOV CL,byte ptr [EAX + 0x1]
00557ED2  51                        PUSH ECX
00557ED3  52                        PUSH EDX
00557ED4  0F BF 48 04               MOVSX ECX,word ptr [EAX + 0x4]
00557ED8  0F BF 50 02               MOVSX EDX,word ptr [EAX + 0x2]
00557EDC  51                        PUSH ECX
00557EDD  52                        PUSH EDX
00557EDE  8B CF                     MOV ECX,EDI
00557EE0  E8 3A 95 EA FF            CALL 0x0040141f
00557EE5  EB 7C                     JMP 0x00557f63
switchD_00557e2c::caseD_4:
00557EE7  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00557EEA  33 D2                     XOR EDX,EDX
00557EEC  8A 50 07                  MOV DL,byte ptr [EAX + 0x7]
00557EEF  6A 10                     PUSH 0x10
00557EF1  51                        PUSH ECX
00557EF2  52                        PUSH EDX
00557EF3  0F BE 50 06               MOVSX EDX,byte ptr [EAX + 0x6]
00557EF7  33 C9                     XOR ECX,ECX
00557EF9  8A 48 01                  MOV CL,byte ptr [EAX + 0x1]
00557EFC  51                        PUSH ECX
00557EFD  52                        PUSH EDX
00557EFE  0F BF 48 04               MOVSX ECX,word ptr [EAX + 0x4]
00557F02  0F BF 50 02               MOVSX EDX,word ptr [EAX + 0x2]
00557F06  51                        PUSH ECX
00557F07  52                        PUSH EDX
00557F08  8B CF                     MOV ECX,EDI
00557F0A  E8 A8 9D EA FF            CALL 0x00401cb7
00557F0F  EB 52                     JMP 0x00557f63
switchD_00557e2c::caseD_5:
00557F11  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00557F14  33 D2                     XOR EDX,EDX
00557F16  8A 50 07                  MOV DL,byte ptr [EAX + 0x7]
00557F19  6A 20                     PUSH 0x20
00557F1B  51                        PUSH ECX
00557F1C  52                        PUSH EDX
00557F1D  0F BE 50 06               MOVSX EDX,byte ptr [EAX + 0x6]
00557F21  33 C9                     XOR ECX,ECX
00557F23  8A 48 01                  MOV CL,byte ptr [EAX + 0x1]
00557F26  51                        PUSH ECX
00557F27  52                        PUSH EDX
00557F28  0F BF 48 04               MOVSX ECX,word ptr [EAX + 0x4]
00557F2C  0F BF 50 02               MOVSX EDX,word ptr [EAX + 0x2]
00557F30  51                        PUSH ECX
00557F31  52                        PUSH EDX
00557F32  8B CF                     MOV ECX,EDI
00557F34  E8 25 A1 EA FF            CALL 0x0040205e
00557F39  EB 28                     JMP 0x00557f63
switchD_00557e2c::caseD_6:
00557F3B  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00557F3E  33 D2                     XOR EDX,EDX
00557F40  8A 50 07                  MOV DL,byte ptr [EAX + 0x7]
00557F43  6A 40                     PUSH 0x40
00557F45  51                        PUSH ECX
00557F46  52                        PUSH EDX
00557F47  0F BE 50 06               MOVSX EDX,byte ptr [EAX + 0x6]
00557F4B  33 C9                     XOR ECX,ECX
00557F4D  8A 48 01                  MOV CL,byte ptr [EAX + 0x1]
00557F50  51                        PUSH ECX
00557F51  52                        PUSH EDX
00557F52  0F BF 48 04               MOVSX ECX,word ptr [EAX + 0x4]
00557F56  0F BF 50 02               MOVSX EDX,word ptr [EAX + 0x2]
00557F5A  51                        PUSH ECX
00557F5B  52                        PUSH EDX
00557F5C  8B CF                     MOV ECX,EDI
00557F5E  E8 E5 98 EA FF            CALL 0x00401848
switchD_00557e2c::default:
00557F63  8B 8F 10 01 00 00         MOV ECX,dword ptr [EDI + 0x110]
00557F69  46                        INC ESI
00557F6A  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00557F6D  3B F0                     CMP ESI,EAX
00557F6F  0F 8C 99 FE FF FF         JL 0x00557e0e
LAB_00557f75:
00557F75  8B 87 14 01 00 00         MOV EAX,dword ptr [EDI + 0x114]
00557F7B  33 F6                     XOR ESI,ESI
00557F7D  3B C6                     CMP EAX,ESI
00557F7F  74 2F                     JZ 0x00557fb0
00557F81  8B 87 F8 00 00 00         MOV EAX,dword ptr [EDI + 0xf8]
00557F87  3B C6                     CMP EAX,ESI
00557F89  A1 98 75 80 00            MOV EAX,[0x00807598]
00557F8E  74 2B                     JZ 0x00557fbb
00557F90  B9 01 00 00 00            MOV ECX,0x1
00557F95  89 88 66 04 00 00         MOV dword ptr [EAX + 0x466],ECX
00557F9B  89 88 D8 02 00 00         MOV dword ptr [EAX + 0x2d8],ECX
00557FA1  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00557FA4  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00557FA9  5F                        POP EDI
00557FAA  5E                        POP ESI
00557FAB  5B                        POP EBX
00557FAC  8B E5                     MOV ESP,EBP
00557FAE  5D                        POP EBP
00557FAF  C3                        RET
LAB_00557fb0:
00557FB0  89 B7 F8 00 00 00         MOV dword ptr [EDI + 0xf8],ESI
00557FB6  A1 98 75 80 00            MOV EAX,[0x00807598]
LAB_00557fbb:
00557FBB  89 B0 66 04 00 00         MOV dword ptr [EAX + 0x466],ESI
00557FC1  C7 80 D8 02 00 00 01 00 00 00  MOV dword ptr [EAX + 0x2d8],0x1
00557FCB  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00557FCE  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00557FD3  5F                        POP EDI
00557FD4  5E                        POP ESI
00557FD5  5B                        POP EBX
00557FD6  8B E5                     MOV ESP,EBP
00557FD8  5D                        POP EBP
00557FD9  C3                        RET
LAB_00557fda:
00557FDA  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00557FDD  68 10 93 7C 00            PUSH 0x7c9310
00557FE2  68 CC 4C 7A 00            PUSH 0x7a4ccc
00557FE7  57                        PUSH EDI
00557FE8  56                        PUSH ESI
00557FE9  68 AA 00 00 00            PUSH 0xaa
00557FEE  68 CC 92 7C 00            PUSH 0x7c92cc
00557FF3  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00557FF9  E8 D2 54 15 00            CALL 0x006ad4d0
00557FFE  83 C4 18                  ADD ESP,0x18
00558001  85 C0                     TEST EAX,EAX
00558003  74 01                     JZ 0x00558006
00558005  CC                        INT3
LAB_00558006:
00558006  8D 55 FC                  LEA EDX,[EBP + -0x4]
00558009  52                        PUSH EDX
0055800A  E8 F1 35 1B 00            CALL 0x0070b600
0055800F  83 C4 04                  ADD ESP,0x4
00558012  68 AC 00 00 00            PUSH 0xac
00558017  68 CC 92 7C 00            PUSH 0x7c92cc
0055801C  56                        PUSH ESI
0055801D  57                        PUSH EDI
0055801E  E8 1D DE 14 00            CALL 0x006a5e40
00558023  5F                        POP EDI
00558024  5E                        POP ESI
00558025  5B                        POP EBX
00558026  8B E5                     MOV ESP,EBP
00558028  5D                        POP EBP
00558029  C3                        RET
