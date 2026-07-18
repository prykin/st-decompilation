FUN_006d0150:
006D0150  55                        PUSH EBP
006D0151  8B EC                     MOV EBP,ESP
006D0153  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006D0156  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006D0159  3B 81 A0 01 00 00         CMP EAX,dword ptr [ECX + 0x1a0]
006D015F  0F 83 88 00 00 00         JNC 0x006d01ed
006D0165  8B 89 B0 01 00 00         MOV ECX,dword ptr [ECX + 0x1b0]
006D016B  8B 04 81                  MOV EAX,dword ptr [ECX + EAX*0x4]
006D016E  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
006D0171  8B 10                     MOV EDX,dword ptr [EAX]
006D0173  81 E2 00 C0 00 00         AND EDX,0xc000
006D0179  81 FA 00 C0 00 00         CMP EDX,0xc000
006D017F  75 6C                     JNZ 0x006d01ed
006D0181  53                        PUSH EBX
006D0182  56                        PUSH ESI
006D0183  8B B0 C0 00 00 00         MOV ESI,dword ptr [EAX + 0xc0]
006D0189  57                        PUSH EDI
006D018A  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006D018D  83 C9 FF                  OR ECX,0xffffffff
006D0190  33 C0                     XOR EAX,EAX
006D0192  F2 AE                     SCASB.REPNE ES:EDI
006D0194  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
006D0197  8D 7E 14                  LEA EDI,[ESI + 0x14]
006D019A  F7 D1                     NOT ECX
006D019C  49                        DEC ECX
006D019D  8B D9                     MOV EBX,ECX
006D019F  3B D8                     CMP EBX,EAX
006D01A1  7E 1E                     JLE 0x006d01c1
006D01A3  8D 43 19                  LEA EAX,[EBX + 0x19]
006D01A6  50                        PUSH EAX
006D01A7  56                        PUSH ESI
006D01A8  E8 A3 F9 FE FF            CALL 0x006bfb50
006D01AD  85 C0                     TEST EAX,EAX
006D01AF  74 10                     JZ 0x006d01c1
006D01B1  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006D01B4  8D 78 14                  LEA EDI,[EAX + 0x14]
006D01B7  8B F0                     MOV ESI,EAX
006D01B9  89 81 C0 00 00 00         MOV dword ptr [ECX + 0xc0],EAX
006D01BF  89 1F                     MOV dword ptr [EDI],EBX
LAB_006d01c1:
006D01C1  8B 17                     MOV EDX,dword ptr [EDI]
006D01C3  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006D01C6  52                        PUSH EDX
006D01C7  8D 4E 18                  LEA ECX,[ESI + 0x18]
006D01CA  50                        PUSH EAX
006D01CB  51                        PUSH ECX
006D01CC  E8 6F E1 05 00            CALL 0x0072e340
006D01D1  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
006D01D4  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006D01D7  8B 0E                     MOV ECX,dword ptr [ESI]
006D01D9  83 C4 0C                  ADD ESP,0xc
006D01DC  52                        PUSH EDX
006D01DD  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006D01E0  50                        PUSH EAX
006D01E1  6A FF                     PUSH -0x1
006D01E3  51                        PUSH ECX
006D01E4  52                        PUSH EDX
006D01E5  E8 56 34 FE FF            CALL 0x006b3640
006D01EA  5F                        POP EDI
006D01EB  5E                        POP ESI
006D01EC  5B                        POP EBX
LAB_006d01ed:
006D01ED  5D                        POP EBP
006D01EE  C2 0C 00                  RET 0xc
