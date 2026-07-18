STT3DSprC::UnLoadSequence:
004ABB30  55                        PUSH EBP
004ABB31  8B EC                     MOV EBP,ESP
004ABB33  83 EC 48                  SUB ESP,0x48
004ABB36  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004ABB3B  53                        PUSH EBX
004ABB3C  56                        PUSH ESI
004ABB3D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004ABB40  57                        PUSH EDI
004ABB41  8D 55 BC                  LEA EDX,[EBP + -0x44]
004ABB44  8D 4D B8                  LEA ECX,[EBP + -0x48]
004ABB47  6A 00                     PUSH 0x0
004ABB49  52                        PUSH EDX
004ABB4A  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
004ABB4D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004ABB53  E8 98 1C 28 00            CALL 0x0072d7f0
004ABB58  83 C4 08                  ADD ESP,0x8
004ABB5B  85 C0                     TEST EAX,EAX
004ABB5D  0F 85 E6 00 00 00         JNZ 0x004abc49
004ABB63  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
004ABB66  83 7E 18 FF               CMP dword ptr [ESI + 0x18],-0x1
004ABB6A  75 14                     JNZ 0x004abb80
004ABB6C  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004ABB71  6A 49                     PUSH 0x49
004ABB73  68 38 C6 7A 00            PUSH 0x7ac638
004ABB78  50                        PUSH EAX
004ABB79  6A FF                     PUSH -0x1
004ABB7B  E8 C0 A2 1F 00            CALL 0x006a5e40
LAB_004abb80:
004ABB80  8A 5D 08                  MOV BL,byte ptr [EBP + 0x8]
004ABB83  84 DB                     TEST BL,BL
004ABB85  7C 0B                     JL 0x004abb92
004ABB87  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
004ABB8A  0F BE D3                  MOVSX EDX,BL
004ABB8D  49                        DEC ECX
004ABB8E  3B D1                     CMP EDX,ECX
004ABB90  7E 14                     JLE 0x004abba6
LAB_004abb92:
004ABB92  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004ABB97  6A 4A                     PUSH 0x4a
004ABB99  68 38 C6 7A 00            PUSH 0x7ac638
004ABB9E  50                        PUSH EAX
004ABB9F  6A FF                     PUSH -0x1
004ABBA1  E8 9A A2 1F 00            CALL 0x006a5e40
LAB_004abba6:
004ABBA6  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
004ABBA9  85 C0                     TEST EAX,EAX
004ABBAB  0F 84 83 00 00 00         JZ 0x004abc34
004ABBB1  0F BE DB                  MOVSX EBX,BL
004ABBB4  8D 3C DB                  LEA EDI,[EBX + EBX*0x8]
004ABBB7  C1 E7 02                  SHL EDI,0x2
004ABBBA  83 3C 07 00               CMP dword ptr [EDI + EAX*0x1],0x0
004ABBBE  74 74                     JZ 0x004abc34
004ABBC0  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
004ABBC3  6A 01                     PUSH 0x1
004ABBC5  6A 00                     PUSH 0x0
004ABBC7  6A 00                     PUSH 0x0
004ABBC9  53                        PUSH EBX
004ABBCA  51                        PUSH ECX
004ABBCB  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
004ABBCE  E8 0D DD 23 00            CALL 0x006e98e0
004ABBD3  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
004ABBD6  BA 01 00 00 00            MOV EDX,0x1
004ABBDB  8B CB                     MOV ECX,EBX
004ABBDD  8B 5E 1C                  MOV EBX,dword ptr [ESI + 0x1c]
004ABBE0  D3 E2                     SHL EDX,CL
004ABBE2  8D 44 38 04               LEA EAX,[EAX + EDI*0x1 + 0x4]
004ABBE6  F7 D2                     NOT EDX
004ABBE8  23 DA                     AND EBX,EDX
004ABBEA  89 5E 1C                  MOV dword ptr [ESI + 0x1c],EBX
004ABBED  8B 08                     MOV ECX,dword ptr [EAX]
004ABBEF  85 C9                     TEST ECX,ECX
004ABBF1  74 06                     JZ 0x004abbf9
004ABBF3  50                        PUSH EAX
004ABBF4  E8 67 F4 1F 00            CALL 0x006ab060
LAB_004abbf9:
004ABBF9  8B 4E 20                  MOV ECX,dword ptr [ESI + 0x20]
004ABBFC  8D 44 39 08               LEA EAX,[ECX + EDI*0x1 + 0x8]
004ABC00  8B 4C 39 08               MOV ECX,dword ptr [ECX + EDI*0x1 + 0x8]
004ABC04  85 C9                     TEST ECX,ECX
004ABC06  74 06                     JZ 0x004abc0e
004ABC08  50                        PUSH EAX
004ABC09  E8 52 F4 1F 00            CALL 0x006ab060
LAB_004abc0e:
004ABC0E  8B 56 20                  MOV EDX,dword ptr [ESI + 0x20]
004ABC11  C7 04 3A 00 00 00 00      MOV dword ptr [EDX + EDI*0x1],0x0
004ABC18  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
004ABC1B  C6 44 38 0C 00            MOV byte ptr [EAX + EDI*0x1 + 0xc],0x0
004ABC20  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
004ABC23  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004ABC29  33 C0                     XOR EAX,EAX
004ABC2B  5F                        POP EDI
004ABC2C  5E                        POP ESI
004ABC2D  5B                        POP EBX
004ABC2E  8B E5                     MOV ESP,EBP
004ABC30  5D                        POP EBP
004ABC31  C2 04 00                  RET 0x4
LAB_004abc34:
004ABC34  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
004ABC37  83 C8 FF                  OR EAX,0xffffffff
004ABC3A  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004ABC40  5F                        POP EDI
004ABC41  5E                        POP ESI
004ABC42  5B                        POP EBX
004ABC43  8B E5                     MOV ESP,EBP
004ABC45  5D                        POP EBP
004ABC46  C2 04 00                  RET 0x4
LAB_004abc49:
004ABC49  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
004ABC4C  68 5C C6 7A 00            PUSH 0x7ac65c
004ABC51  68 CC 4C 7A 00            PUSH 0x7a4ccc
004ABC56  50                        PUSH EAX
004ABC57  6A 00                     PUSH 0x0
004ABC59  6A 58                     PUSH 0x58
004ABC5B  68 38 C6 7A 00            PUSH 0x7ac638
004ABC60  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004ABC66  E8 65 18 20 00            CALL 0x006ad4d0
004ABC6B  83 C4 18                  ADD ESP,0x18
004ABC6E  85 C0                     TEST EAX,EAX
004ABC70  74 01                     JZ 0x004abc73
004ABC72  CC                        INT3
LAB_004abc73:
004ABC73  5F                        POP EDI
004ABC74  5E                        POP ESI
004ABC75  83 C8 FF                  OR EAX,0xffffffff
004ABC78  5B                        POP EBX
004ABC79  8B E5                     MOV ESP,EBP
004ABC7B  5D                        POP EBP
004ABC7C  C2 04 00                  RET 0x4
