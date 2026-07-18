FUN_005f00b0:
005F00B0  55                        PUSH EBP
005F00B1  8B EC                     MOV EBP,ESP
005F00B3  83 EC 10                  SUB ESP,0x10
005F00B6  56                        PUSH ESI
005F00B7  57                        PUSH EDI
005F00B8  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
005F00BB  8B F1                     MOV ESI,ECX
005F00BD  C6 07 04                  MOV byte ptr [EDI],0x4
005F00C0  8A 86 1D 02 00 00         MOV AL,byte ptr [ESI + 0x21d]
005F00C6  88 47 01                  MOV byte ptr [EDI + 0x1],AL
005F00C9  C6 47 02 01               MOV byte ptr [EDI + 0x2],0x1
005F00CD  8B 16                     MOV EDX,dword ptr [ESI]
005F00CF  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
005F00D2  89 47 03                  MOV dword ptr [EDI + 0x3],EAX
005F00D5  8B 06                     MOV EAX,dword ptr [ESI]
005F00D7  8B CE                     MOV ECX,ESI
005F00D9  FF 50 0C                  CALL dword ptr [EAX + 0xc]
005F00DC  88 47 07                  MOV byte ptr [EDI + 0x7],AL
005F00DF  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
005F00E2  89 4F 08                  MOV dword ptr [EDI + 0x8],ECX
005F00E5  8B 16                     MOV EDX,dword ptr [ESI]
005F00E7  8D 45 F0                  LEA EAX,[EBP + -0x10]
005F00EA  8B CE                     MOV ECX,ESI
005F00EC  50                        PUSH EAX
005F00ED  FF 52 74                  CALL dword ptr [EDX + 0x74]
005F00F0  8D 4D F0                  LEA ECX,[EBP + -0x10]
005F00F3  6A 0E                     PUSH 0xe
005F00F5  8D 57 0C                  LEA EDX,[EDI + 0xc]
005F00F8  51                        PUSH ECX
005F00F9  52                        PUSH EDX
005F00FA  E8 41 E2 13 00            CALL 0x0072e340
005F00FF  8B 06                     MOV EAX,dword ptr [ESI]
005F0101  83 C4 0C                  ADD ESP,0xc
005F0104  8B CE                     MOV ECX,ESI
005F0106  FF 50 7C                  CALL dword ptr [EAX + 0x7c]
005F0109  88 47 1B                  MOV byte ptr [EDI + 0x1b],AL
005F010C  8B B6 3A 02 00 00         MOV ESI,dword ptr [ESI + 0x23a]
005F0112  83 FE 05                  CMP ESI,0x5
005F0115  74 0E                     JZ 0x005f0125
005F0117  83 FE 06                  CMP ESI,0x6
005F011A  74 09                     JZ 0x005f0125
005F011C  83 FE 07                  CMP ESI,0x7
005F011F  74 04                     JZ 0x005f0125
005F0121  C6 47 1D 01               MOV byte ptr [EDI + 0x1d],0x1
LAB_005f0125:
005F0125  5F                        POP EDI
005F0126  5E                        POP ESI
005F0127  8B E5                     MOV ESP,EBP
005F0129  5D                        POP EBP
005F012A  C2 04 00                  RET 0x4
