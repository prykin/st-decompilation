FUN_00680340:
00680340  55                        PUSH EBP
00680341  8B EC                     MOV EBP,ESP
00680343  56                        PUSH ESI
00680344  57                        PUSH EDI
00680345  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00680348  83 C9 FF                  OR ECX,0xffffffff
0068034B  33 C0                     XOR EAX,EAX
0068034D  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00680350  F2 AE                     SCASB.REPNE ES:EDI
00680352  F7 D1                     NOT ECX
00680354  2B F9                     SUB EDI,ECX
00680356  8B C1                     MOV EAX,ECX
00680358  8B F7                     MOV ESI,EDI
0068035A  BF E0 89 84 00            MOV EDI,0x8489e0
0068035F  C1 E9 02                  SHR ECX,0x2
00680362  F3 A5                     MOVSD.REP ES:EDI,ESI
00680364  8B C8                     MOV ECX,EAX
00680366  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00680369  83 E1 03                  AND ECX,0x3
0068036C  F3 A4                     MOVSB.REP ES:EDI,ESI
0068036E  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00680371  5F                        POP EDI
00680372  89 0D 00 8A 84 00         MOV dword ptr [0x00848a00],ECX
00680378  89 15 04 8A 84 00         MOV dword ptr [0x00848a04],EDX
0068037E  A3 A0 3F 7D 00            MOV [0x007d3fa0],EAX
00680383  5E                        POP ESI
00680384  5D                        POP EBP
00680385  C3                        RET
