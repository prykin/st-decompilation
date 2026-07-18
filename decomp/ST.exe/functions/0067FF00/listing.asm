FUN_0067ff00:
0067FF00  55                        PUSH EBP
0067FF01  8B EC                     MOV EBP,ESP
0067FF03  51                        PUSH ECX
0067FF04  8B 0D 44 D7 79 00         MOV ECX,dword ptr [0x0079d744]
0067FF0A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0067FF0D  8D 45 FC                  LEA EAX,[EBP + -0x4]
0067FF10  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
0067FF17  50                        PUSH EAX
0067FF18  51                        PUSH ECX
0067FF19  52                        PUSH EDX
0067FF1A  E8 61 EF 0A 00            CALL 0x0072ee80
0067FF1F  83 C4 0C                  ADD ESP,0xc
0067FF22  83 F8 01                  CMP EAX,0x1
0067FF25  75 0E                     JNZ 0x0067ff35
0067FF27  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0067FF2A  85 C0                     TEST EAX,EAX
0067FF2C  7C 07                     JL 0x0067ff35
0067FF2E  3D 00 01 00 00            CMP EAX,0x100
0067FF33  7C 03                     JL 0x0067ff38
LAB_0067ff35:
0067FF35  83 C8 FF                  OR EAX,0xffffffff
LAB_0067ff38:
0067FF38  8B E5                     MOV ESP,EBP
0067FF3A  5D                        POP EBP
0067FF3B  C3                        RET
