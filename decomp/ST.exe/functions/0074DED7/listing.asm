FUN_0074ded7:
0074DED7  8B 44 24 04               MOV EAX,dword ptr [ESP + 0x4]
0074DEDB  85 C0                     TEST EAX,EAX
0074DEDD  74 03                     JZ 0x0074dee2
0074DEDF  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
LAB_0074dee2:
0074DEE2  C2 04 00                  RET 0x4
