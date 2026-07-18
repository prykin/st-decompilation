FUN_00647c10:
00647C10  55                        PUSH EBP
00647C11  8B EC                     MOV EBP,ESP
00647C13  56                        PUSH ESI
00647C14  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00647C17  85 F6                     TEST ESI,ESI
00647C19  7D 13                     JGE 0x00647c2e
00647C1B  8B 81 88 00 00 00         MOV EAX,dword ptr [ECX + 0x88]
00647C21  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00647C27  05 39 30 00 00            ADD EAX,0x3039
00647C2C  EB 12                     JMP 0x00647c40
LAB_00647c2e:
00647C2E  8B 91 88 00 00 00         MOV EDX,dword ptr [ECX + 0x88]
00647C34  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00647C3A  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
LAB_00647c40:
00647C40  89 81 88 00 00 00         MOV dword ptr [ECX + 0x88],EAX
00647C46  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00647C49  2B CE                     SUB ECX,ESI
00647C4B  33 D2                     XOR EDX,EDX
00647C4D  41                        INC ECX
00647C4E  C1 E8 10                  SHR EAX,0x10
00647C51  F7 F1                     DIV ECX
00647C53  8D 04 32                  LEA EAX,[EDX + ESI*0x1]
00647C56  5E                        POP ESI
00647C57  5D                        POP EBP
00647C58  C2 08 00                  RET 0x8
