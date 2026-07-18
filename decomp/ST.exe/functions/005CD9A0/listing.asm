SettMapMTy::ChgPlList:
005CD9A0  55                        PUSH EBP
005CD9A1  8B EC                     MOV EBP,ESP
005CD9A3  81 EC 58 01 00 00         SUB ESP,0x158
005CD9A9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005CD9AE  56                        PUSH ESI
005CD9AF  57                        PUSH EDI
005CD9B0  8D 55 C0                  LEA EDX,[EBP + -0x40]
005CD9B3  8D 4D BC                  LEA ECX,[EBP + -0x44]
005CD9B6  6A 00                     PUSH 0x0
005CD9B8  52                        PUSH EDX
005CD9B9  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
005CD9BC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005CD9C2  E8 29 FE 15 00            CALL 0x0072d7f0
005CD9C7  8B F0                     MOV ESI,EAX
005CD9C9  83 C4 08                  ADD ESP,0x8
005CD9CC  85 F6                     TEST ESI,ESI
005CD9CE  0F 85 AD 00 00 00         JNZ 0x005cda81
005CD9D4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005CD9D7  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005CD9DA  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
005CD9DD  89 85 A8 FE FF FF         MOV dword ptr [EBP + 0xfffffea8],EAX
005CD9E3  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
005CD9E6  89 8D AC FE FF FF         MOV dword ptr [EBP + 0xfffffeac],ECX
005CD9EC  89 85 B4 FE FF FF         MOV dword ptr [EBP + 0xfffffeb4],EAX
005CD9F2  A0 A0 67 80 00            MOV AL,[0x008067a0]
005CD9F7  84 C0                     TEST AL,AL
005CD9F9  89 95 B0 FE FF FF         MOV dword ptr [EBP + 0xfffffeb0],EDX
005CD9FF  BF 1D 7E 80 00            MOV EDI,0x807e1d
005CDA04  75 05                     JNZ 0x005cda0b
005CDA06  BF DD 7D 80 00            MOV EDI,0x807ddd
LAB_005cda0b:
005CDA0B  83 C9 FF                  OR ECX,0xffffffff
005CDA0E  33 C0                     XOR EAX,EAX
005CDA10  F2 AE                     SCASB.REPNE ES:EDI
005CDA12  F7 D1                     NOT ECX
005CDA14  2B F9                     SUB EDI,ECX
005CDA16  8D 95 B8 FE FF FF         LEA EDX,[EBP + 0xfffffeb8]
005CDA1C  8B C1                     MOV EAX,ECX
005CDA1E  8B F7                     MOV ESI,EDI
005CDA20  8B FA                     MOV EDI,EDX
005CDA22  6A 01                     PUSH 0x1
005CDA24  C1 E9 02                  SHR ECX,0x2
005CDA27  F3 A5                     MOVSD.REP ES:EDI,ESI
005CDA29  8B C8                     MOV ECX,EAX
005CDA2B  83 E1 03                  AND ECX,0x3
005CDA2E  F3 A4                     MOVSB.REP ES:EDI,ESI
005CDA30  8B 0D 64 17 81 00         MOV ECX,dword ptr [0x00811764]
005CDA36  51                        PUSH ECX
005CDA37  E8 C4 8A 0E 00            CALL 0x006b6500
005CDA3C  A1 64 17 81 00            MOV EAX,[0x00811764]
005CDA41  6A FF                     PUSH -0x1
005CDA43  6A 01                     PUSH 0x1
005CDA45  8D 95 A8 FE FF FF         LEA EDX,[EBP + 0xfffffea8]
005CDA4B  68 14 01 00 00            PUSH 0x114
005CDA50  52                        PUSH EDX
005CDA51  6A 24                     PUSH 0x24
005CDA53  6A 01                     PUSH 0x1
005CDA55  50                        PUSH EAX
005CDA56  E8 05 79 14 00            CALL 0x00715360
005CDA5B  8B 0D 3C 73 80 00         MOV ECX,dword ptr [0x0080733c]
005CDA61  8B 15 64 17 81 00         MOV EDX,dword ptr [0x00811764]
005CDA67  83 C4 1C                  ADD ESP,0x1c
005CDA6A  51                        PUSH ECX
005CDA6B  52                        PUSH EDX
005CDA6C  E8 8F 8A 0E 00            CALL 0x006b6500
005CDA71  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
005CDA74  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005CDA79  5F                        POP EDI
005CDA7A  5E                        POP ESI
005CDA7B  8B E5                     MOV ESP,EBP
005CDA7D  5D                        POP EBP
005CDA7E  C2 10 00                  RET 0x10
LAB_005cda81:
005CDA81  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
005CDA84  68 2C D3 7C 00            PUSH 0x7cd32c
005CDA89  68 CC 4C 7A 00            PUSH 0x7a4ccc
005CDA8E  56                        PUSH ESI
005CDA8F  6A 00                     PUSH 0x0
005CDA91  68 DD 01 00 00            PUSH 0x1dd
005CDA96  68 58 D2 7C 00            PUSH 0x7cd258
005CDA9B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005CDAA1  E8 2A FA 0D 00            CALL 0x006ad4d0
005CDAA6  83 C4 18                  ADD ESP,0x18
005CDAA9  85 C0                     TEST EAX,EAX
005CDAAB  74 01                     JZ 0x005cdaae
005CDAAD  CC                        INT3
LAB_005cdaae:
005CDAAE  68 DD 01 00 00            PUSH 0x1dd
005CDAB3  68 58 D2 7C 00            PUSH 0x7cd258
005CDAB8  6A 00                     PUSH 0x0
005CDABA  56                        PUSH ESI
005CDABB  E8 80 83 0D 00            CALL 0x006a5e40
005CDAC0  5F                        POP EDI
005CDAC1  5E                        POP ESI
005CDAC2  8B E5                     MOV ESP,EBP
005CDAC4  5D                        POP EBP
005CDAC5  C2 10 00                  RET 0x10
