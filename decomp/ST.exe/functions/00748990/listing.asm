FUN_00748990:
00748990  8B 44 24 08               MOV EAX,dword ptr [ESP + 0x8]
00748994  F7 D8                     NEG EAX
00748996  1B C0                     SBB EAX,EAX
00748998  25 FD BF FF 7F            AND EAX,0x7fffbffd
0074899D  05 03 40 00 80            ADD EAX,0x80004003
007489A2  C2 20 00                  RET 0x20
