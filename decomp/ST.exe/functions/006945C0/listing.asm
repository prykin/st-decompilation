FUN_006945c0:
006945C0  55                        PUSH EBP
006945C1  8B EC                     MOV EBP,ESP
006945C3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006945C6  53                        PUSH EBX
006945C7  8B D9                     MOV EBX,ECX
006945C9  56                        PUSH ESI
006945CA  8B 10                     MOV EDX,dword ptr [EAX]
006945CC  57                        PUSH EDI
006945CD  89 11                     MOV dword ptr [ECX],EDX
006945CF  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
006945D2  89 51 04                  MOV dword ptr [ECX + 0x4],EDX
006945D5  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
006945D8  89 51 08                  MOV dword ptr [ECX + 0x8],EDX
006945DB  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
006945DE  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
006945E1  8B 73 08                  MOV ESI,dword ptr [EBX + 0x8]
006945E4  0F AF 73 04               IMUL ESI,dword ptr [EBX + 0x4]
006945E8  0F AF 33                  IMUL ESI,dword ptr [EBX]
006945EB  C1 E6 03                  SHL ESI,0x3
006945EE  56                        PUSH ESI
006945EF  E8 2D E5 D6 FF            CALL 0x00402b21
006945F4  8B CE                     MOV ECX,ESI
006945F6  8B F8                     MOV EDI,EAX
006945F8  8B D1                     MOV EDX,ECX
006945FA  33 C0                     XOR EAX,EAX
006945FC  C1 E9 02                  SHR ECX,0x2
006945FF  89 7B 10                  MOV dword ptr [EBX + 0x10],EDI
00694602  83 C4 04                  ADD ESP,0x4
00694605  F3 AB                     STOSD.REP ES:EDI
00694607  8B CA                     MOV ECX,EDX
00694609  83 E1 03                  AND ECX,0x3
0069460C  F3 AA                     STOSB.REP ES:EDI
0069460E  5F                        POP EDI
0069460F  5E                        POP ESI
00694610  5B                        POP EBX
00694611  5D                        POP EBP
00694612  C2 04 00                  RET 0x4
