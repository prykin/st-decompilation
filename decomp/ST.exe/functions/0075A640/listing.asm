FUN_0075a640:
0075A640  55                        PUSH EBP
0075A641  8B EC                     MOV EBP,ESP
0075A643  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0075A646  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0075A649  52                        PUSH EDX
0075A64A  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0075A64D  8B 88 9E 01 00 00         MOV ECX,dword ptr [EAX + 0x19e]
0075A653  52                        PUSH EDX
0075A654  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0075A657  52                        PUSH EDX
0075A658  6A 00                     PUSH 0x0
0075A65A  6A 00                     PUSH 0x0
0075A65C  6A 00                     PUSH 0x0
0075A65E  50                        PUSH EAX
0075A65F  FF 51 04                  CALL dword ptr [ECX + 0x4]
0075A662  5D                        POP EBP
0075A663  C2 10 00                  RET 0x10
