LoadStartPlt:
0055DA40  55                        PUSH EBP
0055DA41  8B EC                     MOV EBP,ESP
0055DA43  83 EC 44                  SUB ESP,0x44
0055DA46  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0055DA4B  56                        PUSH ESI
0055DA4C  57                        PUSH EDI
0055DA4D  8D 55 C0                  LEA EDX,[EBP + -0x40]
0055DA50  8D 4D BC                  LEA ECX,[EBP + -0x44]
0055DA53  6A 00                     PUSH 0x0
0055DA55  52                        PUSH EDX
0055DA56  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
0055DA59  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0055DA5F  E8 8C FD 1C 00            CALL 0x0072d7f0
0055DA64  8B F0                     MOV ESI,EAX
0055DA66  83 C4 08                  ADD ESP,0x8
0055DA69  85 F6                     TEST ESI,ESI
0055DA6B  75 6C                     JNZ 0x0055dad9
0055DA6D  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0055DA70  A1 6C AF 79 00            MOV EAX,[0x0079af6c]
0055DA75  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0055DA78  6A 01                     PUSH 0x1
0055DA7A  56                        PUSH ESI
0055DA7B  50                        PUSH EAX
0055DA7C  57                        PUSH EDI
0055DA7D  E8 3E A5 1B 00            CALL 0x00717fc0
0055DA82  8B 0D 88 AF 79 00         MOV ECX,dword ptr [0x0079af88]
0055DA88  6A 01                     PUSH 0x1
0055DA8A  56                        PUSH ESI
0055DA8B  51                        PUSH ECX
0055DA8C  57                        PUSH EDI
0055DA8D  A3 A4 32 80 00            MOV [0x008032a4],EAX
0055DA92  E8 29 A5 1B 00            CALL 0x00717fc0
0055DA97  8B 15 98 AF 79 00         MOV EDX,dword ptr [0x0079af98]
0055DA9D  6A 01                     PUSH 0x1
0055DA9F  56                        PUSH ESI
0055DAA0  52                        PUSH EDX
0055DAA1  57                        PUSH EDI
0055DAA2  A3 A8 32 80 00            MOV [0x008032a8],EAX
0055DAA7  E8 14 A5 1B 00            CALL 0x00717fc0
0055DAAC  A3 AC 32 80 00            MOV [0x008032ac],EAX
0055DAB1  A1 9C AF 79 00            MOV EAX,[0x0079af9c]
0055DAB6  6A 01                     PUSH 0x1
0055DAB8  56                        PUSH ESI
0055DAB9  50                        PUSH EAX
0055DABA  57                        PUSH EDI
0055DABB  E8 00 A5 1B 00            CALL 0x00717fc0
0055DAC0  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
0055DAC3  83 C4 40                  ADD ESP,0x40
0055DAC6  A3 B0 32 80 00            MOV [0x008032b0],EAX
0055DACB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0055DAD1  33 C0                     XOR EAX,EAX
0055DAD3  5F                        POP EDI
0055DAD4  5E                        POP ESI
0055DAD5  8B E5                     MOV ESP,EBP
0055DAD7  5D                        POP EBP
0055DAD8  C3                        RET
LAB_0055dad9:
0055DAD9  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
0055DADC  68 C8 95 7C 00            PUSH 0x7c95c8
0055DAE1  68 CC 4C 7A 00            PUSH 0x7a4ccc
0055DAE6  56                        PUSH ESI
0055DAE7  6A 00                     PUSH 0x0
0055DAE9  6A 7B                     PUSH 0x7b
0055DAEB  68 9C 95 7C 00            PUSH 0x7c959c
0055DAF0  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0055DAF6  E8 D5 F9 14 00            CALL 0x006ad4d0
0055DAFB  83 C4 18                  ADD ESP,0x18
0055DAFE  85 C0                     TEST EAX,EAX
0055DB00  74 01                     JZ 0x0055db03
0055DB02  CC                        INT3
LAB_0055db03:
0055DB03  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0055DB06  50                        PUSH EAX
0055DB07  E8 F8 67 EA FF            CALL 0x00404304
0055DB0C  83 C4 04                  ADD ESP,0x4
0055DB0F  6A 7D                     PUSH 0x7d
0055DB11  68 9C 95 7C 00            PUSH 0x7c959c
0055DB16  6A 00                     PUSH 0x0
0055DB18  56                        PUSH ESI
0055DB19  E8 22 83 14 00            CALL 0x006a5e40
0055DB1E  8B C6                     MOV EAX,ESI
0055DB20  5F                        POP EDI
0055DB21  5E                        POP ESI
0055DB22  8B E5                     MOV ESP,EBP
0055DB24  5D                        POP EBP
0055DB25  C3                        RET
