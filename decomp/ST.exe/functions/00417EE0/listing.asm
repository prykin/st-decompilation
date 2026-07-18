FUN_00417ee0:
00417EE0  55                        PUSH EBP
00417EE1  8B EC                     MOV EBP,ESP
00417EE3  53                        PUSH EBX
00417EE4  66 8B 5D 08               MOV BX,word ptr [EBP + 0x8]
00417EE8  56                        PUSH ESI
00417EE9  57                        PUSH EDI
00417EEA  0F BF B1 86 00 00 00      MOVSX ESI,word ptr [ECX + 0x86]
00417EF1  0F BF FB                  MOVSX EDI,BX
00417EF4  8B C7                     MOV EAX,EDI
00417EF6  99                        CDQ
00417EF7  F7 FE                     IDIV ESI
00417EF9  0F BF C0                  MOVSX EAX,AX
00417EFC  0F AF C6                  IMUL EAX,ESI
00417EFF  3B C7                     CMP EAX,EDI
00417F01  74 0A                     JZ 0x00417f0d
00417F03  5F                        POP EDI
00417F04  5E                        POP ESI
00417F05  83 C8 FF                  OR EAX,0xffffffff
00417F08  5B                        POP EBX
00417F09  5D                        POP EBP
00417F0A  C2 04 00                  RET 0x4
LAB_00417f0d:
00417F0D  5F                        POP EDI
00417F0E  66 89 59 6C               MOV word ptr [ECX + 0x6c],BX
00417F12  5E                        POP ESI
00417F13  33 C0                     XOR EAX,EAX
00417F15  5B                        POP EBX
00417F16  5D                        POP EBP
00417F17  C2 04 00                  RET 0x4
