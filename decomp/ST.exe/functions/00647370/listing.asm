FUN_00647370:
00647370  8B 51 3C                  MOV EDX,dword ptr [ECX + 0x3c]
00647373  33 C0                     XOR EAX,EAX
00647375  89 51 65                  MOV dword ptr [ECX + 0x65],EDX
00647378  8B 51 40                  MOV EDX,dword ptr [ECX + 0x40]
0064737B  89 51 69                  MOV dword ptr [ECX + 0x69],EDX
0064737E  8B 51 44                  MOV EDX,dword ptr [ECX + 0x44]
00647381  89 41 54                  MOV dword ptr [ECX + 0x54],EAX
00647384  C7 41 58 01 00 00 00      MOV dword ptr [ECX + 0x58],0x1
0064738B  89 51 6D                  MOV dword ptr [ECX + 0x6d],EDX
0064738E  89 41 71                  MOV dword ptr [ECX + 0x71],EAX
00647391  C7 41 75 0A 00 00 00      MOV dword ptr [ECX + 0x75],0xa
00647398  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0064739E  8B 92 E4 00 00 00         MOV EDX,dword ptr [EDX + 0xe4]
006473A4  89 81 98 00 00 00         MOV dword ptr [ECX + 0x98],EAX
006473AA  89 91 94 00 00 00         MOV dword ptr [ECX + 0x94],EDX
006473B0  C3                        RET
