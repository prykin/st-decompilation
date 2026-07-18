FUN_00747161:
00747161  55                        PUSH EBP
00747162  8B EC                     MOV EBP,ESP
00747164  51                        PUSH ECX
00747165  51                        PUSH ECX
00747166  53                        PUSH EBX
00747167  56                        PUSH ESI
00747168  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0074716B  57                        PUSH EDI
0074716C  8B 5E 2C                  MOV EBX,dword ptr [ESI + 0x2c]
0074716F  53                        PUSH EBX
00747170  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00747173  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
00747179  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0074717C  89 46 14                  MOV dword ptr [ESI + 0x14],EAX
0074717F  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00747182  89 46 18                  MOV dword ptr [ESI + 0x18],EAX
00747185  83 7E 08 00               CMP dword ptr [ESI + 0x8],0x0
00747189  75 17                     JNZ 0x007471a2
0074718B  8B 06                     MOV EAX,dword ptr [ESI]
0074718D  56                        PUSH ESI
0074718E  FF 50 14                  CALL dword ptr [EAX + 0x14]
00747191  8B F8                     MOV EDI,EAX
00747193  85 FF                     TEST EDI,EDI
00747195  7D 0B                     JGE 0x007471a2
00747197  53                        PUSH EBX
00747198  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074719E  8B C7                     MOV EAX,EDI
007471A0  EB 5C                     JMP 0x007471fe
LAB_007471a2:
007471A2  83 7E 08 02               CMP dword ptr [ESI + 0x8],0x2
007471A6  74 44                     JZ 0x007471ec
007471A8  8B 46 F4                  MOV EAX,dword ptr [ESI + -0xc]
007471AB  8D 7E F4                  LEA EDI,[ESI + -0xc]
007471AE  8B CF                     MOV ECX,EDI
007471B0  FF 50 18                  CALL dword ptr [EAX + 0x18]
007471B3  83 65 08 00               AND dword ptr [EBP + 0x8],0x0
007471B7  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
007471BA  85 C0                     TEST EAX,EAX
007471BC  7E 2E                     JLE 0x007471ec
LAB_007471be:
007471BE  8B 07                     MOV EAX,dword ptr [EDI]
007471C0  FF 75 08                  PUSH dword ptr [EBP + 0x8]
007471C3  8B CF                     MOV ECX,EDI
007471C5  FF 50 1C                  CALL dword ptr [EAX + 0x1c]
007471C8  83 78 18 00               CMP dword ptr [EAX + 0x18],0x0
007471CC  74 13                     JZ 0x007471e1
007471CE  FF 75 10                  PUSH dword ptr [EBP + 0x10]
007471D1  8B 10                     MOV EDX,dword ptr [EAX]
007471D3  8B C8                     MOV ECX,EAX
007471D5  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
007471D8  FF 52 1C                  CALL dword ptr [EDX + 0x1c]
007471DB  8B D8                     MOV EBX,EAX
007471DD  85 DB                     TEST EBX,EBX
007471DF  7C 24                     JL 0x00747205
LAB_007471e1:
007471E1  FF 45 08                  INC dword ptr [EBP + 0x8]
007471E4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007471E7  3B 45 F8                  CMP EAX,dword ptr [EBP + -0x8]
007471EA  7C D2                     JL 0x007471be
LAB_007471ec:
007471EC  FF 75 FC                  PUSH dword ptr [EBP + -0x4]
007471EF  C7 46 08 02 00 00 00      MOV dword ptr [ESI + 0x8],0x2
007471F6  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
007471FC  33 C0                     XOR EAX,EAX
LAB_007471fe:
007471FE  5F                        POP EDI
007471FF  5E                        POP ESI
00747200  5B                        POP EBX
00747201  C9                        LEAVE
00747202  C2 0C 00                  RET 0xc
LAB_00747205:
00747205  FF 75 FC                  PUSH dword ptr [EBP + -0x4]
00747208  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074720E  8B C3                     MOV EAX,EBX
00747210  EB EC                     JMP 0x007471fe
