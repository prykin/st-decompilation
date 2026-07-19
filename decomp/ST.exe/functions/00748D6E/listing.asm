FUN_00748d6e:
00748D6E  83 7C 24 08 00            CMP dword ptr [ESP + 0x8],0x0
00748D73  8B 44 24 04               MOV EAX,dword ptr [ESP + 0x4]
00748D77  74 06                     JZ 0x00748d7f
00748D79  83 48 04 02               OR dword ptr [EAX + 0x4],0x2
00748D7D  EB 04                     JMP 0x00748d83
LAB_00748d7f:
00748D7F  83 60 04 FD               AND dword ptr [EAX + 0x4],0xfffffffd
LAB_00748d83:
00748D83  33 C0                     XOR EAX,EAX
00748D85  C2 08 00                  RET 0x8
