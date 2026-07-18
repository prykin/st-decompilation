FUN_005da980:
005DA980  55                        PUSH EBP
005DA981  8B EC                     MOV EBP,ESP
005DA983  83 EC 48                  SUB ESP,0x48
005DA986  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005DA98B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005DA98E  56                        PUSH ESI
005DA98F  8D 55 BC                  LEA EDX,[EBP + -0x44]
005DA992  8D 4D B8                  LEA ECX,[EBP + -0x48]
005DA995  6A 00                     PUSH 0x0
005DA997  52                        PUSH EDX
005DA998  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005DA99B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005DA9A1  E8 4A 2E 15 00            CALL 0x0072d7f0
005DA9A6  83 C4 08                  ADD ESP,0x8
005DA9A9  85 C0                     TEST EAX,EAX
005DA9AB  75 5B                     JNZ 0x005daa08
005DA9AD  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005DA9B0  8B CE                     MOV ECX,ESI
005DA9B2  E8 3D 8B E2 FF            CALL 0x004034f4
005DA9B7  33 C0                     XOR EAX,EAX
005DA9B9  A0 62 73 80 00            MOV AL,[0x00807362]
005DA9BE  50                        PUSH EAX
005DA9BF  E8 8C B7 0D 00            CALL 0x006b6150
005DA9C4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005DA9C7  8B 96 8A 06 00 00         MOV EDX,dword ptr [ESI + 0x68a]
005DA9CD  68 F0 D6 7C 00            PUSH 0x7cd6f0
005DA9D2  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
005DA9D5  8D 44 8A 0C               LEA EAX,[EDX + ECX*0x4 + 0xc]
005DA9D9  50                        PUSH EAX
005DA9DA  68 64 17 81 00            PUSH 0x811764
005DA9DF  E8 6C B9 0D 00            CALL 0x006b6350
005DA9E4  8B 0D 3C 73 80 00         MOV ECX,dword ptr [0x0080733c]
005DA9EA  8B 15 64 17 81 00         MOV EDX,dword ptr [0x00811764]
005DA9F0  51                        PUSH ECX
005DA9F1  52                        PUSH EDX
005DA9F2  E8 09 BB 0D 00            CALL 0x006b6500
005DA9F7  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005DA9FA  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005DA9FF  33 C0                     XOR EAX,EAX
005DAA01  5E                        POP ESI
005DAA02  8B E5                     MOV ESP,EBP
005DAA04  5D                        POP EBP
005DAA05  C2 04 00                  RET 0x4
LAB_005daa08:
005DAA08  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005DAA0B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005DAA11  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005DAA14  E8 DB 8A E2 FF            CALL 0x004034f4
005DAA19  B8 FA FF FF FF            MOV EAX,0xfffffffa
005DAA1E  5E                        POP ESI
005DAA1F  8B E5                     MOV ESP,EBP
005DAA21  5D                        POP EBP
005DAA22  C2 04 00                  RET 0x4
