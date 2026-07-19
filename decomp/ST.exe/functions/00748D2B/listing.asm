FUN_00748d2b:
00748D2B  8B 44 24 04               MOV EAX,dword ptr [ESP + 0x4]
00748D2F  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
00748D32  F6 D0                     NOT AL
00748D34  0F B6 C0                  MOVZX EAX,AL
00748D37  C1 E8 02                  SHR EAX,0x2
00748D3A  83 E0 01                  AND EAX,0x1
00748D3D  C2 04 00                  RET 0x4
