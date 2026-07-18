FUN_006036a0:
006036A0  55                        PUSH EBP
006036A1  8B EC                     MOV EBP,ESP
006036A3  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
006036A9  53                        PUSH EBX
006036AA  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006036AD  56                        PUSH ESI
006036AE  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006036B1  57                        PUSH EDI
006036B2  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006036B5  56                        PUSH ESI
006036B6  57                        PUSH EDI
006036B7  53                        PUSH EBX
006036B8  E8 7E 16 E0 FF            CALL 0x00404d3b
006036BD  85 C0                     TEST EAX,EAX
006036BF  74 51                     JZ 0x00603712
006036C1  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006036C4  85 C0                     TEST EAX,EAX
006036C6  74 40                     JZ 0x00603708
006036C8  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
006036CE  8D 47 01                  LEA EAX,[EDI + 0x1]
006036D1  56                        PUSH ESI
006036D2  50                        PUSH EAX
006036D3  53                        PUSH EBX
006036D4  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
006036D7  E8 5F 16 E0 FF            CALL 0x00404d3b
006036DC  85 C0                     TEST EAX,EAX
006036DE  74 32                     JZ 0x00603712
006036E0  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
006036E6  43                        INC EBX
006036E7  56                        PUSH ESI
006036E8  57                        PUSH EDI
006036E9  53                        PUSH EBX
006036EA  E8 4C 16 E0 FF            CALL 0x00404d3b
006036EF  85 C0                     TEST EAX,EAX
006036F1  74 1F                     JZ 0x00603712
006036F3  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006036F6  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
006036FC  56                        PUSH ESI
006036FD  50                        PUSH EAX
006036FE  53                        PUSH EBX
006036FF  E8 37 16 E0 FF            CALL 0x00404d3b
00603704  85 C0                     TEST EAX,EAX
00603706  74 0A                     JZ 0x00603712
LAB_00603708:
00603708  5F                        POP EDI
00603709  5E                        POP ESI
0060370A  B8 01 00 00 00            MOV EAX,0x1
0060370F  5B                        POP EBX
00603710  5D                        POP EBP
00603711  C3                        RET
LAB_00603712:
00603712  5F                        POP EDI
00603713  5E                        POP ESI
00603714  33 C0                     XOR EAX,EAX
00603716  5B                        POP EBX
00603717  5D                        POP EBP
00603718  C3                        RET
