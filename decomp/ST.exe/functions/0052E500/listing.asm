OptPanelTy::PreInitOptPanel:
0052E500  55                        PUSH EBP
0052E501  8B EC                     MOV EBP,ESP
0052E503  83 EC 48                  SUB ESP,0x48
0052E506  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0052E50B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0052E50E  56                        PUSH ESI
0052E50F  8D 55 BC                  LEA EDX,[EBP + -0x44]
0052E512  8D 4D B8                  LEA ECX,[EBP + -0x48]
0052E515  6A 00                     PUSH 0x0
0052E517  52                        PUSH EDX
0052E518  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0052E51B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0052E521  E8 CA F2 1F 00            CALL 0x0072d7f0
0052E526  8B F0                     MOV ESI,EAX
0052E528  83 C4 08                  ADD ESP,0x8
0052E52B  85 F6                     TEST ESI,ESI
0052E52D  75 39                     JNZ 0x0052e568
0052E52F  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0052E532  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0052E538  8D 46 4C                  LEA EAX,[ESI + 0x4c]
0052E53B  50                        PUSH EAX
0052E53C  6A 00                     PUSH 0x0
0052E53E  6A 03                     PUSH 0x3
0052E540  51                        PUSH ECX
0052E541  E8 0A 35 18 00            CALL 0x006b1a50
0052E546  8B 46 50                  MOV EAX,dword ptr [ESI + 0x50]
0052E549  8B 4E 48                  MOV ECX,dword ptr [ESI + 0x48]
0052E54C  8B D0                     MOV EDX,EAX
0052E54E  2B D1                     SUB EDX,ECX
0052E550  03 C8                     ADD ECX,EAX
0052E552  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0052E555  89 56 44                  MOV dword ptr [ESI + 0x44],EDX
0052E558  89 8E 74 01 00 00         MOV dword ptr [ESI + 0x174],ECX
0052E55E  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0052E563  5E                        POP ESI
0052E564  8B E5                     MOV ESP,EBP
0052E566  5D                        POP EBP
0052E567  C3                        RET
LAB_0052e568:
0052E568  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0052E56B  68 C8 70 7C 00            PUSH 0x7c70c8
0052E570  68 CC 4C 7A 00            PUSH 0x7a4ccc
0052E575  56                        PUSH ESI
0052E576  6A 00                     PUSH 0x0
0052E578  6A 37                     PUSH 0x37
0052E57A  68 A0 70 7C 00            PUSH 0x7c70a0
0052E57F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0052E585  E8 46 EF 17 00            CALL 0x006ad4d0
0052E58A  83 C4 18                  ADD ESP,0x18
0052E58D  85 C0                     TEST EAX,EAX
0052E58F  74 01                     JZ 0x0052e592
0052E591  CC                        INT3
LAB_0052e592:
0052E592  6A 37                     PUSH 0x37
0052E594  68 A0 70 7C 00            PUSH 0x7c70a0
0052E599  6A 00                     PUSH 0x0
0052E59B  56                        PUSH ESI
0052E59C  E8 9F 78 17 00            CALL 0x006a5e40
0052E5A1  5E                        POP ESI
0052E5A2  8B E5                     MOV ESP,EBP
0052E5A4  5D                        POP EBP
0052E5A5  C3                        RET
