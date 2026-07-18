FUN_004d6f70:
004D6F70  56                        PUSH ESI
004D6F71  57                        PUSH EDI
004D6F72  8B F1                     MOV ESI,ECX
004D6F74  E8 1B C6 F2 FF            CALL 0x00403594
004D6F79  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004D6F7F  8B F8                     MOV EDI,EAX
004D6F81  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004D6F84  50                        PUSH EAX
004D6F85  E8 1D C7 F2 FF            CALL 0x004036a7
004D6F8A  3B C7                     CMP EAX,EDI
004D6F8C  7D 11                     JGE 0x004d6f9f
004D6F8E  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004D6F91  51                        PUSH ECX
004D6F92  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004D6F98  E8 0A C7 F2 FF            CALL 0x004036a7
004D6F9D  8B F8                     MOV EDI,EAX
LAB_004d6f9f:
004D6F9F  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
004D6FA2  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004D6FA8  57                        PUSH EDI
004D6FA9  52                        PUSH EDX
004D6FAA  E8 4A D4 F2 FF            CALL 0x004043f9
004D6FAF  57                        PUSH EDI
004D6FB0  8B CE                     MOV ECX,ESI
004D6FB2  E8 B7 CD F2 FF            CALL 0x00403d6e
004D6FB7  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
004D6FBA  33 C9                     XOR ECX,ECX
004D6FBC  8A 88 2D 11 00 00         MOV CL,byte ptr [EAX + 0x112d]
004D6FC2  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004D6FC5  3B C1                     CMP EAX,ECX
004D6FC7  75 0E                     JNZ 0x004d6fd7
004D6FC9  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004D6FCF  8A D0                     MOV DL,AL
004D6FD1  52                        PUSH EDX
004D6FD2  E8 B6 DB F2 FF            CALL 0x00404b8d
LAB_004d6fd7:
004D6FD7  8B 06                     MOV EAX,dword ptr [ESI]
004D6FD9  8B CE                     MOV ECX,ESI
004D6FDB  FF 90 C4 00 00 00         CALL dword ptr [EAX + 0xc4]
004D6FE1  33 C9                     XOR ECX,ECX
004D6FE3  83 F8 64                  CMP EAX,0x64
004D6FE6  0F 9D C1                  SETGE CL
004D6FE9  5F                        POP EDI
004D6FEA  8B C1                     MOV EAX,ECX
004D6FEC  5E                        POP ESI
004D6FED  C3                        RET
