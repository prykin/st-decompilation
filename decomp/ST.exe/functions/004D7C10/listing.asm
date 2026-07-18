FUN_004d7c10:
004D7C10  55                        PUSH EBP
004D7C11  8B EC                     MOV EBP,ESP
004D7C13  51                        PUSH ECX
004D7C14  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004D7C17  8B D1                     MOV EDX,ECX
004D7C19  0F BE C8                  MOVSX ECX,AL
004D7C1C  53                        PUSH EBX
004D7C1D  56                        PUSH ESI
004D7C1E  8D 34 89                  LEA ESI,[ECX + ECX*0x4]
004D7C21  57                        PUSH EDI
004D7C22  33 FF                     XOR EDI,EDI
004D7C24  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
004D7C27  8D 34 F1                  LEA ESI,[ECX + ESI*0x8]
004D7C2A  8D 34 71                  LEA ESI,[ECX + ESI*0x2]
004D7C2D  C1 E6 04                  SHL ESI,0x4
004D7C30  03 F1                     ADD ESI,ECX
004D7C32  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004D7C35  8B D9                     MOV EBX,ECX
004D7C37  C1 E3 04                  SHL EBX,0x4
004D7C3A  03 D9                     ADD EBX,ECX
004D7C3C  C1 E3 02                  SHL EBX,0x2
004D7C3F  8D 34 73                  LEA ESI,[EBX + ESI*0x2]
004D7C42  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
004D7C45  39 9E FE 55 7F 00         CMP dword ptr [ESI + 0x7f55fe],EBX
004D7C4B  7C 7F                     JL 0x004d7ccc
004D7C4D  89 BE 12 56 7F 00         MOV dword ptr [ESI + 0x7f5612],EDI
LAB_004d7c53:
004D7C53  8B 8E 12 56 7F 00         MOV ECX,dword ptr [ESI + 0x7f5612]
004D7C59  8B BE 1A 56 7F 00         MOV EDI,dword ptr [ESI + 0x7f561a]
004D7C5F  3B CF                     CMP ECX,EDI
004D7C61  73 74                     JNC 0x004d7cd7
004D7C63  8B BE 16 56 7F 00         MOV EDI,dword ptr [ESI + 0x7f5616]
004D7C69  0F AF F9                  IMUL EDI,ECX
004D7C6C  03 BE 2A 56 7F 00         ADD EDI,dword ptr [ESI + 0x7f562a]
004D7C72  8D 49 01                  LEA ECX,[ECX + 0x1]
004D7C75  89 8E 12 56 7F 00         MOV dword ptr [ESI + 0x7f5612],ECX
004D7C7B  74 5A                     JZ 0x004d7cd7
004D7C7D  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004D7C80  39 0F                     CMP dword ptr [EDI],ECX
004D7C82  75 CF                     JNZ 0x004d7c53
004D7C84  53                        PUSH EBX
004D7C85  50                        PUSH EAX
004D7C86  8B CA                     MOV ECX,EDX
004D7C88  E8 D9 B4 F2 FF            CALL 0x00403166
004D7C8D  8B 86 FE 55 7F 00         MOV EAX,dword ptr [ESI + 0x7f55fe]
004D7C93  2B C3                     SUB EAX,EBX
004D7C95  89 86 FE 55 7F 00         MOV dword ptr [ESI + 0x7f55fe],EAX
004D7C9B  8B 96 2E 56 7F 00         MOV EDX,dword ptr [ESI + 0x7f562e]
004D7CA1  2B D3                     SUB EDX,EBX
004D7CA3  89 96 2E 56 7F 00         MOV dword ptr [ESI + 0x7f562e],EDX
004D7CA9  8B 4F 04                  MOV ECX,dword ptr [EDI + 0x4]
004D7CAC  2B CB                     SUB ECX,EBX
004D7CAE  89 4F 04                  MOV dword ptr [EDI + 0x4],ECX
004D7CB1  8B 86 FE 55 7F 00         MOV EAX,dword ptr [ESI + 0x7f55fe]
004D7CB7  85 C0                     TEST EAX,EAX
004D7CB9  BF 01 00 00 00            MOV EDI,0x1
004D7CBE  75 0C                     JNZ 0x004d7ccc
004D7CC0  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004D7CC3  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004D7CC6  52                        PUSH EDX
004D7CC7  E8 2A AC F2 FF            CALL 0x004028f6
LAB_004d7ccc:
004D7CCC  8B C7                     MOV EAX,EDI
004D7CCE  5F                        POP EDI
004D7CCF  5E                        POP ESI
004D7CD0  5B                        POP EBX
004D7CD1  8B E5                     MOV ESP,EBP
004D7CD3  5D                        POP EBP
004D7CD4  C2 10 00                  RET 0x10
LAB_004d7cd7:
004D7CD7  5F                        POP EDI
004D7CD8  5E                        POP ESI
004D7CD9  33 C0                     XOR EAX,EAX
004D7CDB  5B                        POP EBX
004D7CDC  8B E5                     MOV ESP,EBP
004D7CDE  5D                        POP EBP
004D7CDF  C2 10 00                  RET 0x10
