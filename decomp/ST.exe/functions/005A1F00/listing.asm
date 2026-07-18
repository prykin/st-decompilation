FUN_005a1f00:
005A1F00  55                        PUSH EBP
005A1F01  8B EC                     MOV EBP,ESP
005A1F03  83 EC 58                  SUB ESP,0x58
005A1F06  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
005A1F09  53                        PUSH EBX
005A1F0A  56                        PUSH ESI
005A1F0B  57                        PUSH EDI
005A1F0C  85 C0                     TEST EAX,EAX
005A1F0E  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
005A1F11  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
005A1F18  0F 84 67 03 00 00         JZ 0x005a2285
005A1F1E  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005A1F21  85 C0                     TEST EAX,EAX
005A1F23  0F 84 5C 03 00 00         JZ 0x005a2285
005A1F29  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005A1F2E  8D 55 AC                  LEA EDX,[EBP + -0x54]
005A1F31  8D 4D A8                  LEA ECX,[EBP + -0x58]
005A1F34  6A 00                     PUSH 0x0
005A1F36  52                        PUSH EDX
005A1F37  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
005A1F3A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005A1F40  E8 AB B8 18 00            CALL 0x0072d7f0
005A1F45  8B F0                     MOV ESI,EAX
005A1F47  83 C4 08                  ADD ESP,0x8
005A1F4A  85 F6                     TEST ESI,ESI
005A1F4C  0F 85 F5 02 00 00         JNZ 0x005a2247
005A1F52  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
005A1F55  83 C9 FF                  OR ECX,0xffffffff
005A1F58  8B FB                     MOV EDI,EBX
005A1F5A  F2 AE                     SCASB.REPNE ES:EDI
005A1F5C  F7 D1                     NOT ECX
005A1F5E  49                        DEC ECX
005A1F5F  0F 84 BF 00 00 00         JZ 0x005a2024
005A1F65  8B FB                     MOV EDI,EBX
005A1F67  83 C9 FF                  OR ECX,0xffffffff
005A1F6A  F2 AE                     SCASB.REPNE ES:EDI
005A1F6C  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
005A1F6F  F7 D1                     NOT ECX
005A1F71  49                        DEC ECX
005A1F72  8B D1                     MOV EDX,ECX
005A1F74  83 C9 FF                  OR ECX,0xffffffff
005A1F77  F2 AE                     SCASB.REPNE ES:EDI
005A1F79  F7 D1                     NOT ECX
005A1F7B  49                        DEC ECX
005A1F7C  8D 44 0A 0E               LEA EAX,[EDX + ECX*0x1 + 0xe]
005A1F80  50                        PUSH EAX
005A1F81  E8 8A 8C 10 00            CALL 0x006aac10
005A1F86  8B F8                     MOV EDI,EAX
005A1F88  85 FF                     TEST EDI,EDI
005A1F8A  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
005A1F8D  0F 84 A2 02 00 00         JZ 0x005a2235
005A1F93  BE 1D 7E 80 00            MOV ESI,0x807e1d
005A1F98  8B CB                     MOV ECX,EBX
LAB_005a1f9a:
005A1F9A  8A 11                     MOV DL,byte ptr [ECX]
005A1F9C  8A C2                     MOV AL,DL
005A1F9E  3A 16                     CMP DL,byte ptr [ESI]
005A1FA0  75 1C                     JNZ 0x005a1fbe
005A1FA2  84 C0                     TEST AL,AL
005A1FA4  74 14                     JZ 0x005a1fba
005A1FA6  8A 51 01                  MOV DL,byte ptr [ECX + 0x1]
005A1FA9  8A C2                     MOV AL,DL
005A1FAB  3A 56 01                  CMP DL,byte ptr [ESI + 0x1]
005A1FAE  75 0E                     JNZ 0x005a1fbe
005A1FB0  83 C1 02                  ADD ECX,0x2
005A1FB3  83 C6 02                  ADD ESI,0x2
005A1FB6  84 C0                     TEST AL,AL
005A1FB8  75 E0                     JNZ 0x005a1f9a
LAB_005a1fba:
005A1FBA  33 C0                     XOR EAX,EAX
005A1FBC  EB 05                     JMP 0x005a1fc3
LAB_005a1fbe:
005A1FBE  1B C0                     SBB EAX,EAX
005A1FC0  83 D8 FF                  SBB EAX,-0x1
LAB_005a1fc3:
005A1FC3  85 C0                     TEST EAX,EAX
005A1FC5  75 2A                     JNZ 0x005a1ff1
005A1FC7  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005A1FCA  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
005A1FCD  81 E1 FF 00 00 00         AND ECX,0xff
005A1FD3  50                        PUSH EAX
005A1FD4  51                        PUSH ECX
005A1FD5  68 F0 6F 7C 00            PUSH 0x7c6ff0
005A1FDA  53                        PUSH EBX
005A1FDB  68 F0 6F 7C 00            PUSH 0x7c6ff0
005A1FE0  68 A0 C4 7C 00            PUSH 0x7cc4a0
005A1FE5  57                        PUSH EDI
005A1FE6  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005A1FEC  83 C4 1C                  ADD ESP,0x1c
005A1FEF  EB 76                     JMP 0x005a2067
LAB_005a1ff1:
005A1FF1  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005A1FF4  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
005A1FF7  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
005A1FFA  25 FF 00 00 00            AND EAX,0xff
005A1FFF  52                        PUSH EDX
005A2000  50                        PUSH EAX
005A2001  68 F0 6F 7C 00            PUSH 0x7c6ff0
005A2006  81 E1 FF 00 00 00         AND ECX,0xff
005A200C  53                        PUSH EBX
005A200D  51                        PUSH ECX
005A200E  68 F0 6F 7C 00            PUSH 0x7c6ff0
005A2013  68 8C C4 7C 00            PUSH 0x7cc48c
005A2018  57                        PUSH EDI
005A2019  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005A201F  83 C4 20                  ADD ESP,0x20
005A2022  EB 43                     JMP 0x005a2067
LAB_005a2024:
005A2024  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
005A2027  83 C9 FF                  OR ECX,0xffffffff
005A202A  8B FE                     MOV EDI,ESI
005A202C  33 C0                     XOR EAX,EAX
005A202E  F2 AE                     SCASB.REPNE ES:EDI
005A2030  F7 D1                     NOT ECX
005A2032  83 C1 04                  ADD ECX,0x4
005A2035  51                        PUSH ECX
005A2036  E8 D5 8B 10 00            CALL 0x006aac10
005A203B  8B F8                     MOV EDI,EAX
005A203D  85 FF                     TEST EDI,EDI
005A203F  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
005A2042  0F 84 ED 01 00 00         JZ 0x005a2235
005A2048  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005A204B  56                        PUSH ESI
005A204C  81 E2 FF 00 00 00         AND EDX,0xff
005A2052  52                        PUSH EDX
005A2053  68 F0 6F 7C 00            PUSH 0x7c6ff0
005A2058  68 E4 6F 7C 00            PUSH 0x7c6fe4
005A205D  57                        PUSH EDI
005A205E  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005A2064  83 C4 14                  ADD ESP,0x14
LAB_005a2067:
005A2067  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
005A206A  85 FF                     TEST EDI,EDI
005A206C  0F 84 C3 01 00 00         JZ 0x005a2235
005A2072  6A 0A                     PUSH 0xa
005A2074  57                        PUSH EDI
005A2075  E8 E6 C4 18 00            CALL 0x0072e560
005A207A  83 C4 08                  ADD ESP,0x8
005A207D  85 C0                     TEST EAX,EAX
005A207F  74 12                     JZ 0x005a2093
LAB_005a2081:
005A2081  6A 0A                     PUSH 0xa
005A2083  50                        PUSH EAX
005A2084  C6 00 20                  MOV byte ptr [EAX],0x20
005A2087  E8 D4 C4 18 00            CALL 0x0072e560
005A208C  83 C4 08                  ADD ESP,0x8
005A208F  85 C0                     TEST EAX,EAX
005A2091  75 EE                     JNZ 0x005a2081
LAB_005a2093:
005A2093  6A 0A                     PUSH 0xa
005A2095  6A 01                     PUSH 0x1
005A2097  6A 00                     PUSH 0x0
005A2099  E8 52 34 11 00            CALL 0x006b54f0
005A209E  8B D8                     MOV EBX,EAX
005A20A0  85 DB                     TEST EBX,EBX
005A20A2  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
005A20A5  0F 84 81 01 00 00         JZ 0x005a222c
005A20AB  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005A20AE  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
005A20B5  50                        PUSH EAX
005A20B6  53                        PUSH EBX
005A20B7  C6 45 FF 00               MOV byte ptr [EBP + -0x1],0x0
005A20BB  E8 E0 39 11 00            CALL 0x006b5aa0
005A20C0  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
005A20C3  B9 A6 01 00 00            MOV ECX,0x1a6
005A20C8  6A 01                     PUSH 0x1
005A20CA  6A FF                     PUSH -0x1
005A20CC  8B 86 4C 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b4c]
005A20D2  6A 00                     PUSH 0x0
005A20D4  2B C8                     SUB ECX,EAX
005A20D6  51                        PUSH ECX
005A20D7  8B 8E 77 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a77]
005A20DD  68 D8 21 7C 00            PUSH 0x7c21d8
005A20E2  53                        PUSH EBX
005A20E3  E8 08 01 17 00            CALL 0x007121f0
005A20E8  8B F8                     MOV EDI,EAX
005A20EA  8A 86 5F 1A 00 00         MOV AL,byte ptr [ESI + 0x1a5f]
005A20F0  3C 06                     CMP AL,0x6
005A20F2  75 38                     JNZ 0x005a212c
005A20F4  8B 86 14 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b14]
005A20FA  8D 56 1D                  LEA EDX,[ESI + 0x1d]
005A20FD  52                        PUSH EDX
005A20FE  50                        PUSH EAX
005A20FF  6A 02                     PUSH 0x2
005A2101  8B CE                     MOV ECX,ESI
005A2103  C7 46 2D 26 00 00 00      MOV dword ptr [ESI + 0x2d],0x26
005A210A  E8 71 3F 14 00            CALL 0x006e6080
005A210F  8B 8E 9E 1E 00 00         MOV ECX,dword ptr [ESI + 0x1e9e]
005A2115  33 C0                     XOR EAX,EAX
005A2117  66 8B 46 33               MOV AX,word ptr [ESI + 0x33]
005A211B  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
005A211E  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005A2121  83 EA 19                  SUB EDX,0x19
005A2124  3B C2                     CMP EAX,EDX
005A2126  7C 04                     JL 0x005a212c
005A2128  C6 45 FF 01               MOV byte ptr [EBP + -0x1],0x1
LAB_005a212c:
005A212C  85 FF                     TEST EDI,EDI
005A212E  74 76                     JZ 0x005a21a6
005A2130  8B 8E 77 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a77]
005A2136  57                        PUSH EDI
005A2137  57                        PUSH EDI
005A2138  E8 93 08 17 00            CALL 0x007129d0
005A213D  8B 86 9E 1E 00 00         MOV EAX,dword ptr [ESI + 0x1e9e]
005A2143  8B 5F 08                  MOV EBX,dword ptr [EDI + 0x8]
005A2146  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005A2149  03 CB                     ADD ECX,EBX
005A214B  81 F9 F4 01 00 00         CMP ECX,0x1f4
005A2151  7C 1E                     JL 0x005a2171
LAB_005a2153:
005A2153  6A 00                     PUSH 0x0
005A2155  50                        PUSH EAX
005A2156  E8 D5 56 11 00            CALL 0x006b7830
005A215B  8B 86 9E 1E 00 00         MOV EAX,dword ptr [ESI + 0x1e9e]
005A2161  8B 5F 08                  MOV EBX,dword ptr [EDI + 0x8]
005A2164  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
005A2167  03 D3                     ADD EDX,EBX
005A2169  81 FA F4 01 00 00         CMP EDX,0x1f4
005A216F  7D E2                     JGE 0x005a2153
LAB_005a2171:
005A2171  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
005A2174  33 DB                     XOR EBX,EBX
005A2176  85 C0                     TEST EAX,EAX
005A2178  7E 23                     JLE 0x005a219d
005A217A  3B D8                     CMP EBX,EAX
005A217C  7D 08                     JGE 0x005a2186
LAB_005a217e:
005A217E  8B 47 14                  MOV EAX,dword ptr [EDI + 0x14]
005A2181  8B 04 98                  MOV EAX,dword ptr [EAX + EBX*0x4]
005A2184  EB 02                     JMP 0x005a2188
LAB_005a2186:
005A2186  33 C0                     XOR EAX,EAX
LAB_005a2188:
005A2188  8B 8E 9E 1E 00 00         MOV ECX,dword ptr [ESI + 0x1e9e]
005A218E  50                        PUSH EAX
005A218F  51                        PUSH ECX
005A2190  E8 0B 39 11 00            CALL 0x006b5aa0
005A2195  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
005A2198  43                        INC EBX
005A2199  3B D8                     CMP EBX,EAX
005A219B  7C E1                     JL 0x005a217e
LAB_005a219d:
005A219D  57                        PUSH EDI
005A219E  E8 CD 33 11 00            CALL 0x006b5570
005A21A3  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
LAB_005a21a6:
005A21A6  53                        PUSH EBX
005A21A7  E8 C4 33 11 00            CALL 0x006b5570
005A21AC  80 BE 5F 1A 00 00 06      CMP byte ptr [ESI + 0x1a5f],0x6
005A21B3  75 77                     JNZ 0x005a222c
005A21B5  8B 96 9E 1E 00 00         MOV EDX,dword ptr [ESI + 0x1e9e]
005A21BB  8B 8E 14 1B 00 00         MOV ECX,dword ptr [ESI + 0x1b14]
005A21C1  8D 7E 1D                  LEA EDI,[ESI + 0x1d]
005A21C4  C7 46 2D 28 00 00 00      MOV dword ptr [ESI + 0x2d],0x28
005A21CB  66 C7 46 31 01 00         MOV word ptr [ESI + 0x31],0x1
005A21D1  66 8B 42 08               MOV AX,word ptr [EDX + 0x8]
005A21D5  57                        PUSH EDI
005A21D6  51                        PUSH ECX
005A21D7  6A 02                     PUSH 0x2
005A21D9  8B CE                     MOV ECX,ESI
005A21DB  66 89 46 33               MOV word ptr [ESI + 0x33],AX
005A21DF  E8 9C 3E 14 00            CALL 0x006e6080
005A21E4  8A 45 FF                  MOV AL,byte ptr [EBP + -0x1]
005A21E7  C7 46 2D 22 00 00 00      MOV dword ptr [ESI + 0x2d],0x22
005A21EE  84 C0                     TEST AL,AL
005A21F0  66 C7 46 31 00 00         MOV word ptr [ESI + 0x31],0x0
005A21F6  74 17                     JZ 0x005a220f
005A21F8  8B 96 9E 1E 00 00         MOV EDX,dword ptr [ESI + 0x1e9e]
005A21FE  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
005A2201  83 F8 19                  CMP EAX,0x19
005A2204  7D 04                     JGE 0x005a220a
005A2206  33 C0                     XOR EAX,EAX
005A2208  EB 0D                     JMP 0x005a2217
LAB_005a220a:
005A220A  83 C0 E7                  ADD EAX,-0x19
005A220D  EB 08                     JMP 0x005a2217
LAB_005a220f:
005A220F  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005A2212  25 FF FF 00 00            AND EAX,0xffff
LAB_005a2217:
005A2217  66 89 46 33               MOV word ptr [ESI + 0x33],AX
005A221B  8B 86 14 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b14]
005A2221  57                        PUSH EDI
005A2222  50                        PUSH EAX
005A2223  6A 02                     PUSH 0x2
005A2225  8B CE                     MOV ECX,ESI
005A2227  E8 54 3E 14 00            CALL 0x006e6080
LAB_005a222c:
005A222C  8D 4D F8                  LEA ECX,[EBP + -0x8]
005A222F  51                        PUSH ECX
005A2230  E8 2B 8E 10 00            CALL 0x006ab060
LAB_005a2235:
005A2235  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
005A2238  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005A223E  5F                        POP EDI
005A223F  5E                        POP ESI
005A2240  5B                        POP EBX
005A2241  8B E5                     MOV ESP,EBP
005A2243  5D                        POP EBP
005A2244  C2 10 00                  RET 0x10
LAB_005a2247:
005A2247  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
005A224A  68 74 C4 7C 00            PUSH 0x7cc474
005A224F  68 CC 4C 7A 00            PUSH 0x7a4ccc
005A2254  56                        PUSH ESI
005A2255  6A 00                     PUSH 0x0
005A2257  68 EC 09 00 00            PUSH 0x9ec
005A225C  68 70 BF 7C 00            PUSH 0x7cbf70
005A2261  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005A2266  E8 65 B2 10 00            CALL 0x006ad4d0
005A226B  83 C4 18                  ADD ESP,0x18
005A226E  85 C0                     TEST EAX,EAX
005A2270  74 01                     JZ 0x005a2273
005A2272  CC                        INT3
LAB_005a2273:
005A2273  68 EC 09 00 00            PUSH 0x9ec
005A2278  68 70 BF 7C 00            PUSH 0x7cbf70
005A227D  6A 00                     PUSH 0x0
005A227F  56                        PUSH ESI
005A2280  E8 BB 3B 10 00            CALL 0x006a5e40
LAB_005a2285:
005A2285  5F                        POP EDI
005A2286  5E                        POP ESI
005A2287  5B                        POP EBX
005A2288  8B E5                     MOV ESP,EBP
005A228A  5D                        POP EBP
005A228B  C2 10 00                  RET 0x10
