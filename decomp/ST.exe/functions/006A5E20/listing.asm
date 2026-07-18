FUN_006a5e20:
006A5E20  55                        PUSH EBP
006A5E21  8B EC                     MOV EBP,ESP
006A5E23  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006A5E28  85 C0                     TEST EAX,EAX
006A5E2A  74 0D                     JZ 0x006a5e39
006A5E2C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006A5E2F  83 C0 04                  ADD EAX,0x4
006A5E32  51                        PUSH ECX
006A5E33  50                        PUSH EAX
006A5E34  E8 73 DA 08 00            CALL 0x007338ac
LAB_006a5e39:
006A5E39  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006A5E3C  5D                        POP EBP
006A5E3D  C2 04 00                  RET 0x4
