FUN_0051fac0:
0051FAC0  55                        PUSH EBP
0051FAC1  8B EC                     MOV EBP,ESP
0051FAC3  8A 55 0C                  MOV DL,byte ptr [EBP + 0xc]
0051FAC6  53                        PUSH EBX
0051FAC7  8B D9                     MOV EBX,ECX
0051FAC9  3A 93 1C 01 00 00         CMP DL,byte ptr [EBX + 0x11c]
0051FACF  0F 82 92 00 00 00         JC 0x0051fb67
0051FAD5  57                        PUSH EDI
0051FAD6  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0051FAD9  85 FF                     TEST EDI,EDI
0051FADB  74 70                     JZ 0x0051fb4d
0051FADD  83 C9 FF                  OR ECX,0xffffffff
0051FAE0  33 C0                     XOR EAX,EAX
0051FAE2  F2 AE                     SCASB.REPNE ES:EDI
0051FAE4  F7 D1                     NOT ECX
0051FAE6  56                        PUSH ESI
0051FAE7  8D 73 18                  LEA ESI,[EBX + 0x18]
0051FAEA  2B F9                     SUB EDI,ECX
0051FAEC  89 75 0C                  MOV dword ptr [EBP + 0xc],ESI
0051FAEF  8B C1                     MOV EAX,ECX
0051FAF1  8B F7                     MOV ESI,EDI
0051FAF3  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0051FAF6  C1 E9 02                  SHR ECX,0x2
0051FAF9  F3 A5                     MOVSD.REP ES:EDI,ESI
0051FAFB  8B C8                     MOV ECX,EAX
0051FAFD  8A 45 10                  MOV AL,byte ptr [EBP + 0x10]
0051FB00  83 E1 03                  AND ECX,0x3
0051FB03  FE C8                     DEC AL
0051FB05  F3 A4                     MOVSB.REP ES:EDI,ESI
0051FB07  3C 01                     CMP AL,0x1
0051FB09  88 93 1C 01 00 00         MOV byte ptr [EBX + 0x11c],DL
0051FB0F  88 83 1D 01 00 00         MOV byte ptr [EBX + 0x11d],AL
0051FB15  5E                        POP ESI
0051FB16  76 07                     JBE 0x0051fb1f
0051FB18  C6 83 1D 01 00 00 00      MOV byte ptr [EBX + 0x11d],0x0
LAB_0051fb1f:
0051FB1F  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0051FB22  89 8B 26 01 00 00         MOV dword ptr [EBX + 0x126],ECX
0051FB28  8B 4B 10                  MOV ECX,dword ptr [EBX + 0x10]
0051FB2B  E8 80 56 1C 00            CALL 0x006e51b0
0051FB30  8B CB                     MOV ECX,EBX
0051FB32  89 83 22 01 00 00         MOV dword ptr [EBX + 0x122],EAX
0051FB38  C7 83 2E 01 00 00 01 00 00 00  MOV dword ptr [EBX + 0x12e],0x1
0051FB42  E8 B3 1A EE FF            CALL 0x004015fa
0051FB47  5F                        POP EDI
0051FB48  5B                        POP EBX
0051FB49  5D                        POP EBP
0051FB4A  C2 10 00                  RET 0x10
LAB_0051fb4d:
0051FB4D  B9 41 00 00 00            MOV ECX,0x41
0051FB52  33 C0                     XOR EAX,EAX
0051FB54  8D 7B 18                  LEA EDI,[EBX + 0x18]
0051FB57  F3 AB                     STOSD.REP ES:EDI
0051FB59  8B CB                     MOV ECX,EBX
0051FB5B  89 83 2E 01 00 00         MOV dword ptr [EBX + 0x12e],EAX
0051FB61  E8 94 1A EE FF            CALL 0x004015fa
0051FB66  5F                        POP EDI
LAB_0051fb67:
0051FB67  5B                        POP EBX
0051FB68  5D                        POP EBP
0051FB69  C2 10 00                  RET 0x10
