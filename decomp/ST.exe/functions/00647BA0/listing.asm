FUN_00647ba0:
00647BA0  55                        PUSH EBP
00647BA1  8B EC                     MOV EBP,ESP
00647BA3  8B 81 E2 04 00 00         MOV EAX,dword ptr [ECX + 0x4e2]
00647BA9  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00647BAC  0F BF 49 01               MOVSX ECX,word ptr [ECX + 0x1]
00647BB0  3B 48 08                  CMP ECX,dword ptr [EAX + 0x8]
00647BB3  7D 0A                     JGE 0x00647bbf
00647BB5  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
00647BB8  8B 04 8A                  MOV EAX,dword ptr [EDX + ECX*0x4]
00647BBB  5D                        POP EBP
00647BBC  C2 04 00                  RET 0x4
LAB_00647bbf:
00647BBF  33 C0                     XOR EAX,EAX
00647BC1  5D                        POP EBP
00647BC2  C2 04 00                  RET 0x4
