STManRuinC::sub_00631560:
00631560  56                        PUSH ESI
00631561  8B F1                     MOV ESI,ECX
00631563  8B 4E 34                  MOV ECX,dword ptr [ESI + 0x34]
00631566  8D 46 34                  LEA EAX,[ESI + 0x34]
00631569  85 C9                     TEST ECX,ECX
0063156B  74 06                     JZ 0x00631573
0063156D  50                        PUSH EAX
0063156E  E8 ED 9A 07 00            CALL 0x006ab060
LAB_00631573:
00631573  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
00631576  85 C0                     TEST EAX,EAX
00631578  74 0D                     JZ 0x00631587
0063157A  50                        PUSH EAX
0063157B  E8 90 CB 07 00            CALL 0x006ae110
00631580  C7 46 38 00 00 00 00      MOV dword ptr [ESI + 0x38],0x0
LAB_00631587:
00631587  8B 46 61                  MOV EAX,dword ptr [ESI + 0x61]
0063158A  85 C0                     TEST EAX,EAX
0063158C  7C 0C                     JL 0x0063159a
0063158E  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00631594  50                        PUSH EAX
00631595  E8 06 76 0B 00            CALL 0x006e8ba0
LAB_0063159a:
0063159A  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
0063159D  85 C0                     TEST EAX,EAX
0063159F  74 0D                     JZ 0x006315ae
006315A1  50                        PUSH EAX
006315A2  E8 69 CB 07 00            CALL 0x006ae110
006315A7  C7 46 3C 00 00 00 00      MOV dword ptr [ESI + 0x3c],0x0
LAB_006315ae:
006315AE  5E                        POP ESI
006315AF  C3                        RET
