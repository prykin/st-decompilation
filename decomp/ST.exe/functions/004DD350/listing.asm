FUN_004dd350:
004DD350  55                        PUSH EBP
004DD351  8B EC                     MOV EBP,ESP
004DD353  51                        PUSH ECX
004DD354  56                        PUSH ESI
004DD355  8B F1                     MOV ESI,ECX
004DD357  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004DD35A  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004DD35D  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004DD360  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004DD363  C1 E1 04                  SHL ECX,0x4
004DD366  03 C8                     ADD ECX,EAX
004DD368  8B 0C 4D FE 57 7F 00      MOV ECX,dword ptr [ECX*0x2 + 0x7f57fe]
004DD36F  85 C9                     TEST ECX,ECX
004DD371  0F 84 9B 00 00 00         JZ 0x004dd412
004DD377  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
004DD37A  57                        PUSH EDI
004DD37B  33 FF                     XOR EDI,EDI
004DD37D  85 C0                     TEST EAX,EAX
004DD37F  7E 4F                     JLE 0x004dd3d0
LAB_004dd381:
004DD381  8D 55 FC                  LEA EDX,[EBP + -0x4]
004DD384  52                        PUSH EDX
004DD385  8B D7                     MOV EDX,EDI
004DD387  E8 E4 F8 1C 00            CALL 0x006acc70
004DD38C  39 75 FC                  CMP dword ptr [EBP + -0x4],ESI
004DD38F  74 20                     JZ 0x004dd3b1
004DD391  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004DD394  47                        INC EDI
004DD395  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004DD398  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004DD39B  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004DD39E  C1 E1 04                  SHL ECX,0x4
004DD3A1  03 C8                     ADD ECX,EAX
004DD3A3  8B 0C 4D FE 57 7F 00      MOV ECX,dword ptr [ECX*0x2 + 0x7f57fe]
004DD3AA  3B 79 0C                  CMP EDI,dword ptr [ECX + 0xc]
004DD3AD  7C D2                     JL 0x004dd381
004DD3AF  EB 1F                     JMP 0x004dd3d0
LAB_004dd3b1:
004DD3B1  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004DD3B4  57                        PUSH EDI
004DD3B5  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004DD3B8  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
004DD3BB  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
004DD3BE  C1 E2 04                  SHL EDX,0x4
004DD3C1  03 D0                     ADD EDX,EAX
004DD3C3  8B 04 55 FE 57 7F 00      MOV EAX,dword ptr [EDX*0x2 + 0x7f57fe]
004DD3CA  50                        PUSH EAX
004DD3CB  E8 A0 38 1D 00            CALL 0x006b0c70
LAB_004dd3d0:
004DD3D0  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004DD3D3  5F                        POP EDI
004DD3D4  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004DD3D7  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004DD3DA  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004DD3DD  C1 E1 04                  SHL ECX,0x4
004DD3E0  03 C8                     ADD ECX,EAX
004DD3E2  8B 04 4D FE 57 7F 00      MOV EAX,dword ptr [ECX*0x2 + 0x7f57fe]
004DD3E9  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
004DD3EC  85 C9                     TEST ECX,ECX
004DD3EE  75 22                     JNZ 0x004dd412
004DD3F0  50                        PUSH EAX
004DD3F1  E8 1A 0D 1D 00            CALL 0x006ae110
004DD3F6  8B 76 24                  MOV ESI,dword ptr [ESI + 0x24]
004DD3F9  8D 14 B6                  LEA EDX,[ESI + ESI*0x4]
004DD3FC  8D 04 D6                  LEA EAX,[ESI + EDX*0x8]
004DD3FF  8D 0C 46                  LEA ECX,[ESI + EAX*0x2]
004DD402  C1 E1 04                  SHL ECX,0x4
004DD405  03 CE                     ADD ECX,ESI
004DD407  C7 04 4D FE 57 7F 00 00 00 00 00  MOV dword ptr [ECX*0x2 + 0x7f57fe],0x0
LAB_004dd412:
004DD412  33 C0                     XOR EAX,EAX
004DD414  5E                        POP ESI
004DD415  8B E5                     MOV ESP,EBP
004DD417  5D                        POP EBP
004DD418  C3                        RET
