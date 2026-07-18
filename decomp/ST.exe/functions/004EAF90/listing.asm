FUN_004eaf90:
004EAF90  8B 91 D0 04 00 00         MOV EDX,dword ptr [ECX + 0x4d0]
004EAF96  33 C0                     XOR EAX,EAX
004EAF98  83 FA 03                  CMP EDX,0x3
004EAF9B  77 35                     JA 0x004eafd2
switchD_004eaf9d::switchD:
004EAF9D  FF 24 95 D4 AF 4E 00      JMP dword ptr [EDX*0x4 + 0x4eafd4]
switchD_004eaf9d::caseD_1:
004EAFA4  8B 15 0C AA 79 00         MOV EDX,dword ptr [0x0079aa0c]
004EAFAA  56                        PUSH ESI
004EAFAB  8B B1 D4 04 00 00         MOV ESI,dword ptr [ECX + 0x4d4]
004EAFB1  4A                        DEC EDX
004EAFB2  3B F2                     CMP ESI,EDX
004EAFB4  5E                        POP ESI
004EAFB5  75 1B                     JNZ 0x004eafd2
004EAFB7  B8 01 00 00 00            MOV EAX,0x1
004EAFBC  C3                        RET
switchD_004eaf9d::caseD_3:
004EAFBD  8B 89 D4 04 00 00         MOV ECX,dword ptr [ECX + 0x4d4]
004EAFC3  8B 15 14 AA 79 00         MOV EDX,dword ptr [0x0079aa14]
004EAFC9  3B CA                     CMP ECX,EDX
004EAFCB  7C 05                     JL 0x004eafd2
switchD_004eaf9d::caseD_0:
004EAFCD  B8 01 00 00 00            MOV EAX,0x1
switchD_004eaf9d::default:
004EAFD2  C3                        RET
