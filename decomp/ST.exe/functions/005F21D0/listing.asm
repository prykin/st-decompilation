STManBasisC::sub_005F21D0:
005F21D0  55                        PUSH EBP
005F21D1  8B EC                     MOV EBP,ESP
005F21D3  51                        PUSH ECX
005F21D4  53                        PUSH EBX
005F21D5  8B D9                     MOV EBX,ECX
005F21D7  56                        PUSH ESI
005F21D8  57                        PUSH EDI
005F21D9  8B 43 38                  MOV EAX,dword ptr [EBX + 0x38]
005F21DC  85 C0                     TEST EAX,EAX
005F21DE  74 6F                     JZ 0x005f224f
005F21E0  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005F21E3  33 FF                     XOR EDI,EDI
005F21E5  85 C9                     TEST ECX,ECX
005F21E7  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005F21EA  7E 63                     JLE 0x005f224f
LAB_005f21ec:
005F21EC  8B 43 38                  MOV EAX,dword ptr [EBX + 0x38]
005F21EF  3B 78 0C                  CMP EDI,dword ptr [EAX + 0xc]
005F21F2  73 56                     JNC 0x005f224a
005F21F4  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
005F21F7  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
005F21FA  0F AF F7                  IMUL ESI,EDI
005F21FD  03 F2                     ADD ESI,EDX
005F21FF  85 F6                     TEST ESI,ESI
005F2201  74 47                     JZ 0x005f224a
005F2203  66 8B 46 04               MOV AX,word ptr [ESI + 0x4]
005F2207  66 8B 56 02               MOV DX,word ptr [ESI + 0x2]
005F220B  66 69 C0 C8 00            IMUL AX,AX,0xc8
005F2210  66 69 D2 C9 00            IMUL DX,DX,0xc9
005F2215  83 C0 64                  ADD EAX,0x64
005F2218  83 C2 64                  ADD EDX,0x64
005F221B  0F BF C8                  MOVSX ECX,AX
005F221E  51                        PUSH ECX
005F221F  66 8B 0E                  MOV CX,word ptr [ESI]
005F2222  66 69 C9 C9 00            IMUL CX,CX,0xc9
005F2227  0F BF C2                  MOVSX EAX,DX
005F222A  83 C1 64                  ADD ECX,0x64
005F222D  50                        PUSH EAX
005F222E  0F BF 46 07               MOVSX EAX,word ptr [ESI + 0x7]
005F2232  0F BF D1                  MOVSX EDX,CX
005F2235  33 C9                     XOR ECX,ECX
005F2237  52                        PUSH EDX
005F2238  8A 4E 06                  MOV CL,byte ptr [ESI + 0x6]
005F223B  50                        PUSH EAX
005F223C  51                        PUSH ECX
005F223D  8B CB                     MOV ECX,EBX
005F223F  E8 1B 11 E1 FF            CALL 0x0040335f
005F2244  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005F2247  89 46 0D                  MOV dword ptr [ESI + 0xd],EAX
LAB_005f224a:
005F224A  47                        INC EDI
005F224B  3B F9                     CMP EDI,ECX
005F224D  7C 9D                     JL 0x005f21ec
LAB_005f224f:
005F224F  8B 43 3C                  MOV EAX,dword ptr [EBX + 0x3c]
005F2252  85 C0                     TEST EAX,EAX
005F2254  74 78                     JZ 0x005f22ce
005F2256  8B 78 0C                  MOV EDI,dword ptr [EAX + 0xc]
005F2259  33 F6                     XOR ESI,ESI
005F225B  85 FF                     TEST EDI,EDI
005F225D  7E 66                     JLE 0x005f22c5
LAB_005f225f:
005F225F  8B 4B 3C                  MOV ECX,dword ptr [EBX + 0x3c]
005F2262  3B 71 0C                  CMP ESI,dword ptr [ECX + 0xc]
005F2265  73 59                     JNC 0x005f22c0
005F2267  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005F226A  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
005F226D  0F AF C6                  IMUL EAX,ESI
005F2270  03 C2                     ADD EAX,EDX
005F2272  85 C0                     TEST EAX,EAX
005F2274  74 4A                     JZ 0x005f22c0
005F2276  83 78 18 FF               CMP dword ptr [EAX + 0x18],-0x1
005F227A  74 44                     JZ 0x005f22c0
005F227C  66 8B 50 04               MOV DX,word ptr [EAX + 0x4]
005F2280  56                        PUSH ESI
005F2281  66 69 D2 C8 00            IMUL DX,DX,0xc8
005F2286  83 C2 64                  ADD EDX,0x64
005F2289  0F BF CA                  MOVSX ECX,DX
005F228C  66 8B 50 02               MOV DX,word ptr [EAX + 0x2]
005F2290  51                        PUSH ECX
005F2291  66 69 D2 C9 00            IMUL DX,DX,0xc9
005F2296  83 C2 64                  ADD EDX,0x64
005F2299  0F BF CA                  MOVSX ECX,DX
005F229C  66 8B 10                  MOV DX,word ptr [EAX]
005F229F  51                        PUSH ECX
005F22A0  66 69 D2 C9 00            IMUL DX,DX,0xc9
005F22A5  83 C2 64                  ADD EDX,0x64
005F22A8  0F BF CA                  MOVSX ECX,DX
005F22AB  0F BF 50 07               MOVSX EDX,word ptr [EAX + 0x7]
005F22AF  51                        PUSH ECX
005F22B0  33 C9                     XOR ECX,ECX
005F22B2  8A 48 06                  MOV CL,byte ptr [EAX + 0x6]
005F22B5  6A 00                     PUSH 0x0
005F22B7  52                        PUSH EDX
005F22B8  51                        PUSH ECX
005F22B9  8B CB                     MOV ECX,EBX
005F22BB  E8 DF F3 E0 FF            CALL 0x0040169f
LAB_005f22c0:
005F22C0  46                        INC ESI
005F22C1  3B F7                     CMP ESI,EDI
005F22C3  7C 9A                     JL 0x005f225f
LAB_005f22c5:
005F22C5  8B C7                     MOV EAX,EDI
005F22C7  5F                        POP EDI
005F22C8  5E                        POP ESI
005F22C9  5B                        POP EBX
005F22CA  8B E5                     MOV ESP,EBP
005F22CC  5D                        POP EBP
005F22CD  C3                        RET
LAB_005f22ce:
005F22CE  5F                        POP EDI
005F22CF  5E                        POP ESI
005F22D0  33 C0                     XOR EAX,EAX
005F22D2  5B                        POP EBX
005F22D3  8B E5                     MOV ESP,EBP
005F22D5  5D                        POP EBP
005F22D6  C3                        RET
