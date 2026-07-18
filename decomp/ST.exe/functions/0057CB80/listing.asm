FUN_0057cb80:
0057CB80  55                        PUSH EBP
0057CB81  8B EC                     MOV EBP,ESP
0057CB83  8B 81 67 02 00 00         MOV EAX,dword ptr [ECX + 0x267]
0057CB89  56                        PUSH ESI
0057CB8A  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0057CB8D  3D E7 00 00 00            CMP EAX,0xe7
0057CB92  74 2D                     JZ 0x0057cbc1
0057CB94  3D E9 00 00 00            CMP EAX,0xe9
0057CB99  74 26                     JZ 0x0057cbc1
0057CB9B  8B 41 1C                  MOV EAX,dword ptr [ECX + 0x1c]
0057CB9E  33 D2                     XOR EDX,EDX
0057CBA0  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0057CBA6  05 39 30 00 00            ADD EAX,0x3039
0057CBAB  89 41 1C                  MOV dword ptr [ECX + 0x1c],EAX
0057CBAE  B9 15 00 00 00            MOV ECX,0x15
0057CBB3  C1 E8 10                  SHR EAX,0x10
0057CBB6  F7 F1                     DIV ECX
0057CBB8  8D 44 32 1E               LEA EAX,[EDX + ESI*0x1 + 0x1e]
0057CBBC  5E                        POP ESI
0057CBBD  5D                        POP EBP
0057CBBE  C2 08 00                  RET 0x8
LAB_0057cbc1:
0057CBC1  8B C6                     MOV EAX,ESI
0057CBC3  5E                        POP ESI
0057CBC4  5D                        POP EBP
0057CBC5  C2 08 00                  RET 0x8
