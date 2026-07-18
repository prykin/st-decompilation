FUN_006d0cf0:
006D0CF0  55                        PUSH EBP
006D0CF1  8B EC                     MOV EBP,ESP
006D0CF3  6A FF                     PUSH -0x1
006D0CF5  68 A0 DA 79 00            PUSH 0x79daa0
006D0CFA  68 64 D9 72 00            PUSH 0x72d964
006D0CFF  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
006D0D05  50                        PUSH EAX
006D0D06  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
006D0D0D  83 EC 38                  SUB ESP,0x38
006D0D10  53                        PUSH EBX
006D0D11  56                        PUSH ESI
006D0D12  57                        PUSH EDI
006D0D13  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006D0D16  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006D0D19  8B 86 74 04 00 00         MOV EAX,dword ptr [ESI + 0x474]
006D0D1F  85 C0                     TEST EAX,EAX
006D0D21  0F 84 0B 02 00 00         JZ 0x006d0f32
006D0D27  83 7E 20 10               CMP dword ptr [ESI + 0x20],0x10
006D0D2B  0F 8F 01 02 00 00         JG 0x006d0f32
006D0D31  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006D0D34  66 83 78 0E 08            CMP word ptr [EAX + 0xe],0x8
006D0D39  0F 85 F3 01 00 00         JNZ 0x006d0f32
006D0D3F  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006D0D42  85 C9                     TEST ECX,ECX
006D0D44  0F 8E D3 01 00 00         JLE 0x006d0f1d
006D0D4A  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006D0D4D  85 C9                     TEST ECX,ECX
006D0D4F  0F 8E C8 01 00 00         JLE 0x006d0f1d
006D0D55  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006D0D58  85 C9                     TEST ECX,ECX
006D0D5A  75 09                     JNZ 0x006d0d65
006D0D5C  50                        PUSH EAX
006D0D5D  E8 3E 42 FE FF            CALL 0x006b4fa0
006D0D62  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
LAB_006d0d65:
006D0D65  C7 45 E0 00 00 00 00      MOV dword ptr [EBP + -0x20],0x0
006D0D6C  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006D0D6F  03 7E 10                  ADD EDI,dword ptr [ESI + 0x10]
006D0D72  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006D0D75  03 5E 14                  ADD EBX,dword ptr [ESI + 0x14]
006D0D78  89 7D D0                  MOV dword ptr [EBP + -0x30],EDI
006D0D7B  89 5D D4                  MOV dword ptr [EBP + -0x2c],EBX
006D0D7E  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006D0D81  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
006D0D84  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006D0D87  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
006D0D8A  8D 96 84 04 00 00         LEA EDX,[ESI + 0x484]
006D0D90  52                        PUSH EDX
006D0D91  8D 45 D0                  LEA EAX,[EBP + -0x30]
006D0D94  50                        PUSH EAX
006D0D95  8D 4D D0                  LEA ECX,[EBP + -0x30]
006D0D98  51                        PUSH ECX
006D0D99  E8 12 F1 FF FF            CALL 0x006cfeb0
006D0D9E  83 C4 0C                  ADD ESP,0xc
006D0DA1  85 C0                     TEST EAX,EAX
006D0DA3  0F 84 5E 01 00 00         JZ 0x006d0f07
006D0DA9  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
006D0DAC  99                        CDQ
006D0DAD  83 E2 07                  AND EDX,0x7
006D0DB0  03 C2                     ADD EAX,EDX
006D0DB2  8B C8                     MOV ECX,EAX
006D0DB4  C1 F9 03                  SAR ECX,0x3
006D0DB7  8B 86 78 04 00 00         MOV EAX,dword ptr [ESI + 0x478]
006D0DBD  99                        CDQ
006D0DBE  F7 F9                     IDIV ECX
006D0DC0  89 46 50                  MOV dword ptr [ESI + 0x50],EAX
006D0DC3  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
006D0DC6  2B D7                     SUB EDX,EDI
006D0DC8  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006D0DCB  03 C2                     ADD EAX,EDX
006D0DCD  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
006D0DD0  2B D3                     SUB EDX,EBX
006D0DD2  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006D0DD5  03 CA                     ADD ECX,EDX
006D0DD7  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006D0DDA  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
006D0DDD  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006D0DE0  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
006D0DE3  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
006D0DE6  89 4D C4                  MOV dword ptr [EBP + -0x3c],ECX
006D0DE9  8D 55 C8                  LEA EDX,[EBP + -0x38]
006D0DEC  52                        PUSH EDX
006D0DED  8D 45 B8                  LEA EAX,[EBP + -0x48]
006D0DF0  50                        PUSH EAX
006D0DF1  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
006D0DF4  57                        PUSH EDI
006D0DF5  8D 4D E4                  LEA ECX,[EBP + -0x1c]
006D0DF8  51                        PUSH ECX
006D0DF9  8D 55 D0                  LEA EDX,[EBP + -0x30]
006D0DFC  52                        PUSH EDX
006D0DFD  8D 46 4C                  LEA EAX,[ESI + 0x4c]
006D0E00  50                        PUSH EAX
006D0E01  E8 7A F8 FF FF            CALL 0x006d0680
006D0E06  85 C0                     TEST EAX,EAX
006D0E08  0F 84 F9 00 00 00         JZ 0x006d0f07
006D0E0E  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
006D0E11  85 C0                     TEST EAX,EAX
006D0E13  7D 19                     JGE 0x006d0e2e
006D0E15  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
006D0E18  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
006D0E1B  8D 4C 0A FF               LEA ECX,[EDX + ECX*0x1 + -0x1]
006D0E1F  0F AF C8                  IMUL ECX,EAX
006D0E22  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
006D0E25  2B D1                     SUB EDX,ECX
006D0E27  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006D0E2A  03 C2                     ADD EAX,EDX
006D0E2C  EB 14                     JMP 0x006d0e42
LAB_006d0e2e:
006D0E2E  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
006D0E31  2B 4D C4                  SUB ECX,dword ptr [EBP + -0x3c]
006D0E34  2B 4D BC                  SUB ECX,dword ptr [EBP + -0x44]
006D0E37  0F AF C8                  IMUL ECX,EAX
006D0E3A  03 4D B8                  ADD ECX,dword ptr [EBP + -0x48]
006D0E3D  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006D0E40  03 C1                     ADD EAX,ECX
LAB_006d0e42:
006D0E42  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
006D0E45  8B 4E 20                  MOV ECX,dword ptr [ESI + 0x20]
006D0E48  8B 7D DC                  MOV EDI,dword ptr [EBP + -0x24]
006D0E4B  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
006D0E4E  8D 5C 17 FF               LEA EBX,[EDI + EDX*0x1 + -0x1]
006D0E52  0F AF 5D E4               IMUL EBX,dword ptr [EBP + -0x1c]
006D0E56  8B C1                     MOV EAX,ECX
006D0E58  0F AF 45 D0               IMUL EAX,dword ptr [EBP + -0x30]
006D0E5C  99                        CDQ
006D0E5D  83 E2 07                  AND EDX,0x7
006D0E60  03 C2                     ADD EAX,EDX
006D0E62  C1 F8 03                  SAR EAX,0x3
006D0E65  2B C3                     SUB EAX,EBX
006D0E67  03 86 74 04 00 00         ADD EAX,dword ptr [ESI + 0x474]
006D0E6D  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006D0E74  83 F9 08                  CMP ECX,0x8
006D0E77  75 38                     JNZ 0x006d0eb1
006D0E79  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
006D0E7C  51                        PUSH ECX
006D0E7D  57                        PUSH EDI
006D0E7E  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006D0E81  52                        PUSH EDX
006D0E82  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
006D0E85  51                        PUSH ECX
006D0E86  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006D0E89  52                        PUSH EDX
006D0E8A  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
006D0E8D  51                        PUSH ECX
006D0E8E  50                        PUSH EAX
006D0E8F  E8 4C DD FF FF            CALL 0x006cebe0
006D0E94  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006D0E9B  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006D0E9E  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006D0EA1  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006D0EA8  5F                        POP EDI
006D0EA9  5E                        POP ESI
006D0EAA  5B                        POP EBX
006D0EAB  8B E5                     MOV ESP,EBP
006D0EAD  5D                        POP EBP
006D0EAE  C2 28 00                  RET 0x28
LAB_006d0eb1:
006D0EB1  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006D0EB4  52                        PUSH EDX
006D0EB5  8B 8E C0 04 00 00         MOV ECX,dword ptr [ESI + 0x4c0]
006D0EBB  51                        PUSH ECX
006D0EBC  57                        PUSH EDI
006D0EBD  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006D0EC0  52                        PUSH EDX
006D0EC1  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
006D0EC4  51                        PUSH ECX
006D0EC5  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006D0EC8  52                        PUSH EDX
006D0EC9  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
006D0ECC  51                        PUSH ECX
006D0ECD  50                        PUSH EAX
006D0ECE  E8 ED 04 00 00            CALL 0x006d13c0
006D0ED3  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006D0EDA  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006D0EDD  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006D0EE0  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006D0EE7  5F                        POP EDI
006D0EE8  5E                        POP ESI
006D0EE9  5B                        POP EBX
006D0EEA  8B E5                     MOV ESP,EBP
006D0EEC  5D                        POP EBP
006D0EED  C2 28 00                  RET 0x28
LAB_006d0f07:
006D0F07  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006D0F0A  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006D0F0D  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006D0F14  5F                        POP EDI
006D0F15  5E                        POP ESI
006D0F16  5B                        POP EBX
006D0F17  8B E5                     MOV ESP,EBP
006D0F19  5D                        POP EBP
006D0F1A  C2 28 00                  RET 0x28
LAB_006d0f1d:
006D0F1D  33 C0                     XOR EAX,EAX
006D0F1F  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006D0F22  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006D0F29  5F                        POP EDI
006D0F2A  5E                        POP ESI
006D0F2B  5B                        POP EBX
006D0F2C  8B E5                     MOV ESP,EBP
006D0F2E  5D                        POP EBP
006D0F2F  C2 28 00                  RET 0x28
LAB_006d0f32:
006D0F32  B8 D0 FF FF FF            MOV EAX,0xffffffd0
006D0F37  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006D0F3A  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006D0F41  5F                        POP EDI
006D0F42  5E                        POP ESI
006D0F43  5B                        POP EBX
006D0F44  8B E5                     MOV ESP,EBP
006D0F46  5D                        POP EBP
006D0F47  C2 28 00                  RET 0x28
