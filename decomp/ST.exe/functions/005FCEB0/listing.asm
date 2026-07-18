FUN_005fceb0:
005FCEB0  55                        PUSH EBP
005FCEB1  8B EC                     MOV EBP,ESP
005FCEB3  83 EC 24                  SUB ESP,0x24
005FCEB6  A1 BC 17 81 00            MOV EAX,[0x008117bc]
005FCEBB  8B D1                     MOV EDX,ECX
005FCEBD  85 C0                     TEST EAX,EAX
005FCEBF  74 5C                     JZ 0x005fcf1d
005FCEC1  57                        PUSH EDI
005FCEC2  B9 08 00 00 00            MOV ECX,0x8
005FCEC7  33 C0                     XOR EAX,EAX
005FCEC9  8D 7D DC                  LEA EDI,[EBP + -0x24]
005FCECC  F3 AB                     STOSD.REP ES:EDI
005FCECE  66 8B 42 32               MOV AX,word ptr [EDX + 0x32]
005FCED2  66 8B 8A 2A 03 00 00      MOV CX,word ptr [EDX + 0x32a]
005FCED9  66 89 45 F2               MOV word ptr [EBP + -0xe],AX
005FCEDD  66 89 4D F4               MOV word ptr [EBP + -0xc],CX
005FCEE1  8B 8A 58 03 00 00         MOV ECX,dword ptr [EDX + 0x358]
005FCEE7  8D 45 FC                  LEA EAX,[EBP + -0x4]
005FCEEA  50                        PUSH EAX
005FCEEB  51                        PUSH ECX
005FCEEC  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005FCEF2  C7 45 EC D6 5D 00 00      MOV dword ptr [EBP + -0x14],0x5dd6
005FCEF9  E8 D2 93 0E 00            CALL 0x006e62d0
005FCEFE  83 F8 FC                  CMP EAX,-0x4
005FCF01  5F                        POP EDI
005FCF02  74 0B                     JZ 0x005fcf0f
005FCF04  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005FCF07  66 8B 42 32               MOV AX,word ptr [EDX + 0x32]
005FCF0B  66 89 45 F6               MOV word ptr [EBP + -0xa],AX
LAB_005fcf0f:
005FCF0F  8B 0D BC 17 81 00         MOV ECX,dword ptr [0x008117bc]
005FCF15  8D 45 DC                  LEA EAX,[EBP + -0x24]
005FCF18  50                        PUSH EAX
005FCF19  8B 11                     MOV EDX,dword ptr [ECX]
005FCF1B  FF 12                     CALL dword ptr [EDX]
LAB_005fcf1d:
005FCF1D  8B E5                     MOV ESP,EBP
005FCF1F  5D                        POP EBP
005FCF20  C3                        RET
