FUN_00748dae:
00748DAE  8B 44 24 04               MOV EAX,dword ptr [ESP + 0x4]
00748DB2  F6 40 04 08               TEST byte ptr [EAX + 0x4],0x8
00748DB6  75 0C                     JNZ 0x00748dc4
00748DB8  8B 44 24 08               MOV EAX,dword ptr [ESP + 0x8]
00748DBC  6A 01                     PUSH 0x1
00748DBE  83 20 00                  AND dword ptr [EAX],0x0
00748DC1  58                        POP EAX
00748DC2  EB 1C                     JMP 0x00748de0
LAB_00748dc4:
00748DC4  FF 70 3C                  PUSH dword ptr [EAX + 0x3c]
00748DC7  E8 9E 2E 00 00            CALL 0x0074bc6a
00748DCC  8B 4C 24 08               MOV ECX,dword ptr [ESP + 0x8]
00748DD0  89 01                     MOV dword ptr [ECX],EAX
00748DD2  F7 D8                     NEG EAX
00748DD4  1B C0                     SBB EAX,EAX
00748DD6  25 F2 FF F8 7F            AND EAX,0x7ff8fff2
00748DDB  05 0E 00 07 80            ADD EAX,0x8007000e
LAB_00748de0:
00748DE0  C2 08 00                  RET 0x8
