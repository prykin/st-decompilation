FUN_0064e290:
0064E290  55                        PUSH EBP
0064E291  8B EC                     MOV EBP,ESP
0064E293  53                        PUSH EBX
0064E294  56                        PUSH ESI
0064E295  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
0064E298  57                        PUSH EDI
0064E299  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
0064E29C  8B F7                     MOV ESI,EDI
0064E29E  C1 EE 10                  SHR ESI,0x10
0064E2A1  66 85 FF                  TEST DI,DI
0064E2A4  7D 08                     JGE 0x0064e2ae
0064E2A6  56                        PUSH ESI
0064E2A7  8B CB                     MOV ECX,EBX
0064E2A9  E8 F1 6F DB FF            CALL 0x0040529f
LAB_0064e2ae:
0064E2AE  66 85 FF                  TEST DI,DI
0064E2B1  75 11                     JNZ 0x0064e2c4
0064E2B3  6A 01                     PUSH 0x1
0064E2B5  56                        PUSH ESI
0064E2B6  8B CB                     MOV ECX,EBX
0064E2B8  E8 6E 66 DB FF            CALL 0x0040492b
0064E2BD  5F                        POP EDI
0064E2BE  5E                        POP ESI
0064E2BF  33 C0                     XOR EAX,EAX
0064E2C1  5B                        POP EBX
0064E2C2  5D                        POP EBP
0064E2C3  C3                        RET
LAB_0064e2c4:
0064E2C4  7E 08                     JLE 0x0064e2ce
0064E2C6  56                        PUSH ESI
0064E2C7  8B CB                     MOV ECX,EBX
0064E2C9  E8 90 2E DB FF            CALL 0x0040115e
LAB_0064e2ce:
0064E2CE  5F                        POP EDI
0064E2CF  5E                        POP ESI
0064E2D0  33 C0                     XOR EAX,EAX
0064E2D2  5B                        POP EBX
0064E2D3  5D                        POP EBP
0064E2D4  C3                        RET
