FUN_00749989:
00749989  55                        PUSH EBP
0074998A  8B EC                     MOV EBP,ESP
0074998C  51                        PUSH ECX
0074998D  83 65 FC 00               AND dword ptr [EBP + -0x4],0x0
00749991  53                        PUSH EBX
00749992  56                        PUSH ESI
00749993  57                        PUSH EDI
00749994  BA 70 12 7A 00            MOV EDX,0x7a1270
LAB_00749999:
00749999  8B 02                     MOV EAX,dword ptr [EDX]
0074999B  6A 10                     PUSH 0x10
0074999D  59                        POP ECX
0074999E  BF 68 E3 79 00            MOV EDI,0x79e368
007499A3  8B F0                     MOV ESI,EAX
007499A5  33 DB                     XOR EBX,EBX
007499A7  F3 A6                     CMPSB.REPE ES:EDI,ESI
007499A9  74 16                     JZ 0x007499c1
007499AB  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
007499AE  6A 10                     PUSH 0x10
007499B0  8B F0                     MOV ESI,EAX
007499B2  59                        POP ECX
007499B3  33 C0                     XOR EAX,EAX
007499B5  F3 A6                     CMPSB.REPE ES:EDI,ESI
007499B7  74 0E                     JZ 0x007499c7
007499B9  FF 45 FC                  INC dword ptr [EBP + -0x4]
007499BC  83 C2 0C                  ADD EDX,0xc
007499BF  EB D8                     JMP 0x00749999
LAB_007499c1:
007499C1  66 0D FF FF               OR AX,0xffff
007499C5  EB 0E                     JMP 0x007499d5
LAB_007499c7:
007499C7  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007499CA  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
007499CD  66 8B 04 85 74 12 7A 00   MOV AX,word ptr [EAX*0x4 + 0x7a1274]
LAB_007499d5:
007499D5  5F                        POP EDI
007499D6  5E                        POP ESI
007499D7  5B                        POP EBX
007499D8  C9                        LEAVE
007499D9  C2 04 00                  RET 0x4
