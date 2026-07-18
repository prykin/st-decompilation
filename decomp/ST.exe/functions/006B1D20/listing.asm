FUN_006b1d20:
006B1D20  55                        PUSH EBP
006B1D21  8B EC                     MOV EBP,ESP
006B1D23  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B1D26  85 C0                     TEST EAX,EAX
006B1D28  7D 05                     JGE 0x006b1d2f
006B1D2A  B8 0A 00 00 00            MOV EAX,0xa
LAB_006b1d2f:
006B1D2F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006B1D32  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006B1D35  56                        PUSH ESI
006B1D36  8B B4 C1 1C 01 00 00      MOV ESI,dword ptr [ECX + EAX*0x8 + 0x11c]
006B1D3D  89 32                     MOV dword ptr [EDX],ESI
006B1D3F  8B 84 C1 20 01 00 00      MOV EAX,dword ptr [ECX + EAX*0x8 + 0x120]
006B1D46  89 42 04                  MOV dword ptr [EDX + 0x4],EAX
006B1D49  5E                        POP ESI
006B1D4A  5D                        POP EBP
006B1D4B  C2 0C 00                  RET 0xc
