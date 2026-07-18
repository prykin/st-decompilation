FUN_006e8ea0:
006E8EA0  55                        PUSH EBP
006E8EA1  8B EC                     MOV EBP,ESP
006E8EA3  83 EC 4C                  SUB ESP,0x4c
006E8EA6  53                        PUSH EBX
006E8EA7  56                        PUSH ESI
006E8EA8  57                        PUSH EDI
006E8EA9  8B F9                     MOV EDI,ECX
006E8EAB  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006E8EAE  8B 47 30                  MOV EAX,dword ptr [EDI + 0x30]
006E8EB1  8B 57 38                  MOV EDX,dword ptr [EDI + 0x38]
006E8EB4  8B 4F 34                  MOV ECX,dword ptr [EDI + 0x34]
006E8EB7  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
006E8EBA  2B D0                     SUB EDX,EAX
006E8EBC  8B 47 3C                  MOV EAX,dword ptr [EDI + 0x3c]
006E8EBF  2B C1                     SUB EAX,ECX
006E8EC1  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
006E8EC4  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
006E8EC7  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
006E8ECA  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
006E8ECD  83 C9 FF                  OR ECX,0xffffffff
006E8ED0  83 CA FF                  OR EDX,0xffffffff
006E8ED3  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
006E8ED6  85 C0                     TEST EAX,EAX
006E8ED8  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
006E8EDB  74 0C                     JZ 0x006e8ee9
006E8EDD  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
006E8EE0  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
006E8EE3  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
006E8EE6  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
LAB_006e8ee9:
006E8EE9  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
006E8EEC  85 C0                     TEST EAX,EAX
006E8EEE  74 14                     JZ 0x006e8f04
006E8EF0  8B 70 04                  MOV ESI,dword ptr [EAX + 0x4]
006E8EF3  3B CE                     CMP ECX,ESI
006E8EF5  7D 03                     JGE 0x006e8efa
006E8EF7  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
LAB_006e8efa:
006E8EFA  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
006E8EFD  3B D0                     CMP EDX,EAX
006E8EFF  7D 03                     JGE 0x006e8f04
006E8F01  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_006e8f04:
006E8F04  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
006E8F07  8B 53 0C                  MOV EDX,dword ptr [EBX + 0xc]
006E8F0A  8B 43 10                  MOV EAX,dword ptr [EBX + 0x10]
006E8F0D  6A 00                     PUSH 0x0
006E8F0F  6A 00                     PUSH 0x0
006E8F11  6A 00                     PUSH 0x0
006E8F13  6A 00                     PUSH 0x0
006E8F15  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006E8F18  6A 00                     PUSH 0x0
006E8F1A  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006E8F1D  6A 00                     PUSH 0x0
006E8F1F  8D 4D F4                  LEA ECX,[EBP + -0xc]
006E8F22  6A 00                     PUSH 0x0
006E8F24  8D 55 C4                  LEA EDX,[EBP + -0x3c]
006E8F27  51                        PUSH ECX
006E8F28  52                        PUSH EDX
006E8F29  8B CF                     MOV ECX,EDI
006E8F2B  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006E8F2E  E8 9D 96 FF FF            CALL 0x006e25d0
006E8F33  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
006E8F36  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
006E8F39  8B B7 F0 02 00 00         MOV ESI,dword ptr [EDI + 0x2f0]
006E8F3F  C1 F9 10                  SAR ECX,0x10
006E8F42  C1 F8 10                  SAR EAX,0x10
006E8F45  83 FE 64                  CMP ESI,0x64
006E8F48  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006E8F4B  75 1C                     JNZ 0x006e8f69
006E8F4D  39 B7 F4 02 00 00         CMP dword ptr [EDI + 0x2f4],ESI
006E8F53  75 14                     JNZ 0x006e8f69
006E8F55  0F BF 53 1C               MOVSX EDX,word ptr [EBX + 0x1c]
006E8F59  2B CA                     SUB ECX,EDX
006E8F5B  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
006E8F5E  0F BF 4B 1E               MOVSX ECX,word ptr [EBX + 0x1e]
006E8F62  2B C1                     SUB EAX,ECX
006E8F64  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006E8F67  EB 73                     JMP 0x006e8fdc
LAB_006e8f69:
006E8F69  0F BF 53 1C               MOVSX EDX,word ptr [EBX + 0x1c]
006E8F6D  0F AF D6                  IMUL EDX,ESI
006E8F70  0F AF 75 EC               IMUL ESI,dword ptr [EBP + -0x14]
006E8F74  B8 E1 7A 14 AE            MOV EAX,0xae147ae1
006E8F79  F7 EA                     IMUL EDX
006E8F7B  C1 FA 05                  SAR EDX,0x5
006E8F7E  8B C2                     MOV EAX,EDX
006E8F80  C1 E8 1F                  SHR EAX,0x1f
006E8F83  03 D0                     ADD EDX,EAX
006E8F85  B8 E1 7A 14 AE            MOV EAX,0xae147ae1
006E8F8A  03 CA                     ADD ECX,EDX
006E8F8C  0F BF 53 1E               MOVSX EDX,word ptr [EBX + 0x1e]
006E8F90  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
006E8F93  8B 8F F4 02 00 00         MOV ECX,dword ptr [EDI + 0x2f4]
006E8F99  0F AF D1                  IMUL EDX,ECX
006E8F9C  0F AF 4D F0               IMUL ECX,dword ptr [EBP + -0x10]
006E8FA0  F7 EA                     IMUL EDX
006E8FA2  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
006E8FA5  C1 FA 05                  SAR EDX,0x5
006E8FA8  8B C2                     MOV EAX,EDX
006E8FAA  C1 E8 1F                  SHR EAX,0x1f
006E8FAD  03 D0                     ADD EDX,EAX
006E8FAF  B8 1F 85 EB 51            MOV EAX,0x51eb851f
006E8FB4  03 DA                     ADD EBX,EDX
006E8FB6  F7 EE                     IMUL ESI
006E8FB8  C1 FA 05                  SAR EDX,0x5
006E8FBB  8B C2                     MOV EAX,EDX
006E8FBD  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
006E8FC0  C1 E8 1F                  SHR EAX,0x1f
006E8FC3  03 D0                     ADD EDX,EAX
006E8FC5  B8 1F 85 EB 51            MOV EAX,0x51eb851f
006E8FCA  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
006E8FCD  F7 E9                     IMUL ECX
006E8FCF  C1 FA 05                  SAR EDX,0x5
006E8FD2  8B CA                     MOV ECX,EDX
006E8FD4  C1 E9 1F                  SHR ECX,0x1f
006E8FD7  03 D1                     ADD EDX,ECX
006E8FD9  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
LAB_006e8fdc:
006E8FDC  8D 55 D4                  LEA EDX,[EBP + -0x2c]
006E8FDF  8D 4D B4                  LEA ECX,[EBP + -0x4c]
006E8FE2  52                        PUSH EDX
006E8FE3  8D 55 E4                  LEA EDX,[EBP + -0x1c]
006E8FE6  E8 75 74 FC FF            CALL 0x006b0460
006E8FEB  5F                        POP EDI
006E8FEC  5E                        POP ESI
006E8FED  5B                        POP EBX
006E8FEE  8B E5                     MOV ESP,EBP
006E8FF0  5D                        POP EBP
006E8FF1  C2 04 00                  RET 0x4
