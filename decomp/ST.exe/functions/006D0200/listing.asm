FUN_006d0200:
006D0200  55                        PUSH EBP
006D0201  8B EC                     MOV EBP,ESP
006D0203  81 EC 00 02 00 00         SUB ESP,0x200
006D0209  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006D020C  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006D020F  3B 81 A0 01 00 00         CMP EAX,dword ptr [ECX + 0x1a0]
006D0215  0F 83 B2 00 00 00         JNC 0x006d02cd
006D021B  8B 89 B0 01 00 00         MOV ECX,dword ptr [ECX + 0x1b0]
006D0221  8B 04 81                  MOV EAX,dword ptr [ECX + EAX*0x4]
006D0224  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
006D0227  8B 10                     MOV EDX,dword ptr [EAX]
006D0229  81 E2 00 C0 00 00         AND EDX,0xc000
006D022F  81 FA 00 C0 00 00         CMP EDX,0xc000
006D0235  0F 85 92 00 00 00         JNZ 0x006d02cd
006D023B  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006D023E  53                        PUSH EBX
006D023F  56                        PUSH ESI
006D0240  8B B0 C0 00 00 00         MOV ESI,dword ptr [EAX + 0xc0]
006D0246  8D 45 14                  LEA EAX,[EBP + 0x14]
006D0249  57                        PUSH EDI
006D024A  50                        PUSH EAX
006D024B  51                        PUSH ECX
006D024C  8D 95 00 FE FF FF         LEA EDX,[EBP + 0xfffffe00]
006D0252  68 FF 01 00 00            PUSH 0x1ff
006D0257  52                        PUSH EDX
006D0258  E8 83 FE 05 00            CALL 0x007300e0
006D025D  8D BD 00 FE FF FF         LEA EDI,[EBP + 0xfffffe00]
006D0263  83 C9 FF                  OR ECX,0xffffffff
006D0266  33 C0                     XOR EAX,EAX
006D0268  83 C4 10                  ADD ESP,0x10
006D026B  C6 45 FF 00               MOV byte ptr [EBP + -0x1],0x0
006D026F  F2 AE                     SCASB.REPNE ES:EDI
006D0271  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
006D0274  8D 7E 14                  LEA EDI,[ESI + 0x14]
006D0277  F7 D1                     NOT ECX
006D0279  49                        DEC ECX
006D027A  8B D9                     MOV EBX,ECX
006D027C  3B D8                     CMP EBX,EAX
006D027E  7E 1E                     JLE 0x006d029e
006D0280  8D 43 19                  LEA EAX,[EBX + 0x19]
006D0283  50                        PUSH EAX
006D0284  56                        PUSH ESI
006D0285  E8 C6 F8 FE FF            CALL 0x006bfb50
006D028A  85 C0                     TEST EAX,EAX
006D028C  74 10                     JZ 0x006d029e
006D028E  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006D0291  8D 78 14                  LEA EDI,[EAX + 0x14]
006D0294  8B F0                     MOV ESI,EAX
006D0296  89 81 C0 00 00 00         MOV dword ptr [ECX + 0xc0],EAX
006D029C  89 1F                     MOV dword ptr [EDI],EBX
LAB_006d029e:
006D029E  8B 17                     MOV EDX,dword ptr [EDI]
006D02A0  8D 85 00 FE FF FF         LEA EAX,[EBP + 0xfffffe00]
006D02A6  52                        PUSH EDX
006D02A7  8D 4E 18                  LEA ECX,[ESI + 0x18]
006D02AA  50                        PUSH EAX
006D02AB  51                        PUSH ECX
006D02AC  E8 8F E0 05 00            CALL 0x0072e340
006D02B1  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
006D02B4  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006D02B7  8B 0E                     MOV ECX,dword ptr [ESI]
006D02B9  83 C4 0C                  ADD ESP,0xc
006D02BC  52                        PUSH EDX
006D02BD  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006D02C0  50                        PUSH EAX
006D02C1  6A FF                     PUSH -0x1
006D02C3  51                        PUSH ECX
006D02C4  52                        PUSH EDX
006D02C5  E8 76 33 FE FF            CALL 0x006b3640
006D02CA  5F                        POP EDI
006D02CB  5E                        POP ESI
006D02CC  5B                        POP EBX
LAB_006d02cd:
006D02CD  8B E5                     MOV ESP,EBP
006D02CF  5D                        POP EBP
006D02D0  C3                        RET
