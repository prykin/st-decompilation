FUN_007489a5:
007489A5  8B 81 9C 00 00 00         MOV EAX,dword ptr [ECX + 0x9c]
007489AB  83 61 6C 00               AND dword ptr [ECX + 0x6c],0x0
007489AF  85 C0                     TEST EAX,EAX
007489B1  75 06                     JNZ 0x007489b9
007489B3  B8 0A 02 04 80            MOV EAX,0x8004020a
007489B8  C3                        RET
LAB_007489b9:
007489B9  80 A1 A1 00 00 00 00      AND byte ptr [ECX + 0xa1],0x0
007489C0  8B 08                     MOV ECX,dword ptr [EAX]
007489C2  50                        PUSH EAX
007489C3  FF 51 18                  CALL dword ptr [ECX + 0x18]
007489C6  C3                        RET
