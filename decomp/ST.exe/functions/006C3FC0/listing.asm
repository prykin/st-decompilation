FUN_006c3fc0:
006C3FC0  55                        PUSH EBP
006C3FC1  8B EC                     MOV EBP,ESP
006C3FC3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C3FC6  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006C3FC9  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006C3FCC  89 48 18                  MOV dword ptr [EAX + 0x18],ECX
006C3FCF  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
006C3FD2  F6 C1 02                  TEST CL,0x2
006C3FD5  89 50 1C                  MOV dword ptr [EAX + 0x1c],EDX
006C3FD8  75 0C                     JNZ 0x006c3fe6
006C3FDA  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006C3FDD  89 50 20                  MOV dword ptr [EAX + 0x20],EDX
006C3FE0  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006C3FE3  89 50 24                  MOV dword ptr [EAX + 0x24],EDX
LAB_006c3fe6:
006C3FE6  81 C9 00 00 00 04         OR ECX,0x4000000
006C3FEC  50                        PUSH EAX
006C3FED  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
006C3FF0  E8 8B FD FF FF            CALL 0x006c3d80
006C3FF5  5D                        POP EBP
006C3FF6  C2 14 00                  RET 0x14
