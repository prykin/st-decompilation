FUN_0074f8f9:
0074F8F9  55                        PUSH EBP
0074F8FA  8B EC                     MOV EBP,ESP
0074F8FC  FF 75 1C                  PUSH dword ptr [EBP + 0x1c]
0074F8FF  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074F902  83 C0 10                  ADD EAX,0x10
0074F905  FF 75 18                  PUSH dword ptr [EBP + 0x18]
0074F908  FF 75 14                  PUSH dword ptr [EBP + 0x14]
0074F90B  FF 75 10                  PUSH dword ptr [EBP + 0x10]
0074F90E  68 F8 1D 7A 00            PUSH 0x7a1df8
0074F913  50                        PUSH EAX
0074F914  E8 F5 EA FF FF            CALL 0x0074e40e
0074F919  5D                        POP EBP
0074F91A  C2 18 00                  RET 0x18
