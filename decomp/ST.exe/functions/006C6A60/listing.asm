FUN_006c6a60:
006C6A60  55                        PUSH EBP
006C6A61  8B EC                     MOV EBP,ESP
006C6A63  81 EC 04 04 00 00         SUB ESP,0x404
006C6A69  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006C6A6C  8D 85 00 FC FF FF         LEA EAX,[EBP + 0xfffffc00]
006C6A72  6A 00                     PUSH 0x0
006C6A74  50                        PUSH EAX
006C6A75  51                        PUSH ECX
006C6A76  E8 E5 58 FF FF            CALL 0x006bc360
006C6A7B  8D 95 FC FB FF FF         LEA EDX,[EBP + 0xfffffbfc]
006C6A81  52                        PUSH EDX
006C6A82  E8 69 12 01 00            CALL 0x006d7cf0
006C6A87  8B E5                     MOV ESP,EBP
006C6A89  5D                        POP EBP
006C6A8A  C2 04 00                  RET 0x4
