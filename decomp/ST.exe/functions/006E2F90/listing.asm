FUN_006e2f90:
006E2F90  55                        PUSH EBP
006E2F91  8B EC                     MOV EBP,ESP
006E2F93  6A FF                     PUSH -0x1
006E2F95  68 48 E1 79 00            PUSH 0x79e148
006E2F9A  68 64 D9 72 00            PUSH 0x72d964
006E2F9F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
006E2FA5  50                        PUSH EAX
006E2FA6  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
006E2FAD  83 EC 20                  SUB ESP,0x20
006E2FB0  53                        PUSH EBX
006E2FB1  56                        PUSH ESI
006E2FB2  57                        PUSH EDI
006E2FB3  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006E2FB6  8B F1                     MOV ESI,ECX
006E2FB8  89 75 D0                  MOV dword ptr [EBP + -0x30],ESI
006E2FBB  33 FF                     XOR EDI,EDI
006E2FBD  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
006E2FC0  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006E2FC3  85 C0                     TEST EAX,EAX
006E2FC5  0F 8E E8 00 00 00         JLE 0x006e30b3
006E2FCB  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006E2FCE  85 DB                     TEST EBX,EBX
006E2FD0  0F 8E DD 00 00 00         JLE 0x006e30b3
006E2FD6  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006E2FD9  85 C0                     TEST EAX,EAX
006E2FDB  74 13                     JZ 0x006e2ff0
006E2FDD  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
006E2FE0  25 00 11 00 00            AND EAX,0x1100
006E2FE5  3D 00 01 00 00            CMP EAX,0x100
006E2FEA  0F 84 C3 00 00 00         JZ 0x006e30b3
LAB_006e2ff0:
006E2FF0  8B 56 28                  MOV EDX,dword ptr [ESI + 0x28]
006E2FF3  8B C2                     MOV EAX,EDX
006E2FF5  0F AF 45 14               IMUL EAX,dword ptr [EBP + 0x14]
006E2FF9  03 45 10                  ADD EAX,dword ptr [EBP + 0x10]
006E2FFC  8B CA                     MOV ECX,EDX
006E2FFE  0F AF 4D 0C               IMUL ECX,dword ptr [EBP + 0xc]
006E3002  03 4D 08                  ADD ECX,dword ptr [EBP + 0x8]
006E3005  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006E300C  8B 7E 0C                  MOV EDI,dword ptr [ESI + 0xc]
006E300F  53                        PUSH EBX
006E3010  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006E3013  53                        PUSH EBX
006E3014  52                        PUSH EDX
006E3015  8D 14 07                  LEA EDX,[EDI + EAX*0x1]
006E3018  52                        PUSH EDX
006E3019  03 F9                     ADD EDI,ECX
006E301B  57                        PUSH EDI
006E301C  E8 EF E5 FE FF            CALL 0x006d1610
006E3021  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006E3028  8B 7D DC                  MOV EDI,dword ptr [EBP + -0x24]
006E302B  EB 1B                     JMP 0x006e3048
LAB_006e3048:
006E3048  85 FF                     TEST EDI,EDI
006E304A  75 6B                     JNZ 0x006e30b7
006E304C  8B 46 28                  MOV EAX,dword ptr [ESI + 0x28]
006E304F  8B 76 14                  MOV ESI,dword ptr [ESI + 0x14]
006E3052  8B C8                     MOV ECX,EAX
006E3054  0F AF 4D 14               IMUL ECX,dword ptr [EBP + 0x14]
006E3058  03 4D 10                  ADD ECX,dword ptr [EBP + 0x10]
006E305B  8D 0C 4E                  LEA ECX,[ESI + ECX*0x2]
006E305E  8B D0                     MOV EDX,EAX
006E3060  0F AF 55 0C               IMUL EDX,dword ptr [EBP + 0xc]
006E3064  03 55 08                  ADD EDX,dword ptr [EBP + 0x8]
006E3067  8D 34 56                  LEA ESI,[ESI + EDX*0x2]
006E306A  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
006E3071  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006E3074  85 D2                     TEST EDX,EDX
006E3076  75 14                     JNZ 0x006e308c
006E3078  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006E307B  52                        PUSH EDX
006E307C  8D 14 1B                  LEA EDX,[EBX + EBX*0x1]
006E307F  52                        PUSH EDX
006E3080  03 C0                     ADD EAX,EAX
006E3082  50                        PUSH EAX
006E3083  51                        PUSH ECX
006E3084  56                        PUSH ESI
006E3085  E8 86 E5 FE FF            CALL 0x006d1610
006E308A  EB 20                     JMP 0x006e30ac
LAB_006e308c:
006E308C  52                        PUSH EDX
006E308D  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006E3090  52                        PUSH EDX
006E3091  53                        PUSH EBX
006E3092  03 C0                     ADD EAX,EAX
006E3094  50                        PUSH EAX
006E3095  51                        PUSH ECX
006E3096  56                        PUSH ESI
006E3097  E8 B4 FC FF FF            CALL 0x006e2d50
006E309C  EB 0E                     JMP 0x006e30ac
LAB_006e30ac:
006E30AC  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
LAB_006e30b3:
006E30B3  85 FF                     TEST EDI,EDI
006E30B5  74 2C                     JZ 0x006e30e3
LAB_006e30b7:
006E30B7  68 3D 0D 00 00            PUSH 0xd3d
006E30BC  68 58 E7 7E 00            PUSH 0x7ee758
006E30C1  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006E30C7  51                        PUSH ECX
006E30C8  57                        PUSH EDI
006E30C9  E8 72 2D FC FF            CALL 0x006a5e40
006E30CE  8B C7                     MOV EAX,EDI
006E30D0  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006E30D3  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006E30DA  5F                        POP EDI
006E30DB  5E                        POP ESI
006E30DC  5B                        POP EBX
006E30DD  8B E5                     MOV ESP,EBP
006E30DF  5D                        POP EBP
006E30E0  C2 1C 00                  RET 0x1c
LAB_006e30e3:
006E30E3  33 C0                     XOR EAX,EAX
006E30E5  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006E30E8  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006E30EF  5F                        POP EDI
006E30F0  5E                        POP ESI
006E30F1  5B                        POP EBX
006E30F2  8B E5                     MOV ESP,EBP
006E30F4  5D                        POP EBP
006E30F5  C2 1C 00                  RET 0x1c
