GetAssistantNameDB:
0067E580  55                        PUSH EBP
0067E581  8B EC                     MOV EBP,ESP
0067E583  83 EC 44                  SUB ESP,0x44
0067E586  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0067E58B  53                        PUSH EBX
0067E58C  56                        PUSH ESI
0067E58D  57                        PUSH EDI
0067E58E  8D 55 C0                  LEA EDX,[EBP + -0x40]
0067E591  8D 4D BC                  LEA ECX,[EBP + -0x44]
0067E594  6A 00                     PUSH 0x0
0067E596  52                        PUSH EDX
0067E597  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
0067E59A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0067E5A0  E8 4B F2 0A 00            CALL 0x0072d7f0
0067E5A5  8B F0                     MOV ESI,EAX
0067E5A7  83 C4 08                  ADD ESP,0x8
0067E5AA  85 F6                     TEST ESI,ESI
0067E5AC  75 6E                     JNZ 0x0067e61c
0067E5AE  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0067E5B1  85 C0                     TEST EAX,EAX
0067E5B3  75 17                     JNZ 0x0067e5cc
0067E5B5  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0067E5BA  68 E8 01 00 00            PUSH 0x1e8
0067E5BF  68 A4 2F 7D 00            PUSH 0x7d2fa4
0067E5C4  50                        PUSH EAX
0067E5C5  6A CC                     PUSH -0x34
0067E5C7  E8 74 78 02 00            CALL 0x006a5e40
LAB_0067e5cc:
0067E5CC  8B 1D 24 D7 79 00         MOV EBX,dword ptr [0x0079d724]
0067E5D2  33 FF                     XOR EDI,EDI
LAB_0067e5d4:
0067E5D4  57                        PUSH EDI
0067E5D5  6A 03                     PUSH 0x3
0067E5D7  53                        PUSH EBX
0067E5D8  E8 23 46 07 00            CALL 0x006f2c00
0067E5DD  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0067E5E0  83 C4 0C                  ADD ESP,0xc
0067E5E3  8B F0                     MOV ESI,EAX
0067E5E5  56                        PUSH ESI
0067E5E6  6A 0C                     PUSH 0xc
0067E5E8  E8 D3 3B 07 00            CALL 0x006f21c0
0067E5ED  85 C0                     TEST EAX,EAX
0067E5EF  75 19                     JNZ 0x0067e60a
0067E5F1  47                        INC EDI
0067E5F2  81 FF F0 FF FF 7F         CMP EDI,0x7ffffff0
0067E5F8  7C DA                     JL 0x0067e5d4
0067E5FA  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
0067E5FD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0067E603  5F                        POP EDI
0067E604  5E                        POP ESI
0067E605  5B                        POP EBX
0067E606  8B E5                     MOV ESP,EBP
0067E608  5D                        POP EBP
0067E609  C3                        RET
LAB_0067e60a:
0067E60A  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
0067E60D  8B C6                     MOV EAX,ESI
0067E60F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0067E615  5F                        POP EDI
0067E616  5E                        POP ESI
0067E617  5B                        POP EBX
0067E618  8B E5                     MOV ESP,EBP
0067E61A  5D                        POP EBP
0067E61B  C3                        RET
LAB_0067e61c:
0067E61C  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
0067E61F  68 B0 30 7D 00            PUSH 0x7d30b0
0067E624  68 CC 4C 7A 00            PUSH 0x7a4ccc
0067E629  56                        PUSH ESI
0067E62A  6A 00                     PUSH 0x0
0067E62C  68 EB 01 00 00            PUSH 0x1eb
0067E631  68 A4 2F 7D 00            PUSH 0x7d2fa4
0067E636  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0067E63C  E8 8F EE 02 00            CALL 0x006ad4d0
0067E641  83 C4 18                  ADD ESP,0x18
0067E644  85 C0                     TEST EAX,EAX
0067E646  74 01                     JZ 0x0067e649
0067E648  CC                        INT3
LAB_0067e649:
0067E649  68 EC 01 00 00            PUSH 0x1ec
0067E64E  68 A4 2F 7D 00            PUSH 0x7d2fa4
0067E653  6A 00                     PUSH 0x0
0067E655  56                        PUSH ESI
0067E656  E8 E5 77 02 00            CALL 0x006a5e40
0067E65B  5F                        POP EDI
0067E65C  5E                        POP ESI
0067E65D  33 C0                     XOR EAX,EAX
0067E65F  5B                        POP EBX
0067E660  8B E5                     MOV ESP,EBP
0067E662  5D                        POP EBP
0067E663  C3                        RET
