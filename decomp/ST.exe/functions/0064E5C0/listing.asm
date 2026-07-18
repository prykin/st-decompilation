FUN_0064e5c0:
0064E5C0  55                        PUSH EBP
0064E5C1  8B EC                     MOV EBP,ESP
0064E5C3  83 EC 08                  SUB ESP,0x8
0064E5C6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0064E5C9  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0064E5CC  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0064E5CF  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0064E5D2  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0064E5D5  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0064E5D8  33 D2                     XOR EDX,EDX
0064E5DA  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
0064E5DD  66 3B C2                  CMP AX,DX
0064E5E0  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
0064E5E3  7F 0B                     JG 0x0064e5f0
0064E5E5  A1 40 B2 7F 00            MOV EAX,[0x007fb240]
0064E5EA  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0064E5ED  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_0064e5f0:
0064E5F0  66 3B CA                  CMP CX,DX
0064E5F3  7F 0E                     JG 0x0064e603
0064E5F5  66 8B 0D 42 B2 7F 00      MOV CX,word ptr [0x007fb242]
0064E5FC  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0064E5FF  66 89 4D 0C               MOV word ptr [EBP + 0xc],CX
LAB_0064e603:
0064E603  8D 55 0C                  LEA EDX,[EBP + 0xc]
0064E606  8D 45 10                  LEA EAX,[EBP + 0x10]
0064E609  52                        PUSH EDX
0064E60A  8D 4D FC                  LEA ECX,[EBP + -0x4]
0064E60D  50                        PUSH EAX
0064E60E  8D 55 F8                  LEA EDX,[EBP + -0x8]
0064E611  51                        PUSH ECX
0064E612  52                        PUSH EDX
0064E613  E8 EE 32 DB FF            CALL 0x00401906
0064E618  0F BF 45 0C               MOVSX EAX,word ptr [EBP + 0xc]
0064E61C  0F BF 4D 10               MOVSX ECX,word ptr [EBP + 0x10]
0064E620  0F BF 55 FC               MOVSX EDX,word ptr [EBP + -0x4]
0064E624  83 C4 10                  ADD ESP,0x10
0064E627  50                        PUSH EAX
0064E628  51                        PUSH ECX
0064E629  0F BF 45 F8               MOVSX EAX,word ptr [EBP + -0x8]
0064E62D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064E630  52                        PUSH EDX
0064E631  50                        PUSH EAX
0064E632  51                        PUSH ECX
0064E633  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0064E639  E8 8A 2A DB FF            CALL 0x004010c8
0064E63E  8B E5                     MOV ESP,EBP
0064E640  5D                        POP EBP
0064E641  C3                        RET
