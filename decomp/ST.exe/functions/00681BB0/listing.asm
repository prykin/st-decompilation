FUN_00681bb0:
00681BB0  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00681BB6  56                        PUSH ESI
00681BB7  8B C1                     MOV EAX,ECX
00681BB9  33 F6                     XOR ESI,ESI
00681BBB  C1 E0 04                  SHL EAX,0x4
00681BBE  03 C1                     ADD EAX,ECX
00681BC0  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00681BC3  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00681BC6  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00681BC9  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
00681BCC  B8 01 00 00 00            MOV EAX,0x1
00681BD1  C1 E1 02                  SHL ECX,0x2
00681BD4  39 81 7C 1C 81 00         CMP dword ptr [ECX + 0x811c7c],EAX
00681BDA  7D 06                     JGE 0x00681be2
00681BDC  89 B1 80 1C 81 00         MOV dword ptr [ECX + 0x811c80],ESI
LAB_00681be2:
00681BE2  83 B9 7C 1C 81 00 02      CMP dword ptr [ECX + 0x811c7c],0x2
00681BE9  7D 0A                     JGE 0x00681bf5
00681BEB  C7 81 84 1C 81 00 FF FF FF 3F  MOV dword ptr [ECX + 0x811c84],0x3fffffff
LAB_00681bf5:
00681BF5  83 B9 7C 1C 81 00 03      CMP dword ptr [ECX + 0x811c7c],0x3
00681BFC  7D 06                     JGE 0x00681c04
00681BFE  89 81 88 1C 81 00         MOV dword ptr [ECX + 0x811c88],EAX
LAB_00681c04:
00681C04  83 B9 7C 1C 81 00 04      CMP dword ptr [ECX + 0x811c7c],0x4
00681C0B  7D 06                     JGE 0x00681c13
00681C0D  89 B1 8C 1C 81 00         MOV dword ptr [ECX + 0x811c8c],ESI
LAB_00681c13:
00681C13  83 B9 7C 1C 81 00 05      CMP dword ptr [ECX + 0x811c7c],0x5
00681C1A  7D 06                     JGE 0x00681c22
00681C1C  89 B1 90 1C 81 00         MOV dword ptr [ECX + 0x811c90],ESI
LAB_00681c22:
00681C22  8B 91 80 1C 81 00         MOV EDX,dword ptr [ECX + 0x811c80]
00681C28  3B D6                     CMP EDX,ESI
00681C2A  7C 31                     JL 0x00681c5d
00681C2C  83 FA 02                  CMP EDX,0x2
00681C2F  7F 2C                     JG 0x00681c5d
00681C31  39 B1 88 1C 81 00         CMP dword ptr [ECX + 0x811c88],ESI
00681C37  7D 06                     JGE 0x00681c3f
00681C39  89 81 88 1C 81 00         MOV dword ptr [ECX + 0x811c88],EAX
LAB_00681c3f:
00681C3F  39 B1 8C 1C 81 00         CMP dword ptr [ECX + 0x811c8c],ESI
00681C45  7D 06                     JGE 0x00681c4d
00681C47  89 B1 8C 1C 81 00         MOV dword ptr [ECX + 0x811c8c],ESI
LAB_00681c4d:
00681C4D  39 B1 94 1C 81 00         CMP dword ptr [ECX + 0x811c94],ESI
00681C53  7D 0A                     JGE 0x00681c5f
00681C55  89 B1 94 1C 81 00         MOV dword ptr [ECX + 0x811c94],ESI
00681C5B  5E                        POP ESI
00681C5C  C3                        RET
LAB_00681c5d:
00681C5D  33 C0                     XOR EAX,EAX
LAB_00681c5f:
00681C5F  5E                        POP ESI
00681C60  C3                        RET
