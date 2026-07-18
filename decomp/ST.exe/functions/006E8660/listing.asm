FUN_006e8660:
006E8660  55                        PUSH EBP
006E8661  8B EC                     MOV EBP,ESP
006E8663  51                        PUSH ECX
006E8664  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006E8667  53                        PUSH EBX
006E8668  8B D9                     MOV EBX,ECX
006E866A  56                        PUSH ESI
006E866B  57                        PUSH EDI
006E866C  C7 00 FF FF FF FF         MOV dword ptr [EAX],0xffffffff
006E8672  8B 83 E8 02 00 00         MOV EAX,dword ptr [EBX + 0x2e8]
006E8678  33 FF                     XOR EDI,EDI
006E867A  33 F6                     XOR ESI,ESI
006E867C  3B C7                     CMP EAX,EDI
006E867E  74 41                     JZ 0x006e86c1
006E8680  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
006E8683  8B F0                     MOV ESI,EAX
006E8685  8B 83 EC 02 00 00         MOV EAX,dword ptr [EBX + 0x2ec]
006E868B  89 8B E8 02 00 00         MOV dword ptr [EBX + 0x2e8],ECX
006E8691  3B F0                     CMP ESI,EAX
006E8693  75 0C                     JNZ 0x006e86a1
006E8695  89 BB EC 02 00 00         MOV dword ptr [EBX + 0x2ec],EDI
006E869B  89 BB E8 02 00 00         MOV dword ptr [EBX + 0x2e8],EDI
LAB_006e86a1:
006E86A1  8B 93 1C 03 00 00         MOV EDX,dword ptr [EBX + 0x31c]
006E86A7  8B CE                     MOV ECX,ESI
006E86A9  2B CA                     SUB ECX,EDX
006E86AB  B8 DB 81 B9 76            MOV EAX,0x76b981db
006E86B0  F7 E9                     IMUL ECX
006E86B2  C1 FA 07                  SAR EDX,0x7
006E86B5  8B C2                     MOV EAX,EDX
006E86B7  C1 E8 1F                  SHR EAX,0x1f
006E86BA  03 D0                     ADD EDX,EAX
006E86BC  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006E86BF  EB 09                     JMP 0x006e86ca
LAB_006e86c1:
006E86C1  8B 8B 14 03 00 00         MOV ECX,dword ptr [EBX + 0x314]
006E86C7  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_006e86ca:
006E86CA  8B 8B 14 03 00 00         MOV ECX,dword ptr [EBX + 0x314]
006E86D0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006E86D3  3B C1                     CMP EAX,ECX
006E86D5  0F 8C 8E 00 00 00         JL 0x006e8769
006E86DB  8B 83 18 03 00 00         MOV EAX,dword ptr [EBX + 0x318]
006E86E1  3B C8                     CMP ECX,EAX
006E86E3  7C 5C                     JL 0x006e8741
006E86E5  8D 48 0A                  LEA ECX,[EAX + 0xa]
006E86E8  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
006E86EB  C1 E0 03                  SHL EAX,0x3
006E86EE  2B C1                     SUB EAX,ECX
006E86F0  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
006E86F3  8B 83 1C 03 00 00         MOV EAX,dword ptr [EBX + 0x31c]
006E86F9  C1 E2 02                  SHL EDX,0x2
006E86FC  52                        PUSH EDX
006E86FD  50                        PUSH EAX
006E86FE  E8 4D 48 FC FF            CALL 0x006acf50
006E8703  8B F0                     MOV ESI,EAX
006E8705  3B F7                     CMP ESI,EDI
006E8707  75 0E                     JNZ 0x006e8717
006E8709  5F                        POP EDI
006E870A  5E                        POP ESI
006E870B  B8 FE FF FF FF            MOV EAX,0xfffffffe
006E8710  5B                        POP EBX
006E8711  8B E5                     MOV ESP,EBP
006E8713  5D                        POP EBP
006E8714  C2 20 00                  RET 0x20
LAB_006e8717:
006E8717  8B BB 14 03 00 00         MOV EDI,dword ptr [EBX + 0x314]
006E871D  B9 B2 02 00 00            MOV ECX,0x2b2
006E8722  33 C0                     XOR EAX,EAX
006E8724  89 B3 1C 03 00 00         MOV dword ptr [EBX + 0x31c],ESI
006E872A  8D 14 7F                  LEA EDX,[EDI + EDI*0x2]
006E872D  C1 E2 03                  SHL EDX,0x3
006E8730  2B D7                     SUB EDX,EDI
006E8732  8D 14 52                  LEA EDX,[EDX + EDX*0x2]
006E8735  8D 3C 96                  LEA EDI,[ESI + EDX*0x4]
006E8738  F3 AB                     STOSD.REP ES:EDI
006E873A  83 83 18 03 00 00 0A      ADD dword ptr [EBX + 0x318],0xa
LAB_006e8741:
006E8741  8B 83 14 03 00 00         MOV EAX,dword ptr [EBX + 0x314]
006E8747  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006E874A  8D 48 01                  LEA ECX,[EAX + 0x1]
006E874D  89 8B 14 03 00 00         MOV dword ptr [EBX + 0x314],ECX
006E8753  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
006E8756  C1 E1 03                  SHL ECX,0x3
006E8759  2B C8                     SUB ECX,EAX
006E875B  8B 83 1C 03 00 00         MOV EAX,dword ptr [EBX + 0x31c]
006E8761  8D 14 49                  LEA EDX,[ECX + ECX*0x2]
006E8764  8D 34 90                  LEA ESI,[EAX + EDX*0x4]
006E8767  EB 0B                     JMP 0x006e8774
LAB_006e8769:
006E8769  B9 45 00 00 00            MOV ECX,0x45
006E876E  33 C0                     XOR EAX,EAX
006E8770  8B FE                     MOV EDI,ESI
006E8772  F3 AB                     STOSD.REP ES:EDI
LAB_006e8774:
006E8774  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006E8777  8B 8B 10 03 00 00         MOV ECX,dword ptr [EBX + 0x310]
006E877D  3B C8                     CMP ECX,EAX
006E877F  7F 07                     JG 0x006e8788
006E8781  40                        INC EAX
006E8782  89 83 10 03 00 00         MOV dword ptr [EBX + 0x310],EAX
LAB_006e8788:
006E8788  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006E878B  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006E878E  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006E8791  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
006E8794  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006E8797  89 8E 84 00 00 00         MOV dword ptr [ESI + 0x84],ECX
006E879D  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006E87A0  89 96 88 00 00 00         MOV dword ptr [ESI + 0x88],EDX
006E87A6  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006E87A9  C7 06 00 80 81 00         MOV dword ptr [ESI],0x818000
006E87AF  85 C0                     TEST EAX,EAX
006E87B1  C7 46 08 01 00 00 00      MOV dword ptr [ESI + 0x8],0x1
006E87B8  89 7E 34                  MOV dword ptr [ESI + 0x34],EDI
006E87BB  89 5E 38                  MOV dword ptr [ESI + 0x38],EBX
006E87BE  89 86 94 00 00 00         MOV dword ptr [ESI + 0x94],EAX
006E87C4  89 8E A0 00 00 00         MOV dword ptr [ESI + 0xa0],ECX
006E87CA  89 56 18                  MOV dword ptr [ESI + 0x18],EDX
006E87CD  C7 86 8C 00 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x8c],0xffffffff
006E87D7  7E 21                     JLE 0x006e87fa
006E87D9  C1 E0 02                  SHL EAX,0x2
006E87DC  50                        PUSH EAX
006E87DD  E8 2E 24 FC FF            CALL 0x006aac10
006E87E2  85 C0                     TEST EAX,EAX
006E87E4  89 86 A4 00 00 00         MOV dword ptr [ESI + 0xa4],EAX
006E87EA  75 0E                     JNZ 0x006e87fa
006E87EC  5F                        POP EDI
006E87ED  5E                        POP ESI
006E87EE  B8 FE FF FF FF            MOV EAX,0xfffffffe
006E87F3  5B                        POP EBX
006E87F4  8B E5                     MOV ESP,EBP
006E87F6  5D                        POP EBP
006E87F7  C2 20 00                  RET 0x20
LAB_006e87fa:
006E87FA  85 FF                     TEST EDI,EDI
006E87FC  7E 1E                     JLE 0x006e881c
006E87FE  85 DB                     TEST EBX,EBX
006E8800  7E 1A                     JLE 0x006e881c
006E8802  8B 06                     MOV EAX,dword ptr [ESI]
006E8804  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006E8807  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006E880A  80 CC 10                  OR AH,0x10
006E880D  89 06                     MOV dword ptr [ESI],EAX
006E880F  5F                        POP EDI
006E8810  5E                        POP ESI
006E8811  89 11                     MOV dword ptr [ECX],EDX
006E8813  33 C0                     XOR EAX,EAX
006E8815  5B                        POP EBX
006E8816  8B E5                     MOV ESP,EBP
006E8818  5D                        POP EBP
006E8819  C2 20 00                  RET 0x20
LAB_006e881c:
006E881C  56                        PUSH ESI
006E881D  E8 1E 00 00 00            CALL 0x006e8840
006E8822  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006E8825  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006E8828  5F                        POP EDI
006E8829  5E                        POP ESI
006E882A  89 11                     MOV dword ptr [ECX],EDX
006E882C  33 C0                     XOR EAX,EAX
006E882E  5B                        POP EBX
006E882F  8B E5                     MOV ESP,EBP
006E8831  5D                        POP EBP
006E8832  C2 20 00                  RET 0x20
