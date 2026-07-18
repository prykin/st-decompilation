FUN_006c7f10:
006C7F10  55                        PUSH EBP
006C7F11  8B EC                     MOV EBP,ESP
006C7F13  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006C7F16  57                        PUSH EDI
006C7F17  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006C7F1A  83 F8 01                  CMP EAX,0x1
006C7F1D  7E 42                     JLE 0x006c7f61
006C7F1F  53                        PUSH EBX
006C7F20  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006C7F23  81 E3 FF 00 00 00         AND EBX,0xff
006C7F29  48                        DEC EAX
006C7F2A  56                        PUSH ESI
006C7F2B  8D 77 04                  LEA ESI,[EDI + 0x4]
006C7F2E  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_006c7f31:
006C7F31  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006C7F34  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
006C7F37  8B 16                     MOV EDX,dword ptr [ESI]
006C7F39  6A 0D                     PUSH 0xd
006C7F3B  53                        PUSH EBX
006C7F3C  50                        PUSH EAX
006C7F3D  8B 46 FC                  MOV EAX,dword ptr [ESI + -0x4]
006C7F40  51                        PUSH ECX
006C7F41  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006C7F44  52                        PUSH EDX
006C7F45  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006C7F48  50                        PUSH EAX
006C7F49  51                        PUSH ECX
006C7F4A  52                        PUSH EDX
006C7F4B  E8 C0 DB FE FF            CALL 0x006b5b10
006C7F50  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006C7F53  83 C6 08                  ADD ESI,0x8
006C7F56  48                        DEC EAX
006C7F57  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
006C7F5A  75 D5                     JNZ 0x006c7f31
006C7F5C  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006C7F5F  5E                        POP ESI
006C7F60  5B                        POP EBX
LAB_006c7f61:
006C7F61  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006C7F64  8B 17                     MOV EDX,dword ptr [EDI]
006C7F66  81 E1 FF 00 00 00         AND ECX,0xff
006C7F6C  6A 0D                     PUSH 0xd
006C7F6E  51                        PUSH ECX
006C7F6F  8B 4F 04                  MOV ECX,dword ptr [EDI + 0x4]
006C7F72  51                        PUSH ECX
006C7F73  8B 4C C7 FC               MOV ECX,dword ptr [EDI + EAX*0x8 + -0x4]
006C7F77  52                        PUSH EDX
006C7F78  8B 54 C7 F8               MOV EDX,dword ptr [EDI + EAX*0x8 + -0x8]
006C7F7C  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006C7F7F  51                        PUSH ECX
006C7F80  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006C7F83  52                        PUSH EDX
006C7F84  50                        PUSH EAX
006C7F85  51                        PUSH ECX
006C7F86  E8 85 DB FE FF            CALL 0x006b5b10
006C7F8B  5F                        POP EDI
006C7F8C  5D                        POP EBP
006C7F8D  C2 14 00                  RET 0x14
