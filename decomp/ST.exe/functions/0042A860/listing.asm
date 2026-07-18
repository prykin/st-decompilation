FUN_0042a860:
0042A860  55                        PUSH EBP
0042A861  8B EC                     MOV EBP,ESP
0042A863  81 EC 44 04 00 00         SUB ESP,0x444
0042A869  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0042A86E  56                        PUSH ESI
0042A86F  8D 55 C0                  LEA EDX,[EBP + -0x40]
0042A872  8D 4D BC                  LEA ECX,[EBP + -0x44]
0042A875  6A 00                     PUSH 0x0
0042A877  52                        PUSH EDX
0042A878  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
0042A87B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0042A881  E8 6A 2F 30 00            CALL 0x0072d7f0
0042A886  83 C4 08                  ADD ESP,0x8
0042A889  85 C0                     TEST EAX,EAX
0042A88B  75 56                     JNZ 0x0042a8e3
0042A88D  8B 0D 50 67 80 00         MOV ECX,dword ptr [0x00806750]
0042A893  8D 85 BD FB FF FF         LEA EAX,[EBP + 0xfffffbbd]
0042A899  83 C1 0E                  ADD ECX,0xe
0042A89C  BE 00 01 00 00            MOV ESI,0x100
LAB_0042a8a1:
0042A8A1  8A 51 FF                  MOV DL,byte ptr [ECX + -0x1]
0042A8A4  83 C1 04                  ADD ECX,0x4
0042A8A7  88 50 FF                  MOV byte ptr [EAX + -0x1],DL
0042A8AA  8A 51 FC                  MOV DL,byte ptr [ECX + -0x4]
0042A8AD  88 10                     MOV byte ptr [EAX],DL
0042A8AF  8A 51 FD                  MOV DL,byte ptr [ECX + -0x3]
0042A8B2  88 50 01                  MOV byte ptr [EAX + 0x1],DL
0042A8B5  83 C0 04                  ADD EAX,0x4
0042A8B8  4E                        DEC ESI
0042A8B9  75 E6                     JNZ 0x0042a8a1
0042A8BB  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
0042A8C1  68 00 01 00 00            PUSH 0x100
0042A8C6  8D 85 BC FB FF FF         LEA EAX,[EBP + 0xfffffbbc]
0042A8CC  6A 00                     PUSH 0x0
0042A8CE  50                        PUSH EAX
0042A8CF  51                        PUSH ECX
0042A8D0  E8 1B 60 28 00            CALL 0x006b08f0
0042A8D5  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
0042A8D8  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0042A8DE  5E                        POP ESI
0042A8DF  8B E5                     MOV ESP,EBP
0042A8E1  5D                        POP EBP
0042A8E2  C3                        RET
LAB_0042a8e3:
0042A8E3  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
0042A8E6  68 36 05 00 00            PUSH 0x536
0042A8EB  68 DC 5F 7A 00            PUSH 0x7a5fdc
0042A8F0  6A 00                     PUSH 0x0
0042A8F2  50                        PUSH EAX
0042A8F3  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0042A8F9  E8 42 B5 27 00            CALL 0x006a5e40
0042A8FE  5E                        POP ESI
0042A8FF  8B E5                     MOV ESP,EBP
0042A901  5D                        POP EBP
0042A902  C3                        RET
