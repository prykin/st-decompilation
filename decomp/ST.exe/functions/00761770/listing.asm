FUN_00761770:
00761770  55                        PUSH EBP
00761771  8B EC                     MOV EBP,ESP
00761773  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00761776  8B 48 50                  MOV ECX,dword ptr [EAX + 0x50]
00761779  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0076177C  8B 11                     MOV EDX,dword ptr [ECX]
0076177E  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00761781  0F AF 10                  IMUL EDX,dword ptr [EAX]
00761784  8B 81 32 01 00 00         MOV EAX,dword ptr [ECX + 0x132]
0076178A  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0076178D  83 C2 04                  ADD EDX,0x4
00761790  8B 09                     MOV ECX,dword ptr [ECX]
00761792  C1 FA 03                  SAR EDX,0x3
00761795  81 E2 FF 03 00 00         AND EDX,0x3ff
0076179B  8A 94 02 80 00 00 00      MOV DL,byte ptr [EDX + EAX*0x1 + 0x80]
007617A2  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
007617A5  88 14 01                  MOV byte ptr [ECX + EAX*0x1],DL
007617A8  5D                        POP EBP
007617A9  C2 14 00                  RET 0x14
