STManBasisC::sub_005F14B0:
005F14B0  55                        PUSH EBP
005F14B1  8B EC                     MOV EBP,ESP
005F14B3  83 EC 1C                  SUB ESP,0x1c
005F14B6  53                        PUSH EBX
005F14B7  8B D9                     MOV EBX,ECX
005F14B9  56                        PUSH ESI
005F14BA  83 CE FF                  OR ESI,0xffffffff
005F14BD  8B 43 38                  MOV EAX,dword ptr [EBX + 0x38]
005F14C0  85 C0                     TEST EAX,EAX
005F14C2  75 18                     JNZ 0x005f14dc
005F14C4  6A 0A                     PUSH 0xa
005F14C6  6A 19                     PUSH 0x19
005F14C8  6A 0A                     PUSH 0xa
005F14CA  6A 00                     PUSH 0x0
005F14CC  E8 BF CD 0B 00            CALL 0x006ae290
005F14D1  85 C0                     TEST EAX,EAX
005F14D3  89 43 38                  MOV dword ptr [EBX + 0x38],EAX
005F14D6  0F 84 B6 00 00 00         JZ 0x005f1592
LAB_005f14dc:
005F14DC  57                        PUSH EDI
005F14DD  B9 06 00 00 00            MOV ECX,0x6
005F14E2  33 C0                     XOR EAX,EAX
005F14E4  8D 7D E4                  LEA EDI,[EBP + -0x1c]
005F14E7  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
005F14EA  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
005F14ED  F3 AB                     STOSD.REP ES:EDI
005F14EF  AA                        STOSB ES:EDI
005F14F0  66 89 75 E8               MOV word ptr [EBP + -0x18],SI
005F14F4  8D 34 B6                  LEA ESI,[ESI + ESI*0x4]
005F14F7  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005F14FA  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005F14FD  8D 34 B6                  LEA ESI,[ESI + ESI*0x4]
005F1500  66 89 4D E6               MOV word ptr [EBP + -0x1a],CX
005F1504  66 8B 7D 18               MOV DI,word ptr [EBP + 0x18]
005F1508  66 89 45 E4               MOV word ptr [EBP + -0x1c],AX
005F150C  8D 34 F5 64 00 00 00      LEA ESI,[ESI*0x8 + 0x64]
005F1513  66 89 7D EB               MOV word ptr [EBP + -0x15],DI
005F1517  0F BF F6                  MOVSX ESI,SI
005F151A  56                        PUSH ESI
005F151B  8D 34 89                  LEA ESI,[ECX + ECX*0x4]
005F151E  8B 3D 88 17 81 00         MOV EDI,dword ptr [0x00811788]
005F1524  88 55 EA                  MOV byte ptr [EBP + -0x16],DL
005F1527  8D 34 B6                  LEA ESI,[ESI + ESI*0x4]
005F152A  89 7D F5                  MOV dword ptr [EBP + -0xb],EDI
005F152D  8B 3D 38 2A 80 00         MOV EDI,dword ptr [0x00802a38]
005F1533  81 E2 FF 00 00 00         AND EDX,0xff
005F1539  8D 4C F1 64               LEA ECX,[ECX + ESI*0x8 + 0x64]
005F153D  0F BF C9                  MOVSX ECX,CX
005F1540  51                        PUSH ECX
005F1541  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
005F1544  8B BF E4 00 00 00         MOV EDI,dword ptr [EDI + 0xe4]
005F154A  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
005F154D  89 7D ED                  MOV dword ptr [EBP + -0x13],EDI
005F1550  8D 44 C8 64               LEA EAX,[EAX + ECX*0x8 + 0x64]
005F1554  0F BF C8                  MOVSX ECX,AX
005F1557  0F BF 45 18               MOVSX EAX,word ptr [EBP + 0x18]
005F155B  51                        PUSH ECX
005F155C  50                        PUSH EAX
005F155D  52                        PUSH EDX
005F155E  8B CB                     MOV ECX,EBX
005F1560  E8 FA 1D E1 FF            CALL 0x0040335f
005F1565  85 C0                     TEST EAX,EAX
005F1567  89 45 F1                  MOV dword ptr [EBP + -0xf],EAX
005F156A  5F                        POP EDI
005F156B  74 2F                     JZ 0x005f159c
005F156D  8B 53 38                  MOV EDX,dword ptr [EBX + 0x38]
005F1570  8D 4D E4                  LEA ECX,[EBP + -0x1c]
005F1573  51                        PUSH ECX
005F1574  52                        PUSH EDX
005F1575  E8 46 CC 0B 00            CALL 0x006ae1c0
005F157A  40                        INC EAX
005F157B  78 22                     JS 0x005f159f
005F157D  8B 0D 88 17 81 00         MOV ECX,dword ptr [0x00811788]
005F1583  5E                        POP ESI
005F1584  41                        INC ECX
005F1585  5B                        POP EBX
005F1586  89 0D 88 17 81 00         MOV dword ptr [0x00811788],ECX
005F158C  8B E5                     MOV ESP,EBP
005F158E  5D                        POP EBP
005F158F  C2 14 00                  RET 0x14
LAB_005f1592:
005F1592  8B C6                     MOV EAX,ESI
005F1594  5E                        POP ESI
005F1595  5B                        POP EBX
005F1596  8B E5                     MOV ESP,EBP
005F1598  5D                        POP EBP
005F1599  C2 14 00                  RET 0x14
LAB_005f159c:
005F159C  83 C8 FF                  OR EAX,0xffffffff
LAB_005f159f:
005F159F  5E                        POP ESI
005F15A0  5B                        POP EBX
005F15A1  8B E5                     MOV ESP,EBP
005F15A3  5D                        POP EBP
005F15A4  C2 14 00                  RET 0x14
