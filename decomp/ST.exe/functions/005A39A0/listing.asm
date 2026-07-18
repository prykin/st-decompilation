FUN_005a39a0:
005A39A0  55                        PUSH EBP
005A39A1  8B EC                     MOV EBP,ESP
005A39A3  83 EC 0C                  SUB ESP,0xc
005A39A6  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
005A39A9  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
005A39AC  53                        PUSH EBX
005A39AD  8B D9                     MOV EBX,ECX
005A39AF  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
005A39B2  56                        PUSH ESI
005A39B3  57                        PUSH EDI
005A39B4  50                        PUSH EAX
005A39B5  51                        PUSH ECX
005A39B6  52                        PUSH EDX
005A39B7  B9 90 2A 80 00            MOV ECX,0x802a90
005A39BC  E8 06 05 E6 FF            CALL 0x00403ec7
005A39C1  8B D0                     MOV EDX,EAX
005A39C3  85 D2                     TEST EDX,EDX
005A39C5  74 29                     JZ 0x005a39f0
005A39C7  8B FA                     MOV EDI,EDX
005A39C9  83 C9 FF                  OR ECX,0xffffffff
005A39CC  33 C0                     XOR EAX,EAX
005A39CE  F2 AE                     SCASB.REPNE ES:EDI
005A39D0  F7 D1                     NOT ECX
005A39D2  49                        DEC ECX
005A39D3  74 1B                     JZ 0x005a39f0
005A39D5  52                        PUSH EDX
005A39D6  E8 25 C5 18 00            CALL 0x0072ff00
005A39DB  50                        PUSH EAX
005A39DC  8D 45 F4                  LEA EAX,[EBP + -0xc]
005A39DF  68 FC 28 7C 00            PUSH 0x7c28fc
005A39E4  50                        PUSH EAX
005A39E5  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005A39EB  83 C4 10                  ADD ESP,0x10
005A39EE  EB 25                     JMP 0x005a3a15
LAB_005a39f0:
005A39F0  BF 8C C5 7C 00            MOV EDI,0x7cc58c
005A39F5  83 C9 FF                  OR ECX,0xffffffff
005A39F8  33 C0                     XOR EAX,EAX
005A39FA  8D 55 F4                  LEA EDX,[EBP + -0xc]
005A39FD  F2 AE                     SCASB.REPNE ES:EDI
005A39FF  F7 D1                     NOT ECX
005A3A01  2B F9                     SUB EDI,ECX
005A3A03  8B C1                     MOV EAX,ECX
005A3A05  8B F7                     MOV ESI,EDI
005A3A07  8B FA                     MOV EDI,EDX
005A3A09  C1 E9 02                  SHR ECX,0x2
005A3A0C  F3 A5                     MOVSD.REP ES:EDI,ESI
005A3A0E  8B C8                     MOV ECX,EAX
005A3A10  83 E1 03                  AND ECX,0x3
005A3A13  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_005a3a15:
005A3A15  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
005A3A18  8B 7D 20                  MOV EDI,dword ptr [EBP + 0x20]
005A3A1B  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
005A3A1E  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
005A3A21  8B 83 C0 1A 00 00         MOV EAX,dword ptr [EBX + 0x1ac0]
005A3A27  68 FF 00 00 00            PUSH 0xff
005A3A2C  56                        PUSH ESI
005A3A2D  57                        PUSH EDI
005A3A2E  51                        PUSH ECX
005A3A2F  52                        PUSH EDX
005A3A30  6A 00                     PUSH 0x0
005A3A32  50                        PUSH EAX
005A3A33  E8 38 07 11 00            CALL 0x006b4170
005A3A38  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
005A3A3B  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
005A3A3E  8B 83 C0 1A 00 00         MOV EAX,dword ptr [EBX + 0x1ac0]
005A3A44  56                        PUSH ESI
005A3A45  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005A3A48  57                        PUSH EDI
005A3A49  51                        PUSH ECX
005A3A4A  52                        PUSH EDX
005A3A4B  6A 00                     PUSH 0x0
005A3A4D  50                        PUSH EAX
005A3A4E  8B CE                     MOV ECX,ESI
005A3A50  E8 3B D0 16 00            CALL 0x00710a90
005A3A55  6A 00                     PUSH 0x0
005A3A57  6A FF                     PUSH -0x1
005A3A59  8D 4D F4                  LEA ECX,[EBP + -0xc]
005A3A5C  6A FF                     PUSH -0x1
005A3A5E  51                        PUSH ECX
005A3A5F  8B CE                     MOV ECX,ESI
005A3A61  E8 5A DF 16 00            CALL 0x007119c0
005A3A66  5F                        POP EDI
005A3A67  5E                        POP ESI
005A3A68  5B                        POP EBX
005A3A69  8B E5                     MOV ESP,EBP
005A3A6B  5D                        POP EBP
005A3A6C  C2 20 00                  RET 0x20
