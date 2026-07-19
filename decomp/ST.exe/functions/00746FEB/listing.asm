FUN_00746feb:
00746FEB  53                        PUSH EBX
00746FEC  56                        PUSH ESI
00746FED  8B 74 24 0C               MOV ESI,dword ptr [ESP + 0xc]
00746FF1  57                        PUSH EDI
00746FF2  8B 7E 2C                  MOV EDI,dword ptr [ESI + 0x2c]
00746FF5  57                        PUSH EDI
00746FF6  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
00746FFC  8B 5C 24 14               MOV EBX,dword ptr [ESP + 0x14]
00747000  85 DB                     TEST EBX,EBX
00747002  74 06                     JZ 0x0074700a
00747004  8B 03                     MOV EAX,dword ptr [EBX]
00747006  53                        PUSH EBX
00747007  FF 50 04                  CALL dword ptr [EAX + 0x4]
LAB_0074700a:
0074700A  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
0074700D  85 C0                     TEST EAX,EAX
0074700F  74 06                     JZ 0x00747017
00747011  8B 08                     MOV ECX,dword ptr [EAX]
00747013  50                        PUSH EAX
00747014  FF 51 08                  CALL dword ptr [ECX + 0x8]
LAB_00747017:
00747017  57                        PUSH EDI
00747018  89 5E 0C                  MOV dword ptr [ESI + 0xc],EBX
0074701B  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
00747021  5F                        POP EDI
00747022  5E                        POP ESI
00747023  33 C0                     XOR EAX,EAX
00747025  5B                        POP EBX
00747026  C2 08 00                  RET 0x8
