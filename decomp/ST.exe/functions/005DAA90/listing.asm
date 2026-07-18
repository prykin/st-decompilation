FUN_005daa90:
005DAA90  55                        PUSH EBP
005DAA91  8B EC                     MOV EBP,ESP
005DAA93  83 EC 48                  SUB ESP,0x48
005DAA96  A1 64 17 81 00            MOV EAX,[0x00811764]
005DAA9B  56                        PUSH ESI
005DAA9C  85 C0                     TEST EAX,EAX
005DAA9E  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005DAAA1  74 60                     JZ 0x005dab03
005DAAA3  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005DAAA8  8D 55 BC                  LEA EDX,[EBP + -0x44]
005DAAAB  8D 4D B8                  LEA ECX,[EBP + -0x48]
005DAAAE  6A 00                     PUSH 0x0
005DAAB0  52                        PUSH EDX
005DAAB1  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005DAAB4  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005DAABA  E8 31 2D 15 00            CALL 0x0072d7f0
005DAABF  83 C4 08                  ADD ESP,0x8
005DAAC2  85 C0                     TEST EAX,EAX
005DAAC4  75 2C                     JNZ 0x005daaf2
005DAAC6  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005DAAC9  8B CE                     MOV ECX,ESI
005DAACB  E8 60 80 E2 FF            CALL 0x00402b30
005DAAD0  A1 64 17 81 00            MOV EAX,[0x00811764]
005DAAD5  81 C6 8E 06 00 00         ADD ESI,0x68e
005DAADB  56                        PUSH ESI
005DAADC  50                        PUSH EAX
005DAADD  E8 0E BB 0D 00            CALL 0x006b65f0
005DAAE2  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005DAAE5  33 C0                     XOR EAX,EAX
005DAAE7  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005DAAED  5E                        POP ESI
005DAAEE  8B E5                     MOV ESP,EBP
005DAAF0  5D                        POP EBP
005DAAF1  C3                        RET
LAB_005daaf2:
005DAAF2  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005DAAF5  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005DAAF8  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005DAAFE  E8 2D 80 E2 FF            CALL 0x00402b30
LAB_005dab03:
005DAB03  B8 FA FF FF FF            MOV EAX,0xfffffffa
005DAB08  5E                        POP ESI
005DAB09  8B E5                     MOV ESP,EBP
005DAB0B  5D                        POP EBP
005DAB0C  C3                        RET
