FUN_006903a0:
006903A0  55                        PUSH EBP
006903A1  8B EC                     MOV EBP,ESP
006903A3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006903A6  50                        PUSH EAX
006903A7  E8 2F 2C D7 FF            CALL 0x00402fdb
006903AC  85 C0                     TEST EAX,EAX
006903AE  74 0E                     JZ 0x006903be
006903B0  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006903B3  8B 10                     MOV EDX,dword ptr [EAX]
006903B5  51                        PUSH ECX
006903B6  8B C8                     MOV ECX,EAX
006903B8  FF 12                     CALL dword ptr [EDX]
006903BA  5D                        POP EBP
006903BB  C2 08 00                  RET 0x8
LAB_006903be:
006903BE  B8 FF FF 00 00            MOV EAX,0xffff
006903C3  5D                        POP EBP
006903C4  C2 08 00                  RET 0x8
