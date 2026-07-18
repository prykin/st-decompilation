FUN_0070c400:
0070C400  55                        PUSH EBP
0070C401  8B EC                     MOV EBP,ESP
0070C403  83 EC 48                  SUB ESP,0x48
0070C406  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0070C40B  56                        PUSH ESI
0070C40C  8D 55 BC                  LEA EDX,[EBP + -0x44]
0070C40F  8D 4D B8                  LEA ECX,[EBP + -0x48]
0070C412  6A 00                     PUSH 0x0
0070C414  52                        PUSH EDX
0070C415  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0070C41C  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0070C41F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070C425  E8 C6 13 02 00            CALL 0x0072d7f0
0070C42A  83 C4 08                  ADD ESP,0x8
0070C42D  85 C0                     TEST EAX,EAX
0070C42F  75 77                     JNZ 0x0070c4a8
0070C431  50                        PUSH EAX
0070C432  50                        PUSH EAX
0070C433  6A 08                     PUSH 0x8
0070C435  68 01 01 01 01            PUSH 0x1010101
0070C43A  50                        PUSH EAX
0070C43B  50                        PUSH EAX
0070C43C  50                        PUSH EAX
0070C43D  50                        PUSH EAX
0070C43E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0070C441  50                        PUSH EAX
0070C442  E8 B9 F4 FF FF            CALL 0x0070b900
0070C447  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0070C44A  83 C4 24                  ADD ESP,0x24
0070C44D  85 C9                     TEST ECX,ECX
0070C44F  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0070C452  50                        PUSH EAX
0070C453  74 07                     JZ 0x0070c45c
0070C455  E8 16 FE FF FF            CALL 0x0070c270
0070C45A  EB 05                     JMP 0x0070c461
LAB_0070c45c:
0070C45C  E8 2F FF FF FF            CALL 0x0070c390
LAB_0070c461:
0070C461  8B F0                     MOV ESI,EAX
0070C463  83 C4 04                  ADD ESP,0x4
0070C466  85 F6                     TEST ESI,ESI
0070C468  75 1F                     JNZ 0x0070c489
0070C46A  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0070C470  68 81 04 00 00            PUSH 0x481
0070C475  68 E0 FF 7E 00            PUSH 0x7effe0
0070C47A  51                        PUSH ECX
0070C47B  6A FE                     PUSH -0x2
0070C47D  E8 BE 99 F9 FF            CALL 0x006a5e40
0070C482  33 C0                     XOR EAX,EAX
0070C484  5E                        POP ESI
0070C485  8B E5                     MOV ESP,EBP
0070C487  5D                        POP EBP
0070C488  C3                        RET
LAB_0070c489:
0070C489  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070C48C  85 C0                     TEST EAX,EAX
0070C48E  74 09                     JZ 0x0070c499
0070C490  8D 55 FC                  LEA EDX,[EBP + -0x4]
0070C493  52                        PUSH EDX
0070C494  E8 C7 EB F9 FF            CALL 0x006ab060
LAB_0070c499:
0070C499  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0070C49C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0070C4A1  8B C6                     MOV EAX,ESI
0070C4A3  5E                        POP ESI
0070C4A4  8B E5                     MOV ESP,EBP
0070C4A6  5D                        POP EBP
0070C4A7  C3                        RET
LAB_0070c4a8:
0070C4A8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070C4AB  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0070C4AE  85 C0                     TEST EAX,EAX
0070C4B0  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070C4B6  74 09                     JZ 0x0070c4c1
0070C4B8  8D 55 FC                  LEA EDX,[EBP + -0x4]
0070C4BB  52                        PUSH EDX
0070C4BC  E8 9F EB F9 FF            CALL 0x006ab060
LAB_0070c4c1:
0070C4C1  33 C0                     XOR EAX,EAX
0070C4C3  5E                        POP ESI
0070C4C4  8B E5                     MOV ESP,EBP
0070C4C6  5D                        POP EBP
0070C4C7  C3                        RET
