FUN_00748cff:
00748CFF  8B 44 24 04               MOV EAX,dword ptr [ESP + 0x4]
00748D03  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
00748D06  F6 D0                     NOT AL
00748D08  0F B6 C0                  MOVZX EAX,AL
00748D0B  83 E0 01                  AND EAX,0x1
00748D0E  C2 04 00                  RET 0x4
