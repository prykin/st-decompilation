FUN_006c7c50:
006C7C50  55                        PUSH EBP
006C7C51  8B EC                     MOV EBP,ESP
006C7C53  56                        PUSH ESI
006C7C54  57                        PUSH EDI
006C7C55  6A 3E                     PUSH 0x3e
006C7C57  E8 B4 2F FE FF            CALL 0x006aac10
006C7C5C  8B F0                     MOV ESI,EAX
006C7C5E  85 F6                     TEST ESI,ESI
006C7C60  75 06                     JNZ 0x006c7c68
006C7C62  5F                        POP EDI
006C7C63  5E                        POP ESI
006C7C64  5D                        POP EBP
006C7C65  C2 08 00                  RET 0x8
LAB_006c7c68:
006C7C68  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006C7C6B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C7C6E  51                        PUSH ECX
006C7C6F  56                        PUSH ESI
006C7C70  89 46 2A                  MOV dword ptr [ESI + 0x2a],EAX
006C7C73  C7 46 36 B0 7C 6C 00      MOV dword ptr [ESI + 0x36],0x6c7cb0
006C7C7A  E8 81 FA FF FF            CALL 0x006c7700
006C7C7F  8B F8                     MOV EDI,EAX
006C7C81  85 FF                     TEST EDI,EDI
006C7C83  74 22                     JZ 0x006c7ca7
006C7C85  56                        PUSH ESI
006C7C86  E8 F5 FC FF FF            CALL 0x006c7980
006C7C8B  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006C7C91  6A 37                     PUSH 0x37
006C7C93  68 48 E0 7E 00            PUSH 0x7ee048
006C7C98  52                        PUSH EDX
006C7C99  57                        PUSH EDI
006C7C9A  E8 A1 E1 FD FF            CALL 0x006a5e40
006C7C9F  5F                        POP EDI
006C7CA0  33 C0                     XOR EAX,EAX
006C7CA2  5E                        POP ESI
006C7CA3  5D                        POP EBP
006C7CA4  C2 08 00                  RET 0x8
LAB_006c7ca7:
006C7CA7  8B C6                     MOV EAX,ESI
006C7CA9  5F                        POP EDI
006C7CAA  5E                        POP ESI
006C7CAB  5D                        POP EBP
006C7CAC  C2 08 00                  RET 0x8
