FUN_0075fb30:
0075FB30  55                        PUSH EBP
0075FB31  8B EC                     MOV EBP,ESP
0075FB33  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0075FB36  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0075FB39  8B D0                     MOV EDX,EAX
0075FB3B  C1 E2 08                  SHL EDX,0x8
0075FB3E  2B D0                     SUB EDX,EAX
0075FB40  8D 84 51 FF 00 00 00      LEA EAX,[ECX + EDX*0x2 + 0xff]
0075FB47  03 C9                     ADD ECX,ECX
0075FB49  99                        CDQ
0075FB4A  F7 F9                     IDIV ECX
0075FB4C  5D                        POP EBP
0075FB4D  C2 10 00                  RET 0x10
