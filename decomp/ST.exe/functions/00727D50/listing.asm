FUN_00727d50:
00727D50  55                        PUSH EBP
00727D51  8B EC                     MOV EBP,ESP
00727D53  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00727D56  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
00727D59  4A                        DEC EDX
00727D5A  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
00727D5D  75 14                     JNZ 0x00727d73
00727D5F  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
00727D62  52                        PUSH EDX
00727D63  50                        PUSH EAX
00727D64  E8 17 FF FF FF            CALL 0x00727c80
00727D69  F7 D8                     NEG EAX
00727D6B  1B C0                     SBB EAX,EAX
00727D6D  F7 D8                     NEG EAX
00727D6F  5D                        POP EBP
00727D70  C2 04 00                  RET 0x4
LAB_00727d73:
00727D73  8B 48 28                  MOV ECX,dword ptr [EAX + 0x28]
00727D76  8B 50 24                  MOV EDX,dword ptr [EAX + 0x24]
00727D79  03 D1                     ADD EDX,ECX
00727D7B  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
00727D7E  89 50 24                  MOV dword ptr [EAX + 0x24],EDX
00727D81  8B 50 20                  MOV EDX,dword ptr [EAX + 0x20]
00727D84  03 CA                     ADD ECX,EDX
00727D86  89 48 1C                  MOV dword ptr [EAX + 0x1c],ECX
00727D89  B8 01 00 00 00            MOV EAX,0x1
00727D8E  5D                        POP EBP
00727D8F  C2 04 00                  RET 0x4
