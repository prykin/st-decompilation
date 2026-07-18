FUN_006823a0:
006823A0  55                        PUSH EBP
006823A1  8B EC                     MOV EBP,ESP
006823A3  83 EC 08                  SUB ESP,0x8
006823A6  66 8B 45 08               MOV AX,word ptr [EBP + 0x8]
006823AA  66 8B 4D 0C               MOV CX,word ptr [EBP + 0xc]
006823AE  8D 55 F8                  LEA EDX,[EBP + -0x8]
006823B1  C6 45 F8 07               MOV byte ptr [EBP + -0x8],0x7
006823B5  52                        PUSH EDX
006823B6  66 89 45 F9               MOV word ptr [EBP + -0x7],AX
006823BA  66 89 4D FB               MOV word ptr [EBP + -0x5],CX
006823BE  E8 51 EC D7 FF            CALL 0x00401014
006823C3  83 C4 04                  ADD ESP,0x4
006823C6  8B E5                     MOV ESP,EBP
006823C8  5D                        POP EBP
006823C9  C3                        RET
