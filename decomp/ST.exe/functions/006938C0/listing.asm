FUN_006938c0:
006938C0  55                        PUSH EBP
006938C1  8B EC                     MOV EBP,ESP
006938C3  8B 15 84 3D 85 00         MOV EDX,dword ptr [0x00853d84]
006938C9  33 C0                     XOR EAX,EAX
006938CB  56                        PUSH ESI
006938CC  85 D2                     TEST EDX,EDX
006938CE  76 1E                     JBE 0x006938ee
006938D0  8B 0D 80 3D 85 00         MOV ECX,dword ptr [0x00853d80]
006938D6  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006938D9  81 C1 08 02 00 00         ADD ECX,0x208
LAB_006938df:
006938DF  39 31                     CMP dword ptr [ECX],ESI
006938E1  74 0E                     JZ 0x006938f1
006938E3  40                        INC EAX
006938E4  81 C1 18 02 00 00         ADD ECX,0x218
006938EA  3B C2                     CMP EAX,EDX
006938EC  72 F1                     JC 0x006938df
LAB_006938ee:
006938EE  83 C8 FF                  OR EAX,0xffffffff
LAB_006938f1:
006938F1  5E                        POP ESI
006938F2  5D                        POP EBP
006938F3  C3                        RET
