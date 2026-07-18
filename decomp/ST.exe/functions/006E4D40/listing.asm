FUN_006e4d40:
006E4D40  55                        PUSH EBP
006E4D41  8B EC                     MOV EBP,ESP
006E4D43  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006E4D46  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
006E4D49  52                        PUSH EDX
006E4D4A  E8 51 F8 FF FF            CALL 0x006e45a0
006E4D4F  85 C0                     TEST EAX,EAX
006E4D51  74 06                     JZ 0x006e4d59
006E4D53  8B 00                     MOV EAX,dword ptr [EAX]
006E4D55  5D                        POP EBP
006E4D56  C2 04 00                  RET 0x4
LAB_006e4d59:
006E4D59  B8 FF FF 00 00            MOV EAX,0xffff
006E4D5E  5D                        POP EBP
006E4D5F  C2 04 00                  RET 0x4
