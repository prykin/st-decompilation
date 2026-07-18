FUN_004d9700:
004D9700  55                        PUSH EBP
004D9701  8B EC                     MOV EBP,ESP
004D9703  51                        PUSH ECX
004D9704  57                        PUSH EDI
004D9705  8B F9                     MOV EDI,ECX
004D9707  8B 0D 6C A1 7F 00         MOV ECX,dword ptr [0x007fa16c]
004D970D  85 C9                     TEST ECX,ECX
004D970F  74 53                     JZ 0x004d9764
004D9711  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
004D9714  56                        PUSH ESI
004D9715  33 F6                     XOR ESI,ESI
004D9717  85 C0                     TEST EAX,EAX
004D9719  7E 31                     JLE 0x004d974c
LAB_004d971b:
004D971B  8D 45 FC                  LEA EAX,[EBP + -0x4]
004D971E  8B D6                     MOV EDX,ESI
004D9720  50                        PUSH EAX
004D9721  E8 4A 35 1D 00            CALL 0x006acc70
004D9726  39 7D FC                  CMP dword ptr [EBP + -0x4],EDI
004D9729  74 0E                     JZ 0x004d9739
004D972B  8B 0D 6C A1 7F 00         MOV ECX,dword ptr [0x007fa16c]
004D9731  46                        INC ESI
004D9732  3B 71 0C                  CMP ESI,dword ptr [ECX + 0xc]
004D9735  7C E4                     JL 0x004d971b
004D9737  EB 13                     JMP 0x004d974c
LAB_004d9739:
004D9739  8B 0D 6C A1 7F 00         MOV ECX,dword ptr [0x007fa16c]
004D973F  56                        PUSH ESI
004D9740  51                        PUSH ECX
004D9741  E8 2A 75 1D 00            CALL 0x006b0c70
004D9746  8B 0D 6C A1 7F 00         MOV ECX,dword ptr [0x007fa16c]
LAB_004d974c:
004D974C  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
004D974F  5E                        POP ESI
004D9750  85 C0                     TEST EAX,EAX
004D9752  75 10                     JNZ 0x004d9764
004D9754  51                        PUSH ECX
004D9755  E8 B6 49 1D 00            CALL 0x006ae110
004D975A  C7 05 6C A1 7F 00 00 00 00 00  MOV dword ptr [0x007fa16c],0x0
LAB_004d9764:
004D9764  33 C0                     XOR EAX,EAX
004D9766  5F                        POP EDI
004D9767  8B E5                     MOV ESP,EBP
004D9769  5D                        POP EBP
004D976A  C3                        RET
