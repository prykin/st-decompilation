FUN_004f1d20:
004F1D20  55                        PUSH EBP
004F1D21  8B EC                     MOV EBP,ESP
004F1D23  83 EC 38                  SUB ESP,0x38
004F1D26  57                        PUSH EDI
004F1D27  B9 0D 00 00 00            MOV ECX,0xd
004F1D2C  33 C0                     XOR EAX,EAX
004F1D2E  8D 7D C8                  LEA EDI,[EBP + -0x38]
004F1D31  F3 AB                     STOSD.REP ES:EDI
004F1D33  66 AB                     STOSW ES:EDI
004F1D35  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004F1D38  6A 00                     PUSH 0x0
004F1D3A  C6 45 C9 01               MOV byte ptr [EBP + -0x37],0x1
004F1D3E  8A 08                     MOV CL,byte ptr [EAX]
004F1D40  8A 50 01                  MOV DL,byte ptr [EAX + 0x1]
004F1D43  88 4D C8                  MOV byte ptr [EBP + -0x38],CL
004F1D46  8B 48 02                  MOV ECX,dword ptr [EAX + 0x2]
004F1D49  88 55 CA                  MOV byte ptr [EBP + -0x36],DL
004F1D4C  8A 50 06                  MOV DL,byte ptr [EAX + 0x6]
004F1D4F  8B 40 07                  MOV EAX,dword ptr [EAX + 0x7]
004F1D52  89 4D CB                  MOV dword ptr [EBP + -0x35],ECX
004F1D55  8D 4D C8                  LEA ECX,[EBP + -0x38]
004F1D58  88 55 CF                  MOV byte ptr [EBP + -0x31],DL
004F1D5B  51                        PUSH ECX
004F1D5C  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
004F1D5F  E8 A3 18 F1 FF            CALL 0x00403607
004F1D64  83 C4 08                  ADD ESP,0x8
004F1D67  5F                        POP EDI
004F1D68  8B E5                     MOV ESP,EBP
004F1D6A  5D                        POP EBP
004F1D6B  C2 04 00                  RET 0x4
