FUN_006e6540:
006E6540  55                        PUSH EBP
006E6541  8B EC                     MOV EBP,ESP
006E6543  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006E6546  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006E6549  D9 45 0C                  FLD float ptr [EBP + 0xc]
006E654C  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
006E654F  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006E6552  D9 59 04                  FSTP float ptr [ECX + 0x4]
006E6555  83 F8 FE                  CMP EAX,-0x2
006E6558  74 20                     JZ 0x006e657a
006E655A  83 F8 FF                  CMP EAX,-0x1
006E655D  75 06                     JNZ 0x006e6565
006E655F  33 C0                     XOR EAX,EAX
006E6561  8A 41 16                  MOV AL,byte ptr [ECX + 0x16]
006E6564  40                        INC EAX
LAB_006e6565:
006E6565  33 D2                     XOR EDX,EDX
006E6567  56                        PUSH ESI
006E6568  8A 51 17                  MOV DL,byte ptr [ECX + 0x17]
006E656B  8B F2                     MOV ESI,EDX
006E656D  3B C6                     CMP EAX,ESI
006E656F  7C 05                     JL 0x006e6576
006E6571  99                        CDQ
006E6572  F7 FE                     IDIV ESI
006E6574  8B C2                     MOV EAX,EDX
LAB_006e6576:
006E6576  88 41 16                  MOV byte ptr [ECX + 0x16],AL
006E6579  5E                        POP ESI
LAB_006e657a:
006E657A  5D                        POP EBP
006E657B  C2 10 00                  RET 0x10
