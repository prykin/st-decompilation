FUN_00690180:
00690180  55                        PUSH EBP
00690181  8B EC                     MOV EBP,ESP
00690183  8B 89 A5 00 00 00         MOV ECX,dword ptr [ECX + 0xa5]
00690189  85 C9                     TEST ECX,ECX
0069018B  74 33                     JZ 0x006901c0
0069018D  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00690190  85 D2                     TEST EDX,EDX
00690192  7C 2C                     JL 0x006901c0
00690194  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00690197  3B D0                     CMP EDX,EAX
00690199  7D 25                     JGE 0x006901c0
0069019B  73 0B                     JNC 0x006901a8
0069019D  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
006901A0  0F AF C2                  IMUL EAX,EDX
006901A3  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
006901A6  EB 02                     JMP 0x006901aa
LAB_006901a8:
006901A8  33 C0                     XOR EAX,EAX
LAB_006901aa:
006901AA  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
006901AD  85 C0                     TEST EAX,EAX
006901AF  74 0F                     JZ 0x006901c0
006901B1  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006901B4  51                        PUSH ECX
006901B5  8B C8                     MOV ECX,EAX
006901B7  E8 99 13 D7 FF            CALL 0x00401555
006901BC  5D                        POP EBP
006901BD  C2 08 00                  RET 0x8
LAB_006901c0:
006901C0  B8 FC FF FF FF            MOV EAX,0xfffffffc
006901C5  5D                        POP EBP
006901C6  C2 08 00                  RET 0x8
