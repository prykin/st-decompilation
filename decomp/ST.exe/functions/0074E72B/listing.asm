FUN_0074e72b:
0074E72B  55                        PUSH EBP
0074E72C  8B EC                     MOV EBP,ESP
0074E72E  FF 75 1C                  PUSH dword ptr [EBP + 0x1c]
0074E731  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074E734  83 C0 10                  ADD EAX,0x10
0074E737  FF 75 18                  PUSH dword ptr [EBP + 0x18]
0074E73A  FF 75 14                  PUSH dword ptr [EBP + 0x14]
0074E73D  FF 75 10                  PUSH dword ptr [EBP + 0x10]
0074E740  68 10 12 7A 00            PUSH 0x7a1210
0074E745  50                        PUSH EAX
0074E746  E8 C3 FC FF FF            CALL 0x0074e40e
0074E74B  5D                        POP EBP
0074E74C  C2 18 00                  RET 0x18
