FUN_0073c590:
0073C590  55                        PUSH EBP
0073C591  8B EC                     MOV EBP,ESP
0073C593  83 EC 0C                  SUB ESP,0xc
0073C596  8D 45 08                  LEA EAX,[EBP + 0x8]
0073C599  50                        PUSH EAX
0073C59A  8D 4D F4                  LEA ECX,[EBP + -0xc]
0073C59D  51                        PUSH ECX
0073C59E  E8 6D 00 00 00            CALL 0x0073c610
0073C5A3  83 C4 08                  ADD ESP,0x8
0073C5A6  68 98 72 85 00            PUSH 0x857298
0073C5AB  6A 00                     PUSH 0x0
0073C5AD  6A 11                     PUSH 0x11
0073C5AF  83 EC 0C                  SUB ESP,0xc
0073C5B2  8B D4                     MOV EDX,ESP
0073C5B4  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0073C5B7  89 02                     MOV dword ptr [EDX],EAX
0073C5B9  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0073C5BC  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
0073C5BF  66 8B 45 FC               MOV AX,word ptr [EBP + -0x4]
0073C5C3  66 89 42 08               MOV word ptr [EDX + 0x8],AX
0073C5C7  E8 E4 69 00 00            CALL 0x00742fb0
0073C5CC  83 C4 18                  ADD ESP,0x18
0073C5CF  A3 C0 72 85 00            MOV [0x008572c0],EAX
0073C5D4  0F BE 0D 9A 72 85 00      MOVSX ECX,byte ptr [0x0085729a]
0073C5DB  89 0D B8 72 85 00         MOV dword ptr [0x008572b8],ECX
0073C5E1  0F BF 15 98 72 85 00      MOVSX EDX,word ptr [0x00857298]
0073C5E8  89 15 BC 72 85 00         MOV dword ptr [0x008572bc],EDX
0073C5EE  C7 05 C4 72 85 00 9C 72 85 00  MOV dword ptr [0x008572c4],0x85729c
0073C5F8  B8 B8 72 85 00            MOV EAX,0x8572b8
0073C5FD  8B E5                     MOV ESP,EBP
0073C5FF  5D                        POP EBP
0073C600  C3                        RET
