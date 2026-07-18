FUN_006a2e50:
006A2E50  55                        PUSH EBP
006A2E51  8B EC                     MOV EBP,ESP
006A2E53  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006A2E56  85 C0                     TEST EAX,EAX
006A2E58  7E 50                     JLE 0x006a2eaa
006A2E5A  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006A2E5D  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006A2E60  0F AF 4D 14               IMUL ECX,dword ptr [EBP + 0x14]
006A2E64  53                        PUSH EBX
006A2E65  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
006A2E68  56                        PUSH ESI
006A2E69  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006A2E6C  57                        PUSH EDI
006A2E6D  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006A2E70  03 CE                     ADD ECX,ESI
006A2E72  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006A2E75  03 CA                     ADD ECX,EDX
LAB_006a2e77:
006A2E77  85 DB                     TEST EBX,EBX
006A2E79  7E 1C                     JLE 0x006a2e97
006A2E7B  8B F1                     MOV ESI,ECX
006A2E7D  8B C7                     MOV EAX,EDI
006A2E7F  2B F7                     SUB ESI,EDI
006A2E81  89 5D 24                  MOV dword ptr [EBP + 0x24],EBX
LAB_006a2e84:
006A2E84  8A 10                     MOV DL,byte ptr [EAX]
006A2E86  84 D2                     TEST DL,DL
006A2E88  74 03                     JZ 0x006a2e8d
006A2E8A  88 14 06                  MOV byte ptr [ESI + EAX*0x1],DL
LAB_006a2e8d:
006A2E8D  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006A2E90  40                        INC EAX
006A2E91  4A                        DEC EDX
006A2E92  89 55 24                  MOV dword ptr [EBP + 0x24],EDX
006A2E95  75 ED                     JNZ 0x006a2e84
LAB_006a2e97:
006A2E97  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
006A2E9A  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006A2E9D  03 CE                     ADD ECX,ESI
006A2E9F  03 FB                     ADD EDI,EBX
006A2EA1  48                        DEC EAX
006A2EA2  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006A2EA5  75 D0                     JNZ 0x006a2e77
006A2EA7  5F                        POP EDI
006A2EA8  5E                        POP ESI
006A2EA9  5B                        POP EBX
LAB_006a2eaa:
006A2EAA  5D                        POP EBP
006A2EAB  C3                        RET
