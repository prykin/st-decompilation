FUN_006c13d0:
006C13D0  55                        PUSH EBP
006C13D1  8B EC                     MOV EBP,ESP
006C13D3  83 EC 44                  SUB ESP,0x44
006C13D6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006C13DB  53                        PUSH EBX
006C13DC  56                        PUSH ESI
006C13DD  57                        PUSH EDI
006C13DE  8D 55 C0                  LEA EDX,[EBP + -0x40]
006C13E1  8D 4D BC                  LEA ECX,[EBP + -0x44]
006C13E4  6A 00                     PUSH 0x0
006C13E6  52                        PUSH EDX
006C13E7  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
006C13EA  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006C13F0  E8 FB C3 06 00            CALL 0x0072d7f0
006C13F5  83 C4 08                  ADD ESP,0x8
006C13F8  85 C0                     TEST EAX,EAX
006C13FA  0F 85 87 00 00 00         JNZ 0x006c1487
006C1400  6A 0C                     PUSH 0xc
006C1402  E8 09 98 FE FF            CALL 0x006aac10
006C1407  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C140A  8B D8                     MOV EBX,EAX
006C140C  85 F6                     TEST ESI,ESI
006C140E  74 16                     JZ 0x006c1426
006C1410  6A 10                     PUSH 0x10
006C1412  E8 59 98 FE FF            CALL 0x006aac70
006C1417  6A 10                     PUSH 0x10
006C1419  56                        PUSH ESI
006C141A  50                        PUSH EAX
006C141B  89 43 04                  MOV dword ptr [EBX + 0x4],EAX
006C141E  E8 4D C6 06 00            CALL 0x0072da70
006C1423  83 C4 0C                  ADD ESP,0xc
LAB_006c1426:
006C1426  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006C1429  83 C9 FF                  OR ECX,0xffffffff
006C142C  8B FE                     MOV EDI,ESI
006C142E  33 C0                     XOR EAX,EAX
006C1430  F2 AE                     SCASB.REPNE ES:EDI
006C1432  F7 D1                     NOT ECX
006C1434  51                        PUSH ECX
006C1435  E8 D6 97 FE FF            CALL 0x006aac10
006C143A  8B D0                     MOV EDX,EAX
006C143C  85 D2                     TEST EDX,EDX
006C143E  89 53 08                  MOV dword ptr [EBX + 0x8],EDX
006C1441  74 23                     JZ 0x006c1466
006C1443  85 F6                     TEST ESI,ESI
006C1445  74 1F                     JZ 0x006c1466
006C1447  8B FE                     MOV EDI,ESI
006C1449  83 C9 FF                  OR ECX,0xffffffff
006C144C  33 C0                     XOR EAX,EAX
006C144E  F2 AE                     SCASB.REPNE ES:EDI
006C1450  F7 D1                     NOT ECX
006C1452  2B F9                     SUB EDI,ECX
006C1454  8B C1                     MOV EAX,ECX
006C1456  8B F7                     MOV ESI,EDI
006C1458  8B FA                     MOV EDI,EDX
006C145A  C1 E9 02                  SHR ECX,0x2
006C145D  F3 A5                     MOVSD.REP ES:EDI,ESI
006C145F  8B C8                     MOV ECX,EAX
006C1461  83 E1 03                  AND ECX,0x3
006C1464  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_006c1466:
006C1466  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006C1469  53                        PUSH EBX
006C146A  51                        PUSH ECX
006C146B  E8 A0 84 FF FF            CALL 0x006b9910
006C1470  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
006C1473  B8 01 00 00 00            MOV EAX,0x1
006C1478  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006C147E  5F                        POP EDI
006C147F  5E                        POP ESI
006C1480  5B                        POP EBX
006C1481  8B E5                     MOV ESP,EBP
006C1483  5D                        POP EBP
006C1484  C2 10 00                  RET 0x10
LAB_006c1487:
006C1487  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
006C148A  68 05 04 00 00            PUSH 0x405
006C148F  68 14 DE 7E 00            PUSH 0x7ede14
006C1494  6A 00                     PUSH 0x0
006C1496  50                        PUSH EAX
006C1497  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006C149D  E8 9E 49 FE FF            CALL 0x006a5e40
006C14A2  5F                        POP EDI
006C14A3  5E                        POP ESI
006C14A4  33 C0                     XOR EAX,EAX
006C14A6  5B                        POP EBX
006C14A7  8B E5                     MOV ESP,EBP
006C14A9  5D                        POP EBP
006C14AA  C2 10 00                  RET 0x10
