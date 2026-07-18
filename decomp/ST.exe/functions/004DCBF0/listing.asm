FUN_004dcbf0:
004DCBF0  55                        PUSH EBP
004DCBF1  8B EC                     MOV EBP,ESP
004DCBF3  51                        PUSH ECX
004DCBF4  56                        PUSH ESI
004DCBF5  8B F1                     MOV ESI,ECX
004DCBF7  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004DCBFD  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
004DCC04  8B 96 F0 04 00 00         MOV EDX,dword ptr [ESI + 0x4f0]
004DCC0A  8B 81 E4 00 00 00         MOV EAX,dword ptr [ECX + 0xe4]
004DCC10  3B C2                     CMP EAX,EDX
004DCC12  72 37                     JC 0x004dcc4b
004DCC14  8B 86 EC 04 00 00         MOV EAX,dword ptr [ESI + 0x4ec]
004DCC1A  8D 55 FC                  LEA EDX,[EBP + -0x4]
004DCC1D  52                        PUSH EDX
004DCC1E  50                        PUSH EAX
004DCC1F  E8 AC 96 20 00            CALL 0x006e62d0
004DCC24  85 C0                     TEST EAX,EAX
004DCC26  75 0E                     JNZ 0x004dcc36
004DCC28  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004DCC2B  E8 F4 51 F2 FF            CALL 0x00401e24
004DCC30  89 86 CD 02 00 00         MOV dword ptr [ESI + 0x2cd],EAX
LAB_004dcc36:
004DCC36  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004DCC3C  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
004DCC42  83 C2 19                  ADD EDX,0x19
004DCC45  89 96 F0 04 00 00         MOV dword ptr [ESI + 0x4f0],EDX
LAB_004dcc4b:
004DCC4B  33 C0                     XOR EAX,EAX
004DCC4D  5E                        POP ESI
004DCC4E  8B E5                     MOV ESP,EBP
004DCC50  5D                        POP EBP
004DCC51  C3                        RET
