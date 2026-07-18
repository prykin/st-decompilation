FUN_00423b50:
00423B50  55                        PUSH EBP
00423B51  8B EC                     MOV EBP,ESP
00423B53  83 EC 50                  SUB ESP,0x50
00423B56  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00423B59  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
00423B5F  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00423B62  53                        PUSH EBX
00423B63  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00423B66  56                        PUSH ESI
00423B67  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00423B6A  57                        PUSH EDI
00423B6B  8D 4D B4                  LEA ECX,[EBP + -0x4c]
00423B6E  8D 45 B0                  LEA EAX,[EBP + -0x50]
00423B71  6A 00                     PUSH 0x0
00423B73  51                        PUSH ECX
00423B74  89 55 B0                  MOV dword ptr [EBP + -0x50],EDX
00423B77  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00423B7C  E8 6F 9C 30 00            CALL 0x0072d7f0
00423B81  8B F0                     MOV ESI,EAX
00423B83  83 C4 08                  ADD ESP,0x8
00423B86  85 F6                     TEST ESI,ESI
00423B88  75 56                     JNZ 0x00423be0
00423B8A  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
00423B8D  85 FF                     TEST EDI,EDI
00423B8F  75 09                     JNZ 0x00423b9a
00423B91  5F                        POP EDI
00423B92  5E                        POP ESI
00423B93  5B                        POP EBX
00423B94  8B E5                     MOV ESP,EBP
00423B96  5D                        POP EBP
00423B97  C2 08 00                  RET 0x8
LAB_00423b9a:
00423B9A  33 F6                     XOR ESI,ESI
00423B9C  85 FF                     TEST EDI,EDI
00423B9E  76 2D                     JBE 0x00423bcd
00423BA0  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
00423BA3  33 D2                     XOR EDX,EDX
LAB_00423ba5:
00423BA5  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00423BA8  8D 45 FC                  LEA EAX,[EBP + -0x4]
00423BAB  50                        PUSH EAX
00423BAC  E8 BF 90 28 00            CALL 0x006acc70
00423BB1  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00423BB4  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00423BB7  51                        PUSH ECX
00423BB8  52                        PUSH EDX
00423BB9  8B CB                     MOV ECX,EBX
00423BBB  E8 4E F8 FD FF            CALL 0x0040340e
00423BC0  46                        INC ESI
00423BC1  8B D6                     MOV EDX,ESI
00423BC3  81 E2 FF FF 00 00         AND EDX,0xffff
00423BC9  3B D7                     CMP EDX,EDI
00423BCB  72 D8                     JC 0x00423ba5
LAB_00423bcd:
00423BCD  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00423BD0  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00423BD5  33 C0                     XOR EAX,EAX
00423BD7  5F                        POP EDI
00423BD8  5E                        POP ESI
00423BD9  5B                        POP EBX
00423BDA  8B E5                     MOV ESP,EBP
00423BDC  5D                        POP EBP
00423BDD  C2 08 00                  RET 0x8
LAB_00423be0:
00423BE0  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00423BE3  68 34 51 7A 00            PUSH 0x7a5134
00423BE8  68 CC 4C 7A 00            PUSH 0x7a4ccc
00423BED  56                        PUSH ESI
00423BEE  6A 00                     PUSH 0x0
00423BF0  68 F8 00 00 00            PUSH 0xf8
00423BF5  68 A4 50 7A 00            PUSH 0x7a50a4
00423BFA  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00423C00  E8 CB 98 28 00            CALL 0x006ad4d0
00423C05  83 C4 18                  ADD ESP,0x18
00423C08  85 C0                     TEST EAX,EAX
00423C0A  74 01                     JZ 0x00423c0d
00423C0C  CC                        INT3
LAB_00423c0d:
00423C0D  68 F9 00 00 00            PUSH 0xf9
00423C12  68 A4 50 7A 00            PUSH 0x7a50a4
00423C17  6A 00                     PUSH 0x0
00423C19  56                        PUSH ESI
00423C1A  E8 21 22 28 00            CALL 0x006a5e40
00423C1F  5F                        POP EDI
00423C20  5E                        POP ESI
00423C21  83 C8 FF                  OR EAX,0xffffffff
00423C24  5B                        POP EBX
00423C25  8B E5                     MOV ESP,EBP
00423C27  5D                        POP EBP
00423C28  C2 08 00                  RET 0x8
