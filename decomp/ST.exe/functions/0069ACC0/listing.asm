FUN_0069acc0:
0069ACC0  55                        PUSH EBP
0069ACC1  8B EC                     MOV EBP,ESP
0069ACC3  83 EC 08                  SUB ESP,0x8
0069ACC6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0069ACC9  53                        PUSH EBX
0069ACCA  99                        CDQ
0069ACCB  2B C2                     SUB EAX,EDX
0069ACCD  56                        PUSH ESI
0069ACCE  8B F0                     MOV ESI,EAX
0069ACD0  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0069ACD3  99                        CDQ
0069ACD4  2B C2                     SUB EAX,EDX
0069ACD6  57                        PUSH EDI
0069ACD7  8B D9                     MOV EBX,ECX
0069ACD9  8B F8                     MOV EDI,EAX
0069ACDB  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0069ACDE  8D 45 F8                  LEA EAX,[EBP + -0x8]
0069ACE1  8B 53 08                  MOV EDX,dword ptr [EBX + 0x8]
0069ACE4  50                        PUSH EAX
0069ACE5  D1 FF                     SAR EDI,0x1
0069ACE7  D1 FE                     SAR ESI,0x1
0069ACE9  51                        PUSH ECX
0069ACEA  57                        PUSH EDI
0069ACEB  56                        PUSH ESI
0069ACEC  52                        PUSH EDX
0069ACED  E8 5A 94 D6 FF            CALL 0x0040414c
0069ACF2  0F BF C0                  MOVSX EAX,AX
0069ACF5  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0069ACF8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0069ACFB  83 C4 14                  ADD ESP,0x14
0069ACFE  F6 C4 20                  TEST AH,0x20
0069AD01  75 06                     JNZ 0x0069ad09
0069AD03  66 3D 00 11               CMP AX,0x1100
0069AD07  75 51                     JNZ 0x0069ad5a
LAB_0069ad09:
0069AD09  F6 C4 40                  TEST AH,0x40
0069AD0C  75 4C                     JNZ 0x0069ad5a
0069AD0E  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0069AD11  8B 53 08                  MOV EDX,dword ptr [EBX + 0x8]
0069AD14  68 FF 00 00 00            PUSH 0xff
0069AD19  51                        PUSH ECX
0069AD1A  57                        PUSH EDI
0069AD1B  56                        PUSH ESI
0069AD1C  52                        PUSH EDX
0069AD1D  E8 8E 6C D6 FF            CALL 0x004019b0
0069AD22  83 C4 14                  ADD ESP,0x14
0069AD25  85 C0                     TEST EAX,EAX
0069AD27  74 23                     JZ 0x0069ad4c
0069AD29  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0069AD2C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0069AD2F  3B C8                     CMP ECX,EAX
0069AD31  75 27                     JNZ 0x0069ad5a
0069AD33  40                        INC EAX
0069AD34  68 FF 00 00 00            PUSH 0xff
0069AD39  50                        PUSH EAX
0069AD3A  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
0069AD3D  57                        PUSH EDI
0069AD3E  56                        PUSH ESI
0069AD3F  50                        PUSH EAX
0069AD40  E8 6B 6C D6 FF            CALL 0x004019b0
0069AD45  83 C4 14                  ADD ESP,0x14
0069AD48  85 C0                     TEST EAX,EAX
0069AD4A  75 0E                     JNZ 0x0069ad5a
LAB_0069ad4c:
0069AD4C  5F                        POP EDI
0069AD4D  5E                        POP ESI
0069AD4E  B8 01 00 00 00            MOV EAX,0x1
0069AD53  5B                        POP EBX
0069AD54  8B E5                     MOV ESP,EBP
0069AD56  5D                        POP EBP
0069AD57  C2 0C 00                  RET 0xc
LAB_0069ad5a:
0069AD5A  5F                        POP EDI
0069AD5B  5E                        POP ESI
0069AD5C  83 C8 FF                  OR EAX,0xffffffff
0069AD5F  5B                        POP EBX
0069AD60  8B E5                     MOV ESP,EBP
0069AD62  5D                        POP EBP
0069AD63  C2 0C 00                  RET 0xc
