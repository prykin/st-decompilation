FUN_005a2c10:
005A2C10  55                        PUSH EBP
005A2C11  8B EC                     MOV EBP,ESP
005A2C13  83 EC 48                  SUB ESP,0x48
005A2C16  8A 81 5F 1A 00 00         MOV AL,byte ptr [ECX + 0x1a5f]
005A2C1C  53                        PUSH EBX
005A2C1D  56                        PUSH ESI
005A2C1E  3C 06                     CMP AL,0x6
005A2C20  57                        PUSH EDI
005A2C21  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005A2C24  0F 85 E6 00 00 00         JNZ 0x005a2d10
005A2C2A  8A 81 60 1A 00 00         MOV AL,byte ptr [ECX + 0x1a60]
005A2C30  84 C0                     TEST AL,AL
005A2C32  0F 85 D8 00 00 00         JNZ 0x005a2d10
005A2C38  8B 81 A6 1E 00 00         MOV EAX,dword ptr [ECX + 0x1ea6]
005A2C3E  85 C0                     TEST EAX,EAX
005A2C40  0F 84 CA 00 00 00         JZ 0x005a2d10
005A2C46  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005A2C4B  8D 55 BC                  LEA EDX,[EBP + -0x44]
005A2C4E  8D 4D B8                  LEA ECX,[EBP + -0x48]
005A2C51  6A 00                     PUSH 0x0
005A2C53  52                        PUSH EDX
005A2C54  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005A2C57  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005A2C5D  E8 8E AB 18 00            CALL 0x0072d7f0
005A2C62  8B F0                     MOV ESI,EAX
005A2C64  83 C4 08                  ADD ESP,0x8
005A2C67  85 F6                     TEST ESI,ESI
005A2C69  75 66                     JNZ 0x005a2cd1
005A2C6B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005A2C6E  33 D2                     XOR EDX,EDX
005A2C70  8B B1 A6 1E 00 00         MOV ESI,dword ptr [ECX + 0x1ea6]
005A2C76  8B 7E 0C                  MOV EDI,dword ptr [ESI + 0xc]
005A2C79  85 FF                     TEST EDI,EDI
005A2C7B  76 2A                     JBE 0x005a2ca7
005A2C7D  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
005A2C80  3B D7                     CMP EDX,EDI
005A2C82  73 0B                     JNC 0x005a2c8f
LAB_005a2c84:
005A2C84  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005A2C87  0F AF C2                  IMUL EAX,EDX
005A2C8A  03 46 1C                  ADD EAX,dword ptr [ESI + 0x1c]
005A2C8D  EB 02                     JMP 0x005a2c91
LAB_005a2c8f:
005A2C8F  33 C0                     XOR EAX,EAX
LAB_005a2c91:
005A2C91  85 C0                     TEST EAX,EAX
005A2C93  74 05                     JZ 0x005a2c9a
005A2C95  39 58 21                  CMP dword ptr [EAX + 0x21],EBX
005A2C98  74 07                     JZ 0x005a2ca1
LAB_005a2c9a:
005A2C9A  42                        INC EDX
005A2C9B  3B D7                     CMP EDX,EDI
005A2C9D  72 E5                     JC 0x005a2c84
005A2C9F  EB 06                     JMP 0x005a2ca7
LAB_005a2ca1:
005A2CA1  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
005A2CA4  89 50 29                  MOV dword ptr [EAX + 0x29],EDX
LAB_005a2ca7:
005A2CA7  8B 91 20 1B 00 00         MOV EDX,dword ptr [ECX + 0x1b20]
005A2CAD  8D 41 1D                  LEA EAX,[ECX + 0x1d]
005A2CB0  50                        PUSH EAX
005A2CB1  52                        PUSH EDX
005A2CB2  6A 02                     PUSH 0x2
005A2CB4  C7 41 2D 05 00 00 00      MOV dword ptr [ECX + 0x2d],0x5
005A2CBB  E8 C0 33 14 00            CALL 0x006e6080
005A2CC0  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005A2CC3  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005A2CC8  5F                        POP EDI
005A2CC9  5E                        POP ESI
005A2CCA  5B                        POP EBX
005A2CCB  8B E5                     MOV ESP,EBP
005A2CCD  5D                        POP EBP
005A2CCE  C2 0C 00                  RET 0xc
LAB_005a2cd1:
005A2CD1  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005A2CD4  68 00 C5 7C 00            PUSH 0x7cc500
005A2CD9  68 CC 4C 7A 00            PUSH 0x7a4ccc
005A2CDE  56                        PUSH ESI
005A2CDF  6A 00                     PUSH 0x0
005A2CE1  68 60 0A 00 00            PUSH 0xa60
005A2CE6  68 70 BF 7C 00            PUSH 0x7cbf70
005A2CEB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005A2CF1  E8 DA A7 10 00            CALL 0x006ad4d0
005A2CF6  83 C4 18                  ADD ESP,0x18
005A2CF9  85 C0                     TEST EAX,EAX
005A2CFB  74 01                     JZ 0x005a2cfe
005A2CFD  CC                        INT3
LAB_005a2cfe:
005A2CFE  68 60 0A 00 00            PUSH 0xa60
005A2D03  68 70 BF 7C 00            PUSH 0x7cbf70
005A2D08  6A 00                     PUSH 0x0
005A2D0A  56                        PUSH ESI
005A2D0B  E8 30 31 10 00            CALL 0x006a5e40
LAB_005a2d10:
005A2D10  5F                        POP EDI
005A2D11  5E                        POP ESI
005A2D12  5B                        POP EBX
005A2D13  8B E5                     MOV ESP,EBP
005A2D15  5D                        POP EBP
005A2D16  C2 0C 00                  RET 0xc
