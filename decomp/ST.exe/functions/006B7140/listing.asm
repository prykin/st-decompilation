FUN_006b7140:
006B7140  55                        PUSH EBP
006B7141  8B EC                     MOV EBP,ESP
006B7143  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B7146  56                        PUSH ESI
006B7147  6A 10                     PUSH 0x10
006B7149  8B 08                     MOV ECX,dword ptr [EAX]
006B714B  8D 70 40                  LEA ESI,[EAX + 0x40]
006B714E  56                        PUSH ESI
006B714F  83 C0 18                  ADD EAX,0x18
006B7152  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
006B7158  8B 11                     MOV EDX,dword ptr [ECX]
006B715A  68 70 71 6B 00            PUSH 0x6b7170
006B715F  50                        PUSH EAX
006B7160  51                        PUSH ECX
006B7161  FF 52 30                  CALL dword ptr [EDX + 0x30]
006B7164  8B 06                     MOV EAX,dword ptr [ESI]
006B7166  5E                        POP ESI
006B7167  40                        INC EAX
006B7168  5D                        POP EBP
006B7169  C2 04 00                  RET 0x4
