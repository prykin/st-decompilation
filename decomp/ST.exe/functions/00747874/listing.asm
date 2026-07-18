FUN_00747874:
00747874  8B 44 24 04               MOV EAX,dword ptr [ESP + 0x4]
00747878  56                        PUSH ESI
00747879  8B F1                     MOV ESI,ECX
0074787B  83 66 04 00               AND dword ptr [ESI + 0x4],0x0
0074787F  89 46 08                  MOV dword ptr [ESI + 0x8],EAX
00747882  83 C0 0C                  ADD EAX,0xc
00747885  C7 46 10 01 00 00 00      MOV dword ptr [ESI + 0x10],0x1
0074788C  C7 06 28 11 7A 00         MOV dword ptr [ESI],0x7a1128
00747892  50                        PUSH EAX
00747893  8B 08                     MOV ECX,dword ptr [EAX]
00747895  FF 51 04                  CALL dword ptr [ECX + 0x4]
00747898  8B 44 24 0C               MOV EAX,dword ptr [ESP + 0xc]
0074789C  85 C0                     TEST EAX,EAX
0074789E  75 0A                     JNZ 0x007478aa
007478A0  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
007478A3  8B 01                     MOV EAX,dword ptr [ECX]
007478A5  FF 50 10                  CALL dword ptr [EAX + 0x10]
007478A8  EB 09                     JMP 0x007478b3
LAB_007478aa:
007478AA  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
007478AD  89 4E 04                  MOV dword ptr [ESI + 0x4],ECX
007478B0  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
LAB_007478b3:
007478B3  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
007478B6  8B C6                     MOV EAX,ESI
007478B8  5E                        POP ESI
007478B9  C2 08 00                  RET 0x8
