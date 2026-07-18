FUN_00525290:
00525290  55                        PUSH EBP
00525291  8B EC                     MOV EBP,ESP
00525293  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00525296  25 FF 00 00 00            AND EAX,0xff
0052529B  05 14 37 00 00            ADD EAX,0x3714
005252A0  5D                        POP EBP
005252A1  C3                        RET
