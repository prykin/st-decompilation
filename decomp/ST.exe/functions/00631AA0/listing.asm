FUN_00631aa0:
00631AA0  55                        PUSH EBP
00631AA1  8B EC                     MOV EBP,ESP
00631AA3  83 EC 2C                  SUB ESP,0x2c
00631AA6  53                        PUSH EBX
00631AA7  56                        PUSH ESI
00631AA8  8B F1                     MOV ESI,ECX
00631AAA  57                        PUSH EDI
00631AAB  B9 0A 00 00 00            MOV ECX,0xa
00631AB0  33 C0                     XOR EAX,EAX
00631AB2  8D 7D D4                  LEA EDI,[EBP + -0x2c]
00631AB5  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00631AB8  F3 AB                     STOSD.REP ES:EDI
00631ABA  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00631ABD  33 DB                     XOR EBX,EBX
00631ABF  AA                        STOSB ES:EDI
00631AC0  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00631AC3  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
00631AC6  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00631AC9  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
00631ACC  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00631ACF  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
00631AD2  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00631AD5  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00631AD8  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
00631ADB  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
00631ADE  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
00631AE1  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00631AE4  8B 46 6D                  MOV EAX,dword ptr [ESI + 0x6d]
00631AE7  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
00631AEA  85 C0                     TEST EAX,EAX
00631AEC  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00631AEF  75 0F                     JNZ 0x00631b00
00631AF1  6A 0A                     PUSH 0xa
00631AF3  6A 29                     PUSH 0x29
00631AF5  6A 0A                     PUSH 0xa
00631AF7  53                        PUSH EBX
00631AF8  E8 93 C7 07 00            CALL 0x006ae290
00631AFD  89 46 6D                  MOV dword ptr [ESI + 0x6d],EAX
LAB_00631b00:
00631B00  8B 76 6D                  MOV ESI,dword ptr [ESI + 0x6d]
00631B03  85 F6                     TEST ESI,ESI
00631B05  74 14                     JZ 0x00631b1b
00631B07  8D 55 D4                  LEA EDX,[EBP + -0x2c]
00631B0A  52                        PUSH EDX
00631B0B  56                        PUSH ESI
00631B0C  E8 AF C6 07 00            CALL 0x006ae1c0
00631B11  5F                        POP EDI
00631B12  5E                        POP ESI
00631B13  40                        INC EAX
00631B14  5B                        POP EBX
00631B15  8B E5                     MOV ESP,EBP
00631B17  5D                        POP EBP
00631B18  C2 20 00                  RET 0x20
LAB_00631b1b:
00631B1B  5F                        POP EDI
00631B1C  8D 43 01                  LEA EAX,[EBX + 0x1]
00631B1F  5E                        POP ESI
00631B20  5B                        POP EBX
00631B21  8B E5                     MOV ESP,EBP
00631B23  5D                        POP EBP
00631B24  C2 20 00                  RET 0x20
