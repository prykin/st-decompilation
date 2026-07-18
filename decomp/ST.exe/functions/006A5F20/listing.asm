FUN_006a5f20:
006A5F20  55                        PUSH EBP
006A5F21  8B EC                     MOV EBP,ESP
006A5F23  83 EC 30                  SUB ESP,0x30
006A5F26  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006A5F29  53                        PUSH EBX
006A5F2A  56                        PUSH ESI
006A5F2B  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006A5F2E  8B C1                     MOV EAX,ECX
006A5F30  57                        PUSH EDI
006A5F31  2B C6                     SUB EAX,ESI
006A5F33  99                        CDQ
006A5F34  8B D8                     MOV EBX,EAX
006A5F36  33 DA                     XOR EBX,EDX
006A5F38  2B DA                     SUB EBX,EDX
006A5F3A  3B CE                     CMP ECX,ESI
006A5F3C  7E 09                     JLE 0x006a5f47
006A5F3E  C7 45 D8 02 00 00 00      MOV dword ptr [EBP + -0x28],0x2
006A5F45  EB 0A                     JMP 0x006a5f51
LAB_006a5f47:
006A5F47  33 C0                     XOR EAX,EAX
006A5F49  3B CE                     CMP ECX,ESI
006A5F4B  0F 94 C0                  SETZ AL
006A5F4E  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
LAB_006a5f51:
006A5F51  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006A5F54  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006A5F57  8B C6                     MOV EAX,ESI
006A5F59  C7 45 D0 00 00 00 00      MOV dword ptr [EBP + -0x30],0x0
006A5F60  2B C7                     SUB EAX,EDI
006A5F62  99                        CDQ
006A5F63  8B C8                     MOV ECX,EAX
006A5F65  33 CA                     XOR ECX,EDX
006A5F67  2B CA                     SUB ECX,EDX
006A5F69  3B F7                     CMP ESI,EDI
006A5F6B  7E 07                     JLE 0x006a5f74
006A5F6D  BE 02 00 00 00            MOV ESI,0x2
006A5F72  EB 09                     JMP 0x006a5f7d
LAB_006a5f74:
006A5F74  33 D2                     XOR EDX,EDX
006A5F76  3B F7                     CMP ESI,EDI
006A5F78  0F 94 C2                  SETZ DL
006A5F7B  8B F2                     MOV ESI,EDX
LAB_006a5f7d:
006A5F7D  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006A5F80  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006A5F83  2B C2                     SUB EAX,EDX
006A5F85  BF 01 00 00 00            MOV EDI,0x1
006A5F8A  99                        CDQ
006A5F8B  33 C2                     XOR EAX,EDX
006A5F8D  2B C2                     SUB EAX,EDX
006A5F8F  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A5F92  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006A5F95  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006A5F98  3B D0                     CMP EDX,EAX
006A5F9A  7E 09                     JLE 0x006a5fa5
006A5F9C  C7 45 F0 02 00 00 00      MOV dword ptr [EBP + -0x10],0x2
006A5FA3  EB 0B                     JMP 0x006a5fb0
LAB_006a5fa5:
006A5FA5  33 D2                     XOR EDX,EDX
006A5FA7  39 45 1C                  CMP dword ptr [EBP + 0x1c],EAX
006A5FAA  0F 94 C2                  SETZ DL
006A5FAD  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
LAB_006a5fb0:
006A5FB0  3B D9                     CMP EBX,ECX
006A5FB2  C7 45 E8 02 00 00 00      MOV dword ptr [EBP + -0x18],0x2
006A5FB9  7D 20                     JGE 0x006a5fdb
006A5FBB  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006A5FBE  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
006A5FC1  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006A5FC4  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006A5FC7  8B C6                     MOV EAX,ESI
006A5FC9  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006A5FCC  89 7D D0                  MOV dword ptr [EBP + -0x30],EDI
006A5FCF  8B D9                     MOV EBX,ECX
006A5FD1  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006A5FD4  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
006A5FD7  8B FA                     MOV EDI,EDX
006A5FD9  EB 03                     JMP 0x006a5fde
LAB_006a5fdb:
006A5FDB  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
LAB_006a5fde:
006A5FDE  3B 4D EC                  CMP ECX,dword ptr [EBP + -0x14]
006A5FE1  7D 20                     JGE 0x006a6003
006A5FE3  8B D7                     MOV EDX,EDI
006A5FE5  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
006A5FE8  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006A5FEB  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006A5FEE  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
006A5FF1  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006A5FF4  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006A5FF7  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
006A5FFA  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
006A5FFD  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006A6000  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
LAB_006a6003:
006A6003  3B D9                     CMP EBX,ECX
006A6005  7D 18                     JGE 0x006a601f
006A6007  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
006A600A  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006A600D  89 75 D8                  MOV dword ptr [EBP + -0x28],ESI
006A6010  89 7D D0                  MOV dword ptr [EBP + -0x30],EDI
006A6013  8B D9                     MOV EBX,ECX
006A6015  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006A6018  8B F0                     MOV ESI,EAX
006A601A  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006A601D  8B FA                     MOV EDI,EDX
LAB_006a601f:
006A601F  8D 14 09                  LEA EDX,[ECX + ECX*0x1]
006A6022  3B DA                     CMP EBX,EDX
006A6024  7E 11                     JLE 0x006a6037
006A6026  8B D3                     MOV EDX,EBX
006A6028  BE 01 00 00 00            MOV ESI,0x1
006A602D  2B D1                     SUB EDX,ECX
006A602F  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
006A6032  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
006A6035  EB 35                     JMP 0x006a606c
LAB_006a6037:
006A6037  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006A603A  03 D2                     ADD EDX,EDX
006A603C  3B CA                     CMP ECX,EDX
006A603E  7E 16                     JLE 0x006a6056
006A6040  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006A6043  8B C1                     MOV EAX,ECX
006A6045  2B C2                     SUB EAX,EDX
006A6047  C7 45 F0 01 00 00 00      MOV dword ptr [EBP + -0x10],0x1
006A604E  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006A6051  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006A6054  EB 16                     JMP 0x006a606c
LAB_006a6056:
006A6056  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006A6059  85 D2                     TEST EDX,EDX
006A605B  74 05                     JZ 0x006a6062
006A605D  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
006A6060  EB 0A                     JMP 0x006a606c
LAB_006a6062:
006A6062  85 C9                     TEST ECX,ECX
006A6064  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006A6067  75 03                     JNZ 0x006a606c
006A6069  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
LAB_006a606c:
006A606C  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
006A606F  3B D7                     CMP EDX,EDI
006A6071  7D 15                     JGE 0x006a6088
006A6073  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006A6076  89 75 D8                  MOV dword ptr [EBP + -0x28],ESI
006A6079  89 7D D0                  MOV dword ptr [EBP + -0x30],EDI
006A607C  8B D9                     MOV EBX,ECX
006A607E  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006A6081  8B F0                     MOV ESI,EAX
006A6083  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006A6086  8B FA                     MOV EDI,EDX
LAB_006a6088:
006A6088  3B 7D E8                  CMP EDI,dword ptr [EBP + -0x18]
006A608B  7D 20                     JGE 0x006a60ad
006A608D  8B D7                     MOV EDX,EDI
006A608F  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
006A6092  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006A6095  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006A6098  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
006A609B  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006A609E  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006A60A1  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
006A60A4  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
006A60A7  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006A60AA  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
LAB_006a60ad:
006A60AD  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
006A60B0  3B D7                     CMP EDX,EDI
006A60B2  7D 14                     JGE 0x006a60c8
006A60B4  89 75 D8                  MOV dword ptr [EBP + -0x28],ESI
006A60B7  8B F0                     MOV ESI,EAX
006A60B9  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006A60BC  89 7D D0                  MOV dword ptr [EBP + -0x30],EDI
006A60BF  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
006A60C2  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
006A60C5  89 5D E0                  MOV dword ptr [EBP + -0x20],EBX
LAB_006a60c8:
006A60C8  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006A60CB  85 C9                     TEST ECX,ECX
006A60CD  74 05                     JZ 0x006a60d4
006A60CF  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A60D2  89 11                     MOV dword ptr [ECX],EDX
LAB_006a60d4:
006A60D4  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006A60D7  8D 0C 46                  LEA ECX,[ESI + EAX*0x2]
006A60DA  03 C1                     ADD EAX,ECX
006A60DC  5F                        POP EDI
006A60DD  5E                        POP ESI
006A60DE  5B                        POP EBX
006A60DF  8D 0C 42                  LEA ECX,[EDX + EAX*0x2]
006A60E2  03 C1                     ADD EAX,ECX
006A60E4  8B 04 85 00 D5 7E 00      MOV EAX,dword ptr [EAX*0x4 + 0x7ed500]
006A60EB  8B E5                     MOV ESP,EBP
006A60ED  5D                        POP EBP
006A60EE  C2 1C 00                  RET 0x1c
