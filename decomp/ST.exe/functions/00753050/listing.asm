FUN_00753050:
00753050  55                        PUSH EBP
00753051  8B EC                     MOV EBP,ESP
00753053  56                        PUSH ESI
00753054  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00753057  85 F6                     TEST ESI,ESI
00753059  74 25                     JZ 0x00753080
0075305B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0075305E  57                        PUSH EDI
0075305F  03 F0                     ADD ESI,EAX
00753061  83 C9 FF                  OR ECX,0xffffffff
00753064  8B FE                     MOV EDI,ESI
00753066  33 C0                     XOR EAX,EAX
00753068  F2 AE                     SCASB.REPNE ES:EDI
0075306A  F7 D1                     NOT ECX
0075306C  51                        PUSH ECX
0075306D  8D 46 01                  LEA EAX,[ESI + 0x1]
00753070  56                        PUSH ESI
00753071  50                        PUSH EAX
00753072  E8 F9 A9 FD FF            CALL 0x0072da70
00753077  8A 4D 10                  MOV CL,byte ptr [EBP + 0x10]
0075307A  83 C4 0C                  ADD ESP,0xc
0075307D  88 0E                     MOV byte ptr [ESI],CL
0075307F  5F                        POP EDI
LAB_00753080:
00753080  5E                        POP ESI
00753081  5D                        POP EBP
00753082  C2 0C 00                  RET 0xc
