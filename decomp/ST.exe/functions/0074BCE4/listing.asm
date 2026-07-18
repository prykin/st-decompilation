FUN_0074bce4:
0074BCE4  56                        PUSH ESI
0074BCE5  8B 74 24 08               MOV ESI,dword ptr [ESP + 0x8]
0074BCE9  83 7E 40 00               CMP dword ptr [ESI + 0x40],0x0
0074BCED  74 11                     JZ 0x0074bd00
0074BCEF  FF 76 44                  PUSH dword ptr [ESI + 0x44]
0074BCF2  FF 15 DC C0 85 00         CALL dword ptr [0x0085c0dc]
0074BCF8  83 66 40 00               AND dword ptr [ESI + 0x40],0x0
0074BCFC  83 66 44 00               AND dword ptr [ESI + 0x44],0x0
LAB_0074bd00:
0074BD00  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
0074BD03  85 C0                     TEST EAX,EAX
0074BD05  74 0A                     JZ 0x0074bd11
0074BD07  8B 08                     MOV ECX,dword ptr [EAX]
0074BD09  50                        PUSH EAX
0074BD0A  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074BD0D  83 66 3C 00               AND dword ptr [ESI + 0x3c],0x0
LAB_0074bd11:
0074BD11  5E                        POP ESI
0074BD12  C2 04 00                  RET 0x4
