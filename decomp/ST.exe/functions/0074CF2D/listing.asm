FUN_0074cf2d:
0074CF2D  8B 44 24 04               MOV EAX,dword ptr [ESP + 0x4]
0074CF31  8B 80 D4 00 00 00         MOV EAX,dword ptr [EAX + 0xd4]
0074CF37  8B 80 90 00 00 00         MOV EAX,dword ptr [EAX + 0x90]
0074CF3D  8B 40 18                  MOV EAX,dword ptr [EAX + 0x18]
0074CF40  85 C0                     TEST EAX,EAX
0074CF42  75 07                     JNZ 0x0074cf4b
0074CF44  B8 09 02 04 80            MOV EAX,0x80040209
0074CF49  EB 0A                     JMP 0x0074cf55
LAB_0074cf4b:
0074CF4B  FF 74 24 08               PUSH dword ptr [ESP + 0x8]
0074CF4F  8B 08                     MOV ECX,dword ptr [EAX]
0074CF51  50                        PUSH EAX
0074CF52  FF 51 30                  CALL dword ptr [ECX + 0x30]
LAB_0074cf55:
0074CF55  C2 08 00                  RET 0x8
