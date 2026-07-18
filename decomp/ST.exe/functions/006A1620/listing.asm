FUN_006a1620:
006A1620  55                        PUSH EBP
006A1621  8B EC                     MOV EBP,ESP
006A1623  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006A1626  85 C0                     TEST EAX,EAX
006A1628  74 12                     JZ 0x006a163c
006A162A  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006A162D  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006A1630  51                        PUSH ECX
006A1631  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006A1634  52                        PUSH EDX
006A1635  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006A1638  51                        PUSH ECX
006A1639  52                        PUSH EDX
006A163A  FF D0                     CALL EAX
LAB_006a163c:
006A163C  53                        PUSH EBX
006A163D  56                        PUSH ESI
006A163E  57                        PUSH EDI
006A163F  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006A1642  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006A1645  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A1648  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
006A164B  0F AF 45 14               IMUL EAX,dword ptr [EBP + 0x14]
006A164F  03 C6                     ADD EAX,ESI
006A1651  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006A1654  0F AF 07                  IMUL EAX,dword ptr [EDI]
006A1657  66 8B 4A 04               MOV CX,word ptr [EDX + 0x4]
006A165B  03 C6                     ADD EAX,ESI
006A165D  8B D9                     MOV EBX,ECX
006A165F  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006A1662  C1 EB 08                  SHR EBX,0x8
006A1665  8D 74 47 08               LEA ESI,[EDI + EAX*0x2 + 0x8]
006A1669  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006A166C  83 E3 0F                  AND EBX,0xf
006A166F  3D FF 00 00 00            CMP EAX,0xff
006A1674  66 89 4E 04               MOV word ptr [ESI + 0x4],CX
006A1678  74 16                     JZ 0x006a1690
006A167A  85 C0                     TEST EAX,EAX
006A167C  75 08                     JNZ 0x006a1686
006A167E  66 8B 0A                  MOV CX,word ptr [EDX]
006A1681  66 89 0E                  MOV word ptr [ESI],CX
006A1684  EB 10                     JMP 0x006a1696
LAB_006a1686:
006A1686  66 8B 52 02               MOV DX,word ptr [EDX + 0x2]
006A168A  66 89 56 02               MOV word ptr [ESI + 0x2],DX
006A168E  EB 06                     JMP 0x006a1696
LAB_006a1690:
006A1690  66 8B 02                  MOV AX,word ptr [EDX]
006A1693  66 89 06                  MOV word ptr [ESI],AX
LAB_006a1696:
006A1696  66 8B 06                  MOV AX,word ptr [ESI]
006A1699  F6 C4 20                  TEST AH,0x20
006A169C  74 52                     JZ 0x006a16f0
006A169E  F6 C4 10                  TEST AH,0x10
006A16A1  75 4D                     JNZ 0x006a16f0
006A16A3  66 8B 4E 04               MOV CX,word ptr [ESI + 0x4]
006A16A7  66 8B D0                  MOV DX,AX
006A16AA  83 E1 0F                  AND ECX,0xf
006A16AD  8A C2                     MOV AL,DL
006A16AF  32 C1                     XOR AL,CL
006A16B1  83 E0 0F                  AND EAX,0xf
006A16B4  33 C2                     XOR EAX,EDX
006A16B6  85 C9                     TEST ECX,ECX
006A16B8  66 89 06                  MOV word ptr [ESI],AX
006A16BB  75 21                     JNZ 0x006a16de
006A16BD  66 8B C8                  MOV CX,AX
006A16C0  66 89 4D 08               MOV word ptr [EBP + 0x8],CX
006A16C4  E8 F7 CF 08 00            CALL 0x0072e6c0
006A16C9  0F BF 0D E8 F9 7D 00      MOVSX ECX,word ptr [0x007df9e8]
006A16D0  99                        CDQ
006A16D1  F7 F9                     IDIV ECX
006A16D3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006A16D6  42                        INC EDX
006A16D7  C1 E2 04                  SHL EDX,0x4
006A16DA  32 D0                     XOR DL,AL
006A16DC  EB 07                     JMP 0x006a16e5
LAB_006a16de:
006A16DE  8A 4E 04                  MOV CL,byte ptr [ESI + 0x4]
006A16E1  8A D0                     MOV DL,AL
006A16E3  32 D1                     XOR DL,CL
LAB_006a16e5:
006A16E5  81 E2 F0 00 00 00         AND EDX,0xf0
006A16EB  33 D0                     XOR EDX,EAX
006A16ED  66 89 16                  MOV word ptr [ESI],DX
LAB_006a16f0:
006A16F0  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006A16F3  8D 70 FF                  LEA ESI,[EAX + -0x1]
006A16F6  2B C3                     SUB EAX,EBX
006A16F8  3B F0                     CMP ESI,EAX
006A16FA  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
006A16FD  7E 4F                     JLE 0x006a174e
LAB_006a16ff:
006A16FF  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006A1702  85 C0                     TEST EAX,EAX
006A1704  74 0F                     JZ 0x006a1715
006A1706  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006A1709  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006A170C  51                        PUSH ECX
006A170D  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006A1710  56                        PUSH ESI
006A1711  52                        PUSH EDX
006A1712  51                        PUSH ECX
006A1713  FF D0                     CALL EAX
LAB_006a1715:
006A1715  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
006A1718  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006A171B  0F AF C6                  IMUL EAX,ESI
006A171E  03 C1                     ADD EAX,ECX
006A1720  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006A1723  0F AF 07                  IMUL EAX,dword ptr [EDI]
006A1726  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006A1729  03 C3                     ADD EAX,EBX
006A172B  8B 19                     MOV EBX,dword ptr [ECX]
006A172D  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
006A1730  8D 44 57 08               LEA EAX,[EDI + EDX*0x2 + 0x8]
006A1734  8B D0                     MOV EDX,EAX
006A1736  89 1A                     MOV dword ptr [EDX],EBX
006A1738  66 8B 49 04               MOV CX,word ptr [ECX + 0x4]
006A173C  66 89 4A 04               MOV word ptr [EDX + 0x4],CX
006A1740  66 81 60 04 FF F0         AND word ptr [EAX + 0x4],0xf0ff
006A1746  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006A1749  4E                        DEC ESI
006A174A  3B F0                     CMP ESI,EAX
006A174C  7F B1                     JG 0x006a16ff
LAB_006a174e:
006A174E  5F                        POP EDI
006A174F  5E                        POP ESI
006A1750  5B                        POP EBX
006A1751  5D                        POP EBP
006A1752  C3                        RET
