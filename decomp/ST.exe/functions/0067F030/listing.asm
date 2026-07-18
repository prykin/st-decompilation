FUN_0067f030:
0067F030  55                        PUSH EBP
0067F031  8B EC                     MOV EBP,ESP
0067F033  83 EC 48                  SUB ESP,0x48
0067F036  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0067F03B  8D 55 BC                  LEA EDX,[EBP + -0x44]
0067F03E  8D 4D B8                  LEA ECX,[EBP + -0x48]
0067F041  6A 00                     PUSH 0x0
0067F043  52                        PUSH EDX
0067F044  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0067F04B  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0067F04E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0067F054  E8 97 E7 0A 00            CALL 0x0072d7f0
0067F059  83 C4 08                  ADD ESP,0x8
0067F05C  85 C0                     TEST EAX,EAX
0067F05E  75 4D                     JNZ 0x0067f0ad
0067F060  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0067F063  8D 45 FC                  LEA EAX,[EBP + -0x4]
0067F066  50                        PUSH EAX
0067F067  51                        PUSH ECX
0067F068  E8 5C 38 D8 FF            CALL 0x004028c9
0067F06D  83 C4 08                  ADD ESP,0x8
0067F070  85 C0                     TEST EAX,EAX
0067F072  74 42                     JZ 0x0067f0b6
0067F074  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0067F077  85 C0                     TEST EAX,EAX
0067F079  7C 3B                     JL 0x0067f0b6
0067F07B  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0067F07E  52                        PUSH EDX
0067F07F  50                        PUSH EAX
0067F080  A1 18 8A 84 00            MOV EAX,[0x00848a18]
0067F085  50                        PUSH EAX
0067F086  E8 95 6F 03 00            CALL 0x006b6020
0067F08B  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0067F08E  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0067F091  85 C9                     TEST ECX,ECX
0067F093  74 02                     JZ 0x0067f097
0067F095  89 01                     MOV dword ptr [ECX],EAX
LAB_0067f097:
0067F097  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0067F09A  50                        PUSH EAX
0067F09B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0067F0A1  E8 94 44 D8 FF            CALL 0x0040353a
0067F0A6  83 C4 04                  ADD ESP,0x4
0067F0A9  8B E5                     MOV ESP,EBP
0067F0AB  5D                        POP EBP
0067F0AC  C3                        RET
LAB_0067f0ad:
0067F0AD  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0067F0B0  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
LAB_0067f0b6:
0067F0B6  33 C0                     XOR EAX,EAX
0067F0B8  8B E5                     MOV ESP,EBP
0067F0BA  5D                        POP EBP
0067F0BB  C3                        RET
