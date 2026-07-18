MMsgTy::PaintMMsg:
005B7340  55                        PUSH EBP
005B7341  8B EC                     MOV EBP,ESP
005B7343  83 EC 48                  SUB ESP,0x48
005B7346  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005B734B  53                        PUSH EBX
005B734C  56                        PUSH ESI
005B734D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005B7350  57                        PUSH EDI
005B7351  8D 55 BC                  LEA EDX,[EBP + -0x44]
005B7354  8D 4D B8                  LEA ECX,[EBP + -0x48]
005B7357  6A 00                     PUSH 0x0
005B7359  52                        PUSH EDX
005B735A  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005B735D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B7363  E8 88 64 17 00            CALL 0x0072d7f0
005B7368  8B F0                     MOV ESI,EAX
005B736A  83 C4 08                  ADD ESP,0x8
005B736D  85 F6                     TEST ESI,ESI
005B736F  0F 85 12 01 00 00         JNZ 0x005b7487
005B7375  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
005B7378  8B 87 FB 1C 00 00         MOV EAX,dword ptr [EDI + 0x1cfb]
005B737E  83 F8 FF                  CMP EAX,-0x1
005B7381  74 22                     JZ 0x005b73a5
005B7383  8B 8F 17 1D 00 00         MOV ECX,dword ptr [EDI + 0x1d17]
005B7389  8B 97 13 1D 00 00         MOV EDX,dword ptr [EDI + 0x1d13]
005B738F  51                        PUSH ECX
005B7390  8B 8F FF 1C 00 00         MOV ECX,dword ptr [EDI + 0x1cff]
005B7396  52                        PUSH EDX
005B7397  8B 97 3F 1D 00 00         MOV EDX,dword ptr [EDI + 0x1d3f]
005B739D  51                        PUSH ECX
005B739E  50                        PUSH EAX
005B739F  52                        PUSH EDX
005B73A0  E8 8B C3 0F 00            CALL 0x006b3730
LAB_005b73a5:
005B73A5  8B 87 8C 1D 00 00         MOV EAX,dword ptr [EDI + 0x1d8c]
005B73AB  83 F8 FF                  CMP EAX,-0x1
005B73AE  74 22                     JZ 0x005b73d2
005B73B0  8B 8F A8 1D 00 00         MOV ECX,dword ptr [EDI + 0x1da8]
005B73B6  8B 97 A4 1D 00 00         MOV EDX,dword ptr [EDI + 0x1da4]
005B73BC  51                        PUSH ECX
005B73BD  8B 8F 90 1D 00 00         MOV ECX,dword ptr [EDI + 0x1d90]
005B73C3  52                        PUSH EDX
005B73C4  8B 97 D0 1D 00 00         MOV EDX,dword ptr [EDI + 0x1dd0]
005B73CA  51                        PUSH ECX
005B73CB  50                        PUSH EAX
005B73CC  52                        PUSH EDX
005B73CD  E8 5E C3 0F 00            CALL 0x006b3730
LAB_005b73d2:
005B73D2  8A 87 9A 00 00 00         MOV AL,byte ptr [EDI + 0x9a]
005B73D8  33 DB                     XOR EBX,EBX
005B73DA  84 C0                     TEST AL,AL
005B73DC  0F 86 95 00 00 00         JBE 0x005b7477
005B73E2  8D B7 FF 00 00 00         LEA ESI,[EDI + 0xff]
LAB_005b73e8:
005B73E8  8B 46 E8                  MOV EAX,dword ptr [ESI + -0x18]
005B73EB  83 F8 FF                  CMP EAX,-0x1
005B73EE  74 15                     JZ 0x005b7405
005B73F0  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
005B73F3  8B 16                     MOV EDX,dword ptr [ESI]
005B73F5  51                        PUSH ECX
005B73F6  8B 4E EC                  MOV ECX,dword ptr [ESI + -0x14]
005B73F9  52                        PUSH EDX
005B73FA  8B 56 2C                  MOV EDX,dword ptr [ESI + 0x2c]
005B73FD  51                        PUSH ECX
005B73FE  50                        PUSH EAX
005B73FF  52                        PUSH EDX
005B7400  E8 2B C3 0F 00            CALL 0x006b3730
LAB_005b7405:
005B7405  8B 46 79                  MOV EAX,dword ptr [ESI + 0x79]
005B7408  83 F8 FF                  CMP EAX,-0x1
005B740B  74 1F                     JZ 0x005b742c
005B740D  8B 8E 95 00 00 00         MOV ECX,dword ptr [ESI + 0x95]
005B7413  8B 96 91 00 00 00         MOV EDX,dword ptr [ESI + 0x91]
005B7419  51                        PUSH ECX
005B741A  8B 4E 7D                  MOV ECX,dword ptr [ESI + 0x7d]
005B741D  52                        PUSH EDX
005B741E  8B 96 BD 00 00 00         MOV EDX,dword ptr [ESI + 0xbd]
005B7424  51                        PUSH ECX
005B7425  50                        PUSH EAX
005B7426  52                        PUSH EDX
005B7427  E8 04 C3 0F 00            CALL 0x006b3730
LAB_005b742c:
005B742C  8A 46 E3                  MOV AL,byte ptr [ESI + -0x1d]
005B742F  84 C0                     TEST AL,AL
005B7431  74 2D                     JZ 0x005b7460
005B7433  8B 86 0A 01 00 00         MOV EAX,dword ptr [ESI + 0x10a]
005B7439  83 F8 FF                  CMP EAX,-0x1
005B743C  74 22                     JZ 0x005b7460
005B743E  8B 8E 26 01 00 00         MOV ECX,dword ptr [ESI + 0x126]
005B7444  8B 96 22 01 00 00         MOV EDX,dword ptr [ESI + 0x122]
005B744A  51                        PUSH ECX
005B744B  8B 8E 0E 01 00 00         MOV ECX,dword ptr [ESI + 0x10e]
005B7451  52                        PUSH EDX
005B7452  8B 96 4E 01 00 00         MOV EDX,dword ptr [ESI + 0x14e]
005B7458  51                        PUSH ECX
005B7459  50                        PUSH EAX
005B745A  52                        PUSH EDX
005B745B  E8 D0 C2 0F 00            CALL 0x006b3730
LAB_005b7460:
005B7460  33 C0                     XOR EAX,EAX
005B7462  43                        INC EBX
005B7463  8A 87 9A 00 00 00         MOV AL,byte ptr [EDI + 0x9a]
005B7469  81 C6 FB 01 00 00         ADD ESI,0x1fb
005B746F  3B D8                     CMP EBX,EAX
005B7471  0F 8C 71 FF FF FF         JL 0x005b73e8
LAB_005b7477:
005B7477  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005B747A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B7480  5F                        POP EDI
005B7481  5E                        POP ESI
005B7482  5B                        POP EBX
005B7483  8B E5                     MOV ESP,EBP
005B7485  5D                        POP EBP
005B7486  C3                        RET
LAB_005b7487:
005B7487  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005B748A  68 60 CC 7C 00            PUSH 0x7ccc60
005B748F  68 CC 4C 7A 00            PUSH 0x7a4ccc
005B7494  56                        PUSH ESI
005B7495  6A 00                     PUSH 0x0
005B7497  6A 59                     PUSH 0x59
005B7499  68 74 CB 7C 00            PUSH 0x7ccb74
005B749E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005B74A4  E8 27 60 0F 00            CALL 0x006ad4d0
005B74A9  83 C4 18                  ADD ESP,0x18
005B74AC  85 C0                     TEST EAX,EAX
005B74AE  74 01                     JZ 0x005b74b1
005B74B0  CC                        INT3
LAB_005b74b1:
005B74B1  6A 59                     PUSH 0x59
005B74B3  68 74 CB 7C 00            PUSH 0x7ccb74
005B74B8  6A 00                     PUSH 0x0
005B74BA  56                        PUSH ESI
005B74BB  E8 80 E9 0E 00            CALL 0x006a5e40
005B74C0  5F                        POP EDI
005B74C1  5E                        POP ESI
005B74C2  5B                        POP EBX
005B74C3  8B E5                     MOV ESP,EBP
005B74C5  5D                        POP EBP
005B74C6  C3                        RET
