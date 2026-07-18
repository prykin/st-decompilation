FUN_004dc150:
004DC150  55                        PUSH EBP
004DC151  8B EC                     MOV EBP,ESP
004DC153  51                        PUSH ECX
004DC154  56                        PUSH ESI
004DC155  8B F1                     MOV ESI,ECX
004DC157  8B 86 C0 04 00 00         MOV EAX,dword ptr [ESI + 0x4c0]
004DC15D  85 C0                     TEST EAX,EAX
004DC15F  74 58                     JZ 0x004dc1b9
004DC161  8B 8E 1F 06 00 00         MOV ECX,dword ptr [ESI + 0x61f]
004DC167  C7 86 C0 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4c0],0x0
004DC171  85 C9                     TEST ECX,ECX
004DC173  74 1E                     JZ 0x004dc193
004DC175  E8 74 88 F2 FF            CALL 0x004049ee
004DC17A  8B 86 1F 06 00 00         MOV EAX,dword ptr [ESI + 0x61f]
004DC180  50                        PUSH EAX
004DC181  E8 2A 21 25 00            CALL 0x0072e2b0
004DC186  83 C4 04                  ADD ESP,0x4
004DC189  C7 86 1F 06 00 00 00 00 00 00  MOV dword ptr [ESI + 0x61f],0x0
LAB_004dc193:
004DC193  8B 96 C4 04 00 00         MOV EDX,dword ptr [ESI + 0x4c4]
004DC199  8D 4D FC                  LEA ECX,[EBP + -0x4]
004DC19C  51                        PUSH ECX
004DC19D  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004DC1A3  52                        PUSH EDX
004DC1A4  E8 27 A1 20 00            CALL 0x006e62d0
004DC1A9  85 C0                     TEST EAX,EAX
004DC1AB  75 0C                     JNZ 0x004dc1b9
004DC1AD  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
004DC1B0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004DC1B3  50                        PUSH EAX
004DC1B4  E8 72 5A F2 FF            CALL 0x00401c2b
LAB_004dc1b9:
004DC1B9  5E                        POP ESI
004DC1BA  8B E5                     MOV ESP,EBP
004DC1BC  5D                        POP EBP
004DC1BD  C3                        RET
