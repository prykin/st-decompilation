FUN_006b1cc0:
006B1CC0  55                        PUSH EBP
006B1CC1  8B EC                     MOV EBP,ESP
006B1CC3  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006B1CC6  85 C9                     TEST ECX,ECX
006B1CC8  7D 05                     JGE 0x006b1ccf
006B1CCA  B9 0A 00 00 00            MOV ECX,0xa
LAB_006b1ccf:
006B1CCF  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B1CD2  53                        PUSH EBX
006B1CD3  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006B1CD6  56                        PUSH ESI
006B1CD7  C7 80 B4 01 00 00 01 00 00 00  MOV dword ptr [EAX + 0x1b4],0x1
006B1CE1  8B 94 C8 1C 01 00 00      MOV EDX,dword ptr [EAX + ECX*0x8 + 0x11c]
006B1CE8  8B B4 C8 20 01 00 00      MOV ESI,dword ptr [EAX + ECX*0x8 + 0x120]
006B1CEF  89 9C C8 1C 01 00 00      MOV dword ptr [EAX + ECX*0x8 + 0x11c],EBX
006B1CF6  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
006B1CF9  89 9C C8 20 01 00 00      MOV dword ptr [EAX + ECX*0x8 + 0x120],EBX
006B1D00  C7 84 88 74 01 00 00 01 00 00 00  MOV dword ptr [EAX + ECX*0x4 + 0x174],0x1
006B1D0B  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006B1D0E  85 C0                     TEST EAX,EAX
006B1D10  74 05                     JZ 0x006b1d17
006B1D12  89 10                     MOV dword ptr [EAX],EDX
006B1D14  89 70 04                  MOV dword ptr [EAX + 0x4],ESI
LAB_006b1d17:
006B1D17  5E                        POP ESI
006B1D18  5B                        POP EBX
006B1D19  5D                        POP EBP
006B1D1A  C2 14 00                  RET 0x14
