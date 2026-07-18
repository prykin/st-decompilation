FUN_006c4aa0:
006C4AA0  55                        PUSH EBP
006C4AA1  8B EC                     MOV EBP,ESP
006C4AA3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C4AA6  8B 48 28                  MOV ECX,dword ptr [EAX + 0x28]
006C4AA9  C7 40 18 FF FF FF FF      MOV dword ptr [EAX + 0x18],0xffffffff
006C4AB0  89 48 20                  MOV dword ptr [EAX + 0x20],ECX
006C4AB3  5D                        POP EBP
006C4AB4  C2 04 00                  RET 0x4
