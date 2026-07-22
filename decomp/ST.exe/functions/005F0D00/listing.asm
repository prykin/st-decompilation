STArtiafactC::sub_005F0D00:
005F0D00  55                        PUSH EBP
005F0D01  8B EC                     MOV EBP,ESP
005F0D03  83 EC 20                  SUB ESP,0x20
005F0D06  56                        PUSH ESI
005F0D07  8B 35 BC 17 81 00         MOV ESI,dword ptr [0x008117bc]
005F0D0D  85 F6                     TEST ESI,ESI
005F0D0F  8B D1                     MOV EDX,ECX
005F0D11  74 57                     JZ 0x005f0d6a
005F0D13  57                        PUSH EDI
005F0D14  B9 08 00 00 00            MOV ECX,0x8
005F0D19  33 C0                     XOR EAX,EAX
005F0D1B  8D 7D E0                  LEA EDI,[EBP + -0x20]
005F0D1E  F3 AB                     STOSD.REP ES:EDI
005F0D20  66 8B 42 32               MOV AX,word ptr [EDX + 0x32]
005F0D24  5F                        POP EDI
005F0D25  66 89 45 F6               MOV word ptr [EBP + -0xa],AX
005F0D29  8A 82 0D 03 00 00         MOV AL,byte ptr [EDX + 0x30d]
005F0D2F  84 C0                     TEST AL,AL
005F0D31  74 20                     JZ 0x005f0d53
005F0D33  8A 82 0E 03 00 00         MOV AL,byte ptr [EDX + 0x30e]
005F0D39  3C FF                     CMP AL,0xff
005F0D3B  74 16                     JZ 0x005f0d53
005F0D3D  66 8B 92 0F 03 00 00      MOV DX,word ptr [EDX + 0x30f]
005F0D44  66 33 C9                  XOR CX,CX
005F0D47  8A C8                     MOV CL,AL
005F0D49  66 89 55 FA               MOV word ptr [EBP + -0x6],DX
005F0D4D  66 89 4D F8               MOV word ptr [EBP + -0x8],CX
005F0D51  EB 06                     JMP 0x005f0d59
LAB_005f0d53:
005F0D53  66 C7 45 F8 FF 00         MOV word ptr [EBP + -0x8],0xff
LAB_005f0d59:
005F0D59  8D 4D E0                  LEA ECX,[EBP + -0x20]
005F0D5C  C7 45 F0 DC 5D 00 00      MOV dword ptr [EBP + -0x10],0x5ddc
005F0D63  8B 06                     MOV EAX,dword ptr [ESI]
005F0D65  51                        PUSH ECX
005F0D66  8B CE                     MOV ECX,ESI
005F0D68  FF 10                     CALL dword ptr [EAX]
LAB_005f0d6a:
005F0D6A  5E                        POP ESI
005F0D6B  8B E5                     MOV ESP,EBP
005F0D6D  5D                        POP EBP
005F0D6E  C3                        RET
