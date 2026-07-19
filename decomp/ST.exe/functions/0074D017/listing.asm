FUN_0074d017:
0074D017  8B 44 24 04               MOV EAX,dword ptr [ESP + 0x4]
0074D01B  8B 80 9C 00 00 00         MOV EAX,dword ptr [EAX + 0x9c]
0074D021  8B 80 8C 00 00 00         MOV EAX,dword ptr [EAX + 0x8c]
0074D027  8B 40 18                  MOV EAX,dword ptr [EAX + 0x18]
0074D02A  85 C0                     TEST EAX,EAX
0074D02C  75 07                     JNZ 0x0074d035
0074D02E  B8 09 02 04 80            MOV EAX,0x80040209
0074D033  EB 0A                     JMP 0x0074d03f
LAB_0074d035:
0074D035  FF 74 24 08               PUSH dword ptr [ESP + 0x8]
0074D039  8B 08                     MOV ECX,dword ptr [EAX]
0074D03B  50                        PUSH EAX
0074D03C  FF 51 30                  CALL dword ptr [ECX + 0x30]
LAB_0074d03f:
0074D03F  C2 08 00                  RET 0x8
