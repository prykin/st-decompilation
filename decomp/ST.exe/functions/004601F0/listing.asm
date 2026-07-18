FUN_004601f0:
004601F0  55                        PUSH EBP
004601F1  8B EC                     MOV EBP,ESP
004601F3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004601F6  56                        PUSH ESI
004601F7  85 C0                     TEST EAX,EAX
004601F9  8B F1                     MOV ESI,ECX
004601FB  75 06                     JNZ 0x00460203
004601FD  89 86 F4 00 00 00         MOV dword ptr [ESI + 0xf4],EAX
LAB_00460203:
00460203  50                        PUSH EAX
00460204  8B CE                     MOV ECX,ESI
00460206  E8 29 39 FA FF            CALL 0x00403b34
0046020B  83 F8 02                  CMP EAX,0x2
0046020E  75 1C                     JNZ 0x0046022c
00460210  83 BE F4 00 00 00 01      CMP dword ptr [ESI + 0xf4],0x1
00460217  75 13                     JNZ 0x0046022c
00460219  8B 06                     MOV EAX,dword ptr [ESI]
0046021B  8B CE                     MOV ECX,ESI
0046021D  FF 50 20                  CALL dword ptr [EAX + 0x20]
00460220  C7 86 F4 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xf4],0x0
0046022A  33 C0                     XOR EAX,EAX
LAB_0046022c:
0046022C  5E                        POP ESI
0046022D  5D                        POP EBP
0046022E  C2 04 00                  RET 0x4
