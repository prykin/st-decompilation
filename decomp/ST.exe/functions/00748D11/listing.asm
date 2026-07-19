FUN_00748d11:
00748D11  83 7C 24 08 00            CMP dword ptr [ESP + 0x8],0x0
00748D16  8B 44 24 04               MOV EAX,dword ptr [ESP + 0x4]
00748D1A  74 06                     JZ 0x00748d22
00748D1C  83 48 04 01               OR dword ptr [EAX + 0x4],0x1
00748D20  EB 04                     JMP 0x00748d26
LAB_00748d22:
00748D22  83 60 04 FE               AND dword ptr [EAX + 0x4],0xfffffffe
LAB_00748d26:
00748D26  33 C0                     XOR EAX,EAX
00748D28  C2 08 00                  RET 0x8
