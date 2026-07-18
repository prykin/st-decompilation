FUN_006c7d20:
006C7D20  55                        PUSH EBP
006C7D21  8B EC                     MOV EBP,ESP
006C7D23  53                        PUSH EBX
006C7D24  56                        PUSH ESI
006C7D25  57                        PUSH EDI
006C7D26  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006C7D29  57                        PUSH EDI
006C7D2A  E8 91 03 01 00            CALL 0x006d80c0
006C7D2F  85 C0                     TEST EAX,EAX
006C7D31  74 0E                     JZ 0x006c7d41
006C7D33  83 F8 FF                  CMP EAX,-0x1
006C7D36  74 09                     JZ 0x006c7d41
006C7D38  5F                        POP EDI
006C7D39  5E                        POP ESI
006C7D3A  33 C0                     XOR EAX,EAX
006C7D3C  5B                        POP EBX
006C7D3D  5D                        POP EBP
006C7D3E  C2 0C 00                  RET 0xc
LAB_006c7d41:
006C7D41  8A 4F 19                  MOV CL,byte ptr [EDI + 0x19]
006C7D44  8B 5F 2A                  MOV EBX,dword ptr [EDI + 0x2a]
006C7D47  41                        INC ECX
006C7D48  BE 01 00 00 00            MOV ESI,0x1
006C7D4D  D3 E6                     SHL ESI,CL
006C7D4F  85 DB                     TEST EBX,EBX
006C7D51  75 0E                     JNZ 0x006c7d61
006C7D53  8A 4F 10                  MOV CL,byte ptr [EDI + 0x10]
006C7D56  8B 5F 12                  MOV EBX,dword ptr [EDI + 0x12]
006C7D59  41                        INC ECX
006C7D5A  BE 01 00 00 00            MOV ESI,0x1
006C7D5F  D3 E6                     SHL ESI,CL
LAB_006c7d61:
006C7D61  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006C7D64  85 C0                     TEST EAX,EAX
006C7D66  75 18                     JNZ 0x006c7d80
006C7D68  8D 04 B5 00 00 00 00      LEA EAX,[ESI*0x4 + 0x0]
006C7D6F  50                        PUSH EAX
006C7D70  E8 FB 2E FE FF            CALL 0x006aac70
006C7D75  85 C0                     TEST EAX,EAX
006C7D77  75 07                     JNZ 0x006c7d80
006C7D79  5F                        POP EDI
006C7D7A  5E                        POP ESI
006C7D7B  5B                        POP EBX
006C7D7C  5D                        POP EBP
006C7D7D  C2 0C 00                  RET 0xc
LAB_006c7d80:
006C7D80  85 F6                     TEST ESI,ESI
006C7D82  7E 26                     JLE 0x006c7daa
006C7D84  8D 48 02                  LEA ECX,[EAX + 0x2]
006C7D87  8D 53 02                  LEA EDX,[EBX + 0x2]
006C7D8A  8B FE                     MOV EDI,ESI
LAB_006c7d8c:
006C7D8C  8A 5A FE                  MOV BL,byte ptr [EDX + -0x2]
006C7D8F  83 C2 03                  ADD EDX,0x3
006C7D92  88 59 FE                  MOV byte ptr [ECX + -0x2],BL
006C7D95  8A 5A FC                  MOV BL,byte ptr [EDX + -0x4]
006C7D98  88 59 FF                  MOV byte ptr [ECX + -0x1],BL
006C7D9B  8A 5A FD                  MOV BL,byte ptr [EDX + -0x3]
006C7D9E  88 19                     MOV byte ptr [ECX],BL
006C7DA0  C6 41 01 00               MOV byte ptr [ECX + 0x1],0x0
006C7DA4  83 C1 04                  ADD ECX,0x4
006C7DA7  4F                        DEC EDI
006C7DA8  75 E2                     JNZ 0x006c7d8c
LAB_006c7daa:
006C7DAA  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006C7DAD  85 C9                     TEST ECX,ECX
006C7DAF  74 02                     JZ 0x006c7db3
006C7DB1  89 31                     MOV dword ptr [ECX],ESI
LAB_006c7db3:
006C7DB3  5F                        POP EDI
006C7DB4  5E                        POP ESI
006C7DB5  5B                        POP EBX
006C7DB6  5D                        POP EBP
006C7DB7  C2 0C 00                  RET 0xc
