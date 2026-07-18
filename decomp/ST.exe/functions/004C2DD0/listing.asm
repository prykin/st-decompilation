FUN_004c2dd0:
004C2DD0  8B 81 31 02 00 00         MOV EAX,dword ptr [ECX + 0x231]
004C2DD6  33 D2                     XOR EDX,EDX
004C2DD8  83 F8 01                  CMP EAX,0x1
004C2DDB  89 91 08 04 00 00         MOV dword ptr [ECX + 0x408],EDX
004C2DE1  89 91 0C 04 00 00         MOV dword ptr [ECX + 0x40c],EDX
004C2DE7  74 05                     JZ 0x004c2dee
004C2DE9  83 F8 03                  CMP EAX,0x3
004C2DEC  75 18                     JNZ 0x004c2e06
LAB_004c2dee:
004C2DEE  8B 81 35 02 00 00         MOV EAX,dword ptr [ECX + 0x235]
004C2DF4  56                        PUSH ESI
004C2DF5  8B 34 85 9C 4E 79 00      MOV ESI,dword ptr [EAX*0x4 + 0x794e9c]
004C2DFC  3B F2                     CMP ESI,EDX
004C2DFE  5E                        POP ESI
004C2DFF  74 05                     JZ 0x004c2e06
004C2E01  E8 44 ED F3 FF            CALL 0x00401b4a
LAB_004c2e06:
004C2E06  33 C0                     XOR EAX,EAX
004C2E08  C3                        RET
