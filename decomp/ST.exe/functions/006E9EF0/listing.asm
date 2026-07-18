FUN_006e9ef0:
006E9EF0  55                        PUSH EBP
006E9EF1  8B EC                     MOV EBP,ESP
006E9EF3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006E9EF6  8B 81 10 03 00 00         MOV EAX,dword ptr [ECX + 0x310]
006E9EFC  56                        PUSH ESI
006E9EFD  3B D0                     CMP EDX,EAX
006E9EFF  57                        PUSH EDI
006E9F00  0F 83 2C 01 00 00         JNC 0x006ea032
006E9F06  8B 89 1C 03 00 00         MOV ECX,dword ptr [ECX + 0x31c]
006E9F0C  8D 04 52                  LEA EAX,[EDX + EDX*0x2]
006E9F0F  C1 E0 03                  SHL EAX,0x3
006E9F12  2B C2                     SUB EAX,EDX
006E9F14  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006E9F17  8D 34 81                  LEA ESI,[ECX + EAX*0x4]
006E9F1A  8B 04 81                  MOV EAX,dword ptr [ECX + EAX*0x4]
006E9F1D  F6 C4 80                  TEST AH,0x80
006E9F20  0F 84 0C 01 00 00         JZ 0x006ea032
006E9F26  8B 8E 94 00 00 00         MOV ECX,dword ptr [ESI + 0x94]
006E9F2C  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006E9F2F  3B F9                     CMP EDI,ECX
006E9F31  0F 83 EB 00 00 00         JNC 0x006ea022
006E9F37  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006E9F3A  85 D2                     TEST EDX,EDX
006E9F3C  0F 84 85 00 00 00         JZ 0x006e9fc7
006E9F42  F6 C4 02                  TEST AH,0x2
006E9F45  0F 85 F6 00 00 00         JNZ 0x006ea041
006E9F4B  8B 86 A8 00 00 00         MOV EAX,dword ptr [ESI + 0xa8]
006E9F51  85 C0                     TEST EAX,EAX
006E9F53  75 1B                     JNZ 0x006e9f70
006E9F55  8D 14 CD 00 00 00 00      LEA EDX,[ECX*0x8 + 0x0]
006E9F5C  52                        PUSH EDX
006E9F5D  E8 AE 0C FC FF            CALL 0x006aac10
006E9F62  85 C0                     TEST EAX,EAX
006E9F64  89 86 A8 00 00 00         MOV dword ptr [ESI + 0xa8],EAX
006E9F6A  0F 84 D1 00 00 00         JZ 0x006ea041
LAB_006e9f70:
006E9F70  8B 86 A8 00 00 00         MOV EAX,dword ptr [ESI + 0xa8]
006E9F76  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006E9F79  66 89 0C F8               MOV word ptr [EAX + EDI*0x8],CX
006E9F7D  8B 96 A8 00 00 00         MOV EDX,dword ptr [ESI + 0xa8]
006E9F83  66 8B 45 1C               MOV AX,word ptr [EBP + 0x1c]
006E9F87  66 89 44 FA 02            MOV word ptr [EDX + EDI*0x8 + 0x2],AX
006E9F8C  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006E9F8F  85 C0                     TEST EAX,EAX
006E9F91  75 05                     JNZ 0x006e9f98
006E9F93  B8 01 00 00 00            MOV EAX,0x1
LAB_006e9f98:
006E9F98  8B 96 A8 00 00 00         MOV EDX,dword ptr [ESI + 0xa8]
006E9F9E  51                        PUSH ECX
006E9F9F  57                        PUSH EDI
006E9FA0  56                        PUSH ESI
006E9FA1  66 89 44 FA 04            MOV word ptr [EDX + EDI*0x8 + 0x4],AX
006E9FA6  8B 86 A4 00 00 00         MOV EAX,dword ptr [ESI + 0xa4]
006E9FAC  80 4C B8 02 20            OR byte ptr [EAX + EDI*0x4 + 0x2],0x20
006E9FB1  8D 44 B8 02               LEA EAX,[EAX + EDI*0x4 + 0x2]
006E9FB5  8B 06                     MOV EAX,dword ptr [ESI]
006E9FB7  80 CC 01                  OR AH,0x1
006E9FBA  89 06                     MOV dword ptr [ESI],EAX
006E9FBC  E8 4F FA FF FF            CALL 0x006e9a10
006E9FC1  5F                        POP EDI
006E9FC2  5E                        POP ESI
006E9FC3  5D                        POP EBP
006E9FC4  C2 18 00                  RET 0x18
LAB_006e9fc7:
006E9FC7  8B 8E A4 00 00 00         MOV ECX,dword ptr [ESI + 0xa4]
006E9FCD  66 81 64 B9 02 DF FF      AND word ptr [ECX + EDI*0x4 + 0x2],0xffdf
006E9FD4  8D 44 B9 02               LEA EAX,[ECX + EDI*0x4 + 0x2]
006E9FD8  8B 8E 94 00 00 00         MOV ECX,dword ptr [ESI + 0x94]
006E9FDE  33 FF                     XOR EDI,EDI
006E9FE0  85 C9                     TEST ECX,ECX
006E9FE2  7E 16                     JLE 0x006e9ffa
006E9FE4  8B 86 A4 00 00 00         MOV EAX,dword ptr [ESI + 0xa4]
006E9FEA  83 C0 02                  ADD EAX,0x2
LAB_006e9fed:
006E9FED  F6 00 20                  TEST byte ptr [EAX],0x20
006E9FF0  75 08                     JNZ 0x006e9ffa
006E9FF2  47                        INC EDI
006E9FF3  83 C0 04                  ADD EAX,0x4
006E9FF6  3B F9                     CMP EDI,ECX
006E9FF8  7C F3                     JL 0x006e9fed
LAB_006e9ffa:
006E9FFA  8B 06                     MOV EAX,dword ptr [ESI]
006E9FFC  F6 C4 01                  TEST AH,0x1
006E9FFF  74 0C                     JZ 0x006ea00d
006EA001  8D 96 A8 00 00 00         LEA EDX,[ESI + 0xa8]
006EA007  52                        PUSH EDX
006EA008  E8 53 10 FC FF            CALL 0x006ab060
LAB_006ea00d:
006EA00D  3B BE 94 00 00 00         CMP EDI,dword ptr [ESI + 0x94]
006EA013  7C 2C                     JL 0x006ea041
006EA015  8B 06                     MOV EAX,dword ptr [ESI]
006EA017  5F                        POP EDI
006EA018  80 E4 FE                  AND AH,0xfe
006EA01B  89 06                     MOV dword ptr [ESI],EAX
006EA01D  5E                        POP ESI
006EA01E  5D                        POP EBP
006EA01F  C2 18 00                  RET 0x18
LAB_006ea022:
006EA022  68 FC ED 7E 00            PUSH 0x7eedfc
006EA027  E8 74 F1 FF FF            CALL 0x006e91a0
006EA02C  5F                        POP EDI
006EA02D  5E                        POP ESI
006EA02E  5D                        POP EBP
006EA02F  C2 18 00                  RET 0x18
LAB_006ea032:
006EA032  83 FA FF                  CMP EDX,-0x1
006EA035  74 0A                     JZ 0x006ea041
006EA037  68 FC ED 7E 00            PUSH 0x7eedfc
006EA03C  E8 0F EC FF FF            CALL 0x006e8c50
LAB_006ea041:
006EA041  5F                        POP EDI
006EA042  5E                        POP ESI
006EA043  5D                        POP EBP
006EA044  C2 18 00                  RET 0x18
