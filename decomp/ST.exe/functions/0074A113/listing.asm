CBaseRenderer::EndOfStream:
0074A113  56                        PUSH ESI
0074A114  8B F1                     MOV ESI,ECX
0074A116  83 7E 14 00               CMP dword ptr [ESI + 0x14],0x0
0074A11A  74 23                     JZ 0x0074a13f
0074A11C  83 7E 6C 00               CMP dword ptr [ESI + 0x6c],0x0
0074A120  C7 46 70 01 00 00 00      MOV dword ptr [ESI + 0x70],0x1
0074A127  75 16                     JNZ 0x0074a13f
0074A129  FF 76 5C                  PUSH dword ptr [ESI + 0x5c]
0074A12C  FF 15 80 BB 85 00         CALL dword ptr [0x0085bb80]
0074A132  83 7E 64 00               CMP dword ptr [ESI + 0x64],0x0
0074A136  74 07                     JZ 0x0074a13f
0074A138  8B 06                     MOV EAX,dword ptr [ESI]
0074A13A  8B CE                     MOV ECX,ESI
0074A13C  FF 50 60                  CALL dword ptr [EAX + 0x60]
LAB_0074a13f:
0074A13F  33 C0                     XOR EAX,EAX
0074A141  5E                        POP ESI
0074A142  C3                        RET
