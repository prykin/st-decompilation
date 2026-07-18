FUN_0075e580:
0075E580  55                        PUSH EBP
0075E581  8B EC                     MOV EBP,ESP
0075E583  51                        PUSH ECX
0075E584  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0075E587  53                        PUSH EBX
0075E588  56                        PUSH ESI
0075E589  57                        PUSH EDI
0075E58A  8B 08                     MOV ECX,dword ptr [EAX]
0075E58C  8B B0 BA 01 00 00         MOV ESI,dword ptr [EAX + 0x1ba]
0075E592  68 FC 07 00 00            PUSH 0x7fc
0075E597  6A 01                     PUSH 0x1
0075E599  50                        PUSH EAX
0075E59A  FF 11                     CALL dword ptr [ECX]
0075E59C  05 FC 03 00 00            ADD EAX,0x3fc
0075E5A1  33 C9                     XOR ECX,ECX
0075E5A3  89 46 28                  MOV dword ptr [ESI + 0x28],EAX
0075E5A6  33 DB                     XOR EBX,EBX
0075E5A8  8B F0                     MOV ESI,EAX
0075E5AA  8B F8                     MOV EDI,EAX
0075E5AC  C7 45 08 10 00 00 00      MOV dword ptr [EBP + 0x8],0x10
0075E5B3  BA 10 00 00 00            MOV EDX,0x10
0075E5B8  EB 03                     JMP 0x0075e5bd
LAB_0075e5ba:
0075E5BA  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_0075e5bd:
0075E5BD  89 0E                     MOV dword ptr [ESI],ECX
0075E5BF  89 1F                     MOV dword ptr [EDI],EBX
0075E5C1  83 C6 04                  ADD ESI,0x4
0075E5C4  83 EF 04                  SUB EDI,0x4
0075E5C7  41                        INC ECX
0075E5C8  4B                        DEC EBX
0075E5C9  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0075E5CC  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0075E5CF  4B                        DEC EBX
0075E5D0  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
0075E5D3  75 E5                     JNZ 0x0075e5ba
0075E5D5  8D 70 40                  LEA ESI,[EAX + 0x40]
0075E5D8  8D 78 C0                  LEA EDI,[EAX + -0x40]
LAB_0075e5db:
0075E5DB  8B D9                     MOV EBX,ECX
0075E5DD  89 0E                     MOV dword ptr [ESI],ECX
0075E5DF  F7 DB                     NEG EBX
0075E5E1  42                        INC EDX
0075E5E2  89 1F                     MOV dword ptr [EDI],EBX
0075E5E4  8B DA                     MOV EBX,EDX
0075E5E6  83 C6 04                  ADD ESI,0x4
0075E5E9  F7 D3                     NOT EBX
0075E5EB  83 E3 01                  AND EBX,0x1
0075E5EE  83 EF 04                  SUB EDI,0x4
0075E5F1  03 CB                     ADD ECX,EBX
0075E5F3  83 FA 30                  CMP EDX,0x30
0075E5F6  7C E3                     JL 0x0075e5db
0075E5F8  81 FA FF 00 00 00         CMP EDX,0xff
0075E5FE  7F 24                     JG 0x0075e624
0075E600  8D 34 95 00 00 00 00      LEA ESI,[EDX*0x4 + 0x0]
0075E607  8B D9                     MOV EBX,ECX
0075E609  F7 DB                     NEG EBX
0075E60B  8D 3C 06                  LEA EDI,[ESI + EAX*0x1]
0075E60E  2B C6                     SUB EAX,ESI
0075E610  BE 00 01 00 00            MOV ESI,0x100
0075E615  2B F2                     SUB ESI,EDX
LAB_0075e617:
0075E617  89 0F                     MOV dword ptr [EDI],ECX
0075E619  89 18                     MOV dword ptr [EAX],EBX
0075E61B  83 C7 04                  ADD EDI,0x4
0075E61E  83 E8 04                  SUB EAX,0x4
0075E621  4E                        DEC ESI
0075E622  75 F3                     JNZ 0x0075e617
LAB_0075e624:
0075E624  5F                        POP EDI
0075E625  5E                        POP ESI
0075E626  5B                        POP EBX
0075E627  8B E5                     MOV ESP,EBP
0075E629  5D                        POP EBP
0075E62A  C2 04 00                  RET 0x4
