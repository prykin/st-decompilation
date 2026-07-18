FUN_006b3070:
006B3070  55                        PUSH EBP
006B3071  8B EC                     MOV EBP,ESP
006B3073  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006B3076  56                        PUSH ESI
006B3077  85 D2                     TEST EDX,EDX
006B3079  7D 41                     JGE 0x006b30bc
006B307B  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006B307E  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B3081  3B 81 A0 01 00 00         CMP EAX,dword ptr [ECX + 0x1a0]
006B3087  73 33                     JNC 0x006b30bc
006B3089  8B B1 B0 01 00 00         MOV ESI,dword ptr [ECX + 0x1b0]
006B308F  8B 04 86                  MOV EAX,dword ptr [ESI + EAX*0x4]
006B3092  8B 30                     MOV ESI,dword ptr [EAX]
006B3094  81 E6 00 80 00 04         AND ESI,0x4008000
006B309A  81 FE 00 80 00 04         CMP ESI,0x4008000
006B30A0  75 1A                     JNZ 0x006b30bc
006B30A2  8B 80 D0 00 00 00         MOV EAX,dword ptr [EAX + 0xd0]
006B30A8  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006B30AB  8B 04 B0                  MOV EAX,dword ptr [EAX + ESI*0x4]
006B30AE  85 C0                     TEST EAX,EAX
006B30B0  7C 0A                     JL 0x006b30bc
006B30B2  F7 DA                     NEG EDX
006B30B4  52                        PUSH EDX
006B30B5  50                        PUSH EAX
006B30B6  51                        PUSH ECX
006B30B7  E8 64 EF FF FF            CALL 0x006b2020
LAB_006b30bc:
006B30BC  5E                        POP ESI
006B30BD  5D                        POP EBP
006B30BE  C2 10 00                  RET 0x10
