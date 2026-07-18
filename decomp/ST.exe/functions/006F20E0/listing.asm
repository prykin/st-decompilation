cMf32::RecMemFree:
006F20E0  55                        PUSH EBP
006F20E1  8B EC                     MOV EBP,ESP
006F20E3  83 EC 48                  SUB ESP,0x48
006F20E6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006F20EB  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006F20EE  56                        PUSH ESI
006F20EF  8D 55 BC                  LEA EDX,[EBP + -0x44]
006F20F2  8D 4D B8                  LEA ECX,[EBP + -0x48]
006F20F5  6A 00                     PUSH 0x0
006F20F7  52                        PUSH EDX
006F20F8  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006F20FB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006F2101  E8 EA B6 03 00            CALL 0x0072d7f0
006F2106  8B F0                     MOV ESI,EAX
006F2108  83 C4 08                  ADD ESP,0x8
006F210B  85 F6                     TEST ESI,ESI
006F210D  75 45                     JNZ 0x006f2154
006F210F  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006F2112  8B 06                     MOV EAX,dword ptr [ESI]
006F2114  85 C0                     TEST EAX,EAX
006F2116  74 2C                     JZ 0x006f2144
006F2118  50                        PUSH EAX
006F2119  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F211C  8B 08                     MOV ECX,dword ptr [EAX]
006F211E  51                        PUSH ECX
006F211F  E8 EC F9 05 00            CALL 0x00751b10
006F2124  85 C0                     TEST EAX,EAX
006F2126  75 16                     JNZ 0x006f213e
006F2128  56                        PUSH ESI
006F2129  E8 32 8F FB FF            CALL 0x006ab060
006F212E  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
006F2131  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006F2137  5E                        POP ESI
006F2138  8B E5                     MOV ESP,EBP
006F213A  5D                        POP EBP
006F213B  C2 04 00                  RET 0x4
LAB_006f213e:
006F213E  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
LAB_006f2144:
006F2144  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
006F2147  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006F214D  5E                        POP ESI
006F214E  8B E5                     MOV ESP,EBP
006F2150  5D                        POP EBP
006F2151  C2 04 00                  RET 0x4
LAB_006f2154:
006F2154  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
006F2157  68 E4 FB 7E 00            PUSH 0x7efbe4
006F215C  68 CC 4C 7A 00            PUSH 0x7a4ccc
006F2161  56                        PUSH ESI
006F2162  6A 00                     PUSH 0x0
006F2164  68 37 02 00 00            PUSH 0x237
006F2169  68 A4 FA 7E 00            PUSH 0x7efaa4
006F216E  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006F2173  E8 58 B3 FB FF            CALL 0x006ad4d0
006F2178  83 C4 18                  ADD ESP,0x18
006F217B  85 C0                     TEST EAX,EAX
006F217D  74 01                     JZ 0x006f2180
006F217F  CC                        INT3
LAB_006f2180:
006F2180  68 39 02 00 00            PUSH 0x239
006F2185  68 A4 FA 7E 00            PUSH 0x7efaa4
006F218A  6A 00                     PUSH 0x0
006F218C  56                        PUSH ESI
006F218D  E8 AE 3C FB FF            CALL 0x006a5e40
006F2192  5E                        POP ESI
006F2193  8B E5                     MOV ESP,EBP
006F2195  5D                        POP EBP
006F2196  C2 04 00                  RET 0x4
