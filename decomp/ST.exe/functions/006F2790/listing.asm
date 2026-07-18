FUN_006f2790:
006F2790  55                        PUSH EBP
006F2791  8B EC                     MOV EBP,ESP
006F2793  83 EC 48                  SUB ESP,0x48
006F2796  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006F279B  56                        PUSH ESI
006F279C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006F279F  57                        PUSH EDI
006F27A0  8D 55 BC                  LEA EDX,[EBP + -0x44]
006F27A3  8D 4D B8                  LEA ECX,[EBP + -0x48]
006F27A6  6A 00                     PUSH 0x0
006F27A8  52                        PUSH EDX
006F27A9  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006F27AC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006F27B2  E8 39 B0 03 00            CALL 0x0072d7f0
006F27B7  8B F0                     MOV ESI,EAX
006F27B9  83 C4 08                  ADD ESP,0x8
006F27BC  85 F6                     TEST ESI,ESI
006F27BE  75 52                     JNZ 0x006f2812
006F27C0  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006F27C3  B9 86 00 00 00            MOV ECX,0x86
006F27C8  6A 00                     PUSH 0x0
006F27CA  6A 00                     PUSH 0x0
006F27CC  8D 56 18                  LEA EDX,[ESI + 0x18]
006F27CF  8B FA                     MOV EDI,EDX
006F27D1  52                        PUSH EDX
006F27D2  F3 AB                     STOSD.REP ES:EDI
006F27D4  AA                        STOSB ES:EDI
006F27D5  8B 06                     MOV EAX,dword ptr [ESI]
006F27D7  50                        PUSH EAX
006F27D8  E8 C3 F3 05 00            CALL 0x00751ba0
006F27DD  83 F8 FC                  CMP EAX,-0x4
006F27E0  75 11                     JNZ 0x006f27f3
006F27E2  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
006F27E5  33 C0                     XOR EAX,EAX
006F27E7  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006F27ED  5F                        POP EDI
006F27EE  5E                        POP ESI
006F27EF  8B E5                     MOV ESP,EBP
006F27F1  5D                        POP EBP
006F27F2  C3                        RET
LAB_006f27f3:
006F27F3  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
006F27F6  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006F27FC  0F BF 46 2E               MOVSX EAX,word ptr [ESI + 0x2e]
006F2800  C6 44 30 30 00            MOV byte ptr [EAX + ESI*0x1 + 0x30],0x0
006F2805  8D 4C 30 30               LEA ECX,[EAX + ESI*0x1 + 0x30]
006F2809  8D 46 30                  LEA EAX,[ESI + 0x30]
006F280C  5F                        POP EDI
006F280D  5E                        POP ESI
006F280E  8B E5                     MOV ESP,EBP
006F2810  5D                        POP EBP
006F2811  C3                        RET
LAB_006f2812:
006F2812  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
006F2815  68 C8 FC 7E 00            PUSH 0x7efcc8
006F281A  68 CC 4C 7A 00            PUSH 0x7a4ccc
006F281F  56                        PUSH ESI
006F2820  6A 00                     PUSH 0x0
006F2822  68 02 03 00 00            PUSH 0x302
006F2827  68 A4 FA 7E 00            PUSH 0x7efaa4
006F282C  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006F2832  E8 99 AC FB FF            CALL 0x006ad4d0
006F2837  83 C4 18                  ADD ESP,0x18
006F283A  85 C0                     TEST EAX,EAX
006F283C  74 01                     JZ 0x006f283f
006F283E  CC                        INT3
LAB_006f283f:
006F283F  68 04 03 00 00            PUSH 0x304
006F2844  68 A4 FA 7E 00            PUSH 0x7efaa4
006F2849  6A 00                     PUSH 0x0
006F284B  56                        PUSH ESI
006F284C  E8 EF 35 FB FF            CALL 0x006a5e40
006F2851  5F                        POP EDI
006F2852  33 C0                     XOR EAX,EAX
006F2854  5E                        POP ESI
006F2855  8B E5                     MOV ESP,EBP
006F2857  5D                        POP EBP
006F2858  C3                        RET
