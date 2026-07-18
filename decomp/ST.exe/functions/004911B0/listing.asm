FUN_004911b0:
004911B0  55                        PUSH EBP
004911B1  8B EC                     MOV EBP,ESP
004911B3  8B 91 5D 04 00 00         MOV EDX,dword ptr [ECX + 0x45d]
004911B9  33 C0                     XOR EAX,EAX
004911BB  83 FA 14                  CMP EDX,0x14
004911BE  75 21                     JNZ 0x004911e1
004911C0  83 B9 C0 05 00 00 02      CMP dword ptr [ECX + 0x5c0],0x2
004911C7  74 18                     JZ 0x004911e1
004911C9  8B 91 A2 05 00 00         MOV EDX,dword ptr [ECX + 0x5a2]
004911CF  85 D2                     TEST EDX,EDX
004911D1  75 0E                     JNZ 0x004911e1
004911D3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004911D6  89 81 A2 05 00 00         MOV dword ptr [ECX + 0x5a2],EAX
004911DC  B8 01 00 00 00            MOV EAX,0x1
LAB_004911e1:
004911E1  5D                        POP EBP
004911E2  C2 04 00                  RET 0x4
