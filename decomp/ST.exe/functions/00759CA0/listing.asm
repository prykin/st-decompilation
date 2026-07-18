FUN_00759ca0:
00759CA0  55                        PUSH EBP
00759CA1  8B EC                     MOV EBP,ESP
00759CA3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00759CA6  53                        PUSH EBX
00759CA7  56                        PUSH ESI
00759CA8  57                        PUSH EDI
00759CA9  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00759CAC  8B 30                     MOV ESI,dword ptr [EAX]
00759CAE  33 DB                     XOR EBX,EBX
00759CB0  3B FB                     CMP EDI,EBX
00759CB2  7C 05                     JL 0x00759cb9
00759CB4  83 FF 02                  CMP EDI,0x2
00759CB7  7C 18                     JL 0x00759cd1
LAB_00759cb9:
00759CB9  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00759CBF  68 A6 03 00 00            PUSH 0x3a6
00759CC4  68 C8 2D 7F 00            PUSH 0x7f2dc8
00759CC9  51                        PUSH ECX
00759CCA  6A 0C                     PUSH 0xc
00759CCC  E8 6F C1 F4 FF            CALL 0x006a5e40
LAB_00759cd1:
00759CD1  83 FF 01                  CMP EDI,0x1
00759CD4  75 4B                     JNZ 0x00759d21
00759CD6  8B 7E 40                  MOV EDI,dword ptr [ESI + 0x40]
00759CD9  3B FB                     CMP EDI,EBX
00759CDB  74 1A                     JZ 0x00759cf7
LAB_00759cdd:
00759CDD  39 5F 28                  CMP dword ptr [EDI + 0x28],EBX
00759CE0  74 0E                     JZ 0x00759cf0
00759CE2  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00759CE5  8D 57 30                  LEA EDX,[EDI + 0x30]
00759CE8  52                        PUSH EDX
00759CE9  50                        PUSH EAX
00759CEA  89 5F 28                  MOV dword ptr [EDI + 0x28],EBX
00759CED  FF 57 38                  CALL dword ptr [EDI + 0x38]
LAB_00759cf0:
00759CF0  8B 7F 2C                  MOV EDI,dword ptr [EDI + 0x2c]
00759CF3  3B FB                     CMP EDI,EBX
00759CF5  75 E6                     JNZ 0x00759cdd
LAB_00759cf7:
00759CF7  8B 7E 44                  MOV EDI,dword ptr [ESI + 0x44]
00759CFA  89 5E 40                  MOV dword ptr [ESI + 0x40],EBX
00759CFD  3B FB                     CMP EDI,EBX
00759CFF  74 1A                     JZ 0x00759d1b
LAB_00759d01:
00759D01  39 5F 28                  CMP dword ptr [EDI + 0x28],EBX
00759D04  74 0E                     JZ 0x00759d14
00759D06  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00759D09  8D 4F 30                  LEA ECX,[EDI + 0x30]
00759D0C  51                        PUSH ECX
00759D0D  52                        PUSH EDX
00759D0E  89 5F 28                  MOV dword ptr [EDI + 0x28],EBX
00759D11  FF 57 38                  CALL dword ptr [EDI + 0x38]
LAB_00759d14:
00759D14  8B 7F 2C                  MOV EDI,dword ptr [EDI + 0x2c]
00759D17  3B FB                     CMP EDI,EBX
00759D19  75 E6                     JNZ 0x00759d01
LAB_00759d1b:
00759D1B  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00759D1E  89 5E 44                  MOV dword ptr [ESI + 0x44],EBX
LAB_00759d21:
00759D21  8B 44 BE 38               MOV EAX,dword ptr [ESI + EDI*0x4 + 0x38]
00759D25  89 5C BE 38               MOV dword ptr [ESI + EDI*0x4 + 0x38],EBX
00759D29  3B C3                     CMP EAX,EBX
00759D2B  74 2A                     JZ 0x00759d57
LAB_00759d2d:
00759D2D  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00759D30  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
00759D33  8B 38                     MOV EDI,dword ptr [EAX]
00759D35  8D 5C 11 0C               LEA EBX,[ECX + EDX*0x1 + 0xc]
00759D39  53                        PUSH EBX
00759D3A  50                        PUSH EAX
00759D3B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00759D3E  50                        PUSH EAX
00759D3F  E8 FC 65 00 00            CALL 0x00760340
00759D44  8B 56 48                  MOV EDX,dword ptr [ESI + 0x48]
00759D47  8B C7                     MOV EAX,EDI
00759D49  2B D3                     SUB EDX,EBX
00759D4B  85 FF                     TEST EDI,EDI
00759D4D  89 56 48                  MOV dword ptr [ESI + 0x48],EDX
00759D50  75 DB                     JNZ 0x00759d2d
00759D52  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00759D55  33 DB                     XOR EBX,EBX
LAB_00759d57:
00759D57  8B 44 BE 30               MOV EAX,dword ptr [ESI + EDI*0x4 + 0x30]
00759D5B  89 5C BE 30               MOV dword ptr [ESI + EDI*0x4 + 0x30],EBX
00759D5F  3B C3                     CMP EAX,EBX
00759D61  74 25                     JZ 0x00759d88
LAB_00759d63:
00759D63  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00759D66  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
00759D69  8B 38                     MOV EDI,dword ptr [EAX]
00759D6B  8D 5C 11 0C               LEA EBX,[ECX + EDX*0x1 + 0xc]
00759D6F  53                        PUSH EBX
00759D70  50                        PUSH EAX
00759D71  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00759D74  50                        PUSH EAX
00759D75  E8 86 65 00 00            CALL 0x00760300
00759D7A  8B 56 48                  MOV EDX,dword ptr [ESI + 0x48]
00759D7D  8B C7                     MOV EAX,EDI
00759D7F  2B D3                     SUB EDX,EBX
00759D81  85 FF                     TEST EDI,EDI
00759D83  89 56 48                  MOV dword ptr [ESI + 0x48],EDX
00759D86  75 DB                     JNZ 0x00759d63
LAB_00759d88:
00759D88  5F                        POP EDI
00759D89  5E                        POP ESI
00759D8A  5B                        POP EBX
00759D8B  5D                        POP EBP
00759D8C  C2 08 00                  RET 0x8
