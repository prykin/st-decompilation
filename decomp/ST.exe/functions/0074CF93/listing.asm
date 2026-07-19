FUN_0074cf93:
0074CF93  8B 44 24 04               MOV EAX,dword ptr [ESP + 0x4]
0074CF97  8B 40 48                  MOV EAX,dword ptr [EAX + 0x48]
0074CF9A  8B 80 90 00 00 00         MOV EAX,dword ptr [EAX + 0x90]
0074CFA0  83 78 18 00               CMP dword ptr [EAX + 0x18],0x0
0074CFA4  74 12                     JZ 0x0074cfb8
0074CFA6  8B 80 9C 00 00 00         MOV EAX,dword ptr [EAX + 0x9c]
0074CFAC  FF 74 24 08               PUSH dword ptr [ESP + 0x8]
0074CFB0  8B 08                     MOV ECX,dword ptr [EAX]
0074CFB2  50                        PUSH EAX
0074CFB3  FF 51 14                  CALL dword ptr [ECX + 0x14]
0074CFB6  EB 05                     JMP 0x0074cfbd
LAB_0074cfb8:
0074CFB8  B8 01 40 00 80            MOV EAX,0x80004001
LAB_0074cfbd:
0074CFBD  C2 08 00                  RET 0x8
