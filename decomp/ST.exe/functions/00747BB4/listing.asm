FUN_00747bb4:
00747BB4  56                        PUSH ESI
00747BB5  8B F1                     MOV ESI,ECX
00747BB7  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
00747BBA  85 C0                     TEST EAX,EAX
00747BBC  74 07                     JZ 0x00747bc5
00747BBE  50                        PUSH EAX
00747BBF  E8 EC 66 FE FF            CALL 0x0072e2b0
00747BC4  59                        POP ECX
LAB_00747bc5:
00747BC5  8D 4E 1C                  LEA ECX,[ESI + 0x1c]
00747BC8  E8 49 3D 00 00            CALL 0x0074b916
00747BCD  8B CE                     MOV ECX,ESI
00747BCF  83 C6 04                  ADD ESI,0x4
00747BD2  F7 D9                     NEG ECX
00747BD4  1B C9                     SBB ECX,ECX
00747BD6  23 CE                     AND ECX,ESI
00747BD8  E8 9A 3B 00 00            CALL 0x0074b777
00747BDD  5E                        POP ESI
00747BDE  C3                        RET
