FUN_006f1700:
006F1700  55                        PUSH EBP
006F1701  8B EC                     MOV EBP,ESP
006F1703  83 EC 48                  SUB ESP,0x48
006F1706  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006F170B  56                        PUSH ESI
006F170C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006F170F  57                        PUSH EDI
006F1710  8D 55 BC                  LEA EDX,[EBP + -0x44]
006F1713  8D 4D B8                  LEA ECX,[EBP + -0x48]
006F1716  6A 00                     PUSH 0x0
006F1718  52                        PUSH EDX
006F1719  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006F171C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006F1722  E8 C9 C0 03 00            CALL 0x0072d7f0
006F1727  8B F0                     MOV ESI,EAX
006F1729  83 C4 08                  ADD ESP,0x8
006F172C  85 F6                     TEST ESI,ESI
006F172E  75 45                     JNZ 0x006f1775
006F1730  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006F1733  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006F1736  85 F6                     TEST ESI,ESI
006F1738  74 04                     JZ 0x006f173e
006F173A  85 FF                     TEST EDI,EDI
006F173C  75 17                     JNZ 0x006f1755
LAB_006f173e:
006F173E  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006F1743  68 1B 01 00 00            PUSH 0x11b
006F1748  68 A4 FA 7E 00            PUSH 0x7efaa4
006F174D  50                        PUSH EAX
006F174E  6A CC                     PUSH -0x34
006F1750  E8 EB 46 FB FF            CALL 0x006a5e40
LAB_006f1755:
006F1755  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006F1758  57                        PUSH EDI
006F1759  56                        PUSH ESI
006F175A  6A 00                     PUSH 0x0
006F175C  8B 11                     MOV EDX,dword ptr [ECX]
006F175E  52                        PUSH EDX
006F175F  E8 EC F8 05 00            CALL 0x00751050
006F1764  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
006F1767  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006F176D  5F                        POP EDI
006F176E  5E                        POP ESI
006F176F  8B E5                     MOV ESP,EBP
006F1771  5D                        POP EBP
006F1772  C2 08 00                  RET 0x8
LAB_006f1775:
006F1775  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
006F1778  68 2C FB 7E 00            PUSH 0x7efb2c
006F177D  68 CC 4C 7A 00            PUSH 0x7a4ccc
006F1782  56                        PUSH ESI
006F1783  6A 00                     PUSH 0x0
006F1785  68 20 01 00 00            PUSH 0x120
006F178A  68 A4 FA 7E 00            PUSH 0x7efaa4
006F178F  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006F1795  E8 36 BD FB FF            CALL 0x006ad4d0
006F179A  83 C4 18                  ADD ESP,0x18
006F179D  85 C0                     TEST EAX,EAX
006F179F  74 01                     JZ 0x006f17a2
006F17A1  CC                        INT3
LAB_006f17a2:
006F17A2  68 22 01 00 00            PUSH 0x122
006F17A7  68 A4 FA 7E 00            PUSH 0x7efaa4
006F17AC  6A 00                     PUSH 0x0
006F17AE  56                        PUSH ESI
006F17AF  E8 8C 46 FB FF            CALL 0x006a5e40
006F17B4  5F                        POP EDI
006F17B5  83 C8 FF                  OR EAX,0xffffffff
006F17B8  5E                        POP ESI
006F17B9  8B E5                     MOV ESP,EBP
006F17BB  5D                        POP EBP
006F17BC  C2 08 00                  RET 0x8
