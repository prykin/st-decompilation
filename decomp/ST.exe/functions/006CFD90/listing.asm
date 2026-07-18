FUN_006cfd90:
006CFD90  55                        PUSH EBP
006CFD91  8B EC                     MOV EBP,ESP
006CFD93  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006CFD96  85 C0                     TEST EAX,EAX
006CFD98  7E 0C                     JLE 0x006cfda6
006CFD9A  50                        PUSH EAX
006CFD9B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006CFD9E  50                        PUSH EAX
006CFD9F  E8 6C 00 00 00            CALL 0x006cfe10
006CFDA4  EB 0F                     JMP 0x006cfdb5
LAB_006cfda6:
006CFDA6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006CFDA9  8A 48 0D                  MOV CL,byte ptr [EAX + 0xd]
006CFDAC  D1 E9                     SHR ECX,0x1
006CFDAE  83 E1 0E                  AND ECX,0xe
006CFDB1  8D 44 01 16               LEA EAX,[ECX + EAX*0x1 + 0x16]
LAB_006cfdb5:
006CFDB5  33 C9                     XOR ECX,ECX
006CFDB7  56                        PUSH ESI
006CFDB8  8A 08                     MOV CL,byte ptr [EAX]
006CFDBA  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006CFDBD  40                        INC EAX
006CFDBE  85 C9                     TEST ECX,ECX
006CFDC0  74 3C                     JZ 0x006cfdfe
LAB_006cfdc2:
006CFDC2  F6 C1 80                  TEST CL,0x80
006CFDC5  74 1F                     JZ 0x006cfde6
006CFDC7  8B D1                     MOV EDX,ECX
006CFDC9  83 E2 3F                  AND EDX,0x3f
006CFDCC  2B F2                     SUB ESI,EDX
006CFDCE  78 24                     JS 0x006cfdf4
006CFDD0  F6 C1 40                  TEST CL,0x40
006CFDD3  74 08                     JZ 0x006cfddd
006CFDD5  40                        INC EAX
006CFDD6  33 C9                     XOR ECX,ECX
006CFDD8  8A 08                     MOV CL,byte ptr [EAX]
006CFDDA  40                        INC EAX
006CFDDB  EB E5                     JMP 0x006cfdc2
LAB_006cfddd:
006CFDDD  03 C2                     ADD EAX,EDX
006CFDDF  33 C9                     XOR ECX,ECX
006CFDE1  8A 08                     MOV CL,byte ptr [EAX]
006CFDE3  40                        INC EAX
006CFDE4  EB DC                     JMP 0x006cfdc2
LAB_006cfde6:
006CFDE6  83 E1 7F                  AND ECX,0x7f
006CFDE9  2B F1                     SUB ESI,ECX
006CFDEB  78 11                     JS 0x006cfdfe
006CFDED  33 C9                     XOR ECX,ECX
006CFDEF  8A 08                     MOV CL,byte ptr [EAX]
006CFDF1  40                        INC EAX
006CFDF2  EB CE                     JMP 0x006cfdc2
LAB_006cfdf4:
006CFDF4  B8 01 00 00 00            MOV EAX,0x1
006CFDF9  5E                        POP ESI
006CFDFA  5D                        POP EBP
006CFDFB  C2 0C 00                  RET 0xc
LAB_006cfdfe:
006CFDFE  33 C0                     XOR EAX,EAX
006CFE00  5E                        POP ESI
006CFE01  5D                        POP EBP
006CFE02  C2 0C 00                  RET 0xc
