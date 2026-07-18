FUN_006c7b90:
006C7B90  55                        PUSH EBP
006C7B91  8B EC                     MOV EBP,ESP
006C7B93  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C7B96  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006C7B99  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006C7B9C  89 08                     MOV dword ptr [EAX],ECX
006C7B9E  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
006C7BA1  5D                        POP EBP
006C7BA2  C2 0C 00                  RET 0xc
