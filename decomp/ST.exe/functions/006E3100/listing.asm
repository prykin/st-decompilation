FUN_006e3100:
006E3100  55                        PUSH EBP
006E3101  8B EC                     MOV EBP,ESP
006E3103  6A FF                     PUSH -0x1
006E3105  68 60 E1 79 00            PUSH 0x79e160
006E310A  68 64 D9 72 00            PUSH 0x72d964
006E310F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
006E3115  50                        PUSH EAX
006E3116  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
006E311D  83 EC 18                  SUB ESP,0x18
006E3120  53                        PUSH EBX
006E3121  56                        PUSH ESI
006E3122  57                        PUSH EDI
006E3123  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006E3126  8B D9                     MOV EBX,ECX
006E3128  33 F6                     XOR ESI,ESI
006E312A  89 75 E0                  MOV dword ptr [EBP + -0x20],ESI
006E312D  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006E3130  85 D2                     TEST EDX,EDX
006E3132  0F 8E 84 00 00 00         JLE 0x006e31bc
006E3138  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006E313B  85 C0                     TEST EAX,EAX
006E313D  7E 7D                     JLE 0x006e31bc
006E313F  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
006E3142  85 C0                     TEST EAX,EAX
006E3144  74 0F                     JZ 0x006e3155
006E3146  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
006E3149  25 00 11 00 00            AND EAX,0x1100
006E314E  3D 00 01 00 00            CMP EAX,0x100
006E3153  74 67                     JZ 0x006e31bc
LAB_006e3155:
006E3155  8B 4B 28                  MOV ECX,dword ptr [EBX + 0x28]
006E3158  8B F1                     MOV ESI,ECX
006E315A  0F AF 75 14               IMUL ESI,dword ptr [EBP + 0x14]
006E315E  03 75 10                  ADD ESI,dword ptr [EBP + 0x10]
006E3161  8B F9                     MOV EDI,ECX
006E3163  0F AF 7D 0C               IMUL EDI,dword ptr [EBP + 0xc]
006E3167  03 7D 08                  ADD EDI,dword ptr [EBP + 0x8]
006E316A  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006E3171  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
006E3174  FF 75 1C                  PUSH dword ptr [EBP + 0x1c]
006E3177  52                        PUSH EDX
006E3178  51                        PUSH ECX
006E3179  8D 0C 30                  LEA ECX,[EAX + ESI*0x1]
006E317C  51                        PUSH ECX
006E317D  03 C7                     ADD EAX,EDI
006E317F  50                        PUSH EAX
006E3180  E8 8B E4 FE FF            CALL 0x006d1610
006E3185  8B 43 14                  MOV EAX,dword ptr [EBX + 0x14]
006E3188  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006E318B  52                        PUSH EDX
006E318C  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006E318F  51                        PUSH ECX
006E3190  8B 53 28                  MOV EDX,dword ptr [EBX + 0x28]
006E3193  52                        PUSH EDX
006E3194  8D 0C 30                  LEA ECX,[EAX + ESI*0x1]
006E3197  51                        PUSH ECX
006E3198  03 C7                     ADD EAX,EDI
006E319A  50                        PUSH EAX
006E319B  E8 70 E4 FE FF            CALL 0x006d1610
006E31A0  EB 10                     JMP 0x006e31b2
LAB_006e31b2:
006E31B2  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006E31B9  8B 75 E0                  MOV ESI,dword ptr [EBP + -0x20]
LAB_006e31bc:
006E31BC  85 F6                     TEST ESI,ESI
006E31BE  74 2C                     JZ 0x006e31ec
006E31C0  68 58 0D 00 00            PUSH 0xd58
006E31C5  68 58 E7 7E 00            PUSH 0x7ee758
006E31CA  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006E31D0  52                        PUSH EDX
006E31D1  56                        PUSH ESI
006E31D2  E8 69 2C FC FF            CALL 0x006a5e40
006E31D7  8B C6                     MOV EAX,ESI
006E31D9  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006E31DC  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006E31E3  5F                        POP EDI
006E31E4  5E                        POP ESI
006E31E5  5B                        POP EBX
006E31E6  8B E5                     MOV ESP,EBP
006E31E8  5D                        POP EBP
006E31E9  C2 18 00                  RET 0x18
LAB_006e31ec:
006E31EC  33 C0                     XOR EAX,EAX
006E31EE  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006E31F1  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006E31F8  5F                        POP EDI
006E31F9  5E                        POP ESI
006E31FA  5B                        POP EBX
006E31FB  8B E5                     MOV ESP,EBP
006E31FD  5D                        POP EBP
006E31FE  C2 18 00                  RET 0x18
