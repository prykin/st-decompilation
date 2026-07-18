FUN_0071a4b0:
0071A4B0  55                        PUSH EBP
0071A4B1  8B EC                     MOV EBP,ESP
0071A4B3  81 EC 04 02 00 00         SUB ESP,0x204
0071A4B9  56                        PUSH ESI
0071A4BA  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0071A4BD  8B 06                     MOV EAX,dword ptr [ESI]
0071A4BF  85 C0                     TEST EAX,EAX
0071A4C1  74 5E                     JZ 0x0071a521
0071A4C3  8B 40 05                  MOV EAX,dword ptr [EAX + 0x5]
0071A4C6  85 C0                     TEST EAX,EAX
0071A4C8  74 51                     JZ 0x0071a51b
0071A4CA  C7 40 04 00 00 00 00      MOV dword ptr [EAX + 0x4],0x0
0071A4D1  8B 06                     MOV EAX,dword ptr [ESI]
0071A4D3  8D 95 FC FD FF FF         LEA EDX,[EBP + 0xfffffdfc]
0071A4D9  8B 48 05                  MOV ECX,dword ptr [EAX + 0x5]
0071A4DC  E8 AF 6C F9 FF            CALL 0x006b1190
0071A4E1  85 C0                     TEST EAX,EAX
0071A4E3  7C 22                     JL 0x0071a507
LAB_0071a4e5:
0071A4E5  8B 16                     MOV EDX,dword ptr [ESI]
0071A4E7  8D 4D FC                  LEA ECX,[EBP + -0x4]
0071A4EA  51                        PUSH ECX
0071A4EB  8B 4A 01                  MOV ECX,dword ptr [EDX + 0x1]
0071A4EE  E8 ED 7B FD FF            CALL 0x006f20e0
0071A4F3  8B 06                     MOV EAX,dword ptr [ESI]
0071A4F5  8D 95 FC FD FF FF         LEA EDX,[EBP + 0xfffffdfc]
0071A4FB  8B 48 05                  MOV ECX,dword ptr [EAX + 0x5]
0071A4FE  E8 8D 6C F9 FF            CALL 0x006b1190
0071A503  85 C0                     TEST EAX,EAX
0071A505  7D DE                     JGE 0x0071a4e5
LAB_0071a507:
0071A507  8B 0E                     MOV ECX,dword ptr [ESI]
0071A509  8B 51 05                  MOV EDX,dword ptr [ECX + 0x5]
0071A50C  52                        PUSH EDX
0071A50D  E8 FE 3B F9 FF            CALL 0x006ae110
0071A512  8B 06                     MOV EAX,dword ptr [ESI]
0071A514  C7 40 05 00 00 00 00      MOV dword ptr [EAX + 0x5],0x0
LAB_0071a51b:
0071A51B  56                        PUSH ESI
0071A51C  E8 3F 0B F9 FF            CALL 0x006ab060
LAB_0071a521:
0071A521  5E                        POP ESI
0071A522  8B E5                     MOV ESP,EBP
0071A524  5D                        POP EBP
0071A525  C3                        RET
