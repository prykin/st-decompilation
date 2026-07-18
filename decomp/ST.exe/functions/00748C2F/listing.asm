FUN_00748c2f:
00748C2F  55                        PUSH EBP
00748C30  8B EC                     MOV EBP,ESP
00748C32  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00748C35  56                        PUSH ESI
00748C36  85 C9                     TEST ECX,ECX
00748C38  75 0B                     JNZ 0x00748c45
00748C3A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00748C3D  66 81 60 04 EF FE         AND word ptr [EAX + 0x4],0xfeef
00748C43  EB 42                     JMP 0x00748c87
LAB_00748c45:
00748C45  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00748C48  85 D2                     TEST EDX,EDX
00748C4A  75 1C                     JNZ 0x00748c68
00748C4C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00748C4F  8B 11                     MOV EDX,dword ptr [ECX]
00748C51  89 50 20                  MOV dword ptr [EAX + 0x20],EDX
00748C54  8B 49 04                  MOV ECX,dword ptr [ECX + 0x4]
00748C57  89 48 24                  MOV dword ptr [EAX + 0x24],ECX
00748C5A  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00748C5D  80 E5 FE                  AND CH,0xfe
00748C60  83 C9 10                  OR ECX,0x10
00748C63  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
00748C66  EB 1F                     JMP 0x00748c87
LAB_00748c68:
00748C68  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00748C6B  8B 31                     MOV ESI,dword ptr [ECX]
00748C6D  89 70 20                  MOV dword ptr [EAX + 0x20],ESI
00748C70  8B 49 04                  MOV ECX,dword ptr [ECX + 0x4]
00748C73  89 48 24                  MOV dword ptr [EAX + 0x24],ECX
00748C76  8B 0A                     MOV ECX,dword ptr [EDX]
00748C78  89 48 28                  MOV dword ptr [EAX + 0x28],ECX
00748C7B  8B 4A 04                  MOV ECX,dword ptr [EDX + 0x4]
00748C7E  66 81 48 04 10 01         OR word ptr [EAX + 0x4],0x110
00748C84  89 48 2C                  MOV dword ptr [EAX + 0x2c],ECX
LAB_00748c87:
00748C87  33 C0                     XOR EAX,EAX
00748C89  5E                        POP ESI
00748C8A  5D                        POP EBP
00748C8B  C2 0C 00                  RET 0xc
