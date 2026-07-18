FUN_004d0a80:
004D0A80  55                        PUSH EBP
004D0A81  8B EC                     MOV EBP,ESP
004D0A83  53                        PUSH EBX
004D0A84  8B D9                     MOV EBX,ECX
004D0A86  56                        PUSH ESI
004D0A87  33 F6                     XOR ESI,ESI
004D0A89  8B 93 45 02 00 00         MOV EDX,dword ptr [EBX + 0x245]
004D0A8F  57                        PUSH EDI
004D0A90  85 D2                     TEST EDX,EDX
004D0A92  0F 8E AD 00 00 00         JLE 0x004d0b45
004D0A98  8B 8B 4D 02 00 00         MOV ECX,dword ptr [EBX + 0x24d]
004D0A9E  8B C1                     MOV EAX,ECX
LAB_004d0aa0:
004D0AA0  8B 38                     MOV EDI,dword ptr [EAX]
004D0AA2  3B 7D 08                  CMP EDI,dword ptr [EBP + 0x8]
004D0AA5  75 10                     JNZ 0x004d0ab7
004D0AA7  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
004D0AAA  39 78 04                  CMP dword ptr [EAX + 0x4],EDI
004D0AAD  75 08                     JNZ 0x004d0ab7
004D0AAF  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
004D0AB2  39 78 08                  CMP dword ptr [EAX + 0x8],EDI
004D0AB5  74 11                     JZ 0x004d0ac8
LAB_004d0ab7:
004D0AB7  46                        INC ESI
004D0AB8  83 C0 0C                  ADD EAX,0xc
004D0ABB  3B F2                     CMP ESI,EDX
004D0ABD  7C E1                     JL 0x004d0aa0
004D0ABF  5F                        POP EDI
004D0AC0  5E                        POP ESI
004D0AC1  33 C0                     XOR EAX,EAX
004D0AC3  5B                        POP EBX
004D0AC4  5D                        POP EBP
004D0AC5  C2 0C 00                  RET 0xc
LAB_004d0ac8:
004D0AC8  8B 43 18                  MOV EAX,dword ptr [EBX + 0x18]
004D0ACB  8D 3C 76                  LEA EDI,[ESI + ESI*0x2]
004D0ACE  C1 E7 02                  SHL EDI,0x2
004D0AD1  50                        PUSH EAX
004D0AD2  53                        PUSH EBX
004D0AD3  66 8B 54 39 08            MOV DX,word ptr [ECX + EDI*0x1 + 0x8]
004D0AD8  66 8B 44 39 04            MOV AX,word ptr [ECX + EDI*0x1 + 0x4]
004D0ADD  66 8B 0C 39               MOV CX,word ptr [ECX + EDI*0x1]
004D0AE1  6A 00                     PUSH 0x0
004D0AE3  52                        PUSH EDX
004D0AE4  50                        PUSH EAX
004D0AE5  51                        PUSH ECX
004D0AE6  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
004D0AEC  E8 D0 43 F3 FF            CALL 0x00404ec1
004D0AF1  85 C0                     TEST EAX,EAX
004D0AF3  74 17                     JZ 0x004d0b0c
004D0AF5  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004D0AFB  68 05 03 00 00            PUSH 0x305
004D0B00  68 9C F3 7B 00            PUSH 0x7bf39c
004D0B05  52                        PUSH EDX
004D0B06  50                        PUSH EAX
004D0B07  E8 34 53 1D 00            CALL 0x006a5e40
LAB_004d0b0c:
004D0B0C  8B 83 45 02 00 00         MOV EAX,dword ptr [EBX + 0x245]
004D0B12  8D 48 FF                  LEA ECX,[EAX + -0x1]
004D0B15  3B F1                     CMP ESI,ECX
004D0B17  7D 26                     JGE 0x004d0b3f
004D0B19  8B 93 4D 02 00 00         MOV EDX,dword ptr [EBX + 0x24d]
004D0B1F  2B C6                     SUB EAX,ESI
004D0B21  48                        DEC EAX
004D0B22  03 FA                     ADD EDI,EDX
004D0B24  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
004D0B27  8D 44 76 03               LEA EAX,[ESI + ESI*0x2 + 0x3]
004D0B2B  C1 E1 02                  SHL ECX,0x2
004D0B2E  8D 34 82                  LEA ESI,[EDX + EAX*0x4]
004D0B31  8B D1                     MOV EDX,ECX
004D0B33  C1 E9 02                  SHR ECX,0x2
004D0B36  F3 A5                     MOVSD.REP ES:EDI,ESI
004D0B38  8B CA                     MOV ECX,EDX
004D0B3A  83 E1 03                  AND ECX,0x3
004D0B3D  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_004d0b3f:
004D0B3F  FF 8B 45 02 00 00         DEC dword ptr [EBX + 0x245]
LAB_004d0b45:
004D0B45  5F                        POP EDI
004D0B46  5E                        POP ESI
004D0B47  33 C0                     XOR EAX,EAX
004D0B49  5B                        POP EBX
004D0B4A  5D                        POP EBP
004D0B4B  C2 0C 00                  RET 0xc
