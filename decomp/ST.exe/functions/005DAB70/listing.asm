FUN_005dab70:
005DAB70  55                        PUSH EBP
005DAB71  8B EC                     MOV EBP,ESP
005DAB73  83 EC 48                  SUB ESP,0x48
005DAB76  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005DAB7B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005DAB7E  56                        PUSH ESI
005DAB7F  8D 55 BC                  LEA EDX,[EBP + -0x44]
005DAB82  8D 4D B8                  LEA ECX,[EBP + -0x48]
005DAB85  6A 00                     PUSH 0x0
005DAB87  52                        PUSH EDX
005DAB88  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005DAB8B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005DAB91  E8 5A 2C 15 00            CALL 0x0072d7f0
005DAB96  83 C4 08                  ADD ESP,0x8
005DAB99  85 C0                     TEST EAX,EAX
005DAB9B  75 79                     JNZ 0x005dac16
005DAB9D  A1 64 17 81 00            MOV EAX,[0x00811764]
005DABA2  85 C0                     TEST EAX,EAX
005DABA4  74 5E                     JZ 0x005dac04
005DABA6  50                        PUSH EAX
005DABA7  E8 24 CB 0D 00            CALL 0x006b76d0
005DABAC  A0 7E 87 80 00            MOV AL,[0x0080877e]
005DABB1  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005DABB4  84 C0                     TEST AL,AL
005DABB6  74 16                     JZ 0x005dabce
005DABB8  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005DABBB  8B 0D 64 17 81 00         MOV ECX,dword ptr [0x00811764]
005DABC1  6A 20                     PUSH 0x20
005DABC3  50                        PUSH EAX
005DABC4  6A 00                     PUSH 0x0
005DABC6  51                        PUSH ECX
005DABC7  E8 84 BB 0D 00            CALL 0x006b6750
005DABCC  EB 21                     JMP 0x005dabef
LAB_005dabce:
005DABCE  8B 86 8E 06 00 00         MOV EAX,dword ptr [ESI + 0x68e]
005DABD4  85 C0                     TEST EAX,EAX
005DABD6  74 17                     JZ 0x005dabef
005DABD8  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005DABDB  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
005DABDE  8B 0D 64 17 81 00         MOV ECX,dword ptr [0x00811764]
005DABE4  8D 44 90 0C               LEA EAX,[EAX + EDX*0x4 + 0xc]
005DABE8  50                        PUSH EAX
005DABE9  51                        PUSH ECX
005DABEA  E8 F1 BC 0D 00            CALL 0x006b68e0
LAB_005dabef:
005DABEF  8B 15 64 17 81 00         MOV EDX,dword ptr [0x00811764]
005DABF5  8B CE                     MOV ECX,ESI
005DABF7  8B 42 38                  MOV EAX,dword ptr [EDX + 0x38]
005DABFA  A3 7F 87 80 00            MOV [0x0080877f],EAX
005DABFF  E8 06 87 E2 FF            CALL 0x0040330a
LAB_005dac04:
005DAC04  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005DAC07  33 C0                     XOR EAX,EAX
005DAC09  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005DAC0F  5E                        POP ESI
005DAC10  8B E5                     MOV ESP,EBP
005DAC12  5D                        POP EBP
005DAC13  C2 08 00                  RET 0x8
LAB_005dac16:
005DAC16  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005DAC19  B8 FA FF FF FF            MOV EAX,0xfffffffa
005DAC1E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005DAC24  5E                        POP ESI
005DAC25  8B E5                     MOV ESP,EBP
005DAC27  5D                        POP EBP
005DAC28  C2 08 00                  RET 0x8
