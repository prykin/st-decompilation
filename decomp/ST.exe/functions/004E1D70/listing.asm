FUN_004e1d70:
004E1D70  55                        PUSH EBP
004E1D71  8B EC                     MOV EBP,ESP
004E1D73  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004E1D76  56                        PUSH ESI
004E1D77  8B F1                     MOV ESI,ECX
004E1D79  89 86 DC 04 00 00         MOV dword ptr [ESI + 0x4dc],EAX
004E1D7F  2D DC 00 00 00            SUB EAX,0xdc
004E1D84  74 30                     JZ 0x004e1db6
004E1D86  48                        DEC EAX
004E1D87  74 18                     JZ 0x004e1da1
004E1D89  48                        DEC EAX
004E1D8A  75 3D                     JNZ 0x004e1dc9
004E1D8C  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004E1D8F  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004E1D92  50                        PUSH EAX
004E1D93  51                        PUSH ECX
004E1D94  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E1D9A  E8 48 38 F2 FF            CALL 0x004055e7
004E1D9F  EB 28                     JMP 0x004e1dc9
LAB_004e1da1:
004E1DA1  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004E1DA4  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
004E1DA7  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E1DAD  52                        PUSH EDX
004E1DAE  50                        PUSH EAX
004E1DAF  E8 5E 26 F2 FF            CALL 0x00404412
004E1DB4  EB 13                     JMP 0x004e1dc9
LAB_004e1db6:
004E1DB6  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004E1DB9  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
004E1DBC  51                        PUSH ECX
004E1DBD  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E1DC3  52                        PUSH EDX
004E1DC4  E8 6D 25 F2 FF            CALL 0x00404336
LAB_004e1dc9:
004E1DC9  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
004E1DCC  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E1DD2  50                        PUSH EAX
004E1DD3  E8 1E 0B F2 FF            CALL 0x004028f6
004E1DD8  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
004E1DDB  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004E1DDE  33 D2                     XOR EDX,EDX
004E1DE0  8A 91 2D 11 00 00         MOV DL,byte ptr [ECX + 0x112d]
004E1DE6  3B C2                     CMP EAX,EDX
004E1DE8  75 0C                     JNZ 0x004e1df6
004E1DEA  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E1DF0  50                        PUSH EAX
004E1DF1  E8 97 2D F2 FF            CALL 0x00404b8d
LAB_004e1df6:
004E1DF6  5E                        POP ESI
004E1DF7  5D                        POP EBP
004E1DF8  C2 08 00                  RET 0x8
