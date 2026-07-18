FUN_005bba40:
005BBA40  8B C1                     MOV EAX,ECX
005BBA42  33 D2                     XOR EDX,EDX
005BBA44  8B 88 73 1A 00 00         MOV ECX,dword ptr [EAX + 0x1a73]
005BBA4A  89 90 65 1A 00 00         MOV dword ptr [EAX + 0x1a65],EDX
005BBA50  3B CA                     CMP ECX,EDX
005BBA52  C7 40 29 02 00 00 00      MOV dword ptr [EAX + 0x29],0x2
005BBA59  C7 40 2D 20 00 00 00      MOV dword ptr [EAX + 0x2d],0x20
005BBA60  74 12                     JZ 0x005bba74
005BBA62  89 48 25                  MOV dword ptr [EAX + 0x25],ECX
005BBA65  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005BBA68  89 50 31                  MOV dword ptr [EAX + 0x31],EDX
005BBA6B  83 C0 1D                  ADD EAX,0x1d
005BBA6E  8B 11                     MOV EDX,dword ptr [ECX]
005BBA70  50                        PUSH EAX
005BBA71  FF 52 18                  CALL dword ptr [EDX + 0x18]
LAB_005bba74:
005BBA74  C3                        RET
