FUN_005d00b0:
005D00B0  55                        PUSH EBP
005D00B1  8B EC                     MOV EBP,ESP
005D00B3  83 EC 60                  SUB ESP,0x60
005D00B6  53                        PUSH EBX
005D00B7  56                        PUSH ESI
005D00B8  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005D00BB  8B D9                     MOV EBX,ECX
005D00BD  57                        PUSH EDI
005D00BE  B9 18 00 00 00            MOV ECX,0x18
005D00C3  8B 56 50                  MOV EDX,dword ptr [ESI + 0x50]
005D00C6  33 C0                     XOR EAX,EAX
005D00C8  8D 7D A0                  LEA EDI,[EBP + -0x60]
005D00CB  F3 AB                     STOSD.REP ES:EDI
005D00CD  8A 4E 03                  MOV CL,byte ptr [ESI + 0x3]
005D00D0  8A 46 02                  MOV AL,byte ptr [ESI + 0x2]
005D00D3  88 4D A3                  MOV byte ptr [EBP + -0x5d],CL
005D00D6  8D 4D F0                  LEA ECX,[EBP + -0x10]
005D00D9  88 45 A2                  MOV byte ptr [EBP + -0x5e],AL
005D00DC  C6 45 A4 01               MOV byte ptr [EBP + -0x5c],0x1
005D00E0  E8 5B FD 0D 00            CALL 0x006afe40
005D00E5  8B 46 54                  MOV EAX,dword ptr [ESI + 0x54]
005D00E8  8A 56 4A                  MOV DL,byte ptr [ESI + 0x4a]
005D00EB  8B 4E 58                  MOV ECX,dword ptr [ESI + 0x58]
005D00EE  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005D00F1  33 C0                     XOR EAX,EAX
005D00F3  88 55 EA                  MOV byte ptr [EBP + -0x16],DL
005D00F6  8B 56 5C                  MOV EDX,dword ptr [ESI + 0x5c]
005D00F9  89 45 EB                  MOV dword ptr [EBP + -0x15],EAX
005D00FC  88 45 EF                  MOV byte ptr [EBP + -0x11],AL
005D00FF  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005D0102  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005D0105  8D 45 A0                  LEA EAX,[EBP + -0x60]
005D0108  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
005D010B  8B 93 84 1F 00 00         MOV EDX,dword ptr [EBX + 0x1f84]
005D0111  50                        PUSH EAX
005D0112  51                        PUSH ECX
005D0113  52                        PUSH EDX
005D0114  E8 B7 10 0E 00            CALL 0x006b11d0
005D0119  5F                        POP EDI
005D011A  5E                        POP ESI
005D011B  5B                        POP EBX
005D011C  8B E5                     MOV ESP,EBP
005D011E  5D                        POP EBP
005D011F  C2 08 00                  RET 0x8
