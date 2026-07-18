FUN_004e3120:
004E3120  55                        PUSH EBP
004E3121  8B EC                     MOV EBP,ESP
004E3123  83 EC 20                  SUB ESP,0x20
004E3126  56                        PUSH ESI
004E3127  8B F1                     MOV ESI,ECX
004E3129  83 BE 61 03 00 00 02      CMP dword ptr [ESI + 0x361],0x2
004E3130  0F 85 8B 00 00 00         JNZ 0x004e31c1
004E3136  8B 86 69 03 00 00         MOV EAX,dword ptr [ESI + 0x369]
004E313C  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004E313F  50                        PUSH EAX
004E3140  51                        PUSH ECX
004E3141  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E3147  E8 1A EC F1 FF            CALL 0x00401d66
004E314C  A1 BC 17 81 00            MOV EAX,[0x008117bc]
004E3151  85 C0                     TEST EAX,EAX
004E3153  74 59                     JZ 0x004e31ae
004E3155  66 8B 56 24               MOV DX,word ptr [ESI + 0x24]
004E3159  57                        PUSH EDI
004E315A  B9 08 00 00 00            MOV ECX,0x8
004E315F  33 C0                     XOR EAX,EAX
004E3161  8D 7D E0                  LEA EDI,[EBP + -0x20]
004E3164  F3 AB                     STOSD.REP ES:EDI
004E3166  66 8B 46 32               MOV AX,word ptr [ESI + 0x32]
004E316A  66 8B 8E 69 03 00 00      MOV CX,word ptr [ESI + 0x369]
004E3171  66 89 55 F4               MOV word ptr [EBP + -0xc],DX
004E3175  8B 96 69 03 00 00         MOV EDX,dword ptr [ESI + 0x369]
004E317B  66 89 45 F6               MOV word ptr [EBP + -0xa],AX
004E317F  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004E3182  66 89 4D F8               MOV word ptr [EBP + -0x8],CX
004E3186  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E318C  52                        PUSH EDX
004E318D  50                        PUSH EAX
004E318E  C7 45 F0 E8 5D 00 00      MOV dword ptr [EBP + -0x10],0x5de8
004E3195  E8 D1 E6 F1 FF            CALL 0x0040186b
004E319A  8B 0D BC 17 81 00         MOV ECX,dword ptr [0x008117bc]
004E31A0  40                        INC EAX
004E31A1  66 89 45 FA               MOV word ptr [EBP + -0x6],AX
004E31A5  8D 45 E0                  LEA EAX,[EBP + -0x20]
004E31A8  8B 11                     MOV EDX,dword ptr [ECX]
004E31AA  50                        PUSH EAX
004E31AB  FF 12                     CALL dword ptr [EDX]
004E31AD  5F                        POP EDI
LAB_004e31ae:
004E31AE  6A 01                     PUSH 0x1
004E31B0  8B CE                     MOV ECX,ESI
004E31B2  C7 86 D0 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4d0],0x0
004E31BC  E8 36 FB F1 FF            CALL 0x00402cf7
LAB_004e31c1:
004E31C1  B8 01 00 00 00            MOV EAX,0x1
004E31C6  5E                        POP ESI
004E31C7  8B E5                     MOV ESP,EBP
004E31C9  5D                        POP EBP
004E31CA  C3                        RET
