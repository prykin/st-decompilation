FUN_0067f180:
0067F180  55                        PUSH EBP
0067F181  8B EC                     MOV EBP,ESP
0067F183  51                        PUSH ECX
0067F184  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0067F187  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0067F18A  8D 45 FC                  LEA EAX,[EBP + -0x4]
0067F18D  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
0067F194  50                        PUSH EAX
0067F195  51                        PUSH ECX
0067F196  52                        PUSH EDX
0067F197  E8 A4 3D D8 FF            CALL 0x00402f40
0067F19C  83 C4 0C                  ADD ESP,0xc
0067F19F  85 C0                     TEST EAX,EAX
0067F1A1  75 07                     JNZ 0x0067f1aa
0067F1A3  83 C8 FF                  OR EAX,0xffffffff
0067F1A6  8B E5                     MOV ESP,EBP
0067F1A8  5D                        POP EBP
0067F1A9  C3                        RET
LAB_0067f1aa:
0067F1AA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0067F1AD  8B E5                     MOV ESP,EBP
0067F1AF  5D                        POP EBP
0067F1B0  C3                        RET
