FUN_004e4480:
004E4480  55                        PUSH EBP
004E4481  8B EC                     MOV EBP,ESP
004E4483  51                        PUSH ECX
004E4484  56                        PUSH ESI
004E4485  8B F1                     MOV ESI,ECX
004E4487  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004E448A  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004E448D  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004E4490  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004E4493  C1 E1 04                  SHL ECX,0x4
004E4496  03 C8                     ADD ECX,EAX
004E4498  8B 04 4D F6 57 7F 00      MOV EAX,dword ptr [ECX*0x2 + 0x7f57f6]
004E449F  85 C0                     TEST EAX,EAX
004E44A1  75 25                     JNZ 0x004e44c8
004E44A3  6A 0A                     PUSH 0xa
004E44A5  6A 04                     PUSH 0x4
004E44A7  6A 0A                     PUSH 0xa
004E44A9  6A 00                     PUSH 0x0
004E44AB  E8 E0 9D 1C 00            CALL 0x006ae290
004E44B0  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004E44B3  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
004E44B6  8D 14 D1                  LEA EDX,[ECX + EDX*0x8]
004E44B9  8D 14 51                  LEA EDX,[ECX + EDX*0x2]
004E44BC  C1 E2 04                  SHL EDX,0x4
004E44BF  03 D1                     ADD EDX,ECX
004E44C1  89 04 55 F6 57 7F 00      MOV dword ptr [EDX*0x2 + 0x7f57f6],EAX
LAB_004e44c8:
004E44C8  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
004E44CB  8B 76 24                  MOV ESI,dword ptr [ESI + 0x24]
004E44CE  8D 45 FC                  LEA EAX,[EBP + -0x4]
004E44D1  8D 0C B6                  LEA ECX,[ESI + ESI*0x4]
004E44D4  50                        PUSH EAX
004E44D5  8D 14 CE                  LEA EDX,[ESI + ECX*0x8]
004E44D8  8D 04 56                  LEA EAX,[ESI + EDX*0x2]
004E44DB  C1 E0 04                  SHL EAX,0x4
004E44DE  03 C6                     ADD EAX,ESI
004E44E0  8B 0C 45 F6 57 7F 00      MOV ECX,dword ptr [EAX*0x2 + 0x7f57f6]
004E44E7  51                        PUSH ECX
004E44E8  E8 D3 9C 1C 00            CALL 0x006ae1c0
004E44ED  33 C0                     XOR EAX,EAX
004E44EF  5E                        POP ESI
004E44F0  8B E5                     MOV ESP,EBP
004E44F2  5D                        POP EBP
004E44F3  C3                        RET
