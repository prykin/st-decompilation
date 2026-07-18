FUN_00495ff0:
00495FF0  55                        PUSH EBP
00495FF1  8B EC                     MOV EBP,ESP
00495FF3  66 8B 15 40 B2 7F 00      MOV DX,word ptr [0x007fb240]
00495FFA  53                        PUSH EBX
00495FFB  56                        PUSH ESI
00495FFC  66 8B 75 0C               MOV SI,word ptr [EBP + 0xc]
00496000  0F BF C2                  MOVSX EAX,DX
00496003  0F BF CE                  MOVSX ECX,SI
00496006  57                        PUSH EDI
00496007  66 8B 7D 10               MOV DI,word ptr [EBP + 0x10]
0049600B  0F AF C1                  IMUL EAX,ECX
0049600E  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
00496015  0F BF DF                  MOVSX EBX,DI
00496018  0F AF CB                  IMUL ECX,EBX
0049601B  03 C1                     ADD EAX,ECX
0049601D  66 8B 4D 08               MOV CX,word ptr [EBP + 0x8]
00496021  0F BF D9                  MOVSX EBX,CX
00496024  03 C3                     ADD EAX,EBX
00496026  66 85 C9                  TEST CX,CX
00496029  7C 5F                     JL 0x0049608a
0049602B  66 3B CA                  CMP CX,DX
0049602E  7D 5A                     JGE 0x0049608a
00496030  66 85 F6                  TEST SI,SI
00496033  7C 55                     JL 0x0049608a
00496035  66 3B 35 42 B2 7F 00      CMP SI,word ptr [0x007fb242]
0049603C  7D 4C                     JGE 0x0049608a
0049603E  66 85 FF                  TEST DI,DI
00496041  7C 47                     JL 0x0049608a
00496043  66 3B 3D 44 B2 7F 00      CMP DI,word ptr [0x007fb244]
0049604A  7D 3E                     JGE 0x0049608a
0049604C  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0049604F  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
00496055  81 E2 FF 00 00 00         AND EDX,0xff
0049605B  8D 04 42                  LEA EAX,[EDX + EAX*0x2]
0049605E  8B 14 81                  MOV EDX,dword ptr [ECX + EAX*0x4]
00496061  8D 0C 81                  LEA ECX,[ECX + EAX*0x4]
00496064  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00496067  3B D0                     CMP EDX,EAX
00496069  74 0A                     JZ 0x00496075
0049606B  5F                        POP EDI
0049606C  5E                        POP ESI
0049606D  83 C8 FF                  OR EAX,0xffffffff
00496070  5B                        POP EBX
00496071  5D                        POP EBP
00496072  C2 18 00                  RET 0x18
LAB_00496075:
00496075  C7 01 00 00 00 00         MOV dword ptr [ECX],0x0
0049607B  83 C9 FF                  OR ECX,0xffffffff
0049607E  66 89 48 5B               MOV word ptr [EAX + 0x5b],CX
00496082  66 89 48 5D               MOV word ptr [EAX + 0x5d],CX
00496086  66 89 48 5F               MOV word ptr [EAX + 0x5f],CX
LAB_0049608a:
0049608A  5F                        POP EDI
0049608B  5E                        POP ESI
0049608C  33 C0                     XOR EAX,EAX
0049608E  5B                        POP EBX
0049608F  5D                        POP EBP
00496090  C2 18 00                  RET 0x18
