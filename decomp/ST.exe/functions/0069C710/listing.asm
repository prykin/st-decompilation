FUN_0069c710:
0069C710  55                        PUSH EBP
0069C711  8B EC                     MOV EBP,ESP
0069C713  56                        PUSH ESI
0069C714  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
0069C717  83 C8 FF                  OR EAX,0xffffffff
0069C71A  85 F6                     TEST ESI,ESI
0069C71C  74 4D                     JZ 0x0069c76b
0069C71E  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0069C721  8D 45 0C                  LEA EAX,[EBP + 0xc]
0069C724  50                        PUSH EAX
0069C725  51                        PUSH ECX
0069C726  E8 95 1A 01 00            CALL 0x006ae1c0
0069C72B  85 C0                     TEST EAX,EAX
0069C72D  7C 3C                     JL 0x0069c76b
0069C72F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0069C732  8D 14 CD 00 00 00 00      LEA EDX,[ECX*0x8 + 0x0]
0069C739  2B D1                     SUB EDX,ECX
0069C73B  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0069C73E  8D 4C 51 01               LEA ECX,[ECX + EDX*0x2 + 0x1]
0069C742  8A 11                     MOV DL,byte ptr [ECX]
0069C744  F6 C2 04                  TEST DL,0x4
0069C747  74 1A                     JZ 0x0069c763
0069C749  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
0069C74C  42                        INC EDX
0069C74D  89 56 04                  MOV dword ptr [ESI + 0x4],EDX
0069C750  8A 11                     MOV DL,byte ptr [ECX]
0069C752  F6 C2 08                  TEST DL,0x8
0069C755  74 14                     JZ 0x0069c76b
0069C757  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0069C75A  41                        INC ECX
0069C75B  89 4E 08                  MOV dword ptr [ESI + 0x8],ECX
0069C75E  5E                        POP ESI
0069C75F  5D                        POP EBP
0069C760  C2 0C 00                  RET 0xc
LAB_0069c763:
0069C763  F6 C2 08                  TEST DL,0x8
0069C766  74 03                     JZ 0x0069c76b
0069C768  FF 46 08                  INC dword ptr [ESI + 0x8]
LAB_0069c76b:
0069C76B  5E                        POP ESI
0069C76C  5D                        POP EBP
0069C76D  C2 0C 00                  RET 0xc
