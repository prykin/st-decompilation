FUN_0074bc89:
0074BC89  8B 44 24 08               MOV EAX,dword ptr [ESP + 0x8]
0074BC8D  53                        PUSH EBX
0074BC8E  8B 5C 24 08               MOV EBX,dword ptr [ESP + 0x8]
0074BC92  56                        PUSH ESI
0074BC93  57                        PUSH EDI
0074BC94  6A 12                     PUSH 0x12
0074BC96  59                        POP ECX
0074BC97  8B F0                     MOV ESI,EAX
0074BC99  8B FB                     MOV EDI,EBX
0074BC9B  F3 A5                     MOVSD.REP ES:EDI,ESI
0074BC9D  8B 40 40                  MOV EAX,dword ptr [EAX + 0x40]
0074BCA0  85 C0                     TEST EAX,EAX
0074BCA2  74 2D                     JZ 0x0074bcd1
0074BCA4  50                        PUSH EAX
0074BCA5  FF 15 D8 C0 85 00         CALL dword ptr [0x0085c0d8]
0074BCAB  85 C0                     TEST EAX,EAX
0074BCAD  89 43 44                  MOV dword ptr [EBX + 0x44],EAX
0074BCB0  75 05                     JNZ 0x0074bcb7
0074BCB2  21 43 40                  AND dword ptr [EBX + 0x40],EAX
0074BCB5  EB 1A                     JMP 0x0074bcd1
LAB_0074bcb7:
0074BCB7  8B 4B 40                  MOV ECX,dword ptr [EBX + 0x40]
0074BCBA  8B 54 24 14               MOV EDX,dword ptr [ESP + 0x14]
0074BCBE  8B F8                     MOV EDI,EAX
0074BCC0  8B C1                     MOV EAX,ECX
0074BCC2  8B 72 44                  MOV ESI,dword ptr [EDX + 0x44]
0074BCC5  C1 E9 02                  SHR ECX,0x2
0074BCC8  F3 A5                     MOVSD.REP ES:EDI,ESI
0074BCCA  8B C8                     MOV ECX,EAX
0074BCCC  83 E1 03                  AND ECX,0x3
0074BCCF  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_0074bcd1:
0074BCD1  8B 5B 3C                  MOV EBX,dword ptr [EBX + 0x3c]
0074BCD4  85 DB                     TEST EBX,EBX
0074BCD6  74 06                     JZ 0x0074bcde
0074BCD8  8B 03                     MOV EAX,dword ptr [EBX]
0074BCDA  53                        PUSH EBX
0074BCDB  FF 50 04                  CALL dword ptr [EAX + 0x4]
LAB_0074bcde:
0074BCDE  5F                        POP EDI
0074BCDF  5E                        POP ESI
0074BCE0  5B                        POP EBX
0074BCE1  C2 08 00                  RET 0x8
