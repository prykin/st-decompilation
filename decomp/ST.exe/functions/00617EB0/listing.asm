FUN_00617eb0:
00617EB0  8B 49 5E                  MOV ECX,dword ptr [ECX + 0x5e]
00617EB3  33 C0                     XOR EAX,EAX
00617EB5  85 C9                     TEST ECX,ECX
00617EB7  74 03                     JZ 0x00617ebc
00617EB9  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
LAB_00617ebc:
00617EBC  C3                        RET
