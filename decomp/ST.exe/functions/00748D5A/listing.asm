FUN_00748d5a:
00748D5A  8B 44 24 04               MOV EAX,dword ptr [ESP + 0x4]
00748D5E  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
00748D61  F6 D0                     NOT AL
00748D63  0F B6 C0                  MOVZX EAX,AL
00748D66  D1 E8                     SHR EAX,0x1
00748D68  83 E0 01                  AND EAX,0x1
00748D6B  C2 04 00                  RET 0x4
