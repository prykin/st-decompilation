FUN_00747406:
00747406  8B 41 44                  MOV EAX,dword ptr [ECX + 0x44]
00747409  85 C0                     TEST EAX,EAX
0074740B  74 14                     JZ 0x00747421
0074740D  FF 74 24 0C               PUSH dword ptr [ESP + 0xc]
00747411  8B 08                     MOV ECX,dword ptr [EAX]
00747413  FF 74 24 0C               PUSH dword ptr [ESP + 0xc]
00747417  FF 74 24 0C               PUSH dword ptr [ESP + 0xc]
0074741B  50                        PUSH EAX
0074741C  FF 51 0C                  CALL dword ptr [ECX + 0xc]
0074741F  EB 05                     JMP 0x00747426
LAB_00747421:
00747421  B8 01 40 00 80            MOV EAX,0x80004001
LAB_00747426:
00747426  C2 0C 00                  RET 0xc
