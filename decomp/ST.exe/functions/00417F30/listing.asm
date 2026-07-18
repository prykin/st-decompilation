FUN_00417f30:
00417F30  55                        PUSH EBP
00417F31  8B EC                     MOV EBP,ESP
00417F33  51                        PUSH ECX
00417F34  0F BF 55 0C               MOVSX EDX,word ptr [EBP + 0xc]
00417F38  53                        PUSH EBX
00417F39  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00417F3C  0F BF 0D 7E B2 7F 00      MOVSX ECX,word ptr [0x007fb27e]
00417F43  56                        PUSH ESI
00417F44  57                        PUSH EDI
00417F45  0F BF 75 10               MOVSX ESI,word ptr [EBP + 0x10]
00417F49  0F BF 3D 78 B2 7F 00      MOVSX EDI,word ptr [0x007fb278]
00417F50  0F AF CE                  IMUL ECX,ESI
00417F53  0F BF 45 08               MOVSX EAX,word ptr [EBP + 0x8]
00417F57  0F AF FA                  IMUL EDI,EDX
00417F5A  8B D8                     MOV EBX,EAX
00417F5C  03 D9                     ADD EBX,ECX
00417F5E  8B 0D 80 B2 7F 00         MOV ECX,dword ptr [0x007fb280]
00417F64  03 FB                     ADD EDI,EBX
00417F66  66 83 3C 79 00            CMP word ptr [ECX + EDI*0x2],0x0
00417F6B  7D 0B                     JGE 0x00417f78
00417F6D  5F                        POP EDI
00417F6E  5E                        POP ESI
00417F6F  33 C0                     XOR EAX,EAX
00417F71  5B                        POP EBX
00417F72  8B E5                     MOV ESP,EBP
00417F74  5D                        POP EBP
00417F75  C2 0C 00                  RET 0xc
LAB_00417f78:
00417F78  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
00417F7F  0F AF CE                  IMUL ECX,ESI
00417F82  0F BF 35 40 B2 7F 00      MOVSX ESI,word ptr [0x007fb240]
00417F89  0F AF F2                  IMUL ESI,EDX
00417F8C  03 C1                     ADD EAX,ECX
00417F8E  33 D2                     XOR EDX,EDX
00417F90  03 F0                     ADD ESI,EAX
00417F92  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00417F95  5F                        POP EDI
00417F96  8A 90 8E 00 00 00         MOV DL,byte ptr [EAX + 0x8e]
00417F9C  33 C0                     XOR EAX,EAX
00417F9E  8D 0C 72                  LEA ECX,[EDX + ESI*0x2]
00417FA1  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00417FA7  83 3C 8A 00               CMP dword ptr [EDX + ECX*0x4],0x0
00417FAB  5E                        POP ESI
00417FAC  5B                        POP EBX
00417FAD  0F 94 C0                  SETZ AL
00417FB0  8B E5                     MOV ESP,EBP
00417FB2  5D                        POP EBP
00417FB3  C2 0C 00                  RET 0xc
