FUN_004e4b10:
004E4B10  8B 81 45 02 00 00         MOV EAX,dword ptr [ECX + 0x245]
004E4B16  85 C0                     TEST EAX,EAX
004E4B18  75 32                     JNZ 0x004e4b4c
004E4B1A  8B 91 D4 04 00 00         MOV EDX,dword ptr [ECX + 0x4d4]
004E4B20  83 FA 28                  CMP EDX,0x28
004E4B23  7D 27                     JGE 0x004e4b4c
004E4B25  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004E4B2A  56                        PUSH ESI
004E4B2B  8B B1 D8 04 00 00         MOV ESI,dword ptr [ECX + 0x4d8]
004E4B31  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
004E4B37  83 C6 1C                  ADD ESI,0x1c
004E4B3A  3B C6                     CMP EAX,ESI
004E4B3C  5E                        POP ESI
004E4B3D  72 0D                     JC 0x004e4b4c
004E4B3F  42                        INC EDX
004E4B40  89 81 D8 04 00 00         MOV dword ptr [ECX + 0x4d8],EAX
004E4B46  89 91 D4 04 00 00         MOV dword ptr [ECX + 0x4d4],EDX
LAB_004e4b4c:
004E4B4C  33 C0                     XOR EAX,EAX
004E4B4E  C3                        RET
