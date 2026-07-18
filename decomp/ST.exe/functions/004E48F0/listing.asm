FUN_004e48f0:
004E48F0  55                        PUSH EBP
004E48F1  8B EC                     MOV EBP,ESP
004E48F3  51                        PUSH ECX
004E48F4  56                        PUSH ESI
004E48F5  8B F1                     MOV ESI,ECX
004E48F7  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004E48FA  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004E48FD  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004E4900  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004E4903  C1 E1 04                  SHL ECX,0x4
004E4906  03 C8                     ADD ECX,EAX
004E4908  8B 04 4D 06 58 7F 00      MOV EAX,dword ptr [ECX*0x2 + 0x7f5806]
004E490F  85 C0                     TEST EAX,EAX
004E4911  75 25                     JNZ 0x004e4938
004E4913  6A 0A                     PUSH 0xa
004E4915  6A 04                     PUSH 0x4
004E4917  6A 0A                     PUSH 0xa
004E4919  6A 00                     PUSH 0x0
004E491B  E8 70 99 1C 00            CALL 0x006ae290
004E4920  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004E4923  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
004E4926  8D 14 D1                  LEA EDX,[ECX + EDX*0x8]
004E4929  8D 14 51                  LEA EDX,[ECX + EDX*0x2]
004E492C  C1 E2 04                  SHL EDX,0x4
004E492F  03 D1                     ADD EDX,ECX
004E4931  89 04 55 06 58 7F 00      MOV dword ptr [EDX*0x2 + 0x7f5806],EAX
LAB_004e4938:
004E4938  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
004E493B  8B 76 24                  MOV ESI,dword ptr [ESI + 0x24]
004E493E  8D 45 FC                  LEA EAX,[EBP + -0x4]
004E4941  8D 0C B6                  LEA ECX,[ESI + ESI*0x4]
004E4944  50                        PUSH EAX
004E4945  8D 14 CE                  LEA EDX,[ESI + ECX*0x8]
004E4948  8D 04 56                  LEA EAX,[ESI + EDX*0x2]
004E494B  C1 E0 04                  SHL EAX,0x4
004E494E  03 C6                     ADD EAX,ESI
004E4950  8B 0C 45 06 58 7F 00      MOV ECX,dword ptr [EAX*0x2 + 0x7f5806]
004E4957  51                        PUSH ECX
004E4958  E8 63 98 1C 00            CALL 0x006ae1c0
004E495D  33 C0                     XOR EAX,EAX
004E495F  5E                        POP ESI
004E4960  8B E5                     MOV ESP,EBP
004E4962  5D                        POP EBP
004E4963  C3                        RET
