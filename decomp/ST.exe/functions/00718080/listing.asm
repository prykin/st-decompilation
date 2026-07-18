FUN_00718080:
00718080  55                        PUSH EBP
00718081  8B EC                     MOV EBP,ESP
00718083  83 EC 50                  SUB ESP,0x50
00718086  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0071808B  56                        PUSH ESI
0071808C  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0071808F  8D 4D B0                  LEA ECX,[EBP + -0x50]
00718092  6A 00                     PUSH 0x0
00718094  52                        PUSH EDX
00718095  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
00718098  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0071809E  E8 4D 57 01 00            CALL 0x0072d7f0
007180A3  8B F0                     MOV ESI,EAX
007180A5  83 C4 08                  ADD ESP,0x8
007180A8  85 F6                     TEST ESI,ESI
007180AA  75 2C                     JNZ 0x007180d8
007180AC  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
007180AF  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
007180B2  8D 4D F4                  LEA ECX,[EBP + -0xc]
007180B5  50                        PUSH EAX
007180B6  51                        PUSH ECX
007180B7  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007180BA  52                        PUSH EDX
007180BB  6A 20                     PUSH 0x20
007180BD  E8 4E A2 FD FF            CALL 0x006f2310
007180C2  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
007180C5  85 C0                     TEST EAX,EAX
007180C7  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
007180CD  74 4D                     JZ 0x0071811c
007180CF  0F BF 45 F4               MOVSX EAX,word ptr [EBP + -0xc]
007180D3  5E                        POP ESI
007180D4  8B E5                     MOV ESP,EBP
007180D6  5D                        POP EBP
007180D7  C3                        RET
LAB_007180d8:
007180D8  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
007180DB  68 0C 07 7F 00            PUSH 0x7f070c
007180E0  68 CC 4C 7A 00            PUSH 0x7a4ccc
007180E5  56                        PUSH ESI
007180E6  6A 00                     PUSH 0x0
007180E8  6A 34                     PUSH 0x34
007180EA  68 F8 06 7F 00            PUSH 0x7f06f8
007180EF  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
007180F5  E8 D6 53 F9 FF            CALL 0x006ad4d0
007180FA  83 C4 18                  ADD ESP,0x18
007180FD  85 C0                     TEST EAX,EAX
007180FF  74 01                     JZ 0x00718102
00718101  CC                        INT3
LAB_00718102:
00718102  6A 36                     PUSH 0x36
00718104  68 F8 06 7F 00            PUSH 0x7f06f8
00718109  6A 00                     PUSH 0x0
0071810B  56                        PUSH ESI
0071810C  E8 2F DD F8 FF            CALL 0x006a5e40
00718111  85 F6                     TEST ESI,ESI
00718113  7D 07                     JGE 0x0071811c
00718115  8B C6                     MOV EAX,ESI
00718117  5E                        POP ESI
00718118  8B E5                     MOV ESP,EBP
0071811A  5D                        POP EBP
0071811B  C3                        RET
LAB_0071811c:
0071811C  83 C8 FF                  OR EAX,0xffffffff
0071811F  5E                        POP ESI
00718120  8B E5                     MOV ESP,EBP
00718122  5D                        POP EBP
00718123  C3                        RET
