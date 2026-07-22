AiTactClassTy::sub_0068E010:
0068E010  56                        PUSH ESI
0068E011  8B F1                     MOV ESI,ECX
0068E013  85 F6                     TEST ESI,ESI
0068E015  74 05                     JZ 0x0068e01c
0068E017  8D 46 20                  LEA EAX,[ESI + 0x20]
0068E01A  EB 02                     JMP 0x0068e01e
LAB_0068e01c:
0068E01C  33 C0                     XOR EAX,EAX
LAB_0068e01e:
0068E01E  50                        PUSH EAX
0068E01F  E8 DE 41 D7 FF            CALL 0x00402202
0068E024  8B 8E 30 01 00 00         MOV ECX,dword ptr [ESI + 0x130]
0068E02A  8D 86 30 01 00 00         LEA EAX,[ESI + 0x130]
0068E030  83 C4 04                  ADD ESP,0x4
0068E033  85 C9                     TEST ECX,ECX
0068E035  5E                        POP ESI
0068E036  74 06                     JZ 0x0068e03e
0068E038  50                        PUSH EAX
0068E039  E8 22 D0 01 00            CALL 0x006ab060
LAB_0068e03e:
0068E03E  C3                        RET
