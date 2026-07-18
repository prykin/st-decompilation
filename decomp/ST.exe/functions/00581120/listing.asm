FUN_00581120:
00581120  55                        PUSH EBP
00581121  8B EC                     MOV EBP,ESP
00581123  83 EC 30                  SUB ESP,0x30
00581126  57                        PUSH EDI
00581127  B9 0B 00 00 00            MOV ECX,0xb
0058112C  33 C0                     XOR EAX,EAX
0058112E  8D 7D D0                  LEA EDI,[EBP + -0x30]
00581131  F3 AB                     STOSD.REP ES:EDI
00581133  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00581136  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00581139  66 AB                     STOSW ES:EDI
0058113B  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0058113E  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
00581141  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00581144  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
00581147  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0058114A  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0058114D  66 8B 4D 24               MOV CX,word ptr [EBP + 0x24]
00581151  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00581154  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
00581157  6A 00                     PUSH 0x0
00581159  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0058115C  8D 45 D0                  LEA EAX,[EBP + -0x30]
0058115F  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
00581162  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00581165  66 89 4D FC               MOV word ptr [EBP + -0x4],CX
00581169  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0058116F  50                        PUSH EAX
00581170  8D 45 1C                  LEA EAX,[EBP + 0x1c]
00581173  C7 45 D0 04 01 00 00      MOV dword ptr [EBP + -0x30],0x104
0058117A  C7 45 D8 00 00 00 00      MOV dword ptr [EBP + -0x28],0x0
00581181  C7 45 DC 01 00 00 00      MOV dword ptr [EBP + -0x24],0x1
00581188  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0058118B  8B 11                     MOV EDX,dword ptr [ECX]
0058118D  50                        PUSH EAX
0058118E  6A 00                     PUSH 0x0
00581190  68 38 01 00 00            PUSH 0x138
00581195  FF 52 08                  CALL dword ptr [EDX + 0x8]
00581198  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0058119B  5F                        POP EDI
0058119C  8B E5                     MOV ESP,EBP
0058119E  5D                        POP EBP
0058119F  C3                        RET
