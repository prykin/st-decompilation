STBoatC::sub_00481520:
00481520  55                        PUSH EBP
00481521  8B EC                     MOV EBP,ESP
00481523  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00481526  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00481529  89 81 BB 00 00 00         MOV dword ptr [ECX + 0xbb],EAX
0048152F  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00481532  89 91 BF 00 00 00         MOV dword ptr [ECX + 0xbf],EDX
00481538  89 81 C3 00 00 00         MOV dword ptr [ECX + 0xc3],EAX
0048153E  C7 81 FD 00 00 00 00 00 00 00  MOV dword ptr [ECX + 0xfd],0x0
00481548  5D                        POP EBP
00481549  C2 0C 00                  RET 0xc
