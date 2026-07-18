FUN_004d7e50:
004D7E50  55                        PUSH EBP
004D7E51  8B EC                     MOV EBP,ESP
004D7E53  51                        PUSH ECX
004D7E54  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004D7E57  8B D1                     MOV EDX,ECX
004D7E59  0F BE C8                  MOVSX ECX,AL
004D7E5C  53                        PUSH EBX
004D7E5D  56                        PUSH ESI
004D7E5E  8D 34 89                  LEA ESI,[ECX + ECX*0x4]
004D7E61  57                        PUSH EDI
004D7E62  33 FF                     XOR EDI,EDI
004D7E64  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
004D7E67  8D 34 F1                  LEA ESI,[ECX + ESI*0x8]
004D7E6A  8D 34 71                  LEA ESI,[ECX + ESI*0x2]
004D7E6D  C1 E6 04                  SHL ESI,0x4
004D7E70  03 F1                     ADD ESI,ECX
004D7E72  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004D7E75  8B D9                     MOV EBX,ECX
004D7E77  C1 E3 04                  SHL EBX,0x4
004D7E7A  03 D9                     ADD EBX,ECX
004D7E7C  C1 E3 02                  SHL EBX,0x2
004D7E7F  8D 34 73                  LEA ESI,[EBX + ESI*0x2]
004D7E82  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
004D7E85  39 9E 06 56 7F 00         CMP dword ptr [ESI + 0x7f5606],EBX
004D7E8B  7C 7F                     JL 0x004d7f0c
004D7E8D  89 BE 12 56 7F 00         MOV dword ptr [ESI + 0x7f5612],EDI
LAB_004d7e93:
004D7E93  8B 8E 12 56 7F 00         MOV ECX,dword ptr [ESI + 0x7f5612]
004D7E99  8B BE 1A 56 7F 00         MOV EDI,dword ptr [ESI + 0x7f561a]
004D7E9F  3B CF                     CMP ECX,EDI
004D7EA1  73 74                     JNC 0x004d7f17
004D7EA3  8B BE 16 56 7F 00         MOV EDI,dword ptr [ESI + 0x7f5616]
004D7EA9  0F AF F9                  IMUL EDI,ECX
004D7EAC  03 BE 2A 56 7F 00         ADD EDI,dword ptr [ESI + 0x7f562a]
004D7EB2  8D 49 01                  LEA ECX,[ECX + 0x1]
004D7EB5  89 8E 12 56 7F 00         MOV dword ptr [ESI + 0x7f5612],ECX
004D7EBB  74 5A                     JZ 0x004d7f17
004D7EBD  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004D7EC0  39 0F                     CMP dword ptr [EDI],ECX
004D7EC2  75 CF                     JNZ 0x004d7e93
004D7EC4  53                        PUSH EBX
004D7EC5  50                        PUSH EAX
004D7EC6  8B CA                     MOV ECX,EDX
004D7EC8  E8 9A D4 F2 FF            CALL 0x00405367
004D7ECD  8B 86 06 56 7F 00         MOV EAX,dword ptr [ESI + 0x7f5606]
004D7ED3  2B C3                     SUB EAX,EBX
004D7ED5  89 86 06 56 7F 00         MOV dword ptr [ESI + 0x7f5606],EAX
004D7EDB  8B 96 36 56 7F 00         MOV EDX,dword ptr [ESI + 0x7f5636]
004D7EE1  2B D3                     SUB EDX,EBX
004D7EE3  89 96 36 56 7F 00         MOV dword ptr [ESI + 0x7f5636],EDX
004D7EE9  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
004D7EEC  2B CB                     SUB ECX,EBX
004D7EEE  89 4F 0C                  MOV dword ptr [EDI + 0xc],ECX
004D7EF1  8B 86 06 56 7F 00         MOV EAX,dword ptr [ESI + 0x7f5606]
004D7EF7  85 C0                     TEST EAX,EAX
004D7EF9  BF 01 00 00 00            MOV EDI,0x1
004D7EFE  75 0C                     JNZ 0x004d7f0c
004D7F00  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004D7F03  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004D7F06  52                        PUSH EDX
004D7F07  E8 EA A9 F2 FF            CALL 0x004028f6
LAB_004d7f0c:
004D7F0C  8B C7                     MOV EAX,EDI
004D7F0E  5F                        POP EDI
004D7F0F  5E                        POP ESI
004D7F10  5B                        POP EBX
004D7F11  8B E5                     MOV ESP,EBP
004D7F13  5D                        POP EBP
004D7F14  C2 10 00                  RET 0x10
LAB_004d7f17:
004D7F17  5F                        POP EDI
004D7F18  5E                        POP ESI
004D7F19  33 C0                     XOR EAX,EAX
004D7F1B  5B                        POP EBX
004D7F1C  8B E5                     MOV ESP,EBP
004D7F1E  5D                        POP EBP
004D7F1F  C2 10 00                  RET 0x10
