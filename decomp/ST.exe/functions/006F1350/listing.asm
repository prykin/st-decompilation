FUN_006f1350:
006F1350  55                        PUSH EBP
006F1351  8B EC                     MOV EBP,ESP
006F1353  83 EC 48                  SUB ESP,0x48
006F1356  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006F135B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006F135E  56                        PUSH ESI
006F135F  8D 55 BC                  LEA EDX,[EBP + -0x44]
006F1362  8D 4D B8                  LEA ECX,[EBP + -0x48]
006F1365  6A 00                     PUSH 0x0
006F1367  52                        PUSH EDX
006F1368  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006F136B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006F1371  E8 7A C4 03 00            CALL 0x0072d7f0
006F1376  8B F0                     MOV ESI,EAX
006F1378  83 C4 08                  ADD ESP,0x8
006F137B  85 F6                     TEST ESI,ESI
006F137D  75 25                     JNZ 0x006f13a4
006F137F  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006F1382  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F1385  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006F1388  50                        PUSH EAX
006F1389  8B 02                     MOV EAX,dword ptr [EDX]
006F138B  51                        PUSH ECX
006F138C  8B 08                     MOV ECX,dword ptr [EAX]
006F138E  51                        PUSH ECX
006F138F  E8 1C FC 05 00            CALL 0x00750fb0
006F1394  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
006F1397  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006F139D  5E                        POP ESI
006F139E  8B E5                     MOV ESP,EBP
006F13A0  5D                        POP EBP
006F13A1  C2 08 00                  RET 0x8
LAB_006f13a4:
006F13A4  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
006F13A7  68 EC FA 7E 00            PUSH 0x7efaec
006F13AC  68 CC 4C 7A 00            PUSH 0x7a4ccc
006F13B1  56                        PUSH ESI
006F13B2  6A 00                     PUSH 0x0
006F13B4  68 B6 00 00 00            PUSH 0xb6
006F13B9  68 A4 FA 7E 00            PUSH 0x7efaa4
006F13BE  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006F13C3  E8 08 C1 FB FF            CALL 0x006ad4d0
006F13C8  83 C4 18                  ADD ESP,0x18
006F13CB  85 C0                     TEST EAX,EAX
006F13CD  74 01                     JZ 0x006f13d0
006F13CF  CC                        INT3
LAB_006f13d0:
006F13D0  68 B8 00 00 00            PUSH 0xb8
006F13D5  68 A4 FA 7E 00            PUSH 0x7efaa4
006F13DA  6A 00                     PUSH 0x0
006F13DC  56                        PUSH ESI
006F13DD  E8 5E 4A FB FF            CALL 0x006a5e40
006F13E2  5E                        POP ESI
006F13E3  8B E5                     MOV ESP,EBP
006F13E5  5D                        POP EBP
006F13E6  C2 08 00                  RET 0x8
