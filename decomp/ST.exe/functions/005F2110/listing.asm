STManBasisC::sub_005F2110:
005F2110  55                        PUSH EBP
005F2111  8B EC                     MOV EBP,ESP
005F2113  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005F2116  53                        PUSH EBX
005F2117  8B D9                     MOV EBX,ECX
005F2119  56                        PUSH ESI
005F211A  57                        PUSH EDI
005F211B  B9 0A 00 00 00            MOV ECX,0xa
005F2120  8B F0                     MOV ESI,EAX
005F2122  8D 7B 20                  LEA EDI,[EBX + 0x20]
005F2125  F3 A5                     MOVSD.REP ES:EDI,ESI
005F2127  8B 4B 34                  MOV ECX,dword ptr [EBX + 0x34]
005F212A  8D 70 28                  LEA ESI,[EAX + 0x28]
005F212D  89 0D 88 17 81 00         MOV dword ptr [0x00811788],ECX
005F2133  8B 43 38                  MOV EAX,dword ptr [EBX + 0x38]
005F2136  85 C0                     TEST EAX,EAX
005F2138  74 14                     JZ 0x005f214e
005F213A  8B FE                     MOV EDI,ESI
005F213C  83 C6 04                  ADD ESI,0x4
005F213F  56                        PUSH ESI
005F2140  6A 00                     PUSH 0x0
005F2142  E8 19 DF 0B 00            CALL 0x006b0060
005F2147  89 43 38                  MOV dword ptr [EBX + 0x38],EAX
005F214A  8B 07                     MOV EAX,dword ptr [EDI]
005F214C  03 F0                     ADD ESI,EAX
LAB_005f214e:
005F214E  8B 43 3C                  MOV EAX,dword ptr [EBX + 0x3c]
005F2151  85 C0                     TEST EAX,EAX
005F2153  74 3D                     JZ 0x005f2192
005F2155  83 C6 04                  ADD ESI,0x4
005F2158  56                        PUSH ESI
005F2159  6A 00                     PUSH 0x0
005F215B  E8 00 DF 0B 00            CALL 0x006b0060
005F2160  89 43 3C                  MOV dword ptr [EBX + 0x3c],EAX
005F2163  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005F2166  33 D2                     XOR EDX,EDX
005F2168  85 C9                     TEST ECX,ECX
005F216A  7E 26                     JLE 0x005f2192
005F216C  83 CE FF                  OR ESI,0xffffffff
LAB_005f216f:
005F216F  8B 4B 3C                  MOV ECX,dword ptr [EBX + 0x3c]
005F2172  3B 51 0C                  CMP EDX,dword ptr [ECX + 0xc]
005F2175  73 12                     JNC 0x005f2189
005F2177  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005F217A  8B 79 1C                  MOV EDI,dword ptr [ECX + 0x1c]
005F217D  0F AF C2                  IMUL EAX,EDX
005F2180  03 C7                     ADD EAX,EDI
005F2182  85 C0                     TEST EAX,EAX
005F2184  74 03                     JZ 0x005f2189
005F2186  89 70 18                  MOV dword ptr [EAX + 0x18],ESI
LAB_005f2189:
005F2189  8B 43 3C                  MOV EAX,dword ptr [EBX + 0x3c]
005F218C  42                        INC EDX
005F218D  3B 50 0C                  CMP EDX,dword ptr [EAX + 0xc]
005F2190  7C DD                     JL 0x005f216f
LAB_005f2192:
005F2192  5F                        POP EDI
005F2193  5E                        POP ESI
005F2194  B8 28 00 00 00            MOV EAX,0x28
005F2199  5B                        POP EBX
005F219A  5D                        POP EBP
005F219B  C2 04 00                  RET 0x4
