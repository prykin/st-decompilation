FUN_006e1320:
006E1320  55                        PUSH EBP
006E1321  8B EC                     MOV EBP,ESP
006E1323  83 EC 3C                  SUB ESP,0x3c
006E1326  53                        PUSH EBX
006E1327  56                        PUSH ESI
006E1328  8B F1                     MOV ESI,ECX
006E132A  57                        PUSH EDI
006E132B  6A 00                     PUSH 0x0
006E132D  6A 00                     PUSH 0x0
006E132F  DD 86 98 00 00 00         FLD double ptr [ESI + 0x98]
006E1335  DD 86 A0 00 00 00         FLD double ptr [ESI + 0xa0]
006E133B  6A 00                     PUSH 0x0
006E133D  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
006E1344  DD 5D F0                  FSTP double ptr [EBP + -0x10]
006E1347  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006E134A  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006E134D  DD 5D F8                  FSTP double ptr [EBP + -0x8]
006E1350  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006E1353  50                        PUSH EAX
006E1354  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006E1357  51                        PUSH ECX
006E1358  52                        PUSH EDX
006E1359  8D 4D E4                  LEA ECX,[EBP + -0x1c]
006E135C  50                        PUSH EAX
006E135D  8D 55 C4                  LEA EDX,[EBP + -0x3c]
006E1360  51                        PUSH ECX
006E1361  52                        PUSH EDX
006E1362  8B CE                     MOV ECX,ESI
006E1364  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
006E136B  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
006E1372  E8 59 12 00 00            CALL 0x006e25d0
006E1377  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006E137A  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006E137D  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
006E1380  8B 0F                     MOV ECX,dword ptr [EDI]
006E1382  8B 53 04                  MOV EDX,dword ptr [EBX + 0x4]
006E1385  50                        PUSH EAX
006E1386  8B 03                     MOV EAX,dword ptr [EBX]
006E1388  51                        PUSH ECX
006E1389  8B 8E A8 00 00 00         MOV ECX,dword ptr [ESI + 0xa8]
006E138F  52                        PUSH EDX
006E1390  50                        PUSH EAX
006E1391  51                        PUSH ECX
006E1392  8B CE                     MOV ECX,ESI
006E1394  E8 B7 BC FF FF            CALL 0x006dd050
006E1399  8B 96 98 00 00 00         MOV EDX,dword ptr [ESI + 0x98]
006E139F  6A 00                     PUSH 0x0
006E13A1  89 13                     MOV dword ptr [EBX],EDX
006E13A3  8B 86 9C 00 00 00         MOV EAX,dword ptr [ESI + 0x9c]
006E13A9  89 43 04                  MOV dword ptr [EBX + 0x4],EAX
006E13AC  8B 8E A0 00 00 00         MOV ECX,dword ptr [ESI + 0xa0]
006E13B2  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
006E13B5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006E13B8  89 0F                     MOV dword ptr [EDI],ECX
006E13BA  8B 96 A4 00 00 00         MOV EDX,dword ptr [ESI + 0xa4]
006E13C0  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006E13C3  89 57 04                  MOV dword ptr [EDI + 0x4],EDX
006E13C6  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
006E13C9  6A 00                     PUSH 0x0
006E13CB  6A 00                     PUSH 0x0
006E13CD  57                        PUSH EDI
006E13CE  53                        PUSH EBX
006E13CF  50                        PUSH EAX
006E13D0  8D 55 E4                  LEA EDX,[EBP + -0x1c]
006E13D3  51                        PUSH ECX
006E13D4  8D 45 D4                  LEA EAX,[EBP + -0x2c]
006E13D7  52                        PUSH EDX
006E13D8  50                        PUSH EAX
006E13D9  8B CE                     MOV ECX,ESI
006E13DB  E8 F0 11 00 00            CALL 0x006e25d0
006E13E0  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
006E13E3  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
006E13E6  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006E13E9  2B C8                     SUB ECX,EAX
006E13EB  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006E13EE  81 C1 00 80 00 00         ADD ECX,0x8000
006E13F4  C1 F9 10                  SAR ECX,0x10
006E13F7  89 0A                     MOV dword ptr [EDX],ECX
006E13F9  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
006E13FC  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006E13FF  2B C2                     SUB EAX,EDX
006E1401  05 00 80 00 00            ADD EAX,0x8000
006E1406  C1 F8 10                  SAR EAX,0x10
006E1409  89 01                     MOV dword ptr [ECX],EAX
006E140B  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006E140E  85 C0                     TEST EAX,EAX
006E1410  74 0A                     JZ 0x006e141c
006E1412  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
006E1415  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
006E1418  2B D1                     SUB EDX,ECX
006E141A  89 10                     MOV dword ptr [EAX],EDX
LAB_006e141c:
006E141C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006E141F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006E1422  8B 96 A8 00 00 00         MOV EDX,dword ptr [ESI + 0xa8]
006E1428  57                        PUSH EDI
006E1429  53                        PUSH EBX
006E142A  50                        PUSH EAX
006E142B  51                        PUSH ECX
006E142C  52                        PUSH EDX
006E142D  8B CE                     MOV ECX,ESI
006E142F  E8 1C BC FF FF            CALL 0x006dd050
006E1434  5F                        POP EDI
006E1435  5E                        POP ESI
006E1436  5B                        POP EBX
006E1437  8B E5                     MOV ESP,EBP
006E1439  5D                        POP EBP
006E143A  C2 14 00                  RET 0x14
