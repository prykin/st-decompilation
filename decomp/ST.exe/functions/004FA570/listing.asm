FUN_004fa570:
004FA570  55                        PUSH EBP
004FA571  8B EC                     MOV EBP,ESP
004FA573  83 EC 4C                  SUB ESP,0x4c
004FA576  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004FA579  8B D1                     MOV EDX,ECX
004FA57B  85 C0                     TEST EAX,EAX
004FA57D  53                        PUSH EBX
004FA57E  56                        PUSH ESI
004FA57F  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
004FA582  57                        PUSH EDI
004FA583  0F 94 C1                  SETZ CL
004FA586  85 C0                     TEST EAX,EAX
004FA588  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
004FA58B  88 4D F8                  MOV byte ptr [EBP + -0x8],CL
004FA58E  74 14                     JZ 0x004fa5a4
004FA590  3B B2 34 01 00 00         CMP ESI,dword ptr [EDX + 0x134]
004FA596  0F 84 1D 02 00 00         JZ 0x004fa7b9
004FA59C  89 B2 34 01 00 00         MOV dword ptr [EDX + 0x134],ESI
004FA5A2  EB 12                     JMP 0x004fa5b6
LAB_004fa5a4:
004FA5A4  3B B2 38 01 00 00         CMP ESI,dword ptr [EDX + 0x138]
004FA5AA  0F 84 09 02 00 00         JZ 0x004fa7b9
004FA5B0  89 B2 38 01 00 00         MOV dword ptr [EDX + 0x138],ESI
LAB_004fa5b6:
004FA5B6  B9 08 00 00 00            MOV ECX,0x8
004FA5BB  33 C0                     XOR EAX,EAX
004FA5BD  8D 7A 18                  LEA EDI,[EDX + 0x18]
004FA5C0  F3 AB                     STOSD.REP ES:EDI
004FA5C2  85 F6                     TEST ESI,ESI
004FA5C4  C7 42 28 24 00 00 00      MOV dword ptr [EDX + 0x28],0x24
004FA5CB  74 0B                     JZ 0x004fa5d8
004FA5CD  66 8B 82 41 02 00 00      MOV AX,word ptr [EDX + 0x241]
004FA5D4  F7 D8                     NEG EAX
004FA5D6  EB 09                     JMP 0x004fa5e1
LAB_004fa5d8:
004FA5D8  33 C0                     XOR EAX,EAX
004FA5DA  66 8B 82 41 02 00 00      MOV AX,word ptr [EDX + 0x241]
LAB_004fa5e1:
004FA5E1  66 89 42 2E               MOV word ptr [EDX + 0x2e],AX
004FA5E5  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
004FA5EB  8D 4D B8                  LEA ECX,[EBP + -0x48]
004FA5EE  8D 45 B4                  LEA EAX,[EBP + -0x4c]
004FA5F1  6A 00                     PUSH 0x0
004FA5F3  51                        PUSH ECX
004FA5F4  89 55 B4                  MOV dword ptr [EBP + -0x4c],EDX
004FA5F7  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004FA5FC  E8 EF 31 23 00            CALL 0x0072d7f0
004FA601  8B F0                     MOV ESI,EAX
004FA603  83 C4 08                  ADD ESP,0x8
004FA606  85 F6                     TEST ESI,ESI
004FA608  0F 85 6C 01 00 00         JNZ 0x004fa77a
004FA60E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004FA611  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
004FA614  85 C0                     TEST EAX,EAX
004FA616  74 49                     JZ 0x004fa661
004FA618  8B 86 5C 09 00 00         MOV EAX,dword ptr [ESI + 0x95c]
004FA61E  85 C0                     TEST EAX,EAX
004FA620  74 0E                     JZ 0x004fa630
004FA622  8D 56 18                  LEA EDX,[ESI + 0x18]
004FA625  8B CE                     MOV ECX,ESI
004FA627  52                        PUSH EDX
004FA628  50                        PUSH EAX
004FA629  6A 02                     PUSH 0x2
004FA62B  E8 50 BA 1E 00            CALL 0x006e6080
LAB_004fa630:
004FA630  8D BE 60 09 00 00         LEA EDI,[ESI + 0x960]
004FA636  BB 04 00 00 00            MOV EBX,0x4
LAB_004fa63b:
004FA63B  8B 07                     MOV EAX,dword ptr [EDI]
004FA63D  85 C0                     TEST EAX,EAX
004FA63F  74 0E                     JZ 0x004fa64f
004FA641  8D 4E 18                  LEA ECX,[ESI + 0x18]
004FA644  51                        PUSH ECX
004FA645  50                        PUSH EAX
004FA646  6A 02                     PUSH 0x2
004FA648  8B CE                     MOV ECX,ESI
004FA64A  E8 31 BA 1E 00            CALL 0x006e6080
LAB_004fa64f:
004FA64F  83 C7 04                  ADD EDI,0x4
004FA652  4B                        DEC EBX
004FA653  75 E6                     JNZ 0x004fa63b
004FA655  8B 86 70 09 00 00         MOV EAX,dword ptr [ESI + 0x970]
004FA65B  85 C0                     TEST EAX,EAX
004FA65D  74 7C                     JZ 0x004fa6db
004FA65F  EB 6C                     JMP 0x004fa6cd
LAB_004fa661:
004FA661  8B 86 D0 09 00 00         MOV EAX,dword ptr [ESI + 0x9d0]
004FA667  85 C0                     TEST EAX,EAX
004FA669  74 0E                     JZ 0x004fa679
004FA66B  8D 4E 18                  LEA ECX,[ESI + 0x18]
004FA66E  51                        PUSH ECX
004FA66F  50                        PUSH EAX
004FA670  6A 02                     PUSH 0x2
004FA672  8B CE                     MOV ECX,ESI
004FA674  E8 07 BA 1E 00            CALL 0x006e6080
LAB_004fa679:
004FA679  8D BE 15 0A 00 00         LEA EDI,[ESI + 0xa15]
004FA67F  BB 06 00 00 00            MOV EBX,0x6
LAB_004fa684:
004FA684  8B 07                     MOV EAX,dword ptr [EDI]
004FA686  85 C0                     TEST EAX,EAX
004FA688  74 0E                     JZ 0x004fa698
004FA68A  8D 56 18                  LEA EDX,[ESI + 0x18]
004FA68D  8B CE                     MOV ECX,ESI
004FA68F  52                        PUSH EDX
004FA690  50                        PUSH EAX
004FA691  6A 02                     PUSH 0x2
004FA693  E8 E8 B9 1E 00            CALL 0x006e6080
LAB_004fa698:
004FA698  83 C7 04                  ADD EDI,0x4
004FA69B  4B                        DEC EBX
004FA69C  75 E6                     JNZ 0x004fa684
004FA69E  8D BE 1F 0B 00 00         LEA EDI,[ESI + 0xb1f]
004FA6A4  BB 06 00 00 00            MOV EBX,0x6
LAB_004fa6a9:
004FA6A9  8B 07                     MOV EAX,dword ptr [EDI]
004FA6AB  85 C0                     TEST EAX,EAX
004FA6AD  74 0E                     JZ 0x004fa6bd
004FA6AF  8D 4E 18                  LEA ECX,[ESI + 0x18]
004FA6B2  51                        PUSH ECX
004FA6B3  50                        PUSH EAX
004FA6B4  6A 02                     PUSH 0x2
004FA6B6  8B CE                     MOV ECX,ESI
004FA6B8  E8 C3 B9 1E 00            CALL 0x006e6080
LAB_004fa6bd:
004FA6BD  83 C7 04                  ADD EDI,0x4
004FA6C0  4B                        DEC EBX
004FA6C1  75 E6                     JNZ 0x004fa6a9
004FA6C3  8B 86 37 0B 00 00         MOV EAX,dword ptr [ESI + 0xb37]
004FA6C9  85 C0                     TEST EAX,EAX
004FA6CB  74 0E                     JZ 0x004fa6db
LAB_004fa6cd:
004FA6CD  8D 56 18                  LEA EDX,[ESI + 0x18]
004FA6D0  8B CE                     MOV ECX,ESI
004FA6D2  52                        PUSH EDX
004FA6D3  50                        PUSH EAX
004FA6D4  6A 02                     PUSH 0x2
004FA6D6  E8 A5 B9 1E 00            CALL 0x006e6080
LAB_004fa6db:
004FA6DB  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
004FA6DE  81 E7 FF 00 00 00         AND EDI,0xff
004FA6E4  8B 84 BE C0 09 00 00      MOV EAX,dword ptr [ESI + EDI*0x4 + 0x9c0]
004FA6EB  85 C0                     TEST EAX,EAX
004FA6ED  74 0E                     JZ 0x004fa6fd
004FA6EF  8D 4E 18                  LEA ECX,[ESI + 0x18]
004FA6F2  51                        PUSH ECX
004FA6F3  50                        PUSH EAX
004FA6F4  6A 02                     PUSH 0x2
004FA6F6  8B CE                     MOV ECX,ESI
004FA6F8  E8 83 B9 1E 00            CALL 0x006e6080
LAB_004fa6fd:
004FA6FD  8B 84 BE FE 02 00 00      MOV EAX,dword ptr [ESI + EDI*0x4 + 0x2fe]
004FA704  85 C0                     TEST EAX,EAX
004FA706  74 0E                     JZ 0x004fa716
004FA708  8D 56 18                  LEA EDX,[ESI + 0x18]
004FA70B  8B CE                     MOV ECX,ESI
004FA70D  52                        PUSH EDX
004FA70E  50                        PUSH EAX
004FA70F  6A 02                     PUSH 0x2
004FA711  E8 6A B9 1E 00            CALL 0x006e6080
LAB_004fa716:
004FA716  8B 84 BE 08 03 00 00      MOV EAX,dword ptr [ESI + EDI*0x4 + 0x308]
004FA71D  85 C0                     TEST EAX,EAX
004FA71F  74 0E                     JZ 0x004fa72f
004FA721  8D 4E 18                  LEA ECX,[ESI + 0x18]
004FA724  51                        PUSH ECX
004FA725  50                        PUSH EAX
004FA726  6A 02                     PUSH 0x2
004FA728  8B CE                     MOV ECX,ESI
004FA72A  E8 51 B9 1E 00            CALL 0x006e6080
LAB_004fa72f:
004FA72F  8B 84 BE 10 03 00 00      MOV EAX,dword ptr [ESI + EDI*0x4 + 0x310]
004FA736  85 C0                     TEST EAX,EAX
004FA738  74 0E                     JZ 0x004fa748
004FA73A  8D 56 18                  LEA EDX,[ESI + 0x18]
004FA73D  8B CE                     MOV ECX,ESI
004FA73F  52                        PUSH EDX
004FA740  50                        PUSH EAX
004FA741  6A 02                     PUSH 0x2
004FA743  E8 38 B9 1E 00            CALL 0x006e6080
LAB_004fa748:
004FA748  8A 45 F8                  MOV AL,byte ptr [EBP + -0x8]
004FA74B  84 C0                     TEST AL,AL
004FA74D  74 19                     JZ 0x004fa768
004FA74F  8B BC BE 14 03 00 00      MOV EDI,dword ptr [ESI + EDI*0x4 + 0x314]
004FA756  85 FF                     TEST EDI,EDI
004FA758  74 0E                     JZ 0x004fa768
004FA75A  8D 46 18                  LEA EAX,[ESI + 0x18]
004FA75D  8B CE                     MOV ECX,ESI
004FA75F  50                        PUSH EAX
004FA760  57                        PUSH EDI
004FA761  6A 02                     PUSH 0x2
004FA763  E8 18 B9 1E 00            CALL 0x006e6080
LAB_004fa768:
004FA768  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
004FA76B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004FA771  5F                        POP EDI
004FA772  5E                        POP ESI
004FA773  5B                        POP EBX
004FA774  8B E5                     MOV ESP,EBP
004FA776  5D                        POP EBP
004FA777  C2 08 00                  RET 0x8
LAB_004fa77a:
004FA77A  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
004FA77D  68 A0 22 7C 00            PUSH 0x7c22a0
004FA782  68 CC 4C 7A 00            PUSH 0x7a4ccc
004FA787  56                        PUSH ESI
004FA788  6A 00                     PUSH 0x0
004FA78A  68 52 04 00 00            PUSH 0x452
004FA78F  68 D8 1B 7C 00            PUSH 0x7c1bd8
004FA794  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004FA79A  E8 31 2D 1B 00            CALL 0x006ad4d0
004FA79F  83 C4 18                  ADD ESP,0x18
004FA7A2  85 C0                     TEST EAX,EAX
004FA7A4  74 01                     JZ 0x004fa7a7
004FA7A6  CC                        INT3
LAB_004fa7a7:
004FA7A7  68 52 04 00 00            PUSH 0x452
004FA7AC  68 D8 1B 7C 00            PUSH 0x7c1bd8
004FA7B1  6A 00                     PUSH 0x0
004FA7B3  56                        PUSH ESI
004FA7B4  E8 87 B6 1A 00            CALL 0x006a5e40
LAB_004fa7b9:
004FA7B9  5F                        POP EDI
004FA7BA  5E                        POP ESI
004FA7BB  5B                        POP EBX
004FA7BC  8B E5                     MOV ESP,EBP
004FA7BE  5D                        POP EBP
004FA7BF  C2 08 00                  RET 0x8
