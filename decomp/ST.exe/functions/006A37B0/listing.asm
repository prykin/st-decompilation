FUN_006a37b0:
006A37B0  55                        PUSH EBP
006A37B1  8B EC                     MOV EBP,ESP
006A37B3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006A37B6  53                        PUSH EBX
006A37B7  56                        PUSH ESI
006A37B8  57                        PUSH EDI
006A37B9  85 C0                     TEST EAX,EAX
006A37BB  7C 4F                     JL 0x006a380c
006A37BD  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006A37C0  3B 03                     CMP EAX,dword ptr [EBX]
006A37C2  7D 48                     JGE 0x006a380c
006A37C4  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006A37C7  85 FF                     TEST EDI,EDI
006A37C9  7C 41                     JL 0x006a380c
006A37CB  3B 7B 04                  CMP EDI,dword ptr [EBX + 0x4]
006A37CE  7D 3C                     JGE 0x006a380c
006A37D0  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
006A37D3  85 F6                     TEST ESI,ESI
006A37D5  7C 35                     JL 0x006a380c
006A37D7  83 FE 06                  CMP ESI,0x6
006A37DA  7D 30                     JGE 0x006a380c
006A37DC  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006A37DF  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A37E2  51                        PUSH ECX
006A37E3  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006A37E6  52                        PUSH EDX
006A37E7  51                        PUSH ECX
006A37E8  56                        PUSH ESI
006A37E9  57                        PUSH EDI
006A37EA  50                        PUSH EAX
006A37EB  53                        PUSH EBX
006A37EC  E8 17 1B D6 FF            CALL 0x00405308
006A37F1  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006A37F4  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006A37F7  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006A37FA  52                        PUSH EDX
006A37FB  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006A37FE  50                        PUSH EAX
006A37FF  51                        PUSH ECX
006A3800  56                        PUSH ESI
006A3801  57                        PUSH EDI
006A3802  52                        PUSH EDX
006A3803  53                        PUSH EBX
006A3804  E8 5D 08 D6 FF            CALL 0x00404066
006A3809  83 C4 38                  ADD ESP,0x38
LAB_006a380c:
006A380C  5F                        POP EDI
006A380D  5E                        POP ESI
006A380E  B8 01 00 00 00            MOV EAX,0x1
006A3813  5B                        POP EBX
006A3814  5D                        POP EBP
006A3815  C3                        RET
