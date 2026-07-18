FUN_00719900:
00719900  55                        PUSH EBP
00719901  8B EC                     MOV EBP,ESP
00719903  83 EC 0C                  SUB ESP,0xc
00719906  56                        PUSH ESI
00719907  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0071990A  8B 06                     MOV EAX,dword ptr [ESI]
0071990C  85 C0                     TEST EAX,EAX
0071990E  75 0A                     JNZ 0x0071991a
00719910  B8 01 00 00 00            MOV EAX,0x1
00719915  5E                        POP ESI
00719916  8B E5                     MOV ESP,EBP
00719918  5D                        POP EBP
00719919  C3                        RET
LAB_0071991a:
0071991A  33 C9                     XOR ECX,ECX
0071991C  8D 55 F4                  LEA EDX,[EBP + -0xc]
0071991F  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00719922  52                        PUSH EDX
00719923  68 00 04 00 00            PUSH 0x400
00719928  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0071992B  68 0D 08 00 00            PUSH 0x80d
00719930  50                        PUSH EAX
00719931  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00719934  C7 45 F8 0A 00 00 00      MOV dword ptr [EBP + -0x8],0xa
0071993B  FF 15 C0 BE 85 00         CALL dword ptr [0x0085bec0]
00719941  85 C0                     TEST EAX,EAX
00719943  74 14                     JZ 0x00719959
00719945  56                        PUSH ESI
00719946  50                        PUSH EAX
00719947  E8 44 03 00 00            CALL 0x00719c90
0071994C  83 C4 08                  ADD ESP,0x8
0071994F  B8 01 00 00 00            MOV EAX,0x1
00719954  5E                        POP ESI
00719955  8B E5                     MOV ESP,EBP
00719957  5D                        POP EBP
00719958  C3                        RET
LAB_00719959:
00719959  33 C0                     XOR EAX,EAX
0071995B  5E                        POP ESI
0071995C  8B E5                     MOV ESP,EBP
0071995E  5D                        POP EBP
0071995F  C3                        RET
