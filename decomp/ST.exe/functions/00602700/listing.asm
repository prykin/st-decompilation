FUN_00602700:
00602700  55                        PUSH EBP
00602701  8B EC                     MOV EBP,ESP
00602703  56                        PUSH ESI
00602704  57                        PUSH EDI
00602705  8D B9 5B 02 00 00         LEA EDI,[ECX + 0x25b]
0060270B  83 C9 FF                  OR ECX,0xffffffff
0060270E  33 C0                     XOR EAX,EAX
00602710  F2 AE                     SCASB.REPNE ES:EDI
00602712  F7 D1                     NOT ECX
00602714  2B F9                     SUB EDI,ECX
00602716  8B C1                     MOV EAX,ECX
00602718  8B F7                     MOV ESI,EDI
0060271A  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0060271D  C1 E9 02                  SHR ECX,0x2
00602720  F3 A5                     MOVSD.REP ES:EDI,ESI
00602722  8B C8                     MOV ECX,EAX
00602724  83 E1 03                  AND ECX,0x3
00602727  F3 A4                     MOVSB.REP ES:EDI,ESI
00602729  5F                        POP EDI
0060272A  5E                        POP ESI
0060272B  5D                        POP EBP
0060272C  C2 04 00                  RET 0x4
