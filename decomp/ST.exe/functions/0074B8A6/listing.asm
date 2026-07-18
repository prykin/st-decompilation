FUN_0074b8a6:
0074B8A6  8B 4C 24 08               MOV ECX,dword ptr [ESP + 0x8]
0074B8AA  85 C9                     TEST ECX,ECX
0074B8AC  75 07                     JNZ 0x0074b8b5
0074B8AE  B8 03 40 00 80            MOV EAX,0x80004003
0074B8B3  EB 0E                     JMP 0x0074b8c3
LAB_0074b8b5:
0074B8B5  8B 44 24 04               MOV EAX,dword ptr [ESP + 0x4]
0074B8B9  89 01                     MOV dword ptr [ECX],EAX
0074B8BB  50                        PUSH EAX
0074B8BC  8B 08                     MOV ECX,dword ptr [EAX]
0074B8BE  FF 51 04                  CALL dword ptr [ECX + 0x4]
0074B8C1  33 C0                     XOR EAX,EAX
LAB_0074b8c3:
0074B8C3  C2 08 00                  RET 0x8
