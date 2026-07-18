FUN_006e8ba0:
006E8BA0  55                        PUSH EBP
006E8BA1  8B EC                     MOV EBP,ESP
006E8BA3  53                        PUSH EBX
006E8BA4  8B D9                     MOV EBX,ECX
006E8BA6  56                        PUSH ESI
006E8BA7  57                        PUSH EDI
006E8BA8  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006E8BAB  8B 83 10 03 00 00         MOV EAX,dword ptr [EBX + 0x310]
006E8BB1  3B F8                     CMP EDI,EAX
006E8BB3  73 7A                     JNC 0x006e8c2f
006E8BB5  8B 8B 1C 03 00 00         MOV ECX,dword ptr [EBX + 0x31c]
006E8BBB  8D 04 7F                  LEA EAX,[EDI + EDI*0x2]
006E8BBE  C1 E0 03                  SHL EAX,0x3
006E8BC1  2B C7                     SUB EAX,EDI
006E8BC3  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006E8BC6  8D 34 81                  LEA ESI,[ECX + EAX*0x4]
006E8BC9  8B 04 81                  MOV EAX,dword ptr [ECX + EAX*0x4]
006E8BCC  F6 C4 80                  TEST AH,0x80
006E8BCF  74 5E                     JZ 0x006e8c2f
006E8BD1  57                        PUSH EDI
006E8BD2  8B CB                     MOV ECX,EBX
006E8BD4  E8 87 1F 00 00            CALL 0x006eab60
006E8BD9  6A 00                     PUSH 0x0
006E8BDB  6A 00                     PUSH 0x0
006E8BDD  6A 00                     PUSH 0x0
006E8BDF  57                        PUSH EDI
006E8BE0  8B CB                     MOV ECX,EBX
006E8BE2  E8 39 09 00 00            CALL 0x006e9520
006E8BE7  8D 96 A4 00 00 00         LEA EDX,[ESI + 0xa4]
006E8BED  52                        PUSH EDX
006E8BEE  E8 6D 24 FC FF            CALL 0x006ab060
006E8BF3  8B 06                     MOV EAX,dword ptr [ESI]
006E8BF5  F6 C4 01                  TEST AH,0x1
006E8BF8  74 0C                     JZ 0x006e8c06
006E8BFA  8D 86 A8 00 00 00         LEA EAX,[ESI + 0xa8]
006E8C00  50                        PUSH EAX
006E8C01  E8 5A 24 FC FF            CALL 0x006ab060
LAB_006e8c06:
006E8C06  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006E8C09  A8 01                     TEST AL,0x1
006E8C0B  74 11                     JZ 0x006e8c1e
006E8C0D  8D 8E A0 00 00 00         LEA ECX,[ESI + 0xa0]
006E8C13  24 FE                     AND AL,0xfe
006E8C15  51                        PUSH ECX
006E8C16  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
006E8C19  E8 42 24 FC FF            CALL 0x006ab060
LAB_006e8c1e:
006E8C1E  8B 16                     MOV EDX,dword ptr [ESI]
006E8C20  5F                        POP EDI
006E8C21  80 E6 7F                  AND DH,0x7f
006E8C24  80 CE 40                  OR DH,0x40
006E8C27  89 16                     MOV dword ptr [ESI],EDX
006E8C29  5E                        POP ESI
006E8C2A  5B                        POP EBX
006E8C2B  5D                        POP EBP
006E8C2C  C2 04 00                  RET 0x4
LAB_006e8c2f:
006E8C2F  83 FF FF                  CMP EDI,-0x1
006E8C32  74 0A                     JZ 0x006e8c3e
006E8C34  68 4C EC 7E 00            PUSH 0x7eec4c
006E8C39  E8 12 00 00 00            CALL 0x006e8c50
LAB_006e8c3e:
006E8C3E  5F                        POP EDI
006E8C3F  5E                        POP ESI
006E8C40  5B                        POP EBX
006E8C41  5D                        POP EBP
006E8C42  C2 04 00                  RET 0x4
