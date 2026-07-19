FUN_00747212:
00747212  56                        PUSH ESI
00747213  57                        PUSH EDI
00747214  8B F9                     MOV EDI,ECX
00747216  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
00747219  85 C0                     TEST EAX,EAX
0074721B  75 07                     JNZ 0x00747224
0074721D  B8 13 02 04 80            MOV EAX,0x80040213
00747222  EB 1C                     JMP 0x00747240
LAB_00747224:
00747224  8B 74 24 0C               MOV ESI,dword ptr [ESP + 0xc]
00747228  8B 08                     MOV ECX,dword ptr [EAX]
0074722A  56                        PUSH ESI
0074722B  50                        PUSH EAX
0074722C  FF 51 0C                  CALL dword ptr [ECX + 0xc]
0074722F  85 C0                     TEST EAX,EAX
00747231  7C 0D                     JL 0x00747240
00747233  8B 47 20                  MOV EAX,dword ptr [EDI + 0x20]
00747236  29 06                     SUB dword ptr [ESI],EAX
00747238  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
0074723B  19 46 04                  SBB dword ptr [ESI + 0x4],EAX
0074723E  33 C0                     XOR EAX,EAX
LAB_00747240:
00747240  5F                        POP EDI
00747241  5E                        POP ESI
00747242  C2 04 00                  RET 0x4
