FUN_005d8a90:
005D8A90  55                        PUSH EBP
005D8A91  8B EC                     MOV EBP,ESP
005D8A93  83 EC 48                  SUB ESP,0x48
005D8A96  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005D8A9B  53                        PUSH EBX
005D8A9C  56                        PUSH ESI
005D8A9D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005D8AA0  57                        PUSH EDI
005D8AA1  8D 55 BC                  LEA EDX,[EBP + -0x44]
005D8AA4  8D 4D B8                  LEA ECX,[EBP + -0x48]
005D8AA7  6A 00                     PUSH 0x0
005D8AA9  52                        PUSH EDX
005D8AAA  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005D8AAD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005D8AB3  E8 38 4D 15 00            CALL 0x0072d7f0
005D8AB8  8B F0                     MOV ESI,EAX
005D8ABA  83 C4 08                  ADD ESP,0x8
005D8ABD  85 F6                     TEST ESI,ESI
005D8ABF  0F 85 94 00 00 00         JNZ 0x005d8b59
005D8AC5  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
005D8AC8  BB 04 00 00 00            MOV EBX,0x4
005D8ACD  8D B7 F1 1A 00 00         LEA ESI,[EDI + 0x1af1]
LAB_005d8ad3:
005D8AD3  8B 06                     MOV EAX,dword ptr [ESI]
005D8AD5  85 C0                     TEST EAX,EAX
005D8AD7  74 09                     JZ 0x005d8ae2
005D8AD9  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
005D8ADC  50                        PUSH EAX
005D8ADD  E8 CE CB 10 00            CALL 0x006e56b0
LAB_005d8ae2:
005D8AE2  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
005D8AE8  83 C6 04                  ADD ESI,0x4
005D8AEB  4B                        DEC EBX
005D8AEC  75 E5                     JNZ 0x005d8ad3
005D8AEE  8B 87 B4 1C 00 00         MOV EAX,dword ptr [EDI + 0x1cb4]
005D8AF4  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005D8AFA  50                        PUSH EAX
005D8AFB  51                        PUSH ECX
005D8AFC  E8 EF AF 0D 00            CALL 0x006b3af0
005D8B01  8B 87 05 1B 00 00         MOV EAX,dword ptr [EDI + 0x1b05]
005D8B07  83 F8 FF                  CMP EAX,-0x1
005D8B0A  74 0D                     JZ 0x005d8b19
005D8B0C  8B 97 49 1B 00 00         MOV EDX,dword ptr [EDI + 0x1b49]
005D8B12  50                        PUSH EAX
005D8B13  52                        PUSH EDX
005D8B14  E8 D7 AF 0D 00            CALL 0x006b3af0
LAB_005d8b19:
005D8B19  8B 87 96 1B 00 00         MOV EAX,dword ptr [EDI + 0x1b96]
005D8B1F  83 F8 FF                  CMP EAX,-0x1
005D8B22  74 0D                     JZ 0x005d8b31
005D8B24  50                        PUSH EAX
005D8B25  8B 87 DA 1B 00 00         MOV EAX,dword ptr [EDI + 0x1bda]
005D8B2B  50                        PUSH EAX
005D8B2C  E8 BF AF 0D 00            CALL 0x006b3af0
LAB_005d8b31:
005D8B31  8B 87 27 1C 00 00         MOV EAX,dword ptr [EDI + 0x1c27]
005D8B37  83 F8 FF                  CMP EAX,-0x1
005D8B3A  74 0D                     JZ 0x005d8b49
005D8B3C  8B 8F 6B 1C 00 00         MOV ECX,dword ptr [EDI + 0x1c6b]
005D8B42  50                        PUSH EAX
005D8B43  51                        PUSH ECX
005D8B44  E8 A7 AF 0D 00            CALL 0x006b3af0
LAB_005d8b49:
005D8B49  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005D8B4C  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005D8B52  5F                        POP EDI
005D8B53  5E                        POP ESI
005D8B54  5B                        POP EBX
005D8B55  8B E5                     MOV ESP,EBP
005D8B57  5D                        POP EBP
005D8B58  C3                        RET
LAB_005d8b59:
005D8B59  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005D8B5C  68 7C D6 7C 00            PUSH 0x7cd67c
005D8B61  68 CC 4C 7A 00            PUSH 0x7a4ccc
005D8B66  56                        PUSH ESI
005D8B67  6A 00                     PUSH 0x0
005D8B69  68 10 01 00 00            PUSH 0x110
005D8B6E  68 C4 D5 7C 00            PUSH 0x7cd5c4
005D8B73  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005D8B78  E8 53 49 0D 00            CALL 0x006ad4d0
005D8B7D  83 C4 18                  ADD ESP,0x18
005D8B80  85 C0                     TEST EAX,EAX
005D8B82  74 01                     JZ 0x005d8b85
005D8B84  CC                        INT3
LAB_005d8b85:
005D8B85  68 10 01 00 00            PUSH 0x110
005D8B8A  68 C4 D5 7C 00            PUSH 0x7cd5c4
005D8B8F  6A 00                     PUSH 0x0
005D8B91  56                        PUSH ESI
005D8B92  E8 A9 D2 0C 00            CALL 0x006a5e40
005D8B97  5F                        POP EDI
005D8B98  5E                        POP ESI
005D8B99  5B                        POP EBX
005D8B9A  8B E5                     MOV ESP,EBP
005D8B9C  5D                        POP EBP
005D8B9D  C3                        RET
