FUN_004d8320:
004D8320  55                        PUSH EBP
004D8321  8B EC                     MOV EBP,ESP
004D8323  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004D8326  56                        PUSH ESI
004D8327  8B F1                     MOV ESI,ECX
004D8329  A3 38 A1 7F 00            MOV [0x007fa138],EAX
004D832E  A3 3C A1 7F 00            MOV [0x007fa13c],EAX
004D8333  E8 DA C5 F2 FF            CALL 0x00404912
004D8338  8B CE                     MOV ECX,ESI
004D833A  E8 28 8F F2 FF            CALL 0x00401267
004D833F  A3 48 A1 7F 00            MOV [0x007fa148],EAX
004D8344  33 C0                     XOR EAX,EAX
004D8346  5E                        POP ESI
004D8347  5D                        POP EBP
004D8348  C2 04 00                  RET 0x4
