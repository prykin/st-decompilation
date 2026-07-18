FUN_0074f99c:
0074F99C  55                        PUSH EBP
0074F99D  8B EC                     MOV EBP,ESP
0074F99F  56                        PUSH ESI
0074F9A0  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0074F9A3  57                        PUSH EDI
0074F9A4  6A 10                     PUSH 0x10
0074F9A6  59                        POP ECX
0074F9A7  BF 18 1E 7A 00            MOV EDI,0x7a1e18
0074F9AC  33 C0                     XOR EAX,EAX
0074F9AE  F3 A6                     CMPSB.REPE ES:EDI,ESI
0074F9B0  74 21                     JZ 0x0074f9d3
0074F9B2  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0074F9B5  6A 10                     PUSH 0x10
0074F9B7  59                        POP ECX
0074F9B8  BF 08 1E 7A 00            MOV EDI,0x7a1e08
0074F9BD  33 C0                     XOR EAX,EAX
0074F9BF  F3 A6                     CMPSB.REPE ES:EDI,ESI
0074F9C1  74 10                     JZ 0x0074f9d3
0074F9C3  FF 75 10                  PUSH dword ptr [EBP + 0x10]
0074F9C6  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074F9C9  FF 75 08                  PUSH dword ptr [EBP + 0x8]
0074F9CC  E8 3F BE FF FF            CALL 0x0074b810
0074F9D1  EB 0F                     JMP 0x0074f9e2
LAB_0074f9d3:
0074F9D3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074F9D6  FF 75 10                  PUSH dword ptr [EBP + 0x10]
0074F9D9  83 C0 FC                  ADD EAX,-0x4
0074F9DC  50                        PUSH EAX
0074F9DD  E8 C4 BE FF FF            CALL 0x0074b8a6
LAB_0074f9e2:
0074F9E2  5F                        POP EDI
0074F9E3  5E                        POP ESI
0074F9E4  5D                        POP EBP
0074F9E5  C2 0C 00                  RET 0xc
