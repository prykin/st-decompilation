FUN_00748d40:
00748D40  83 7C 24 08 00            CMP dword ptr [ESP + 0x8],0x0
00748D45  8B 44 24 04               MOV EAX,dword ptr [ESP + 0x4]
00748D49  74 06                     JZ 0x00748d51
00748D4B  83 48 04 04               OR dword ptr [EAX + 0x4],0x4
00748D4F  EB 04                     JMP 0x00748d55
LAB_00748d51:
00748D51  83 60 04 FB               AND dword ptr [EAX + 0x4],0xfffffffb
LAB_00748d55:
00748D55  33 C0                     XOR EAX,EAX
00748D57  C2 08 00                  RET 0x8
