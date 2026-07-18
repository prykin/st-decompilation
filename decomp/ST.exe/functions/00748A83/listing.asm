FUN_00748a83:
00748A83  8B C1                     MOV EAX,ECX
00748A85  33 D2                     XOR EDX,EDX
00748A87  8B 4C 24 10               MOV ECX,dword ptr [ESP + 0x10]
00748A8B  89 48 0C                  MOV dword ptr [EAX + 0xc],ECX
00748A8E  8B 4C 24 14               MOV ECX,dword ptr [ESP + 0x14]
00748A92  89 48 10                  MOV dword ptr [EAX + 0x10],ECX
00748A95  89 48 14                  MOV dword ptr [EAX + 0x14],ECX
00748A98  8B 4C 24 08               MOV ECX,dword ptr [ESP + 0x8]
00748A9C  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
00748A9F  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
00748AA2  89 48 18                  MOV dword ptr [EAX + 0x18],ECX
00748AA5  89 50 3C                  MOV dword ptr [EAX + 0x3c],EDX
00748AA8  89 50 40                  MOV dword ptr [EAX + 0x40],EDX
00748AAB  89 50 44                  MOV dword ptr [EAX + 0x44],EDX
00748AAE  C7 00 48 11 7A 00         MOV dword ptr [EAX],0x7a1148
00748AB4  C2 14 00                  RET 0x14
