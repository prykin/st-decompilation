FUN_00736250:
00736250  55                        PUSH EBP
00736251  8B EC                     MOV EBP,ESP
00736253  51                        PUSH ECX
00736254  53                        PUSH EBX
00736255  56                        PUSH ESI
00736256  57                        PUSH EDI
00736257  DD 7D FC                  FNSTSW word ptr [EBP + -0x4]
0073625A  DB E2                     FNCLEX
0073625C  0F BF 45 FC               MOVSX EAX,word ptr [EBP + -0x4]
00736260  5F                        POP EDI
00736261  5E                        POP ESI
00736262  5B                        POP EBX
00736263  8B E5                     MOV ESP,EBP
00736265  5D                        POP EBP
00736266  C3                        RET
