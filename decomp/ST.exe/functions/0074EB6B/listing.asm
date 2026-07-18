FUN_0074eb6b:
0074EB6B  56                        PUSH ESI
0074EB6C  8B 74 24 08               MOV ESI,dword ptr [ESP + 0x8]
0074EB70  6A 00                     PUSH 0x0
0074EB72  8B CE                     MOV ECX,ESI
0074EB74  8B 06                     MOV EAX,dword ptr [ESI]
0074EB76  FF 74 24 10               PUSH dword ptr [ESP + 0x10]
0074EB7A  FF 50 50                  CALL dword ptr [EAX + 0x50]
0074EB7D  85 C0                     TEST EAX,EAX
0074EB7F  7C 04                     JL 0x0074eb85
0074EB81  33 C0                     XOR EAX,EAX
0074EB83  EB 10                     JMP 0x0074eb95
LAB_0074eb85:
0074EB85  FF 74 24 0C               PUSH dword ptr [ESP + 0xc]
0074EB89  8B CE                     MOV ECX,ESI
0074EB8B  68 5C 05 75 00            PUSH 0x75055c
0074EB90  E8 A7 FF FF FF            CALL 0x0074eb3c
LAB_0074eb95:
0074EB95  5E                        POP ESI
0074EB96  C2 08 00                  RET 0x8
