FUN_004f1610:
004F1610  55                        PUSH EBP
004F1611  8B EC                     MOV EBP,ESP
004F1613  81 EC 98 00 00 00         SUB ESP,0x98
004F1619  8A 55 08                  MOV DL,byte ptr [EBP + 0x8]
004F161C  33 C0                     XOR EAX,EAX
004F161E  84 D2                     TEST DL,DL
004F1620  53                        PUSH EBX
004F1621  8B D9                     MOV EBX,ECX
004F1623  0F 94 C0                  SETZ AL
004F1626  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004F1629  8B 84 83 FE 02 00 00      MOV EAX,dword ptr [EBX + EAX*0x4 + 0x2fe]
004F1630  85 C0                     TEST EAX,EAX
004F1632  0F 84 23 01 00 00         JZ 0x004f175b
004F1638  8D 4D B4                  LEA ECX,[EBP + -0x4c]
004F163B  C7 45 C4 5B 00 00 00      MOV dword ptr [EBP + -0x3c],0x5b
004F1642  51                        PUSH ECX
004F1643  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
004F1646  50                        PUSH EAX
004F1647  6A 02                     PUSH 0x2
004F1649  E8 22 43 1F 00            CALL 0x006e5970
004F164E  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
004F1651  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
004F1654  85 C0                     TEST EAX,EAX
004F1656  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
004F1659  C6 45 FC 00               MOV byte ptr [EBP + -0x4],0x0
004F165D  0F 86 F8 00 00 00         JBE 0x004f175b
004F1663  56                        PUSH ESI
004F1664  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
004F1667  57                        PUSH EDI
004F1668  EB 03                     JMP 0x004f166d
LAB_004f166a:
004F166A  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
LAB_004f166d:
004F166D  B9 08 00 00 00            MOV ECX,0x8
004F1672  33 C0                     XOR EAX,EAX
004F1674  8D 7D D4                  LEA EDI,[EBP + -0x2c]
004F1677  F3 AB                     STOSD.REP ES:EDI
004F1679  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
004F167C  84 C0                     TEST AL,AL
004F167E  74 08                     JZ 0x004f1688
004F1680  8A 83 A1 0B 00 00         MOV AL,byte ptr [EBX + 0xba1]
004F1686  EB 06                     JMP 0x004f168e
LAB_004f1688:
004F1688  8A 83 FD 0B 00 00         MOV AL,byte ptr [EBX + 0xbfd]
LAB_004f168e:
004F168E  84 C0                     TEST AL,AL
004F1690  0F 84 80 00 00 00         JZ 0x004f1716
004F1696  B9 13 00 00 00            MOV ECX,0x13
004F169B  33 C0                     XOR EAX,EAX
004F169D  8D BD 68 FF FF FF         LEA EDI,[EBP + 0xffffff68]
004F16A3  81 E6 FF 00 00 00         AND ESI,0xff
004F16A9  F3 AB                     STOSD.REP ES:EDI
004F16AB  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004F16AE  8B 14 B2                  MOV EDX,dword ptr [EDX + ESI*0x4]
004F16B1  C7 85 68 FF FF FF 08 00 00 00  MOV dword ptr [EBP + 0xffffff68],0x8
004F16BB  C7 45 E4 5A 00 00 00      MOV dword ptr [EBP + -0x1c],0x5a
004F16C2  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004F16C5  8D 04 46                  LEA EAX,[ESI + EAX*0x2]
004F16C8  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004F16CB  C1 E1 03                  SHL ECX,0x3
004F16CE  2B C8                     SUB ECX,EAX
004F16D0  8B 84 19 89 07 00 00      MOV EAX,dword ptr [ECX + EBX*0x1 + 0x789]
004F16D7  8B 0C 85 66 7E 80 00      MOV ECX,dword ptr [EAX*0x4 + 0x807e66]
004F16DE  8D 85 68 FF FF FF         LEA EAX,[EBP + 0xffffff68]
004F16E4  89 8D 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],ECX
004F16EA  8D 4D D4                  LEA ECX,[EBP + -0x2c]
004F16ED  51                        PUSH ECX
004F16EE  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
004F16F1  52                        PUSH EDX
004F16F2  6A 02                     PUSH 0x2
004F16F4  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
004F16F7  E8 74 42 1F 00            CALL 0x006e5970
004F16FC  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004F16FF  8D 45 D4                  LEA EAX,[EBP + -0x2c]
004F1702  50                        PUSH EAX
004F1703  C7 45 E4 51 00 00 00      MOV dword ptr [EBP + -0x1c],0x51
004F170A  8B 14 B1                  MOV EDX,dword ptr [ECX + ESI*0x4]
004F170D  66 C7 45 EC 01 00         MOV word ptr [EBP + -0x14],0x1
004F1713  52                        PUSH EDX
004F1714  EB 1B                     JMP 0x004f1731
LAB_004f1716:
004F1716  81 E6 FF 00 00 00         AND ESI,0xff
004F171C  8D 45 D4                  LEA EAX,[EBP + -0x2c]
004F171F  50                        PUSH EAX
004F1720  C7 45 E4 50 00 00 00      MOV dword ptr [EBP + -0x1c],0x50
004F1727  8B 0C B2                  MOV ECX,dword ptr [EDX + ESI*0x4]
004F172A  66 C7 45 EC 01 00         MOV word ptr [EBP + -0x14],0x1
004F1730  51                        PUSH ECX
LAB_004f1731:
004F1731  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
004F1734  6A 02                     PUSH 0x2
004F1736  E8 35 42 1F 00            CALL 0x006e5970
004F173B  8A 55 FC                  MOV DL,byte ptr [EBP + -0x4]
004F173E  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
004F1741  FE C2                     INC DL
004F1743  88 55 FC                  MOV byte ptr [EBP + -0x4],DL
004F1746  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
004F1749  8B D6                     MOV EDX,ESI
004F174B  81 E2 FF 00 00 00         AND EDX,0xff
004F1751  3B D0                     CMP EDX,EAX
004F1753  0F 82 11 FF FF FF         JC 0x004f166a
004F1759  5F                        POP EDI
004F175A  5E                        POP ESI
LAB_004f175b:
004F175B  5B                        POP EBX
004F175C  8B E5                     MOV ESP,EBP
004F175E  5D                        POP EBP
004F175F  C2 04 00                  RET 0x4
