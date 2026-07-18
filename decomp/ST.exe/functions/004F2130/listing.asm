FUN_004f2130:
004F2130  55                        PUSH EBP
004F2131  8B EC                     MOV EBP,ESP
004F2133  83 EC 48                  SUB ESP,0x48
004F2136  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004F213B  53                        PUSH EBX
004F213C  56                        PUSH ESI
004F213D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004F2140  57                        PUSH EDI
004F2141  8D 55 BC                  LEA EDX,[EBP + -0x44]
004F2144  8D 4D B8                  LEA ECX,[EBP + -0x48]
004F2147  6A 00                     PUSH 0x0
004F2149  52                        PUSH EDX
004F214A  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
004F214D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004F2153  E8 98 B6 23 00            CALL 0x0072d7f0
004F2158  8B F0                     MOV ESI,EAX
004F215A  83 C4 08                  ADD ESP,0x8
004F215D  85 F6                     TEST ESI,ESI
004F215F  0F 85 33 01 00 00         JNZ 0x004f2298
004F2165  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
004F2168  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
004F216B  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
004F216E  66 81 FF FF FF            CMP DI,0xffff
004F2173  75 07                     JNZ 0x004f217c
004F2175  66 81 FB FF FF            CMP BX,0xffff
004F217A  74 43                     JZ 0x004f21bf
LAB_004f217c:
004F217C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004F217F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004F2182  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004F2185  6A 0A                     PUSH 0xa
004F2187  6A 30                     PUSH 0x30
004F2189  50                        PUSH EAX
004F218A  51                        PUSH ECX
004F218B  8B 8E B8 01 00 00         MOV ECX,dword ptr [ESI + 0x1b8]
004F2191  6A 00                     PUSH 0x0
004F2193  52                        PUSH EDX
004F2194  E8 F7 E8 21 00            CALL 0x00710a90
004F2199  A1 18 76 80 00            MOV EAX,[0x00807618]
004F219E  6A FF                     PUSH -0x1
004F21A0  6A FF                     PUSH -0x1
004F21A2  6A 01                     PUSH 0x1
004F21A4  6A FF                     PUSH -0x1
004F21A6  6A 00                     PUSH 0x0
004F21A8  50                        PUSH EAX
004F21A9  68 B3 36 00 00            PUSH 0x36b3
004F21AE  E8 8D DF 1B 00            CALL 0x006b0140
004F21B3  8B 8E B8 01 00 00         MOV ECX,dword ptr [ESI + 0x1b8]
004F21B9  50                        PUSH EAX
004F21BA  E8 B1 F9 21 00            CALL 0x00711b70
LAB_004f21bf:
004F21BF  66 81 FF FF FF            CMP DI,0xffff
004F21C4  74 5D                     JZ 0x004f2223
004F21C6  81 E7 FF FF 00 00         AND EDI,0xffff
004F21CC  8D 9E E1 01 00 00         LEA EBX,[ESI + 0x1e1]
004F21D2  57                        PUSH EDI
004F21D3  68 90 18 7C 00            PUSH 0x7c1890
004F21D8  53                        PUSH EBX
004F21D9  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
004F21DF  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004F21E2  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004F21E5  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004F21E8  83 C4 0C                  ADD ESP,0xc
004F21EB  83 C2 30                  ADD EDX,0x30
004F21EE  6A 0A                     PUSH 0xa
004F21F0  6A 11                     PUSH 0x11
004F21F2  51                        PUSH ECX
004F21F3  8B 8E B8 01 00 00         MOV ECX,dword ptr [ESI + 0x1b8]
004F21F9  52                        PUSH EDX
004F21FA  6A 00                     PUSH 0x0
004F21FC  50                        PUSH EAX
004F21FD  E8 8E E8 21 00            CALL 0x00710a90
004F2202  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
004F2205  6A FF                     PUSH -0x1
004F2207  81 E1 FF FF 00 00         AND ECX,0xffff
004F220D  6A FF                     PUSH -0x1
004F220F  51                        PUSH ECX
004F2210  8B 8E B8 01 00 00         MOV ECX,dword ptr [ESI + 0x1b8]
004F2216  6A FF                     PUSH -0x1
004F2218  6A FD                     PUSH -0x3
004F221A  53                        PUSH EBX
004F221B  E8 50 F9 21 00            CALL 0x00711b70
004F2220  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
LAB_004f2223:
004F2223  66 81 FB FF FF            CMP BX,0xffff
004F2228  74 5D                     JZ 0x004f2287
004F222A  81 E3 FF FF 00 00         AND EBX,0xffff
004F2230  8D BE E1 01 00 00         LEA EDI,[ESI + 0x1e1]
004F2236  53                        PUSH EBX
004F2237  68 90 18 7C 00            PUSH 0x7c1890
004F223C  57                        PUSH EDI
004F223D  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
004F2243  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004F2246  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004F2249  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004F224C  83 C4 0C                  ADD ESP,0xc
004F224F  83 C2 0B                  ADD EDX,0xb
004F2252  83 C0 30                  ADD EAX,0x30
004F2255  6A 0A                     PUSH 0xa
004F2257  6A 11                     PUSH 0x11
004F2259  52                        PUSH EDX
004F225A  50                        PUSH EAX
004F225B  6A 00                     PUSH 0x0
004F225D  51                        PUSH ECX
004F225E  8B 8E B8 01 00 00         MOV ECX,dword ptr [ESI + 0x1b8]
004F2264  E8 27 E8 21 00            CALL 0x00710a90
004F2269  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
004F226C  8B 8E B8 01 00 00         MOV ECX,dword ptr [ESI + 0x1b8]
004F2272  6A FF                     PUSH -0x1
004F2274  81 E2 FF FF 00 00         AND EDX,0xffff
004F227A  6A FF                     PUSH -0x1
004F227C  52                        PUSH EDX
004F227D  6A FF                     PUSH -0x1
004F227F  6A FD                     PUSH -0x3
004F2281  57                        PUSH EDI
004F2282  E8 E9 F8 21 00            CALL 0x00711b70
LAB_004f2287:
004F2287  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
004F228A  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004F228F  5F                        POP EDI
004F2290  5E                        POP ESI
004F2291  5B                        POP EBX
004F2292  8B E5                     MOV ESP,EBP
004F2294  5D                        POP EBP
004F2295  C2 1C 00                  RET 0x1c
LAB_004f2298:
004F2298  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
004F229B  68 A8 1A 7C 00            PUSH 0x7c1aa8
004F22A0  68 CC 4C 7A 00            PUSH 0x7a4ccc
004F22A5  56                        PUSH ESI
004F22A6  6A 00                     PUSH 0x0
004F22A8  68 BE 00 00 00            PUSH 0xbe
004F22AD  68 4C 1A 7C 00            PUSH 0x7c1a4c
004F22B2  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004F22B8  E8 13 B2 1B 00            CALL 0x006ad4d0
004F22BD  83 C4 18                  ADD ESP,0x18
004F22C0  85 C0                     TEST EAX,EAX
004F22C2  74 01                     JZ 0x004f22c5
004F22C4  CC                        INT3
LAB_004f22c5:
004F22C5  68 BE 00 00 00            PUSH 0xbe
004F22CA  68 4C 1A 7C 00            PUSH 0x7c1a4c
004F22CF  6A 00                     PUSH 0x0
004F22D1  56                        PUSH ESI
004F22D2  E8 69 3B 1B 00            CALL 0x006a5e40
004F22D7  5F                        POP EDI
004F22D8  5E                        POP ESI
004F22D9  5B                        POP EBX
004F22DA  8B E5                     MOV ESP,EBP
004F22DC  5D                        POP EBP
004F22DD  C2 1C 00                  RET 0x1c
