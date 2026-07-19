FUN_006d1ec0:
006D1EC0  55                        PUSH EBP
006D1EC1  8B EC                     MOV EBP,ESP
006D1EC3  83 EC 24                  SUB ESP,0x24
006D1EC6  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006D1EC9  53                        PUSH EBX
006D1ECA  56                        PUSH ESI
006D1ECB  57                        PUSH EDI
006D1ECC  85 C0                     TEST EAX,EAX
006D1ECE  0F 84 2C 06 00 00         JZ 0x006d2500
006D1ED4  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006D1ED7  85 C0                     TEST EAX,EAX
006D1ED9  0F 84 21 06 00 00         JZ 0x006d2500
006D1EDF  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006D1EE2  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006D1EE5  8B 0B                     MOV ECX,dword ptr [EBX]
006D1EE7  3B CA                     CMP ECX,EDX
006D1EE9  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006D1EEC  0F 8F D1 05 00 00         JG 0x006d24c3
006D1EF2  85 C9                     TEST ECX,ECX
006D1EF4  8D 43 08                  LEA EAX,[EBX + 0x8]
006D1EF7  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
006D1EFE  0F 8E BB 05 00 00         JLE 0x006d24bf
006D1F04  49                        DEC ECX
006D1F05  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_006d1f08:
006D1F08  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
006D1F0B  8B 08                     MOV ECX,dword ptr [EAX]
006D1F0D  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006D1F10  03 D1                     ADD EDX,ECX
006D1F12  3B F2                     CMP ESI,EDX
006D1F14  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
006D1F17  0F 8F 24 01 00 00         JG 0x006d2041
006D1F1D  8B D6                     MOV EDX,ESI
006D1F1F  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006D1F22  03 D6                     ADD EDX,ESI
006D1F24  3B D1                     CMP EDX,ECX
006D1F26  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
006D1F29  0F 8C 12 01 00 00         JL 0x006d2041
006D1F2F  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
006D1F32  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
006D1F35  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
006D1F38  8D 34 0A                  LEA ESI,[EDX + ECX*0x1]
006D1F3B  3B FE                     CMP EDI,ESI
006D1F3D  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
006D1F40  0F 8F FB 00 00 00         JG 0x006d2041
006D1F46  8B F7                     MOV ESI,EDI
006D1F48  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006D1F4B  03 F7                     ADD ESI,EDI
006D1F4D  3B F2                     CMP ESI,EDX
006D1F4F  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
006D1F52  0F 8C E9 00 00 00         JL 0x006d2041
006D1F58  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006D1F5B  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
006D1F5E  3B F7                     CMP ESI,EDI
006D1F60  0F 8D FD 01 00 00         JGE 0x006d2163
006D1F66  8B 30                     MOV ESI,dword ptr [EAX]
006D1F68  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
006D1F6B  3B FE                     CMP EDI,ESI
006D1F6D  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
006D1F70  0F 8E F0 01 00 00         JLE 0x006d2166
006D1F76  3B 7D E8                  CMP EDI,dword ptr [EBP + -0x18]
006D1F79  0F 8D E7 01 00 00         JGE 0x006d2166
006D1F7F  39 55 EC                  CMP dword ptr [EBP + -0x14],EDX
006D1F82  0F 8E DE 01 00 00         JLE 0x006d2166
006D1F88  8B 08                     MOV ECX,dword ptr [EAX]
006D1F8A  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006D1F8D  3B CB                     CMP ECX,EBX
006D1F8F  8B F1                     MOV ESI,ECX
006D1F91  7F 02                     JG 0x006d1f95
006D1F93  8B F3                     MOV ESI,EBX
LAB_006d1f95:
006D1F95  3B D7                     CMP EDX,EDI
006D1F97  89 75 E0                  MOV dword ptr [EBP + -0x20],ESI
006D1F9A  7E 02                     JLE 0x006d1f9e
006D1F9C  8B FA                     MOV EDI,EDX
LAB_006d1f9e:
006D1F9E  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
006D1FA1  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
006D1FA4  3B D9                     CMP EBX,ECX
006D1FA6  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
006D1FA9  7D 02                     JGE 0x006d1fad
006D1FAB  8B CB                     MOV ECX,EBX
LAB_006d1fad:
006D1FAD  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
006D1FB0  2B CE                     SUB ECX,ESI
006D1FB2  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
006D1FB5  3B DE                     CMP EBX,ESI
006D1FB7  7D 02                     JGE 0x006d1fbb
006D1FB9  8B F3                     MOV ESI,EBX
LAB_006d1fbb:
006D1FBB  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006D1FBE  2B F7                     SUB ESI,EDI
006D1FC0  3B CB                     CMP ECX,EBX
006D1FC2  75 3D                     JNZ 0x006d2001
006D1FC4  3B 48 08                  CMP ECX,dword ptr [EAX + 0x8]
006D1FC7  0F 84 F2 01 00 00         JZ 0x006d21bf
006D1FCD  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006D1FD0  3B F9                     CMP EDI,ECX
006D1FD2  75 13                     JNZ 0x006d1fe7
006D1FD4  8B D9                     MOV EBX,ECX
006D1FD6  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006D1FD9  03 DE                     ADD EBX,ESI
006D1FDB  2B CE                     SUB ECX,ESI
006D1FDD  89 5D 14                  MOV dword ptr [EBP + 0x14],EBX
006D1FE0  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006D1FE3  85 C9                     TEST ECX,ECX
006D1FE5  EB 51                     JMP 0x006d2038
LAB_006d1fe7:
006D1FE7  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006D1FEA  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006D1FED  3B D1                     CMP EDX,ECX
006D1FEF  0F 8F CE 02 00 00         JG 0x006d22c3
006D1FF5  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006D1FF8  2B CE                     SUB ECX,ESI
006D1FFA  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006D1FFD  85 C9                     TEST ECX,ECX
006D1FFF  EB 37                     JMP 0x006d2038
LAB_006d2001:
006D2001  3B 75 1C                  CMP ESI,dword ptr [EBP + 0x1c]
006D2004  75 5B                     JNZ 0x006d2061
006D2006  3B 70 0C                  CMP ESI,dword ptr [EAX + 0xc]
006D2009  0F 84 3D 02 00 00         JZ 0x006d224c
006D200F  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
006D2012  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006D2015  3B D7                     CMP EDX,EDI
006D2017  75 07                     JNZ 0x006d2020
006D2019  03 F9                     ADD EDI,ECX
006D201B  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
006D201E  EB 0E                     JMP 0x006d202e
LAB_006d2020:
006D2020  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006D2023  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
006D2026  3B FA                     CMP EDI,EDX
006D2028  0F 8F 95 02 00 00         JG 0x006d22c3
LAB_006d202e:
006D202E  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006D2031  2B D1                     SUB EDX,ECX
006D2033  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
006D2036  85 D2                     TEST EDX,EDX
LAB_006d2038:
006D2038  0F 8E C2 04 00 00         JLE 0x006d2500
LAB_006d203e:
006D203E  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
FUN_006d1ec0::cf_common_join_006D2041:
006D2041  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006D2044  42                        INC EDX
006D2045  83 C0 10                  ADD EAX,0x10
006D2048  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_006d204b:
006D204B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006D204E  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006D2051  3B D1                     CMP EDX,ECX
006D2053  0F 8C AF FE FF FF         JL 0x006d1f08
006D2059  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006D205C  E9 5E 04 00 00            JMP 0x006d24bf
LAB_006d2061:
006D2061  8B 58 08                  MOV EBX,dword ptr [EAX + 0x8]
006D2064  3B CB                     CMP ECX,EBX
006D2066  75 32                     JNZ 0x006d209a
006D2068  3B FA                     CMP EDI,EDX
006D206A  75 14                     JNZ 0x006d2080
006D206C  8B 78 04                  MOV EDI,dword ptr [EAX + 0x4]
006D206F  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
006D2072  03 FE                     ADD EDI,ESI
006D2074  2B D6                     SUB EDX,ESI
006D2076  89 78 04                  MOV dword ptr [EAX + 0x4],EDI
006D2079  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
006D207C  8B CA                     MOV ECX,EDX
006D207E  EB 3C                     JMP 0x006d20bc
LAB_006d2080:
006D2080  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006D2083  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006D2086  3B D1                     CMP EDX,ECX
006D2088  0F 8F 35 02 00 00         JG 0x006d22c3
006D208E  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
006D2091  2B D6                     SUB EDX,ESI
006D2093  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
006D2096  8B CA                     MOV ECX,EDX
006D2098  EB 22                     JMP 0x006d20bc
LAB_006d209a:
006D209A  3B 70 0C                  CMP ESI,dword ptr [EAX + 0xc]
006D209D  0F 85 20 02 00 00         JNZ 0x006d22c3
006D20A3  8B 10                     MOV EDX,dword ptr [EAX]
006D20A5  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
006D20A8  3B FA                     CMP EDI,EDX
006D20AA  75 59                     JNZ 0x006d2105
006D20AC  8B F2                     MOV ESI,EDX
006D20AE  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
006D20B1  03 F1                     ADD ESI,ECX
006D20B3  2B D1                     SUB EDX,ECX
006D20B5  89 30                     MOV dword ptr [EAX],ESI
006D20B7  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
006D20BA  8B CA                     MOV ECX,EDX
LAB_006d20bc:
006D20BC  85 C9                     TEST ECX,ECX
006D20BE  0F 8F 7A FF FF FF         JG 0x006d203e
006D20C4  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006D20C7  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006D20CA  3B D1                     CMP EDX,ECX
006D20CC  7D 7A                     JGE 0x006d2148
006D20CE  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006D20D1  8D 70 10                  LEA ESI,[EAX + 0x10]
006D20D4  2B CA                     SUB ECX,EDX
006D20D6  8B F8                     MOV EDI,EAX
006D20D8  49                        DEC ECX
006D20D9  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006D20DC  C1 E1 04                  SHL ECX,0x4
006D20DF  8B D1                     MOV EDX,ECX
006D20E1  C1 E9 02                  SHR ECX,0x2
006D20E4  F3 A5                     MOVSD.REP ES:EDI,ESI
006D20E6  8B CA                     MOV ECX,EDX
006D20E8  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006D20EB  83 E1 03                  AND ECX,0x3
006D20EE  F3 A4                     MOVSB.REP ES:EDI,ESI
006D20F0  8B 33                     MOV ESI,dword ptr [EBX]
006D20F2  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006D20F5  4E                        DEC ESI
006D20F6  4A                        DEC EDX
006D20F7  49                        DEC ECX
006D20F8  89 33                     MOV dword ptr [EBX],ESI
006D20FA  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006D20FD  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006D2100  E9 46 FF FF FF            JMP 0x006d204b
LAB_006d2105:
006D2105  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006D2108  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
006D210B  3B FA                     CMP EDI,EDX
006D210D  0F 8F B0 01 00 00         JG 0x006d22c3
006D2113  8B D3                     MOV EDX,EBX
006D2115  2B D1                     SUB EDX,ECX
006D2117  85 D2                     TEST EDX,EDX
006D2119  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
006D211C  0F 8F 1C FF FF FF         JG 0x006d203e
006D2122  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006D2125  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006D2128  3B D1                     CMP EDX,ECX
006D212A  7D 1C                     JGE 0x006d2148
006D212C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006D212F  8D 70 10                  LEA ESI,[EAX + 0x10]
006D2132  2B CA                     SUB ECX,EDX
006D2134  8B F8                     MOV EDI,EAX
006D2136  49                        DEC ECX
006D2137  C1 E1 04                  SHL ECX,0x4
006D213A  8B D1                     MOV EDX,ECX
006D213C  C1 E9 02                  SHR ECX,0x2
006D213F  F3 A5                     MOVSD.REP ES:EDI,ESI
006D2141  8B CA                     MOV ECX,EDX
006D2143  83 E1 03                  AND ECX,0x3
006D2146  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_006d2148:
006D2148  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006D214B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006D214E  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006D2151  8B 33                     MOV ESI,dword ptr [EBX]
006D2153  4E                        DEC ESI
006D2154  4A                        DEC EDX
006D2155  49                        DEC ECX
006D2156  89 33                     MOV dword ptr [EBX],ESI
006D2158  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006D215B  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006D215E  E9 E8 FE FF FF            JMP 0x006d204b
LAB_006d2163:
006D2163  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
LAB_006d2166:
006D2166  39 4D 1C                  CMP dword ptr [EBP + 0x1c],ECX
006D2169  75 1D                     JNZ 0x006d2188
006D216B  3B FA                     CMP EDI,EDX
006D216D  75 19                     JNZ 0x006d2188
006D216F  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006D2172  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
006D2175  3B CE                     CMP ECX,ESI
006D2177  0F 84 6A 02 00 00         JZ 0x006d23e7
006D217D  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
006D2180  3B 30                     CMP ESI,dword ptr [EAX]
006D2182  0F 84 5A 02 00 00         JZ 0x006d23e2
LAB_006d2188:
006D2188  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
006D218B  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006D218E  3B F1                     CMP ESI,ECX
006D2190  0F 85 AB FE FF FF         JNZ 0x006d2041
006D2196  8B 08                     MOV ECX,dword ptr [EAX]
006D2198  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006D219B  3B F1                     CMP ESI,ECX
006D219D  0F 85 9E FE FF FF         JNZ 0x006d2041
006D21A3  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006D21A6  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
006D21A9  3B F1                     CMP ESI,ECX
006D21AB  0F 84 9A 02 00 00         JZ 0x006d244b
006D21B1  39 55 EC                  CMP dword ptr [EBP + -0x14],EDX
006D21B4  0F 84 8C 02 00 00         JZ 0x006d2446
006D21BA  E9 82 FE FF FF            JMP 0x006d2041
LAB_006d21bf:
006D21BF  8B 70 04                  MOV ESI,dword ptr [EAX + 0x4]
006D21C2  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
006D21C5  3B F7                     CMP ESI,EDI
006D21C7  7D 05                     JGE 0x006d21ce
006D21C9  89 75 14                  MOV dword ptr [EBP + 0x14],ESI
006D21CC  8B FE                     MOV EDI,ESI
LAB_006d21ce:
006D21CE  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
006D21D1  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006D21D4  3B D1                     CMP EDX,ECX
006D21D6  7E 02                     JLE 0x006d21da
006D21D8  8B CA                     MOV ECX,EDX
LAB_006d21da:
006D21DA  2B CF                     SUB ECX,EDI
006D21DC  3B FE                     CMP EDI,ESI
006D21DE  8B D1                     MOV EDX,ECX
006D21E0  75 09                     JNZ 0x006d21eb
006D21E2  3B 50 0C                  CMP EDX,dword ptr [EAX + 0xc]
006D21E5  0F 84 15 03 00 00         JZ 0x006d2500
LAB_006d21eb:
006D21EB  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006D21EE  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006D21F1  8D 71 FF                  LEA ESI,[ECX + -0x1]
006D21F4  3B DE                     CMP EBX,ESI
006D21F6  7D 1C                     JGE 0x006d2214
006D21F8  2B CB                     SUB ECX,EBX
006D21FA  8D 70 10                  LEA ESI,[EAX + 0x10]
006D21FD  49                        DEC ECX
006D21FE  8B F8                     MOV EDI,EAX
006D2200  C1 E1 04                  SHL ECX,0x4
006D2203  8B C1                     MOV EAX,ECX
006D2205  C1 E9 02                  SHR ECX,0x2
006D2208  F3 A5                     MOVSD.REP ES:EDI,ESI
006D220A  8B C8                     MOV ECX,EAX
006D220C  83 E1 03                  AND ECX,0x3
006D220F  F3 A4                     MOVSB.REP ES:EDI,ESI
006D2211  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
LAB_006d2214:
006D2214  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D2217  8B 08                     MOV ECX,dword ptr [EAX]
006D2219  49                        DEC ECX
006D221A  89 08                     MOV dword ptr [EAX],ECX
006D221C  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006D221F  51                        PUSH ECX
006D2220  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006D2223  51                        PUSH ECX
006D2224  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006D2227  52                        PUSH EDX
006D2228  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006D222B  52                        PUSH EDX
006D222C  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006D222F  57                        PUSH EDI
006D2230  51                        PUSH ECX
006D2231  52                        PUSH EDX
LAB_006d2232:
006D2232  50                        PUSH EAX
006D2233  E8 88 FC FF FF            CALL 0x006d1ec0
006D2238  3B C3                     CMP EAX,EBX
006D223A  0F 8E C2 02 00 00         JLE 0x006d2502
006D2240  5F                        POP EDI
006D2241  8D 43 01                  LEA EAX,[EBX + 0x1]
006D2244  5E                        POP ESI
006D2245  5B                        POP EBX
006D2246  8B E5                     MOV ESP,EBP
006D2248  5D                        POP EBP
006D2249  C2 20 00                  RET 0x20
LAB_006d224c:
006D224C  8B 30                     MOV ESI,dword ptr [EAX]
006D224E  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006D2251  3B F7                     CMP ESI,EDI
006D2253  7D 05                     JGE 0x006d225a
006D2255  89 75 10                  MOV dword ptr [EBP + 0x10],ESI
006D2258  8B FE                     MOV EDI,ESI
LAB_006d225a:
006D225A  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006D225D  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
006D2260  3B D1                     CMP EDX,ECX
006D2262  7E 02                     JLE 0x006d2266
006D2264  8B CA                     MOV ECX,EDX
LAB_006d2266:
006D2266  2B CF                     SUB ECX,EDI
006D2268  3B FE                     CMP EDI,ESI
006D226A  8B D1                     MOV EDX,ECX
006D226C  75 09                     JNZ 0x006d2277
006D226E  3B 50 08                  CMP EDX,dword ptr [EAX + 0x8]
006D2271  0F 84 89 02 00 00         JZ 0x006d2500
LAB_006d2277:
006D2277  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006D227A  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006D227D  8D 71 FF                  LEA ESI,[ECX + -0x1]
006D2280  3B DE                     CMP EBX,ESI
006D2282  7D 1C                     JGE 0x006d22a0
006D2284  2B CB                     SUB ECX,EBX
006D2286  8D 70 10                  LEA ESI,[EAX + 0x10]
006D2289  49                        DEC ECX
006D228A  8B F8                     MOV EDI,EAX
006D228C  C1 E1 04                  SHL ECX,0x4
006D228F  8B C1                     MOV EAX,ECX
006D2291  C1 E9 02                  SHR ECX,0x2
006D2294  F3 A5                     MOVSD.REP ES:EDI,ESI
006D2296  8B C8                     MOV ECX,EAX
006D2298  83 E1 03                  AND ECX,0x3
006D229B  F3 A4                     MOVSB.REP ES:EDI,ESI
006D229D  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
LAB_006d22a0:
006D22A0  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D22A3  8B 08                     MOV ECX,dword ptr [EAX]
006D22A5  49                        DEC ECX
006D22A6  89 08                     MOV dword ptr [EAX],ECX
006D22A8  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006D22AB  51                        PUSH ECX
006D22AC  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006D22AF  51                        PUSH ECX
006D22B0  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006D22B3  51                        PUSH ECX
006D22B4  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006D22B7  52                        PUSH EDX
006D22B8  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006D22BB  52                        PUSH EDX
006D22BC  57                        PUSH EDI
006D22BD  51                        PUSH ECX
006D22BE  E9 6F FF FF FF            JMP 0x006d2232
FUN_006d1ec0::cf_common_join_006D22C3:
006D22C3  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006D22C6  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
006D22C9  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006D22CC  8B 7D 24                  MOV EDI,dword ptr [EBP + 0x24]
006D22CF  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
006D22D2  42                        INC EDX
006D22D3  3B C8                     CMP ECX,EAX
006D22D5  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
006D22D8  7D 38                     JGE 0x006d2312
006D22DA  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006D22DD  8B C8                     MOV ECX,EAX
006D22DF  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006D22E2  57                        PUSH EDI
006D22E3  2B C8                     SUB ECX,EAX
006D22E5  53                        PUSH EBX
006D22E6  51                        PUSH ECX
006D22E7  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006D22EA  52                        PUSH EDX
006D22EB  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006D22EE  50                        PUSH EAX
006D22EF  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006D22F2  50                        PUSH EAX
006D22F3  51                        PUSH ECX
006D22F4  52                        PUSH EDX
006D22F5  E8 C6 FB FF FF            CALL 0x006d1ec0
006D22FA  83 F8 FF                  CMP EAX,-0x1
006D22FD  75 0B                     JNZ 0x006d230a
006D22FF  5F                        POP EDI
006D2300  5E                        POP ESI
006D2301  0B C0                     OR EAX,EAX
006D2303  5B                        POP EBX
006D2304  8B E5                     MOV ESP,EBP
006D2306  5D                        POP EBP
006D2307  C2 20 00                  RET 0x20
LAB_006d230a:
006D230A  39 45 1C                  CMP dword ptr [EBP + 0x1c],EAX
006D230D  7E 03                     JLE 0x006d2312
006D230F  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
LAB_006d2312:
006D2312  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006D2315  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006D2318  3B C8                     CMP ECX,EAX
006D231A  7E 38                     JLE 0x006d2354
006D231C  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006D231F  8B C1                     MOV EAX,ECX
006D2321  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006D2324  57                        PUSH EDI
006D2325  2B C1                     SUB EAX,ECX
006D2327  53                        PUSH EBX
006D2328  50                        PUSH EAX
006D2329  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006D232C  52                        PUSH EDX
006D232D  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006D2330  51                        PUSH ECX
006D2331  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006D2334  50                        PUSH EAX
006D2335  51                        PUSH ECX
006D2336  52                        PUSH EDX
006D2337  E8 84 FB FF FF            CALL 0x006d1ec0
006D233C  83 F8 FF                  CMP EAX,-0x1
006D233F  75 0B                     JNZ 0x006d234c
006D2341  5F                        POP EDI
006D2342  5E                        POP ESI
006D2343  0B C0                     OR EAX,EAX
006D2345  5B                        POP EBX
006D2346  8B E5                     MOV ESP,EBP
006D2348  5D                        POP EBP
006D2349  C2 20 00                  RET 0x20
LAB_006d234c:
006D234C  39 45 1C                  CMP dword ptr [EBP + 0x1c],EAX
006D234F  7E 03                     JLE 0x006d2354
006D2351  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
LAB_006d2354:
006D2354  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006D2357  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006D235A  3B C8                     CMP ECX,EAX
006D235C  7D 30                     JGE 0x006d238e
006D235E  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
006D2361  57                        PUSH EDI
006D2362  53                        PUSH EBX
006D2363  2B C1                     SUB EAX,ECX
006D2365  56                        PUSH ESI
006D2366  50                        PUSH EAX
006D2367  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006D236A  52                        PUSH EDX
006D236B  51                        PUSH ECX
006D236C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006D236F  50                        PUSH EAX
006D2370  51                        PUSH ECX
006D2371  E8 4A FB FF FF            CALL 0x006d1ec0
006D2376  83 F8 FF                  CMP EAX,-0x1
006D2379  75 0B                     JNZ 0x006d2386
006D237B  5F                        POP EDI
006D237C  5E                        POP ESI
006D237D  0B C0                     OR EAX,EAX
006D237F  5B                        POP EBX
006D2380  8B E5                     MOV ESP,EBP
006D2382  5D                        POP EBP
006D2383  C2 20 00                  RET 0x20
LAB_006d2386:
006D2386  39 45 1C                  CMP dword ptr [EBP + 0x1c],EAX
006D2389  7E 03                     JLE 0x006d238e
006D238B  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
LAB_006d238e:
006D238E  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006D2391  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006D2394  3B C2                     CMP EAX,EDX
006D2396  7E 3C                     JLE 0x006d23d4
006D2398  8B CA                     MOV ECX,EDX
006D239A  57                        PUSH EDI
006D239B  53                        PUSH EBX
006D239C  2B C1                     SUB EAX,ECX
006D239E  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006D23A1  56                        PUSH ESI
006D23A2  50                        PUSH EAX
006D23A3  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
006D23A6  50                        PUSH EAX
006D23A7  51                        PUSH ECX
006D23A8  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006D23AB  51                        PUSH ECX
006D23AC  52                        PUSH EDX
006D23AD  E8 0E FB FF FF            CALL 0x006d1ec0
006D23B2  83 F8 FF                  CMP EAX,-0x1
006D23B5  75 0B                     JNZ 0x006d23c2
006D23B7  5F                        POP EDI
006D23B8  5E                        POP ESI
006D23B9  0B C0                     OR EAX,EAX
006D23BB  5B                        POP EBX
006D23BC  8B E5                     MOV ESP,EBP
006D23BE  5D                        POP EBP
006D23BF  C2 20 00                  RET 0x20
LAB_006d23c2:
006D23C2  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006D23C5  3B C8                     CMP ECX,EAX
006D23C7  7E 0E                     JLE 0x006d23d7
006D23C9  5F                        POP EDI
006D23CA  5E                        POP ESI
006D23CB  8B C8                     MOV ECX,EAX
006D23CD  5B                        POP EBX
006D23CE  8B E5                     MOV ESP,EBP
006D23D0  5D                        POP EBP
006D23D1  C2 20 00                  RET 0x20
LAB_006d23d4:
006D23D4  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
LAB_006d23d7:
006D23D7  5F                        POP EDI
006D23D8  5E                        POP ESI
006D23D9  8B C1                     MOV EAX,ECX
006D23DB  5B                        POP EBX
006D23DC  8B E5                     MOV ESP,EBP
006D23DE  5D                        POP EBP
006D23DF  C2 20 00                  RET 0x20
LAB_006d23e2:
006D23E2  3B 4D F0                  CMP ECX,dword ptr [EBP + -0x10]
006D23E5  75 05                     JNZ 0x006d23ec
LAB_006d23e7:
006D23E7  8B 08                     MOV ECX,dword ptr [EAX]
006D23E9  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
LAB_006d23ec:
006D23EC  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
006D23EF  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006D23F2  8B 33                     MOV ESI,dword ptr [EBX]
006D23F4  03 CA                     ADD ECX,EDX
006D23F6  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
006D23F9  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006D23FC  4E                        DEC ESI
006D23FD  49                        DEC ECX
006D23FE  89 33                     MOV dword ptr [EBX],ESI
006D2400  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006D2403  3B F1                     CMP ESI,ECX
006D2405  7D 24                     JGE 0x006d242b
006D2407  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006D240A  8B FE                     MOV EDI,ESI
006D240C  2B CF                     SUB ECX,EDI
006D240E  8D 70 10                  LEA ESI,[EAX + 0x10]
006D2411  49                        DEC ECX
006D2412  8B F8                     MOV EDI,EAX
006D2414  C1 E1 04                  SHL ECX,0x4
006D2417  8B D1                     MOV EDX,ECX
006D2419  C1 E9 02                  SHR ECX,0x2
006D241C  F3 A5                     MOVSD.REP ES:EDI,ESI
006D241E  8B CA                     MOV ECX,EDX
006D2420  83 E1 03                  AND ECX,0x3
006D2423  F3 A4                     MOVSB.REP ES:EDI,ESI
006D2425  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006D2428  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
LAB_006d242b:
006D242B  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006D242E  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006D2431  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006D2434  50                        PUSH EAX
006D2435  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006D2438  51                        PUSH ECX
006D2439  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006D243C  52                        PUSH EDX
006D243D  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006D2440  50                        PUSH EAX
006D2441  57                        PUSH EDI
006D2442  51                        PUSH ECX
006D2443  52                        PUSH EDX
006D2444  EB 63                     JMP 0x006d24a9
LAB_006d2446:
006D2446  39 4D 14                  CMP dword ptr [EBP + 0x14],ECX
006D2449  75 06                     JNZ 0x006d2451
LAB_006d244b:
006D244B  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
006D244E  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
LAB_006d2451:
006D2451  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
006D2454  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006D2457  8B 33                     MOV ESI,dword ptr [EBX]
006D2459  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006D245C  03 FA                     ADD EDI,EDX
006D245E  4E                        DEC ESI
006D245F  89 33                     MOV dword ptr [EBX],ESI
006D2461  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006D2464  49                        DEC ECX
006D2465  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006D2468  3B F1                     CMP ESI,ECX
006D246A  7D 21                     JGE 0x006d248d
006D246C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006D246F  8B FE                     MOV EDI,ESI
006D2471  2B CF                     SUB ECX,EDI
006D2473  8D 70 10                  LEA ESI,[EAX + 0x10]
006D2476  49                        DEC ECX
006D2477  8B F8                     MOV EDI,EAX
006D2479  C1 E1 04                  SHL ECX,0x4
006D247C  8B D1                     MOV EDX,ECX
006D247E  C1 E9 02                  SHR ECX,0x2
006D2481  F3 A5                     MOVSD.REP ES:EDI,ESI
006D2483  8B CA                     MOV ECX,EDX
006D2485  83 E1 03                  AND ECX,0x3
006D2488  F3 A4                     MOVSB.REP ES:EDI,ESI
006D248A  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
LAB_006d248d:
006D248D  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006D2490  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006D2493  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006D2496  50                        PUSH EAX
006D2497  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006D249A  51                        PUSH ECX
006D249B  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006D249E  52                        PUSH EDX
006D249F  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006D24A2  50                        PUSH EAX
006D24A3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006D24A6  51                        PUSH ECX
006D24A7  52                        PUSH EDX
006D24A8  50                        PUSH EAX
LAB_006d24a9:
006D24A9  53                        PUSH EBX
006D24AA  E8 11 FA FF FF            CALL 0x006d1ec0
006D24AF  3B C6                     CMP EAX,ESI
006D24B1  7E 4F                     JLE 0x006d2502
006D24B3  8D 46 01                  LEA EAX,[ESI + 0x1]
006D24B6  5F                        POP EDI
006D24B7  5E                        POP ESI
006D24B8  5B                        POP EBX
006D24B9  8B E5                     MOV ESP,EBP
006D24BB  5D                        POP EBP
006D24BC  C2 20 00                  RET 0x20
LAB_006d24bf:
006D24BF  3B CA                     CMP ECX,EDX
006D24C1  7C 0F                     JL 0x006d24d2
LAB_006d24c3:
006D24C3  42                        INC EDX
006D24C4  5F                        POP EDI
006D24C5  89 13                     MOV dword ptr [EBX],EDX
006D24C7  5E                        POP ESI
006D24C8  83 C8 FF                  OR EAX,0xffffffff
006D24CB  5B                        POP EBX
006D24CC  8B E5                     MOV ESP,EBP
006D24CE  5D                        POP EBP
006D24CF  C2 20 00                  RET 0x20
LAB_006d24d2:
006D24D2  8B 13                     MOV EDX,dword ptr [EBX]
006D24D4  5F                        POP EDI
006D24D5  42                        INC EDX
006D24D6  5E                        POP ESI
006D24D7  C1 E1 04                  SHL ECX,0x4
006D24DA  89 13                     MOV dword ptr [EBX],EDX
006D24DC  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006D24DF  8D 44 19 08               LEA EAX,[ECX + EBX*0x1 + 0x8]
006D24E3  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006D24E6  89 08                     MOV dword ptr [EAX],ECX
006D24E8  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006D24EB  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
006D24EE  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006D24F1  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
006D24F4  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
006D24F7  8B 03                     MOV EAX,dword ptr [EBX]
006D24F9  5B                        POP EBX
006D24FA  8B E5                     MOV ESP,EBP
006D24FC  5D                        POP EBP
006D24FD  C2 20 00                  RET 0x20
LAB_006d2500:
006D2500  33 C0                     XOR EAX,EAX
LAB_006d2502:
006D2502  5F                        POP EDI
006D2503  5E                        POP ESI
006D2504  5B                        POP EBX
006D2505  8B E5                     MOV ESP,EBP
006D2507  5D                        POP EBP
006D2508  C2 20 00                  RET 0x20
