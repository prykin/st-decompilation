FUN_0074fa1d:
0074FA1D  55                        PUSH EBP
0074FA1E  8B EC                     MOV EBP,ESP
0074FA20  FF 75 1C                  PUSH dword ptr [EBP + 0x1c]
0074FA23  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074FA26  83 C0 10                  ADD EAX,0x10
0074FA29  FF 75 18                  PUSH dword ptr [EBP + 0x18]
0074FA2C  FF 75 14                  PUSH dword ptr [EBP + 0x14]
0074FA2F  FF 75 10                  PUSH dword ptr [EBP + 0x10]
0074FA32  68 18 1E 7A 00            PUSH 0x7a1e18
0074FA37  50                        PUSH EAX
0074FA38  E8 D1 E9 FF FF            CALL 0x0074e40e
0074FA3D  5D                        POP EBP
0074FA3E  C2 18 00                  RET 0x18
