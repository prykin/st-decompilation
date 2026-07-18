FUN_005ec6a0:
005EC6A0  55                        PUSH EBP
005EC6A1  8B EC                     MOV EBP,ESP
005EC6A3  83 EC 24                  SUB ESP,0x24
005EC6A6  A1 BC 17 81 00            MOV EAX,[0x008117bc]
005EC6AB  8B D1                     MOV EDX,ECX
005EC6AD  85 C0                     TEST EAX,EAX
005EC6AF  74 60                     JZ 0x005ec711
005EC6B1  57                        PUSH EDI
005EC6B2  B9 08 00 00 00            MOV ECX,0x8
005EC6B7  33 C0                     XOR EAX,EAX
005EC6B9  8D 7D DC                  LEA EDI,[EBP + -0x24]
005EC6BC  F3 AB                     STOSD.REP ES:EDI
005EC6BE  66 8B 42 32               MOV AX,word ptr [EDX + 0x32]
005EC6C2  66 8B 8A 2A 03 00 00      MOV CX,word ptr [EDX + 0x32a]
005EC6C9  8B 92 54 03 00 00         MOV EDX,dword ptr [EDX + 0x354]
005EC6CF  66 89 45 F2               MOV word ptr [EBP + -0xe],AX
005EC6D3  85 D2                     TEST EDX,EDX
005EC6D5  66 89 4D F4               MOV word ptr [EBP + -0xc],CX
005EC6D9  C7 45 EC DB 5D 00 00      MOV dword ptr [EBP + -0x14],0x5ddb
005EC6E0  5F                        POP EDI
005EC6E1  76 20                     JBE 0x005ec703
005EC6E3  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005EC6E9  8D 45 FC                  LEA EAX,[EBP + -0x4]
005EC6EC  50                        PUSH EAX
005EC6ED  52                        PUSH EDX
005EC6EE  E8 DD 9B 0F 00            CALL 0x006e62d0
005EC6F3  83 F8 FC                  CMP EAX,-0x4
005EC6F6  74 0B                     JZ 0x005ec703
005EC6F8  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005EC6FB  66 8B 51 32               MOV DX,word ptr [ECX + 0x32]
005EC6FF  66 89 55 F6               MOV word ptr [EBP + -0xa],DX
LAB_005ec703:
005EC703  8B 0D BC 17 81 00         MOV ECX,dword ptr [0x008117bc]
005EC709  8D 55 DC                  LEA EDX,[EBP + -0x24]
005EC70C  52                        PUSH EDX
005EC70D  8B 01                     MOV EAX,dword ptr [ECX]
005EC70F  FF 10                     CALL dword ptr [EAX]
LAB_005ec711:
005EC711  8B E5                     MOV ESP,EBP
005EC713  5D                        POP EBP
005EC714  C3                        RET
