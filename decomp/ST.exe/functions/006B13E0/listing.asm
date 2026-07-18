FUN_006b13e0:
006B13E0  55                        PUSH EBP
006B13E1  8B EC                     MOV EBP,ESP
006B13E3  56                        PUSH ESI
006B13E4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B13E7  85 F6                     TEST ESI,ESI
006B13E9  74 71                     JZ 0x006b145c
006B13EB  8B 06                     MOV EAX,dword ptr [ESI]
006B13ED  85 C0                     TEST EAX,EAX
006B13EF  74 6B                     JZ 0x006b145c
006B13F1  F7 40 08 00 00 00 04      TEST dword ptr [EAX + 0x8],0x4000000
006B13F8  74 0C                     JZ 0x006b1406
006B13FA  05 F0 04 00 00            ADD EAX,0x4f0
006B13FF  50                        PUSH EAX
006B1400  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
LAB_006b1406:
006B1406  8B 06                     MOV EAX,dword ptr [ESI]
006B1408  8B 88 B0 04 00 00         MOV ECX,dword ptr [EAX + 0x4b0]
006B140E  85 C9                     TEST ECX,ECX
006B1410  74 1A                     JZ 0x006b142c
006B1412  8B 50 44                  MOV EDX,dword ptr [EAX + 0x44]
006B1415  8B 48 40                  MOV ECX,dword ptr [EAX + 0x40]
006B1418  89 50 40                  MOV dword ptr [EAX + 0x40],EDX
006B141B  8B 06                     MOV EAX,dword ptr [ESI]
006B141D  89 48 44                  MOV dword ptr [EAX + 0x44],ECX
006B1420  8B 0E                     MOV ECX,dword ptr [ESI]
006B1422  C7 81 B0 04 00 00 00 00 00 00  MOV dword ptr [ECX + 0x4b0],0x0
LAB_006b142c:
006B142C  8B 16                     MOV EDX,dword ptr [ESI]
006B142E  8B 42 44                  MOV EAX,dword ptr [EDX + 0x44]
006B1431  85 C0                     TEST EAX,EAX
006B1433  74 0F                     JZ 0x006b1444
006B1435  8B 08                     MOV ECX,dword ptr [EAX]
006B1437  50                        PUSH EAX
006B1438  FF 51 08                  CALL dword ptr [ECX + 0x8]
006B143B  8B 16                     MOV EDX,dword ptr [ESI]
006B143D  C7 42 44 00 00 00 00      MOV dword ptr [EDX + 0x44],0x0
LAB_006b1444:
006B1444  8B 36                     MOV ESI,dword ptr [ESI]
006B1446  F7 46 08 00 00 00 04      TEST dword ptr [ESI + 0x8],0x4000000
006B144D  74 0D                     JZ 0x006b145c
006B144F  81 C6 F0 04 00 00         ADD ESI,0x4f0
006B1455  56                        PUSH ESI
006B1456  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006b145c:
006B145C  5E                        POP ESI
006B145D  5D                        POP EBP
006B145E  C2 04 00                  RET 0x4
