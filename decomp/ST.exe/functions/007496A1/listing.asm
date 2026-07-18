FUN_007496a1:
007496A1  56                        PUSH ESI
007496A2  8B F1                     MOV ESI,ECX
LAB_007496a4:
007496A4  8B 4E 28                  MOV ECX,dword ptr [ESI + 0x28]
007496A7  85 C9                     TEST ECX,ECX
007496A9  74 16                     JZ 0x007496c1
007496AB  8B 41 1C                  MOV EAX,dword ptr [ECX + 0x1c]
007496AE  FF 4E 2C                  DEC dword ptr [ESI + 0x2c]
007496B1  85 C9                     TEST ECX,ECX
007496B3  89 46 28                  MOV dword ptr [ESI + 0x28],EAX
007496B6  74 09                     JZ 0x007496c1
007496B8  8B 01                     MOV EAX,dword ptr [ECX]
007496BA  6A 01                     PUSH 0x1
007496BC  FF 50 54                  CALL dword ptr [EAX + 0x54]
007496BF  EB E3                     JMP 0x007496a4
LAB_007496c1:
007496C1  8B 46 58                  MOV EAX,dword ptr [ESI + 0x58]
007496C4  83 66 3C 00               AND dword ptr [ESI + 0x3c],0x0
007496C8  85 C0                     TEST EAX,EAX
007496CA  74 12                     JZ 0x007496de
007496CC  68 00 80 00 00            PUSH 0x8000
007496D1  6A 00                     PUSH 0x0
007496D3  50                        PUSH EAX
007496D4  FF 15 E0 BB 85 00         CALL dword ptr [0x0085bbe0]
007496DA  83 66 58 00               AND dword ptr [ESI + 0x58],0x0
LAB_007496de:
007496DE  5E                        POP ESI
007496DF  C3                        RET
