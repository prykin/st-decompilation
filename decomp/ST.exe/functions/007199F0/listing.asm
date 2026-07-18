FUN_007199f0:
007199F0  55                        PUSH EBP
007199F1  8B EC                     MOV EBP,ESP
007199F3  83 EC 0C                  SUB ESP,0xc
007199F6  56                        PUSH ESI
007199F7  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
007199FA  8B 06                     MOV EAX,dword ptr [ESI]
007199FC  85 C0                     TEST EAX,EAX
007199FE  75 0A                     JNZ 0x00719a0a
00719A00  B8 01 00 00 00            MOV EAX,0x1
00719A05  5E                        POP ESI
00719A06  8B E5                     MOV ESP,EBP
00719A08  5D                        POP EBP
00719A09  C3                        RET
LAB_00719a0a:
00719A0A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00719A0D  33 C9                     XOR ECX,ECX
00719A0F  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00719A12  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00719A15  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00719A18  8D 55 F4                  LEA EDX,[EBP + -0xc]
00719A1B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00719A1E  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00719A21  52                        PUSH EDX
00719A22  6A 05                     PUSH 0x5
00719A24  81 E1 FF 00 00 00         AND ECX,0xff
00719A2A  68 06 08 00 00            PUSH 0x806
00719A2F  50                        PUSH EAX
00719A30  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00719A33  FF 15 C0 BE 85 00         CALL dword ptr [0x0085bec0]
00719A39  85 C0                     TEST EAX,EAX
00719A3B  74 14                     JZ 0x00719a51
00719A3D  56                        PUSH ESI
00719A3E  50                        PUSH EAX
00719A3F  E8 4C 02 00 00            CALL 0x00719c90
00719A44  83 C4 08                  ADD ESP,0x8
00719A47  B8 01 00 00 00            MOV EAX,0x1
00719A4C  5E                        POP ESI
00719A4D  8B E5                     MOV ESP,EBP
00719A4F  5D                        POP EBP
00719A50  C3                        RET
LAB_00719a51:
00719A51  33 C0                     XOR EAX,EAX
00719A53  5E                        POP ESI
00719A54  8B E5                     MOV ESP,EBP
00719A56  5D                        POP EBP
00719A57  C3                        RET
