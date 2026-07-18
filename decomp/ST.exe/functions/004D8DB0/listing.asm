FUN_004d8db0:
004D8DB0  8B 81 45 02 00 00         MOV EAX,dword ptr [ECX + 0x245]
004D8DB6  83 F8 06                  CMP EAX,0x6
004D8DB9  77 31                     JA 0x004d8dec
switchD_004d8dbb::switchD:
004D8DBB  FF 24 85 F0 8D 4D 00      JMP dword ptr [EAX*0x4 + 0x4d8df0]
switchD_004d8dbb::caseD_0:
004D8DC2  8B 91 F0 04 00 00         MOV EDX,dword ptr [ECX + 0x4f0]
004D8DC8  33 C0                     XOR EAX,EAX
004D8DCA  3B D0                     CMP EDX,EAX
004D8DCC  74 18                     JZ 0x004d8de6
004D8DCE  83 B9 EC 04 00 00 64      CMP dword ptr [ECX + 0x4ec],0x64
004D8DD5  7D 15                     JGE 0x004d8dec
004D8DD7  89 81 61 02 00 00         MOV dword ptr [ECX + 0x261],EAX
004D8DDD  C3                        RET
switchD_004d8dbb::caseD_1:
004D8DDE  33 C0                     XOR EAX,EAX
004D8DE0  89 81 D0 04 00 00         MOV dword ptr [ECX + 0x4d0],EAX
LAB_004d8de6:
004D8DE6  89 81 61 02 00 00         MOV dword ptr [ECX + 0x261],EAX
switchD_004d8dbb::caseD_2:
004D8DEC  33 C0                     XOR EAX,EAX
004D8DEE  C3                        RET
