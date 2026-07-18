FUN_00719a60:
00719A60  55                        PUSH EBP
00719A61  8B EC                     MOV EBP,ESP
00719A63  83 EC 0C                  SUB ESP,0xc
00719A66  56                        PUSH ESI
00719A67  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
00719A6A  8B 0E                     MOV ECX,dword ptr [ESI]
00719A6C  85 C9                     TEST ECX,ECX
00719A6E  75 0A                     JNZ 0x00719a7a
00719A70  B8 01 00 00 00            MOV EAX,0x1
00719A75  5E                        POP ESI
00719A76  8B E5                     MOV ESP,EBP
00719A78  5D                        POP EBP
00719A79  C3                        RET
LAB_00719a7a:
00719A7A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00719A7D  33 C0                     XOR EAX,EAX
00719A7F  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00719A82  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00719A85  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00719A88  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00719A8B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00719A8E  8B D0                     MOV EDX,EAX
00719A90  81 E2 FF 00 00 00         AND EDX,0xff
00719A96  FE C0                     INC AL
00719A98  25 FF 00 00 00            AND EAX,0xff
00719A9D  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00719AA0  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00719AA3  8D 45 F4                  LEA EAX,[EBP + -0xc]
00719AA6  50                        PUSH EAX
00719AA7  6A 0D                     PUSH 0xd
00719AA9  68 06 08 00 00            PUSH 0x806
00719AAE  51                        PUSH ECX
00719AAF  FF 15 C0 BE 85 00         CALL dword ptr [0x0085bec0]
00719AB5  85 C0                     TEST EAX,EAX
00719AB7  74 14                     JZ 0x00719acd
00719AB9  56                        PUSH ESI
00719ABA  50                        PUSH EAX
00719ABB  E8 D0 01 00 00            CALL 0x00719c90
00719AC0  83 C4 08                  ADD ESP,0x8
00719AC3  B8 01 00 00 00            MOV EAX,0x1
00719AC8  5E                        POP ESI
00719AC9  8B E5                     MOV ESP,EBP
00719ACB  5D                        POP EBP
00719ACC  C3                        RET
LAB_00719acd:
00719ACD  33 C0                     XOR EAX,EAX
00719ACF  5E                        POP ESI
00719AD0  8B E5                     MOV ESP,EBP
00719AD2  5D                        POP EBP
00719AD3  C3                        RET
