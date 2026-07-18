FUN_004df2b0:
004DF2B0  8B 41 24                  MOV EAX,dword ptr [ECX + 0x24]
004DF2B3  53                        PUSH EBX
004DF2B4  BA 01 00 00 00            MOV EDX,0x1
004DF2B9  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
004DF2BC  8A 9C C0 C7 87 80 00      MOV BL,byte ptr [EAX + EAX*0x8 + 0x8087c7]
004DF2C3  3A DA                     CMP BL,DL
004DF2C5  5B                        POP EBX
004DF2C6  75 38                     JNZ 0x004df300
004DF2C8  C7 81 D8 04 00 00 10 27 00 00  MOV dword ptr [ECX + 0x4d8],0x2710
004DF2D2  C7 81 D0 04 00 00 02 00 00 00  MOV dword ptr [ECX + 0x4d0],0x2
004DF2DC  C7 81 D4 04 00 00 00 00 00 00  MOV dword ptr [ECX + 0x4d4],0x0
004DF2E6  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004DF2EB  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
004DF2F1  89 91 E0 04 00 00         MOV dword ptr [ECX + 0x4e0],EDX
004DF2F7  89 81 DC 04 00 00         MOV dword ptr [ECX + 0x4dc],EAX
004DF2FD  33 C0                     XOR EAX,EAX
004DF2FF  C3                        RET
LAB_004df300:
004DF300  33 C0                     XOR EAX,EAX
004DF302  C7 81 D0 04 00 00 02 00 00 00  MOV dword ptr [ECX + 0x4d0],0x2
004DF30C  89 81 D8 04 00 00         MOV dword ptr [ECX + 0x4d8],EAX
004DF312  89 81 D4 04 00 00         MOV dword ptr [ECX + 0x4d4],EAX
004DF318  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004DF31E  8B 92 E4 00 00 00         MOV EDX,dword ptr [EDX + 0xe4]
004DF324  89 81 E0 04 00 00         MOV dword ptr [ECX + 0x4e0],EAX
004DF32A  89 91 DC 04 00 00         MOV dword ptr [ECX + 0x4dc],EDX
004DF330  C3                        RET
