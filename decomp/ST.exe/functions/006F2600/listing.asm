cMf32::RecGetOrigLen:
006F2600  55                        PUSH EBP
006F2601  8B EC                     MOV EBP,ESP
006F2603  81 EC 54 01 00 00         SUB ESP,0x154
006F2609  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006F260E  56                        PUSH ESI
006F260F  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006F2612  57                        PUSH EDI
006F2613  8D 55 B4                  LEA EDX,[EBP + -0x4c]
006F2616  8D 4D B0                  LEA ECX,[EBP + -0x50]
006F2619  6A 00                     PUSH 0x0
006F261B  52                        PUSH EDX
006F261C  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006F2623  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
006F2626  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006F262C  E8 BF B1 03 00            CALL 0x0072d7f0
006F2631  8B F0                     MOV ESI,EAX
006F2633  83 C4 08                  ADD ESP,0x8
006F2636  85 F6                     TEST ESI,ESI
006F2638  0F 85 AB 00 00 00         JNZ 0x006f26e9
006F263E  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006F2641  83 C9 FF                  OR ECX,0xffffffff
006F2644  8B FE                     MOV EDI,ESI
006F2646  F2 AE                     SCASB.REPNE ES:EDI
006F2648  F7 D1                     NOT ECX
006F264A  83 C1 17                  ADD ECX,0x17
006F264D  51                        PUSH ECX
006F264E  E8 BD 85 FB FF            CALL 0x006aac10
006F2653  8A 4D 08                  MOV CL,byte ptr [EBP + 0x8]
006F2656  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006F2659  88 08                     MOV byte ptr [EAX],CL
006F265B  8B FE                     MOV EDI,ESI
006F265D  83 C9 FF                  OR ECX,0xffffffff
006F2660  33 C0                     XOR EAX,EAX
006F2662  F2 AE                     SCASB.REPNE ES:EDI
006F2664  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F2667  F7 D1                     NOT ECX
006F2669  49                        DEC ECX
006F266A  66 89 4A 16               MOV word ptr [EDX + 0x16],CX
006F266E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F2671  0F BF 48 16               MOVSX ECX,word ptr [EAX + 0x16]
006F2675  8D 78 18                  LEA EDI,[EAX + 0x18]
006F2678  8B C1                     MOV EAX,ECX
006F267A  C1 E9 02                  SHR ECX,0x2
006F267D  F3 A5                     MOVSD.REP ES:EDI,ESI
006F267F  8B C8                     MOV ECX,EAX
006F2681  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006F2684  83 E1 03                  AND ECX,0x3
006F2687  F3 A4                     MOVSB.REP ES:EDI,ESI
006F2689  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F268C  8D 4D F8                  LEA ECX,[EBP + -0x8]
006F268F  51                        PUSH ECX
006F2690  8B 08                     MOV ECX,dword ptr [EAX]
006F2692  52                        PUSH EDX
006F2693  8B 11                     MOV EDX,dword ptr [ECX]
006F2695  52                        PUSH EDX
006F2696  E8 C5 F4 05 00            CALL 0x00751b60
006F269B  83 F8 FC                  CMP EAX,-0x4
006F269E  75 17                     JNZ 0x006f26b7
006F26A0  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006F26A5  68 DD 02 00 00            PUSH 0x2dd
006F26AA  68 A4 FA 7E 00            PUSH 0x7efaa4
006F26AF  50                        PUSH EAX
006F26B0  6A FC                     PUSH -0x4
006F26B2  E8 89 37 FB FF            CALL 0x006a5e40
LAB_006f26b7:
006F26B7  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F26BA  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006F26BD  85 C9                     TEST ECX,ECX
006F26BF  8B 70 06                  MOV ESI,dword ptr [EAX + 0x6]
006F26C2  74 05                     JZ 0x006f26c9
006F26C4  8A 50 05                  MOV DL,byte ptr [EAX + 0x5]
006F26C7  88 11                     MOV byte ptr [ECX],DL
LAB_006f26c9:
006F26C9  85 C0                     TEST EAX,EAX
006F26CB  74 09                     JZ 0x006f26d6
006F26CD  8D 45 FC                  LEA EAX,[EBP + -0x4]
006F26D0  50                        PUSH EAX
006F26D1  E8 8A 89 FB FF            CALL 0x006ab060
LAB_006f26d6:
006F26D6  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
006F26D9  8B C6                     MOV EAX,ESI
006F26DB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006F26E1  5F                        POP EDI
006F26E2  5E                        POP ESI
006F26E3  8B E5                     MOV ESP,EBP
006F26E5  5D                        POP EBP
006F26E6  C2 10 00                  RET 0x10
LAB_006f26e9:
006F26E9  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006F26EC  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
006F26EF  85 C0                     TEST EAX,EAX
006F26F1  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006F26F7  75 0F                     JNZ 0x006f2708
006F26F9  83 FE FC                  CMP ESI,-0x4
006F26FC  75 0A                     JNZ 0x006f2708
006F26FE  8B C6                     MOV EAX,ESI
006F2700  5F                        POP EDI
006F2701  5E                        POP ESI
006F2702  8B E5                     MOV ESP,EBP
006F2704  5D                        POP EBP
006F2705  C2 10 00                  RET 0x10
LAB_006f2708:
006F2708  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006F270B  50                        PUSH EAX
006F270C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006F270F  25 FF 00 00 00            AND EAX,0xff
006F2714  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
006F2717  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006F271A  05 31 02 00 00            ADD EAX,0x231
006F271F  8D 14 4D A4 F0 7E 00      LEA EDX,[ECX*0x2 + 0x7ef0a4]
006F2726  8D 8D AC FE FF FF         LEA ECX,[EBP + 0xfffffeac]
006F272C  52                        PUSH EDX
006F272D  50                        PUSH EAX
006F272E  68 90 FC 7E 00            PUSH 0x7efc90
006F2733  51                        PUSH ECX
006F2734  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
006F273A  8D 95 AC FE FF FF         LEA EDX,[EBP + 0xfffffeac]
006F2740  52                        PUSH EDX
006F2741  68 CC 4C 7A 00            PUSH 0x7a4ccc
006F2746  56                        PUSH ESI
006F2747  6A 00                     PUSH 0x0
006F2749  68 E7 02 00 00            PUSH 0x2e7
006F274E  68 A4 FA 7E 00            PUSH 0x7efaa4
006F2753  E8 78 AD FB FF            CALL 0x006ad4d0
006F2758  83 C4 2C                  ADD ESP,0x2c
006F275B  85 C0                     TEST EAX,EAX
006F275D  74 01                     JZ 0x006f2760
006F275F  CC                        INT3
LAB_006f2760:
006F2760  68 E9 02 00 00            PUSH 0x2e9
006F2765  68 A4 FA 7E 00            PUSH 0x7efaa4
006F276A  6A 00                     PUSH 0x0
006F276C  56                        PUSH ESI
006F276D  E8 CE 36 FB FF            CALL 0x006a5e40
006F2772  85 F6                     TEST ESI,ESI
006F2774  7D 0A                     JGE 0x006f2780
006F2776  8B C6                     MOV EAX,ESI
006F2778  5F                        POP EDI
006F2779  5E                        POP ESI
006F277A  8B E5                     MOV ESP,EBP
006F277C  5D                        POP EBP
006F277D  C2 10 00                  RET 0x10
LAB_006f2780:
006F2780  5F                        POP EDI
006F2781  83 C8 FF                  OR EAX,0xffffffff
006F2784  5E                        POP ESI
006F2785  8B E5                     MOV ESP,EBP
006F2787  5D                        POP EBP
006F2788  C2 10 00                  RET 0x10
