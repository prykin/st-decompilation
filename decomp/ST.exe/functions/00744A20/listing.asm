___shr_12:
00744A20  55                        PUSH EBP
00744A21  8B EC                     MOV EBP,ESP
00744A23  83 EC 08                  SUB ESP,0x8
00744A26  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00744A29  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00744A2C  83 E1 01                  AND ECX,0x1
00744A2F  F7 D9                     NEG ECX
00744A31  1B C9                     SBB ECX,ECX
00744A33  81 E1 00 00 00 80         AND ECX,0x80000000
00744A39  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00744A3C  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00744A3F  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
00744A42  83 E0 01                  AND EAX,0x1
00744A45  F7 D8                     NEG EAX
00744A47  1B C0                     SBB EAX,EAX
00744A49  25 00 00 00 80            AND EAX,0x80000000
00744A4E  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00744A51  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00744A54  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
00744A57  D1 EA                     SHR EDX,0x1
00744A59  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00744A5C  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
00744A5F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00744A62  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
00744A65  D1 EA                     SHR EDX,0x1
00744A67  0B 55 F8                  OR EDX,dword ptr [EBP + -0x8]
00744A6A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00744A6D  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
00744A70  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00744A73  8B 11                     MOV EDX,dword ptr [ECX]
00744A75  D1 EA                     SHR EDX,0x1
00744A77  0B 55 FC                  OR EDX,dword ptr [EBP + -0x4]
00744A7A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00744A7D  89 10                     MOV dword ptr [EAX],EDX
00744A7F  8B E5                     MOV ESP,EBP
00744A81  5D                        POP EBP
00744A82  C3                        RET
