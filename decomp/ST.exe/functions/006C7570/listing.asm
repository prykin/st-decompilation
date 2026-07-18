FUN_006c7570:
006C7570  55                        PUSH EBP
006C7571  8B EC                     MOV EBP,ESP
006C7573  53                        PUSH EBX
006C7574  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006C7577  57                        PUSH EDI
006C7578  8B 7D 20                  MOV EDI,dword ptr [EBP + 0x20]
006C757B  85 FF                     TEST EDI,EDI
006C757D  74 62                     JZ 0x006c75e1
006C757F  8D 04 3F                  LEA EAX,[EDI + EDI*0x1]
006C7582  3B D8                     CMP EBX,EAX
006C7584  7C 5B                     JL 0x006c75e1
006C7586  39 45 1C                  CMP dword ptr [EBP + 0x1c],EAX
006C7589  7C 56                     JL 0x006c75e1
006C758B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006C758E  56                        PUSH ESI
006C758F  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C7592  85 C0                     TEST EAX,EAX
006C7594  75 06                     JNZ 0x006c759c
006C7596  56                        PUSH ESI
006C7597  E8 04 DA FE FF            CALL 0x006b4fa0
LAB_006c759c:
006C759C  33 C9                     XOR ECX,ECX
006C759E  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006C75A1  66 8B 4E 0E               MOV CX,word ptr [ESI + 0xe]
006C75A5  52                        PUSH EDX
006C75A6  0F AF 4E 04               IMUL ECX,dword ptr [ESI + 0x4]
006C75AA  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006C75AD  83 C1 1F                  ADD ECX,0x1f
006C75B0  C1 E9 03                  SHR ECX,0x3
006C75B3  81 E1 FC FF FF 1F         AND ECX,0x1ffffffc
006C75B9  57                        PUSH EDI
006C75BA  52                        PUSH EDX
006C75BB  8B D1                     MOV EDX,ECX
006C75BD  F7 DA                     NEG EDX
006C75BF  53                        PUSH EBX
006C75C0  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
006C75C3  52                        PUSH EDX
006C75C4  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
006C75C7  2B D3                     SUB EDX,EBX
006C75C9  4A                        DEC EDX
006C75CA  0F AF D1                  IMUL EDX,ECX
006C75CD  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006C75D0  03 D0                     ADD EDX,EAX
006C75D2  03 D1                     ADD EDX,ECX
006C75D4  52                        PUSH EDX
006C75D5  E8 56 02 01 00            CALL 0x006d7830
006C75DA  5E                        POP ESI
006C75DB  5F                        POP EDI
006C75DC  5B                        POP EBX
006C75DD  5D                        POP EBP
006C75DE  C2 20 00                  RET 0x20
LAB_006c75e1:
006C75E1  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006C75E4  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006C75E7  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006C75EA  25 FF 00 00 00            AND EAX,0xff
006C75EF  6A 0D                     PUSH 0xd
006C75F1  50                        PUSH EAX
006C75F2  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006C75F5  51                        PUSH ECX
006C75F6  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006C75F9  53                        PUSH EBX
006C75FA  52                        PUSH EDX
006C75FB  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006C75FE  50                        PUSH EAX
006C75FF  51                        PUSH ECX
006C7600  52                        PUSH EDX
006C7601  E8 DA E8 FE FF            CALL 0x006b5ee0
006C7606  5F                        POP EDI
006C7607  5B                        POP EBX
006C7608  5D                        POP EBP
006C7609  C2 20 00                  RET 0x20
