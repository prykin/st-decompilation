FUN_007470e5:
007470E5  51                        PUSH ECX
007470E6  53                        PUSH EBX
007470E7  55                        PUSH EBP
007470E8  56                        PUSH ESI
007470E9  57                        PUSH EDI
007470EA  8B 7C 24 18               MOV EDI,dword ptr [ESP + 0x18]
007470EE  8B 47 2C                  MOV EAX,dword ptr [EDI + 0x2c]
007470F1  50                        PUSH EAX
007470F2  89 44 24 1C               MOV dword ptr [ESP + 0x1c],EAX
007470F6  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
007470FC  33 DB                     XOR EBX,EBX
007470FE  39 5F 08                  CMP dword ptr [EDI + 0x8],EBX
00747101  75 33                     JNZ 0x00747136
00747103  8B 47 F4                  MOV EAX,dword ptr [EDI + -0xc]
00747106  8D 77 F4                  LEA ESI,[EDI + -0xc]
00747109  8B CE                     MOV ECX,ESI
0074710B  FF 50 18                  CALL dword ptr [EAX + 0x18]
0074710E  8B E8                     MOV EBP,EAX
00747110  85 ED                     TEST EBP,EBP
00747112  7E 22                     JLE 0x00747136
LAB_00747114:
00747114  8B 06                     MOV EAX,dword ptr [ESI]
00747116  53                        PUSH EBX
00747117  8B CE                     MOV ECX,ESI
00747119  FF 50 1C                  CALL dword ptr [EAX + 0x1c]
0074711C  83 78 18 00               CMP dword ptr [EAX + 0x18],0x0
00747120  74 0F                     JZ 0x00747131
00747122  8B 10                     MOV EDX,dword ptr [EAX]
00747124  8B C8                     MOV ECX,EAX
00747126  FF 52 14                  CALL dword ptr [EDX + 0x14]
00747129  85 C0                     TEST EAX,EAX
0074712B  89 44 24 10               MOV dword ptr [ESP + 0x10],EAX
0074712F  7C 20                     JL 0x00747151
LAB_00747131:
00747131  43                        INC EBX
00747132  3B DD                     CMP EBX,EBP
00747134  7C DE                     JL 0x00747114
LAB_00747136:
00747136  FF 74 24 18               PUSH dword ptr [ESP + 0x18]
0074713A  C7 47 08 01 00 00 00      MOV dword ptr [EDI + 0x8],0x1
00747141  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
00747147  33 C0                     XOR EAX,EAX
LAB_00747149:
00747149  5F                        POP EDI
0074714A  5E                        POP ESI
0074714B  5D                        POP EBP
0074714C  5B                        POP EBX
0074714D  59                        POP ECX
0074714E  C2 04 00                  RET 0x4
LAB_00747151:
00747151  FF 74 24 18               PUSH dword ptr [ESP + 0x18]
00747155  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074715B  8B 44 24 10               MOV EAX,dword ptr [ESP + 0x10]
0074715F  EB E8                     JMP 0x00747149
