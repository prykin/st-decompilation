FUN_006d1610:
006D1610  55                        PUSH EBP
006D1611  8B EC                     MOV EBP,ESP
006D1613  53                        PUSH EBX
006D1614  56                        PUSH ESI
006D1615  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006D1618  57                        PUSH EDI
006D1619  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D161C  3B FE                     CMP EDI,ESI
006D161E  77 1B                     JA 0x006d163b
006D1620  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006D1623  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006D1626  50                        PUSH EAX
006D1627  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006D162A  51                        PUSH ECX
006D162B  50                        PUSH EAX
006D162C  56                        PUSH ESI
006D162D  50                        PUSH EAX
006D162E  57                        PUSH EDI
006D162F  E8 2C D4 FF FF            CALL 0x006cea60
006D1634  5F                        POP EDI
006D1635  5E                        POP ESI
006D1636  5B                        POP EBX
006D1637  5D                        POP EBP
006D1638  C2 14 00                  RET 0x14
LAB_006d163b:
006D163B  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006D163E  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006D1641  8D 41 FF                  LEA EAX,[ECX + -0x1]
006D1644  0F AF C3                  IMUL EAX,EBX
006D1647  03 F8                     ADD EDI,EAX
006D1649  03 F0                     ADD ESI,EAX
006D164B  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006D164E  8B D7                     MOV EDX,EDI
006D1650  2B D6                     SUB EDX,ESI
006D1652  3B D0                     CMP EDX,EAX
006D1654  7C 14                     JL 0x006d166a
006D1656  F7 DB                     NEG EBX
006D1658  51                        PUSH ECX
006D1659  50                        PUSH EAX
006D165A  53                        PUSH EBX
006D165B  56                        PUSH ESI
006D165C  53                        PUSH EBX
006D165D  57                        PUSH EDI
006D165E  E8 FD D3 FF FF            CALL 0x006cea60
006D1663  5F                        POP EDI
006D1664  5E                        POP ESI
006D1665  5B                        POP EBX
006D1666  5D                        POP EBP
006D1667  C2 14 00                  RET 0x14
LAB_006d166a:
006D166A  85 C0                     TEST EAX,EAX
006D166C  7E 24                     JLE 0x006d1692
006D166E  85 C9                     TEST ECX,ECX
006D1670  7E 20                     JLE 0x006d1692
006D1672  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
006D1675  EB 03                     JMP 0x006d167a
LAB_006d1677:
006D1677  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
LAB_006d167a:
006D167A  50                        PUSH EAX
006D167B  56                        PUSH ESI
006D167C  57                        PUSH EDI
006D167D  E8 EE C3 05 00            CALL 0x0072da70
006D1682  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006D1685  83 C4 0C                  ADD ESP,0xc
006D1688  2B F3                     SUB ESI,EBX
006D168A  2B FB                     SUB EDI,EBX
006D168C  48                        DEC EAX
006D168D  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
006D1690  75 E5                     JNZ 0x006d1677
LAB_006d1692:
006D1692  5F                        POP EDI
006D1693  5E                        POP ESI
006D1694  5B                        POP EBX
006D1695  5D                        POP EBP
006D1696  C2 14 00                  RET 0x14
