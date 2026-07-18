FUN_00749a79:
00749A79  8B 44 24 04               MOV EAX,dword ptr [ESP + 0x4]
00749A7D  83 78 40 03               CMP dword ptr [EAX + 0x40],0x3
00749A81  8B 48 30                  MOV ECX,dword ptr [EAX + 0x30]
00749A84  75 06                     JNZ 0x00749a8c
00749A86  8D 44 01 3C               LEA EAX,[ECX + EAX*0x1 + 0x3c]
00749A8A  EB 04                     JMP 0x00749a90
LAB_00749a8c:
00749A8C  8D 44 01 30               LEA EAX,[ECX + EAX*0x1 + 0x30]
LAB_00749a90:
00749A90  C2 04 00                  RET 0x4
