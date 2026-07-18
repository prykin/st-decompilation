FUN_005bb9f0:
005BB9F0  8B C1                     MOV EAX,ECX
005BB9F2  BA 01 00 00 00            MOV EDX,0x1
005BB9F7  8B 88 73 1A 00 00         MOV ECX,dword ptr [EAX + 0x1a73]
005BB9FD  89 90 65 1A 00 00         MOV dword ptr [EAX + 0x1a65],EDX
005BBA03  85 C9                     TEST ECX,ECX
005BBA05  C7 40 29 02 00 00 00      MOV dword ptr [EAX + 0x29],0x2
005BBA0C  C7 40 2D 20 00 00 00      MOV dword ptr [EAX + 0x2d],0x20
005BBA13  74 12                     JZ 0x005bba27
005BBA15  89 48 25                  MOV dword ptr [EAX + 0x25],ECX
005BBA18  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005BBA1B  89 50 31                  MOV dword ptr [EAX + 0x31],EDX
005BBA1E  83 C0 1D                  ADD EAX,0x1d
005BBA21  8B 11                     MOV EDX,dword ptr [ECX]
005BBA23  50                        PUSH EAX
005BBA24  FF 52 18                  CALL dword ptr [EDX + 0x18]
LAB_005bba27:
005BBA27  C3                        RET
