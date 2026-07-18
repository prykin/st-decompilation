FUN_00690230:
00690230  55                        PUSH EBP
00690231  8B EC                     MOV EBP,ESP
00690233  56                        PUSH ESI
00690234  57                        PUSH EDI
00690235  8B F9                     MOV EDI,ECX
00690237  33 F6                     XOR ESI,ESI
00690239  8B 8F A5 00 00 00         MOV ECX,dword ptr [EDI + 0xa5]
0069023F  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00690242  85 C0                     TEST EAX,EAX
00690244  7E 35                     JLE 0x0069027b
00690246  53                        PUSH EBX
00690247  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0069024A  3B F0                     CMP ESI,EAX
LAB_0069024c:
0069024C  73 1E                     JNC 0x0069026c
0069024E  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00690251  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
00690254  0F AF C6                  IMUL EAX,ESI
00690257  03 C2                     ADD EAX,EDX
00690259  85 C0                     TEST EAX,EAX
0069025B  74 0F                     JZ 0x0069026c
0069025D  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
00690260  85 C0                     TEST EAX,EAX
00690262  74 08                     JZ 0x0069026c
00690264  53                        PUSH EBX
00690265  8B C8                     MOV ECX,EAX
00690267  E8 E9 12 D7 FF            CALL 0x00401555
LAB_0069026c:
0069026C  8B 8F A5 00 00 00         MOV ECX,dword ptr [EDI + 0xa5]
00690272  46                        INC ESI
00690273  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00690276  3B F0                     CMP ESI,EAX
00690278  7C D2                     JL 0x0069024c
0069027A  5B                        POP EBX
LAB_0069027b:
0069027B  5F                        POP EDI
0069027C  5E                        POP ESI
0069027D  5D                        POP EBP
0069027E  C2 04 00                  RET 0x4
