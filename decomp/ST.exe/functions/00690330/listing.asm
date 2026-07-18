FUN_00690330:
00690330  55                        PUSH EBP
00690331  8B EC                     MOV EBP,ESP
00690333  8B 89 A5 00 00 00         MOV ECX,dword ptr [ECX + 0xa5]
00690339  85 C9                     TEST ECX,ECX
0069033B  74 32                     JZ 0x0069036f
0069033D  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00690340  85 D2                     TEST EDX,EDX
00690342  7C 2B                     JL 0x0069036f
00690344  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00690347  3B D0                     CMP EDX,EAX
00690349  7D 24                     JGE 0x0069036f
0069034B  73 0B                     JNC 0x00690358
0069034D  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00690350  0F AF C2                  IMUL EAX,EDX
00690353  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
00690356  EB 02                     JMP 0x0069035a
LAB_00690358:
00690358  33 C0                     XOR EAX,EAX
LAB_0069035a:
0069035A  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
0069035D  85 C0                     TEST EAX,EAX
0069035F  74 0E                     JZ 0x0069036f
00690361  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00690364  8B 10                     MOV EDX,dword ptr [EAX]
00690366  51                        PUSH ECX
00690367  8B C8                     MOV ECX,EAX
00690369  FF 12                     CALL dword ptr [EDX]
0069036B  5D                        POP EBP
0069036C  C2 08 00                  RET 0x8
LAB_0069036f:
0069036F  B8 FF FF 00 00            MOV EAX,0xffff
00690374  5D                        POP EBP
00690375  C2 08 00                  RET 0x8
