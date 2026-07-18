FUN_00504b80:
00504B80  55                        PUSH EBP
00504B81  8B EC                     MOV EBP,ESP
00504B83  83 EC 48                  SUB ESP,0x48
00504B86  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00504B8B  56                        PUSH ESI
00504B8C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00504B8F  57                        PUSH EDI
00504B90  8D 55 BC                  LEA EDX,[EBP + -0x44]
00504B93  8D 4D B8                  LEA ECX,[EBP + -0x48]
00504B96  6A 00                     PUSH 0x0
00504B98  52                        PUSH EDX
00504B99  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00504B9C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00504BA2  E8 49 8C 22 00            CALL 0x0072d7f0
00504BA7  8B F0                     MOV ESI,EAX
00504BA9  83 C4 08                  ADD ESP,0x8
00504BAC  85 F6                     TEST ESI,ESI
00504BAE  0F 85 A7 00 00 00         JNZ 0x00504c5b
00504BB4  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00504BB7  8A 86 32 0C 00 00         MOV AL,byte ptr [ESI + 0xc32]
00504BBD  8A 8E 31 0C 00 00         MOV CL,byte ptr [ESI + 0xc31]
00504BC3  50                        PUSH EAX
00504BC4  51                        PUSH ECX
00504BC5  E8 26 E8 EF FF            CALL 0x004033f0
00504BCA  8B 96 9A 02 00 00         MOV EDX,dword ptr [ESI + 0x29a]
00504BD0  50                        PUSH EAX
00504BD1  52                        PUSH EDX
00504BD2  E8 C9 67 20 00            CALL 0x0070b3a0
00504BD7  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00504BDA  8B 8E 94 01 00 00         MOV ECX,dword ptr [ESI + 0x194]
00504BE0  50                        PUSH EAX
00504BE1  6A 01                     PUSH 0x1
00504BE3  8D 47 05                  LEA EAX,[EDI + 0x5]
00504BE6  6A 65                     PUSH 0x65
00504BE8  50                        PUSH EAX
00504BE9  51                        PUSH ECX
00504BEA  E8 3A E6 EF FF            CALL 0x00403229
00504BEF  8B 96 94 01 00 00         MOV EDX,dword ptr [ESI + 0x194]
00504BF5  83 C4 24                  ADD ESP,0x24
00504BF8  8B 8E B8 01 00 00         MOV ECX,dword ptr [ESI + 0x1b8]
00504BFE  83 C7 02                  ADD EDI,0x2
00504C01  6A 0A                     PUSH 0xa
00504C03  68 B2 00 00 00            PUSH 0xb2
00504C08  6A 52                     PUSH 0x52
00504C0A  57                        PUSH EDI
00504C0B  6A 00                     PUSH 0x0
00504C0D  52                        PUSH EDX
00504C0E  E8 7D BE 20 00            CALL 0x00710a90
00504C13  A1 18 76 80 00            MOV EAX,[0x00807618]
00504C18  8A 8E 32 0C 00 00         MOV CL,byte ptr [ESI + 0xc32]
00504C1E  8A 96 31 0C 00 00         MOV DL,byte ptr [ESI + 0xc31]
00504C24  6A FF                     PUSH -0x1
00504C26  6A FF                     PUSH -0x1
00504C28  6A 00                     PUSH 0x0
00504C2A  6A FF                     PUSH -0x1
00504C2C  6A FE                     PUSH -0x2
00504C2E  50                        PUSH EAX
00504C2F  51                        PUSH ECX
00504C30  52                        PUSH EDX
00504C31  E8 F3 FE EF FF            CALL 0x00404b29
00504C36  83 C4 08                  ADD ESP,0x8
00504C39  50                        PUSH EAX
00504C3A  E8 01 B5 1A 00            CALL 0x006b0140
00504C3F  8B 8E B8 01 00 00         MOV ECX,dword ptr [ESI + 0x1b8]
00504C45  50                        PUSH EAX
00504C46  E8 25 CF 20 00            CALL 0x00711b70
00504C4B  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00504C4E  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00504C53  5F                        POP EDI
00504C54  5E                        POP ESI
00504C55  8B E5                     MOV ESP,EBP
00504C57  5D                        POP EBP
00504C58  C2 04 00                  RET 0x4
LAB_00504c5b:
00504C5B  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00504C5E  68 94 27 7C 00            PUSH 0x7c2794
00504C63  68 CC 4C 7A 00            PUSH 0x7a4ccc
00504C68  56                        PUSH ESI
00504C69  6A 00                     PUSH 0x0
00504C6B  6A 76                     PUSH 0x76
00504C6D  68 00 27 7C 00            PUSH 0x7c2700
00504C72  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00504C78  E8 53 88 1A 00            CALL 0x006ad4d0
00504C7D  83 C4 18                  ADD ESP,0x18
00504C80  85 C0                     TEST EAX,EAX
00504C82  74 01                     JZ 0x00504c85
00504C84  CC                        INT3
LAB_00504c85:
00504C85  6A 76                     PUSH 0x76
00504C87  68 00 27 7C 00            PUSH 0x7c2700
00504C8C  6A 00                     PUSH 0x0
00504C8E  56                        PUSH ESI
00504C8F  E8 AC 11 1A 00            CALL 0x006a5e40
00504C94  5F                        POP EDI
00504C95  5E                        POP ESI
00504C96  8B E5                     MOV ESP,EBP
00504C98  5D                        POP EBP
00504C99  C2 04 00                  RET 0x4
