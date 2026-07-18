FUN_005fe280:
005FE280  55                        PUSH EBP
005FE281  8B EC                     MOV EBP,ESP
005FE283  53                        PUSH EBX
005FE284  56                        PUSH ESI
005FE285  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005FE288  8D 45 08                  LEA EAX,[EBP + 0x8]
005FE28B  57                        PUSH EDI
005FE28C  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
005FE28F  8D 55 0C                  LEA EDX,[EBP + 0xc]
005FE292  50                        PUSH EAX
005FE293  52                        PUSH EDX
005FE294  8D 46 29                  LEA EAX,[ESI + 0x29]
005FE297  57                        PUSH EDI
005FE298  50                        PUSH EAX
005FE299  33 DB                     XOR EBX,EBX
005FE29B  E8 45 4D E0 FF            CALL 0x00402fe5
005FE2A0  48                        DEC EAX
005FE2A1  74 34                     JZ 0x005fe2d7
005FE2A3  48                        DEC EAX
005FE2A4  75 77                     JNZ 0x005fe31d
005FE2A6  0F BF 0E                  MOVSX ECX,word ptr [ESI]
005FE2A9  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
005FE2AC  89 0A                     MOV dword ptr [EDX],ECX
005FE2AE  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
005FE2B1  0F BF 46 02               MOVSX EAX,word ptr [ESI + 0x2]
005FE2B5  89 01                     MOV dword ptr [ECX],EAX
005FE2B7  8B 4E 35                  MOV ECX,dword ptr [ESI + 0x35]
005FE2BA  2B F9                     SUB EDI,ECX
005FE2BC  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
005FE2BF  0F AF 7E 24               IMUL EDI,dword ptr [ESI + 0x24]
005FE2C3  0F BF 56 04               MOVSX EDX,word ptr [ESI + 0x4]
005FE2C7  2B D7                     SUB EDX,EDI
005FE2C9  5F                        POP EDI
005FE2CA  89 10                     MOV dword ptr [EAX],EDX
005FE2CC  5E                        POP ESI
005FE2CD  B8 01 00 00 00            MOV EAX,0x1
005FE2D2  5B                        POP EBX
005FE2D3  5D                        POP EBP
005FE2D4  C2 14 00                  RET 0x14
LAB_005fe2d7:
005FE2D7  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
005FE2DA  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005FE2DD  0F AF C1                  IMUL EAX,ECX
005FE2E0  99                        CDQ
005FE2E1  F7 7E 20                  IDIV dword ptr [ESI + 0x20]
005FE2E4  0F BF 16                  MOVSX EDX,word ptr [ESI]
005FE2E7  5F                        POP EDI
005FE2E8  03 C2                     ADD EAX,EDX
005FE2EA  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
005FE2ED  89 02                     MOV dword ptr [EDX],EAX
005FE2EF  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
005FE2F2  0F AF C1                  IMUL EAX,ECX
005FE2F5  99                        CDQ
005FE2F6  F7 7E 20                  IDIV dword ptr [ESI + 0x20]
005FE2F9  0F BF 4E 02               MOVSX ECX,word ptr [ESI + 0x2]
005FE2FD  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
005FE300  03 C1                     ADD EAX,ECX
005FE302  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005FE305  89 02                     MOV dword ptr [EDX],EAX
005FE307  0F BF 46 04               MOVSX EAX,word ptr [ESI + 0x4]
005FE30B  2B C1                     SUB EAX,ECX
005FE30D  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
005FE310  5E                        POP ESI
005FE311  5B                        POP EBX
005FE312  89 01                     MOV dword ptr [ECX],EAX
005FE314  B8 01 00 00 00            MOV EAX,0x1
005FE319  5D                        POP EBP
005FE31A  C2 14 00                  RET 0x14
LAB_005fe31d:
005FE31D  5F                        POP EDI
005FE31E  8B C3                     MOV EAX,EBX
005FE320  5E                        POP ESI
005FE321  5B                        POP EBX
005FE322  5D                        POP EBP
005FE323  C2 14 00                  RET 0x14
