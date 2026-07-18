FUN_00719710:
00719710  55                        PUSH EBP
00719711  8B EC                     MOV EBP,ESP
00719713  83 EC 14                  SUB ESP,0x14
00719716  56                        PUSH ESI
00719717  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0071971A  8B 06                     MOV EAX,dword ptr [ESI]
0071971C  85 C0                     TEST EAX,EAX
0071971E  75 0A                     JNZ 0x0071972a
00719720  B8 01 00 00 00            MOV EAX,0x1
00719725  5E                        POP ESI
00719726  8B E5                     MOV ESP,EBP
00719728  5D                        POP EBP
00719729  C3                        RET
LAB_0071972a:
0071972A  33 C9                     XOR ECX,ECX
0071972C  8D 55 EC                  LEA EDX,[EBP + -0x14]
0071972F  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
00719732  52                        PUSH EDX
00719733  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00719736  68 02 00 02 00            PUSH 0x20002
0071973B  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0071973E  68 43 08 00 00            PUSH 0x843
00719743  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00719746  50                        PUSH EAX
00719747  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0071974A  FF 15 C0 BE 85 00         CALL dword ptr [0x0085bec0]
00719750  85 C0                     TEST EAX,EAX
00719752  74 14                     JZ 0x00719768
00719754  56                        PUSH ESI
00719755  50                        PUSH EAX
00719756  E8 35 05 00 00            CALL 0x00719c90
0071975B  83 C4 08                  ADD ESP,0x8
0071975E  B8 01 00 00 00            MOV EAX,0x1
00719763  5E                        POP ESI
00719764  8B E5                     MOV ESP,EBP
00719766  5D                        POP EBP
00719767  C3                        RET
LAB_00719768:
00719768  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0071976B  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0071976E  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00719771  5E                        POP ESI
00719772  89 08                     MOV dword ptr [EAX],ECX
00719774  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00719777  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
0071977A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0071977D  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
00719780  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
00719783  33 C0                     XOR EAX,EAX
00719785  8B E5                     MOV ESP,EBP
00719787  5D                        POP EBP
00719788  C3                        RET
