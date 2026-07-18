FUN_00692ae0:
00692AE0  55                        PUSH EBP
00692AE1  8B EC                     MOV EBP,ESP
00692AE3  57                        PUSH EDI
00692AE4  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00692AE7  33 C0                     XOR EAX,EAX
00692AE9  85 FF                     TEST EDI,EDI
00692AEB  7C 7B                     JL 0x00692b68
00692AED  83 FF 04                  CMP EDI,0x4
00692AF0  7F 76                     JG 0x00692b68
00692AF2  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00692AF5  53                        PUSH EBX
00692AF6  56                        PUSH ESI
00692AF7  8B F2                     MOV ESI,EDX
00692AF9  F6 C6 10                  TEST DH,0x10
00692AFC  74 35                     JZ 0x00692b33
00692AFE  8B DA                     MOV EBX,EDX
00692B00  83 E2 0F                  AND EDX,0xf
00692B03  C1 EE 08                  SHR ESI,0x8
00692B06  C1 EB 04                  SHR EBX,0x4
00692B09  83 E6 0F                  AND ESI,0xf
00692B0C  83 E3 0F                  AND EBX,0xf
00692B0F  8D 34 73                  LEA ESI,[EBX + ESI*0x2]
00692B12  8D 34 76                  LEA ESI,[ESI + ESI*0x2]
00692B15  8D 34 B6                  LEA ESI,[ESI + ESI*0x4]
00692B18  03 F2                     ADD ESI,EDX
00692B1A  8D 14 B7                  LEA EDX,[EDI + ESI*0x4]
00692B1D  F6 84 91 58 1D 00 00 80   TEST byte ptr [ECX + EDX*0x4 + 0x1d58],0x80
00692B25  74 3A                     JZ 0x00692b61
00692B27  5E                        POP ESI
00692B28  5B                        POP EBX
00692B29  B8 01 00 00 00            MOV EAX,0x1
00692B2E  5F                        POP EDI
00692B2F  5D                        POP EBP
00692B30  C2 08 00                  RET 0x8
LAB_00692b33:
00692B33  8B DA                     MOV EBX,EDX
00692B35  83 E2 0F                  AND EDX,0xf
00692B38  C1 EE 08                  SHR ESI,0x8
00692B3B  C1 EB 04                  SHR EBX,0x4
00692B3E  83 E6 0F                  AND ESI,0xf
00692B41  83 E3 0F                  AND EBX,0xf
00692B44  8D 34 73                  LEA ESI,[EBX + ESI*0x2]
00692B47  8D 34 76                  LEA ESI,[ESI + ESI*0x2]
00692B4A  8D 34 B6                  LEA ESI,[ESI + ESI*0x4]
00692B4D  03 F2                     ADD ESI,EDX
00692B4F  8D 14 B7                  LEA EDX,[EDI + ESI*0x4]
00692B52  F6 84 91 78 2A 00 00 80   TEST byte ptr [ECX + EDX*0x4 + 0x2a78],0x80
00692B5A  74 05                     JZ 0x00692b61
00692B5C  B8 01 00 00 00            MOV EAX,0x1
LAB_00692b61:
00692B61  5E                        POP ESI
00692B62  5B                        POP EBX
00692B63  5F                        POP EDI
00692B64  5D                        POP EBP
00692B65  C2 08 00                  RET 0x8
LAB_00692b68:
00692B68  33 C0                     XOR EAX,EAX
00692B6A  5F                        POP EDI
00692B6B  5D                        POP EBP
00692B6C  C2 08 00                  RET 0x8
