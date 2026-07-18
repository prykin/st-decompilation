FUN_004d8110:
004D8110  55                        PUSH EBP
004D8111  8B EC                     MOV EBP,ESP
004D8113  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004D8116  56                        PUSH ESI
004D8117  8B F1                     MOV ESI,ECX
004D8119  A3 38 A1 7F 00            MOV [0x007fa138],EAX
004D811E  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
004D8125  A3 3C A1 7F 00            MOV [0x007fa13c],EAX
004D812A  0F BF 05 44 B2 7F 00      MOVSX EAX,word ptr [0x007fb244]
004D8131  0F AF C1                  IMUL EAX,ECX
004D8134  8B CE                     MOV ECX,ESI
004D8136  A3 40 A1 7F 00            MOV [0x007fa140],EAX
004D813B  E8 D2 C7 F2 FF            CALL 0x00404912
004D8140  8B CE                     MOV ECX,ESI
004D8142  E8 20 91 F2 FF            CALL 0x00401267
004D8147  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004D814D  A3 48 A1 7F 00            MOV [0x007fa148],EAX
004D8152  5E                        POP ESI
004D8153  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004D8159  A3 4C A1 7F 00            MOV [0x007fa14c],EAX
004D815E  33 C0                     XOR EAX,EAX
004D8160  5D                        POP EBP
004D8161  C2 04 00                  RET 0x4
