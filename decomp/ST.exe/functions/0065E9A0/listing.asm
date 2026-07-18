FUN_0065e9a0:
0065E9A0  55                        PUSH EBP
0065E9A1  8B EC                     MOV EBP,ESP
0065E9A3  83 EC 10                  SUB ESP,0x10
0065E9A6  53                        PUSH EBX
0065E9A7  56                        PUSH ESI
0065E9A8  8B C1                     MOV EAX,ECX
0065E9AA  57                        PUSH EDI
0065E9AB  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0065E9B1  33 FF                     XOR EDI,EDI
0065E9B3  3B CF                     CMP ECX,EDI
0065E9B5  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0065E9B8  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0065E9BB  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0065E9BE  74 2E                     JZ 0x0065e9ee
0065E9C0  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0065E9C3  3B F7                     CMP ESI,EDI
0065E9C5  74 27                     JZ 0x0065e9ee
0065E9C7  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0065E9CA  3B DF                     CMP EBX,EDI
0065E9CC  7C 05                     JL 0x0065e9d3
0065E9CE  83 FB 08                  CMP EBX,0x8
0065E9D1  7E 09                     JLE 0x0065e9dc
LAB_0065e9d3:
0065E9D3  8B 98 97 00 00 00         MOV EBX,dword ptr [EAX + 0x97]
0065E9D9  83 FB 08                  CMP EBX,0x8
LAB_0065e9dc:
0065E9DC  75 08                     JNZ 0x0065e9e6
0065E9DE  33 DB                     XOR EBX,EBX
0065E9E0  8A 1D 4D 87 80 00         MOV BL,byte ptr [0x0080874d]
LAB_0065e9e6:
0065E9E6  81 FB FF 00 00 00         CMP EBX,0xff
0065E9EC  75 0C                     JNZ 0x0065e9fa
LAB_0065e9ee:
0065E9EE  5F                        POP EDI
0065E9EF  5E                        POP ESI
0065E9F0  83 C8 FF                  OR EAX,0xffffffff
0065E9F3  5B                        POP EBX
0065E9F4  8B E5                     MOV ESP,EBP
0065E9F6  5D                        POP EBP
0065E9F7  C2 1C 00                  RET 0x1c
LAB_0065e9fa:
0065E9FA  53                        PUSH EBX
0065E9FB  E8 7E 34 DA FF            CALL 0x00401e7e
0065EA00  25 FF FF 00 00            AND EAX,0xffff
0065EA05  0F 84 E1 00 00 00         JZ 0x0065eaec
0065EA0B  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0065EA0E  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
0065EA11  C1 E2 02                  SHL EDX,0x2
0065EA14  52                        PUSH EDX
0065EA15  E8 F6 C1 04 00            CALL 0x006aac10
0065EA1A  8A 4D 1C                  MOV CL,byte ptr [EBP + 0x1c]
0065EA1D  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0065EA20  80 F9 08                  CMP CL,0x8
0065EA23  89 3D 00 19 81 00         MOV dword ptr [0x00811900],EDI
0065EA29  75 05                     JNZ 0x0065ea30
0065EA2B  88 5D 1C                  MOV byte ptr [EBP + 0x1c],BL
0065EA2E  EB 10                     JMP 0x0065ea40
LAB_0065ea30:
0065EA30  84 C9                     TEST CL,CL
0065EA32  7C 08                     JL 0x0065ea3c
0065EA34  80 F9 08                  CMP CL,0x8
0065EA37  88 4D 1C                  MOV byte ptr [EBP + 0x1c],CL
0065EA3A  7E 04                     JLE 0x0065ea40
LAB_0065ea3c:
0065EA3C  C6 45 1C FF               MOV byte ptr [EBP + 0x1c],0xff
LAB_0065ea40:
0065EA40  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
0065EA43  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
0065EA46  F7 D9                     NEG ECX
0065EA48  1B C9                     SBB ECX,ECX
0065EA4A  F7 D1                     NOT ECX
0065EA4C  81 E1 35 49 40 00         AND ECX,0x404935
0065EA52  51                        PUSH ECX
0065EA53  50                        PUSH EAX
0065EA54  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0065EA57  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0065EA5A  68 9C 55 40 00            PUSH 0x40559c
0065EA5F  6A FF                     PUSH -0x1
0065EA61  6A FF                     PUSH -0x1
0065EA63  6A FF                     PUSH -0x1
0065EA65  57                        PUSH EDI
0065EA66  57                        PUSH EDI
0065EA67  57                        PUSH EDI
0065EA68  52                        PUSH EDX
0065EA69  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0065EA6C  50                        PUSH EAX
0065EA6D  51                        PUSH ECX
0065EA6E  52                        PUSH EDX
0065EA6F  53                        PUSH EBX
0065EA70  E8 83 28 DA FF            CALL 0x004012f8
0065EA75  A1 00 19 81 00            MOV EAX,[0x00811900]
0065EA7A  83 C4 38                  ADD ESP,0x38
0065EA7D  3B C7                     CMP EAX,EDI
0065EA7F  74 6B                     JZ 0x0065eaec
0065EA81  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0065EA84  50                        PUSH EAX
0065EA85  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0065EA88  83 C1 1C                  ADD ECX,0x1c
0065EA8B  50                        PUSH EAX
0065EA8C  E8 92 39 DA FF            CALL 0x00402423
0065EA91  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0065EA94  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0065EA97  8D 04 50                  LEA EAX,[EAX + EDX*0x2]
0065EA9A  8B 4C 81 0C               MOV ECX,dword ptr [ECX + EAX*0x4 + 0xc]
0065EA9E  3B CF                     CMP ECX,EDI
0065EAA0  74 4A                     JZ 0x0065eaec
0065EAA2  8D 55 0E                  LEA EDX,[EBP + 0xe]
0065EAA5  8D 45 F0                  LEA EAX,[EBP + -0x10]
0065EAA8  52                        PUSH EDX
0065EAA9  8D 55 08                  LEA EDX,[EBP + 0x8]
0065EAAC  50                        PUSH EAX
0065EAAD  52                        PUSH EDX
0065EAAE  E8 12 2E DA FF            CALL 0x004018c5
0065EAB3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0065EAB6  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0065EAB9  48                        DEC EAX
0065EABA  49                        DEC ECX
0065EABB  66 89 06                  MOV word ptr [ESI],AX
0065EABE  8D 46 02                  LEA EAX,[ESI + 0x2]
0065EAC1  8D 56 08                  LEA EDX,[ESI + 0x8]
0065EAC4  66 89 7E 04               MOV word ptr [ESI + 0x4],DI
0065EAC8  66 89 08                  MOV word ptr [EAX],CX
0065EACB  8D 4E 06                  LEA ECX,[ESI + 0x6]
0065EACE  52                        PUSH EDX
0065EACF  51                        PUSH ECX
0065EAD0  50                        PUSH EAX
0065EAD1  56                        PUSH ESI
0065EAD2  66 C7 01 03 00            MOV word ptr [ECX],0x3
0065EAD7  66 C7 02 03 00            MOV word ptr [EDX],0x3
0065EADC  66 C7 46 0A 05 00         MOV word ptr [ESI + 0xa],0x5
0065EAE2  E8 1F 2E DA FF            CALL 0x00401906
0065EAE7  83 C4 10                  ADD ESP,0x10
0065EAEA  EB 07                     JMP 0x0065eaf3
LAB_0065eaec:
0065EAEC  C7 45 F8 FF FF FF FF      MOV dword ptr [EBP + -0x8],0xffffffff
LAB_0065eaf3:
0065EAF3  39 7D FC                  CMP dword ptr [EBP + -0x4],EDI
0065EAF6  74 09                     JZ 0x0065eb01
0065EAF8  8D 55 FC                  LEA EDX,[EBP + -0x4]
0065EAFB  52                        PUSH EDX
0065EAFC  E8 5F C5 04 00            CALL 0x006ab060
LAB_0065eb01:
0065EB01  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0065EB04  5F                        POP EDI
0065EB05  5E                        POP ESI
0065EB06  5B                        POP EBX
0065EB07  8B E5                     MOV ESP,EBP
0065EB09  5D                        POP EBP
0065EB0A  C2 1C 00                  RET 0x1c
