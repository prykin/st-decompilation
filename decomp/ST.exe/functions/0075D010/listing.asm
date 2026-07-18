FUN_0075d010:
0075D010  55                        PUSH EBP
0075D011  8B EC                     MOV EBP,ESP
0075D013  53                        PUSH EBX
0075D014  56                        PUSH ESI
0075D015  57                        PUSH EDI
0075D016  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0075D019  8B B7 9E 01 00 00         MOV ESI,dword ptr [EDI + 0x19e]
0075D01F  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
0075D022  8D 5E 18                  LEA EBX,[ESI + 0x18]
0075D025  85 C0                     TEST EAX,EAX
0075D027  75 17                     JNZ 0x0075d040
0075D029  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
0075D02C  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
0075D02F  8B 07                     MOV EAX,dword ptr [EDI]
0075D031  6A 01                     PUSH 0x1
0075D033  51                        PUSH ECX
0075D034  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0075D037  52                        PUSH EDX
0075D038  51                        PUSH ECX
0075D039  57                        PUSH EDI
0075D03A  FF 50 1C                  CALL dword ptr [EAX + 0x1c]
0075D03D  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
LAB_0075d040:
0075D040  8B 13                     MOV EDX,dword ptr [EBX]
0075D042  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
0075D045  8B 87 B2 01 00 00         MOV EAX,dword ptr [EDI + 0x1b2]
0075D04B  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
0075D04E  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
0075D051  51                        PUSH ECX
0075D052  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0075D055  53                        PUSH EBX
0075D056  52                        PUSH EDX
0075D057  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0075D05A  51                        PUSH ECX
0075D05B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0075D05E  52                        PUSH EDX
0075D05F  51                        PUSH ECX
0075D060  57                        PUSH EDI
0075D061  FF 50 04                  CALL dword ptr [EAX + 0x4]
0075D064  8B 03                     MOV EAX,dword ptr [EBX]
0075D066  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0075D069  3B C1                     CMP EAX,ECX
0075D06B  76 21                     JBE 0x0075d08e
0075D06D  2B C1                     SUB EAX,ECX
0075D06F  8B 97 BA 01 00 00         MOV EDX,dword ptr [EDI + 0x1ba]
0075D075  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0075D078  50                        PUSH EAX
0075D079  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
0075D07C  6A 00                     PUSH 0x0
0075D07E  8D 0C 88                  LEA ECX,[EAX + ECX*0x4]
0075D081  51                        PUSH ECX
0075D082  57                        PUSH EDI
0075D083  FF 52 04                  CALL dword ptr [EDX + 0x4]
0075D086  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0075D089  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0075D08C  01 10                     ADD dword ptr [EAX],EDX
LAB_0075d08e:
0075D08E  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
0075D091  8B 0B                     MOV ECX,dword ptr [EBX]
0075D093  3B C8                     CMP ECX,EAX
0075D095  72 0E                     JC 0x0075d0a5
0075D097  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
0075D09A  C7 03 00 00 00 00         MOV dword ptr [EBX],0x0
0075D0A0  03 C8                     ADD ECX,EAX
0075D0A2  89 4E 14                  MOV dword ptr [ESI + 0x14],ECX
LAB_0075d0a5:
0075D0A5  5F                        POP EDI
0075D0A6  5E                        POP ESI
0075D0A7  5B                        POP EBX
0075D0A8  5D                        POP EBP
0075D0A9  C2 1C 00                  RET 0x1c
