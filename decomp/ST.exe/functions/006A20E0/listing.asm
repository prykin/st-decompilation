FUN_006a20e0:
006A20E0  55                        PUSH EBP
006A20E1  8B EC                     MOV EBP,ESP
006A20E3  83 EC 08                  SUB ESP,0x8
006A20E6  53                        PUSH EBX
006A20E7  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006A20EA  56                        PUSH ESI
006A20EB  57                        PUSH EDI
006A20EC  85 DB                     TEST EBX,EBX
006A20EE  7C 68                     JL 0x006a2158
006A20F0  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006A20F3  8B 39                     MOV EDI,dword ptr [ECX]
006A20F5  3B DF                     CMP EBX,EDI
006A20F7  7D 5F                     JGE 0x006a2158
006A20F9  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006A20FC  85 D2                     TEST EDX,EDX
006A20FE  7C 58                     JL 0x006a2158
006A2100  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
006A2103  3B D0                     CMP EDX,EAX
006A2105  7D 51                     JGE 0x006a2158
006A2107  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
006A210A  85 F6                     TEST ESI,ESI
006A210C  7C 4A                     JL 0x006a2158
006A210E  83 FE 06                  CMP ESI,0x6
006A2111  7D 45                     JGE 0x006a2158
006A2113  0F AF C6                  IMUL EAX,ESI
006A2116  03 C2                     ADD EAX,EDX
006A2118  0F AF C7                  IMUL EAX,EDI
006A211B  03 C3                     ADD EAX,EBX
006A211D  8D 54 40 06               LEA EDX,[EAX + EAX*0x2 + 0x6]
006A2121  66 83 3C 51 00            CMP word ptr [ECX + EDX*0x2],0x0
006A2126  74 30                     JZ 0x006a2158
006A2128  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006A212B  8D 4C 41 08               LEA ECX,[ECX + EAX*0x2 + 0x8]
006A212F  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006A2132  3D FF 00 00 00            CMP EAX,0xff
006A2137  8B 11                     MOV EDX,dword ptr [ECX]
006A2139  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006A213C  66 8B 49 04               MOV CX,word ptr [ECX + 0x4]
006A2140  66 89 4D FC               MOV word ptr [EBP + -0x4],CX
006A2144  74 2F                     JZ 0x006a2175
006A2146  85 C0                     TEST EAX,EAX
006A2148  75 17                     JNZ 0x006a2161
006A214A  66 8B C2                  MOV AX,DX
006A214D  66 85 C0                  TEST AX,AX
006A2150  74 06                     JZ 0x006a2158
006A2152  66 3D 01 00               CMP AX,0x1
LAB_006a2156:
006A2156  75 3F                     JNZ 0x006a2197
LAB_006a2158:
006A2158  5F                        POP EDI
006A2159  5E                        POP ESI
006A215A  33 C0                     XOR EAX,EAX
006A215C  5B                        POP EBX
006A215D  8B E5                     MOV ESP,EBP
006A215F  5D                        POP EBP
006A2160  C3                        RET
LAB_006a2161:
006A2161  83 F8 01                  CMP EAX,0x1
006A2164  75 31                     JNZ 0x006a2197
006A2166  66 83 7D FA 00            CMP word ptr [EBP + -0x6],0x0
006A216B  75 2A                     JNZ 0x006a2197
006A216D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006A2170  F6 C4 40                  TEST AH,0x40
006A2173  EB E1                     JMP 0x006a2156
LAB_006a2175:
006A2175  66 8B 45 F8               MOV AX,word ptr [EBP + -0x8]
006A2179  66 85 C0                  TEST AX,AX
006A217C  74 06                     JZ 0x006a2184
006A217E  66 3D 01 00               CMP AX,0x1
006A2182  75 13                     JNZ 0x006a2197
LAB_006a2184:
006A2184  66 85 C9                  TEST CX,CX
006A2187  74 07                     JZ 0x006a2190
006A2189  66 81 F9 00 11            CMP CX,0x1100
006A218E  75 07                     JNZ 0x006a2197
LAB_006a2190:
006A2190  66 83 7D FA 00            CMP word ptr [EBP + -0x6],0x0
006A2195  74 C1                     JZ 0x006a2158
LAB_006a2197:
006A2197  5F                        POP EDI
006A2198  5E                        POP ESI
006A2199  B8 01 00 00 00            MOV EAX,0x1
006A219E  5B                        POP EBX
006A219F  8B E5                     MOV ESP,EBP
006A21A1  5D                        POP EBP
006A21A2  C3                        RET
