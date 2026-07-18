FUN_006d3a50:
006D3A50  55                        PUSH EBP
006D3A51  8B EC                     MOV EBP,ESP
006D3A53  51                        PUSH ECX
006D3A54  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006D3A57  8B C8                     MOV ECX,EAX
006D3A59  48                        DEC EAX
006D3A5A  85 C9                     TEST ECX,ECX
006D3A5C  7E 59                     JLE 0x006d3ab7
006D3A5E  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006D3A61  40                        INC EAX
006D3A62  53                        PUSH EBX
006D3A63  56                        PUSH ESI
006D3A64  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006D3A67  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006D3A6A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D3A6D  57                        PUSH EDI
LAB_006d3a6e:
006D3A6E  85 F6                     TEST ESI,ESI
006D3A70  7E 28                     JLE 0x006d3a9a
006D3A72  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
LAB_006d3a75:
006D3A75  8B 7D 20                  MOV EDI,dword ptr [EBP + 0x20]
006D3A78  33 D2                     XOR EDX,EDX
006D3A7A  8A 11                     MOV DL,byte ptr [ECX]
006D3A7C  8D 14 97                  LEA EDX,[EDI + EDX*0x4]
006D3A7F  8B F8                     MOV EDI,EAX
006D3A81  83 C0 03                  ADD EAX,0x3
006D3A84  41                        INC ECX
006D3A85  66 8B 1A                  MOV BX,word ptr [EDX]
006D3A88  66 89 1F                  MOV word ptr [EDI],BX
006D3A8B  8A 52 02                  MOV DL,byte ptr [EDX + 0x2]
006D3A8E  88 57 02                  MOV byte ptr [EDI + 0x2],DL
006D3A91  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006D3A94  4A                        DEC EDX
006D3A95  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
006D3A98  75 DB                     JNZ 0x006d3a75
LAB_006d3a9a:
006D3A9A  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006D3A9D  8D 14 76                  LEA EDX,[ESI + ESI*0x2]
006D3AA0  2B FA                     SUB EDI,EDX
006D3AA2  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006D3AA5  2B D6                     SUB EDX,ESI
006D3AA7  03 C7                     ADD EAX,EDI
006D3AA9  03 CA                     ADD ECX,EDX
006D3AAB  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006D3AAE  4A                        DEC EDX
006D3AAF  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006D3AB2  75 BA                     JNZ 0x006d3a6e
006D3AB4  5F                        POP EDI
006D3AB5  5E                        POP ESI
006D3AB6  5B                        POP EBX
LAB_006d3ab7:
006D3AB7  8B E5                     MOV ESP,EBP
006D3AB9  5D                        POP EBP
006D3ABA  C2 1C 00                  RET 0x1c
