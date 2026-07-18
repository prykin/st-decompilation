FUN_00757cd0:
00757CD0  55                        PUSH EBP
00757CD1  8B EC                     MOV EBP,ESP
00757CD3  56                        PUSH ESI
00757CD4  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00757CD7  57                        PUSH EDI
00757CD8  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00757CDB  8B 87 8E 01 00 00         MOV EAX,dword ptr [EDI + 0x18e]
LAB_00757ce1:
00757CE1  3D C0 00 00 00            CMP EAX,0xc0
00757CE6  7D 07                     JGE 0x00757cef
LAB_00757ce8:
00757CE8  B9 02 00 00 00            MOV ECX,0x2
00757CED  EB 5A                     JMP 0x00757d49
LAB_00757cef:
00757CEF  3D D0 00 00 00            CMP EAX,0xd0
00757CF4  7C 4E                     JL 0x00757d44
00757CF6  3D D7 00 00 00            CMP EAX,0xd7
00757CFB  7F 47                     JG 0x00757d44
00757CFD  8D 4E 01                  LEA ECX,[ESI + 0x1]
00757D00  83 E1 07                  AND ECX,0x7
00757D03  81 C1 D0 00 00 00         ADD ECX,0xd0
00757D09  3B C1                     CMP EAX,ECX
00757D0B  74 37                     JZ 0x00757d44
00757D0D  8D 56 02                  LEA EDX,[ESI + 0x2]
00757D10  83 E2 07                  AND EDX,0x7
00757D13  81 C2 D0 00 00 00         ADD EDX,0xd0
00757D19  3B C2                     CMP EAX,EDX
00757D1B  74 27                     JZ 0x00757d44
00757D1D  8D 4E FF                  LEA ECX,[ESI + -0x1]
00757D20  83 E1 07                  AND ECX,0x7
00757D23  81 C1 D0 00 00 00         ADD ECX,0xd0
00757D29  3B C1                     CMP EAX,ECX
00757D2B  74 BB                     JZ 0x00757ce8
00757D2D  8D 56 FE                  LEA EDX,[ESI + -0x2]
00757D30  83 E2 07                  AND EDX,0x7
00757D33  81 C2 D0 00 00 00         ADD EDX,0xd0
00757D39  3B C2                     CMP EAX,EDX
00757D3B  74 AB                     JZ 0x00757ce8
00757D3D  B9 01 00 00 00            MOV ECX,0x1
00757D42  EB 05                     JMP 0x00757d49
LAB_00757d44:
00757D44  B9 03 00 00 00            MOV ECX,0x3
LAB_00757d49:
00757D49  49                        DEC ECX
00757D4A  74 25                     JZ 0x00757d71
00757D4C  49                        DEC ECX
00757D4D  74 05                     JZ 0x00757d54
00757D4F  49                        DEC ECX
00757D50  74 29                     JZ 0x00757d7b
00757D52  EB 8D                     JMP 0x00757ce1
LAB_00757d54:
00757D54  57                        PUSH EDI
00757D55  E8 36 00 00 00            CALL 0x00757d90
00757D5A  85 C0                     TEST EAX,EAX
00757D5C  74 0B                     JZ 0x00757d69
00757D5E  8B 87 8E 01 00 00         MOV EAX,dword ptr [EDI + 0x18e]
00757D64  E9 78 FF FF FF            JMP 0x00757ce1
LAB_00757d69:
00757D69  5F                        POP EDI
00757D6A  33 C0                     XOR EAX,EAX
00757D6C  5E                        POP ESI
00757D6D  5D                        POP EBP
00757D6E  C2 08 00                  RET 0x8
LAB_00757d71:
00757D71  C7 87 8E 01 00 00 00 00 00 00  MOV dword ptr [EDI + 0x18e],0x0
LAB_00757d7b:
00757D7B  5F                        POP EDI
00757D7C  B8 01 00 00 00            MOV EAX,0x1
00757D81  5E                        POP ESI
00757D82  5D                        POP EBP
00757D83  C2 08 00                  RET 0x8
