FUN_006300e0:
006300E0  56                        PUSH ESI
006300E1  33 C0                     XOR EAX,EAX
006300E3  8D 91 E5 01 00 00         LEA EDX,[ECX + 0x1e5]
006300E9  BE 05 00 00 00            MOV ESI,0x5
LAB_006300ee:
006300EE  8B 0A                     MOV ECX,dword ptr [EDX]
006300F0  85 C9                     TEST ECX,ECX
006300F2  74 02                     JZ 0x006300f6
006300F4  03 01                     ADD EAX,dword ptr [ECX]
LAB_006300f6:
006300F6  83 C2 04                  ADD EDX,0x4
006300F9  4E                        DEC ESI
006300FA  75 F2                     JNZ 0x006300ee
006300FC  5E                        POP ESI
006300FD  C3                        RET
