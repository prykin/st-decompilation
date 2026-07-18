FUN_0055d590:
0055D590  55                        PUSH EBP
0055D591  8B EC                     MOV EBP,ESP
0055D593  53                        PUSH EBX
0055D594  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
0055D597  33 C0                     XOR EAX,EAX
0055D599  56                        PUSH ESI
0055D59A  85 DB                     TEST EBX,EBX
0055D59C  57                        PUSH EDI
0055D59D  74 5F                     JZ 0x0055d5fe
0055D59F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0055D5A2  33 FF                     XOR EDI,EDI
0055D5A4  85 C9                     TEST ECX,ECX
0055D5A6  76 56                     JBE 0x0055d5fe
LAB_0055d5a8:
0055D5A8  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0055D5AB  8B F3                     MOV ESI,EBX
LAB_0055d5ad:
0055D5AD  8A 01                     MOV AL,byte ptr [ECX]
0055D5AF  8A D0                     MOV DL,AL
0055D5B1  3A 06                     CMP AL,byte ptr [ESI]
0055D5B3  75 1C                     JNZ 0x0055d5d1
0055D5B5  84 D2                     TEST DL,DL
0055D5B7  74 14                     JZ 0x0055d5cd
0055D5B9  8A 41 01                  MOV AL,byte ptr [ECX + 0x1]
0055D5BC  8A D0                     MOV DL,AL
0055D5BE  3A 46 01                  CMP AL,byte ptr [ESI + 0x1]
0055D5C1  75 0E                     JNZ 0x0055d5d1
0055D5C3  83 C1 02                  ADD ECX,0x2
0055D5C6  83 C6 02                  ADD ESI,0x2
0055D5C9  84 D2                     TEST DL,DL
0055D5CB  75 E0                     JNZ 0x0055d5ad
LAB_0055d5cd:
0055D5CD  33 C9                     XOR ECX,ECX
0055D5CF  EB 05                     JMP 0x0055d5d6
LAB_0055d5d1:
0055D5D1  1B C9                     SBB ECX,ECX
0055D5D3  83 D9 FF                  SBB ECX,-0x1
LAB_0055d5d6:
0055D5D6  85 C9                     TEST ECX,ECX
0055D5D8  74 17                     JZ 0x0055d5f1
0055D5DA  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0055D5DD  47                        INC EDI
0055D5DE  81 C3 40 02 00 00         ADD EBX,0x240
0055D5E4  3B F8                     CMP EDI,EAX
0055D5E6  72 C0                     JC 0x0055d5a8
0055D5E8  5F                        POP EDI
0055D5E9  5E                        POP ESI
0055D5EA  33 C0                     XOR EAX,EAX
0055D5EC  5B                        POP EBX
0055D5ED  5D                        POP EBP
0055D5EE  C2 0C 00                  RET 0xc
LAB_0055d5f1:
0055D5F1  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0055D5F4  8D 0C FF                  LEA ECX,[EDI + EDI*0x8]
0055D5F7  C1 E1 06                  SHL ECX,0x6
0055D5FA  8D 44 11 40               LEA EAX,[ECX + EDX*0x1 + 0x40]
LAB_0055d5fe:
0055D5FE  5F                        POP EDI
0055D5FF  5E                        POP ESI
0055D600  5B                        POP EBX
0055D601  5D                        POP EBP
0055D602  C2 0C 00                  RET 0xc
