FUN_00590010:
00590010  55                        PUSH EBP
00590011  8B EC                     MOV EBP,ESP
00590013  83 EC 34                  SUB ESP,0x34
00590016  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00590019  56                        PUSH ESI
0059001A  57                        PUSH EDI
0059001B  B9 0D 00 00 00            MOV ECX,0xd
00590020  33 C0                     XOR EAX,EAX
00590022  8D 7D CC                  LEA EDI,[EBP + -0x34]
00590025  F3 AB                     STOSD.REP ES:EDI
00590027  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
0059002A  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
0059002D  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
00590030  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
00590033  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00590036  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00590039  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
0059003C  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0059003F  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
00590042  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00590045  85 D2                     TEST EDX,EDX
00590047  C7 45 CC 8C 00 00 00      MOV dword ptr [EBP + -0x34],0x8c
0059004E  C7 45 D4 00 00 00 00      MOV dword ptr [EBP + -0x2c],0x0
00590055  C7 45 D8 01 00 00 00      MOV dword ptr [EBP + -0x28],0x1
0059005C  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0059005F  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00590062  7C 29                     JL 0x0059008d
00590064  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00590067  85 C9                     TEST ECX,ECX
00590069  7C 22                     JL 0x0059008d
0059006B  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0059006E  85 C0                     TEST EAX,EAX
00590070  7C 1B                     JL 0x0059008d
00590072  0F BF 35 40 B2 7F 00      MOVSX ESI,word ptr [0x007fb240]
00590079  3B D6                     CMP EDX,ESI
0059007B  7D 10                     JGE 0x0059008d
0059007D  0F BF 35 42 B2 7F 00      MOVSX ESI,word ptr [0x007fb242]
00590084  3B CE                     CMP ECX,ESI
00590086  7D 05                     JGE 0x0059008d
00590088  83 F8 05                  CMP EAX,0x5
0059008B  7C 2B                     JL 0x005900b8
LAB_0059008d:
0059008D  68 F4 BB 7C 00            PUSH 0x7cbbf4
00590092  68 CC 4C 7A 00            PUSH 0x7a4ccc
00590097  6A 00                     PUSH 0x0
00590099  6A 00                     PUSH 0x0
0059009B  68 BB 04 00 00            PUSH 0x4bb
005900A0  68 7C BB 7C 00            PUSH 0x7cbb7c
005900A5  E8 26 D4 11 00            CALL 0x006ad4d0
005900AA  83 C4 18                  ADD ESP,0x18
005900AD  85 C0                     TEST EAX,EAX
005900AF  74 01                     JZ 0x005900b2
005900B1  CC                        INT3
LAB_005900b2:
005900B2  33 D2                     XOR EDX,EDX
005900B4  33 C9                     XOR ECX,ECX
005900B6  33 C0                     XOR EAX,EAX
LAB_005900b8:
005900B8  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
005900BB  8D 55 CC                  LEA EDX,[EBP + -0x34]
005900BE  6A 00                     PUSH 0x0
005900C0  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
005900C3  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005900C9  52                        PUSH EDX
005900CA  8D 55 28                  LEA EDX,[EBP + 0x28]
005900CD  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
005900D0  8B 01                     MOV EAX,dword ptr [ECX]
005900D2  52                        PUSH EDX
005900D3  6A 00                     PUSH 0x0
005900D5  68 29 01 00 00            PUSH 0x129
005900DA  FF 50 08                  CALL dword ptr [EAX + 0x8]
005900DD  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
005900E0  5F                        POP EDI
005900E1  5E                        POP ESI
005900E2  8B E5                     MOV ESP,EBP
005900E4  5D                        POP EBP
005900E5  C3                        RET
