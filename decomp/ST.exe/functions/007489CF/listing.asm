FUN_007489cf:
007489CF  8B 41 70                  MOV EAX,dword ptr [ECX + 0x70]
007489D2  83 78 14 00               CMP dword ptr [EAX + 0x14],0x0
007489D6  75 06                     JNZ 0x007489de
007489D8  B8 27 02 04 80            MOV EAX,0x80040227
007489DD  C3                        RET
LAB_007489de:
007489DE  80 B9 A1 00 00 00 00      CMP byte ptr [ECX + 0xa1],0x0
007489E5  74 04                     JZ 0x007489eb
007489E7  6A 01                     PUSH 0x1
007489E9  58                        POP EAX
007489EA  C3                        RET
LAB_007489eb:
007489EB  8B 41 6C                  MOV EAX,dword ptr [ECX + 0x6c]
007489EE  F7 D8                     NEG EAX
007489F0  1B C0                     SBB EAX,EAX
007489F2  25 0B 02 04 80            AND EAX,0x8004020b
007489F7  C3                        RET
