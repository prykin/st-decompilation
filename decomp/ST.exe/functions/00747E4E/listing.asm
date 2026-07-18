FUN_00747e4e:
00747E4E  56                        PUSH ESI
00747E4F  8B F1                     MOV ESI,ECX
00747E51  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00747E54  8B 01                     MOV EAX,dword ptr [ECX]
00747E56  FF 50 14                  CALL dword ptr [EAX + 0x14]
00747E59  33 C9                     XOR ECX,ECX
00747E5B  3B 46 10                  CMP EAX,dword ptr [ESI + 0x10]
00747E5E  5E                        POP ESI
00747E5F  0F 95 C1                  SETNZ CL
00747E62  8B C1                     MOV EAX,ECX
00747E64  C3                        RET
