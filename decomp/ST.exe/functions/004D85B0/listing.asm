FUN_004d85b0:
004D85B0  55                        PUSH EBP
004D85B1  8B EC                     MOV EBP,ESP
004D85B3  A1 50 A1 7F 00            MOV EAX,[0x007fa150]
004D85B8  85 C0                     TEST EAX,EAX
004D85BA  74 0A                     JZ 0x004d85c6
004D85BC  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004D85BF  51                        PUSH ECX
004D85C0  50                        PUSH EAX
004D85C1  E8 AA 86 1D 00            CALL 0x006b0c70
LAB_004d85c6:
004D85C6  5D                        POP EBP
004D85C7  C2 04 00                  RET 0x4
