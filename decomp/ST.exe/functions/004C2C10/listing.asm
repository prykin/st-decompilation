FUN_004c2c10:
004C2C10  55                        PUSH EBP
004C2C11  8B EC                     MOV EBP,ESP
004C2C13  83 EC 54                  SUB ESP,0x54
004C2C16  56                        PUSH ESI
004C2C17  8B F1                     MOV ESI,ECX
004C2C19  8B 86 08 04 00 00         MOV EAX,dword ptr [ESI + 0x408]
004C2C1F  85 C0                     TEST EAX,EAX
004C2C21  0F 85 C5 00 00 00         JNZ 0x004c2cec
004C2C27  57                        PUSH EDI
004C2C28  B9 14 00 00 00            MOV ECX,0x14
004C2C2D  33 C0                     XOR EAX,EAX
004C2C2F  8D 7D AC                  LEA EDI,[EBP + -0x54]
004C2C32  F3 AB                     STOSD.REP ES:EDI
004C2C34  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004C2C37  BF 01 00 00 00            MOV EDI,0x1
004C2C3C  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
004C2C3F  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004C2C45  C1 E0 02                  SHL EAX,0x2
004C2C48  89 7D B8                  MOV dword ptr [EBP + -0x48],EDI
004C2C4B  89 7D B4                  MOV dword ptr [EBP + -0x4c],EDI
004C2C4E  8B 88 A4 4F 79 00         MOV ECX,dword ptr [EAX + 0x794fa4]
004C2C54  8B 90 AC 50 79 00         MOV EDX,dword ptr [EAX + 0x7950ac]
004C2C5A  0F BF 46 41               MOVSX EAX,word ptr [ESI + 0x41]
004C2C5E  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
004C2C61  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
004C2C64  0F BF 4E 43               MOVSX ECX,word ptr [ESI + 0x43]
004C2C68  33 C0                     XOR EAX,EAX
004C2C6A  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
004C2C6D  66 8B 46 32               MOV AX,word ptr [ESI + 0x32]
004C2C71  89 4D C4                  MOV dword ptr [EBP + -0x3c],ECX
004C2C74  0F BF 56 45               MOVSX EDX,word ptr [ESI + 0x45]
004C2C78  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
004C2C7B  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
004C2C7E  8B 86 AC 05 00 00         MOV EAX,dword ptr [ESI + 0x5ac]
004C2C84  C7 45 AC DC 00 00 00      MOV dword ptr [EBP + -0x54],0xdc
004C2C8B  83 F8 4D                  CMP EAX,0x4d
004C2C8E  C7 45 D4 64 00 00 00      MOV dword ptr [EBP + -0x2c],0x64
004C2C95  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
004C2C98  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
004C2C9B  74 10                     JZ 0x004c2cad
004C2C9D  83 F8 73                  CMP EAX,0x73
004C2CA0  75 14                     JNZ 0x004c2cb6
004C2CA2  8B 96 D0 04 00 00         MOV EDX,dword ptr [ESI + 0x4d0]
004C2CA8  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
004C2CAB  EB 09                     JMP 0x004c2cb6
LAB_004c2cad:
004C2CAD  8B 86 D4 04 00 00         MOV EAX,dword ptr [ESI + 0x4d4]
004C2CB3  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
LAB_004c2cb6:
004C2CB6  8D 4D AC                  LEA ECX,[EBP + -0x54]
004C2CB9  6A 00                     PUSH 0x0
004C2CBB  8D 55 FC                  LEA EDX,[EBP + -0x4]
004C2CBE  51                        PUSH ECX
004C2CBF  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004C2CC5  52                        PUSH EDX
004C2CC6  6A 00                     PUSH 0x0
004C2CC8  68 DC 00 00 00            PUSH 0xdc
004C2CCD  E8 F0 EE F3 FF            CALL 0x00401bc2
004C2CD2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004C2CD5  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
004C2CD8  89 BE 08 04 00 00         MOV dword ptr [ESI + 0x408],EDI
004C2CDE  89 8E 0C 04 00 00         MOV dword ptr [ESI + 0x40c],ECX
004C2CE4  5F                        POP EDI
004C2CE5  33 C0                     XOR EAX,EAX
004C2CE7  5E                        POP ESI
004C2CE8  8B E5                     MOV ESP,EBP
004C2CEA  5D                        POP EBP
004C2CEB  C3                        RET
LAB_004c2cec:
004C2CEC  33 C0                     XOR EAX,EAX
004C2CEE  5E                        POP ESI
004C2CEF  8B E5                     MOV ESP,EBP
004C2CF1  5D                        POP EBP
004C2CF2  C3                        RET
