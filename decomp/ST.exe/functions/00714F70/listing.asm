FUN_00714f70:
00714F70  55                        PUSH EBP
00714F71  8B EC                     MOV EBP,ESP
00714F73  56                        PUSH ESI
00714F74  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00714F77  85 F6                     TEST ESI,ESI
00714F79  74 1C                     JZ 0x00714f97
00714F7B  80 3E 00                  CMP byte ptr [ESI],0x0
00714F7E  74 17                     JZ 0x00714f97
00714F80  53                        PUSH EBX
00714F81  8A 5E 01                  MOV BL,byte ptr [ESI + 0x1]
00714F84  56                        PUSH ESI
00714F85  C6 46 01 00               MOV byte ptr [ESI + 0x1],0x0
00714F89  E8 F2 FE FF FF            CALL 0x00714e80
00714F8E  88 5E 01                  MOV byte ptr [ESI + 0x1],BL
00714F91  5B                        POP EBX
00714F92  5E                        POP ESI
00714F93  5D                        POP EBP
00714F94  C2 04 00                  RET 0x4
LAB_00714f97:
00714F97  B8 CC FF FF FF            MOV EAX,0xffffffcc
00714F9C  5E                        POP ESI
00714F9D  5D                        POP EBP
00714F9E  C2 04 00                  RET 0x4
