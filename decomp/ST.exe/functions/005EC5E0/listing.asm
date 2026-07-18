FUN_005ec5e0:
005EC5E0  55                        PUSH EBP
005EC5E1  8B EC                     MOV EBP,ESP
005EC5E3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005EC5E6  48                        DEC EAX
005EC5E7  74 18                     JZ 0x005ec601
005EC5E9  48                        DEC EAX
005EC5EA  74 0C                     JZ 0x005ec5f8
005EC5EC  48                        DEC EAX
005EC5ED  75 12                     JNZ 0x005ec601
005EC5EF  B8 05 00 00 00            MOV EAX,0x5
005EC5F4  5D                        POP EBP
005EC5F5  C2 04 00                  RET 0x4
LAB_005ec5f8:
005EC5F8  B8 04 00 00 00            MOV EAX,0x4
005EC5FD  5D                        POP EBP
005EC5FE  C2 04 00                  RET 0x4
LAB_005ec601:
005EC601  B8 03 00 00 00            MOV EAX,0x3
005EC606  5D                        POP EBP
005EC607  C2 04 00                  RET 0x4
