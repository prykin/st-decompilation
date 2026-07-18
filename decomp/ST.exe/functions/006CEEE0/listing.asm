FUN_006ceee0:
006CEEE0  55                        PUSH EBP
006CEEE1  8B EC                     MOV EBP,ESP
006CEEE3  83 EC 20                  SUB ESP,0x20
006CEEE6  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006CEEE9  56                        PUSH ESI
006CEEEA  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006CEEED  C1 E0 04                  SHL EAX,0x4
006CEEF0  8D 4C 30 14               LEA ECX,[EAX + ESI*0x1 + 0x14]
006CEEF4  8B 54 30 14               MOV EDX,dword ptr [EAX + ESI*0x1 + 0x14]
006CEEF8  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
006CEEFB  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
006CEEFE  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006CEF01  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
006CEF04  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006CEF07  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CEF0A  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
006CEF0D  8D 4D F0                  LEA ECX,[EBP + -0x10]
006CEF10  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006CEF13  51                        PUSH ECX
006CEF14  8D 45 E0                  LEA EAX,[EBP + -0x20]
006CEF17  52                        PUSH EDX
006CEF18  50                        PUSH EAX
006CEF19  E8 92 0F 00 00            CALL 0x006cfeb0
006CEF1E  83 C4 0C                  ADD ESP,0xc
006CEF21  85 C0                     TEST EAX,EAX
006CEF23  74 2F                     JZ 0x006cef54
006CEF25  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
006CEF28  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
006CEF2B  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006CEF2E  6A 01                     PUSH 0x1
006CEF30  51                        PUSH ECX
006CEF31  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006CEF34  52                        PUSH EDX
006CEF35  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006CEF38  50                        PUSH EAX
006CEF39  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006CEF3C  51                        PUSH ECX
006CEF3D  8B 8E C0 01 00 00         MOV ECX,dword ptr [ESI + 0x1c0]
006CEF43  52                        PUSH EDX
006CEF44  50                        PUSH EAX
006CEF45  6A 64                     PUSH 0x64
006CEF47  51                        PUSH ECX
006CEF48  E8 83 2B 00 00            CALL 0x006d1ad0
006CEF4D  5E                        POP ESI
006CEF4E  8B E5                     MOV ESP,EBP
006CEF50  5D                        POP EBP
006CEF51  C2 0C 00                  RET 0xc
LAB_006cef54:
006CEF54  33 C0                     XOR EAX,EAX
006CEF56  5E                        POP ESI
006CEF57  8B E5                     MOV ESP,EBP
006CEF59  5D                        POP EBP
006CEF5A  C2 0C 00                  RET 0xc
