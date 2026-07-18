FUN_00627790:
00627790  55                        PUSH EBP
00627791  8B EC                     MOV EBP,ESP
00627793  83 EC 24                  SUB ESP,0x24
00627796  A1 BC 17 81 00            MOV EAX,[0x008117bc]
0062779B  8B D1                     MOV EDX,ECX
0062779D  85 C0                     TEST EAX,EAX
0062779F  74 77                     JZ 0x00627818
006277A1  57                        PUSH EDI
006277A2  B9 08 00 00 00            MOV ECX,0x8
006277A7  33 C0                     XOR EAX,EAX
006277A9  8D 7D DC                  LEA EDI,[EBP + -0x24]
006277AC  F3 AB                     STOSD.REP ES:EDI
006277AE  66 8B 42 24               MOV AX,word ptr [EDX + 0x24]
006277B2  66 8B 4A 32               MOV CX,word ptr [EDX + 0x32]
006277B6  8B 92 41 02 00 00         MOV EDX,dword ptr [EDX + 0x241]
006277BC  66 89 45 F0               MOV word ptr [EBP + -0x10],AX
006277C0  85 D2                     TEST EDX,EDX
006277C2  66 89 4D F2               MOV word ptr [EBP + -0xe],CX
006277C6  5F                        POP EDI
006277C7  74 2E                     JZ 0x006277f7
006277C9  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
006277CF  8D 45 FC                  LEA EAX,[EBP + -0x4]
006277D2  50                        PUSH EAX
006277D3  52                        PUSH EDX
006277D4  E8 F7 EA 0B 00            CALL 0x006e62d0
006277D9  83 F8 FC                  CMP EAX,-0x4
006277DC  74 19                     JZ 0x006277f7
006277DE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006277E1  85 C0                     TEST EAX,EAX
006277E3  74 12                     JZ 0x006277f7
006277E5  66 8B 48 24               MOV CX,word ptr [EAX + 0x24]
006277E9  66 89 4D F4               MOV word ptr [EBP + -0xc],CX
006277ED  66 8B 50 32               MOV DX,word ptr [EAX + 0x32]
006277F1  66 89 55 F6               MOV word ptr [EBP + -0xa],DX
006277F5  EB 0C                     JMP 0x00627803
LAB_006277f7:
006277F7  66 C7 45 F4 FF 00         MOV word ptr [EBP + -0xc],0xff
006277FD  66 C7 45 F6 FF FF         MOV word ptr [EBP + -0xa],0xffff
LAB_00627803:
00627803  8B 0D BC 17 81 00         MOV ECX,dword ptr [0x008117bc]
00627809  C7 45 EC E4 5D 00 00      MOV dword ptr [EBP + -0x14],0x5de4
00627810  8D 55 DC                  LEA EDX,[EBP + -0x24]
00627813  8B 01                     MOV EAX,dword ptr [ECX]
00627815  52                        PUSH EDX
00627816  FF 10                     CALL dword ptr [EAX]
LAB_00627818:
00627818  8B E5                     MOV ESP,EBP
0062781A  5D                        POP EBP
0062781B  C3                        RET
