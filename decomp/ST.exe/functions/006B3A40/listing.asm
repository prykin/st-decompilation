FUN_006b3a40:
006B3A40  55                        PUSH EBP
006B3A41  8B EC                     MOV EBP,ESP
006B3A43  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006B3A46  56                        PUSH ESI
006B3A47  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006B3A4A  33 C0                     XOR EAX,EAX
006B3A4C  57                        PUSH EDI
006B3A4D  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
006B3A50  89 46 08                  MOV dword ptr [ESI + 0x8],EAX
006B3A53  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
006B3A56  89 06                     MOV dword ptr [ESI],EAX
006B3A58  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B3A5B  8B 91 A0 01 00 00         MOV EDX,dword ptr [ECX + 0x1a0]
006B3A61  3B C2                     CMP EAX,EDX
006B3A63  73 38                     JNC 0x006b3a9d
006B3A65  8B 89 B0 01 00 00         MOV ECX,dword ptr [ECX + 0x1b0]
006B3A6B  8B 3C 81                  MOV EDI,dword ptr [ECX + EAX*0x4]
006B3A6E  8B 17                     MOV EDX,dword ptr [EDI]
006B3A70  81 E2 20 80 00 00         AND EDX,0x8020
006B3A76  81 FA 20 80 00 00         CMP EDX,0x8020
006B3A7C  75 1F                     JNZ 0x006b3a9d
006B3A7E  57                        PUSH EDI
006B3A7F  E8 CC BE 01 00            CALL 0x006cf950
006B3A84  83 C7 18                  ADD EDI,0x18
006B3A87  8B 07                     MOV EAX,dword ptr [EDI]
006B3A89  89 06                     MOV dword ptr [ESI],EAX
006B3A8B  8B 4F 04                  MOV ECX,dword ptr [EDI + 0x4]
006B3A8E  89 4E 04                  MOV dword ptr [ESI + 0x4],ECX
006B3A91  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
006B3A94  89 56 08                  MOV dword ptr [ESI + 0x8],EDX
006B3A97  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
006B3A9A  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
LAB_006b3a9d:
006B3A9D  5F                        POP EDI
006B3A9E  5E                        POP ESI
006B3A9F  5D                        POP EBP
006B3AA0  C2 0C 00                  RET 0xc
