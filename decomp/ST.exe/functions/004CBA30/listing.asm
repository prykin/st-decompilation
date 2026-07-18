FUN_004cba30:
004CBA30  56                        PUSH ESI
004CBA31  8B F1                     MOV ESI,ECX
004CBA33  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004CBA39  8A 86 3D 02 00 00         MOV AL,byte ptr [ESI + 0x23d]
004CBA3F  50                        PUSH EAX
004CBA40  E8 72 8F F3 FF            CALL 0x004049b7
004CBA45  8A C8                     MOV CL,AL
004CBA47  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004CBA4D  81 E1 FF 00 00 00         AND ECX,0xff
004CBA53  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
004CBA56  03 CA                     ADD ECX,EDX
004CBA58  8B 04 8D 30 0D 79 00      MOV EAX,dword ptr [ECX*0x4 + 0x790d30]
004CBA5F  85 C0                     TEST EAX,EAX
004CBA61  74 3D                     JZ 0x004cbaa0
004CBA63  A1 2C 73 80 00            MOV EAX,[0x0080732c]
004CBA68  85 C0                     TEST EAX,EAX
004CBA6A  74 1C                     JZ 0x004cba88
004CBA6C  81 C6 D5 01 00 00         ADD ESI,0x1d5
004CBA72  6A 0C                     PUSH 0xc
004CBA74  8B CE                     MOV ECX,ESI
004CBA76  E8 D9 8D F3 FF            CALL 0x00404854
004CBA7B  6A 07                     PUSH 0x7
004CBA7D  8B CE                     MOV ECX,ESI
004CBA7F  E8 D0 8D F3 FF            CALL 0x00404854
004CBA84  33 C0                     XOR EAX,EAX
004CBA86  5E                        POP ESI
004CBA87  C3                        RET
LAB_004cba88:
004CBA88  81 C6 D5 01 00 00         ADD ESI,0x1d5
004CBA8E  6A 0C                     PUSH 0xc
004CBA90  8B CE                     MOV ECX,ESI
004CBA92  E8 CA 6C F3 FF            CALL 0x00402761
004CBA97  6A 07                     PUSH 0x7
004CBA99  8B CE                     MOV ECX,ESI
004CBA9B  E8 C1 6C F3 FF            CALL 0x00402761
LAB_004cbaa0:
004CBAA0  33 C0                     XOR EAX,EAX
004CBAA2  5E                        POP ESI
004CBAA3  C3                        RET
