FUN_00719650:
00719650  55                        PUSH EBP
00719651  8B EC                     MOV EBP,ESP
00719653  83 EC 10                  SUB ESP,0x10
00719656  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00719659  8B 00                     MOV EAX,dword ptr [EAX]
0071965B  85 C0                     TEST EAX,EAX
0071965D  75 04                     JNZ 0x00719663
0071965F  8B E5                     MOV ESP,EBP
00719661  5D                        POP EBP
00719662  C3                        RET
LAB_00719663:
00719663  33 C9                     XOR ECX,ECX
00719665  8D 55 F0                  LEA EDX,[EBP + -0x10]
00719668  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0071966B  52                        PUSH EDX
0071966C  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0071966F  68 02 01 00 00            PUSH 0x102
00719674  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00719677  68 14 08 00 00            PUSH 0x814
0071967C  50                        PUSH EAX
0071967D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00719680  C7 45 F8 04 00 00 00      MOV dword ptr [EBP + -0x8],0x4
00719687  FF 15 C0 BE 85 00         CALL dword ptr [0x0085bec0]
0071968D  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00719690  33 C0                     XOR EAX,EAX
00719692  81 F9 0E 02 00 00         CMP ECX,0x20e
00719698  0F 94 C0                  SETZ AL
0071969B  8B E5                     MOV ESP,EBP
0071969D  5D                        POP EBP
0071969E  C3                        RET
