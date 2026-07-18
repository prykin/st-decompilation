FUN_0074f7e9:
0074F7E9  55                        PUSH EBP
0074F7EA  8B EC                     MOV EBP,ESP
0074F7EC  FF 75 1C                  PUSH dword ptr [EBP + 0x1c]
0074F7EF  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074F7F2  83 C0 10                  ADD EAX,0x10
0074F7F5  FF 75 18                  PUSH dword ptr [EBP + 0x18]
0074F7F8  FF 75 14                  PUSH dword ptr [EBP + 0x14]
0074F7FB  FF 75 10                  PUSH dword ptr [EBP + 0x10]
0074F7FE  68 E8 1D 7A 00            PUSH 0x7a1de8
0074F803  50                        PUSH EAX
0074F804  E8 05 EC FF FF            CALL 0x0074e40e
0074F809  5D                        POP EBP
0074F80A  C2 18 00                  RET 0x18
