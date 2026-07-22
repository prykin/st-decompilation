TLOBaseTy::sub_004C2F70:
004C2F70  55                        PUSH EBP
004C2F71  8B EC                     MOV EBP,ESP
004C2F73  51                        PUSH ECX
004C2F74  56                        PUSH ESI
004C2F75  8B F1                     MOV ESI,ECX
004C2F77  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
004C2F7E  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004C2F84  8B 0C 85 B4 51 79 00      MOV ECX,dword ptr [EAX*0x4 + 0x7951b4]
004C2F8B  85 C9                     TEST ECX,ECX
004C2F8D  74 47                     JZ 0x004c2fd6
004C2F8F  8B 86 08 04 00 00         MOV EAX,dword ptr [ESI + 0x408]
004C2F95  85 C0                     TEST EAX,EAX
004C2F97  74 3D                     JZ 0x004c2fd6
004C2F99  8B 96 0C 04 00 00         MOV EDX,dword ptr [ESI + 0x40c]
004C2F9F  8D 4D FC                  LEA ECX,[EBP + -0x4]
004C2FA2  51                        PUSH ECX
004C2FA3  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004C2FA9  52                        PUSH EDX
004C2FAA  E8 21 33 22 00            CALL 0x006e62d0
004C2FAF  85 C0                     TEST EAX,EAX
004C2FB1  75 23                     JNZ 0x004c2fd6
004C2FB3  8B 86 1D 02 00 00         MOV EAX,dword ptr [ESI + 0x21d]
004C2FB9  85 C0                     TEST EAX,EAX
004C2FBB  74 11                     JZ 0x004c2fce
004C2FBD  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004C2FC0  6A 01                     PUSH 0x1
004C2FC2  E8 B9 05 F4 FF            CALL 0x00403580
004C2FC7  33 C0                     XOR EAX,EAX
004C2FC9  5E                        POP ESI
004C2FCA  8B E5                     MOV ESP,EBP
004C2FCC  5D                        POP EBP
004C2FCD  C3                        RET
LAB_004c2fce:
004C2FCE  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004C2FD1  E8 11 0D F4 FF            CALL 0x00403ce7
LAB_004c2fd6:
004C2FD6  33 C0                     XOR EAX,EAX
004C2FD8  5E                        POP ESI
004C2FD9  8B E5                     MOV ESP,EBP
004C2FDB  5D                        POP EBP
004C2FDC  C3                        RET
