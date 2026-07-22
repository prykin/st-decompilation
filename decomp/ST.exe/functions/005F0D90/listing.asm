STContainerC::sub_005F0D90:
005F0D90  55                        PUSH EBP
005F0D91  8B EC                     MOV EBP,ESP
005F0D93  83 EC 20                  SUB ESP,0x20
005F0D96  56                        PUSH ESI
005F0D97  8B 35 BC 17 81 00         MOV ESI,dword ptr [0x008117bc]
005F0D9D  85 F6                     TEST ESI,ESI
005F0D9F  8B D1                     MOV EDX,ECX
005F0DA1  74 57                     JZ 0x005f0dfa
005F0DA3  57                        PUSH EDI
005F0DA4  B9 08 00 00 00            MOV ECX,0x8
005F0DA9  33 C0                     XOR EAX,EAX
005F0DAB  8D 7D E0                  LEA EDI,[EBP + -0x20]
005F0DAE  F3 AB                     STOSD.REP ES:EDI
005F0DB0  66 8B 42 32               MOV AX,word ptr [EDX + 0x32]
005F0DB4  5F                        POP EDI
005F0DB5  66 89 45 F6               MOV word ptr [EBP + -0xa],AX
005F0DB9  8A 82 0D 03 00 00         MOV AL,byte ptr [EDX + 0x30d]
005F0DBF  84 C0                     TEST AL,AL
005F0DC1  74 20                     JZ 0x005f0de3
005F0DC3  8A 82 0E 03 00 00         MOV AL,byte ptr [EDX + 0x30e]
005F0DC9  3C FF                     CMP AL,0xff
005F0DCB  74 16                     JZ 0x005f0de3
005F0DCD  66 8B 92 0F 03 00 00      MOV DX,word ptr [EDX + 0x30f]
005F0DD4  66 33 C9                  XOR CX,CX
005F0DD7  8A C8                     MOV CL,AL
005F0DD9  66 89 55 FA               MOV word ptr [EBP + -0x6],DX
005F0DDD  66 89 4D F8               MOV word ptr [EBP + -0x8],CX
005F0DE1  EB 06                     JMP 0x005f0de9
LAB_005f0de3:
005F0DE3  66 C7 45 F8 FF 00         MOV word ptr [EBP + -0x8],0xff
LAB_005f0de9:
005F0DE9  8D 4D E0                  LEA ECX,[EBP + -0x20]
005F0DEC  C7 45 F0 D7 5D 00 00      MOV dword ptr [EBP + -0x10],0x5dd7
005F0DF3  8B 06                     MOV EAX,dword ptr [ESI]
005F0DF5  51                        PUSH ECX
005F0DF6  8B CE                     MOV ECX,ESI
005F0DF8  FF 10                     CALL dword ptr [EAX]
LAB_005f0dfa:
005F0DFA  5E                        POP ESI
005F0DFB  8B E5                     MOV ESP,EBP
005F0DFD  5D                        POP EBP
005F0DFE  C3                        RET
