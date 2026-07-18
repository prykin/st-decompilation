FUN_00749a5e:
00749A5E  8B 44 24 04               MOV EAX,dword ptr [ESP + 0x4]
00749A62  66 83 78 3E 08            CMP word ptr [EAX + 0x3e],0x8
00749A67  76 0A                     JBE 0x00749a73
00749A69  83 78 50 00               CMP dword ptr [EAX + 0x50],0x0
00749A6D  75 04                     JNZ 0x00749a73
00749A6F  33 C0                     XOR EAX,EAX
00749A71  EB 03                     JMP 0x00749a76
LAB_00749a73:
00749A73  6A 01                     PUSH 0x1
00749A75  58                        POP EAX
LAB_00749a76:
00749A76  C2 04 00                  RET 0x4
