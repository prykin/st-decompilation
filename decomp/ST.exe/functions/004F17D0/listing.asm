FUN_004f17d0:
004F17D0  55                        PUSH EBP
004F17D1  8B EC                     MOV EBP,ESP
004F17D3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004F17D6  3C 05                     CMP AL,0x5
004F17D8  77 76                     JA 0x004f1850
004F17DA  53                        PUSH EBX
004F17DB  56                        PUSH ESI
004F17DC  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
004F17DF  57                        PUSH EDI
004F17E0  85 F6                     TEST ESI,ESI
004F17E2  0F 94 C2                  SETZ DL
004F17E5  85 F6                     TEST ESI,ESI
004F17E7  88 55 0C                  MOV byte ptr [EBP + 0xc],DL
004F17EA  8D 99 99 0B 00 00         LEA EBX,[ECX + 0xb99]
004F17F0  75 06                     JNZ 0x004f17f8
004F17F2  8D 99 F5 0B 00 00         LEA EBX,[ECX + 0xbf5]
LAB_004f17f8:
004F17F8  8B F0                     MOV ESI,EAX
004F17FA  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004F17FD  25 FF 00 00 00            AND EAX,0xff
004F1802  81 E6 FF 00 00 00         AND ESI,0xff
004F1808  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004F180B  8D 04 46                  LEA EAX,[ESI + EAX*0x2]
004F180E  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004F1811  C1 E2 03                  SHL EDX,0x3
004F1814  2B D0                     SUB EDX,EAX
004F1816  8D 3C 0A                  LEA EDI,[EDX + ECX*0x1]
004F1819  C6 87 80 07 00 00 01      MOV byte ptr [EDI + 0x780],0x1
004F1820  8B 03                     MOV EAX,dword ptr [EBX]
004F1822  8A 4C 1E 09               MOV CL,byte ptr [ESI + EBX*0x1 + 0x9]
004F1826  50                        PUSH EAX
004F1827  51                        PUSH ECX
004F1828  E8 4B 02 F1 FF            CALL 0x00401a78
004F182D  89 87 81 07 00 00         MOV dword ptr [EDI + 0x781],EAX
004F1833  8A 54 1E 09               MOV DL,byte ptr [ESI + EBX*0x1 + 0x9]
004F1837  52                        PUSH EDX
004F1838  E8 E2 1E F1 FF            CALL 0x0040371f
004F183D  83 C4 0C                  ADD ESP,0xc
004F1840  89 87 89 07 00 00         MOV dword ptr [EDI + 0x789],EAX
004F1846  C6 87 8D 07 00 00 03      MOV byte ptr [EDI + 0x78d],0x3
004F184D  5F                        POP EDI
004F184E  5E                        POP ESI
004F184F  5B                        POP EBX
LAB_004f1850:
004F1850  5D                        POP EBP
004F1851  C2 08 00                  RET 0x8
