FUN_005f15f0:
005F15F0  55                        PUSH EBP
005F15F1  8B EC                     MOV EBP,ESP
005F15F3  83 EC 20                  SUB ESP,0x20
005F15F6  56                        PUSH ESI
005F15F7  8B F1                     MOV ESI,ECX
005F15F9  57                        PUSH EDI
005F15FA  83 CF FF                  OR EDI,0xffffffff
005F15FD  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
005F1600  85 C0                     TEST EAX,EAX
005F1602  75 10                     JNZ 0x005f1614
005F1604  6A 0A                     PUSH 0xa
005F1606  6A 20                     PUSH 0x20
005F1608  6A 0A                     PUSH 0xa
005F160A  6A 00                     PUSH 0x0
005F160C  E8 7F CC 0B 00            CALL 0x006ae290
005F1611  89 46 3C                  MOV dword ptr [ESI + 0x3c],EAX
LAB_005f1614:
005F1614  8B 76 3C                  MOV ESI,dword ptr [ESI + 0x3c]
005F1617  85 F6                     TEST ESI,ESI
005F1619  0F 84 96 00 00 00         JZ 0x005f16b5
005F161F  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
005F1623  B9 08 00 00 00            MOV ECX,0x8
005F1628  33 C0                     XOR EAX,EAX
005F162A  8D 7D E0                  LEA EDI,[EBP + -0x20]
005F162D  F3 AB                     STOSD.REP ES:EDI
005F162F  66 8B 45 08               MOV AX,word ptr [EBP + 0x8]
005F1633  66 8B 4D 0C               MOV CX,word ptr [EBP + 0xc]
005F1637  66 89 45 E0               MOV word ptr [EBP + -0x20],AX
005F163B  8A 45 14                  MOV AL,byte ptr [EBP + 0x14]
005F163E  66 89 4D E2               MOV word ptr [EBP + -0x1e],CX
005F1642  66 8B 4D 18               MOV CX,word ptr [EBP + 0x18]
005F1646  66 89 55 E4               MOV word ptr [EBP + -0x1c],DX
005F164A  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
005F1650  88 45 E6                  MOV byte ptr [EBP + -0x1a],AL
005F1653  66 89 4D E7               MOV word ptr [EBP + -0x19],CX
005F1657  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
005F165D  C7 45 F2 00 00 00 00      MOV dword ptr [EBP + -0xe],0x0
005F1664  89 45 E9                  MOV dword ptr [EBP + -0x17],EAX
005F1667  8A 45 1C                  MOV AL,byte ptr [EBP + 0x1c]
005F166A  84 C0                     TEST AL,AL
005F166C  C7 45 EE 00 00 00 00      MOV dword ptr [EBP + -0x12],0x0
005F1673  88 45 F7                  MOV byte ptr [EBP + -0x9],AL
005F1676  C7 45 F8 FF FF FF FF      MOV dword ptr [EBP + -0x8],0xffffffff
005F167D  7C 17                     JL 0x005f1696
005F167F  8D 45 E0                  LEA EAX,[EBP + -0x20]
005F1682  C6 45 F6 00               MOV byte ptr [EBP + -0xa],0x0
005F1686  50                        PUSH EAX
005F1687  56                        PUSH ESI
005F1688  E8 33 CB 0B 00            CALL 0x006ae1c0
005F168D  5F                        POP EDI
005F168E  40                        INC EAX
005F168F  5E                        POP ESI
005F1690  8B E5                     MOV ESP,EBP
005F1692  5D                        POP EBP
005F1693  C2 18 00                  RET 0x18
LAB_005f1696:
005F1696  8B 0D 24 67 80 00         MOV ECX,dword ptr [0x00806724]
005F169C  8D 45 E0                  LEA EAX,[EBP + -0x20]
005F169F  50                        PUSH EAX
005F16A0  56                        PUSH ESI
005F16A1  8A 51 23                  MOV DL,byte ptr [ECX + 0x23]
005F16A4  88 55 F6                  MOV byte ptr [EBP + -0xa],DL
005F16A7  E8 14 CB 0B 00            CALL 0x006ae1c0
005F16AC  5F                        POP EDI
005F16AD  40                        INC EAX
005F16AE  5E                        POP ESI
005F16AF  8B E5                     MOV ESP,EBP
005F16B1  5D                        POP EBP
005F16B2  C2 18 00                  RET 0x18
LAB_005f16b5:
005F16B5  8B C7                     MOV EAX,EDI
005F16B7  5F                        POP EDI
005F16B8  5E                        POP ESI
005F16B9  8B E5                     MOV ESP,EBP
005F16BB  5D                        POP EBP
005F16BC  C2 18 00                  RET 0x18
