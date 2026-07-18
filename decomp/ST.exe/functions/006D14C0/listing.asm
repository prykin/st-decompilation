FUN_006d14c0:
006D14C0  55                        PUSH EBP
006D14C1  8B EC                     MOV EBP,ESP
006D14C3  83 EC 14                  SUB ESP,0x14
006D14C6  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006D14C9  53                        PUSH EBX
006D14CA  56                        PUSH ESI
006D14CB  57                        PUSH EDI
006D14CC  85 C9                     TEST ECX,ECX
006D14CE  74 13                     JZ 0x006d14e3
006D14D0  8B 01                     MOV EAX,dword ptr [ECX]
006D14D2  8B 71 04                  MOV ESI,dword ptr [ECX + 0x4]
006D14D5  8B 79 08                  MOV EDI,dword ptr [ECX + 0x8]
006D14D8  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006D14DB  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
006D14DE  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
006D14E1  EB 1A                     JMP 0x006d14fd
LAB_006d14e3:
006D14E3  B8 00 7C 00 00            MOV EAX,0x7c00
006D14E8  BE E0 03 00 00            MOV ESI,0x3e0
006D14ED  C7 45 F4 1F 00 00 00      MOV dword ptr [EBP + -0xc],0x1f
006D14F4  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006D14F7  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
006D14FA  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
LAB_006d14fd:
006D14FD  83 CA FF                  OR EDX,0xffffffff
006D1500  83 CB FF                  OR EBX,0xffffffff
006D1503  83 C9 FF                  OR ECX,0xffffffff
006D1506  3D 00 F8 00 00            CMP EAX,0xf800
006D150B  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006D150E  89 5D 14                  MOV dword ptr [EBP + 0x14],EBX
006D1511  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006D1514  75 04                     JNZ 0x006d151a
006D1516  33 D2                     XOR EDX,EDX
006D1518  EB 0C                     JMP 0x006d1526
LAB_006d151a:
006D151A  3D 00 7C 00 00            CMP EAX,0x7c00
006D151F  75 08                     JNZ 0x006d1529
006D1521  BA 01 00 00 00            MOV EDX,0x1
LAB_006d1526:
006D1526  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_006d1529:
006D1529  81 FE E0 07 00 00         CMP ESI,0x7e0
006D152F  75 07                     JNZ 0x006d1538
006D1531  BB 05 00 00 00            MOV EBX,0x5
006D1536  EB 0D                     JMP 0x006d1545
LAB_006d1538:
006D1538  81 FE E0 03 00 00         CMP ESI,0x3e0
006D153E  75 08                     JNZ 0x006d1548
006D1540  BB 06 00 00 00            MOV EBX,0x6
LAB_006d1545:
006D1545  89 5D 14                  MOV dword ptr [EBP + 0x14],EBX
LAB_006d1548:
006D1548  83 FF 1F                  CMP EDI,0x1f
006D154B  75 08                     JNZ 0x006d1555
006D154D  B9 0B 00 00 00            MOV ECX,0xb
006D1552  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_006d1555:
006D1555  83 FA FF                  CMP EDX,-0x1
006D1558  75 15                     JNZ 0x006d156f
006D155A  33 D2                     XOR EDX,EDX
006D155C  F6 C4 80                  TEST AH,0x80
006D155F  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006D1562  75 0B                     JNZ 0x006d156f
LAB_006d1564:
006D1564  D1 E0                     SHL EAX,0x1
006D1566  42                        INC EDX
006D1567  F6 C4 80                  TEST AH,0x80
006D156A  74 F8                     JZ 0x006d1564
006D156C  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_006d156f:
006D156F  83 FB FF                  CMP EBX,-0x1
006D1572  75 1A                     JNZ 0x006d158e
006D1574  33 DB                     XOR EBX,EBX
006D1576  8B C6                     MOV EAX,ESI
006D1578  F7 C6 00 80 00 00         TEST ESI,0x8000
006D157E  89 5D 14                  MOV dword ptr [EBP + 0x14],EBX
006D1581  75 0B                     JNZ 0x006d158e
LAB_006d1583:
006D1583  D1 E0                     SHL EAX,0x1
006D1585  43                        INC EBX
006D1586  F6 C4 80                  TEST AH,0x80
006D1589  74 F8                     JZ 0x006d1583
006D158B  89 5D 14                  MOV dword ptr [EBP + 0x14],EBX
LAB_006d158e:
006D158E  83 F9 FF                  CMP ECX,-0x1
006D1591  75 1A                     JNZ 0x006d15ad
006D1593  33 C9                     XOR ECX,ECX
006D1595  8B C7                     MOV EAX,EDI
006D1597  F7 C7 00 80 00 00         TEST EDI,0x8000
006D159D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006D15A0  75 0B                     JNZ 0x006d15ad
LAB_006d15a2:
006D15A2  D1 E0                     SHL EAX,0x1
006D15A4  41                        INC ECX
006D15A5  F6 C4 80                  TEST AH,0x80
006D15A8  74 F8                     JZ 0x006d15a2
006D15AA  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_006d15ad:
006D15AD  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006D15B0  85 C0                     TEST EAX,EAX
006D15B2  7E 4F                     JLE 0x006d1603
006D15B4  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006D15B7  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D15BA  8D 72 02                  LEA ESI,[EDX + 0x2]
006D15BD  EB 06                     JMP 0x006d15c5
LAB_006d15bf:
006D15BF  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
006D15C2  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
LAB_006d15c5:
006D15C5  33 D2                     XOR EDX,EDX
006D15C7  83 C7 02                  ADD EDI,0x2
006D15CA  8A 76 FE                  MOV DH,byte ptr [ESI + -0x2]
006D15CD  83 C6 04                  ADD ESI,0x4
006D15D0  D3 FA                     SAR EDX,CL
006D15D2  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006D15D5  23 D1                     AND EDX,ECX
006D15D7  8B CB                     MOV ECX,EBX
006D15D9  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
006D15DC  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
006D15DF  33 D2                     XOR EDX,EDX
006D15E1  8A 76 FB                  MOV DH,byte ptr [ESI + -0x5]
006D15E4  D3 FA                     SAR EDX,CL
006D15E6  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006D15E9  23 D3                     AND EDX,EBX
006D15EB  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006D15EE  0B DA                     OR EBX,EDX
006D15F0  33 D2                     XOR EDX,EDX
006D15F2  8A 76 FC                  MOV DH,byte ptr [ESI + -0x4]
006D15F5  D3 FA                     SAR EDX,CL
006D15F7  23 55 EC                  AND EDX,dword ptr [EBP + -0x14]
006D15FA  0B DA                     OR EBX,EDX
006D15FC  48                        DEC EAX
006D15FD  66 89 5F FE               MOV word ptr [EDI + -0x2],BX
006D1601  75 BC                     JNZ 0x006d15bf
LAB_006d1603:
006D1603  5F                        POP EDI
006D1604  5E                        POP ESI
006D1605  5B                        POP EBX
006D1606  8B E5                     MOV ESP,EBP
006D1608  5D                        POP EBP
006D1609  C2 10 00                  RET 0x10
