FUN_005792e0:
005792E0  55                        PUSH EBP
005792E1  8B EC                     MOV EBP,ESP
005792E3  8B 41 1C                  MOV EAX,dword ptr [ECX + 0x1c]
005792E6  33 D2                     XOR EDX,EDX
005792E8  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
005792EE  05 39 30 00 00            ADD EAX,0x3039
005792F3  89 41 1C                  MOV dword ptr [ECX + 0x1c],EAX
005792F6  B9 15 00 00 00            MOV ECX,0x15
005792FB  C1 E8 10                  SHR EAX,0x10
005792FE  F7 F1                     DIV ECX
00579300  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00579303  8D 44 02 1E               LEA EAX,[EDX + EAX*0x1 + 0x1e]
00579307  5D                        POP EBP
00579308  C2 08 00                  RET 0x8
