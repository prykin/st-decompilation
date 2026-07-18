FUN_005efa90:
005EFA90  55                        PUSH EBP
005EFA91  8B EC                     MOV EBP,ESP
005EFA93  8B 81 E5 02 00 00         MOV EAX,dword ptr [ECX + 0x2e5]
005EFA99  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005EFA9C  48                        DEC EAX
005EFA9D  52                        PUSH EDX
005EFA9E  89 81 E5 02 00 00         MOV dword ptr [ECX + 0x2e5],EAX
005EFAA4  8B 01                     MOV EAX,dword ptr [ECX]
005EFAA6  FF 90 AC 00 00 00         CALL dword ptr [EAX + 0xac]
005EFAAC  5D                        POP EBP
005EFAAD  C2 04 00                  RET 0x4
