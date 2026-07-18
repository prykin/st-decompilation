FUN_0074e5fe:
0074E5FE  55                        PUSH EBP
0074E5FF  8B EC                     MOV EBP,ESP
0074E601  FF 75 1C                  PUSH dword ptr [EBP + 0x1c]
0074E604  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074E607  83 C0 10                  ADD EAX,0x10
0074E60A  FF 75 18                  PUSH dword ptr [EBP + 0x18]
0074E60D  FF 75 14                  PUSH dword ptr [EBP + 0x14]
0074E610  FF 75 10                  PUSH dword ptr [EBP + 0x10]
0074E613  68 D8 10 7A 00            PUSH 0x7a10d8
0074E618  50                        PUSH EAX
0074E619  E8 F0 FD FF FF            CALL 0x0074e40e
0074E61E  5D                        POP EBP
0074E61F  C2 18 00                  RET 0x18
