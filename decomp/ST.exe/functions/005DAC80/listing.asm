FUN_005dac80:
005DAC80  55                        PUSH EBP
005DAC81  8B EC                     MOV EBP,ESP
005DAC83  81 EC D8 03 00 00         SUB ESP,0x3d8
005DAC89  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005DAC8E  53                        PUSH EBX
005DAC8F  56                        PUSH ESI
005DAC90  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005DAC93  57                        PUSH EDI
005DAC94  8D 55 BC                  LEA EDX,[EBP + -0x44]
005DAC97  8D 4D B8                  LEA ECX,[EBP + -0x48]
005DAC9A  6A 00                     PUSH 0x0
005DAC9C  52                        PUSH EDX
005DAC9D  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005DACA0  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005DACA6  E8 45 2B 15 00            CALL 0x0072d7f0
005DACAB  8B F0                     MOV ESI,EAX
005DACAD  83 C4 08                  ADD ESP,0x8
005DACB0  85 F6                     TEST ESI,ESI
005DACB2  0F 85 A2 00 00 00         JNZ 0x005dad5a
005DACB8  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
005DACBB  8B 83 96 06 00 00         MOV EAX,dword ptr [EBX + 0x696]
005DACC1  85 C0                     TEST EAX,EAX
005DACC3  74 06                     JZ 0x005daccb
005DACC5  50                        PUSH EAX
005DACC6  E8 A5 A8 0D 00            CALL 0x006b5570
LAB_005daccb:
005DACCB  6A 0A                     PUSH 0xa
005DACCD  6A 0A                     PUSH 0xa
005DACCF  6A 00                     PUSH 0x0
005DACD1  E8 1A A8 0D 00            CALL 0x006b54f0
005DACD6  89 83 96 06 00 00         MOV dword ptr [EBX + 0x696],EAX
005DACDC  8D 85 28 FE FF FF         LEA EAX,[EBP + 0xfffffe28]
005DACE2  50                        PUSH EAX
005DACE3  68 01 01 00 00            PUSH 0x101
005DACE8  E8 EF 29 15 00            CALL 0x0072d6dc
005DACED  85 C0                     TEST EAX,EAX
005DACEF  75 5A                     JNZ 0x005dad4b
005DACF1  8D 8D 28 FC FF FF         LEA ECX,[EBP + 0xfffffc28]
005DACF7  68 00 02 00 00            PUSH 0x200
005DACFC  51                        PUSH ECX
005DACFD  E8 D4 29 15 00            CALL 0x0072d6d6
005DAD02  83 F8 FF                  CMP EAX,-0x1
005DAD05  74 3F                     JZ 0x005dad46
005DAD07  8D 95 28 FC FF FF         LEA EDX,[EBP + 0xfffffc28]
005DAD0D  52                        PUSH EDX
005DAD0E  E8 BD 29 15 00            CALL 0x0072d6d0
005DAD13  8B F8                     MOV EDI,EAX
005DAD15  85 FF                     TEST EDI,EDI
005DAD17  74 2D                     JZ 0x005dad46
005DAD19  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
005DAD1C  8B 00                     MOV EAX,dword ptr [EAX]
005DAD1E  85 C0                     TEST EAX,EAX
005DAD20  74 24                     JZ 0x005dad46
005DAD22  33 F6                     XOR ESI,ESI
LAB_005dad24:
005DAD24  8B 00                     MOV EAX,dword ptr [EAX]
005DAD26  50                        PUSH EAX
005DAD27  E8 9E 29 15 00            CALL 0x0072d6ca
005DAD2C  8B 8B 96 06 00 00         MOV ECX,dword ptr [EBX + 0x696]
005DAD32  50                        PUSH EAX
005DAD33  51                        PUSH ECX
005DAD34  E8 67 AD 0D 00            CALL 0x006b5aa0
005DAD39  8B 57 0C                  MOV EDX,dword ptr [EDI + 0xc]
005DAD3C  83 C6 04                  ADD ESI,0x4
005DAD3F  8B 04 32                  MOV EAX,dword ptr [EDX + ESI*0x1]
005DAD42  85 C0                     TEST EAX,EAX
005DAD44  75 DE                     JNZ 0x005dad24
LAB_005dad46:
005DAD46  E8 79 29 15 00            CALL 0x0072d6c4
LAB_005dad4b:
005DAD4B  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005DAD4E  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005DAD53  5F                        POP EDI
005DAD54  5E                        POP ESI
005DAD55  5B                        POP EBX
005DAD56  8B E5                     MOV ESP,EBP
005DAD58  5D                        POP EBP
005DAD59  C3                        RET
LAB_005dad5a:
005DAD5A  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005DAD5D  68 40 D7 7C 00            PUSH 0x7cd740
005DAD62  68 CC 4C 7A 00            PUSH 0x7a4ccc
005DAD67  56                        PUSH ESI
005DAD68  6A 00                     PUSH 0x0
005DAD6A  68 CE 00 00 00            PUSH 0xce
005DAD6F  68 18 D7 7C 00            PUSH 0x7cd718
005DAD74  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005DAD7A  E8 51 27 0D 00            CALL 0x006ad4d0
005DAD7F  83 C4 18                  ADD ESP,0x18
005DAD82  85 C0                     TEST EAX,EAX
005DAD84  74 01                     JZ 0x005dad87
005DAD86  CC                        INT3
LAB_005dad87:
005DAD87  68 CE 00 00 00            PUSH 0xce
005DAD8C  68 18 D7 7C 00            PUSH 0x7cd718
005DAD91  6A 00                     PUSH 0x0
005DAD93  56                        PUSH ESI
005DAD94  E8 A7 B0 0C 00            CALL 0x006a5e40
005DAD99  5F                        POP EDI
005DAD9A  5E                        POP ESI
005DAD9B  5B                        POP EBX
005DAD9C  8B E5                     MOV ESP,EBP
005DAD9E  5D                        POP EBP
005DAD9F  C3                        RET
