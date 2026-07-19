FUN_00748211:
00748211  83 7C 24 08 00            CMP dword ptr [ESP + 0x8],0x0
00748216  75 07                     JNZ 0x0074821f
00748218  B8 03 40 00 80            MOV EAX,0x80004003
0074821D  EB 18                     JMP 0x00748237
LAB_0074821f:
0074821F  8B 44 24 04               MOV EAX,dword ptr [ESP + 0x4]
00748223  FF 74 24 08               PUSH dword ptr [ESP + 0x8]
00748227  8D 48 F4                  LEA ECX,[EAX + -0xc]
0074822A  8B 40 F4                  MOV EAX,dword ptr [EAX + -0xc]
0074822D  FF 50 20                  CALL dword ptr [EAX + 0x20]
00748230  85 C0                     TEST EAX,EAX
00748232  7D 03                     JGE 0x00748237
00748234  6A 01                     PUSH 0x1
00748236  58                        POP EAX
LAB_00748237:
00748237  C2 08 00                  RET 0x8
