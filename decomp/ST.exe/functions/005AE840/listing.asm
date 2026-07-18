FUN_005ae840:
005AE840  56                        PUSH ESI
005AE841  8B F1                     MOV ESI,ECX
005AE843  57                        PUSH EDI
005AE844  BF 01 00 00 00            MOV EDI,0x1
005AE849  8B 86 6C 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a6c]
005AE84F  89 BE 60 1A 00 00         MOV dword ptr [ESI + 0x1a60],EDI
005AE855  85 C0                     TEST EAX,EAX
005AE857  C7 46 29 02 00 00 00      MOV dword ptr [ESI + 0x29],0x2
005AE85E  C7 46 2D 20 00 00 00      MOV dword ptr [ESI + 0x2d],0x20
005AE865  74 12                     JZ 0x005ae879
005AE867  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005AE86A  89 46 25                  MOV dword ptr [ESI + 0x25],EAX
005AE86D  89 7E 31                  MOV dword ptr [ESI + 0x31],EDI
005AE870  8D 56 1D                  LEA EDX,[ESI + 0x1d]
005AE873  8B 01                     MOV EAX,dword ptr [ECX]
005AE875  52                        PUSH EDX
005AE876  FF 50 18                  CALL dword ptr [EAX + 0x18]
LAB_005ae879:
005AE879  8B 86 83 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c83]
005AE87F  85 C0                     TEST EAX,EAX
005AE881  74 12                     JZ 0x005ae895
005AE883  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005AE886  89 46 25                  MOV dword ptr [ESI + 0x25],EAX
005AE889  89 7E 31                  MOV dword ptr [ESI + 0x31],EDI
005AE88C  8D 56 1D                  LEA EDX,[ESI + 0x1d]
005AE88F  8B 01                     MOV EAX,dword ptr [ECX]
005AE891  52                        PUSH EDX
005AE892  FF 50 18                  CALL dword ptr [EAX + 0x18]
LAB_005ae895:
005AE895  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005AE89A  8B 80 89 03 00 00         MOV EAX,dword ptr [EAX + 0x389]
005AE8A0  85 C0                     TEST EAX,EAX
005AE8A2  74 12                     JZ 0x005ae8b6
005AE8A4  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005AE8A7  89 46 25                  MOV dword ptr [ESI + 0x25],EAX
005AE8AA  89 7E 31                  MOV dword ptr [ESI + 0x31],EDI
005AE8AD  8D 46 1D                  LEA EAX,[ESI + 0x1d]
005AE8B0  8B 11                     MOV EDX,dword ptr [ECX]
005AE8B2  50                        PUSH EAX
005AE8B3  FF 52 18                  CALL dword ptr [EDX + 0x18]
LAB_005ae8b6:
005AE8B6  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005AE8BC  8B 81 50 05 00 00         MOV EAX,dword ptr [ECX + 0x550]
005AE8C2  85 C0                     TEST EAX,EAX
005AE8C4  74 12                     JZ 0x005ae8d8
005AE8C6  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005AE8C9  89 46 25                  MOV dword ptr [ESI + 0x25],EAX
005AE8CC  89 7E 31                  MOV dword ptr [ESI + 0x31],EDI
005AE8CF  8D 46 1D                  LEA EAX,[ESI + 0x1d]
005AE8D2  8B 11                     MOV EDX,dword ptr [ECX]
005AE8D4  50                        PUSH EAX
005AE8D5  FF 52 18                  CALL dword ptr [EDX + 0x18]
LAB_005ae8d8:
005AE8D8  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005AE8DE  8B 81 4C 05 00 00         MOV EAX,dword ptr [ECX + 0x54c]
005AE8E4  85 C0                     TEST EAX,EAX
005AE8E6  74 1D                     JZ 0x005ae905
005AE8E8  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005AE8EB  89 46 25                  MOV dword ptr [ESI + 0x25],EAX
005AE8EE  C7 46 2D 29 00 00 00      MOV dword ptr [ESI + 0x2d],0x29
005AE8F5  C7 46 31 09 00 00 00      MOV dword ptr [ESI + 0x31],0x9
005AE8FC  8B 11                     MOV EDX,dword ptr [ECX]
005AE8FE  83 C6 1D                  ADD ESI,0x1d
005AE901  56                        PUSH ESI
005AE902  FF 52 18                  CALL dword ptr [EDX + 0x18]
LAB_005ae905:
005AE905  5F                        POP EDI
005AE906  5E                        POP ESI
005AE907  C3                        RET
