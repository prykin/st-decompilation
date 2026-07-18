FUN_00735fc0:
00735FC0  55                        PUSH EBP
00735FC1  8B EC                     MOV EBP,ESP
00735FC3  51                        PUSH ECX
00735FC4  8B 45 0E                  MOV EAX,dword ptr [EBP + 0xe]
00735FC7  25 FF FF 00 00            AND EAX,0xffff
00735FCC  25 F0 7F 00 00            AND EAX,0x7ff0
00735FD1  C1 F8 04                  SAR EAX,0x4
00735FD4  66 89 45 FC               MOV word ptr [EBP + -0x4],AX
00735FD8  66 8B 4D FC               MOV CX,word ptr [EBP + -0x4]
00735FDC  66 81 E9 FE 03            SUB CX,0x3fe
00735FE1  66 89 4D FC               MOV word ptr [EBP + -0x4],CX
00735FE5  0F BF 45 FC               MOVSX EAX,word ptr [EBP + -0x4]
00735FE9  8B E5                     MOV ESP,EBP
00735FEB  5D                        POP EBP
00735FEC  C3                        RET
