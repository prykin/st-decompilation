FUN_00483f10:
00483F10  55                        PUSH EBP
00483F11  8B EC                     MOV EBP,ESP
00483F13  83 EC 18                  SUB ESP,0x18
00483F16  56                        PUSH ESI
00483F17  8B F1                     MOV ESI,ECX
00483F19  57                        PUSH EDI
00483F1A  8B 86 71 04 00 00         MOV EAX,dword ptr [ESI + 0x471]
00483F20  66 8B 8E 6F 04 00 00      MOV CX,word ptr [ESI + 0x46f]
00483F27  50                        PUSH EAX
00483F28  51                        PUSH ECX
00483F29  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00483F2F  E8 6A E2 F7 FF            CALL 0x0040219e
00483F34  85 C0                     TEST EAX,EAX
00483F36  0F 84 96 00 00 00         JZ 0x00483fd2
00483F3C  8B 8E 6B 04 00 00         MOV ECX,dword ptr [ESI + 0x46b]
00483F42  53                        PUSH EBX
00483F43  0F BF 46 45               MOVSX EAX,word ptr [ESI + 0x45]
00483F47  0F BF 51 45               MOVSX EDX,word ptr [ECX + 0x45]
00483F4B  2B C2                     SUB EAX,EDX
00483F4D  99                        CDQ
00483F4E  8B D8                     MOV EBX,EAX
00483F50  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
00483F53  0F BF 51 43               MOVSX EDX,word ptr [ECX + 0x43]
00483F57  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
00483F5B  0F BF 49 41               MOVSX ECX,word ptr [ECX + 0x41]
00483F5F  2B C2                     SUB EAX,EDX
00483F61  99                        CDQ
00483F62  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00483F65  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00483F68  0F BF 46 41               MOVSX EAX,word ptr [ESI + 0x41]
00483F6C  2B C1                     SUB EAX,ECX
00483F6E  99                        CDQ
00483F6F  8B C8                     MOV ECX,EAX
00483F71  8B 86 10 08 00 00         MOV EAX,dword ptr [ESI + 0x810]
00483F77  8B FA                     MOV EDI,EDX
00483F79  57                        PUSH EDI
00483F7A  51                        PUSH ECX
00483F7B  99                        CDQ
00483F7C  57                        PUSH EDI
00483F7D  51                        PUSH ECX
00483F7E  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00483F81  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00483F84  E8 67 A5 2A 00            CALL 0x0072e4f0
00483F89  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00483F8C  8B F8                     MOV EDI,EAX
00483F8E  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00483F91  51                        PUSH ECX
00483F92  50                        PUSH EAX
00483F93  51                        PUSH ECX
00483F94  50                        PUSH EAX
00483F95  8B F2                     MOV ESI,EDX
00483F97  E8 54 A5 2A 00            CALL 0x0072e4f0
00483F9C  03 F8                     ADD EDI,EAX
00483F9E  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00483FA1  50                        PUSH EAX
00483FA2  53                        PUSH EBX
00483FA3  50                        PUSH EAX
00483FA4  53                        PUSH EBX
00483FA5  13 F2                     ADC ESI,EDX
00483FA7  E8 44 A5 2A 00            CALL 0x0072e4f0
00483FAC  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00483FAF  03 F8                     ADD EDI,EAX
00483FB1  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00483FB4  51                        PUSH ECX
00483FB5  50                        PUSH EAX
00483FB6  51                        PUSH ECX
00483FB7  50                        PUSH EAX
00483FB8  13 F2                     ADC ESI,EDX
00483FBA  E8 31 A5 2A 00            CALL 0x0072e4f0
00483FBF  3B F2                     CMP ESI,EDX
00483FC1  5B                        POP EBX
00483FC2  7C 0E                     JL 0x00483fd2
00483FC4  7F 04                     JG 0x00483fca
00483FC6  3B F8                     CMP EDI,EAX
00483FC8  76 08                     JBE 0x00483fd2
LAB_00483fca:
00483FCA  5F                        POP EDI
00483FCB  33 C0                     XOR EAX,EAX
00483FCD  5E                        POP ESI
00483FCE  8B E5                     MOV ESP,EBP
00483FD0  5D                        POP EBP
00483FD1  C3                        RET
LAB_00483fd2:
00483FD2  5F                        POP EDI
00483FD3  B8 01 00 00 00            MOV EAX,0x1
00483FD8  5E                        POP ESI
00483FD9  8B E5                     MOV ESP,EBP
00483FDB  5D                        POP EBP
00483FDC  C3                        RET
