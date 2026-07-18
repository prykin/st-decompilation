FUN_006c8e60:
006C8E60  55                        PUSH EBP
006C8E61  8B EC                     MOV EBP,ESP
006C8E63  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006C8E66  56                        PUSH ESI
006C8E67  8A 41 0D                  MOV AL,byte ptr [ECX + 0xd]
006C8E6A  8B 31                     MOV ESI,dword ptr [ECX]
006C8E6C  D1 E8                     SHR EAX,0x1
006C8E6E  83 E0 0E                  AND EAX,0xe
006C8E71  03 F1                     ADD ESI,ECX
006C8E73  8D 44 08 16               LEA EAX,[EAX + ECX*0x1 + 0x16]
006C8E77  3B C6                     CMP EAX,ESI
006C8E79  73 37                     JNC 0x006c8eb2
006C8E7B  8A 55 10                  MOV DL,byte ptr [EBP + 0x10]
006C8E7E  53                        PUSH EBX
006C8E7F  8A 5D 0C                  MOV BL,byte ptr [EBP + 0xc]
LAB_006c8e82:
006C8E82  8A 08                     MOV CL,byte ptr [EAX]
006C8E84  40                        INC EAX
006C8E85  84 C9                     TEST CL,CL
006C8E87  74 24                     JZ 0x006c8ead
006C8E89  F6 C1 80                  TEST CL,0x80
006C8E8C  74 1F                     JZ 0x006c8ead
006C8E8E  F6 C1 40                  TEST CL,0x40
006C8E91  74 09                     JZ 0x006c8e9c
006C8E93  38 18                     CMP byte ptr [EAX],BL
006C8E95  75 02                     JNZ 0x006c8e99
006C8E97  88 10                     MOV byte ptr [EAX],DL
LAB_006c8e99:
006C8E99  40                        INC EAX
006C8E9A  EB 11                     JMP 0x006c8ead
LAB_006c8e9c:
006C8E9C  83 E1 3F                  AND ECX,0x3f
006C8E9F  49                        DEC ECX
006C8EA0  78 0B                     JS 0x006c8ead
006C8EA2  41                        INC ECX
LAB_006c8ea3:
006C8EA3  38 18                     CMP byte ptr [EAX],BL
006C8EA5  75 02                     JNZ 0x006c8ea9
006C8EA7  88 10                     MOV byte ptr [EAX],DL
LAB_006c8ea9:
006C8EA9  40                        INC EAX
006C8EAA  49                        DEC ECX
006C8EAB  75 F6                     JNZ 0x006c8ea3
LAB_006c8ead:
006C8EAD  3B C6                     CMP EAX,ESI
006C8EAF  72 D1                     JC 0x006c8e82
006C8EB1  5B                        POP EBX
LAB_006c8eb2:
006C8EB2  5E                        POP ESI
006C8EB3  5D                        POP EBP
006C8EB4  C2 0C 00                  RET 0xc
