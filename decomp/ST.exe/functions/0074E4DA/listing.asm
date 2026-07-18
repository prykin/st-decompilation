FUN_0074e4da:
0074E4DA  55                        PUSH EBP
0074E4DB  8B EC                     MOV EBP,ESP
0074E4DD  FF 75 1C                  PUSH dword ptr [EBP + 0x1c]
0074E4E0  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074E4E3  83 C0 10                  ADD EAX,0x10
0074E4E6  FF 75 18                  PUSH dword ptr [EBP + 0x18]
0074E4E9  FF 75 14                  PUSH dword ptr [EBP + 0x14]
0074E4EC  FF 75 10                  PUSH dword ptr [EBP + 0x10]
0074E4EF  68 20 12 7A 00            PUSH 0x7a1220
0074E4F4  50                        PUSH EAX
0074E4F5  E8 14 FF FF FF            CALL 0x0074e40e
0074E4FA  5D                        POP EBP
0074E4FB  C2 18 00                  RET 0x18
