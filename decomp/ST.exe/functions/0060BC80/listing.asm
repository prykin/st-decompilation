FUN_0060bc80:
0060BC80  55                        PUSH EBP
0060BC81  8B EC                     MOV EBP,ESP
0060BC83  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0060BC86  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0060BC89  25 FF FF 00 00            AND EAX,0xffff
0060BC8E  89 91 D9 01 00 00         MOV dword ptr [ECX + 0x1d9],EDX
0060BC94  89 81 05 02 00 00         MOV dword ptr [ECX + 0x205],EAX
0060BC9A  5D                        POP EBP
0060BC9B  C2 08 00                  RET 0x8
