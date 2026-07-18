FUN_006a2920:
006A2920  55                        PUSH EBP
006A2921  8B EC                     MOV EBP,ESP
006A2923  83 EC 08                  SUB ESP,0x8
006A2926  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006A2929  53                        PUSH EBX
006A292A  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006A292D  56                        PUSH ESI
006A292E  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
006A2931  8D 45 F8                  LEA EAX,[EBP + -0x8]
006A2934  57                        PUSH EDI
006A2935  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006A2938  50                        PUSH EAX
006A2939  56                        PUSH ESI
006A293A  57                        PUSH EDI
006A293B  53                        PUSH EBX
006A293C  51                        PUSH ECX
006A293D  E8 0A 18 D6 FF            CALL 0x0040414c
006A2942  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006A2945  83 C4 14                  ADD ESP,0x14
006A2948  F6 C4 40                  TEST AH,0x40
006A294B  75 22                     JNZ 0x006a296f
006A294D  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006A2950  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006A2953  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006A2956  52                        PUSH EDX
006A2957  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006A295A  50                        PUSH EAX
006A295B  51                        PUSH ECX
006A295C  56                        PUSH ESI
006A295D  57                        PUSH EDI
006A295E  53                        PUSH EBX
006A295F  52                        PUSH EDX
006A2960  E8 EF 28 D6 FF            CALL 0x00405254
006A2965  83 C4 1C                  ADD ESP,0x1c
006A2968  5F                        POP EDI
006A2969  5E                        POP ESI
006A296A  5B                        POP EBX
006A296B  8B E5                     MOV ESP,EBP
006A296D  5D                        POP EBP
006A296E  C3                        RET
LAB_006a296f:
006A296F  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006A2972  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006A2975  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006A2978  50                        PUSH EAX
006A2979  51                        PUSH ECX
006A297A  56                        PUSH ESI
006A297B  57                        PUSH EDI
006A297C  53                        PUSH EBX
006A297D  52                        PUSH EDX
006A297E  E8 BD 0F D6 FF            CALL 0x00403940
006A2983  83 C4 18                  ADD ESP,0x18
006A2986  5F                        POP EDI
006A2987  5E                        POP ESI
006A2988  5B                        POP EBX
006A2989  8B E5                     MOV ESP,EBP
006A298B  5D                        POP EBP
006A298C  C3                        RET
