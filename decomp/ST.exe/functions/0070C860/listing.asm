FUN_0070c860:
0070C860  55                        PUSH EBP
0070C861  8B EC                     MOV EBP,ESP
0070C863  83 EC 48                  SUB ESP,0x48
0070C866  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0070C86B  56                        PUSH ESI
0070C86C  8D 55 BC                  LEA EDX,[EBP + -0x44]
0070C86F  8D 4D B8                  LEA ECX,[EBP + -0x48]
0070C872  6A 00                     PUSH 0x0
0070C874  52                        PUSH EDX
0070C875  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0070C87C  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0070C87F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070C885  E8 66 0F 02 00            CALL 0x0072d7f0
0070C88A  83 C4 08                  ADD ESP,0x8
0070C88D  85 C0                     TEST EAX,EAX
0070C88F  75 58                     JNZ 0x0070c8e9
0070C891  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0070C894  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0070C897  85 C0                     TEST EAX,EAX
0070C899  51                        PUSH ECX
0070C89A  7E 29                     JLE 0x0070c8c5
0070C89C  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0070C89F  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0070C8A2  50                        PUSH EAX
0070C8A3  52                        PUSH EDX
0070C8A4  56                        PUSH ESI
0070C8A5  E8 F6 86 FA FF            CALL 0x006b4fa0
0070C8AA  50                        PUSH EAX
0070C8AB  8D 45 FC                  LEA EAX,[EBP + -0x4]
0070C8AE  56                        PUSH ESI
0070C8AF  50                        PUSH EAX
0070C8B0  E8 FB 58 04 00            CALL 0x007521b0
0070C8B5  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0070C8B8  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0070C8BD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070C8C0  5E                        POP ESI
0070C8C1  8B E5                     MOV ESP,EBP
0070C8C3  5D                        POP EBP
0070C8C4  C3                        RET
LAB_0070c8c5:
0070C8C5  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0070C8C8  56                        PUSH ESI
0070C8C9  E8 D2 86 FA FF            CALL 0x006b4fa0
0070C8CE  50                        PUSH EAX
0070C8CF  8D 55 FC                  LEA EDX,[EBP + -0x4]
0070C8D2  56                        PUSH ESI
0070C8D3  52                        PUSH EDX
0070C8D4  E8 47 82 FA FF            CALL 0x006b4b20
0070C8D9  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0070C8DC  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0070C8E1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070C8E4  5E                        POP ESI
0070C8E5  8B E5                     MOV ESP,EBP
0070C8E7  5D                        POP EBP
0070C8E8  C3                        RET
LAB_0070c8e9:
0070C8E9  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0070C8EC  33 C0                     XOR EAX,EAX
0070C8EE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070C8F4  5E                        POP ESI
0070C8F5  8B E5                     MOV ESP,EBP
0070C8F7  5D                        POP EBP
0070C8F8  C3                        RET
