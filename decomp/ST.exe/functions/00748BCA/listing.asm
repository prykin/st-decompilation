FUN_00748bca:
00748BCA  55                        PUSH EBP
00748BCB  8B EC                     MOV EBP,ESP
00748BCD  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00748BD0  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00748BD3  F6 C5 01                  TEST CH,0x1
00748BD6  75 35                     JNZ 0x00748c0d
00748BD8  F6 C1 10                  TEST CL,0x10
00748BDB  75 07                     JNZ 0x00748be4
00748BDD  B8 49 02 04 80            MOV EAX,0x80040249
00748BE2  EB 47                     JMP 0x00748c2b
LAB_00748be4:
00748BE4  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00748BE7  8B 50 20                  MOV EDX,dword ptr [EAX + 0x20]
00748BEA  89 11                     MOV dword ptr [ECX],EDX
00748BEC  8B 50 24                  MOV EDX,dword ptr [EAX + 0x24]
00748BEF  89 51 04                  MOV dword ptr [ECX + 0x4],EDX
00748BF2  8B 48 20                  MOV ECX,dword ptr [EAX + 0x20]
00748BF5  8B 50 24                  MOV EDX,dword ptr [EAX + 0x24]
00748BF8  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00748BFB  83 C1 01                  ADD ECX,0x1
00748BFE  83 D2 00                  ADC EDX,0x0
00748C01  89 08                     MOV dword ptr [EAX],ECX
00748C03  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
00748C06  B8 70 02 04 00            MOV EAX,0x40270
00748C0B  EB 1E                     JMP 0x00748c2b
LAB_00748c0d:
00748C0D  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00748C10  8B 50 20                  MOV EDX,dword ptr [EAX + 0x20]
00748C13  89 11                     MOV dword ptr [ECX],EDX
00748C15  8B 50 24                  MOV EDX,dword ptr [EAX + 0x24]
00748C18  89 51 04                  MOV dword ptr [ECX + 0x4],EDX
00748C1B  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00748C1E  8B 50 28                  MOV EDX,dword ptr [EAX + 0x28]
00748C21  89 11                     MOV dword ptr [ECX],EDX
00748C23  8B 40 2C                  MOV EAX,dword ptr [EAX + 0x2c]
00748C26  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
00748C29  33 C0                     XOR EAX,EAX
LAB_00748c2b:
00748C2B  5D                        POP EBP
00748C2C  C2 0C 00                  RET 0xc
