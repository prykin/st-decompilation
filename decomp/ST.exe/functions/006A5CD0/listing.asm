FUN_006a5cd0:
006A5CD0  55                        PUSH EBP
006A5CD1  8B EC                     MOV EBP,ESP
006A5CD3  83 EC 34                  SUB ESP,0x34
006A5CD6  8D 45 CC                  LEA EAX,[EBP + -0x34]
006A5CD9  50                        PUSH EAX
006A5CDA  E8 F1 F6 D5 FF            CALL 0x004053d0
006A5CDF  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006A5CE2  83 C4 04                  ADD ESP,0x4
006A5CE5  85 C0                     TEST EAX,EAX
006A5CE7  75 1D                     JNZ 0x006a5d06
006A5CE9  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
006A5CEC  85 C0                     TEST EAX,EAX
006A5CEE  75 16                     JNZ 0x006a5d06
006A5CF0  F6 05 78 C1 7E 00 10      TEST byte ptr [0x007ec178],0x10
006A5CF7  74 07                     JZ 0x006a5d00
006A5CF9  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006A5CFC  85 C0                     TEST EAX,EAX
006A5CFE  75 06                     JNZ 0x006a5d06
LAB_006a5d00:
006A5D00  33 C0                     XOR EAX,EAX
006A5D02  8B E5                     MOV ESP,EBP
006A5D04  5D                        POP EBP
006A5D05  C3                        RET
LAB_006a5d06:
006A5D06  68 90 CA 7E 00            PUSH 0x7eca90
006A5D0B  68 CC 4C 7A 00            PUSH 0x7a4ccc
006A5D10  6A 00                     PUSH 0x0
006A5D12  6A 00                     PUSH 0x0
006A5D14  6A 00                     PUSH 0x0
006A5D16  6A 00                     PUSH 0x0
006A5D18  E8 83 B2 08 00            CALL 0x00730fa0
006A5D1D  83 C4 18                  ADD ESP,0x18
006A5D20  83 F8 01                  CMP EAX,0x1
006A5D23  75 01                     JNZ 0x006a5d26
006A5D25  CC                        INT3
LAB_006a5d26:
006A5D26  6A 00                     PUSH 0x0
006A5D28  E8 27 D7 D5 FF            CALL 0x00403454
006A5D2D  83 C4 04                  ADD ESP,0x4
006A5D30  B8 01 00 00 00            MOV EAX,0x1
006A5D35  8B E5                     MOV ESP,EBP
006A5D37  5D                        POP EBP
006A5D38  C3                        RET
