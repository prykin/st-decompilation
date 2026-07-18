FUN_006f3110:
006F3110  55                        PUSH EBP
006F3111  8B EC                     MOV EBP,ESP
006F3113  83 EC 50                  SUB ESP,0x50
006F3116  33 C0                     XOR EAX,EAX
006F3118  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
006F311E  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006F3121  56                        PUSH ESI
006F3122  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006F3125  8D 55 B0                  LEA EDX,[EBP + -0x50]
006F3128  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006F312B  8D 45 B4                  LEA EAX,[EBP + -0x4c]
006F312E  6A 00                     PUSH 0x0
006F3130  50                        PUSH EAX
006F3131  89 4D B0                  MOV dword ptr [EBP + -0x50],ECX
006F3134  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006F313A  E8 B1 A6 03 00            CALL 0x0072d7f0
006F313F  8B F0                     MOV ESI,EAX
006F3141  83 C4 08                  ADD ESP,0x8
006F3144  85 F6                     TEST ESI,ESI
006F3146  75 2E                     JNZ 0x006f3176
006F3148  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006F314B  50                        PUSH EAX
006F314C  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006F314F  8D 55 F4                  LEA EDX,[EBP + -0xc]
006F3152  51                        PUSH ECX
006F3153  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006F3156  52                        PUSH EDX
006F3157  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006F315A  50                        PUSH EAX
006F315B  51                        PUSH ECX
006F315C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006F315F  52                        PUSH EDX
006F3160  6A 0C                     PUSH 0xc
006F3162  E8 89 E2 FF FF            CALL 0x006f13f0
006F3167  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
006F316A  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006F316F  33 C0                     XOR EAX,EAX
006F3171  5E                        POP ESI
006F3172  8B E5                     MOV ESP,EBP
006F3174  5D                        POP EBP
006F3175  C3                        RET
LAB_006f3176:
006F3176  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
006F3179  68 84 FD 7E 00            PUSH 0x7efd84
006F317E  68 CC 4C 7A 00            PUSH 0x7a4ccc
006F3183  56                        PUSH ESI
006F3184  6A 00                     PUSH 0x0
006F3186  68 8E 00 00 00            PUSH 0x8e
006F318B  68 3C FD 7E 00            PUSH 0x7efd3c
006F3190  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006F3196  E8 35 A3 FB FF            CALL 0x006ad4d0
006F319B  83 C4 18                  ADD ESP,0x18
006F319E  85 C0                     TEST EAX,EAX
006F31A0  74 01                     JZ 0x006f31a3
006F31A2  CC                        INT3
LAB_006f31a3:
006F31A3  68 90 00 00 00            PUSH 0x90
006F31A8  68 3C FD 7E 00            PUSH 0x7efd3c
006F31AD  6A 00                     PUSH 0x0
006F31AF  56                        PUSH ESI
006F31B0  E8 8B 2C FB FF            CALL 0x006a5e40
006F31B5  85 F6                     TEST ESI,ESI
006F31B7  7D 07                     JGE 0x006f31c0
006F31B9  8B C6                     MOV EAX,ESI
006F31BB  5E                        POP ESI
006F31BC  8B E5                     MOV ESP,EBP
006F31BE  5D                        POP EBP
006F31BF  C3                        RET
LAB_006f31c0:
006F31C0  83 C8 FF                  OR EAX,0xffffffff
006F31C3  5E                        POP ESI
006F31C4  8B E5                     MOV ESP,EBP
006F31C6  5D                        POP EBP
006F31C7  C3                        RET
