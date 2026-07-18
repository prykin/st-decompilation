FUN_004e8dc0:
004E8DC0  55                        PUSH EBP
004E8DC1  8B EC                     MOV EBP,ESP
004E8DC3  51                        PUSH ECX
004E8DC4  56                        PUSH ESI
004E8DC5  8B F1                     MOV ESI,ECX
004E8DC7  8B 86 F8 04 00 00         MOV EAX,dword ptr [ESI + 0x4f8]
004E8DCD  85 C0                     TEST EAX,EAX
004E8DCF  75 57                     JNZ 0x004e8e28
004E8DD1  8B 86 D3 05 00 00         MOV EAX,dword ptr [ESI + 0x5d3]
004E8DD7  85 C0                     TEST EAX,EAX
004E8DD9  74 4D                     JZ 0x004e8e28
004E8DDB  8D 4D FC                  LEA ECX,[EBP + -0x4]
004E8DDE  51                        PUSH ECX
004E8DDF  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004E8DE5  50                        PUSH EAX
004E8DE6  E8 E5 D4 1F 00            CALL 0x006e62d0
004E8DEB  85 C0                     TEST EAX,EAX
004E8DED  75 39                     JNZ 0x004e8e28
004E8DEF  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004E8DF2  8B 11                     MOV EDX,dword ptr [ECX]
004E8DF4  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004E8DF7  83 F8 6C                  CMP EAX,0x6c
004E8DFA  75 2C                     JNZ 0x004e8e28
004E8DFC  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004E8DFF  56                        PUSH ESI
004E8E00  E8 F4 8D F1 FF            CALL 0x00401bf9
004E8E05  85 C0                     TEST EAX,EAX
004E8E07  74 1F                     JZ 0x004e8e28
004E8E09  8B 86 D3 05 00 00         MOV EAX,dword ptr [ESI + 0x5d3]
004E8E0F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004E8E12  89 86 F8 04 00 00         MOV dword ptr [ESI + 0x4f8],EAX
004E8E18  C7 86 FC 04 00 00 01 00 00 00  MOV dword ptr [ESI + 0x4fc],0x1
004E8E22  89 8E 1B 06 00 00         MOV dword ptr [ESI + 0x61b],ECX
LAB_004e8e28:
004E8E28  33 C0                     XOR EAX,EAX
004E8E2A  5E                        POP ESI
004E8E2B  8B E5                     MOV ESP,EBP
004E8E2D  5D                        POP EBP
004E8E2E  C3                        RET
