cMf32::RecChk:
006F21C0  55                        PUSH EBP
006F21C1  8B EC                     MOV EBP,ESP
006F21C3  81 EC 54 01 00 00         SUB ESP,0x154
006F21C9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006F21CE  56                        PUSH ESI
006F21CF  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006F21D2  57                        PUSH EDI
006F21D3  8D 55 B4                  LEA EDX,[EBP + -0x4c]
006F21D6  8D 4D B0                  LEA ECX,[EBP + -0x50]
006F21D9  6A 00                     PUSH 0x0
006F21DB  52                        PUSH EDX
006F21DC  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006F21E3  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
006F21E6  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006F21EC  E8 FF B5 03 00            CALL 0x0072d7f0
006F21F1  8B F0                     MOV ESI,EAX
006F21F3  83 C4 08                  ADD ESP,0x8
006F21F6  85 F6                     TEST ESI,ESI
006F21F8  0F 85 82 00 00 00         JNZ 0x006f2280
006F21FE  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006F2201  83 C9 FF                  OR ECX,0xffffffff
006F2204  8B FE                     MOV EDI,ESI
006F2206  F2 AE                     SCASB.REPNE ES:EDI
006F2208  F7 D1                     NOT ECX
006F220A  83 C1 17                  ADD ECX,0x17
006F220D  51                        PUSH ECX
006F220E  E8 FD 89 FB FF            CALL 0x006aac10
006F2213  8A 4D 08                  MOV CL,byte ptr [EBP + 0x8]
006F2216  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006F2219  88 08                     MOV byte ptr [EAX],CL
006F221B  8B FE                     MOV EDI,ESI
006F221D  83 C9 FF                  OR ECX,0xffffffff
006F2220  33 C0                     XOR EAX,EAX
006F2222  F2 AE                     SCASB.REPNE ES:EDI
006F2224  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F2227  F7 D1                     NOT ECX
006F2229  49                        DEC ECX
006F222A  66 89 4A 16               MOV word ptr [EDX + 0x16],CX
006F222E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F2231  0F BF 48 16               MOVSX ECX,word ptr [EAX + 0x16]
006F2235  8D 78 18                  LEA EDI,[EAX + 0x18]
006F2238  8B C1                     MOV EAX,ECX
006F223A  C1 E9 02                  SHR ECX,0x2
006F223D  F3 A5                     MOVSD.REP ES:EDI,ESI
006F223F  8B C8                     MOV ECX,EAX
006F2241  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006F2244  83 E1 03                  AND ECX,0x3
006F2247  F3 A4                     MOVSB.REP ES:EDI,ESI
006F2249  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F224C  8D 4D F8                  LEA ECX,[EBP + -0x8]
006F224F  51                        PUSH ECX
006F2250  8B 08                     MOV ECX,dword ptr [EAX]
006F2252  52                        PUSH EDX
006F2253  8B 11                     MOV EDX,dword ptr [ECX]
006F2255  52                        PUSH EDX
006F2256  E8 05 F9 05 00            CALL 0x00751b60
006F225B  8B F0                     MOV ESI,EAX
006F225D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F2260  85 C0                     TEST EAX,EAX
006F2262  74 09                     JZ 0x006f226d
006F2264  8D 45 FC                  LEA EAX,[EBP + -0x4]
006F2267  50                        PUSH EAX
006F2268  E8 F3 8D FB FF            CALL 0x006ab060
LAB_006f226d:
006F226D  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
006F2270  8B C6                     MOV EAX,ESI
006F2272  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006F2278  5F                        POP EDI
006F2279  5E                        POP ESI
006F227A  8B E5                     MOV ESP,EBP
006F227C  5D                        POP EBP
006F227D  C2 08 00                  RET 0x8
LAB_006f2280:
006F2280  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F2283  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
006F2286  85 C0                     TEST EAX,EAX
006F2288  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006F228E  74 09                     JZ 0x006f2299
006F2290  8D 45 FC                  LEA EAX,[EBP + -0x4]
006F2293  50                        PUSH EAX
006F2294  E8 C7 8D FB FF            CALL 0x006ab060
LAB_006f2299:
006F2299  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006F229C  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006F229F  25 FF 00 00 00            AND EAX,0xff
006F22A4  51                        PUSH ECX
006F22A5  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006F22A8  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
006F22AB  81 C1 31 02 00 00         ADD ECX,0x231
006F22B1  8D 04 55 A4 F0 7E 00      LEA EAX,[EDX*0x2 + 0x7ef0a4]
006F22B8  8D 95 AC FE FF FF         LEA EDX,[EBP + 0xfffffeac]
006F22BE  50                        PUSH EAX
006F22BF  51                        PUSH ECX
006F22C0  68 F8 FB 7E 00            PUSH 0x7efbf8
006F22C5  52                        PUSH EDX
006F22C6  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
006F22CC  8D 85 AC FE FF FF         LEA EAX,[EBP + 0xfffffeac]
006F22D2  50                        PUSH EAX
006F22D3  68 CC 4C 7A 00            PUSH 0x7a4ccc
006F22D8  56                        PUSH ESI
006F22D9  6A 00                     PUSH 0x0
006F22DB  68 61 02 00 00            PUSH 0x261
006F22E0  68 A4 FA 7E 00            PUSH 0x7efaa4
006F22E5  E8 E6 B1 FB FF            CALL 0x006ad4d0
006F22EA  83 C4 2C                  ADD ESP,0x2c
006F22ED  85 C0                     TEST EAX,EAX
006F22EF  74 01                     JZ 0x006f22f2
006F22F1  CC                        INT3
LAB_006f22f2:
006F22F2  68 63 02 00 00            PUSH 0x263
006F22F7  68 A4 FA 7E 00            PUSH 0x7efaa4
006F22FC  6A 00                     PUSH 0x0
006F22FE  56                        PUSH ESI
006F22FF  E8 3C 3B FB FF            CALL 0x006a5e40
006F2304  8B C6                     MOV EAX,ESI
006F2306  5F                        POP EDI
006F2307  5E                        POP ESI
006F2308  8B E5                     MOV ESP,EBP
006F230A  5D                        POP EBP
006F230B  C2 08 00                  RET 0x8
