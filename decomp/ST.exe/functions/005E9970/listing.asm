FUN_005e9970:
005E9970  56                        PUSH ESI
005E9971  8B F1                     MOV ESI,ECX
005E9973  C7 86 60 1A 00 00 01 00 00 00  MOV dword ptr [ESI + 0x1a60],0x1
005E997D  C7 46 29 02 00 00 00      MOV dword ptr [ESI + 0x29],0x2
005E9984  C7 46 2D 20 00 00 00      MOV dword ptr [ESI + 0x2d],0x20
005E998B  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005E9990  8B 80 89 03 00 00         MOV EAX,dword ptr [EAX + 0x389]
005E9996  85 C0                     TEST EAX,EAX
005E9998  74 16                     JZ 0x005e99b0
005E999A  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005E999D  89 46 25                  MOV dword ptr [ESI + 0x25],EAX
005E99A0  C7 46 31 01 00 00 00      MOV dword ptr [ESI + 0x31],0x1
005E99A7  8D 46 1D                  LEA EAX,[ESI + 0x1d]
005E99AA  8B 11                     MOV EDX,dword ptr [ECX]
005E99AC  50                        PUSH EAX
005E99AD  FF 52 18                  CALL dword ptr [EDX + 0x18]
LAB_005e99b0:
005E99B0  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005E99B6  8B 81 50 05 00 00         MOV EAX,dword ptr [ECX + 0x550]
005E99BC  85 C0                     TEST EAX,EAX
005E99BE  74 16                     JZ 0x005e99d6
005E99C0  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005E99C3  89 46 25                  MOV dword ptr [ESI + 0x25],EAX
005E99C6  C7 46 31 01 00 00 00      MOV dword ptr [ESI + 0x31],0x1
005E99CD  8D 46 1D                  LEA EAX,[ESI + 0x1d]
005E99D0  8B 11                     MOV EDX,dword ptr [ECX]
005E99D2  50                        PUSH EAX
005E99D3  FF 52 18                  CALL dword ptr [EDX + 0x18]
LAB_005e99d6:
005E99D6  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005E99DC  8B 81 4C 05 00 00         MOV EAX,dword ptr [ECX + 0x54c]
005E99E2  85 C0                     TEST EAX,EAX
005E99E4  74 1D                     JZ 0x005e9a03
005E99E6  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005E99E9  89 46 25                  MOV dword ptr [ESI + 0x25],EAX
005E99EC  C7 46 2D 29 00 00 00      MOV dword ptr [ESI + 0x2d],0x29
005E99F3  C7 46 31 09 00 00 00      MOV dword ptr [ESI + 0x31],0x9
005E99FA  8B 11                     MOV EDX,dword ptr [ECX]
005E99FC  83 C6 1D                  ADD ESI,0x1d
005E99FF  56                        PUSH ESI
005E9A00  FF 52 18                  CALL dword ptr [EDX + 0x18]
LAB_005e9a03:
005E9A03  5E                        POP ESI
005E9A04  C3                        RET
