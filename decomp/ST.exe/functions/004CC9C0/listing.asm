FUN_004cc9c0:
004CC9C0  55                        PUSH EBP
004CC9C1  8B EC                     MOV EBP,ESP
004CC9C3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004CC9C6  8B 51 24                  MOV EDX,dword ptr [ECX + 0x24]
004CC9C9  3B C2                     CMP EAX,EDX
004CC9CB  74 18                     JZ 0x004cc9e5
004CC9CD  8B 81 45 02 00 00         MOV EAX,dword ptr [ECX + 0x245]
004CC9D3  85 C0                     TEST EAX,EAX
004CC9D5  74 05                     JZ 0x004cc9dc
004CC9D7  83 F8 05                  CMP EAX,0x5
004CC9DA  75 09                     JNZ 0x004cc9e5
LAB_004cc9dc:
004CC9DC  B8 01 00 00 00            MOV EAX,0x1
004CC9E1  5D                        POP EBP
004CC9E2  C2 04 00                  RET 0x4
LAB_004cc9e5:
004CC9E5  33 C0                     XOR EAX,EAX
004CC9E7  5D                        POP EBP
004CC9E8  C2 04 00                  RET 0x4
