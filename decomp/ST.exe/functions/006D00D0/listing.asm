FUN_006d00d0:
006D00D0  55                        PUSH EBP
006D00D1  8B EC                     MOV EBP,ESP
006D00D3  56                        PUSH ESI
006D00D4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006D00D7  8B 06                     MOV EAX,dword ptr [ESI]
006D00D9  F7 40 08 00 00 00 04      TEST dword ptr [EAX + 0x8],0x4000000
006D00E0  74 0C                     JZ 0x006d00ee
006D00E2  05 F0 04 00 00            ADD EAX,0x4f0
006D00E7  50                        PUSH EAX
006D00E8  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
LAB_006d00ee:
006D00EE  8B 86 A0 01 00 00         MOV EAX,dword ptr [ESI + 0x1a0]
006D00F4  57                        PUSH EDI
006D00F5  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006D00F8  3B F8                     CMP EDI,EAX
006D00FA  73 2B                     JNC 0x006d0127
006D00FC  8B 86 B0 01 00 00         MOV EAX,dword ptr [ESI + 0x1b0]
006D0102  8B 04 B8                  MOV EAX,dword ptr [EAX + EDI*0x4]
006D0105  8B 08                     MOV ECX,dword ptr [EAX]
006D0107  81 E1 00 C0 00 00         AND ECX,0xc000
006D010D  81 F9 00 C0 00 00         CMP ECX,0xc000
006D0113  75 12                     JNZ 0x006d0127
006D0115  05 C0 00 00 00            ADD EAX,0xc0
006D011A  50                        PUSH EAX
006D011B  E8 40 AF FD FF            CALL 0x006ab060
006D0120  57                        PUSH EDI
006D0121  56                        PUSH ESI
006D0122  E8 89 3A FE FF            CALL 0x006b3bb0
LAB_006d0127:
006D0127  8B 36                     MOV ESI,dword ptr [ESI]
006D0129  5F                        POP EDI
006D012A  F7 46 08 00 00 00 04      TEST dword ptr [ESI + 0x8],0x4000000
006D0131  74 0D                     JZ 0x006d0140
006D0133  81 C6 F0 04 00 00         ADD ESI,0x4f0
006D0139  56                        PUSH ESI
006D013A  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006d0140:
006D0140  5E                        POP ESI
006D0141  5D                        POP EBP
006D0142  C2 08 00                  RET 0x8
