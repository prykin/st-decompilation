FUN_00698de0:
00698DE0  55                        PUSH EBP
00698DE1  8B EC                     MOV EBP,ESP
00698DE3  51                        PUSH ECX
00698DE4  53                        PUSH EBX
00698DE5  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00698DE8  56                        PUSH ESI
00698DE9  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00698DEC  57                        PUSH EDI
00698DED  68 93 4A 40 00            PUSH 0x404a93
00698DF2  6A 0A                     PUSH 0xa
00698DF4  56                        PUSH ESI
00698DF5  53                        PUSH EBX
00698DF6  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00698DFD  E8 0E 7A 09 00            CALL 0x00730810
00698E02  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
00698E05  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
00698E08  B9 64 00 00 00            MOV ECX,0x64
00698E0D  83 C4 10                  ADD ESP,0x10
00698E10  8B 7C 43 FC               MOV EDI,dword ptr [EBX + EAX*0x2 + -0x4]
00698E14  2B CA                     SUB ECX,EDX
00698E16  0F AF CF                  IMUL ECX,EDI
00698E19  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00698E1E  89 75 0C                  MOV dword ptr [EBP + 0xc],ESI
00698E21  F7 E9                     IMUL ECX
00698E23  C1 FA 05                  SAR EDX,0x5
00698E26  8B CA                     MOV ECX,EDX
00698E28  33 C0                     XOR EAX,EAX
00698E2A  C1 E9 1F                  SHR ECX,0x1f
00698E2D  03 D1                     ADD EDX,ECX
00698E2F  85 F6                     TEST ESI,ESI
00698E31  89 55 20                  MOV dword ptr [EBP + 0x20],EDX
00698E34  7E 23                     JLE 0x00698e59
00698E36  8D 4B 06                  LEA ECX,[EBX + 0x6]
LAB_00698e39:
00698E39  8B 11                     MOV EDX,dword ptr [ECX]
00698E3B  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
00698E3E  3B D3                     CMP EDX,EBX
00698E40  77 11                     JA 0x00698e53
00698E42  8B DF                     MOV EBX,EDI
00698E44  83 C1 0A                  ADD ECX,0xa
00698E47  2B DA                     SUB EBX,EDX
00698E49  40                        INC EAX
00698E4A  89 59 F6                  MOV dword ptr [ECX + -0xa],EBX
00698E4D  3B C6                     CMP EAX,ESI
00698E4F  7C E8                     JL 0x00698e39
00698E51  EB 03                     JMP 0x00698e56
LAB_00698e53:
00698E53  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
LAB_00698e56:
00698E56  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
LAB_00698e59:
00698E59  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00698E5C  85 C0                     TEST EAX,EAX
00698E5E  0F 8E B1 00 00 00         JLE 0x00698f15
00698E64  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00698E67  89 45 20                  MOV dword ptr [EBP + 0x20],EAX
00698E6A  8D 72 04                  LEA ESI,[EDX + 0x4]
LAB_00698e6d:
00698E6D  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00698E70  6A 0A                     PUSH 0xa
00698E72  6A 06                     PUSH 0x6
00698E74  6A 0A                     PUSH 0xa
00698E76  50                        PUSH EAX
00698E77  53                        PUSH EBX
00698E78  E8 58 84 D6 FF            CALL 0x004012d5
00698E7D  83 C4 14                  ADD ESP,0x14
00698E80  85 C0                     TEST EAX,EAX
00698E82  0F 8C 80 00 00 00         JL 0x00698f08
00698E88  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00698E8B  83 C6 0A                  ADD ESI,0xa
00698E8E  89 75 10                  MOV dword ptr [EBP + 0x10],ESI
00698E91  66 8B 14 4B               MOV DX,word ptr [EBX + ECX*0x2]
00698E95  8D 3C 4B                  LEA EDI,[EBX + ECX*0x2]
00698E98  66 89 56 F2               MOV word ptr [ESI + -0xe],DX
00698E9C  66 8B 47 02               MOV AX,word ptr [EDI + 0x2]
00698EA0  66 89 46 F4               MOV word ptr [ESI + -0xc],AX
00698EA4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00698EA7  66 8B 4F 04               MOV CX,word ptr [EDI + 0x4]
00698EAB  40                        INC EAX
00698EAC  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00698EAF  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00698EB2  66 89 4E F6               MOV word ptr [ESI + -0xa],CX
00698EB6  85 C0                     TEST EAX,EAX
00698EB8  7C 4E                     JL 0x00698f08
00698EBA  40                        INC EAX
00698EBB  8D 73 06                  LEA ESI,[EBX + 0x6]
00698EBE  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_00698ec1:
00698EC1  0F BF 56 FC               MOVSX EDX,word ptr [ESI + -0x4]
00698EC5  0F BF 46 FA               MOVSX EAX,word ptr [ESI + -0x6]
00698EC9  0F BF 4F 02               MOVSX ECX,word ptr [EDI + 0x2]
00698ECD  52                        PUSH EDX
00698ECE  50                        PUSH EAX
00698ECF  0F BF 17                  MOVSX EDX,word ptr [EDI]
00698ED2  51                        PUSH ECX
00698ED3  52                        PUSH EDX
00698ED4  E8 B7 40 01 00            CALL 0x006acf90
00698ED9  8B C8                     MOV ECX,EAX
00698EDB  83 F9 06                  CMP ECX,0x6
00698EDE  7F 19                     JG 0x00698ef9
00698EE0  83 F9 02                  CMP ECX,0x2
00698EE3  7F 08                     JG 0x00698eed
00698EE5  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
00698EEB  EB 0C                     JMP 0x00698ef9
LAB_00698eed:
00698EED  0F AF 4D 18               IMUL ECX,dword ptr [EBP + 0x18]
00698EF1  8B 06                     MOV EAX,dword ptr [ESI]
00698EF3  33 D2                     XOR EDX,EDX
00698EF5  F7 F1                     DIV ECX
00698EF7  89 06                     MOV dword ptr [ESI],EAX
LAB_00698ef9:
00698EF9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00698EFC  83 C6 0A                  ADD ESI,0xa
00698EFF  48                        DEC EAX
00698F00  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00698F03  75 BC                     JNZ 0x00698ec1
00698F05  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
LAB_00698f08:
00698F08  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
00698F0B  48                        DEC EAX
00698F0C  89 45 20                  MOV dword ptr [EBP + 0x20],EAX
00698F0F  0F 85 58 FF FF FF         JNZ 0x00698e6d
LAB_00698f15:
00698F15  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00698F18  5F                        POP EDI
00698F19  5E                        POP ESI
00698F1A  5B                        POP EBX
00698F1B  8B E5                     MOV ESP,EBP
00698F1D  5D                        POP EBP
00698F1E  C2 1C 00                  RET 0x1c
