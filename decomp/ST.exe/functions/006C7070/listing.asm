FUN_006c7070:
006C7070  55                        PUSH EBP
006C7071  8B EC                     MOV EBP,ESP
006C7073  83 EC 38                  SUB ESP,0x38
006C7076  53                        PUSH EBX
006C7077  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006C707A  56                        PUSH ESI
006C707B  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006C707E  8B 03                     MOV EAX,dword ptr [EBX]
006C7080  8B 4B 04                  MOV ECX,dword ptr [EBX + 0x4]
006C7083  85 F6                     TEST ESI,ESI
006C7085  57                        PUSH EDI
006C7086  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006C7089  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
006C708C  74 27                     JZ 0x006c70b5
006C708E  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006C7091  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
006C7094  85 C0                     TEST EAX,EAX
006C7096  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006C7099  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006C709C  7D 05                     JGE 0x006c70a3
006C709E  F7 D8                     NEG EAX
006C70A0  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_006c70a3:
006C70A3  50                        PUSH EAX
006C70A4  51                        PUSH ECX
006C70A5  53                        PUSH EBX
006C70A6  E8 E5 F9 FF FF            CALL 0x006c6a90
006C70AB  8B D6                     MOV EDX,ESI
006C70AD  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
006C70B0  E9 94 00 00 00            JMP 0x006c7149
LAB_006c70b5:
006C70B5  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
006C70B8  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
006C70BB  6A 01                     PUSH 0x1
006C70BD  68 00 01 00 00            PUSH 0x100
006C70C2  6A 08                     PUSH 0x8
006C70C4  50                        PUSH EAX
006C70C5  51                        PUSH ECX
006C70C6  C7 43 04 00 00 00 00      MOV dword ptr [EBX + 0x4],0x0
006C70CD  C7 03 00 00 00 00         MOV dword ptr [EBX],0x0
006C70D3  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006C70D6  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006C70D9  E8 12 A0 00 00            CALL 0x006d10f0
006C70DE  85 C0                     TEST EAX,EAX
006C70E0  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006C70E3  75 09                     JNZ 0x006c70ee
006C70E5  5F                        POP EDI
006C70E6  5E                        POP ESI
006C70E7  5B                        POP EBX
006C70E8  8B E5                     MOV ESP,EBP
006C70EA  5D                        POP EBP
006C70EB  C2 0C 00                  RET 0xc
LAB_006c70ee:
006C70EE  50                        PUSH EAX
006C70EF  E8 AC DE FE FF            CALL 0x006b4fa0
006C70F4  8A 4B 19                  MOV CL,byte ptr [EBX + 0x19]
006C70F7  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
006C70FA  8B 43 2A                  MOV EAX,dword ptr [EBX + 0x2a]
006C70FD  41                        INC ECX
006C70FE  BA 01 00 00 00            MOV EDX,0x1
006C7103  D3 E2                     SHL EDX,CL
006C7105  85 C0                     TEST EAX,EAX
006C7107  75 0E                     JNZ 0x006c7117
006C7109  8A 4B 10                  MOV CL,byte ptr [EBX + 0x10]
006C710C  8B 43 12                  MOV EAX,dword ptr [EBX + 0x12]
006C710F  41                        INC ECX
006C7110  BA 01 00 00 00            MOV EDX,0x1
006C7115  D3 E2                     SHL EDX,CL
LAB_006c7117:
006C7117  33 F6                     XOR ESI,ESI
006C7119  85 D2                     TEST EDX,EDX
006C711B  7E 29                     JLE 0x006c7146
006C711D  8D 78 02                  LEA EDI,[EAX + 0x2]
LAB_006c7120:
006C7120  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006C7123  8A 47 FE                  MOV AL,byte ptr [EDI + -0x2]
006C7126  83 C7 03                  ADD EDI,0x3
006C7129  88 44 B1 2A               MOV byte ptr [ECX + ESI*0x4 + 0x2a],AL
006C712D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006C7130  8A 47 FC                  MOV AL,byte ptr [EDI + -0x4]
006C7133  88 44 B1 29               MOV byte ptr [ECX + ESI*0x4 + 0x29],AL
006C7137  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006C713A  8A 47 FD                  MOV AL,byte ptr [EDI + -0x3]
006C713D  88 44 B1 28               MOV byte ptr [ECX + ESI*0x4 + 0x28],AL
006C7141  46                        INC ESI
006C7142  3B F2                     CMP ESI,EDX
006C7144  7C DA                     JL 0x006c7120
LAB_006c7146:
006C7146  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
LAB_006c7149:
006C7149  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
006C714C  B9 0A 00 00 00            MOV ECX,0xa
006C7151  BE C8 DF 7E 00            MOV ESI,0x7edfc8
006C7156  8D 7D C8                  LEA EDI,[EBP + -0x38]
006C7159  F3 A5                     MOVSD.REP ES:EDI,ESI
006C715B  8D 48 03                  LEA ECX,[EAX + 0x3]
006C715E  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
006C7161  83 E1 FC                  AND ECX,0xfffffffc
006C7164  C7 43 46 40 72 6C 00      MOV dword ptr [EBX + 0x46],0x6c7240
006C716B  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
006C716E  8D 4D C8                  LEA ECX,[EBP + -0x38]
006C7171  89 4B 2E                  MOV dword ptr [EBX + 0x2e],ECX
006C7174  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006C7177  89 4B 3E                  MOV dword ptr [EBX + 0x3e],ECX
006C717A  8A 4B 56                  MOV CL,byte ptr [EBX + 0x56]
006C717D  F6 C1 04                  TEST CL,0x4
006C7180  89 53 3A                  MOV dword ptr [EBX + 0x3a],EDX
006C7183  74 49                     JZ 0x006c71ce
006C7185  8B 33                     MOV ESI,dword ptr [EBX]
006C7187  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006C718A  8D 3C 30                  LEA EDI,[EAX + ESI*0x1]
006C718D  3B F9                     CMP EDI,ECX
006C718F  7F 05                     JG 0x006c7196
006C7191  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006C7194  EB 05                     JMP 0x006c719b
LAB_006c7196:
006C7196  2B CE                     SUB ECX,ESI
006C7198  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_006c719b:
006C719B  8B 7B 0C                  MOV EDI,dword ptr [EBX + 0xc]
006C719E  8B 73 04                  MOV ESI,dword ptr [EBX + 0x4]
006C71A1  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006C71A4  8D 04 37                  LEA EAX,[EDI + ESI*0x1]
006C71A7  3B C1                     CMP EAX,ECX
006C71A9  7F 04                     JG 0x006c71af
006C71AB  8B CF                     MOV ECX,EDI
006C71AD  EB 02                     JMP 0x006c71b1
LAB_006c71af:
006C71AF  2B CE                     SUB ECX,ESI
LAB_006c71b1:
006C71B1  33 C0                     XOR EAX,EAX
006C71B3  8A 43 11                  MOV AL,byte ptr [EBX + 0x11]
006C71B6  50                        PUSH EAX
006C71B7  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006C71BA  51                        PUSH ECX
006C71BB  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006C71BE  51                        PUSH ECX
006C71BF  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006C71C2  50                        PUSH EAX
006C71C3  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006C71C6  51                        PUSH ECX
006C71C7  50                        PUSH EAX
006C71C8  52                        PUSH EDX
006C71C9  E8 A2 CF FE FF            CALL 0x006b4170
LAB_006c71ce:
006C71CE  68 30 74 6C 00            PUSH 0x6c7430
006C71D3  68 F0 72 6C 00            PUSH 0x6c72f0
006C71D8  53                        PUSH EBX
006C71D9  E8 32 FD FF FF            CALL 0x006c6f10
006C71DE  8B F0                     MOV ESI,EAX
006C71E0  83 FE FF                  CMP ESI,-0x1
006C71E3  75 02                     JNZ 0x006c71e7
006C71E5  33 F6                     XOR ESI,ESI
LAB_006c71e7:
006C71E7  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006C71EA  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006C71ED  85 F6                     TEST ESI,ESI
006C71EF  89 0B                     MOV dword ptr [EBX],ECX
006C71F1  89 53 04                  MOV dword ptr [EBX + 0x4],EDX
006C71F4  74 32                     JZ 0x006c7228
006C71F6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006C71F9  85 C0                     TEST EAX,EAX
006C71FB  75 09                     JNZ 0x006c7206
006C71FD  8D 45 08                  LEA EAX,[EBP + 0x8]
006C7200  50                        PUSH EAX
006C7201  E8 5A 3E FE FF            CALL 0x006ab060
LAB_006c7206:
006C7206  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006C720C  68 BE 00 00 00            PUSH 0xbe
006C7211  68 F0 DF 7E 00            PUSH 0x7edff0
006C7216  51                        PUSH ECX
006C7217  56                        PUSH ESI
006C7218  E8 23 EC FD FF            CALL 0x006a5e40
006C721D  5F                        POP EDI
006C721E  5E                        POP ESI
006C721F  33 C0                     XOR EAX,EAX
006C7221  5B                        POP EBX
006C7222  8B E5                     MOV ESP,EBP
006C7224  5D                        POP EBP
006C7225  C2 0C 00                  RET 0xc
LAB_006c7228:
006C7228  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C722B  5F                        POP EDI
006C722C  5E                        POP ESI
006C722D  5B                        POP EBX
006C722E  8B E5                     MOV ESP,EBP
006C7230  5D                        POP EBP
006C7231  C2 0C 00                  RET 0xc
