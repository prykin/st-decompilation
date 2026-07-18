FUN_004d8f80:
004D8F80  8B 81 EC 04 00 00         MOV EAX,dword ptr [ECX + 0x4ec]
004D8F86  83 F8 64                  CMP EAX,0x64
004D8F89  7D 4B                     JGE 0x004d8fd6
004D8F8B  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004D8F91  56                        PUSH ESI
004D8F92  8B B1 D8 04 00 00         MOV ESI,dword ptr [ECX + 0x4d8]
004D8F98  8B 92 E4 00 00 00         MOV EDX,dword ptr [EDX + 0xe4]
004D8F9E  83 C6 4B                  ADD ESI,0x4b
004D8FA1  3B D6                     CMP EDX,ESI
004D8FA3  5E                        POP ESI
004D8FA4  72 30                     JC 0x004d8fd6
004D8FA6  40                        INC EAX
004D8FA7  89 91 D8 04 00 00         MOV dword ptr [ECX + 0x4d8],EDX
004D8FAD  83 F8 64                  CMP EAX,0x64
004D8FB0  89 81 EC 04 00 00         MOV dword ptr [ECX + 0x4ec],EAX
004D8FB6  7C 1E                     JL 0x004d8fd6
004D8FB8  8B 81 F0 04 00 00         MOV EAX,dword ptr [ECX + 0x4f0]
004D8FBE  C7 81 EC 04 00 00 64 00 00 00  MOV dword ptr [ECX + 0x4ec],0x64
004D8FC8  85 C0                     TEST EAX,EAX
004D8FCA  74 0A                     JZ 0x004d8fd6
004D8FCC  C7 81 61 02 00 00 01 00 00 00  MOV dword ptr [ECX + 0x261],0x1
LAB_004d8fd6:
004D8FD6  33 C0                     XOR EAX,EAX
004D8FD8  C3                        RET
