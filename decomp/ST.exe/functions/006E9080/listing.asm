FUN_006e9080:
006E9080  55                        PUSH EBP
006E9081  8B EC                     MOV EBP,ESP
006E9083  51                        PUSH ECX
006E9084  53                        PUSH EBX
006E9085  56                        PUSH ESI
006E9086  8B F1                     MOV ESI,ECX
006E9088  57                        PUSH EDI
006E9089  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006E908C  33 DB                     XOR EBX,EBX
006E908E  8B 86 10 03 00 00         MOV EAX,dword ptr [ESI + 0x310]
006E9094  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006E9097  3B F8                     CMP EDI,EAX
006E9099  0F 83 D9 00 00 00         JNC 0x006e9178
006E909F  8B 8E 1C 03 00 00         MOV ECX,dword ptr [ESI + 0x31c]
006E90A5  8D 04 7F                  LEA EAX,[EDI + EDI*0x2]
006E90A8  C1 E0 03                  SHL EAX,0x3
006E90AB  2B C7                     SUB EAX,EDI
006E90AD  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006E90B0  8D 04 81                  LEA EAX,[ECX + EAX*0x4]
006E90B3  8B 08                     MOV ECX,dword ptr [EAX]
006E90B5  F6 C5 80                  TEST CH,0x80
006E90B8  0F 84 BA 00 00 00         JZ 0x006e9178
006E90BE  8B 90 A0 00 00 00         MOV EDX,dword ptr [EAX + 0xa0]
006E90C4  85 D2                     TEST EDX,EDX
006E90C6  0F 84 8F 00 00 00         JZ 0x006e915b
006E90CC  8B 98 94 00 00 00         MOV EBX,dword ptr [EAX + 0x94]
006E90D2  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006E90D5  3B CB                     CMP ECX,EBX
006E90D7  73 7F                     JNC 0x006e9158
006E90D9  8B 4C CA 04               MOV ECX,dword ptr [EDX + ECX*0x8 + 0x4]
006E90DD  8B 09                     MOV ECX,dword ptr [ECX]
006E90DF  85 C9                     TEST ECX,ECX
006E90E1  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
006E90E4  74 72                     JZ 0x006e9158
006E90E6  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006E90E9  85 C9                     TEST ECX,ECX
006E90EB  7C 04                     JL 0x006e90f1
006E90ED  3B CB                     CMP ECX,EBX
006E90EF  73 67                     JNC 0x006e9158
LAB_006e90f1:
006E90F1  F7 00 00 00 04 00         TEST dword ptr [EAX],0x40000
006E90F7  74 08                     JZ 0x006e9101
006E90F9  8B 58 2C                  MOV EBX,dword ptr [EAX + 0x2c]
006E90FC  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
006E90FF  EB 07                     JMP 0x006e9108
LAB_006e9101:
006E9101  C7 45 08 00 00 00 00      MOV dword ptr [EBP + 0x8],0x0
LAB_006e9108:
006E9108  85 C9                     TEST ECX,ECX
006E910A  7C 08                     JL 0x006e9114
006E910C  8B 54 CA 04               MOV EDX,dword ptr [EDX + ECX*0x8 + 0x4]
006E9110  8B 0A                     MOV ECX,dword ptr [EDX]
006E9112  EB 02                     JMP 0x006e9116
LAB_006e9114:
006E9114  33 C9                     XOR ECX,ECX
LAB_006e9116:
006E9116  DB 45 08                  FILD dword ptr [EBP + 0x8]
006E9119  8B 50 78                  MOV EDX,dword ptr [EAX + 0x78]
006E911C  51                        PUSH ECX
006E911D  D9 1C 24                  FSTP float ptr [ESP]
006E9120  51                        PUSH ECX
006E9121  8B 48 7C                  MOV ECX,dword ptr [EAX + 0x7c]
006E9124  51                        PUSH ECX
006E9125  8B 48 74                  MOV ECX,dword ptr [EAX + 0x74]
006E9128  52                        PUSH EDX
006E9129  8B 90 88 00 00 00         MOV EDX,dword ptr [EAX + 0x88]
006E912F  8B 80 84 00 00 00         MOV EAX,dword ptr [EAX + 0x84]
006E9135  51                        PUSH ECX
006E9136  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006E9139  52                        PUSH EDX
006E913A  50                        PUSH EAX
006E913B  51                        PUSH ECX
006E913C  8B CE                     MOV ECX,ESI
006E913E  E8 BD FE FF FF            CALL 0x006e9000
006E9143  57                        PUSH EDI
006E9144  8B CE                     MOV ECX,ESI
006E9146  8B D8                     MOV EBX,EAX
006E9148  E8 53 FA FF FF            CALL 0x006e8ba0
006E914D  5F                        POP EDI
006E914E  8B C3                     MOV EAX,EBX
006E9150  5E                        POP ESI
006E9151  5B                        POP EBX
006E9152  8B E5                     MOV ESP,EBP
006E9154  5D                        POP EBP
006E9155  C2 0C 00                  RET 0xc
LAB_006e9158:
006E9158  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_006e915b:
006E915B  68 C4 EC 7E 00            PUSH 0x7eecc4
006E9160  E8 3B 00 00 00            CALL 0x006e91a0
006E9165  57                        PUSH EDI
006E9166  8B CE                     MOV ECX,ESI
006E9168  E8 33 FA FF FF            CALL 0x006e8ba0
006E916D  5F                        POP EDI
006E916E  8B C3                     MOV EAX,EBX
006E9170  5E                        POP ESI
006E9171  5B                        POP EBX
006E9172  8B E5                     MOV ESP,EBP
006E9174  5D                        POP EBP
006E9175  C2 0C 00                  RET 0xc
LAB_006e9178:
006E9178  83 FF FF                  CMP EDI,-0x1
006E917B  74 0A                     JZ 0x006e9187
006E917D  68 C4 EC 7E 00            PUSH 0x7eecc4
006E9182  E8 C9 FA FF FF            CALL 0x006e8c50
LAB_006e9187:
006E9187  5F                        POP EDI
006E9188  8B C3                     MOV EAX,EBX
006E918A  5E                        POP ESI
006E918B  5B                        POP EBX
006E918C  8B E5                     MOV ESP,EBP
006E918E  5D                        POP EBP
006E918F  C2 0C 00                  RET 0xc
