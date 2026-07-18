__strcats:
0072FA10  55                        PUSH EBP
0072FA11  8B EC                     MOV EBP,ESP
0072FA13  83 EC 08                  SUB ESP,0x8
0072FA16  8D 45 10                  LEA EAX,[EBP + 0x10]
0072FA19  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0072FA1C  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0072FA23  EB 09                     JMP 0x0072fa2e
LAB_0072fa25:
0072FA25  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0072FA28  83 C1 01                  ADD ECX,0x1
0072FA2B  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_0072fa2e:
0072FA2E  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0072FA31  3B 55 0C                  CMP EDX,dword ptr [EBP + 0xc]
0072FA34  7D 1E                     JGE 0x0072fa54
0072FA36  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0072FA39  83 C0 04                  ADD EAX,0x4
0072FA3C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0072FA3F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0072FA42  8B 51 FC                  MOV EDX,dword ptr [ECX + -0x4]
0072FA45  52                        PUSH EDX
0072FA46  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072FA49  50                        PUSH EAX
0072FA4A  E8 01 A8 00 00            CALL 0x0073a250
0072FA4F  83 C4 08                  ADD ESP,0x8
0072FA52  EB D1                     JMP 0x0072fa25
LAB_0072fa54:
0072FA54  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0072FA5B  8B E5                     MOV ESP,EBP
0072FA5D  5D                        POP EBP
0072FA5E  C3                        RET
