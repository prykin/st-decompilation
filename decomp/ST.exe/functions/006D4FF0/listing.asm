FUN_006d4ff0:
006D4FF0  55                        PUSH EBP
006D4FF1  8B EC                     MOV EBP,ESP
006D4FF3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006D4FF6  53                        PUSH EBX
006D4FF7  56                        PUSH ESI
006D4FF8  57                        PUSH EDI
006D4FF9  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006D4FFC  8B F1                     MOV ESI,ECX
006D4FFE  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006D5001  57                        PUSH EDI
006D5002  50                        PUSH EAX
006D5003  51                        PUSH ECX
006D5004  68 D0 DA 79 00            PUSH 0x79dad0
006D5009  8B CE                     MOV ECX,ESI
006D500B  E8 B4 5B 07 00            CALL 0x0074abc4
006D5010  68 7C E2 7E 00            PUSH 0x7ee27c
006D5015  8D 56 7C                  LEA EDX,[ESI + 0x7c]
006D5018  57                        PUSH EDI
006D5019  52                        PUSH EDX
006D501A  56                        PUSH ESI
006D501B  6A 00                     PUSH 0x0
006D501D  8D 8E 50 01 00 00         LEA ECX,[ESI + 0x150]
006D5023  E8 F8 06 00 00            CALL 0x006d5720
006D5028  8D 9E 40 02 00 00         LEA EBX,[ESI + 0x240]
006D502E  8B CB                     MOV ECX,EBX
006D5030  E8 E8 68 07 00            CALL 0x0074b91d
006D5035  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006D5038  57                        PUSH EDI
006D5039  33 FF                     XOR EDI,EDI
006D503B  8D 8E 94 02 00 00         LEA ECX,[ESI + 0x294]
006D5041  57                        PUSH EDI
006D5042  56                        PUSH ESI
006D5043  89 86 88 02 00 00         MOV dword ptr [ESI + 0x288],EAX
006D5049  E8 82 0C 00 00            CALL 0x006d5cd0
006D504E  8B CB                     MOV ECX,EBX
006D5050  C7 06 78 DB 79 00         MOV dword ptr [ESI],0x79db78
006D5056  C7 46 0C 3C DB 79 00      MOV dword ptr [ESI + 0xc],0x79db3c
006D505D  C7 46 10 28 DB 79 00      MOV dword ptr [ESI + 0x10],0x79db28
006D5064  C7 86 C8 00 00 00 04 DB 79 00  MOV dword ptr [ESI + 0xc8],0x79db04
006D506E  C7 86 CC 00 00 00 F0 DA 79 00  MOV dword ptr [ESI + 0xcc],0x79daf0
006D5078  E8 06 6B 07 00            CALL 0x0074bb83
006D507D  89 BE 8C 02 00 00         MOV dword ptr [ESI + 0x28c],EDI
006D5083  89 BE 90 02 00 00         MOV dword ptr [ESI + 0x290],EDI
006D5089  89 BE 08 03 00 00         MOV dword ptr [ESI + 0x308],EDI
006D508F  89 BE 10 03 00 00         MOV dword ptr [ESI + 0x310],EDI
006D5095  C7 86 0C 03 00 00 01 00 00 00  MOV dword ptr [ESI + 0x30c],0x1
006D509F  A1 40 E2 7E 00            MOV EAX,[0x007ee240]
006D50A4  83 F8 08                  CMP EAX,0x8
006D50A7  7D 23                     JGE 0x006d50cc
006D50A9  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006D50AC  68 10 10 00 00            PUSH 0x1010
006D50B1  68 74 E2 7E 00            PUSH 0x7ee274
006D50B6  68 44 E2 7E 00            PUSH 0x7ee244
006D50BB  8B 51 78                  MOV EDX,dword ptr [ECX + 0x78]
006D50BE  52                        PUSH EDX
006D50BF  FF 15 EC BD 85 00         CALL dword ptr [0x0085bdec]
006D50C5  6A FF                     PUSH -0x1
006D50C7  E8 B4 9E 05 00            CALL 0x0072ef80
LAB_006d50cc:
006D50CC  8B C6                     MOV EAX,ESI
006D50CE  5F                        POP EDI
006D50CF  5E                        POP ESI
006D50D0  5B                        POP EBX
006D50D1  5D                        POP EBP
006D50D2  C2 10 00                  RET 0x10
