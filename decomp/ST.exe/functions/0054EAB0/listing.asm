FUN_0054eab0:
0054EAB0  55                        PUSH EBP
0054EAB1  8B EC                     MOV EBP,ESP
0054EAB3  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0054EAB6  8B 49 65                  MOV ECX,dword ptr [ECX + 0x65]
0054EAB9  53                        PUSH EBX
0054EABA  56                        PUSH ESI
0054EABB  57                        PUSH EDI
0054EABC  33 FF                     XOR EDI,EDI
0054EABE  85 D2                     TEST EDX,EDX
0054EAC0  74 02                     JZ 0x0054eac4
0054EAC2  89 3A                     MOV dword ptr [EDX],EDI
LAB_0054eac4:
0054EAC4  85 C9                     TEST ECX,ECX
0054EAC6  74 13                     JZ 0x0054eadb
0054EAC8  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
LAB_0054eacb:
0054EACB  8B 59 08                  MOV EBX,dword ptr [ECX + 0x8]
0054EACE  8D 41 08                  LEA EAX,[ECX + 0x8]
0054EAD1  3B DE                     CMP EBX,ESI
0054EAD3  74 0F                     JZ 0x0054eae4
0054EAD5  8B 09                     MOV ECX,dword ptr [ECX]
0054EAD7  85 C9                     TEST ECX,ECX
0054EAD9  75 F0                     JNZ 0x0054eacb
LAB_0054eadb:
0054EADB  8B C7                     MOV EAX,EDI
LAB_0054eadd:
0054EADD  5F                        POP EDI
0054EADE  5E                        POP ESI
0054EADF  5B                        POP EBX
0054EAE0  5D                        POP EBP
0054EAE1  C2 08 00                  RET 0x8
LAB_0054eae4:
0054EAE4  85 D2                     TEST EDX,EDX
0054EAE6  74 F5                     JZ 0x0054eadd
0054EAE8  8B 49 04                  MOV ECX,dword ptr [ECX + 0x4]
0054EAEB  5F                        POP EDI
0054EAEC  5E                        POP ESI
0054EAED  89 0A                     MOV dword ptr [EDX],ECX
0054EAEF  5B                        POP EBX
0054EAF0  5D                        POP EBP
0054EAF1  C2 08 00                  RET 0x8
