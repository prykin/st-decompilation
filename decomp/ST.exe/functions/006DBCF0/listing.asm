FUN_006dbcf0:
006DBCF0  56                        PUSH ESI
006DBCF1  8B F1                     MOV ESI,ECX
006DBCF3  E8 B8 FD FF FF            CALL 0x006dbab0
006DBCF8  8B B6 58 03 00 00         MOV ESI,dword ptr [ESI + 0x358]
006DBCFE  85 F6                     TEST ESI,ESI
006DBD00  74 10                     JZ 0x006dbd12
006DBD02  8B CE                     MOV ECX,ESI
006DBD04  E8 E7 FF FF FF            CALL 0x006dbcf0
006DBD09  56                        PUSH ESI
006DBD0A  E8 A1 25 05 00            CALL 0x0072e2b0
006DBD0F  83 C4 04                  ADD ESP,0x4
LAB_006dbd12:
006DBD12  5E                        POP ESI
006DBD13  C3                        RET
