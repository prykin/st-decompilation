FUN_005f1700:
005F1700  55                        PUSH EBP
005F1701  8B EC                     MOV EBP,ESP
005F1703  83 EC 58                  SUB ESP,0x58
005F1706  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005F1709  53                        PUSH EBX
005F170A  56                        PUSH ESI
005F170B  83 F8 01                  CMP EAX,0x1
005F170E  57                        PUSH EDI
005F170F  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
005F1712  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
005F1719  75 0F                     JNZ 0x005f172a
005F171B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005F171E  8B 0C 85 34 E5 7C 00      MOV ECX,dword ptr [EAX*0x4 + 0x7ce534]
005F1725  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005F1728  EB 0D                     JMP 0x005f1737
LAB_005f172a:
005F172A  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
005F172D  8B 04 95 30 E5 7C 00      MOV EAX,dword ptr [EDX*0x4 + 0x7ce530]
005F1734  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_005f1737:
005F1737  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
005F173D  8D 45 AC                  LEA EAX,[EBP + -0x54]
005F1740  8D 55 A8                  LEA EDX,[EBP + -0x58]
005F1743  6A 00                     PUSH 0x0
005F1745  50                        PUSH EAX
005F1746  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
005F1749  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005F174F  E8 9C C0 13 00            CALL 0x0072d7f0
005F1754  83 C4 08                  ADD ESP,0x8
005F1757  85 C0                     TEST EAX,EAX
005F1759  0F 85 9C 01 00 00         JNZ 0x005f18fb
005F175F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005F1762  8B 15 74 67 80 00         MOV EDX,dword ptr [0x00806774]
005F1768  50                        PUSH EAX
005F1769  50                        PUSH EAX
005F176A  6A 01                     PUSH 0x1
005F176C  50                        PUSH EAX
005F176D  6A FF                     PUSH -0x1
005F176F  51                        PUSH ECX
005F1770  6A 1D                     PUSH 0x1d
005F1772  52                        PUSH EDX
005F1773  E8 78 83 11 00            CALL 0x00709af0
005F1778  8B F8                     MOV EDI,EAX
005F177A  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
005F177D  83 C4 20                  ADD ESP,0x20
005F1780  85 C0                     TEST EAX,EAX
005F1782  0F 85 4A 01 00 00         JNZ 0x005f18d2
005F1788  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
005F178B  85 C9                     TEST ECX,ECX
005F178D  0F 8C 53 01 00 00         JL 0x005f18e6
005F1793  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
005F1796  8B 40 3C                  MOV EAX,dword ptr [EAX + 0x3c]
005F1799  3B 48 0C                  CMP ECX,dword ptr [EAX + 0xc]
005F179C  73 0B                     JNC 0x005f17a9
005F179E  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
005F17A1  0F AF F1                  IMUL ESI,ECX
005F17A4  03 70 1C                  ADD ESI,dword ptr [EAX + 0x1c]
005F17A7  EB 02                     JMP 0x005f17ab
LAB_005f17a9:
005F17A9  33 F6                     XOR ESI,ESI
LAB_005f17ab:
005F17AB  85 F6                     TEST ESI,ESI
005F17AD  0F 84 33 01 00 00         JZ 0x005f18e6
005F17B3  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
005F17B6  6A 00                     PUSH 0x0
005F17B8  85 DB                     TEST EBX,EBX
005F17BA  75 06                     JNZ 0x005f17c2
005F17BC  6A 45                     PUSH 0x45
005F17BE  6A 5A                     PUSH 0x5a
005F17C0  EB 04                     JMP 0x005f17c6
LAB_005f17c2:
005F17C2  6A 64                     PUSH 0x64
005F17C4  6A 78                     PUSH 0x78
LAB_005f17c6:
005F17C6  8B 4F 0D                  MOV ECX,dword ptr [EDI + 0xd]
005F17C9  8B 57 09                  MOV EDX,dword ptr [EDI + 0x9]
005F17CC  51                        PUSH ECX
005F17CD  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005F17D3  52                        PUSH EDX
005F17D4  6A 00                     PUSH 0x0
005F17D6  8D 45 FC                  LEA EAX,[EBP + -0x4]
005F17D9  6A 01                     PUSH 0x1
005F17DB  50                        PUSH EAX
005F17DC  E8 7F 6E 0F 00            CALL 0x006e8660
005F17E1  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005F17E4  6A 01                     PUSH 0x1
005F17E6  89 4E 18                  MOV dword ptr [ESI + 0x18],ECX
005F17E9  8B 57 21                  MOV EDX,dword ptr [EDI + 0x21]
005F17EC  8B 07                     MOV EAX,dword ptr [EDI]
005F17EE  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005F17F1  52                        PUSH EDX
005F17F2  50                        PUSH EAX
005F17F3  6A 00                     PUSH 0x0
005F17F5  51                        PUSH ECX
005F17F6  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005F17FC  E8 DF 80 0F 00            CALL 0x006e98e0
005F1801  8B 56 0E                  MOV EDX,dword ptr [ESI + 0xe]
005F1804  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005F1807  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005F180D  52                        PUSH EDX
005F180E  6A 00                     PUSH 0x0
005F1810  50                        PUSH EAX
005F1811  E8 5A 8A 0F 00            CALL 0x006ea270
005F1816  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005F1819  6A FF                     PUSH -0x1
005F181B  51                        PUSH ECX
005F181C  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005F1822  E8 B9 8B 0F 00            CALL 0x006ea3e0
005F1827  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005F182A  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005F1830  68 CD CC DC 40            PUSH 0x40dccccd
005F1835  6A 00                     PUSH 0x0
005F1837  6A 00                     PUSH 0x0
005F1839  6A 00                     PUSH 0x0
005F183B  52                        PUSH EDX
005F183C  E8 CF 79 0F 00            CALL 0x006e9210
005F1841  DB 45 1C                  FILD dword ptr [EBP + 0x1c]
005F1844  51                        PUSH ECX
005F1845  85 DB                     TEST EBX,EBX
005F1847  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
005F184D  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
005F1853  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
005F1859  D9 1C 24                  FSTP float ptr [ESP]
005F185C  75 18                     JNZ 0x005f1876
005F185E  DB 45 18                  FILD dword ptr [EBP + 0x18]
005F1861  51                        PUSH ECX
005F1862  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
005F1868  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
005F186E  D9 1C 24                  FSTP float ptr [ESP]
005F1871  DB 45 14                  FILD dword ptr [EBP + 0x14]
005F1874  EB 28                     JMP 0x005f189e
LAB_005f1876:
005F1876  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
005F1879  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
005F187C  83 C1 64                  ADD ECX,0x64
005F187F  83 C2 64                  ADD EDX,0x64
005F1882  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
005F1885  51                        PUSH ECX
005F1886  DB 45 EC                  FILD dword ptr [EBP + -0x14]
005F1889  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
005F188C  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
005F1892  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
005F1898  D9 1C 24                  FSTP float ptr [ESP]
005F189B  DB 45 EC                  FILD dword ptr [EBP + -0x14]
LAB_005f189e:
005F189E  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
005F18A4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005F18A7  51                        PUSH ECX
005F18A8  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005F18AE  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
005F18B4  D9 1C 24                  FSTP float ptr [ESP]
005F18B7  50                        PUSH EAX
005F18B8  E8 A3 90 0F 00            CALL 0x006ea960
005F18BD  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005F18C0  6A 00                     PUSH 0x0
005F18C2  51                        PUSH ECX
005F18C3  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005F18C9  E8 D2 91 0F 00            CALL 0x006eaaa0
005F18CE  C6 46 06 01               MOV byte ptr [ESI + 0x6],0x1
LAB_005f18d2:
005F18D2  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
005F18D5  8B C7                     MOV EAX,EDI
005F18D7  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005F18DD  5F                        POP EDI
005F18DE  5E                        POP ESI
005F18DF  5B                        POP EBX
005F18E0  8B E5                     MOV ESP,EBP
005F18E2  5D                        POP EBP
005F18E3  C2 1C 00                  RET 0x1c
LAB_005f18e6:
005F18E6  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
005F18E9  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005F18EC  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005F18F2  5F                        POP EDI
005F18F3  5E                        POP ESI
005F18F4  5B                        POP EBX
005F18F5  8B E5                     MOV ESP,EBP
005F18F7  5D                        POP EBP
005F18F8  C2 1C 00                  RET 0x1c
LAB_005f18fb:
005F18FB  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
005F18FE  5F                        POP EDI
005F18FF  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005F1904  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005F1907  5E                        POP ESI
005F1908  5B                        POP EBX
005F1909  8B E5                     MOV ESP,EBP
005F190B  5D                        POP EBP
005F190C  C2 1C 00                  RET 0x1c
