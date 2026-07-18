___shl_12:
007449C0  55                        PUSH EBP
007449C1  8B EC                     MOV EBP,ESP
007449C3  83 EC 08                  SUB ESP,0x8
007449C6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007449C9  8B 08                     MOV ECX,dword ptr [EAX]
007449CB  81 E1 00 00 00 80         AND ECX,0x80000000
007449D1  F7 D9                     NEG ECX
007449D3  1B C9                     SBB ECX,ECX
007449D5  F7 D9                     NEG ECX
007449D7  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
007449DA  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007449DD  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
007449E0  25 00 00 00 80            AND EAX,0x80000000
007449E5  F7 D8                     NEG EAX
007449E7  1B C0                     SBB EAX,EAX
007449E9  F7 D8                     NEG EAX
007449EB  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
007449EE  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007449F1  8B 11                     MOV EDX,dword ptr [ECX]
007449F3  D1 E2                     SHL EDX,0x1
007449F5  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007449F8  89 10                     MOV dword ptr [EAX],EDX
007449FA  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007449FD  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
00744A00  D1 E2                     SHL EDX,0x1
00744A02  0B 55 FC                  OR EDX,dword ptr [EBP + -0x4]
00744A05  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00744A08  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
00744A0B  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00744A0E  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
00744A11  D1 E2                     SHL EDX,0x1
00744A13  0B 55 F8                  OR EDX,dword ptr [EBP + -0x8]
00744A16  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00744A19  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
00744A1C  8B E5                     MOV ESP,EBP
00744A1E  5D                        POP EBP
00744A1F  C3                        RET
