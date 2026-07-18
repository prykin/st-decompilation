FUN_0074a77d:
0074A77D  56                        PUSH ESI
0074A77E  8B F1                     MOV ESI,ECX
0074A780  57                        PUSH EDI
0074A781  8D BE 94 00 00 00         LEA EDI,[ESI + 0x94]
0074A787  57                        PUSH EDI
0074A788  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
0074A78E  6A 01                     PUSH 0x1
0074A790  58                        POP EAX
0074A791  39 46 64                  CMP dword ptr [ESI + 0x64],EAX
0074A794  74 41                     JZ 0x0074a7d7
0074A796  50                        PUSH EAX
0074A797  89 46 64                  MOV dword ptr [ESI + 0x64],EAX
0074A79A  FF 15 E8 BE 85 00         CALL dword ptr [0x0085bee8]
0074A7A0  8B 06                     MOV EAX,dword ptr [ESI]
0074A7A2  8B CE                     MOV ECX,ESI
0074A7A4  FF 50 40                  CALL dword ptr [EAX + 0x40]
0074A7A7  8B 46 6C                  MOV EAX,dword ptr [ESI + 0x6c]
0074A7AA  85 C0                     TEST EAX,EAX
0074A7AC  75 14                     JNZ 0x0074a7c2
0074A7AE  8B 06                     MOV EAX,dword ptr [ESI]
0074A7B0  8B CE                     MOV ECX,ESI
0074A7B2  FF 50 60                  CALL dword ptr [EAX + 0x60]
0074A7B5  57                        PUSH EDI
0074A7B6  8B F0                     MOV ESI,EAX
0074A7B8  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074A7BE  8B C6                     MOV EAX,ESI
0074A7C0  EB 1E                     JMP 0x0074a7e0
LAB_0074a7c2:
0074A7C2  8B 16                     MOV EDX,dword ptr [ESI]
0074A7C4  50                        PUSH EAX
0074A7C5  8B CE                     MOV ECX,ESI
0074A7C7  FF 52 54                  CALL dword ptr [EDX + 0x54]
0074A7CA  85 C0                     TEST EAX,EAX
0074A7CC  75 09                     JNZ 0x0074a7d7
0074A7CE  FF 76 54                  PUSH dword ptr [ESI + 0x54]
0074A7D1  FF 15 80 BB 85 00         CALL dword ptr [0x0085bb80]
LAB_0074a7d7:
0074A7D7  57                        PUSH EDI
0074A7D8  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074A7DE  33 C0                     XOR EAX,EAX
LAB_0074a7e0:
0074A7E0  5F                        POP EDI
0074A7E1  5E                        POP ESI
0074A7E2  C3                        RET
