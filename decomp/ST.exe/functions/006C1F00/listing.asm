FUN_006c1f00:
006C1F00  55                        PUSH EBP
006C1F01  8B EC                     MOV EBP,ESP
006C1F03  A1 B4 68 85 00            MOV EAX,[0x008568b4]
006C1F08  57                        PUSH EDI
006C1F09  33 FF                     XOR EDI,EDI
006C1F0B  85 C0                     TEST EAX,EAX
006C1F0D  75 0A                     JNZ 0x006c1f19
006C1F0F  B8 CC FF FF FF            MOV EAX,0xffffffcc
006C1F14  5F                        POP EDI
006C1F15  5D                        POP EBP
006C1F16  C2 0C 00                  RET 0xc
LAB_006c1f19:
006C1F19  56                        PUSH ESI
006C1F1A  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C1F1D  85 F6                     TEST ESI,ESI
006C1F1F  7C 5B                     JL 0x006c1f7c
006C1F21  83 FE 20                  CMP ESI,0x20
006C1F24  7D 56                     JGE 0x006c1f7c
006C1F26  68 98 68 85 00            PUSH 0x856898
006C1F2B  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
006C1F31  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006C1F34  85 C0                     TEST EAX,EAX
006C1F36  74 14                     JZ 0x006c1f4c
006C1F38  8D 0C 76                  LEA ECX,[ESI + ESI*0x2]
006C1F3B  C1 E1 04                  SHL ECX,0x4
006C1F3E  03 CE                     ADD ECX,ESI
006C1F40  8B 14 8D F8 4F 85 00      MOV EDX,dword ptr [ECX*0x4 + 0x854ff8]
006C1F47  83 E2 01                  AND EDX,0x1
006C1F4A  89 10                     MOV dword ptr [EAX],EDX
LAB_006c1f4c:
006C1F4C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006C1F4F  85 C0                     TEST EAX,EAX
006C1F51  74 16                     JZ 0x006c1f69
006C1F53  8D 0C 76                  LEA ECX,[ESI + ESI*0x2]
006C1F56  C1 E1 04                  SHL ECX,0x4
006C1F59  03 CE                     ADD ECX,ESI
006C1F5B  8B 14 8D F8 4F 85 00      MOV EDX,dword ptr [ECX*0x4 + 0x854ff8]
006C1F62  D1 EA                     SHR EDX,0x1
006C1F64  83 E2 01                  AND EDX,0x1
006C1F67  89 10                     MOV dword ptr [EAX],EDX
LAB_006c1f69:
006C1F69  68 98 68 85 00            PUSH 0x856898
006C1F6E  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006C1F74  8B C7                     MOV EAX,EDI
006C1F76  5E                        POP ESI
006C1F77  5F                        POP EDI
006C1F78  5D                        POP EBP
006C1F79  C2 0C 00                  RET 0xc
LAB_006c1f7c:
006C1F7C  BF FC FF FF FF            MOV EDI,0xfffffffc
006C1F81  5E                        POP ESI
006C1F82  8B C7                     MOV EAX,EDI
006C1F84  5F                        POP EDI
006C1F85  5D                        POP EBP
006C1F86  C2 0C 00                  RET 0xc
