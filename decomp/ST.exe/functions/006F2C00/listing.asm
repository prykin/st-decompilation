FUN_006f2c00:
006F2C00  55                        PUSH EBP
006F2C01  8B EC                     MOV EBP,ESP
006F2C03  83 EC 40                  SUB ESP,0x40
006F2C06  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006F2C09  53                        PUSH EBX
006F2C0A  56                        PUSH ESI
006F2C0B  8B 35 C4 6F 85 00         MOV ESI,dword ptr [0x00856fc4]
006F2C11  85 C0                     TEST EAX,EAX
006F2C13  57                        PUSH EDI
006F2C14  7E 48                     JLE 0x006f2c5e
006F2C16  8D 4D E0                  LEA ECX,[EBP + -0x20]
006F2C19  6A 0A                     PUSH 0xa
006F2C1B  51                        PUSH ECX
006F2C1C  50                        PUSH EAX
006F2C1D  E8 3E B2 03 00            CALL 0x0072de60
006F2C22  8B 3D E8 BD 85 00         MOV EDI,dword ptr [0x0085bde8]
006F2C28  8D 55 E0                  LEA EDX,[EBP + -0x20]
006F2C2B  68 30 56 7D 00            PUSH 0x7d5630
006F2C30  52                        PUSH EDX
006F2C31  68 28 56 7D 00            PUSH 0x7d5628
006F2C36  8D 45 C0                  LEA EAX,[EBP + -0x40]
006F2C39  68 DC 6E 7C 00            PUSH 0x7c6edc
006F2C3E  50                        PUSH EAX
006F2C3F  FF D7                     CALL EDI
006F2C41  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006F2C44  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006F2C47  C1 E6 05                  SHL ESI,0x5
006F2C4A  51                        PUSH ECX
006F2C4B  8D 45 C0                  LEA EAX,[EBP + -0x40]
006F2C4E  8D 9E 40 6E 85 00         LEA EBX,[ESI + 0x856e40]
006F2C54  52                        PUSH EDX
006F2C55  50                        PUSH EAX
006F2C56  53                        PUSH EBX
006F2C57  FF D7                     CALL EDI
006F2C59  83 C4 30                  ADD ESP,0x30
006F2C5C  EB 29                     JMP 0x006f2c87
LAB_006f2c5e:
006F2C5E  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006F2C61  83 C9 FF                  OR ECX,0xffffffff
006F2C64  33 C0                     XOR EAX,EAX
006F2C66  C1 E6 05                  SHL ESI,0x5
006F2C69  F2 AE                     SCASB.REPNE ES:EDI
006F2C6B  F7 D1                     NOT ECX
006F2C6D  2B F9                     SUB EDI,ECX
006F2C6F  8D 9E 40 6E 85 00         LEA EBX,[ESI + 0x856e40]
006F2C75  8B D1                     MOV EDX,ECX
006F2C77  8B F7                     MOV ESI,EDI
006F2C79  8B FB                     MOV EDI,EBX
006F2C7B  C1 E9 02                  SHR ECX,0x2
006F2C7E  F3 A5                     MOVSD.REP ES:EDI,ESI
006F2C80  8B CA                     MOV ECX,EDX
006F2C82  83 E1 03                  AND ECX,0x3
006F2C85  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_006f2c87:
006F2C87  A1 C4 6F 85 00            MOV EAX,[0x00856fc4]
006F2C8C  40                        INC EAX
006F2C8D  83 F8 04                  CMP EAX,0x4
006F2C90  A3 C4 6F 85 00            MOV [0x00856fc4],EAX
006F2C95  7C 0A                     JL 0x006f2ca1
006F2C97  C7 05 C4 6F 85 00 00 00 00 00  MOV dword ptr [0x00856fc4],0x0
LAB_006f2ca1:
006F2CA1  5F                        POP EDI
006F2CA2  8B C3                     MOV EAX,EBX
006F2CA4  5E                        POP ESI
006F2CA5  5B                        POP EBX
006F2CA6  8B E5                     MOV ESP,EBP
006F2CA8  5D                        POP EBP
006F2CA9  C3                        RET
