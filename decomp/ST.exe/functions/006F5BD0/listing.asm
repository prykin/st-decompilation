FUN_006f5bd0:
006F5BD0  55                        PUSH EBP
006F5BD1  8B EC                     MOV EBP,ESP
006F5BD3  53                        PUSH EBX
006F5BD4  56                        PUSH ESI
006F5BD5  57                        PUSH EDI
006F5BD6  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006F5BD9  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006F5BDC  33 C0                     XOR EAX,EAX
006F5BDE  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
LAB_006f5be1:
006F5BE1  33 C9                     XOR ECX,ECX
006F5BE3  8A 0E                     MOV CL,byte ptr [ESI]
006F5BE5  46                        INC ESI
006F5BE6  0B C9                     OR ECX,ECX
006F5BE8  74 5D                     JZ 0x006f5c47
006F5BEA  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
LAB_006f5bed:
006F5BED  F6 C1 80                  TEST CL,0x80
006F5BF0  75 10                     JNZ 0x006f5c02
LAB_006f5bf2:
006F5BF2  03 F9                     ADD EDI,ECX
006F5BF4  2B D1                     SUB EDX,ECX
006F5BF6  7E 47                     JLE 0x006f5c3f
006F5BF8  33 C9                     XOR ECX,ECX
006F5BFA  8A 0E                     MOV CL,byte ptr [ESI]
006F5BFC  46                        INC ESI
006F5BFD  F6 C1 80                  TEST CL,0x80
006F5C00  74 F0                     JZ 0x006f5bf2
LAB_006f5c02:
006F5C02  F6 C1 40                  TEST CL,0x40
006F5C05  74 13                     JZ 0x006f5c1a
006F5C07  83 E1 3F                  AND ECX,0x3f
006F5C0A  33 C0                     XOR EAX,EAX
006F5C0C  AC                        LODSB ESI
006F5C0D  2B D1                     SUB EDX,ECX
006F5C0F  8A 04 03                  MOV AL,byte ptr [EBX + EAX*0x1]
LAB_006f5c12:
006F5C12  88 07                     MOV byte ptr [EDI],AL
006F5C14  47                        INC EDI
006F5C15  49                        DEC ECX
006F5C16  7F FA                     JG 0x006f5c12
006F5C18  EB 1A                     JMP 0x006f5c34
LAB_006f5c1a:
006F5C1A  83 E1 3F                  AND ECX,0x3f
006F5C1D  2B D1                     SUB EDX,ECX
006F5C1F  33 C0                     XOR EAX,EAX
006F5C21  8A 06                     MOV AL,byte ptr [ESI]
LAB_006f5c23:
006F5C23  47                        INC EDI
006F5C24  8A 04 03                  MOV AL,byte ptr [EBX + EAX*0x1]
006F5C27  46                        INC ESI
006F5C28  49                        DEC ECX
006F5C29  88 47 FF                  MOV byte ptr [EDI + -0x1],AL
006F5C2C  7E 06                     JLE 0x006f5c34
006F5C2E  33 C0                     XOR EAX,EAX
006F5C30  8A 06                     MOV AL,byte ptr [ESI]
006F5C32  EB EF                     JMP 0x006f5c23
LAB_006f5c34:
006F5C34  0B D2                     OR EDX,EDX
006F5C36  7E 07                     JLE 0x006f5c3f
006F5C38  33 C9                     XOR ECX,ECX
006F5C3A  8A 0E                     MOV CL,byte ptr [ESI]
006F5C3C  46                        INC ESI
006F5C3D  EB AE                     JMP 0x006f5bed
LAB_006f5c3f:
006F5C3F  03 7D 0C                  ADD EDI,dword ptr [EBP + 0xc]
006F5C42  2B 7D 14                  SUB EDI,dword ptr [EBP + 0x14]
006F5C45  EB 03                     JMP 0x006f5c4a
LAB_006f5c47:
006F5C47  03 7D 0C                  ADD EDI,dword ptr [EBP + 0xc]
LAB_006f5c4a:
006F5C4A  FF 4D 18                  DEC dword ptr [EBP + 0x18]
006F5C4D  7F 92                     JG 0x006f5be1
006F5C4F  5F                        POP EDI
006F5C50  5E                        POP ESI
006F5C51  5B                        POP EBX
006F5C52  5D                        POP EBP
006F5C53  C2 18 00                  RET 0x18
