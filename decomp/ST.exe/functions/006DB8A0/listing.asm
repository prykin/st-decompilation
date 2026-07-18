FUN_006db8a0:
006DB8A0  55                        PUSH EBP
006DB8A1  8B EC                     MOV EBP,ESP
006DB8A3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006DB8A6  F7 D8                     NEG EAX
006DB8A8  50                        PUSH EAX
006DB8A9  E8 72 FF FF FF            CALL 0x006db820
006DB8AE  83 E8 5A                  SUB EAX,0x5a
006DB8B1  79 09                     JNS 0x006db8bc
006DB8B3  B9 B4 00 00 00            MOV ECX,0xb4
006DB8B8  2B C8                     SUB ECX,EAX
006DB8BA  8B C1                     MOV EAX,ECX
LAB_006db8bc:
006DB8BC  5D                        POP EBP
006DB8BD  C2 04 00                  RET 0x4
