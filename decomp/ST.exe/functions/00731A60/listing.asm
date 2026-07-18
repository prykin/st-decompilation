FUN_00731a60:
00731A60  55                        PUSH EBP
00731A61  8B EC                     MOV EBP,ESP
00731A63  81 7D 08 F8 03 00 00      CMP dword ptr [EBP + 0x8],0x3f8
00731A6A  76 04                     JBE 0x00731a70
00731A6C  33 C0                     XOR EAX,EAX
00731A6E  EB 0D                     JMP 0x00731a7d
LAB_00731a70:
00731A70  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00731A73  A3 C8 14 7F 00            MOV [0x007f14c8],EAX
00731A78  B8 01 00 00 00            MOV EAX,0x1
LAB_00731a7d:
00731A7D  5D                        POP EBP
00731A7E  C3                        RET
