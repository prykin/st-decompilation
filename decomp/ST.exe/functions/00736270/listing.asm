FUN_00736270:
00736270  55                        PUSH EBP
00736271  8B EC                     MOV EBP,ESP
00736273  83 EC 08                  SUB ESP,0x8
00736276  53                        PUSH EBX
00736277  56                        PUSH ESI
00736278  57                        PUSH EDI
00736279  9B D9 7D F8               FSTCW word ptr [EBP + -0x8]
0073627D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00736280  23 45 0C                  AND EAX,dword ptr [EBP + 0xc]
00736283  0F BF 4D F8               MOVSX ECX,word ptr [EBP + -0x8]
00736287  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0073628A  F7 D2                     NOT EDX
0073628C  23 CA                     AND ECX,EDX
0073628E  0B C1                     OR EAX,ECX
00736290  66 89 45 FC               MOV word ptr [EBP + -0x4],AX
00736294  D9 6D FC                  FLDCW word ptr [EBP + -0x4]
00736297  0F BF 45 F8               MOVSX EAX,word ptr [EBP + -0x8]
0073629B  5F                        POP EDI
0073629C  5E                        POP ESI
0073629D  5B                        POP EBX
0073629E  8B E5                     MOV ESP,EBP
007362A0  5D                        POP EBP
007362A1  C3                        RET
