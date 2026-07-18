FUN_006e57b0:
006E57B0  55                        PUSH EBP
006E57B1  8B EC                     MOV EBP,ESP
006E57B3  83 EC 20                  SUB ESP,0x20
006E57B6  56                        PUSH ESI
006E57B7  57                        PUSH EDI
006E57B8  8B F9                     MOV EDI,ECX
006E57BA  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
006E57BD  85 C0                     TEST EAX,EAX
006E57BF  74 47                     JZ 0x006e5808
006E57C1  C7 45 F0 03 00 00 00      MOV dword ptr [EBP + -0x10],0x3
006E57C8  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
006E57CB  33 F6                     XOR ESI,ESI
006E57CD  85 C9                     TEST ECX,ECX
006E57CF  76 37                     JBE 0x006e5808
006E57D1  53                        PUSH EBX
006E57D2  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
LAB_006e57d5:
006E57D5  85 C9                     TEST ECX,ECX
006E57D7  76 05                     JBE 0x006e57de
006E57D9  8B 40 1C                  MOV EAX,dword ptr [EAX + 0x1c]
006E57DC  EB 02                     JMP 0x006e57e0
LAB_006e57de:
006E57DE  33 C0                     XOR EAX,EAX
LAB_006e57e0:
006E57E0  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
006E57E3  39 59 04                  CMP dword ptr [ECX + 0x4],EBX
006E57E6  75 14                     JNZ 0x006e57fc
006E57E8  8B 01                     MOV EAX,dword ptr [ECX]
006E57EA  8D 55 E0                  LEA EDX,[EBP + -0x20]
006E57ED  52                        PUSH EDX
006E57EE  FF 10                     CALL dword ptr [EAX]
006E57F0  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
006E57F3  56                        PUSH ESI
006E57F4  50                        PUSH EAX
006E57F5  E8 76 B4 FC FF            CALL 0x006b0c70
006E57FA  EB 01                     JMP 0x006e57fd
LAB_006e57fc:
006E57FC  46                        INC ESI
LAB_006e57fd:
006E57FD  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
006E5800  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
006E5803  3B F1                     CMP ESI,ECX
006E5805  72 CE                     JC 0x006e57d5
006E5807  5B                        POP EBX
LAB_006e5808:
006E5808  5F                        POP EDI
006E5809  5E                        POP ESI
006E580A  8B E5                     MOV ESP,EBP
006E580C  5D                        POP EBP
006E580D  C2 04 00                  RET 0x4
