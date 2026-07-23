CGenerate::sub_006A0E30:
006A0E30  55                        PUSH EBP
006A0E31  8B EC                     MOV EBP,ESP
006A0E33  83 EC 08                  SUB ESP,0x8
006A0E36  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
006A0E39  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006A0E3C  53                        PUSH EBX
006A0E3D  56                        PUSH ESI
006A0E3E  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
006A0E41  57                        PUSH EDI
006A0E42  0F AF C2                  IMUL EAX,EDX
006A0E45  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006A0E48  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006A0E4B  03 C7                     ADD EAX,EDI
006A0E4D  BE FF 00 00 00            MOV ESI,0xff
006A0E52  0F AF 01                  IMUL EAX,dword ptr [ECX]
006A0E55  03 C3                     ADD EAX,EBX
006A0E57  85 D2                     TEST EDX,EDX
006A0E59  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006A0E5C  8D 44 41 08               LEA EAX,[ECX + EAX*0x2 + 0x8]
006A0E60  8B D8                     MOV EBX,EAX
006A0E62  8B 03                     MOV EAX,dword ptr [EBX]
006A0E64  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006A0E67  66 8B 5B 04               MOV BX,word ptr [EBX + 0x4]
006A0E6B  66 89 5D FC               MOV word ptr [EBP + -0x4],BX
006A0E6F  7C 40                     JL 0x006a0eb1
006A0E71  83 FA 05                  CMP EDX,0x5
006A0E74  7F 3B                     JG 0x006a0eb1
006A0E76  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
006A0E79  83 FB FF                  CMP EBX,-0x1
006A0E7C  75 1D                     JNZ 0x006a0e9b
006A0E7E  8B 5D FA                  MOV EBX,dword ptr [EBP + -0x6]
006A0E81  F6 C7 10                  TEST BH,0x10
006A0E84  74 05                     JZ 0x006a0e8b
006A0E86  BE 01 00 00 00            MOV ESI,0x1
LAB_006a0e8b:
006A0E8B  66 83 7D FA 00            CMP word ptr [EBP + -0x6],0x0
006A0E90  75 0B                     JNZ 0x006a0e9d
006A0E92  F6 C4 10                  TEST AH,0x10
006A0E95  74 06                     JZ 0x006a0e9d
006A0E97  33 F6                     XOR ESI,ESI
006A0E99  EB 02                     JMP 0x006a0e9d
LAB_006a0e9b:
006A0E9B  8B F3                     MOV ESI,EBX
LAB_006a0e9d:
006A0E9D  6A 00                     PUSH 0x0
006A0E9F  6A 00                     PUSH 0x0
006A0EA1  56                        PUSH ESI
006A0EA2  52                        PUSH EDX
006A0EA3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006A0EA6  57                        PUSH EDI
006A0EA7  52                        PUSH EDX
006A0EA8  51                        PUSH ECX
006A0EA9  E8 5C 33 D6 FF            CALL 0x0040420a
006A0EAE  83 C4 1C                  ADD ESP,0x1c
LAB_006a0eb1:
006A0EB1  5F                        POP EDI
006A0EB2  5E                        POP ESI
006A0EB3  5B                        POP EBX
006A0EB4  8B E5                     MOV ESP,EBP
006A0EB6  5D                        POP EBP
006A0EB7  C2 10 00                  RET 0x10
