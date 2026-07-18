FUN_004e70f0:
004E70F0  55                        PUSH EBP
004E70F1  8B EC                     MOV EBP,ESP
004E70F3  51                        PUSH ECX
004E70F4  53                        PUSH EBX
004E70F5  56                        PUSH ESI
004E70F6  57                        PUSH EDI
004E70F7  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004E70FA  85 FF                     TEST EDI,EDI
004E70FC  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004E70FF  0F 8C DE 00 00 00         JL 0x004e71e3
004E7105  83 FF 08                  CMP EDI,0x8
004E7108  0F 8D D5 00 00 00         JGE 0x004e71e3
004E710E  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
004E7111  85 F6                     TEST ESI,ESI
004E7113  0F 8C CA 00 00 00         JL 0x004e71e3
004E7119  83 FE 03                  CMP ESI,0x3
004E711C  0F 8D C1 00 00 00         JGE 0x004e71e3
004E7122  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004E7125  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004E7128  57                        PUSH EDI
004E7129  C7 00 FF FF FF FF         MOV dword ptr [EAX],0xffffffff
004E712F  C7 02 FF FF FF FF         MOV dword ptr [EDX],0xffffffff
004E7135  E8 7D D8 F1 FF            CALL 0x004049b7
004E713A  25 FF 00 00 00            AND EAX,0xff
004E713F  C7 45 08 00 00 00 00      MOV dword ptr [EBP + 0x8],0x0
004E7146  48                        DEC EAX
004E7147  8D 0C 46                  LEA ECX,[ESI + EAX*0x2]
004E714A  03 C1                     ADD EAX,ECX
004E714C  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
004E714F  8D 1C C9                  LEA EBX,[ECX + ECX*0x8]
004E7152  8B 8C 9B BC 95 79 00      MOV ECX,dword ptr [EBX + EBX*0x4 + 0x7995bc]
004E7159  85 C9                     TEST ECX,ECX
004E715B  0F 8E 82 00 00 00         JLE 0x004e71e3
004E7161  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004E7164  8D 34 C0                  LEA ESI,[EAX + EAX*0x8]
004E7167  8D B4 F6 BC 95 79 00      LEA ESI,[ESI + ESI*0x8 + 0x7995bc]
LAB_004e716e:
004E716E  83 7D 08 51               CMP dword ptr [EBP + 0x8],0x51
004E7172  7D 6F                     JGE 0x004e71e3
004E7174  8B 16                     MOV EDX,dword ptr [ESI]
004E7176  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004E7179  52                        PUSH EDX
004E717A  57                        PUSH EDI
004E717B  E8 EB A6 F1 FF            CALL 0x0040186b
004E7180  33 C9                     XOR ECX,ECX
004E7182  8A 4E 04                  MOV CL,byte ptr [ESI + 0x4]
004E7185  3B C1                     CMP EAX,ECX
004E7187  7D 20                     JGE 0x004e71a9
004E7189  8B 16                     MOV EDX,dword ptr [ESI]
004E718B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004E718E  52                        PUSH EDX
004E718F  57                        PUSH EDI
004E7190  E8 BA E0 F1 FF            CALL 0x0040524f
004E7195  85 C0                     TEST EAX,EAX
004E7197  74 10                     JZ 0x004e71a9
004E7199  8B 06                     MOV EAX,dword ptr [ESI]
004E719B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004E719E  50                        PUSH EAX
004E719F  57                        PUSH EDI
004E71A0  E8 7A AC F1 FF            CALL 0x00401e1f
004E71A5  85 C0                     TEST EAX,EAX
004E71A7  74 1A                     JZ 0x004e71c3
LAB_004e71a9:
004E71A9  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004E71AC  8B 46 05                  MOV EAX,dword ptr [ESI + 0x5]
004E71AF  83 C6 05                  ADD ESI,0x5
004E71B2  42                        INC EDX
004E71B3  85 C0                     TEST EAX,EAX
004E71B5  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
004E71B8  7F B4                     JG 0x004e716e
004E71BA  5F                        POP EDI
004E71BB  5E                        POP ESI
004E71BC  5B                        POP EBX
004E71BD  8B E5                     MOV ESP,EBP
004E71BF  5D                        POP EBP
004E71C0  C2 10 00                  RET 0x10
LAB_004e71c3:
004E71C3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004E71C6  8D 04 0B                  LEA EAX,[EBX + ECX*0x1]
004E71C9  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004E71CC  8B 94 80 BC 95 79 00      MOV EDX,dword ptr [EAX + EAX*0x4 + 0x7995bc]
004E71D3  89 11                     MOV dword ptr [ECX],EDX
004E71D5  33 D2                     XOR EDX,EDX
004E71D7  8A 94 80 C0 95 79 00      MOV DL,byte ptr [EAX + EAX*0x4 + 0x7995c0]
004E71DE  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004E71E1  89 10                     MOV dword ptr [EAX],EDX
LAB_004e71e3:
004E71E3  5F                        POP EDI
004E71E4  5E                        POP ESI
004E71E5  5B                        POP EBX
004E71E6  8B E5                     MOV ESP,EBP
004E71E8  5D                        POP EBP
004E71E9  C2 10 00                  RET 0x10
