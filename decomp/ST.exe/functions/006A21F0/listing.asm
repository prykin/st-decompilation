FUN_006a21f0:
006A21F0  55                        PUSH EBP
006A21F1  8B EC                     MOV EBP,ESP
006A21F3  51                        PUSH ECX
006A21F4  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006A21F7  53                        PUSH EBX
006A21F8  56                        PUSH ESI
006A21F9  57                        PUSH EDI
006A21FA  85 D2                     TEST EDX,EDX
006A21FC  C7 45 FC FF 00 00 00      MOV dword ptr [EBP + -0x4],0xff
006A2203  0F 8C B5 00 00 00         JL 0x006a22be
006A2209  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006A220C  3B 11                     CMP EDX,dword ptr [ECX]
006A220E  0F 8D AA 00 00 00         JGE 0x006a22be
006A2214  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006A2217  85 DB                     TEST EBX,EBX
006A2219  0F 8C 9F 00 00 00         JL 0x006a22be
006A221F  3B 59 04                  CMP EBX,dword ptr [ECX + 0x4]
006A2222  0F 8D 96 00 00 00         JGE 0x006a22be
006A2228  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
006A222B  85 FF                     TEST EDI,EDI
006A222D  0F 8C 8B 00 00 00         JL 0x006a22be
006A2233  83 FF 06                  CMP EDI,0x6
006A2236  0F 8D 82 00 00 00         JGE 0x006a22be
006A223C  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006A223F  85 FF                     TEST EDI,EDI
006A2241  75 1B                     JNZ 0x006a225e
006A2243  66 83 3E 00               CMP word ptr [ESI],0x0
006A2247  74 07                     JZ 0x006a2250
006A2249  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_006a2250:
006A2250  66 83 7E 02 00            CMP word ptr [ESI + 0x2],0x0
006A2255  74 07                     JZ 0x006a225e
006A2257  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
LAB_006a225e:
006A225E  F6 46 05 20               TEST byte ptr [ESI + 0x5],0x20
006A2262  75 66                     JNZ 0x006a22ca
006A2264  66 8B 46 02               MOV AX,word ptr [ESI + 0x2]
006A2268  F6 C4 10                  TEST AH,0x10
006A226B  74 05                     JZ 0x006a2272
006A226D  F6 C4 20                  TEST AH,0x20
006A2270  75 58                     JNZ 0x006a22ca
LAB_006a2272:
006A2272  66 8B 06                  MOV AX,word ptr [ESI]
006A2275  F6 C4 10                  TEST AH,0x10
006A2278  74 05                     JZ 0x006a227f
006A227A  F6 C4 20                  TEST AH,0x20
006A227D  75 4B                     JNZ 0x006a22ca
LAB_006a227f:
006A227F  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006A2282  50                        PUSH EAX
006A2283  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006A2286  50                        PUSH EAX
006A2287  56                        PUSH ESI
006A2288  57                        PUSH EDI
006A2289  53                        PUSH EBX
006A228A  52                        PUSH EDX
006A228B  51                        PUSH ECX
006A228C  E8 22 08 D6 FF            CALL 0x00402ab3
006A2291  83 C4 1C                  ADD ESP,0x1c
006A2294  85 C0                     TEST EAX,EAX
006A2296  75 07                     JNZ 0x006a229f
006A2298  5F                        POP EDI
006A2299  5E                        POP ESI
006A229A  5B                        POP EBX
006A229B  8B E5                     MOV ESP,EBP
006A229D  5D                        POP EBP
006A229E  C3                        RET
LAB_006a229f:
006A229F  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006A22A2  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A22A5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006A22A8  51                        PUSH ECX
006A22A9  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006A22AC  52                        PUSH EDX
006A22AD  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006A22B0  56                        PUSH ESI
006A22B1  50                        PUSH EAX
006A22B2  57                        PUSH EDI
006A22B3  53                        PUSH EBX
006A22B4  51                        PUSH ECX
006A22B5  52                        PUSH EDX
006A22B6  E8 3A 2A D6 FF            CALL 0x00404cf5
006A22BB  83 C4 20                  ADD ESP,0x20
LAB_006a22be:
006A22BE  5F                        POP EDI
006A22BF  5E                        POP ESI
006A22C0  B8 01 00 00 00            MOV EAX,0x1
006A22C5  5B                        POP EBX
006A22C6  8B E5                     MOV ESP,EBP
006A22C8  5D                        POP EBP
006A22C9  C3                        RET
LAB_006a22ca:
006A22CA  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006A22CD  50                        PUSH EAX
006A22CE  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006A22D1  50                        PUSH EAX
006A22D2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006A22D5  56                        PUSH ESI
006A22D6  50                        PUSH EAX
006A22D7  57                        PUSH EDI
006A22D8  53                        PUSH EBX
006A22D9  52                        PUSH EDX
006A22DA  51                        PUSH ECX
006A22DB  E8 34 29 D6 FF            CALL 0x00404c14
006A22E0  83 C4 20                  ADD ESP,0x20
006A22E3  85 C0                     TEST EAX,EAX
006A22E5  75 07                     JNZ 0x006a22ee
006A22E7  5F                        POP EDI
006A22E8  5E                        POP ESI
006A22E9  5B                        POP EBX
006A22EA  8B E5                     MOV ESP,EBP
006A22EC  5D                        POP EBP
006A22ED  C3                        RET
LAB_006a22ee:
006A22EE  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006A22F1  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A22F4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006A22F7  51                        PUSH ECX
006A22F8  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006A22FB  52                        PUSH EDX
006A22FC  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006A22FF  56                        PUSH ESI
006A2300  50                        PUSH EAX
006A2301  57                        PUSH EDI
006A2302  53                        PUSH EBX
006A2303  51                        PUSH ECX
006A2304  52                        PUSH EDX
006A2305  E8 EB 29 D6 FF            CALL 0x00404cf5
006A230A  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006A230D  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006A2310  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006A2313  50                        PUSH EAX
006A2314  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006A2317  51                        PUSH ECX
006A2318  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006A231B  56                        PUSH ESI
006A231C  52                        PUSH EDX
006A231D  57                        PUSH EDI
006A231E  53                        PUSH EBX
006A231F  50                        PUSH EAX
006A2320  51                        PUSH ECX
006A2321  E8 37 EF D5 FF            CALL 0x0040125d
006A2326  83 C4 40                  ADD ESP,0x40
006A2329  85 C0                     TEST EAX,EAX
006A232B  75 91                     JNZ 0x006a22be
006A232D  5F                        POP EDI
006A232E  5E                        POP ESI
006A232F  5B                        POP EBX
006A2330  8B E5                     MOV ESP,EBP
006A2332  5D                        POP EBP
006A2333  C3                        RET
