MMsgTy::ShowSprites:
005B7210  55                        PUSH EBP
005B7211  8B EC                     MOV EBP,ESP
005B7213  83 EC 48                  SUB ESP,0x48
005B7216  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005B721B  53                        PUSH EBX
005B721C  56                        PUSH ESI
005B721D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005B7220  57                        PUSH EDI
005B7221  8D 55 BC                  LEA EDX,[EBP + -0x44]
005B7224  8D 4D B8                  LEA ECX,[EBP + -0x48]
005B7227  6A 00                     PUSH 0x0
005B7229  52                        PUSH EDX
005B722A  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005B722D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B7233  E8 B8 65 17 00            CALL 0x0072d7f0
005B7238  8B F0                     MOV ESI,EAX
005B723A  83 C4 08                  ADD ESP,0x8
005B723D  85 F6                     TEST ESI,ESI
005B723F  75 7B                     JNZ 0x005b72bc
005B7241  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
005B7244  8B 87 FB 1C 00 00         MOV EAX,dword ptr [EDI + 0x1cfb]
005B724A  83 F8 FF                  CMP EAX,-0x1
005B724D  74 1D                     JZ 0x005b726c
005B724F  8B 8F 17 1D 00 00         MOV ECX,dword ptr [EDI + 0x1d17]
005B7255  8B 97 13 1D 00 00         MOV EDX,dword ptr [EDI + 0x1d13]
005B725B  51                        PUSH ECX
005B725C  52                        PUSH EDX
005B725D  6A FE                     PUSH -0x2
005B725F  50                        PUSH EAX
005B7260  8B 87 3F 1D 00 00         MOV EAX,dword ptr [EDI + 0x1d3f]
005B7266  50                        PUSH EAX
005B7267  E8 64 C2 0F 00            CALL 0x006b34d0
LAB_005b726c:
005B726C  8A 87 9A 00 00 00         MOV AL,byte ptr [EDI + 0x9a]
005B7272  33 DB                     XOR EBX,EBX
005B7274  84 C0                     TEST AL,AL
005B7276  76 34                     JBE 0x005b72ac
005B7278  8D B7 E7 00 00 00         LEA ESI,[EDI + 0xe7]
LAB_005b727e:
005B727E  8B 06                     MOV EAX,dword ptr [ESI]
005B7280  83 F8 FF                  CMP EAX,-0x1
005B7283  74 14                     JZ 0x005b7299
005B7285  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
005B7288  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
005B728B  51                        PUSH ECX
005B728C  52                        PUSH EDX
005B728D  6A FE                     PUSH -0x2
005B728F  50                        PUSH EAX
005B7290  8B 46 44                  MOV EAX,dword ptr [ESI + 0x44]
005B7293  50                        PUSH EAX
005B7294  E8 37 C2 0F 00            CALL 0x006b34d0
LAB_005b7299:
005B7299  33 C9                     XOR ECX,ECX
005B729B  43                        INC EBX
005B729C  8A 8F 9A 00 00 00         MOV CL,byte ptr [EDI + 0x9a]
005B72A2  81 C6 FB 01 00 00         ADD ESI,0x1fb
005B72A8  3B D9                     CMP EBX,ECX
005B72AA  7C D2                     JL 0x005b727e
LAB_005b72ac:
005B72AC  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005B72AF  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005B72B5  5F                        POP EDI
005B72B6  5E                        POP ESI
005B72B7  5B                        POP EBX
005B72B8  8B E5                     MOV ESP,EBP
005B72BA  5D                        POP EBP
005B72BB  C3                        RET
LAB_005b72bc:
005B72BC  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005B72BF  68 48 CC 7C 00            PUSH 0x7ccc48
005B72C4  68 CC 4C 7A 00            PUSH 0x7a4ccc
005B72C9  56                        PUSH ESI
005B72CA  6A 00                     PUSH 0x0
005B72CC  6A 4B                     PUSH 0x4b
005B72CE  68 74 CB 7C 00            PUSH 0x7ccb74
005B72D3  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005B72D8  E8 F3 61 0F 00            CALL 0x006ad4d0
005B72DD  83 C4 18                  ADD ESP,0x18
005B72E0  85 C0                     TEST EAX,EAX
005B72E2  74 01                     JZ 0x005b72e5
005B72E4  CC                        INT3
LAB_005b72e5:
005B72E5  6A 4B                     PUSH 0x4b
005B72E7  68 74 CB 7C 00            PUSH 0x7ccb74
005B72EC  6A 00                     PUSH 0x0
005B72EE  56                        PUSH ESI
005B72EF  E8 4C EB 0E 00            CALL 0x006a5e40
005B72F4  5F                        POP EDI
005B72F5  5E                        POP ESI
005B72F6  5B                        POP EBX
005B72F7  8B E5                     MOV ESP,EBP
005B72F9  5D                        POP EBP
005B72FA  C3                        RET
