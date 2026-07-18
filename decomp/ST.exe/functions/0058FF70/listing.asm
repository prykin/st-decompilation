FUN_0058ff70:
0058FF70  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0058FF75  56                        PUSH ESI
0058FF76  8B B0 E4 00 00 00         MOV ESI,dword ptr [EAX + 0xe4]
0058FF7C  8B 81 57 02 00 00         MOV EAX,dword ptr [ECX + 0x257]
0058FF82  83 F8 06                  CMP EAX,0x6
0058FF85  77 49                     JA 0x0058ffd0
switchD_0058ff87::switchD:
0058FF87  FF 24 85 D4 FF 58 00      JMP dword ptr [EAX*0x4 + 0x58ffd4]
switchD_0058ff87::caseD_0:
0058FF8E  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
0058FF91  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0058FF97  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0058FF9D  33 D2                     XOR EDX,EDX
0058FF9F  89 41 1C                  MOV dword ptr [ECX + 0x1c],EAX
0058FFA2  B9 05 00 00 00            MOV ECX,0x5
0058FFA7  C1 E8 10                  SHR EAX,0x10
0058FFAA  F7 F1                     DIV ECX
0058FFAC  8D 74 16 01               LEA ESI,[ESI + EDX*0x1 + 0x1]
0058FFB0  8B C6                     MOV EAX,ESI
0058FFB2  5E                        POP ESI
0058FFB3  C3                        RET
switchD_0058ff87::caseD_6:
0058FFB4  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
0058FFB7  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0058FFBD  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0058FFC3  89 41 1C                  MOV dword ptr [ECX + 0x1c],EAX
0058FFC6  C1 E8 10                  SHR EAX,0x10
0058FFC9  83 E0 0F                  AND EAX,0xf
0058FFCC  8D 74 06 0F               LEA ESI,[ESI + EAX*0x1 + 0xf]
switchD_0058ff87::caseD_1:
0058FFD0  8B C6                     MOV EAX,ESI
0058FFD2  5E                        POP ESI
0058FFD3  C3                        RET
