FUN_006a17b0:
006A17B0  55                        PUSH EBP
006A17B1  8B EC                     MOV EBP,ESP
006A17B3  83 EC 10                  SUB ESP,0x10
006A17B6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006A17B9  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006A17BC  53                        PUSH EBX
006A17BD  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
006A17C0  56                        PUSH ESI
006A17C1  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006A17C4  57                        PUSH EDI
006A17C5  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006A17C8  56                        PUSH ESI
006A17C9  53                        PUSH EBX
006A17CA  57                        PUSH EDI
006A17CB  50                        PUSH EAX
006A17CC  51                        PUSH ECX
006A17CD  E8 DE 01 D6 FF            CALL 0x004019b0
006A17D2  83 C4 14                  ADD ESP,0x14
006A17D5  85 C0                     TEST EAX,EAX
006A17D7  0F 84 6E 01 00 00         JZ 0x006a194b
006A17DD  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006A17E0  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006A17E3  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006A17E6  52                        PUSH EDX
006A17E7  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006A17EA  50                        PUSH EAX
006A17EB  56                        PUSH ESI
006A17EC  53                        PUSH EBX
006A17ED  57                        PUSH EDI
006A17EE  51                        PUSH ECX
006A17EF  52                        PUSH EDX
006A17F0  E8 34 1F D6 FF            CALL 0x00403729
006A17F5  83 C4 1C                  ADD ESP,0x1c
006A17F8  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
LAB_006a17ff:
006A17FF  B8 2C F8 7D 00            MOV EAX,0x7df82c
006A1804  C7 45 14 00 00 00 00      MOV dword ptr [EBP + 0x14],0x0
006A180B  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_006a180e:
006A180E  8B 70 FC                  MOV ESI,dword ptr [EAX + -0x4]
006A1811  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006A1814  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006A1817  03 F7                     ADD ESI,EDI
006A1819  8B 38                     MOV EDI,dword ptr [EAX]
006A181B  03 FA                     ADD EDI,EDX
006A181D  85 F6                     TEST ESI,ESI
006A181F  0F 8C FE 00 00 00         JL 0x006a1923
006A1825  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006A1828  3B 31                     CMP ESI,dword ptr [ECX]
006A182A  0F 8D F3 00 00 00         JGE 0x006a1923
006A1830  85 FF                     TEST EDI,EDI
006A1832  0F 8C EB 00 00 00         JL 0x006a1923
006A1838  3B 79 04                  CMP EDI,dword ptr [ECX + 0x4]
006A183B  0F 8D E2 00 00 00         JGE 0x006a1923
006A1841  85 DB                     TEST EBX,EBX
006A1843  0F 8C DA 00 00 00         JL 0x006a1923
006A1849  83 FB 06                  CMP EBX,0x6
006A184C  0F 8D D1 00 00 00         JGE 0x006a1923
006A1852  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006A1855  50                        PUSH EAX
006A1856  53                        PUSH EBX
006A1857  57                        PUSH EDI
006A1858  56                        PUSH ESI
006A1859  51                        PUSH ECX
006A185A  E8 51 01 D6 FF            CALL 0x004019b0
006A185F  83 C4 14                  ADD ESP,0x14
006A1862  85 C0                     TEST EAX,EAX
006A1864  0F 84 B6 00 00 00         JZ 0x006a1920
006A186A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006A186D  8D 4D F0                  LEA ECX,[EBP + -0x10]
006A1870  51                        PUSH ECX
006A1871  53                        PUSH EBX
006A1872  57                        PUSH EDI
006A1873  56                        PUSH ESI
006A1874  52                        PUSH EDX
006A1875  E8 D2 28 D6 FF            CALL 0x0040414c
006A187A  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006A187D  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A1880  0F BF C0                  MOVSX EAX,AX
006A1883  51                        PUSH ECX
006A1884  50                        PUSH EAX
006A1885  52                        PUSH EDX
006A1886  8D 45 F0                  LEA EAX,[EBP + -0x10]
006A1889  53                        PUSH EBX
006A188A  50                        PUSH EAX
006A188B  E8 CE 34 D6 FF            CALL 0x00404d5e
006A1890  83 C4 28                  ADD ESP,0x28
006A1893  85 C0                     TEST EAX,EAX
006A1895  0F 84 85 00 00 00         JZ 0x006a1920
006A189B  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006A189E  3D FF 00 00 00            CMP EAX,0xff
006A18A3  74 14                     JZ 0x006a18b9
006A18A5  83 F8 01                  CMP EAX,0x1
006A18A8  75 08                     JNZ 0x006a18b2
006A18AA  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006A18AD  8A 49 02                  MOV CL,byte ptr [ECX + 0x2]
006A18B0  EB 0D                     JMP 0x006a18bf
LAB_006a18b2:
006A18B2  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A18B5  8A 0A                     MOV CL,byte ptr [EDX]
006A18B7  EB 06                     JMP 0x006a18bf
LAB_006a18b9:
006A18B9  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006A18BC  8A 49 04                  MOV CL,byte ptr [ECX + 0x4]
LAB_006a18bf:
006A18BF  83 E1 0F                  AND ECX,0xf
006A18C2  85 C9                     TEST ECX,ECX
006A18C4  0F 8C 8D 00 00 00         JL 0x006a1957
006A18CA  3D FF 00 00 00            CMP EAX,0xff
006A18CF  74 0F                     JZ 0x006a18e0
006A18D1  83 F8 01                  CMP EAX,0x1
006A18D4  75 05                     JNZ 0x006a18db
006A18D6  8B 45 F2                  MOV EAX,dword ptr [EBP + -0xe]
006A18D9  EB 08                     JMP 0x006a18e3
LAB_006a18db:
006A18DB  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006A18DE  EB 03                     JMP 0x006a18e3
LAB_006a18e0:
006A18E0  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
LAB_006a18e3:
006A18E3  83 E0 0F                  AND EAX,0xf
006A18E6  85 C0                     TEST EAX,EAX
006A18E8  7C 6D                     JL 0x006a1957
006A18EA  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006A18ED  8D 04 C2                  LEA EAX,[EDX + EAX*0x8]
006A18F0  66 8B 14 45 98 F8 7D 00   MOV DX,word ptr [EAX*0x2 + 0x7df898]
006A18F8  66 23 14 4D 08 F8 7D 00   AND DX,word ptr [ECX*0x2 + 0x7df808]
006A1900  F6 C6 0F                  TEST DH,0xf
006A1903  74 1B                     JZ 0x006a1920
006A1905  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006A1908  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006A190B  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006A190E  50                        PUSH EAX
006A190F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006A1912  51                        PUSH ECX
006A1913  52                        PUSH EDX
006A1914  53                        PUSH EBX
006A1915  57                        PUSH EDI
006A1916  56                        PUSH ESI
006A1917  50                        PUSH EAX
006A1918  E8 0C 1E D6 FF            CALL 0x00403729
006A191D  83 C4 1C                  ADD ESP,0x1c
LAB_006a1920:
006A1920  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_006a1923:
006A1923  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
006A1926  83 C0 08                  ADD EAX,0x8
006A1929  46                        INC ESI
006A192A  3D 6C F8 7D 00            CMP EAX,0x7df86c
006A192F  89 75 14                  MOV dword ptr [EBP + 0x14],ESI
006A1932  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006A1935  0F 8C D3 FE FF FF         JL 0x006a180e
006A193B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006A193E  40                        INC EAX
006A193F  83 F8 01                  CMP EAX,0x1
006A1942  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006A1945  0F 8C B4 FE FF FF         JL 0x006a17ff
LAB_006a194b:
006A194B  5F                        POP EDI
006A194C  5E                        POP ESI
006A194D  B8 01 00 00 00            MOV EAX,0x1
006A1952  5B                        POP EBX
006A1953  8B E5                     MOV ESP,EBP
006A1955  5D                        POP EBP
006A1956  C3                        RET
LAB_006a1957:
006A1957  5F                        POP EDI
006A1958  5E                        POP ESI
006A1959  33 C0                     XOR EAX,EAX
006A195B  5B                        POP EBX
006A195C  8B E5                     MOV ESP,EBP
006A195E  5D                        POP EBP
006A195F  C3                        RET
