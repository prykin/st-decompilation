FUN_006c3f80:
006C3F80  55                        PUSH EBP
006C3F81  8B EC                     MOV EBP,ESP
006C3F83  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C3F86  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
006C3F89  F6 C1 02                  TEST CL,0x2
006C3F8C  75 27                     JNZ 0x006c3fb5
006C3F8E  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006C3F91  81 C9 00 00 00 08         OR ECX,0x8000000
006C3F97  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
006C3F9A  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006C3F9D  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
006C3FA0  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006C3FA3  89 50 10                  MOV dword ptr [EAX + 0x10],EDX
006C3FA6  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006C3FA9  50                        PUSH EAX
006C3FAA  89 50 14                  MOV dword ptr [EAX + 0x14],EDX
006C3FAD  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
006C3FB0  E8 CB FD FF FF            CALL 0x006c3d80
LAB_006c3fb5:
006C3FB5  5D                        POP EBP
006C3FB6  C2 14 00                  RET 0x14
