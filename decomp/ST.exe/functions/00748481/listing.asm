FUN_00748481:
00748481  8B 81 98 00 00 00         MOV EAX,dword ptr [ECX + 0x98]
00748487  85 C0                     TEST EAX,EAX
00748489  74 18                     JZ 0x007484a3
0074848B  FF 74 24 10               PUSH dword ptr [ESP + 0x10]
0074848F  8B 08                     MOV ECX,dword ptr [EAX]
00748491  FF 74 24 10               PUSH dword ptr [ESP + 0x10]
00748495  FF 74 24 10               PUSH dword ptr [ESP + 0x10]
00748499  FF 74 24 10               PUSH dword ptr [ESP + 0x10]
0074849D  50                        PUSH EAX
0074849E  FF 51 1C                  CALL dword ptr [ECX + 0x1c]
007484A1  EB 05                     JMP 0x007484a8
LAB_007484a3:
007484A3  B8 02 40 00 80            MOV EAX,0x80004002
LAB_007484a8:
007484A8  C2 10 00                  RET 0x10
