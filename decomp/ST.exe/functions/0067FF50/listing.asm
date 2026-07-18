FUN_0067ff50:
0067FF50  55                        PUSH EBP
0067FF51  8B EC                     MOV EBP,ESP
0067FF53  51                        PUSH ECX
0067FF54  8B 0D 48 D7 79 00         MOV ECX,dword ptr [0x0079d748]
0067FF5A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0067FF5D  8D 45 FC                  LEA EAX,[EBP + -0x4]
0067FF60  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
0067FF67  50                        PUSH EAX
0067FF68  51                        PUSH ECX
0067FF69  52                        PUSH EDX
0067FF6A  E8 11 EF 0A 00            CALL 0x0072ee80
0067FF6F  83 C4 0C                  ADD ESP,0xc
0067FF72  83 F8 01                  CMP EAX,0x1
0067FF75  75 0E                     JNZ 0x0067ff85
0067FF77  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0067FF7A  85 C0                     TEST EAX,EAX
0067FF7C  7C 07                     JL 0x0067ff85
0067FF7E  3D 00 01 00 00            CMP EAX,0x100
0067FF83  7C 03                     JL 0x0067ff88
LAB_0067ff85:
0067FF85  83 C8 FF                  OR EAX,0xffffffff
LAB_0067ff88:
0067FF88  8B E5                     MOV ESP,EBP
0067FF8A  5D                        POP EBP
0067FF8B  C3                        RET
