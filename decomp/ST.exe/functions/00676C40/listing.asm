FUN_00676c40:
00676C40  55                        PUSH EBP
00676C41  8B EC                     MOV EBP,ESP
00676C43  53                        PUSH EBX
00676C44  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00676C47  56                        PUSH ESI
00676C48  57                        PUSH EDI
00676C49  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
00676C4C  83 F8 01                  CMP EAX,0x1
00676C4F  76 63                     JBE 0x00676cb4
LAB_00676c51:
00676C51  8D 48 FF                  LEA ECX,[EAX + -0x1]
00676C54  33 F6                     XOR ESI,ESI
00676C56  85 C9                     TEST ECX,ECX
00676C58  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
00676C5B  7E 57                     JLE 0x00676cb4
LAB_00676c5d:
00676C5D  3B F0                     CMP ESI,EAX
00676C5F  73 0D                     JNC 0x00676c6e
00676C61  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
00676C64  8B 53 1C                  MOV EDX,dword ptr [EBX + 0x1c]
00676C67  0F AF CE                  IMUL ECX,ESI
00676C6A  03 CA                     ADD ECX,EDX
00676C6C  EB 02                     JMP 0x00676c70
LAB_00676c6e:
00676C6E  33 C9                     XOR ECX,ECX
LAB_00676c70:
00676C70  8D 7E 01                  LEA EDI,[ESI + 0x1]
00676C73  3B F8                     CMP EDI,EAX
00676C75  73 0D                     JNC 0x00676c84
00676C77  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
00676C7A  8B 53 1C                  MOV EDX,dword ptr [EBX + 0x1c]
00676C7D  0F AF C7                  IMUL EAX,EDI
00676C80  03 C2                     ADD EAX,EDX
00676C82  EB 02                     JMP 0x00676c86
LAB_00676c84:
00676C84  33 C0                     XOR EAX,EAX
LAB_00676c86:
00676C86  51                        PUSH ECX
00676C87  50                        PUSH EAX
00676C88  FF 55 0C                  CALL dword ptr [EBP + 0xc]
00676C8B  83 C4 08                  ADD ESP,0x8
00676C8E  85 C0                     TEST EAX,EAX
00676C90  7E 0F                     JLE 0x00676ca1
00676C92  57                        PUSH EDI
00676C93  56                        PUSH ESI
00676C94  53                        PUSH EBX
00676C95  E8 36 A0 03 00            CALL 0x006b0cd0
00676C9A  C7 45 08 01 00 00 00      MOV dword ptr [EBP + 0x8],0x1
LAB_00676ca1:
00676CA1  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
00676CA4  8B F7                     MOV ESI,EDI
00676CA6  8D 50 FF                  LEA EDX,[EAX + -0x1]
00676CA9  3B F2                     CMP ESI,EDX
00676CAB  7C B0                     JL 0x00676c5d
00676CAD  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00676CB0  85 C9                     TEST ECX,ECX
00676CB2  75 9D                     JNZ 0x00676c51
LAB_00676cb4:
00676CB4  5F                        POP EDI
00676CB5  5E                        POP ESI
00676CB6  5B                        POP EBX
00676CB7  5D                        POP EBP
00676CB8  C3                        RET
