FUN_006b1030:
006B1030  55                        PUSH EBP
006B1031  8B EC                     MOV EBP,ESP
006B1033  53                        PUSH EBX
006B1034  56                        PUSH ESI
006B1035  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006B1038  57                        PUSH EDI
006B1039  81 FE 80 00 00 00         CMP ESI,0x80
006B103F  7D 3B                     JGE 0x006b107c
006B1041  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006B1044  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
LAB_006b1047:
006B1047  3B F3                     CMP ESI,EBX
006B1049  7F 31                     JG 0x006b107c
006B104B  8B CE                     MOV ECX,ESI
006B104D  81 E1 1F 00 00 80         AND ECX,0x8000001f
006B1053  79 05                     JNS 0x006b105a
006B1055  49                        DEC ECX
006B1056  83 C9 E0                  OR ECX,0xffffffe0
006B1059  41                        INC ECX
LAB_006b105a:
006B105A  BA 01 00 00 00            MOV EDX,0x1
006B105F  8B C6                     MOV EAX,ESI
006B1061  D3 E2                     SHL EDX,CL
006B1063  8B CA                     MOV ECX,EDX
006B1065  99                        CDQ
006B1066  83 E2 1F                  AND EDX,0x1f
006B1069  03 C2                     ADD EAX,EDX
006B106B  C1 F8 05                  SAR EAX,0x5
006B106E  85 0C 87                  TEST dword ptr [EDI + EAX*0x4],ECX
006B1071  74 13                     JZ 0x006b1086
006B1073  46                        INC ESI
006B1074  81 FE 80 00 00 00         CMP ESI,0x80
006B107A  7C CB                     JL 0x006b1047
LAB_006b107c:
006B107C  5F                        POP EDI
006B107D  5E                        POP ESI
006B107E  B8 01 00 00 00            MOV EAX,0x1
006B1083  5B                        POP EBX
006B1084  5D                        POP EBP
006B1085  C3                        RET
LAB_006b1086:
006B1086  5F                        POP EDI
006B1087  5E                        POP ESI
006B1088  33 C0                     XOR EAX,EAX
006B108A  5B                        POP EBX
006B108B  5D                        POP EBP
006B108C  C3                        RET
