FUN_00613280:
00613280  55                        PUSH EBP
00613281  8B EC                     MOV EBP,ESP
00613283  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00613286  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00613289  89 91 2B 02 00 00         MOV dword ptr [ECX + 0x22b],EDX
0061328F  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00613292  89 91 2F 02 00 00         MOV dword ptr [ECX + 0x22f],EDX
00613298  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0061329B  C7 81 23 02 00 00 01 00 00 00  MOV dword ptr [ECX + 0x223],0x1
006132A5  89 81 27 02 00 00         MOV dword ptr [ECX + 0x227],EAX
006132AB  89 91 33 02 00 00         MOV dword ptr [ECX + 0x233],EDX
006132B1  89 81 37 02 00 00         MOV dword ptr [ECX + 0x237],EAX
006132B7  C7 81 3B 02 00 00 30 00 00 00  MOV dword ptr [ECX + 0x23b],0x30
006132C1  C7 81 48 02 00 00 FF FF FF FF  MOV dword ptr [ECX + 0x248],0xffffffff
006132CB  5D                        POP EBP
006132CC  C2 10 00                  RET 0x10
