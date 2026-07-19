FUN_0074aef2:
0074AEF2  8B 44 24 10               MOV EAX,dword ptr [ESP + 0x10]
0074AEF6  3D E8 03 00 00            CMP EAX,0x3e8
0074AEFB  7C 0A                     JL 0x0074af07
0074AEFD  8B 44 24 04               MOV EAX,dword ptr [ESP + 0x4]
0074AF01  83 60 0C 00               AND dword ptr [EAX + 0xc],0x0
0074AF05  EB 1A                     JMP 0x0074af21
LAB_0074af07:
0074AF07  8D 88 A7 00 00 00         LEA ECX,[EAX + 0xa7]
0074AF0D  B8 80 D6 2D 17            MOV EAX,0x172dd680
0074AF12  99                        CDQ
0074AF13  F7 F9                     IDIV ECX
0074AF15  8B 4C 24 04               MOV ECX,dword ptr [ESP + 0x4]
0074AF19  2D 10 09 05 00            SUB EAX,0x50910
0074AF1E  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
LAB_0074af21:
0074AF21  33 C0                     XOR EAX,EAX
0074AF23  C2 20 00                  RET 0x20
