FUN_0074dec2:
0074DEC2  8B 4C 24 04               MOV ECX,dword ptr [ESP + 0x4]
0074DEC6  8B 01                     MOV EAX,dword ptr [ECX]
0074DEC8  85 C0                     TEST EAX,EAX
0074DECA  74 08                     JZ 0x0074ded4
0074DECC  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0074DECF  89 11                     MOV dword ptr [ECX],EDX
0074DED1  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
LAB_0074ded4:
0074DED4  C2 04 00                  RET 0x4
