FUN_0061cfb0:
0061CFB0  55                        PUSH EBP
0061CFB1  8B EC                     MOV EBP,ESP
0061CFB3  83 EC 0C                  SUB ESP,0xc
0061CFB6  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0061CFB9  33 C0                     XOR EAX,EAX
0061CFBB  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0061CFBE  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0061CFC1  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0061CFC4  B8 79 19 8C 02            MOV EAX,0x28c1979
0061CFC9  85 D2                     TEST EDX,EDX
0061CFCB  7C 10                     JL 0x0061cfdd
0061CFCD  F7 EA                     IMUL EDX
0061CFCF  D1 FA                     SAR EDX,0x1
0061CFD1  8B C2                     MOV EAX,EDX
0061CFD3  C1 E8 1F                  SHR EAX,0x1f
0061CFD6  03 D0                     ADD EDX,EAX
0061CFD8  0F BF D2                  MOVSX EDX,DX
0061CFDB  EB 0F                     JMP 0x0061cfec
LAB_0061cfdd:
0061CFDD  F7 EA                     IMUL EDX
0061CFDF  D1 FA                     SAR EDX,0x1
0061CFE1  8B C2                     MOV EAX,EDX
0061CFE3  C1 E8 1F                  SHR EAX,0x1f
0061CFE6  03 D0                     ADD EDX,EAX
0061CFE8  0F BF D2                  MOVSX EDX,DX
0061CFEB  4A                        DEC EDX
LAB_0061cfec:
0061CFEC  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0061CFEF  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0061CFF2  85 D2                     TEST EDX,EDX
0061CFF4  B8 79 19 8C 02            MOV EAX,0x28c1979
0061CFF9  7C 10                     JL 0x0061d00b
0061CFFB  F7 EA                     IMUL EDX
0061CFFD  D1 FA                     SAR EDX,0x1
0061CFFF  8B C2                     MOV EAX,EDX
0061D001  C1 E8 1F                  SHR EAX,0x1f
0061D004  03 D0                     ADD EDX,EAX
0061D006  0F BF D2                  MOVSX EDX,DX
0061D009  EB 0F                     JMP 0x0061d01a
LAB_0061d00b:
0061D00B  F7 EA                     IMUL EDX
0061D00D  D1 FA                     SAR EDX,0x1
0061D00F  8B C2                     MOV EAX,EDX
0061D011  C1 E8 1F                  SHR EAX,0x1f
0061D014  03 D0                     ADD EDX,EAX
0061D016  0F BF D2                  MOVSX EDX,DX
0061D019  4A                        DEC EDX
LAB_0061d01a:
0061D01A  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
0061D01D  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0061D020  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0061D023  8D 4D F4                  LEA ECX,[EBP + -0xc]
0061D026  6A 00                     PUSH 0x0
0061D028  51                        PUSH ECX
0061D029  52                        PUSH EDX
0061D02A  6A 00                     PUSH 0x0
0061D02C  6A 02                     PUSH 0x2
0061D02E  B9 58 76 80 00            MOV ECX,0x807658
0061D033  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0061D036  E8 9D 7B DE FF            CALL 0x00404bd8
0061D03B  8B E5                     MOV ESP,EBP
0061D03D  5D                        POP EBP
0061D03E  C2 0C 00                  RET 0xc
