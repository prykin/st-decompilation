FUN_00749db2:
00749DB2  56                        PUSH ESI
00749DB3  57                        PUSH EDI
00749DB4  8B 7C 24 14               MOV EDI,dword ptr [ESP + 0x14]
00749DB8  85 FF                     TEST EDI,EDI
00749DBA  75 07                     JNZ 0x00749dc3
00749DBC  B8 03 40 00 80            MOV EAX,0x80004003
00749DC1  EB 29                     JMP 0x00749dec
LAB_00749dc3:
00749DC3  8B 74 24 0C               MOV ESI,dword ptr [ESP + 0xc]
00749DC7  6A 00                     PUSH 0x0
00749DC9  6A 00                     PUSH 0x0
00749DCB  FF 74 24 18               PUSH dword ptr [ESP + 0x18]
00749DCF  FF 76 50                  PUSH dword ptr [ESI + 0x50]
00749DD2  E8 19 3F 00 00            CALL 0x0074dcf0
00749DD7  3D 02 01 00 00            CMP EAX,0x102
00749DDC  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00749DDF  89 07                     MOV dword ptr [EDI],EAX
00749DE1  75 07                     JNZ 0x00749dea
00749DE3  B8 37 02 04 00            MOV EAX,0x40237
00749DE8  EB 02                     JMP 0x00749dec
LAB_00749dea:
00749DEA  33 C0                     XOR EAX,EAX
LAB_00749dec:
00749DEC  5F                        POP EDI
00749DED  5E                        POP ESI
00749DEE  C2 0C 00                  RET 0xc
