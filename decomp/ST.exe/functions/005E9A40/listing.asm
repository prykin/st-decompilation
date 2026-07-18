FUN_005e9a40:
005E9A40  53                        PUSH EBX
005E9A41  56                        PUSH ESI
005E9A42  57                        PUSH EDI
005E9A43  8B F1                     MOV ESI,ECX
005E9A45  33 DB                     XOR EBX,EBX
005E9A47  BF 20 00 00 00            MOV EDI,0x20
005E9A4C  89 9E 60 1A 00 00         MOV dword ptr [ESI + 0x1a60],EBX
005E9A52  C7 46 29 02 00 00 00      MOV dword ptr [ESI + 0x29],0x2
005E9A59  89 7E 2D                  MOV dword ptr [ESI + 0x2d],EDI
005E9A5C  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005E9A61  8B 80 89 03 00 00         MOV EAX,dword ptr [EAX + 0x389]
005E9A67  3B C3                     CMP EAX,EBX
005E9A69  74 15                     JZ 0x005e9a80
005E9A6B  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005E9A6E  89 46 25                  MOV dword ptr [ESI + 0x25],EAX
005E9A71  89 7E 2D                  MOV dword ptr [ESI + 0x2d],EDI
005E9A74  89 5E 31                  MOV dword ptr [ESI + 0x31],EBX
005E9A77  8B 11                     MOV EDX,dword ptr [ECX]
005E9A79  8D 46 1D                  LEA EAX,[ESI + 0x1d]
005E9A7C  50                        PUSH EAX
005E9A7D  FF 52 18                  CALL dword ptr [EDX + 0x18]
LAB_005e9a80:
005E9A80  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005E9A86  39 99 4C 05 00 00         CMP dword ptr [ECX + 0x54c],EBX
005E9A8C  74 4A                     JZ 0x005e9ad8
005E9A8E  89 7E 2D                  MOV dword ptr [ESI + 0x2d],EDI
005E9A91  89 5E 31                  MOV dword ptr [ESI + 0x31],EBX
005E9A94  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005E9A9A  8D 7E 1D                  LEA EDI,[ESI + 0x1d]
005E9A9D  57                        PUSH EDI
005E9A9E  8B CE                     MOV ECX,ESI
005E9AA0  8B 82 4C 05 00 00         MOV EAX,dword ptr [EDX + 0x54c]
005E9AA6  50                        PUSH EAX
005E9AA7  6A 02                     PUSH 0x2
005E9AA9  E8 D2 C5 0F 00            CALL 0x006e6080
005E9AAE  C7 46 2D 29 00 00 00      MOV dword ptr [ESI + 0x2d],0x29
005E9AB5  C7 46 31 19 00 00 00      MOV dword ptr [ESI + 0x31],0x19
005E9ABC  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005E9AC2  57                        PUSH EDI
005E9AC3  8B 91 4C 05 00 00         MOV EDX,dword ptr [ECX + 0x54c]
005E9AC9  8B CE                     MOV ECX,ESI
005E9ACB  52                        PUSH EDX
005E9ACC  6A 02                     PUSH 0x2
005E9ACE  E8 AD C5 0F 00            CALL 0x006e6080
005E9AD3  BF 20 00 00 00            MOV EDI,0x20
LAB_005e9ad8:
005E9AD8  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005E9ADD  39 98 50 05 00 00         CMP dword ptr [EAX + 0x550],EBX
005E9AE3  74 20                     JZ 0x005e9b05
005E9AE5  89 7E 2D                  MOV dword ptr [ESI + 0x2d],EDI
005E9AE8  89 5E 31                  MOV dword ptr [ESI + 0x31],EBX
005E9AEB  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005E9AF1  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
005E9AF4  51                        PUSH ECX
005E9AF5  8B CE                     MOV ECX,ESI
005E9AF7  8B 82 50 05 00 00         MOV EAX,dword ptr [EDX + 0x550]
005E9AFD  50                        PUSH EAX
005E9AFE  6A 02                     PUSH 0x2
005E9B00  E8 7B C5 0F 00            CALL 0x006e6080
LAB_005e9b05:
005E9B05  5F                        POP EDI
005E9B06  5E                        POP ESI
005E9B07  5B                        POP EBX
005E9B08  C3                        RET
