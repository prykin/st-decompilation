FUN_007209d0:
007209D0  55                        PUSH EBP
007209D1  8B EC                     MOV EBP,ESP
007209D3  8B 41 1C                  MOV EAX,dword ptr [ECX + 0x1c]
007209D6  A9 00 00 00 F0            TEST EAX,0xf0000000
007209DB  75 63                     JNZ 0x00720a40
007209DD  8B 91 38 01 00 00         MOV EDX,dword ptr [ECX + 0x138]
007209E3  85 D2                     TEST EDX,EDX
007209E5  74 59                     JZ 0x00720a40
007209E7  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007209EA  83 F8 01                  CMP EAX,0x1
007209ED  89 91 60 01 00 00         MOV dword ptr [ECX + 0x160],EDX
007209F3  75 24                     JNZ 0x00720a19
007209F5  F6 41 20 04               TEST byte ptr [ECX + 0x20],0x4
007209F9  75 1E                     JNZ 0x00720a19
007209FB  66 8B 81 04 02 00 00      MOV AX,word ptr [ECX + 0x204]
00720A02  66 8B 91 08 02 00 00      MOV DX,word ptr [ECX + 0x208]
00720A09  66 89 81 64 01 00 00      MOV word ptr [ECX + 0x164],AX
00720A10  66 89 91 66 01 00 00      MOV word ptr [ECX + 0x166],DX
00720A17  EB 13                     JMP 0x00720a2c
LAB_00720a19:
00720A19  B8 FF FF 00 00            MOV EAX,0xffff
00720A1E  66 89 81 66 01 00 00      MOV word ptr [ECX + 0x166],AX
00720A25  66 89 81 64 01 00 00      MOV word ptr [ECX + 0x164],AX
LAB_00720a2c:
00720A2C  8D 81 4C 01 00 00         LEA EAX,[ECX + 0x14c]
00720A32  50                        PUSH EAX
00720A33  E8 A8 55 FC FF            CALL 0x006e5fe0
00720A38  F7 D8                     NEG EAX
00720A3A  1B C0                     SBB EAX,EAX
00720A3C  5D                        POP EBP
00720A3D  C2 04 00                  RET 0x4
LAB_00720a40:
00720A40  33 C0                     XOR EAX,EAX
00720A42  5D                        POP EBP
00720A43  C2 04 00                  RET 0x4
