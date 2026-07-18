FUN_004c7cc0:
004C7CC0  55                        PUSH EBP
004C7CC1  8B EC                     MOV EBP,ESP
004C7CC3  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004C7CC6  53                        PUSH EBX
004C7CC7  56                        PUSH ESI
004C7CC8  57                        PUSH EDI
004C7CC9  85 C0                     TEST EAX,EAX
004C7CCB  8B D9                     MOV EBX,ECX
004C7CCD  0F 8D DF 01 00 00         JGE 0x004c7eb2
004C7CD3  8B 8B D4 03 00 00         MOV ECX,dword ptr [EBX + 0x3d4]
004C7CD9  99                        CDQ
004C7CDA  33 C2                     XOR EAX,EDX
004C7CDC  2B C2                     SUB EAX,EDX
004C7CDE  85 C9                     TEST ECX,ECX
004C7CE0  0F 84 D3 00 00 00         JZ 0x004c7db9
004C7CE6  8B 8B 07 06 00 00         MOV ECX,dword ptr [EBX + 0x607]
004C7CEC  85 C9                     TEST ECX,ECX
004C7CEE  0F 84 C5 00 00 00         JZ 0x004c7db9
LAB_004c7cf4:
004C7CF4  8B B3 D4 03 00 00         MOV ESI,dword ptr [EBX + 0x3d4]
004C7CFA  C7 45 10 00 00 00 00      MOV dword ptr [EBP + 0x10],0x0
004C7D01  8D 56 FF                  LEA EDX,[ESI + -0x1]
004C7D04  85 D2                     TEST EDX,EDX
004C7D06  0F 8C 80 00 00 00         JL 0x004c7d8c
004C7D0C  8B BB 07 06 00 00         MOV EDI,dword ptr [EBX + 0x607]
004C7D12  8D 0C 92                  LEA ECX,[EDX + EDX*0x4]
004C7D15  C1 E1 03                  SHL ECX,0x3
004C7D18  2B CA                     SUB ECX,EDX
004C7D1A  03 CF                     ADD ECX,EDI
LAB_004c7d1c:
004C7D1C  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004C7D1F  39 39                     CMP dword ptr [ECX],EDI
004C7D21  75 08                     JNZ 0x004c7d2b
004C7D23  8B 79 04                  MOV EDI,dword ptr [ECX + 0x4]
004C7D26  3B 7D 0C                  CMP EDI,dword ptr [EBP + 0xc]
004C7D29  74 0A                     JZ 0x004c7d35
LAB_004c7d2b:
004C7D2B  4A                        DEC EDX
004C7D2C  83 E9 27                  SUB ECX,0x27
004C7D2F  85 D2                     TEST EDX,EDX
004C7D31  7D E9                     JGE 0x004c7d1c
004C7D33  EB 57                     JMP 0x004c7d8c
LAB_004c7d35:
004C7D35  8B 8B 07 06 00 00         MOV ECX,dword ptr [EBX + 0x607]
004C7D3B  8D 3C 92                  LEA EDI,[EDX + EDX*0x4]
004C7D3E  C1 E7 03                  SHL EDI,0x3
004C7D41  2B FA                     SUB EDI,EDX
004C7D43  C7 45 10 01 00 00 00      MOV dword ptr [EBP + 0x10],0x1
004C7D4A  03 F9                     ADD EDI,ECX
004C7D4C  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
004C7D4F  3B C8                     CMP ECX,EAX
004C7D51  7F 4D                     JG 0x004c7da0
004C7D53  2B C1                     SUB EAX,ECX
004C7D55  8D 4E FF                  LEA ECX,[ESI + -0x1]
004C7D58  3B D1                     CMP EDX,ECX
004C7D5A  7D 2A                     JGE 0x004c7d86
004C7D5C  2B F2                     SUB ESI,EDX
004C7D5E  4E                        DEC ESI
004C7D5F  8D 0C B6                  LEA ECX,[ESI + ESI*0x4]
004C7D62  C1 E1 03                  SHL ECX,0x3
004C7D65  2B CE                     SUB ECX,ESI
004C7D67  42                        INC EDX
004C7D68  8D 34 92                  LEA ESI,[EDX + EDX*0x4]
004C7D6B  C1 E6 03                  SHL ESI,0x3
004C7D6E  2B F2                     SUB ESI,EDX
004C7D70  8B 93 07 06 00 00         MOV EDX,dword ptr [EBX + 0x607]
004C7D76  03 F2                     ADD ESI,EDX
004C7D78  8B D1                     MOV EDX,ECX
004C7D7A  C1 E9 02                  SHR ECX,0x2
004C7D7D  F3 A5                     MOVSD.REP ES:EDI,ESI
004C7D7F  8B CA                     MOV ECX,EDX
004C7D81  83 E1 03                  AND ECX,0x3
004C7D84  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_004c7d86:
004C7D86  FF 8B D4 03 00 00         DEC dword ptr [EBX + 0x3d4]
LAB_004c7d8c:
004C7D8C  85 C0                     TEST EAX,EAX
004C7D8E  0F 84 F3 04 00 00         JZ 0x004c8287
004C7D94  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004C7D97  85 C9                     TEST ECX,ECX
004C7D99  74 1E                     JZ 0x004c7db9
004C7D9B  E9 54 FF FF FF            JMP 0x004c7cf4
LAB_004c7da0:
004C7DA0  8D 0C 92                  LEA ECX,[EDX + EDX*0x4]
004C7DA3  C1 E1 03                  SHL ECX,0x3
004C7DA6  2B CA                     SUB ECX,EDX
004C7DA8  8B 93 07 06 00 00         MOV EDX,dword ptr [EBX + 0x607]
004C7DAE  8D 4C 11 08               LEA ECX,[ECX + EDX*0x1 + 0x8]
004C7DB2  29 01                     SUB dword ptr [ECX],EAX
004C7DB4  E9 CE 04 00 00            JMP 0x004c8287
LAB_004c7db9:
004C7DB9  85 C0                     TEST EAX,EAX
004C7DBB  0F 84 C6 04 00 00         JZ 0x004c8287
004C7DC1  8B 93 61 03 00 00         MOV EDX,dword ptr [EBX + 0x361]
004C7DC7  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004C7DCA  3B D1                     CMP EDX,ECX
004C7DCC  0F 85 B5 04 00 00         JNZ 0x004c8287
004C7DD2  8B 8B 69 03 00 00         MOV ECX,dword ptr [EBX + 0x369]
004C7DD8  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
004C7DDB  3B CE                     CMP ECX,ESI
004C7DDD  0F 85 A4 04 00 00         JNZ 0x004c8287
004C7DE3  8B 8B 6D 03 00 00         MOV ECX,dword ptr [EBX + 0x36d]
004C7DE9  3B C1                     CMP EAX,ECX
004C7DEB  7E 02                     JLE 0x004c7def
004C7DED  8B C1                     MOV EAX,ECX
LAB_004c7def:
004C7DEF  8B 8B 6D 03 00 00         MOV ECX,dword ptr [EBX + 0x36d]
004C7DF5  2B C8                     SUB ECX,EAX
004C7DF7  89 8B 6D 03 00 00         MOV dword ptr [EBX + 0x36d],ECX
004C7DFD  0F 85 84 04 00 00         JNZ 0x004c8287
004C7E03  8B CB                     MOV ECX,EBX
004C7E05  89 93 65 03 00 00         MOV dword ptr [EBX + 0x365],EDX
004C7E0B  E8 5A CD F3 FF            CALL 0x00404b6a
004C7E10  85 C0                     TEST EAX,EAX
004C7E12  75 0F                     JNZ 0x004c7e23
004C7E14  C7 83 6D 03 00 00 01 00 00 00  MOV dword ptr [EBX + 0x36d],0x1
004C7E1E  E9 64 04 00 00            JMP 0x004c8287
LAB_004c7e23:
004C7E23  8A 53 24                  MOV DL,byte ptr [EBX + 0x24]
004C7E26  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C7E2C  52                        PUSH EDX
004C7E2D  E8 85 CB F3 FF            CALL 0x004049b7
004C7E32  3C 03                     CMP AL,0x3
004C7E34  74 1A                     JZ 0x004c7e50
004C7E36  8B 83 A8 03 00 00         MOV EAX,dword ptr [EBX + 0x3a8]
004C7E3C  85 C0                     TEST EAX,EAX
004C7E3E  74 10                     JZ 0x004c7e50
004C7E40  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C7E46  50                        PUSH EAX
004C7E47  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
004C7E4A  50                        PUSH EAX
004C7E4B  E8 E6 C4 F3 FF            CALL 0x00404336
LAB_004c7e50:
004C7E50  8B 83 AC 03 00 00         MOV EAX,dword ptr [EBX + 0x3ac]
004C7E56  85 C0                     TEST EAX,EAX
004C7E58  74 10                     JZ 0x004c7e6a
004C7E5A  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
004C7E5D  50                        PUSH EAX
004C7E5E  51                        PUSH ECX
004C7E5F  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C7E65  E8 A8 C5 F3 FF            CALL 0x00404412
LAB_004c7e6a:
004C7E6A  8B 83 B0 03 00 00         MOV EAX,dword ptr [EBX + 0x3b0]
004C7E70  85 C0                     TEST EAX,EAX
004C7E72  74 10                     JZ 0x004c7e84
004C7E74  8A 53 24                  MOV DL,byte ptr [EBX + 0x24]
004C7E77  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C7E7D  50                        PUSH EAX
004C7E7E  52                        PUSH EDX
004C7E7F  E8 63 D7 F3 FF            CALL 0x004055e7
LAB_004c7e84:
004C7E84  8B 83 B4 03 00 00         MOV EAX,dword ptr [EBX + 0x3b4]
004C7E8A  85 C0                     TEST EAX,EAX
004C7E8C  74 10                     JZ 0x004c7e9e
004C7E8E  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C7E94  50                        PUSH EAX
004C7E95  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004C7E98  50                        PUSH EAX
004C7E99  E8 CD DF F3 FF            CALL 0x00405e6b
LAB_004c7e9e:
004C7E9E  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
004C7EA1  51                        PUSH ECX
004C7EA2  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C7EA8  E8 49 AA F3 FF            CALL 0x004028f6
004C7EAD  E9 D5 03 00 00            JMP 0x004c8287
LAB_004c7eb2:
004C7EB2  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
004C7EB5  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
004C7EB8  6A 00                     PUSH 0x0
004C7EBA  6A 00                     PUSH 0x0
004C7EBC  50                        PUSH EAX
004C7EBD  57                        PUSH EDI
004C7EBE  56                        PUSH ESI
004C7EBF  8B CB                     MOV ECX,EBX
004C7EC1  E8 08 DC F3 FF            CALL 0x00405ace
004C7EC6  85 C0                     TEST EAX,EAX
004C7EC8  0F 84 B9 03 00 00         JZ 0x004c8287
004C7ECE  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004C7ED1  6A 00                     PUSH 0x0
004C7ED3  6A 01                     PUSH 0x1
004C7ED5  52                        PUSH EDX
004C7ED6  57                        PUSH EDI
004C7ED7  56                        PUSH ESI
004C7ED8  8B CB                     MOV ECX,EBX
004C7EDA  E8 EF DB F3 FF            CALL 0x00405ace
004C7EDF  85 C0                     TEST EAX,EAX
004C7EE1  0F 84 2E 02 00 00         JZ 0x004c8115
004C7EE7  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004C7EEA  8B CB                     MOV ECX,EBX
004C7EEC  50                        PUSH EAX
004C7EED  57                        PUSH EDI
004C7EEE  56                        PUSH ESI
004C7EEF  E8 49 A9 F3 FF            CALL 0x0040283d
004C7EF4  85 C0                     TEST EAX,EAX
004C7EF6  0F 84 19 02 00 00         JZ 0x004c8115
004C7EFC  8B 83 61 03 00 00         MOV EAX,dword ptr [EBX + 0x361]
004C7F02  85 C0                     TEST EAX,EAX
004C7F04  0F 85 F7 00 00 00         JNZ 0x004c8001
004C7F0A  89 B3 61 03 00 00         MOV dword ptr [EBX + 0x361],ESI
004C7F10  89 BB 69 03 00 00         MOV dword ptr [EBX + 0x369],EDI
004C7F16  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004C7F1C  57                        PUSH EDI
004C7F1D  56                        PUSH ESI
004C7F1E  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
004C7F24  8B CB                     MOV ECX,EBX
004C7F26  89 93 8C 03 00 00         MOV dword ptr [EBX + 0x38c],EDX
004C7F2C  E8 A0 C9 F3 FF            CALL 0x004048d1
004C7F31  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
004C7F34  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
004C7F37  89 83 90 03 00 00         MOV dword ptr [EBX + 0x390],EAX
004C7F3D  33 C0                     XOR EAX,EAX
004C7F3F  89 83 94 03 00 00         MOV dword ptr [EBX + 0x394],EAX
004C7F45  89 83 CC 03 00 00         MOV dword ptr [EBX + 0x3cc],EAX
004C7F4B  89 83 6D 03 00 00         MOV dword ptr [EBX + 0x36d],EAX
004C7F51  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
004C7F54  89 83 75 03 00 00         MOV dword ptr [EBX + 0x375],EAX
004C7F5A  8D 83 7D 03 00 00         LEA EAX,[EBX + 0x37d]
004C7F60  89 93 79 03 00 00         MOV dword ptr [EBX + 0x379],EDX
004C7F66  89 8B 71 03 00 00         MOV dword ptr [EBX + 0x371],ECX
004C7F6C  8B D0                     MOV EDX,EAX
004C7F6E  33 C9                     XOR ECX,ECX
004C7F70  89 0A                     MOV dword ptr [EDX],ECX
004C7F72  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
004C7F75  89 4A 08                  MOV dword ptr [EDX + 0x8],ECX
004C7F78  66 89 4A 0C               MOV word ptr [EDX + 0xc],CX
004C7F7C  88 4A 0E                  MOV byte ptr [EDX + 0xe],CL
004C7F7F  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
004C7F82  85 C9                     TEST ECX,ECX
004C7F84  74 0C                     JZ 0x004c7f92
004C7F86  6A 0F                     PUSH 0xf
004C7F88  51                        PUSH ECX
004C7F89  50                        PUSH EAX
004C7F8A  E8 B1 63 26 00            CALL 0x0072e340
004C7F8F  83 C4 0C                  ADD ESP,0xc
LAB_004c7f92:
004C7F92  8D 83 A4 03 00 00         LEA EAX,[EBX + 0x3a4]
004C7F98  8D 8B A0 03 00 00         LEA ECX,[EBX + 0x3a0]
004C7F9E  50                        PUSH EAX
004C7F9F  8D 93 9C 03 00 00         LEA EDX,[EBX + 0x39c]
004C7FA5  51                        PUSH ECX
004C7FA6  8B 8B 69 03 00 00         MOV ECX,dword ptr [EBX + 0x369]
004C7FAC  8D 83 98 03 00 00         LEA EAX,[EBX + 0x398]
004C7FB2  52                        PUSH EDX
004C7FB3  8B 93 61 03 00 00         MOV EDX,dword ptr [EBX + 0x361]
004C7FB9  50                        PUSH EAX
004C7FBA  51                        PUSH ECX
004C7FBB  52                        PUSH EDX
004C7FBC  8B CB                     MOV ECX,EBX
004C7FBE  E8 1C B6 F3 FF            CALL 0x004035df
004C7FC3  33 C0                     XOR EAX,EAX
004C7FC5  89 83 A8 03 00 00         MOV dword ptr [EBX + 0x3a8],EAX
004C7FCB  89 83 AC 03 00 00         MOV dword ptr [EBX + 0x3ac],EAX
004C7FD1  89 83 B0 03 00 00         MOV dword ptr [EBX + 0x3b0],EAX
004C7FD7  89 83 B4 03 00 00         MOV dword ptr [EBX + 0x3b4],EAX
004C7FDD  8B 83 AC 05 00 00         MOV EAX,dword ptr [EBX + 0x5ac]
004C7FE3  83 C0 CE                  ADD EAX,-0x32
004C7FE6  83 F8 2A                  CMP EAX,0x2a
004C7FE9  77 16                     JA 0x004c8001
004C7FEB  33 C9                     XOR ECX,ECX
004C7FED  8A 88 B8 82 4C 00         MOV CL,byte ptr [EAX + 0x4c82b8]
switchD_004c7ff3::switchD:
004C7FF3  FF 24 8D B0 82 4C 00      JMP dword ptr [ECX*0x4 + 0x4c82b0]
switchD_004c7ff3::caseD_32:
004C7FFA  8B CB                     MOV ECX,EBX
004C7FFC  E8 D9 D8 F3 FF            CALL 0x004058da
switchD_004c7ff3::caseD_33:
004C8001  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004C8004  8B 8B 6D 03 00 00         MOV ECX,dword ptr [EBX + 0x36d]
004C800A  03 C8                     ADD ECX,EAX
004C800C  89 8B 6D 03 00 00         MOV dword ptr [EBX + 0x36d],ECX
004C8012  8B 8B AC 05 00 00         MOV ECX,dword ptr [EBX + 0x5ac]
004C8018  83 C1 CE                  ADD ECX,-0x32
004C801B  83 F9 2A                  CMP ECX,0x2a
004C801E  77 25                     JA 0x004c8045
004C8020  33 D2                     XOR EDX,EDX
004C8022  8A 91 F0 82 4C 00         MOV DL,byte ptr [ECX + 0x4c82f0]
switchD_004c8028::switchD:
004C8028  FF 24 95 E4 82 4C 00      JMP dword ptr [EDX*0x4 + 0x4c82e4]
switchD_004c8028::caseD_32:
004C802F  50                        PUSH EAX
004C8030  57                        PUSH EDI
004C8031  56                        PUSH ESI
004C8032  8B CB                     MOV ECX,EBX
004C8034  E8 9F B2 F3 FF            CALL 0x004032d8
004C8039  EB 0A                     JMP 0x004c8045
switchD_004c8028::caseD_35:
004C803B  50                        PUSH EAX
004C803C  57                        PUSH EDI
004C803D  56                        PUSH ESI
004C803E  8B CB                     MOV ECX,EBX
004C8040  E8 71 DE F3 FF            CALL 0x00405eb6
switchD_004c8028::caseD_33:
004C8045  8B CB                     MOV ECX,EBX
004C8047  E8 E2 D9 F3 FF            CALL 0x00405a2e
004C804C  6A 01                     PUSH 0x1
004C804E  8B CB                     MOV ECX,EBX
004C8050  E8 A2 AC F3 FF            CALL 0x00402cf7
004C8055  8B 83 35 02 00 00         MOV EAX,dword ptr [EBX + 0x235]
004C805B  33 F6                     XOR ESI,ESI
004C805D  39 34 85 78 27 79 00      CMP dword ptr [EAX*0x4 + 0x792778],ESI
004C8064  74 0C                     JZ 0x004c8072
004C8066  89 B3 61 02 00 00         MOV dword ptr [EBX + 0x261],ESI
004C806C  89 B3 E1 02 00 00         MOV dword ptr [EBX + 0x2e1],ESI
LAB_004c8072:
004C8072  8B 83 61 03 00 00         MOV EAX,dword ptr [EBX + 0x361]
004C8078  83 F8 05                  CMP EAX,0x5
004C807B  75 79                     JNZ 0x004c80f6
004C807D  6A 03                     PUSH 0x3
004C807F  8B CB                     MOV ECX,EBX
004C8081  E8 6B A8 F3 FF            CALL 0x004028f1
004C8086  8A 8B 3D 02 00 00         MOV CL,byte ptr [EBX + 0x23d]
004C808C  51                        PUSH ECX
004C808D  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C8093  E8 1F C9 F3 FF            CALL 0x004049b7
004C8098  8A D0                     MOV DL,AL
004C809A  8B 83 35 02 00 00         MOV EAX,dword ptr [EBX + 0x235]
004C80A0  81 E2 FF 00 00 00         AND EDX,0xff
004C80A6  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004C80A9  03 D0                     ADD EDX,EAX
004C80AB  39 34 95 30 62 79 00      CMP dword ptr [EDX*0x4 + 0x796230],ESI
004C80B2  0F 84 CF 01 00 00         JZ 0x004c8287
004C80B8  8A 8B 3D 02 00 00         MOV CL,byte ptr [EBX + 0x23d]
004C80BE  8B 33                     MOV ESI,dword ptr [EBX]
004C80C0  51                        PUSH ECX
004C80C1  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C80C7  E8 EB C8 F3 FF            CALL 0x004049b7
004C80CC  8A D0                     MOV DL,AL
004C80CE  8B 83 35 02 00 00         MOV EAX,dword ptr [EBX + 0x235]
004C80D4  81 E2 FF 00 00 00         AND EDX,0xff
004C80DA  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004C80DD  03 D0                     ADD EDX,EAX
004C80DF  8B 0C 95 30 62 79 00      MOV ECX,dword ptr [EDX*0x4 + 0x796230]
004C80E6  51                        PUSH ECX
004C80E7  6A 03                     PUSH 0x3
004C80E9  8B CB                     MOV ECX,EBX
004C80EB  FF 96 90 00 00 00         CALL dword ptr [ESI + 0x90]
004C80F1  E9 91 01 00 00            JMP 0x004c8287
LAB_004c80f6:
004C80F6  83 F8 06                  CMP EAX,0x6
004C80F9  0F 85 88 01 00 00         JNZ 0x004c8287
004C80FF  8B 13                     MOV EDX,dword ptr [EBX]
004C8101  68 72 02 00 00            PUSH 0x272
004C8106  6A 03                     PUSH 0x3
004C8108  8B CB                     MOV ECX,EBX
004C810A  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
004C8110  E9 72 01 00 00            JMP 0x004c8287
LAB_004c8115:
004C8115  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004C8118  85 C0                     TEST EAX,EAX
004C811A  0F 84 67 01 00 00         JZ 0x004c8287
004C8120  6A FF                     PUSH -0x1
004C8122  57                        PUSH EDI
004C8123  56                        PUSH ESI
004C8124  8B CB                     MOV ECX,EBX
004C8126  E8 2E 9A F3 FF            CALL 0x00401b59
004C812B  39 B3 61 03 00 00         CMP dword ptr [EBX + 0x361],ESI
004C8131  75 0E                     JNZ 0x004c8141
004C8133  39 BB 69 03 00 00         CMP dword ptr [EBX + 0x369],EDI
004C8139  75 06                     JNZ 0x004c8141
004C813B  03 83 6D 03 00 00         ADD EAX,dword ptr [EBX + 0x36d]
LAB_004c8141:
004C8141  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004C8144  03 C1                     ADD EAX,ECX
004C8146  83 F8 64                  CMP EAX,0x64
004C8149  0F 8D 38 01 00 00         JGE 0x004c8287
004C814F  8B 93 D4 03 00 00         MOV EDX,dword ptr [EBX + 0x3d4]
004C8155  8B 83 D8 03 00 00         MOV EAX,dword ptr [EBX + 0x3d8]
004C815B  42                        INC EDX
004C815C  3B D0                     CMP EDX,EAX
004C815E  7C 24                     JL 0x004c8184
004C8160  83 C0 14                  ADD EAX,0x14
004C8163  8B 93 07 06 00 00         MOV EDX,dword ptr [EBX + 0x607]
004C8169  89 83 D8 03 00 00         MOV dword ptr [EBX + 0x3d8],EAX
004C816F  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004C8172  C1 E1 03                  SHL ECX,0x3
004C8175  2B C8                     SUB ECX,EAX
004C8177  51                        PUSH ECX
004C8178  52                        PUSH EDX
004C8179  E8 D2 4D 1E 00            CALL 0x006acf50
004C817E  89 83 07 06 00 00         MOV dword ptr [EBX + 0x607],EAX
LAB_004c8184:
004C8184  8B 83 D4 03 00 00         MOV EAX,dword ptr [EBX + 0x3d4]
004C818A  8B 93 07 06 00 00         MOV EDX,dword ptr [EBX + 0x607]
004C8190  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004C8193  C1 E1 03                  SHL ECX,0x3
004C8196  2B C8                     SUB ECX,EAX
004C8198  89 34 11                  MOV dword ptr [ECX + EDX*0x1],ESI
004C819B  8B 83 D4 03 00 00         MOV EAX,dword ptr [EBX + 0x3d4]
004C81A1  8B 93 07 06 00 00         MOV EDX,dword ptr [EBX + 0x607]
004C81A7  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004C81AA  C1 E1 03                  SHL ECX,0x3
004C81AD  2B C8                     SUB ECX,EAX
004C81AF  89 7C 11 04               MOV dword ptr [ECX + EDX*0x1 + 0x4],EDI
004C81B3  8B 83 D4 03 00 00         MOV EAX,dword ptr [EBX + 0x3d4]
004C81B9  8B 93 07 06 00 00         MOV EDX,dword ptr [EBX + 0x607]
004C81BF  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004C81C2  C1 E1 03                  SHL ECX,0x3
004C81C5  2B C8                     SUB ECX,EAX
004C81C7  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004C81CA  89 44 11 08               MOV dword ptr [ECX + EDX*0x1 + 0x8],EAX
004C81CE  8B 83 D4 03 00 00         MOV EAX,dword ptr [EBX + 0x3d4]
004C81D4  8B 93 07 06 00 00         MOV EDX,dword ptr [EBX + 0x607]
004C81DA  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004C81DD  C1 E1 03                  SHL ECX,0x3
004C81E0  2B C8                     SUB ECX,EAX
004C81E2  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
004C81E5  89 44 11 0C               MOV dword ptr [ECX + EDX*0x1 + 0xc],EAX
004C81E9  8B 83 D4 03 00 00         MOV EAX,dword ptr [EBX + 0x3d4]
004C81EF  8B 93 07 06 00 00         MOV EDX,dword ptr [EBX + 0x607]
004C81F5  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004C81F8  C1 E1 03                  SHL ECX,0x3
004C81FB  2B C8                     SUB ECX,EAX
004C81FD  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
004C8200  89 44 11 10               MOV dword ptr [ECX + EDX*0x1 + 0x10],EAX
004C8204  8B 83 D4 03 00 00         MOV EAX,dword ptr [EBX + 0x3d4]
004C820A  8B 93 07 06 00 00         MOV EDX,dword ptr [EBX + 0x607]
004C8210  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004C8213  C1 E1 03                  SHL ECX,0x3
004C8216  2B C8                     SUB ECX,EAX
004C8218  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
004C821B  89 44 11 14               MOV dword ptr [ECX + EDX*0x1 + 0x14],EAX
004C821F  8B 83 D4 03 00 00         MOV EAX,dword ptr [EBX + 0x3d4]
004C8225  33 C9                     XOR ECX,ECX
004C8227  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004C822A  C1 E2 03                  SHL EDX,0x3
004C822D  2B D0                     SUB EDX,EAX
004C822F  8B 83 07 06 00 00         MOV EAX,dword ptr [EBX + 0x607]
004C8235  8D 54 02 18               LEA EDX,[EDX + EAX*0x1 + 0x18]
004C8239  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
004C823C  85 C0                     TEST EAX,EAX
004C823E  89 0A                     MOV dword ptr [EDX],ECX
004C8240  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
004C8243  89 4A 08                  MOV dword ptr [EDX + 0x8],ECX
004C8246  66 89 4A 0C               MOV word ptr [EDX + 0xc],CX
004C824A  88 4A 0E                  MOV byte ptr [EDX + 0xe],CL
004C824D  74 24                     JZ 0x004c8273
004C824F  6A 0F                     PUSH 0xf
004C8251  50                        PUSH EAX
004C8252  8B 83 D4 03 00 00         MOV EAX,dword ptr [EBX + 0x3d4]
004C8258  8B 93 07 06 00 00         MOV EDX,dword ptr [EBX + 0x607]
004C825E  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004C8261  C1 E1 03                  SHL ECX,0x3
004C8264  2B C8                     SUB ECX,EAX
004C8266  8D 44 11 18               LEA EAX,[ECX + EDX*0x1 + 0x18]
004C826A  50                        PUSH EAX
004C826B  E8 D0 60 26 00            CALL 0x0072e340
004C8270  83 C4 0C                  ADD ESP,0xc
LAB_004c8273:
004C8273  8B 83 D4 03 00 00         MOV EAX,dword ptr [EBX + 0x3d4]
004C8279  8B CB                     MOV ECX,EBX
004C827B  40                        INC EAX
004C827C  89 83 D4 03 00 00         MOV dword ptr [EBX + 0x3d4],EAX
004C8282  E8 A7 D7 F3 FF            CALL 0x00405a2e
LAB_004c8287:
004C8287  8B 4B 10                  MOV ECX,dword ptr [EBX + 0x10]
004C828A  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004C828D  33 D2                     XOR EDX,EDX
004C828F  8A 91 2D 11 00 00         MOV DL,byte ptr [ECX + 0x112d]
004C8295  3B C2                     CMP EAX,EDX
004C8297  75 0C                     JNZ 0x004c82a5
004C8299  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C829F  50                        PUSH EAX
004C82A0  E8 E8 C8 F3 FF            CALL 0x00404b8d
LAB_004c82a5:
004C82A5  5F                        POP EDI
004C82A6  5E                        POP ESI
004C82A7  33 C0                     XOR EAX,EAX
004C82A9  5B                        POP EBX
004C82AA  5D                        POP EBP
004C82AB  C2 20 00                  RET 0x20
