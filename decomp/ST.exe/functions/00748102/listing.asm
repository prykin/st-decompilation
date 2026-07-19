FUN_00748102:
00748102  8B 4C 24 08               MOV ECX,dword ptr [ESP + 0x8]
00748106  85 C9                     TEST ECX,ECX
00748108  75 07                     JNZ 0x00748111
0074810A  B8 03 40 00 80            MOV EAX,0x80004003
0074810F  EB 1C                     JMP 0x0074812d
LAB_00748111:
00748111  8B 44 24 04               MOV EAX,dword ptr [ESP + 0x4]
00748115  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
00748118  85 C0                     TEST EAX,EAX
0074811A  89 01                     MOV dword ptr [ECX],EAX
0074811C  74 0A                     JZ 0x00748128
0074811E  8B 08                     MOV ECX,dword ptr [EAX]
00748120  50                        PUSH EAX
00748121  FF 51 04                  CALL dword ptr [ECX + 0x4]
00748124  33 C0                     XOR EAX,EAX
00748126  EB 05                     JMP 0x0074812d
LAB_00748128:
00748128  B8 09 02 04 80            MOV EAX,0x80040209
LAB_0074812d:
0074812D  C2 08 00                  RET 0x8
