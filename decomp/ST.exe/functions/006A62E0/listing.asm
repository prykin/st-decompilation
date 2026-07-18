FUN_006a62e0:
006A62E0  55                        PUSH EBP
006A62E1  8B EC                     MOV EBP,ESP
006A62E3  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006A62E6  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006A62E9  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006A62EC  6A 00                     PUSH 0x0
006A62EE  50                        PUSH EAX
006A62EF  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006A62F2  51                        PUSH ECX
006A62F3  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006A62F6  52                        PUSH EDX
006A62F7  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006A62FA  50                        PUSH EAX
006A62FB  51                        PUSH ECX
006A62FC  52                        PUSH EDX
006A62FD  E8 1E FC FF FF            CALL 0x006a5f20
006A6302  83 F8 1A                  CMP EAX,0x1a
006A6305  7C 09                     JL 0x006a6310
006A6307  B8 FE 0F 00 00            MOV EAX,0xffe
006A630C  5D                        POP EBP
006A630D  C2 18 00                  RET 0x18
LAB_006a6310:
006A6310  0F BF 04 C5 76 D5 7E 00   MOVSX EAX,word ptr [EAX*0x8 + 0x7ed576]
006A6318  5D                        POP EBP
006A6319  C2 18 00                  RET 0x18
