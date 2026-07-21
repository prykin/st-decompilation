SubmarineTitans::Recovered::HiddenThis::AnonReceiver_005B5BE0::FUN_005b5be0:
005B5BE0  55                        PUSH EBP
005B5BE1  8B EC                     MOV EBP,ESP
005B5BE3  51                        PUSH ECX
005B5BE4  53                        PUSH EBX
005B5BE5  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
005B5BE8  56                        PUSH ESI
005B5BE9  57                        PUSH EDI
005B5BEA  8B 33                     MOV ESI,dword ptr [EBX]
005B5BEC  8B 43 14                  MOV EAX,dword ptr [EBX + 0x14]
005B5BEF  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
005B5BF2  4E                        DEC ESI
005B5BF3  0F AF F0                  IMUL ESI,EAX
005B5BF6  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005B5BF9  68 FF 00 00 00            PUSH 0xff
005B5BFE  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
005B5C01  83 C0 FE                  ADD EAX,-0x2
005B5C04  51                        PUSH ECX
005B5C05  50                        PUSH EAX
005B5C06  6A 00                     PUSH 0x0
005B5C08  56                        PUSH ESI
005B5C09  6A 00                     PUSH 0x0
005B5C0B  57                        PUSH EDI
005B5C0C  E8 5F E5 0F 00            CALL 0x006b4170
005B5C11  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
005B5C14  6A 00                     PUSH 0x0
005B5C16  83 F8 01                  CMP EAX,0x1
005B5C19  0F 85 17 01 00 00         JNZ 0x005b5d36
005B5C1F  8B 53 14                  MOV EDX,dword ptr [EBX + 0x14]
005B5C22  6A 14                     PUSH 0x14
005B5C24  83 EA 02                  SUB EDX,0x2
005B5C27  52                        PUSH EDX
005B5C28  6A 00                     PUSH 0x0
005B5C2A  56                        PUSH ESI
005B5C2B  6A 00                     PUSH 0x0
005B5C2D  57                        PUSH EDI
005B5C2E  E8 3D E5 0F 00            CALL 0x006b4170
005B5C33  8B 43 14                  MOV EAX,dword ptr [EBX + 0x14]
005B5C36  6A 00                     PUSH 0x0
005B5C38  83 E8 05                  SUB EAX,0x5
005B5C3B  6A 02                     PUSH 0x2
005B5C3D  50                        PUSH EAX
005B5C3E  8D 4E 01                  LEA ECX,[ESI + 0x1]
005B5C41  6A 14                     PUSH 0x14
005B5C43  51                        PUSH ECX
005B5C44  6A 00                     PUSH 0x0
005B5C46  57                        PUSH EDI
005B5C47  E8 24 E5 0F 00            CALL 0x006b4170
005B5C4C  8B 53 14                  MOV EDX,dword ptr [EBX + 0x14]
005B5C4F  6A 00                     PUSH 0x0
005B5C51  83 EA 09                  SUB EDX,0x9
005B5C54  6A 02                     PUSH 0x2
005B5C56  8D 46 03                  LEA EAX,[ESI + 0x3]
005B5C59  52                        PUSH EDX
005B5C5A  6A 16                     PUSH 0x16
005B5C5C  50                        PUSH EAX
005B5C5D  6A 00                     PUSH 0x0
005B5C5F  57                        PUSH EDI
005B5C60  E8 0B E5 0F 00            CALL 0x006b4170
005B5C65  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005B5C68  6A 0D                     PUSH 0xd
005B5C6A  8B 88 5B 1A 00 00         MOV ECX,dword ptr [EAX + 0x1a5b]
005B5C70  8B 03                     MOV EAX,dword ptr [EBX]
005B5C72  48                        DEC EAX
005B5C73  8B 91 40 01 00 00         MOV EDX,dword ptr [ECX + 0x140]
005B5C79  F7 D8                     NEG EAX
005B5C7B  1B C0                     SBB EAX,EAX
005B5C7D  52                        PUSH EDX
005B5C7E  6A 14                     PUSH 0x14
005B5C80  83 E0 02                  AND EAX,0x2
005B5C83  56                        PUSH ESI
005B5C84  50                        PUSH EAX
005B5C85  56                        PUSH ESI
005B5C86  6A 00                     PUSH 0x0
005B5C88  57                        PUSH EDI
005B5C89  E8 82 FE 0F 00            CALL 0x006b5b10
005B5C8E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005B5C91  6A 0D                     PUSH 0xd
005B5C93  8B 91 5B 1A 00 00         MOV EDX,dword ptr [ECX + 0x1a5b]
005B5C99  8B 82 40 01 00 00         MOV EAX,dword ptr [EDX + 0x140]
005B5C9F  50                        PUSH EAX
005B5CA0  8D 46 03                  LEA EAX,[ESI + 0x3]
005B5CA3  6A 17                     PUSH 0x17
005B5CA5  50                        PUSH EAX
005B5CA6  6A 14                     PUSH 0x14
005B5CA8  56                        PUSH ESI
005B5CA9  6A 00                     PUSH 0x0
005B5CAB  57                        PUSH EDI
005B5CAC  E8 5F FE 0F 00            CALL 0x006b5b10
005B5CB1  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005B5CB4  6A 0D                     PUSH 0xd
005B5CB6  8B 91 5B 1A 00 00         MOV EDX,dword ptr [ECX + 0x1a5b]
005B5CBC  8B 4B 14                  MOV ECX,dword ptr [EBX + 0x14]
005B5CBF  8B 82 40 01 00 00         MOV EAX,dword ptr [EDX + 0x140]
005B5CC5  8D 54 31 FA               LEA EDX,[ECX + ESI*0x1 + -0x6]
005B5CC9  50                        PUSH EAX
005B5CCA  6A 17                     PUSH 0x17
005B5CCC  52                        PUSH EDX
005B5CCD  8D 46 03                  LEA EAX,[ESI + 0x3]
005B5CD0  6A 17                     PUSH 0x17
005B5CD2  50                        PUSH EAX
005B5CD3  6A 00                     PUSH 0x0
005B5CD5  57                        PUSH EDI
005B5CD6  E8 35 FE 0F 00            CALL 0x006b5b10
005B5CDB  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005B5CDE  8B 43 14                  MOV EAX,dword ptr [EBX + 0x14]
005B5CE1  03 C6                     ADD EAX,ESI
005B5CE3  6A 0D                     PUSH 0xd
005B5CE5  8B 91 5B 1A 00 00         MOV EDX,dword ptr [ECX + 0x1a5b]
005B5CEB  8B 8A 40 01 00 00         MOV ECX,dword ptr [EDX + 0x140]
005B5CF1  8D 50 FD                  LEA EDX,[EAX + -0x3]
005B5CF4  51                        PUSH ECX
005B5CF5  6A 14                     PUSH 0x14
005B5CF7  52                        PUSH EDX
005B5CF8  83 C0 FA                  ADD EAX,-0x6
005B5CFB  6A 17                     PUSH 0x17
005B5CFD  50                        PUSH EAX
005B5CFE  6A 00                     PUSH 0x0
005B5D00  57                        PUSH EDI
005B5D01  E8 0A FE 0F 00            CALL 0x006b5b10
005B5D06  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005B5D09  8B 43 14                  MOV EAX,dword ptr [EBX + 0x14]
005B5D0C  6A 0D                     PUSH 0xd
005B5D0E  8B 91 5B 1A 00 00         MOV EDX,dword ptr [ECX + 0x1a5b]
005B5D14  8D 74 30 FD               LEA ESI,[EAX + ESI*0x1 + -0x3]
005B5D18  8B 82 40 01 00 00         MOV EAX,dword ptr [EDX + 0x140]
005B5D1E  50                        PUSH EAX
005B5D1F  6A 02                     PUSH 0x2
005B5D21  56                        PUSH ESI
005B5D22  6A 14                     PUSH 0x14
005B5D24  56                        PUSH ESI
005B5D25  6A 00                     PUSH 0x0
005B5D27  57                        PUSH EDI
005B5D28  E8 E3 FD 0F 00            CALL 0x006b5b10
005B5D2D  5F                        POP EDI
005B5D2E  5E                        POP ESI
005B5D2F  5B                        POP EBX
005B5D30  8B E5                     MOV ESP,EBP
005B5D32  5D                        POP EBP
005B5D33  C2 08 00                  RET 0x8
LAB_005b5d36:
005B5D36  8B 4B 14                  MOV ECX,dword ptr [EBX + 0x14]
005B5D39  6A 13                     PUSH 0x13
005B5D3B  83 E9 02                  SUB ECX,0x2
005B5D3E  51                        PUSH ECX
005B5D3F  6A 00                     PUSH 0x0
005B5D41  56                        PUSH ESI
005B5D42  6A 00                     PUSH 0x0
005B5D44  57                        PUSH EDI
005B5D45  E8 26 E4 0F 00            CALL 0x006b4170
005B5D4A  8B 53 14                  MOV EDX,dword ptr [EBX + 0x14]
005B5D4D  6A 00                     PUSH 0x0
005B5D4F  83 EA 06                  SUB EDX,0x6
005B5D52  6A 03                     PUSH 0x3
005B5D54  52                        PUSH EDX
005B5D55  8D 46 02                  LEA EAX,[ESI + 0x2]
005B5D58  6A 13                     PUSH 0x13
005B5D5A  50                        PUSH EAX
005B5D5B  6A 00                     PUSH 0x0
005B5D5D  57                        PUSH EDI
005B5D5E  E8 0D E4 0F 00            CALL 0x006b4170
005B5D63  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005B5D66  6A 0D                     PUSH 0xd
005B5D68  8B 91 5B 1A 00 00         MOV EDX,dword ptr [ECX + 0x1a5b]
005B5D6E  8B 0B                     MOV ECX,dword ptr [EBX]
005B5D70  49                        DEC ECX
005B5D71  8B 82 40 01 00 00         MOV EAX,dword ptr [EDX + 0x140]
005B5D77  F7 D9                     NEG ECX
005B5D79  1B C9                     SBB ECX,ECX
005B5D7B  50                        PUSH EAX
005B5D7C  6A 13                     PUSH 0x13
005B5D7E  83 E1 02                  AND ECX,0x2
005B5D81  56                        PUSH ESI
005B5D82  51                        PUSH ECX
005B5D83  56                        PUSH ESI
005B5D84  6A 00                     PUSH 0x0
005B5D86  57                        PUSH EDI
005B5D87  E8 84 FD 0F 00            CALL 0x006b5b10
005B5D8C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005B5D8F  6A 0D                     PUSH 0xd
005B5D91  8D 46 03                  LEA EAX,[ESI + 0x3]
005B5D94  8B 8A 5B 1A 00 00         MOV ECX,dword ptr [EDX + 0x1a5b]
005B5D9A  8B 91 40 01 00 00         MOV EDX,dword ptr [ECX + 0x140]
005B5DA0  52                        PUSH EDX
005B5DA1  6A 16                     PUSH 0x16
005B5DA3  50                        PUSH EAX
005B5DA4  6A 13                     PUSH 0x13
005B5DA6  56                        PUSH ESI
005B5DA7  6A 00                     PUSH 0x0
005B5DA9  57                        PUSH EDI
005B5DAA  E8 61 FD 0F 00            CALL 0x006b5b10
005B5DAF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005B5DB2  6A 0D                     PUSH 0xd
005B5DB4  8B 88 5B 1A 00 00         MOV ECX,dword ptr [EAX + 0x1a5b]
005B5DBA  8B 43 14                  MOV EAX,dword ptr [EBX + 0x14]
005B5DBD  8B 91 40 01 00 00         MOV EDX,dword ptr [ECX + 0x140]
005B5DC3  8D 4C 30 FA               LEA ECX,[EAX + ESI*0x1 + -0x6]
005B5DC7  52                        PUSH EDX
005B5DC8  6A 16                     PUSH 0x16
005B5DCA  51                        PUSH ECX
005B5DCB  8D 46 03                  LEA EAX,[ESI + 0x3]
005B5DCE  6A 16                     PUSH 0x16
005B5DD0  50                        PUSH EAX
005B5DD1  6A 00                     PUSH 0x0
005B5DD3  57                        PUSH EDI
005B5DD4  E8 37 FD 0F 00            CALL 0x006b5b10
005B5DD9  8B 53 14                  MOV EDX,dword ptr [EBX + 0x14]
005B5DDC  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005B5DDF  6A 0D                     PUSH 0xd
005B5DE1  8D 04 32                  LEA EAX,[EDX + ESI*0x1]
005B5DE4  8B 91 5B 1A 00 00         MOV EDX,dword ptr [ECX + 0x1a5b]
005B5DEA  8B 8A 40 01 00 00         MOV ECX,dword ptr [EDX + 0x140]
005B5DF0  8D 50 FD                  LEA EDX,[EAX + -0x3]
005B5DF3  51                        PUSH ECX
005B5DF4  6A 13                     PUSH 0x13
005B5DF6  52                        PUSH EDX
005B5DF7  83 C0 FA                  ADD EAX,-0x6
005B5DFA  6A 16                     PUSH 0x16
005B5DFC  50                        PUSH EAX
005B5DFD  6A 00                     PUSH 0x0
005B5DFF  57                        PUSH EDI
005B5E00  E8 0B FD 0F 00            CALL 0x006b5b10
005B5E05  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005B5E08  8B 43 14                  MOV EAX,dword ptr [EBX + 0x14]
005B5E0B  6A 0D                     PUSH 0xd
005B5E0D  8B 91 5B 1A 00 00         MOV EDX,dword ptr [ECX + 0x1a5b]
005B5E13  8D 44 30 FD               LEA EAX,[EAX + ESI*0x1 + -0x3]
005B5E17  8B 8A 40 01 00 00         MOV ECX,dword ptr [EDX + 0x140]
005B5E1D  51                        PUSH ECX
005B5E1E  6A 02                     PUSH 0x2
005B5E20  50                        PUSH EAX
005B5E21  6A 13                     PUSH 0x13
005B5E23  50                        PUSH EAX
005B5E24  6A 00                     PUSH 0x0
005B5E26  57                        PUSH EDI
005B5E27  E8 E4 FC 0F 00            CALL 0x006b5b10
005B5E2C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005B5E2F  6A 0D                     PUSH 0xd
005B5E31  8B 82 5B 1A 00 00         MOV EAX,dword ptr [EDX + 0x1a5b]
005B5E37  8B 53 14                  MOV EDX,dword ptr [EBX + 0x14]
005B5E3A  8B 88 40 01 00 00         MOV ECX,dword ptr [EAX + 0x140]
005B5E40  8D 44 32 FD               LEA EAX,[EDX + ESI*0x1 + -0x3]
005B5E44  51                        PUSH ECX
005B5E45  6A 01                     PUSH 0x1
005B5E47  50                        PUSH EAX
005B5E48  6A 01                     PUSH 0x1
005B5E4A  56                        PUSH ESI
005B5E4B  6A 00                     PUSH 0x0
005B5E4D  57                        PUSH EDI
005B5E4E  E8 BD FC 0F 00            CALL 0x006b5b10
005B5E53  5F                        POP EDI
005B5E54  5E                        POP ESI
005B5E55  5B                        POP EBX
005B5E56  8B E5                     MOV ESP,EBP
005B5E58  5D                        POP EBP
005B5E59  C2 08 00                  RET 0x8
