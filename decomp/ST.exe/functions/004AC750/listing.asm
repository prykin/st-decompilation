FUN_004ac750:
004AC750  55                        PUSH EBP
004AC751  8B EC                     MOV EBP,ESP
004AC753  83 79 18 FF               CMP dword ptr [ECX + 0x18],-0x1
004AC757  74 35                     JZ 0x004ac78e
004AC759  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
004AC75C  84 C0                     TEST AL,AL
004AC75E  7C 2E                     JL 0x004ac78e
004AC760  8B 51 14                  MOV EDX,dword ptr [ECX + 0x14]
004AC763  0F BE C0                  MOVSX EAX,AL
004AC766  4A                        DEC EDX
004AC767  3B C2                     CMP EAX,EDX
004AC769  7F 23                     JG 0x004ac78e
004AC76B  8B 49 20                  MOV ECX,dword ptr [ECX + 0x20]
004AC76E  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
004AC771  8D 54 81 0E               LEA EDX,[ECX + EAX*0x4 + 0xe]
004AC775  66 8B 4C 81 0E            MOV CX,word ptr [ECX + EAX*0x4 + 0xe]
004AC77A  8B C1                     MOV EAX,ECX
004AC77C  D1 E8                     SHR EAX,0x1
004AC77E  83 E0 01                  AND EAX,0x1
004AC781  81 E1 FD FF 00 00         AND ECX,0xfffd
004AC787  66 89 0A                  MOV word ptr [EDX],CX
004AC78A  5D                        POP EBP
004AC78B  C2 04 00                  RET 0x4
LAB_004ac78e:
004AC78E  83 C8 FF                  OR EAX,0xffffffff
004AC791  5D                        POP EBP
004AC792  C2 04 00                  RET 0x4
