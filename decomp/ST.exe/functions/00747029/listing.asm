FUN_00747029:
00747029  53                        PUSH EBX
0074702A  8B 5C 24 0C               MOV EBX,dword ptr [ESP + 0xc]
0074702E  85 DB                     TEST EBX,EBX
00747030  75 07                     JNZ 0x00747039
00747032  B8 03 40 00 80            MOV EAX,0x80004003
00747037  EB 2D                     JMP 0x00747066
LAB_00747039:
00747039  57                        PUSH EDI
0074703A  56                        PUSH ESI
0074703B  8B 74 24 10               MOV ESI,dword ptr [ESP + 0x10]
0074703F  8B 7E 2C                  MOV EDI,dword ptr [ESI + 0x2c]
00747042  57                        PUSH EDI
00747043  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
00747049  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
0074704C  85 C0                     TEST EAX,EAX
0074704E  74 06                     JZ 0x00747056
00747050  8B 08                     MOV ECX,dword ptr [EAX]
00747052  50                        PUSH EAX
00747053  FF 51 04                  CALL dword ptr [ECX + 0x4]
LAB_00747056:
00747056  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
00747059  57                        PUSH EDI
0074705A  89 03                     MOV dword ptr [EBX],EAX
0074705C  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
00747062  5E                        POP ESI
00747063  33 C0                     XOR EAX,EAX
00747065  5F                        POP EDI
LAB_00747066:
00747066  5B                        POP EBX
00747067  C2 08 00                  RET 0x8
