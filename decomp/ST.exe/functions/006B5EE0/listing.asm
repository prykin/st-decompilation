FUN_006b5ee0:
006B5EE0  55                        PUSH EBP
006B5EE1  8B EC                     MOV EBP,ESP
006B5EE3  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006B5EE6  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006B5EE9  53                        PUSH EBX
006B5EEA  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
006B5EED  56                        PUSH ESI
006B5EEE  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006B5EF1  57                        PUSH EDI
006B5EF2  8D 54 0B FF               LEA EDX,[EBX + ECX*0x1 + -0x1]
006B5EF6  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006B5EF9  8D 7C 06 FF               LEA EDI,[ESI + EAX*0x1 + -0x1]
006B5EFD  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006B5F00  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
006B5F03  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006B5F06  50                        PUSH EAX
006B5F07  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B5F0A  51                        PUSH ECX
006B5F0B  53                        PUSH EBX
006B5F0C  57                        PUSH EDI
006B5F0D  53                        PUSH EBX
006B5F0E  56                        PUSH ESI
006B5F0F  52                        PUSH EDX
006B5F10  50                        PUSH EAX
006B5F11  E8 FA FB FF FF            CALL 0x006b5b10
006B5F16  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006B5F19  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006B5F1C  52                        PUSH EDX
006B5F1D  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006B5F20  8D 41 FF                  LEA EAX,[ECX + -0x1]
006B5F23  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006B5F26  51                        PUSH ECX
006B5F27  43                        INC EBX
006B5F28  50                        PUSH EAX
006B5F29  57                        PUSH EDI
006B5F2A  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
006B5F2D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B5F30  53                        PUSH EBX
006B5F31  57                        PUSH EDI
006B5F32  52                        PUSH EDX
006B5F33  50                        PUSH EAX
006B5F34  E8 D7 FB FF FF            CALL 0x006b5b10
006B5F39  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006B5F3C  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006B5F3F  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006B5F42  51                        PUSH ECX
006B5F43  52                        PUSH EDX
006B5F44  50                        PUSH EAX
006B5F45  56                        PUSH ESI
006B5F46  50                        PUSH EAX
006B5F47  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B5F4A  57                        PUSH EDI
006B5F4B  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006B5F4E  57                        PUSH EDI
006B5F4F  50                        PUSH EAX
006B5F50  E8 BB FB FF FF            CALL 0x006b5b10
006B5F55  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006B5F58  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006B5F5B  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006B5F5E  51                        PUSH ECX
006B5F5F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006B5F62  52                        PUSH EDX
006B5F63  53                        PUSH EBX
006B5F64  56                        PUSH ESI
006B5F65  50                        PUSH EAX
006B5F66  56                        PUSH ESI
006B5F67  57                        PUSH EDI
006B5F68  51                        PUSH ECX
006B5F69  E8 A2 FB FF FF            CALL 0x006b5b10
006B5F6E  5F                        POP EDI
006B5F6F  5E                        POP ESI
006B5F70  5B                        POP EBX
006B5F71  5D                        POP EBP
006B5F72  C2 20 00                  RET 0x20
