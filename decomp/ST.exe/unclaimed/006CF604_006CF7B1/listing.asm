006CF604  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
006CF607  89 8D 50 FF FF FF         MOV dword ptr [EBP + 0xffffff50],ECX
006CF60D  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
006CF610  89 95 4C FF FF FF         MOV dword ptr [EBP + 0xffffff4c],EDX
006CF616  8B 7D D4                  MOV EDI,dword ptr [EBP + -0x2c]
006CF619  89 BD 48 FF FF FF         MOV dword ptr [EBP + 0xffffff48],EDI
006CF61F  8B 5D D8                  MOV EBX,dword ptr [EBP + -0x28]
006CF622  89 9D 40 FF FF FF         MOV dword ptr [EBP + 0xffffff40],EBX
006CF628  25 FF 00 00 00            AND EAX,0xff
006CF62D  89 85 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],EAX
006CF633  83 F8 02                  CMP EAX,0x2
006CF636  75 5D                     JNZ 0x006cf695
006CF638  53                        PUSH EBX
006CF639  57                        PUSH EDI
006CF63A  52                        PUSH EDX
006CF63B  51                        PUSH ECX
006CF63C  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006CF63F  57                        PUSH EDI
006CF640  E8 EB A8 00 00            CALL 0x006d9f30
006CF645  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
006CF648  85 C0                     TEST EAX,EAX
006CF64A  0F 85 BE 02 00 00         JNZ 0x006cf90e
006CF650  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006CF653  6A 20                     PUSH 0x20
006CF655  8D 55 10                  LEA EDX,[EBP + 0x10]
006CF658  52                        PUSH EDX
006CF659  8D 45 0C                  LEA EAX,[EBP + 0xc]
006CF65C  50                        PUSH EAX
006CF65D  8B 0F                     MOV ECX,dword ptr [EDI]
006CF65F  8B 51 44                  MOV EDX,dword ptr [ECX + 0x44]
006CF662  52                        PUSH EDX
006CF663  E8 D8 C7 FE FF            CALL 0x006bbe40
006CF668  8B D8                     MOV EBX,EAX
006CF66A  89 5D DC                  MOV dword ptr [EBP + -0x24],EBX
006CF66D  85 DB                     TEST EBX,EBX
006CF66F  74 24                     JZ 0x006cf695
006CF671  81 FB C2 01 76 88         CMP EBX,0x887601c2
006CF677  75 14                     JNZ 0x006cf68d
006CF679  8B 07                     MOV EAX,dword ptr [EDI]
006CF67B  50                        PUSH EAX
006CF67C  E8 BF F5 FF FF            CALL 0x006cec40
006CF681  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
006CF684  40                        INC EAX
006CF685  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006CF688  83 F8 02                  CMP EAX,0x2
006CF68B  7C C6                     JL 0x006cf653
006CF68D  85 DB                     TEST EBX,EBX
006CF68F  0F 85 79 02 00 00         JNZ 0x006cf90e
006CF695  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006CF698  8B 11                     MOV EDX,dword ptr [ECX]
006CF69A  83 7A 20 10               CMP dword ptr [EDX + 0x20],0x10
006CF69E  75 1A                     JNZ 0x006cf6ba
006CF6A0  8B 85 4C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff4c]
006CF6A6  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006CF6A9  0F AF C3                  IMUL EAX,EBX
006CF6AC  03 45 0C                  ADD EAX,dword ptr [EBP + 0xc]
006CF6AF  8B 8D 50 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff50]
006CF6B5  8D 04 48                  LEA EAX,[EAX + ECX*0x2]
006CF6B8  EB 17                     JMP 0x006cf6d1
006CF6BA  8B 8D 4C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff4c]
006CF6C0  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006CF6C3  0F AF CB                  IMUL ECX,EBX
006CF6C6  03 8D 50 FF FF FF         ADD ECX,dword ptr [EBP + 0xffffff50]
006CF6CC  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006CF6CF  03 C1                     ADD EAX,ECX
006CF6D1  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
006CF6D4  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006CF6D7  8B 08                     MOV ECX,dword ptr [EAX]
006CF6D9  2B 4D 20                  SUB ECX,dword ptr [EBP + 0x20]
006CF6DC  03 8D 50 FF FF FF         ADD ECX,dword ptr [EBP + 0xffffff50]
006CF6E2  8B 78 04                  MOV EDI,dword ptr [EAX + 0x4]
006CF6E5  2B 7D 24                  SUB EDI,dword ptr [EBP + 0x24]
006CF6E8  03 BD 4C FF FF FF         ADD EDI,dword ptr [EBP + 0xffffff4c]
006CF6EE  8B 85 30 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff30]
006CF6F4  85 C0                     TEST EAX,EAX
006CF6F6  0F 85 C1 00 00 00         JNZ 0x006cf7bd
006CF6FC  C7 45 FC 04 00 00 00      MOV dword ptr [EBP + -0x4],0x4
006CF703  83 7A 20 10               CMP dword ptr [EDX + 0x20],0x10
006CF707  75 53                     JNZ 0x006cf75c
006CF709  8B 56 2C                  MOV EDX,dword ptr [ESI + 0x2c]
006CF70C  2B 56 1C                  SUB EDX,dword ptr [ESI + 0x1c]
006CF70F  03 D7                     ADD EDX,EDI
006CF711  52                        PUSH EDX
006CF712  8B 46 28                  MOV EAX,dword ptr [ESI + 0x28]
006CF715  2B 46 18                  SUB EAX,dword ptr [ESI + 0x18]
006CF718  03 C1                     ADD EAX,ECX
006CF71A  50                        PUSH EAX
006CF71B  8B 86 BC 00 00 00         MOV EAX,dword ptr [ESI + 0xbc]
006CF721  83 C0 07                  ADD EAX,0x7
006CF724  99                        CDQ
006CF725  83 E2 07                  AND EDX,0x7
006CF728  03 C2                     ADD EAX,EDX
006CF72A  C1 F8 03                  SAR EAX,0x3
006CF72D  50                        PUSH EAX
006CF72E  8B 96 B8 00 00 00         MOV EDX,dword ptr [ESI + 0xb8]
006CF734  52                        PUSH EDX
006CF735  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006CF738  50                        PUSH EAX
006CF739  8B 95 40 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff40]
006CF73F  52                        PUSH EDX
006CF740  8B 85 48 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff48]
006CF746  50                        PUSH EAX
006CF747  57                        PUSH EDI
006CF748  51                        PUSH ECX
006CF749  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006CF74C  51                        PUSH ECX
006CF74D  53                        PUSH EBX
006CF74E  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CF751  52                        PUSH EDX
006CF752  E8 A9 3B 00 00            CALL 0x006d3300
006CF757  E9 92 01 00 00            JMP 0x006cf8ee
006CF75C  8B 46 2C                  MOV EAX,dword ptr [ESI + 0x2c]
006CF75F  2B 46 1C                  SUB EAX,dword ptr [ESI + 0x1c]
006CF762  03 C7                     ADD EAX,EDI
006CF764  50                        PUSH EAX
006CF765  8B 56 28                  MOV EDX,dword ptr [ESI + 0x28]
006CF768  2B 56 18                  SUB EDX,dword ptr [ESI + 0x18]
006CF76B  03 D1                     ADD EDX,ECX
006CF76D  52                        PUSH EDX
006CF76E  8B 86 BC 00 00 00         MOV EAX,dword ptr [ESI + 0xbc]
006CF774  83 C0 07                  ADD EAX,0x7
006CF777  99                        CDQ
006CF778  83 E2 07                  AND EDX,0x7
006CF77B  03 C2                     ADD EAX,EDX
006CF77D  C1 F8 03                  SAR EAX,0x3
006CF780  50                        PUSH EAX
006CF781  8B 86 B8 00 00 00         MOV EAX,dword ptr [ESI + 0xb8]
006CF787  50                        PUSH EAX
006CF788  8B 96 B0 00 00 00         MOV EDX,dword ptr [ESI + 0xb0]
006CF78E  52                        PUSH EDX
006CF78F  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
006CF795  50                        PUSH EAX
006CF796  8B 95 48 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff48]
006CF79C  52                        PUSH EDX
006CF79D  57                        PUSH EDI
006CF79E  51                        PUSH ECX
006CF79F  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006CF7A2  50                        PUSH EAX
006CF7A3  53                        PUSH EBX
006CF7A4  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CF7A7  51                        PUSH ECX
006CF7A8  E8 73 30 00 00            CALL 0x006d2820
006CF7AD  E9 3C 01 00 00            JMP 0x006cf8ee
