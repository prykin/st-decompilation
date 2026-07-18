FUN_006b1110:
006B1110  55                        PUSH EBP
006B1111  8B EC                     MOV EBP,ESP
006B1113  83 EC 10                  SUB ESP,0x10
006B1116  56                        PUSH ESI
006B1117  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006B111A  33 C0                     XOR EAX,EAX
006B111C  81 FE 80 00 00 00         CMP ESI,0x80
006B1122  57                        PUSH EDI
006B1123  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006B1126  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006B1129  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006B112C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006B112F  7D 3B                     JGE 0x006b116c
006B1131  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
LAB_006b1134:
006B1134  3B F7                     CMP ESI,EDI
006B1136  7F 34                     JG 0x006b116c
006B1138  8B C6                     MOV EAX,ESI
006B113A  8B CE                     MOV ECX,ESI
006B113C  99                        CDQ
006B113D  83 E2 1F                  AND EDX,0x1f
006B1140  03 C2                     ADD EAX,EDX
006B1142  C1 F8 05                  SAR EAX,0x5
006B1145  81 E1 1F 00 00 80         AND ECX,0x8000001f
006B114B  8D 44 85 F0               LEA EAX,[EBP + EAX*0x4 + -0x10]
006B114F  79 05                     JNS 0x006b1156
006B1151  49                        DEC ECX
006B1152  83 C9 E0                  OR ECX,0xffffffe0
006B1155  41                        INC ECX
LAB_006b1156:
006B1156  BA 01 00 00 00            MOV EDX,0x1
006B115B  D3 E2                     SHL EDX,CL
006B115D  8B 08                     MOV ECX,dword ptr [EAX]
006B115F  0B CA                     OR ECX,EDX
006B1161  46                        INC ESI
006B1162  81 FE 80 00 00 00         CMP ESI,0x80
006B1168  89 08                     MOV dword ptr [EAX],ECX
006B116A  7C C8                     JL 0x006b1134
LAB_006b116c:
006B116C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B116F  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006B1172  8B C8                     MOV ECX,EAX
006B1174  5F                        POP EDI
006B1175  5E                        POP ESI
006B1176  89 11                     MOV dword ptr [ECX],EDX
006B1178  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006B117B  89 51 04                  MOV dword ptr [ECX + 0x4],EDX
006B117E  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006B1181  89 51 08                  MOV dword ptr [ECX + 0x8],EDX
006B1184  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006B1187  89 51 0C                  MOV dword ptr [ECX + 0xc],EDX
006B118A  8B E5                     MOV ESP,EBP
006B118C  5D                        POP EBP
006B118D  C3                        RET
