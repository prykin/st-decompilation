FUN_006c5d00:
006C5D00  55                        PUSH EBP
006C5D01  8B EC                     MOV EBP,ESP
006C5D03  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C5D06  53                        PUSH EBX
006C5D07  56                        PUSH ESI
006C5D08  57                        PUSH EDI
006C5D09  F6 80 9C 04 00 00 01      TEST byte ptr [EAX + 0x49c],0x1
006C5D10  8B 88 98 04 00 00         MOV ECX,dword ptr [EAX + 0x498]
006C5D16  75 56                     JNZ 0x006c5d6e
006C5D18  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006C5D1B  83 F9 07                  CMP ECX,0x7
006C5D1E  75 29                     JNZ 0x006c5d49
006C5D20  8B C8                     MOV ECX,EAX
006C5D22  48                        DEC EAX
006C5D23  85 C9                     TEST ECX,ECX
006C5D25  0F 84 CE 00 00 00         JZ 0x006c5df9
006C5D2B  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006C5D2E  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006C5D31  8D 48 01                  LEA ECX,[EAX + 0x1]
006C5D34  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_006c5d37:
006C5D37  8A 18                     MOV BL,byte ptr [EAX]
006C5D39  32 DA                     XOR BL,DL
006C5D3B  88 18                     MOV byte ptr [EAX],BL
006C5D3D  03 C6                     ADD EAX,ESI
006C5D3F  49                        DEC ECX
006C5D40  75 F5                     JNZ 0x006c5d37
006C5D42  5F                        POP EDI
006C5D43  5E                        POP ESI
006C5D44  5B                        POP EBX
006C5D45  5D                        POP EBP
006C5D46  C2 20 00                  RET 0x20
LAB_006c5d49:
006C5D49  8B D0                     MOV EDX,EAX
006C5D4B  48                        DEC EAX
006C5D4C  85 D2                     TEST EDX,EDX
006C5D4E  0F 84 A5 00 00 00         JZ 0x006c5df9
006C5D54  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006C5D57  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006C5D5A  8D 48 01                  LEA ECX,[EAX + 0x1]
006C5D5D  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_006c5d60:
006C5D60  88 10                     MOV byte ptr [EAX],DL
006C5D62  03 C6                     ADD EAX,ESI
006C5D64  49                        DEC ECX
006C5D65  75 F9                     JNZ 0x006c5d60
006C5D67  5F                        POP EDI
006C5D68  5E                        POP ESI
006C5D69  5B                        POP EBX
006C5D6A  5D                        POP EBP
006C5D6B  C2 20 00                  RET 0x20
LAB_006c5d6e:
006C5D6E  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006C5D71  83 F9 07                  CMP ECX,0x7
006C5D74  75 45                     JNZ 0x006c5dbb
006C5D76  8B C8                     MOV ECX,EAX
006C5D78  48                        DEC EAX
006C5D79  85 C9                     TEST ECX,ECX
006C5D7B  74 7C                     JZ 0x006c5df9
006C5D7D  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006C5D80  8A 5D 20                  MOV BL,byte ptr [EBP + 0x20]
006C5D83  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006C5D86  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006C5D89  40                        INC EAX
006C5D8A  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
006C5D8D  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_006c5d90:
006C5D90  85 4D 18                  TEST dword ptr [EBP + 0x18],ECX
006C5D93  74 04                     JZ 0x006c5d99
006C5D95  30 18                     XOR byte ptr [EAX],BL
006C5D97  EB 07                     JMP 0x006c5da0
LAB_006c5d99:
006C5D99  83 FA FF                  CMP EDX,-0x1
006C5D9C  74 02                     JZ 0x006c5da0
006C5D9E  30 10                     XOR byte ptr [EAX],DL
LAB_006c5da0:
006C5DA0  03 C6                     ADD EAX,ESI
006C5DA2  D1 E9                     SHR ECX,0x1
006C5DA4  75 05                     JNZ 0x006c5dab
006C5DA6  B9 00 00 00 80            MOV ECX,0x80000000
LAB_006c5dab:
006C5DAB  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
006C5DAE  4F                        DEC EDI
006C5DAF  89 7D 14                  MOV dword ptr [EBP + 0x14],EDI
006C5DB2  75 DC                     JNZ 0x006c5d90
006C5DB4  5F                        POP EDI
006C5DB5  5E                        POP ESI
006C5DB6  5B                        POP EBX
006C5DB7  5D                        POP EBP
006C5DB8  C2 20 00                  RET 0x20
LAB_006c5dbb:
006C5DBB  8B D0                     MOV EDX,EAX
006C5DBD  48                        DEC EAX
006C5DBE  85 D2                     TEST EDX,EDX
006C5DC0  74 37                     JZ 0x006c5df9
006C5DC2  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006C5DC5  8A 5D 20                  MOV BL,byte ptr [EBP + 0x20]
006C5DC8  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006C5DCB  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006C5DCE  40                        INC EAX
006C5DCF  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
006C5DD2  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
LAB_006c5dd5:
006C5DD5  85 45 18                  TEST dword ptr [EBP + 0x18],EAX
006C5DD8  74 04                     JZ 0x006c5dde
006C5DDA  88 19                     MOV byte ptr [ECX],BL
006C5DDC  EB 07                     JMP 0x006c5de5
LAB_006c5dde:
006C5DDE  83 FA FF                  CMP EDX,-0x1
006C5DE1  74 02                     JZ 0x006c5de5
006C5DE3  88 11                     MOV byte ptr [ECX],DL
LAB_006c5de5:
006C5DE5  03 CE                     ADD ECX,ESI
006C5DE7  D1 E8                     SHR EAX,0x1
006C5DE9  75 05                     JNZ 0x006c5df0
006C5DEB  B8 00 00 00 80            MOV EAX,0x80000000
LAB_006c5df0:
006C5DF0  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
006C5DF3  4F                        DEC EDI
006C5DF4  89 7D 14                  MOV dword ptr [EBP + 0x14],EDI
006C5DF7  75 DC                     JNZ 0x006c5dd5
LAB_006c5df9:
006C5DF9  5F                        POP EDI
006C5DFA  5E                        POP ESI
006C5DFB  5B                        POP EBX
006C5DFC  5D                        POP EBP
006C5DFD  C2 20 00                  RET 0x20
