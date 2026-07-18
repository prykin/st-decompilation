FUN_006b0f80:
006B0F80  55                        PUSH EBP
006B0F81  8B EC                     MOV EBP,ESP
006B0F83  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B0F86  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006B0F89  56                        PUSH ESI
006B0F8A  8B 10                     MOV EDX,dword ptr [EAX]
006B0F8C  8B 31                     MOV ESI,dword ptr [ECX]
006B0F8E  23 F2                     AND ESI,EDX
006B0F90  3B F2                     CMP ESI,EDX
006B0F92  75 2C                     JNZ 0x006b0fc0
006B0F94  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
006B0F97  8B 71 04                  MOV ESI,dword ptr [ECX + 0x4]
006B0F9A  23 F2                     AND ESI,EDX
006B0F9C  3B F2                     CMP ESI,EDX
006B0F9E  75 20                     JNZ 0x006b0fc0
006B0FA0  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
006B0FA3  8B 71 08                  MOV ESI,dword ptr [ECX + 0x8]
006B0FA6  23 F2                     AND ESI,EDX
006B0FA8  3B F2                     CMP ESI,EDX
006B0FAA  75 14                     JNZ 0x006b0fc0
006B0FAC  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
006B0FAF  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
006B0FB2  23 C8                     AND ECX,EAX
006B0FB4  3B C8                     CMP ECX,EAX
006B0FB6  75 08                     JNZ 0x006b0fc0
006B0FB8  B8 01 00 00 00            MOV EAX,0x1
006B0FBD  5E                        POP ESI
006B0FBE  5D                        POP EBP
006B0FBF  C3                        RET
LAB_006b0fc0:
006B0FC0  33 C0                     XOR EAX,EAX
006B0FC2  5E                        POP ESI
006B0FC3  5D                        POP EBP
006B0FC4  C3                        RET
