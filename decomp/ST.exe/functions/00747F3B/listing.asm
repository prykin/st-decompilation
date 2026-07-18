FUN_00747f3b:
00747F3B  56                        PUSH ESI
00747F3C  8B F1                     MOV ESI,ECX
00747F3E  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
00747F41  8B 01                     MOV EAX,dword ptr [ECX]
00747F43  FF 50 10                  CALL dword ptr [EAX + 0x10]
00747F46  33 C9                     XOR ECX,ECX
00747F48  3B 46 0C                  CMP EAX,dword ptr [ESI + 0xc]
00747F4B  5E                        POP ESI
00747F4C  0F 95 C1                  SETNZ CL
00747F4F  8B C1                     MOV EAX,ECX
00747F51  C3                        RET
