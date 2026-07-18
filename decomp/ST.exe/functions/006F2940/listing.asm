FUN_006f2940:
006F2940  55                        PUSH EBP
006F2941  8B EC                     MOV EBP,ESP
006F2943  83 EC 48                  SUB ESP,0x48
006F2946  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006F294B  56                        PUSH ESI
006F294C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006F294F  57                        PUSH EDI
006F2950  8D 55 BC                  LEA EDX,[EBP + -0x44]
006F2953  8D 4D B8                  LEA ECX,[EBP + -0x48]
006F2956  6A 00                     PUSH 0x0
006F2958  52                        PUSH EDX
006F2959  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006F295C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006F2962  E8 89 AE 03 00            CALL 0x0072d7f0
006F2967  8B F0                     MOV ESI,EAX
006F2969  83 C4 08                  ADD ESP,0x8
006F296C  85 F6                     TEST ESI,ESI
006F296E  75 52                     JNZ 0x006f29c2
006F2970  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006F2973  B9 86 00 00 00            MOV ECX,0x86
006F2978  6A 00                     PUSH 0x0
006F297A  6A 00                     PUSH 0x0
006F297C  8D 56 18                  LEA EDX,[ESI + 0x18]
006F297F  8B FA                     MOV EDI,EDX
006F2981  52                        PUSH EDX
006F2982  F3 AB                     STOSD.REP ES:EDI
006F2984  AA                        STOSB ES:EDI
006F2985  8B 06                     MOV EAX,dword ptr [ESI]
006F2987  50                        PUSH EAX
006F2988  E8 63 F2 05 00            CALL 0x00751bf0
006F298D  83 F8 FC                  CMP EAX,-0x4
006F2990  75 11                     JNZ 0x006f29a3
006F2992  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
006F2995  33 C0                     XOR EAX,EAX
006F2997  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006F299D  5F                        POP EDI
006F299E  5E                        POP ESI
006F299F  8B E5                     MOV ESP,EBP
006F29A1  5D                        POP EBP
006F29A2  C3                        RET
LAB_006f29a3:
006F29A3  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
006F29A6  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006F29AC  0F BF 46 2E               MOVSX EAX,word ptr [ESI + 0x2e]
006F29B0  C6 44 30 30 00            MOV byte ptr [EAX + ESI*0x1 + 0x30],0x0
006F29B5  8D 4C 30 30               LEA ECX,[EAX + ESI*0x1 + 0x30]
006F29B9  8D 46 30                  LEA EAX,[ESI + 0x30]
006F29BC  5F                        POP EDI
006F29BD  5E                        POP ESI
006F29BE  8B E5                     MOV ESP,EBP
006F29C0  5D                        POP EBP
006F29C1  C3                        RET
LAB_006f29c2:
006F29C2  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
006F29C5  68 F8 FC 7E 00            PUSH 0x7efcf8
006F29CA  68 CC 4C 7A 00            PUSH 0x7a4ccc
006F29CF  56                        PUSH ESI
006F29D0  6A 00                     PUSH 0x0
006F29D2  68 3B 03 00 00            PUSH 0x33b
006F29D7  68 A4 FA 7E 00            PUSH 0x7efaa4
006F29DC  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006F29E2  E8 E9 AA FB FF            CALL 0x006ad4d0
006F29E7  83 C4 18                  ADD ESP,0x18
006F29EA  85 C0                     TEST EAX,EAX
006F29EC  74 01                     JZ 0x006f29ef
006F29EE  CC                        INT3
LAB_006f29ef:
006F29EF  68 3D 03 00 00            PUSH 0x33d
006F29F4  68 A4 FA 7E 00            PUSH 0x7efaa4
006F29F9  6A 00                     PUSH 0x0
006F29FB  56                        PUSH ESI
006F29FC  E8 3F 34 FB FF            CALL 0x006a5e40
006F2A01  5F                        POP EDI
006F2A02  33 C0                     XOR EAX,EAX
006F2A04  5E                        POP ESI
006F2A05  8B E5                     MOV ESP,EBP
006F2A07  5D                        POP EBP
006F2A08  C3                        RET
