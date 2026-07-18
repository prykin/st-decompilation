FUN_00584c50:
00584C50  55                        PUSH EBP
00584C51  8B EC                     MOV EBP,ESP
00584C53  83 EC 3C                  SUB ESP,0x3c
00584C56  56                        PUSH ESI
00584C57  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00584C5A  85 F6                     TEST ESI,ESI
00584C5C  8B D1                     MOV EDX,ECX
00584C5E  74 6C                     JZ 0x00584ccc
00584C60  57                        PUSH EDI
00584C61  B9 07 00 00 00            MOV ECX,0x7
00584C66  33 C0                     XOR EAX,EAX
00584C68  8D 7D E4                  LEA EDI,[EBP + -0x1c]
00584C6B  F3 AB                     STOSD.REP ES:EDI
00584C6D  A1 6C 65 7E 00            MOV EAX,[0x007e656c]
00584C72  66 8B 8A 84 02 00 00      MOV CX,word ptr [EDX + 0x284]
00584C79  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00584C7C  66 8B 82 80 02 00 00      MOV AX,word ptr [EDX + 0x280]
00584C83  66 89 4D F0               MOV word ptr [EBP + -0x10],CX
00584C87  8B 8A 5C 02 00 00         MOV ECX,dword ptr [EDX + 0x25c]
00584C8D  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
00584C90  66 89 45 F2               MOV word ptr [EBP + -0xe],AX
00584C94  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
00584C97  B9 08 00 00 00            MOV ECX,0x8
00584C9C  33 C0                     XOR EAX,EAX
00584C9E  8D 7D C4                  LEA EDI,[EBP + -0x3c]
00584CA1  F3 AB                     STOSD.REP ES:EDI
00584CA3  8D 45 E4                  LEA EAX,[EBP + -0x1c]
00584CA6  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
00584CA9  8B 16                     MOV EDX,dword ptr [ESI]
00584CAB  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
00584CAE  8D 45 C4                  LEA EAX,[EBP + -0x3c]
00584CB1  8B CE                     MOV ECX,ESI
00584CB3  50                        PUSH EAX
00584CB4  C7 45 E8 A3 00 00 00      MOV dword ptr [EBP + -0x18],0xa3
00584CBB  C7 45 D0 02 00 00 00      MOV dword ptr [EBP + -0x30],0x2
00584CC2  C7 45 D4 10 01 00 00      MOV dword ptr [EBP + -0x2c],0x110
00584CC9  FF 12                     CALL dword ptr [EDX]
00584CCB  5F                        POP EDI
LAB_00584ccc:
00584CCC  5E                        POP ESI
00584CCD  8B E5                     MOV ESP,EBP
00584CCF  5D                        POP EBP
00584CD0  C2 04 00                  RET 0x4
