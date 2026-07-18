FUN_0074a7e3:
0074A7E3  56                        PUSH ESI
0074A7E4  8B F1                     MOV ESI,ECX
0074A7E6  57                        PUSH EDI
0074A7E7  8D BE 94 00 00 00         LEA EDI,[ESI + 0x94]
0074A7ED  57                        PUSH EDI
0074A7EE  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
0074A7F4  83 66 74 00               AND dword ptr [ESI + 0x74],0x0
0074A7F8  83 7E 64 01               CMP dword ptr [ESI + 0x64],0x1
0074A7FC  75 13                     JNZ 0x0074a811
0074A7FE  8B 06                     MOV EAX,dword ptr [ESI]
0074A800  83 66 64 00               AND dword ptr [ESI + 0x64],0x0
0074A804  8B CE                     MOV ECX,ESI
0074A806  FF 50 44                  CALL dword ptr [EAX + 0x44]
0074A809  6A 01                     PUSH 0x1
0074A80B  FF 15 EC BE 85 00         CALL dword ptr [0x0085beec]
LAB_0074a811:
0074A811  57                        PUSH EDI
0074A812  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074A818  5F                        POP EDI
0074A819  33 C0                     XOR EAX,EAX
0074A81B  5E                        POP ESI
0074A81C  C3                        RET
