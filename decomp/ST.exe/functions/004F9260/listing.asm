FUN_004f9260:
004F9260  55                        PUSH EBP
004F9261  8B EC                     MOV EBP,ESP
004F9263  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
004F9266  84 C0                     TEST AL,AL
004F9268  74 23                     JZ 0x004f928d
004F926A  33 C0                     XOR EAX,EAX
004F926C  A0 4D 87 80 00            MOV AL,[0x0080874d]
004F9271  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
004F9274  8A 8C C0 F7 87 80 00      MOV CL,byte ptr [EAX + EAX*0x8 + 0x8087f7]
004F927B  84 C9                     TEST CL,CL
004F927D  74 18                     JZ 0x004f9297
004F927F  C7 05 D3 C4 80 00 03 00 00 00  MOV dword ptr [0x0080c4d3],0x3
004F9289  5D                        POP EBP
004F928A  C2 04 00                  RET 0x4
LAB_004f928d:
004F928D  C7 05 D3 C4 80 00 04 00 00 00  MOV dword ptr [0x0080c4d3],0x4
LAB_004f9297:
004F9297  5D                        POP EBP
004F9298  C2 04 00                  RET 0x4
