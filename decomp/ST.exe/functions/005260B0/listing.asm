FUN_005260b0:
005260B0  55                        PUSH EBP
005260B1  8B EC                     MOV EBP,ESP
005260B3  83 EC 38                  SUB ESP,0x38
005260B6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005260B9  85 C0                     TEST EAX,EAX
005260BB  75 05                     JNZ 0x005260c2
005260BD  88 45 C8                  MOV byte ptr [EBP + -0x38],AL
005260C0  EB 11                     JMP 0x005260d3
LAB_005260c2:
005260C2  89 45 CB                  MOV dword ptr [EBP + -0x35],EAX
005260C5  8A 45 0C                  MOV AL,byte ptr [EBP + 0xc]
005260C8  B1 01                     MOV CL,0x1
005260CA  88 45 CF                  MOV byte ptr [EBP + -0x31],AL
005260CD  88 4D C8                  MOV byte ptr [EBP + -0x38],CL
005260D0  88 4D C9                  MOV byte ptr [EBP + -0x37],CL
LAB_005260d3:
005260D3  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
005260D6  8D 55 C8                  LEA EDX,[EBP + -0x38]
005260D9  51                        PUSH ECX
005260DA  52                        PUSH EDX
005260DB  E8 27 D5 ED FF            CALL 0x00403607
005260E0  83 C4 08                  ADD ESP,0x8
005260E3  8B E5                     MOV ESP,EBP
005260E5  5D                        POP EBP
005260E6  C3                        RET
