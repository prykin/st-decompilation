FUN_006cee60:
006CEE60  55                        PUSH EBP
006CEE61  8B EC                     MOV EBP,ESP
006CEE63  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006CEE66  57                        PUSH EDI
006CEE67  8B 81 A0 01 00 00         MOV EAX,dword ptr [ECX + 0x1a0]
006CEE6D  8B 89 AC 01 00 00         MOV ECX,dword ptr [ECX + 0x1ac]
006CEE73  85 C0                     TEST EAX,EAX
006CEE75  8B 39                     MOV EDI,dword ptr [ECX]
006CEE77  7E 59                     JLE 0x006ceed2
006CEE79  53                        PUSH EBX
006CEE7A  56                        PUSH ESI
006CEE7B  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_006cee7e:
006CEE7E  8B 07                     MOV EAX,dword ptr [EDI]
006CEE80  F6 C4 80                  TEST AH,0x80
006CEE83  74 3C                     JZ 0x006ceec1
006CEE85  A9 00 00 00 A0            TEST EAX,0xa0000000
006CEE8A  74 35                     JZ 0x006ceec1
006CEE8C  A9 00 00 00 20            TEST EAX,0x20000000
006CEE91  74 0E                     JZ 0x006ceea1
006CEE93  8B 87 CC 00 00 00         MOV EAX,dword ptr [EDI + 0xcc]
006CEE99  50                        PUSH EAX
006CEE9A  8B 10                     MOV EDX,dword ptr [EAX]
006CEE9C  FF 52 6C                  CALL dword ptr [EDX + 0x6c]
006CEE9F  EB 20                     JMP 0x006ceec1
LAB_006ceea1:
006CEEA1  8B 9F C8 00 00 00         MOV EBX,dword ptr [EDI + 0xc8]
006CEEA7  33 F6                     XOR ESI,ESI
006CEEA9  85 DB                     TEST EBX,EBX
006CEEAB  7E 14                     JLE 0x006ceec1
LAB_006ceead:
006CEEAD  8B 87 CC 00 00 00         MOV EAX,dword ptr [EDI + 0xcc]
006CEEB3  8B 04 B0                  MOV EAX,dword ptr [EAX + ESI*0x4]
006CEEB6  50                        PUSH EAX
006CEEB7  8B 08                     MOV ECX,dword ptr [EAX]
006CEEB9  FF 51 6C                  CALL dword ptr [ECX + 0x6c]
006CEEBC  46                        INC ESI
006CEEBD  3B F3                     CMP ESI,EBX
006CEEBF  7C EC                     JL 0x006ceead
LAB_006ceec1:
006CEEC1  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006CEEC4  81 C7 D4 00 00 00         ADD EDI,0xd4
006CEECA  48                        DEC EAX
006CEECB  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006CEECE  75 AE                     JNZ 0x006cee7e
006CEED0  5E                        POP ESI
006CEED1  5B                        POP EBX
LAB_006ceed2:
006CEED2  5F                        POP EDI
006CEED3  5D                        POP EBP
006CEED4  C2 04 00                  RET 0x4
