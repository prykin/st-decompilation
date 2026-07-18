FUN_0074de63:
0074DE63  8B C1                     MOV EAX,ECX
0074DE65  33 C9                     XOR ECX,ECX
0074DE67  89 08                     MOV dword ptr [EAX],ECX
0074DE69  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
0074DE6C  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
0074DE6F  C7 40 0C 0A 00 00 00      MOV dword ptr [EAX + 0xc],0xa
0074DE76  89 48 10                  MOV dword ptr [EAX + 0x10],ECX
0074DE79  89 48 14                  MOV dword ptr [EAX + 0x14],ECX
0074DE7C  C2 04 00                  RET 0x4
