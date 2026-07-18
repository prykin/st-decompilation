FUN_005b5f00:
005B5F00  55                        PUSH EBP
005B5F01  8B EC                     MOV EBP,ESP
005B5F03  51                        PUSH ECX
005B5F04  53                        PUSH EBX
005B5F05  56                        PUSH ESI
005B5F06  57                        PUSH EDI
005B5F07  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
005B5F0A  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
005B5F0D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005B5F10  8B 37                     MOV ESI,dword ptr [EDI]
005B5F12  8B 47 14                  MOV EAX,dword ptr [EDI + 0x14]
005B5F15  4E                        DEC ESI
005B5F16  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
005B5F19  0F AF F0                  IMUL ESI,EAX
005B5F1C  68 FF 00 00 00            PUSH 0xff
005B5F21  83 C0 FE                  ADD EAX,-0x2
005B5F24  51                        PUSH ECX
005B5F25  50                        PUSH EAX
005B5F26  6A 00                     PUSH 0x0
005B5F28  56                        PUSH ESI
005B5F29  6A 00                     PUSH 0x0
005B5F2B  53                        PUSH EBX
005B5F2C  E8 3F E2 0F 00            CALL 0x006b4170
005B5F31  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
005B5F34  8B 57 18                  MOV EDX,dword ptr [EDI + 0x18]
005B5F37  83 F8 01                  CMP EAX,0x1
005B5F3A  6A 00                     PUSH 0x0
005B5F3C  0F 85 0C 01 00 00         JNZ 0x005b604e
005B5F42  8B 47 14                  MOV EAX,dword ptr [EDI + 0x14]
005B5F45  83 EA 03                  SUB EDX,0x3
005B5F48  83 E8 02                  SUB EAX,0x2
005B5F4B  52                        PUSH EDX
005B5F4C  50                        PUSH EAX
005B5F4D  6A 03                     PUSH 0x3
005B5F4F  56                        PUSH ESI
005B5F50  6A 00                     PUSH 0x0
005B5F52  53                        PUSH EBX
005B5F53  E8 18 E2 0F 00            CALL 0x006b4170
005B5F58  8B 4F 14                  MOV ECX,dword ptr [EDI + 0x14]
005B5F5B  6A 00                     PUSH 0x0
005B5F5D  83 E9 06                  SUB ECX,0x6
005B5F60  6A 02                     PUSH 0x2
005B5F62  51                        PUSH ECX
005B5F63  8D 56 02                  LEA EDX,[ESI + 0x2]
005B5F66  6A 01                     PUSH 0x1
005B5F68  52                        PUSH EDX
005B5F69  6A 00                     PUSH 0x0
005B5F6B  53                        PUSH EBX
005B5F6C  E8 FF E1 0F 00            CALL 0x006b4170
005B5F71  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005B5F74  6A 0D                     PUSH 0xd
005B5F76  8B 88 5B 1A 00 00         MOV ECX,dword ptr [EAX + 0x1a5b]
005B5F7C  33 C0                     XOR EAX,EAX
005B5F7E  8B 91 40 01 00 00         MOV EDX,dword ptr [ECX + 0x140]
005B5F84  8B 4F 18                  MOV ECX,dword ptr [EDI + 0x18]
005B5F87  52                        PUSH EDX
005B5F88  8B 17                     MOV EDX,dword ptr [EDI]
005B5F8A  83 FA 01                  CMP EDX,0x1
005B5F8D  6A 03                     PUSH 0x3
005B5F8F  0F 95 C0                  SETNZ AL
005B5F92  40                        INC EAX
005B5F93  56                        PUSH ESI
005B5F94  2B C8                     SUB ECX,EAX
005B5F96  51                        PUSH ECX
005B5F97  56                        PUSH ESI
005B5F98  6A 00                     PUSH 0x0
005B5F9A  53                        PUSH EBX
005B5F9B  E8 70 FB 0F 00            CALL 0x006b5b10
005B5FA0  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005B5FA3  6A 0D                     PUSH 0xd
005B5FA5  8D 46 03                  LEA EAX,[ESI + 0x3]
005B5FA8  8B 8A 5B 1A 00 00         MOV ECX,dword ptr [EDX + 0x1a5b]
005B5FAE  8B 91 40 01 00 00         MOV EDX,dword ptr [ECX + 0x140]
005B5FB4  52                        PUSH EDX
005B5FB5  6A 00                     PUSH 0x0
005B5FB7  50                        PUSH EAX
005B5FB8  6A 03                     PUSH 0x3
005B5FBA  56                        PUSH ESI
005B5FBB  6A 00                     PUSH 0x0
005B5FBD  53                        PUSH EBX
005B5FBE  E8 4D FB 0F 00            CALL 0x006b5b10
005B5FC3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005B5FC6  6A 0D                     PUSH 0xd
005B5FC8  8B 88 5B 1A 00 00         MOV ECX,dword ptr [EAX + 0x1a5b]
005B5FCE  8B 47 14                  MOV EAX,dword ptr [EDI + 0x14]
005B5FD1  8B 91 40 01 00 00         MOV EDX,dword ptr [ECX + 0x140]
005B5FD7  8D 4C 30 FA               LEA ECX,[EAX + ESI*0x1 + -0x6]
005B5FDB  52                        PUSH EDX
005B5FDC  6A 00                     PUSH 0x0
005B5FDE  51                        PUSH ECX
005B5FDF  8D 46 03                  LEA EAX,[ESI + 0x3]
005B5FE2  6A 00                     PUSH 0x0
005B5FE4  50                        PUSH EAX
005B5FE5  6A 00                     PUSH 0x0
005B5FE7  53                        PUSH EBX
005B5FE8  E8 23 FB 0F 00            CALL 0x006b5b10
005B5FED  8B 57 14                  MOV EDX,dword ptr [EDI + 0x14]
005B5FF0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005B5FF3  6A 0D                     PUSH 0xd
005B5FF5  8D 04 32                  LEA EAX,[EDX + ESI*0x1]
005B5FF8  8B 91 5B 1A 00 00         MOV EDX,dword ptr [ECX + 0x1a5b]
005B5FFE  8B 8A 40 01 00 00         MOV ECX,dword ptr [EDX + 0x140]
005B6004  8D 50 FD                  LEA EDX,[EAX + -0x3]
005B6007  51                        PUSH ECX
005B6008  6A 03                     PUSH 0x3
005B600A  52                        PUSH EDX
005B600B  83 C0 FA                  ADD EAX,-0x6
005B600E  6A 00                     PUSH 0x0
005B6010  50                        PUSH EAX
005B6011  6A 00                     PUSH 0x0
005B6013  53                        PUSH EBX
005B6014  E8 F7 FA 0F 00            CALL 0x006b5b10
005B6019  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005B601C  8B 47 14                  MOV EAX,dword ptr [EDI + 0x14]
005B601F  6A 0D                     PUSH 0xd
005B6021  8B 91 5B 1A 00 00         MOV EDX,dword ptr [ECX + 0x1a5b]
005B6027  8B 4F 18                  MOV ECX,dword ptr [EDI + 0x18]
005B602A  8D 74 30 FD               LEA ESI,[EAX + ESI*0x1 + -0x3]
005B602E  83 E9 02                  SUB ECX,0x2
005B6031  8B 82 40 01 00 00         MOV EAX,dword ptr [EDX + 0x140]
005B6037  50                        PUSH EAX
005B6038  51                        PUSH ECX
005B6039  56                        PUSH ESI
005B603A  6A 03                     PUSH 0x3
005B603C  56                        PUSH ESI
005B603D  6A 00                     PUSH 0x0
005B603F  53                        PUSH EBX
005B6040  E8 CB FA 0F 00            CALL 0x006b5b10
005B6045  5F                        POP EDI
005B6046  5E                        POP ESI
005B6047  5B                        POP EBX
005B6048  8B E5                     MOV ESP,EBP
005B604A  5D                        POP EBP
005B604B  C2 08 00                  RET 0x8
LAB_005b604e:
005B604E  8B 47 14                  MOV EAX,dword ptr [EDI + 0x14]
005B6051  83 EA 05                  SUB EDX,0x5
005B6054  83 E8 04                  SUB EAX,0x4
005B6057  52                        PUSH EDX
005B6058  50                        PUSH EAX
005B6059  8D 4E 01                  LEA ECX,[ESI + 0x1]
005B605C  6A 04                     PUSH 0x4
005B605E  51                        PUSH ECX
005B605F  6A 00                     PUSH 0x0
005B6061  53                        PUSH EBX
005B6062  E8 09 E1 0F 00            CALL 0x006b4170
005B6067  8B 57 14                  MOV EDX,dword ptr [EDI + 0x14]
005B606A  6A 00                     PUSH 0x0
005B606C  83 EA 06                  SUB EDX,0x6
005B606F  6A 02                     PUSH 0x2
005B6071  52                        PUSH EDX
005B6072  8D 46 02                  LEA EAX,[ESI + 0x2]
005B6075  6A 02                     PUSH 0x2
005B6077  50                        PUSH EAX
005B6078  6A 00                     PUSH 0x0
005B607A  53                        PUSH EBX
005B607B  E8 F0 E0 0F 00            CALL 0x006b4170
005B6080  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005B6083  6A 0D                     PUSH 0xd
005B6085  8B 91 5B 1A 00 00         MOV EDX,dword ptr [ECX + 0x1a5b]
005B608B  8B 4F 18                  MOV ECX,dword ptr [EDI + 0x18]
005B608E  49                        DEC ECX
005B608F  8B 82 40 01 00 00         MOV EAX,dword ptr [EDX + 0x140]
005B6095  50                        PUSH EAX
005B6096  6A 04                     PUSH 0x4
005B6098  56                        PUSH ESI
005B6099  51                        PUSH ECX
005B609A  56                        PUSH ESI
005B609B  6A 00                     PUSH 0x0
005B609D  53                        PUSH EBX
005B609E  E8 6D FA 0F 00            CALL 0x006b5b10
005B60A3  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005B60A6  6A 0D                     PUSH 0xd
005B60A8  8D 46 03                  LEA EAX,[ESI + 0x3]
005B60AB  8B 8A 5B 1A 00 00         MOV ECX,dword ptr [EDX + 0x1a5b]
005B60B1  8B 91 40 01 00 00         MOV EDX,dword ptr [ECX + 0x140]
005B60B7  52                        PUSH EDX
005B60B8  6A 01                     PUSH 0x1
005B60BA  50                        PUSH EAX
005B60BB  6A 04                     PUSH 0x4
005B60BD  56                        PUSH ESI
005B60BE  6A 00                     PUSH 0x0
005B60C0  53                        PUSH EBX
005B60C1  E8 4A FA 0F 00            CALL 0x006b5b10
005B60C6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005B60C9  6A 0D                     PUSH 0xd
005B60CB  8B 88 5B 1A 00 00         MOV ECX,dword ptr [EAX + 0x1a5b]
005B60D1  8B 47 14                  MOV EAX,dword ptr [EDI + 0x14]
005B60D4  8B 91 40 01 00 00         MOV EDX,dword ptr [ECX + 0x140]
005B60DA  8D 4C 30 FA               LEA ECX,[EAX + ESI*0x1 + -0x6]
005B60DE  52                        PUSH EDX
005B60DF  6A 01                     PUSH 0x1
005B60E1  51                        PUSH ECX
005B60E2  8D 46 03                  LEA EAX,[ESI + 0x3]
005B60E5  6A 01                     PUSH 0x1
005B60E7  50                        PUSH EAX
005B60E8  6A 00                     PUSH 0x0
005B60EA  53                        PUSH EBX
005B60EB  E8 20 FA 0F 00            CALL 0x006b5b10
005B60F0  8B 57 14                  MOV EDX,dword ptr [EDI + 0x14]
005B60F3  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005B60F6  6A 0D                     PUSH 0xd
005B60F8  8D 04 32                  LEA EAX,[EDX + ESI*0x1]
005B60FB  8B 91 5B 1A 00 00         MOV EDX,dword ptr [ECX + 0x1a5b]
005B6101  8B 8A 40 01 00 00         MOV ECX,dword ptr [EDX + 0x140]
005B6107  8D 50 FD                  LEA EDX,[EAX + -0x3]
005B610A  51                        PUSH ECX
005B610B  6A 04                     PUSH 0x4
005B610D  52                        PUSH EDX
005B610E  83 C0 FA                  ADD EAX,-0x6
005B6111  6A 01                     PUSH 0x1
005B6113  50                        PUSH EAX
005B6114  6A 00                     PUSH 0x0
005B6116  53                        PUSH EBX
005B6117  E8 F4 F9 0F 00            CALL 0x006b5b10
005B611C  8B 47 14                  MOV EAX,dword ptr [EDI + 0x14]
005B611F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005B6122  6A 0D                     PUSH 0xd
005B6124  8D 44 30 FD               LEA EAX,[EAX + ESI*0x1 + -0x3]
005B6128  8B 91 5B 1A 00 00         MOV EDX,dword ptr [ECX + 0x1a5b]
005B612E  8B 8A 40 01 00 00         MOV ECX,dword ptr [EDX + 0x140]
005B6134  8B 57 18                  MOV EDX,dword ptr [EDI + 0x18]
005B6137  4A                        DEC EDX
005B6138  51                        PUSH ECX
005B6139  52                        PUSH EDX
005B613A  50                        PUSH EAX
005B613B  6A 04                     PUSH 0x4
005B613D  50                        PUSH EAX
005B613E  6A 00                     PUSH 0x0
005B6140  53                        PUSH EBX
005B6141  E8 CA F9 0F 00            CALL 0x006b5b10
005B6146  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005B6149  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
005B614C  6A 0D                     PUSH 0xd
005B614E  48                        DEC EAX
005B614F  8B 91 5B 1A 00 00         MOV EDX,dword ptr [ECX + 0x1a5b]
005B6155  8B 8A 40 01 00 00         MOV ECX,dword ptr [EDX + 0x140]
005B615B  8B 57 14                  MOV EDX,dword ptr [EDI + 0x14]
005B615E  51                        PUSH ECX
005B615F  50                        PUSH EAX
005B6160  8D 4C 32 FD               LEA ECX,[EDX + ESI*0x1 + -0x3]
005B6164  51                        PUSH ECX
005B6165  50                        PUSH EAX
005B6166  56                        PUSH ESI
005B6167  6A 00                     PUSH 0x0
005B6169  53                        PUSH EBX
005B616A  E8 A1 F9 0F 00            CALL 0x006b5b10
005B616F  5F                        POP EDI
005B6170  5E                        POP ESI
005B6171  5B                        POP EBX
005B6172  8B E5                     MOV ESP,EBP
005B6174  5D                        POP EBP
005B6175  C2 08 00                  RET 0x8
