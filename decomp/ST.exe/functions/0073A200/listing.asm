FUN_0073a200:
0073A200  55                        PUSH EBP
0073A201  8B EC                     MOV EBP,ESP
0073A203  56                        PUSH ESI
0073A204  33 C0                     XOR EAX,EAX
0073A206  50                        PUSH EAX
0073A207  50                        PUSH EAX
0073A208  50                        PUSH EAX
0073A209  50                        PUSH EAX
0073A20A  50                        PUSH EAX
0073A20B  50                        PUSH EAX
0073A20C  50                        PUSH EAX
0073A20D  50                        PUSH EAX
0073A20E  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0073A211  8D 49 00                  LEA ECX,[ECX]
LAB_0073a214:
0073A214  8A 02                     MOV AL,byte ptr [EDX]
0073A216  0A C0                     OR AL,AL
0073A218  74 07                     JZ 0x0073a221
0073A21A  42                        INC EDX
0073A21B  0F AB 04 24               BTS [ESP],EAX
0073A21F  EB F3                     JMP 0x0073a214
LAB_0073a221:
0073A221  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
LAB_0073a224:
0073A224  8A 06                     MOV AL,byte ptr [ESI]
0073A226  0A C0                     OR AL,AL
0073A228  74 0A                     JZ 0x0073a234
0073A22A  46                        INC ESI
0073A22B  0F A3 04 24               BT [ESP],EAX
0073A22F  73 F3                     JNC 0x0073a224
0073A231  8D 46 FF                  LEA EAX,[ESI + -0x1]
LAB_0073a234:
0073A234  83 C4 20                  ADD ESP,0x20
0073A237  5E                        POP ESI
0073A238  C9                        LEAVE
0073A239  C3                        RET
