FUN_006f0c00:
006F0C00  55                        PUSH EBP
006F0C01  8B EC                     MOV EBP,ESP
006F0C03  83 EC 44                  SUB ESP,0x44
006F0C06  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006F0C0B  53                        PUSH EBX
006F0C0C  56                        PUSH ESI
006F0C0D  57                        PUSH EDI
006F0C0E  8D 55 C0                  LEA EDX,[EBP + -0x40]
006F0C11  8D 4D BC                  LEA ECX,[EBP + -0x44]
006F0C14  6A 00                     PUSH 0x0
006F0C16  52                        PUSH EDX
006F0C17  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
006F0C1A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006F0C20  E8 CB CB 03 00            CALL 0x0072d7f0
006F0C25  8B F0                     MOV ESI,EAX
006F0C27  83 C4 08                  ADD ESP,0x8
006F0C2A  85 F6                     TEST ESI,ESI
006F0C2C  75 54                     JNZ 0x006f0c82
006F0C2E  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006F0C31  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006F0C34  85 DB                     TEST EBX,EBX
006F0C36  74 04                     JZ 0x006f0c3c
006F0C38  85 FF                     TEST EDI,EDI
006F0C3A  75 17                     JNZ 0x006f0c53
LAB_006f0c3c:
006F0C3C  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006F0C41  68 9D 02 00 00            PUSH 0x29d
006F0C46  68 88 EF 7E 00            PUSH 0x7eef88
006F0C4B  50                        PUSH EAX
006F0C4C  6A CC                     PUSH -0x34
006F0C4E  E8 ED 51 FB FF            CALL 0x006a5e40
LAB_006f0c53:
006F0C53  33 F6                     XOR ESI,ESI
LAB_006f0c55:
006F0C55  8B 4F 04                  MOV ECX,dword ptr [EDI + 0x4]
006F0C58  8B 17                     MOV EDX,dword ptr [EDI]
006F0C5A  56                        PUSH ESI
006F0C5B  51                        PUSH ECX
006F0C5C  52                        PUSH EDX
006F0C5D  6A 00                     PUSH 0x0
006F0C5F  6A 00                     PUSH 0x0
006F0C61  57                        PUSH EDI
006F0C62  53                        PUSH EBX
006F0C63  E8 E8 FD FF FF            CALL 0x006f0a50
006F0C68  83 C4 1C                  ADD ESP,0x1c
006F0C6B  46                        INC ESI
006F0C6C  83 FE 06                  CMP ESI,0x6
006F0C6F  7C E4                     JL 0x006f0c55
006F0C71  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
006F0C74  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006F0C79  33 C0                     XOR EAX,EAX
006F0C7B  5F                        POP EDI
006F0C7C  5E                        POP ESI
006F0C7D  5B                        POP EBX
006F0C7E  8B E5                     MOV ESP,EBP
006F0C80  5D                        POP EBP
006F0C81  C3                        RET
LAB_006f0c82:
006F0C82  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
006F0C85  68 74 F0 7E 00            PUSH 0x7ef074
006F0C8A  68 CC 4C 7A 00            PUSH 0x7a4ccc
006F0C8F  56                        PUSH ESI
006F0C90  6A 00                     PUSH 0x0
006F0C92  68 A1 02 00 00            PUSH 0x2a1
006F0C97  68 88 EF 7E 00            PUSH 0x7eef88
006F0C9C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006F0CA2  E8 29 C8 FB FF            CALL 0x006ad4d0
006F0CA7  83 C4 18                  ADD ESP,0x18
006F0CAA  85 C0                     TEST EAX,EAX
006F0CAC  74 01                     JZ 0x006f0caf
006F0CAE  CC                        INT3
LAB_006f0caf:
006F0CAF  68 A3 02 00 00            PUSH 0x2a3
006F0CB4  68 88 EF 7E 00            PUSH 0x7eef88
006F0CB9  6A 00                     PUSH 0x0
006F0CBB  56                        PUSH ESI
006F0CBC  E8 7F 51 FB FF            CALL 0x006a5e40
006F0CC1  8B C6                     MOV EAX,ESI
006F0CC3  5F                        POP EDI
006F0CC4  5E                        POP ESI
006F0CC5  5B                        POP EBX
006F0CC6  8B E5                     MOV ESP,EBP
006F0CC8  5D                        POP EBP
006F0CC9  C3                        RET
