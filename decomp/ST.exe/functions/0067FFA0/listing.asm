FUN_0067ffa0:
0067FFA0  55                        PUSH EBP
0067FFA1  8B EC                     MOV EBP,ESP
0067FFA3  51                        PUSH ECX
0067FFA4  8B 0D 4C D7 79 00         MOV ECX,dword ptr [0x0079d74c]
0067FFAA  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0067FFAD  8D 45 FC                  LEA EAX,[EBP + -0x4]
0067FFB0  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
0067FFB7  50                        PUSH EAX
0067FFB8  51                        PUSH ECX
0067FFB9  52                        PUSH EDX
0067FFBA  E8 C1 EE 0A 00            CALL 0x0072ee80
0067FFBF  83 C4 0C                  ADD ESP,0xc
0067FFC2  83 F8 01                  CMP EAX,0x1
0067FFC5  75 0C                     JNZ 0x0067ffd3
0067FFC7  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0067FFCA  85 C0                     TEST EAX,EAX
0067FFCC  7C 05                     JL 0x0067ffd3
0067FFCE  83 F8 21                  CMP EAX,0x21
0067FFD1  7C 03                     JL 0x0067ffd6
LAB_0067ffd3:
0067FFD3  83 C8 FF                  OR EAX,0xffffffff
LAB_0067ffd6:
0067FFD6  8B E5                     MOV ESP,EBP
0067FFD8  5D                        POP EBP
0067FFD9  C3                        RET
