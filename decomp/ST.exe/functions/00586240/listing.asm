FUN_00586240:
00586240  55                        PUSH EBP
00586241  8B EC                     MOV EBP,ESP
00586243  83 EC 2C                  SUB ESP,0x2c
00586246  57                        PUSH EDI
00586247  B9 0A 00 00 00            MOV ECX,0xa
0058624C  33 C0                     XOR EAX,EAX
0058624E  8D 7D D4                  LEA EDI,[EBP + -0x2c]
00586251  F3 AB                     STOSD.REP ES:EDI
00586253  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00586256  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00586259  66 AB                     STOSW ES:EDI
0058625B  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0058625E  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
00586261  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00586264  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
00586267  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0058626A  6A 00                     PUSH 0x0
0058626C  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0058626F  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00586272  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00586275  8D 45 D4                  LEA EAX,[EBP + -0x2c]
00586278  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0058627B  66 8B 55 20               MOV DX,word ptr [EBP + 0x20]
0058627F  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00586282  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00586288  50                        PUSH EAX
00586289  8D 45 18                  LEA EAX,[EBP + 0x18]
0058628C  C7 45 D4 B4 00 00 00      MOV dword ptr [EBP + -0x2c],0xb4
00586293  C7 45 DC 00 00 00 00      MOV dword ptr [EBP + -0x24],0x0
0058629A  C7 45 E0 01 00 00 00      MOV dword ptr [EBP + -0x20],0x1
005862A1  66 89 55 FC               MOV word ptr [EBP + -0x4],DX
005862A5  8B 11                     MOV EDX,dword ptr [ECX]
005862A7  50                        PUSH EAX
005862A8  6A 00                     PUSH 0x0
005862AA  68 31 01 00 00            PUSH 0x131
005862AF  FF 52 08                  CALL dword ptr [EDX + 0x8]
005862B2  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
005862B5  5F                        POP EDI
005862B6  8B E5                     MOV ESP,EBP
005862B8  5D                        POP EBP
005862B9  C3                        RET
