FUN_0074c35b:
0074C35B  8B 81 D8 00 00 00         MOV EAX,dword ptr [ECX + 0xd8]
0074C361  8B 80 90 00 00 00         MOV EAX,dword ptr [EAX + 0x90]
0074C367  83 78 18 00               CMP dword ptr [EAX + 0x18],0x0
0074C36B  75 06                     JNZ 0x0074c373
0074C36D  B8 09 02 04 80            MOV EAX,0x80040209
0074C372  C3                        RET
LAB_0074c373:
0074C373  8B 41 70                  MOV EAX,dword ptr [ECX + 0x70]
0074C376  83 78 14 00               CMP dword ptr [EAX + 0x14],0x0
0074C37A  75 06                     JNZ 0x0074c382
0074C37C  B8 27 02 04 80            MOV EAX,0x80040227
0074C381  C3                        RET
LAB_0074c382:
0074C382  8B 41 6C                  MOV EAX,dword ptr [ECX + 0x6c]
0074C385  F7 D8                     NEG EAX
0074C387  1B C0                     SBB EAX,EAX
0074C389  25 0B 02 04 80            AND EAX,0x8004020b
0074C38E  C3                        RET
