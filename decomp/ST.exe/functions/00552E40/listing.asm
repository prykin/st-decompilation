FUN_00552e40:
00552E40  55                        PUSH EBP
00552E41  8B EC                     MOV EBP,ESP
00552E43  83 EC 48                  SUB ESP,0x48
00552E46  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00552E4B  56                        PUSH ESI
00552E4C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00552E4F  57                        PUSH EDI
00552E50  8D 55 BC                  LEA EDX,[EBP + -0x44]
00552E53  8D 4D B8                  LEA ECX,[EBP + -0x48]
00552E56  6A 00                     PUSH 0x0
00552E58  52                        PUSH EDX
00552E59  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00552E5C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00552E62  E8 89 A9 1D 00            CALL 0x0072d7f0
00552E67  8B F0                     MOV ESI,EAX
00552E69  83 C4 08                  ADD ESP,0x8
00552E6C  85 F6                     TEST ESI,ESI
00552E6E  75 4B                     JNZ 0x00552ebb
00552E70  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00552E73  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00552E76  56                        PUSH ESI
00552E77  8B CF                     MOV ECX,EDI
00552E79  E8 83 E5 EA FF            CALL 0x00401401
00552E7E  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
00552E81  83 E8 02                  SUB EAX,0x2
00552E84  74 1C                     JZ 0x00552ea2
00552E86  48                        DEC EAX
00552E87  75 20                     JNZ 0x00552ea9
00552E89  8B CF                     MOV ECX,EDI
00552E8B  E8 24 EC EA FF            CALL 0x00401ab4
00552E90  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00552E93  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00552E98  33 C0                     XOR EAX,EAX
00552E9A  5F                        POP EDI
00552E9B  5E                        POP ESI
00552E9C  8B E5                     MOV ESP,EBP
00552E9E  5D                        POP EBP
00552E9F  C2 04 00                  RET 0x4
LAB_00552ea2:
00552EA2  8B CF                     MOV ECX,EDI
00552EA4  E8 77 EE EA FF            CALL 0x00401d20
LAB_00552ea9:
00552EA9  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00552EAC  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00552EB1  33 C0                     XOR EAX,EAX
00552EB3  5F                        POP EDI
00552EB4  5E                        POP ESI
00552EB5  8B E5                     MOV ESP,EBP
00552EB7  5D                        POP EBP
00552EB8  C2 04 00                  RET 0x4
LAB_00552ebb:
00552EBB  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00552EBE  68 68 88 7C 00            PUSH 0x7c8868
00552EC3  68 CC 4C 7A 00            PUSH 0x7a4ccc
00552EC8  56                        PUSH ESI
00552EC9  6A 00                     PUSH 0x0
00552ECB  6A 68                     PUSH 0x68
00552ECD  68 B8 87 7C 00            PUSH 0x7c87b8
00552ED2  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00552ED8  E8 F3 A5 15 00            CALL 0x006ad4d0
00552EDD  83 C4 18                  ADD ESP,0x18
00552EE0  85 C0                     TEST EAX,EAX
00552EE2  74 01                     JZ 0x00552ee5
00552EE4  CC                        INT3
LAB_00552ee5:
00552EE5  6A 68                     PUSH 0x68
00552EE7  68 B8 87 7C 00            PUSH 0x7c87b8
00552EEC  6A 00                     PUSH 0x0
00552EEE  56                        PUSH ESI
00552EEF  E8 4C 2F 15 00            CALL 0x006a5e40
00552EF4  5F                        POP EDI
00552EF5  B8 FF FF 00 00            MOV EAX,0xffff
00552EFA  5E                        POP ESI
00552EFB  8B E5                     MOV ESP,EBP
00552EFD  5D                        POP EBP
00552EFE  C2 04 00                  RET 0x4
