FUN_00754fd0:
00754FD0  55                        PUSH EBP
00754FD1  8B EC                     MOV EBP,ESP
00754FD3  56                        PUSH ESI
00754FD4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00754FD7  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00754FDA  57                        PUSH EDI
00754FDB  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00754FDE  33 FF                     XOR EDI,EDI
00754FE0  8B 40 50                  MOV EAX,dword ptr [EAX + 0x50]
00754FE3  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
00754FE6  89 48 18                  MOV dword ptr [EAX + 0x18],ECX
00754FE9  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
00754FEC  B8 01 00 00 00            MOV EAX,0x1
00754FF1  66 89 42 2A               MOV word ptr [EDX + 0x2a],AX
00754FF5  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00754FF8  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
00754FFC  66 89 51 2E               MOV word ptr [ECX + 0x2e],DX
00755000  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00755003  89 41 14                  MOV dword ptr [ECX + 0x14],EAX
00755006  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
00755009  89 7A 1C                  MOV dword ptr [EDX + 0x1c],EDI
0075500C  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
0075500F  89 78 40                  MOV dword ptr [EAX + 0x40],EDI
00755012  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00755015  C7 41 44 FF FF FF FF      MOV dword ptr [ECX + 0x44],0xffffffff
0075501C  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
0075501F  0F BF 50 28               MOVSX EDX,word ptr [EAX + 0x28]
00755023  52                        PUSH EDX
00755024  83 C0 36                  ADD EAX,0x36
00755027  68 E8 2C 7F 00            PUSH 0x7f2ce8
0075502C  50                        PUSH EAX
0075502D  E8 0E BC FD FF            CALL 0x00730c40
00755032  83 C4 0C                  ADD ESP,0xc
00755035  56                        PUSH ESI
00755036  E8 05 EB FF FF            CALL 0x00753b40
0075503B  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0075503E  89 41 24                  MOV dword ptr [ECX + 0x24],EAX
00755041  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
00755044  8B 42 24                  MOV EAX,dword ptr [EDX + 0x24]
00755047  3B C7                     CMP EAX,EDI
00755049  7E 6F                     JLE 0x007550ba
0075504B  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0075504E  0F BF 51 16               MOVSX EDX,word ptr [ECX + 0x16]
00755052  52                        PUSH EDX
00755053  50                        PUSH EAX
00755054  51                        PUSH ECX
00755055  E8 F6 FB F7 FF            CALL 0x006d4c50
0075505A  3B C7                     CMP EAX,EDI
0075505C  74 0D                     JZ 0x0075506b
0075505E  7E 5A                     JLE 0x007550ba
00755060  5F                        POP EDI
00755061  0D 00 00 FF FF            OR EAX,0xffff0000
00755066  5E                        POP ESI
00755067  5D                        POP EBP
00755068  C2 0C 00                  RET 0xc
LAB_0075506b:
0075506B  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0075506E  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00755071  53                        PUSH EBX
00755072  8B 79 24                  MOV EDI,dword ptr [ECX + 0x24]
00755075  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00755078  8B 50 34                  MOV EDX,dword ptr [EAX + 0x34]
0075507B  83 C9 10                  OR ECX,0x10
0075507E  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
00755081  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00755084  03 D7                     ADD EDX,EDI
00755086  0F BF 48 16               MOVSX ECX,word ptr [EAX + 0x16]
0075508A  8B D9                     MOV EBX,ECX
0075508C  33 C0                     XOR EAX,EAX
0075508E  8B FA                     MOV EDI,EDX
00755090  C1 E9 02                  SHR ECX,0x2
00755093  F3 AB                     STOSD.REP ES:EDI
00755095  8B CB                     MOV ECX,EBX
00755097  83 E1 03                  AND ECX,0x3
0075509A  F3 AA                     STOSB.REP ES:EDI
0075509C  C7 02 FF FF FF FF         MOV dword ptr [EDX],0xffffffff
007550A2  C7 42 04 FF FF FF FF      MOV dword ptr [EDX + 0x4],0xffffffff
007550A9  66 C7 42 08 00 00         MOV word ptr [EDX + 0x8],0x0
007550AF  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
007550B2  51                        PUSH ECX
007550B3  56                        PUSH ESI
007550B4  E8 A7 22 00 00            CALL 0x00757360
007550B9  5B                        POP EBX
LAB_007550ba:
007550BA  5F                        POP EDI
007550BB  5E                        POP ESI
007550BC  5D                        POP EBP
007550BD  C2 0C 00                  RET 0xc
