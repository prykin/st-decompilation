FUN_006b2220:
006B2220  55                        PUSH EBP
006B2221  8B EC                     MOV EBP,ESP
006B2223  83 EC 48                  SUB ESP,0x48
006B2226  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006B2229  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006B222C  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006B222F  56                        PUSH ESI
006B2230  6A 01                     PUSH 0x1
006B2232  6A 00                     PUSH 0x0
006B2234  6A FF                     PUSH -0x1
006B2236  6A FF                     PUSH -0x1
006B2238  68 00 00 00 04            PUSH 0x4000000
006B223D  6A 00                     PUSH 0x0
006B223F  50                        PUSH EAX
006B2240  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B2243  51                        PUSH ECX
006B2244  52                        PUSH EDX
006B2245  50                        PUSH EAX
006B2246  E8 05 FB FF FF            CALL 0x006b1d50
006B224B  85 C0                     TEST EAX,EAX
006B224D  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006B2250  0F 85 98 00 00 00         JNZ 0x006b22ee
006B2256  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006B2259  85 C9                     TEST ECX,ECX
006B225B  0F 84 8D 00 00 00         JZ 0x006b22ee
006B2261  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
006B2267  8D 45 BC                  LEA EAX,[EBP + -0x44]
006B226A  8D 55 B8                  LEA EDX,[EBP + -0x48]
006B226D  6A 00                     PUSH 0x0
006B226F  50                        PUSH EAX
006B2270  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
006B2273  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006B2279  E8 72 B5 07 00            CALL 0x0072d7f0
006B227E  8B F0                     MOV ESI,EAX
006B2280  83 C4 08                  ADD ESP,0x8
006B2283  85 F6                     TEST ESI,ESI
006B2285  75 3B                     JNZ 0x006b22c2
006B2287  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006B228A  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006B228D  50                        PUSH EAX
006B228E  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006B2291  51                        PUSH ECX
006B2292  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006B2295  52                        PUSH EDX
006B2296  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006B2299  68 00 00 00 04            PUSH 0x4000000
006B229E  50                        PUSH EAX
006B229F  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B22A2  51                        PUSH ECX
006B22A3  52                        PUSH EDX
006B22A4  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006B22A7  8B 08                     MOV ECX,dword ptr [EAX]
006B22A9  51                        PUSH ECX
006B22AA  52                        PUSH EDX
006B22AB  E8 80 06 00 00            CALL 0x006b2930
006B22B0  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
006B22B3  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006B22B8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006B22BB  5E                        POP ESI
006B22BC  8B E5                     MOV ESP,EBP
006B22BE  5D                        POP EBP
006B22BF  C2 20 00                  RET 0x20
LAB_006b22c2:
006B22C2  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
006B22C5  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006B22C8  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006B22CE  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006B22D1  8B 02                     MOV EAX,dword ptr [EDX]
006B22D3  50                        PUSH EAX
006B22D4  51                        PUSH ECX
006B22D5  E8 D6 18 00 00            CALL 0x006b3bb0
006B22DA  68 3E 03 00 00            PUSH 0x33e
006B22DF  68 C0 DA 7E 00            PUSH 0x7edac0
006B22E4  6A 00                     PUSH 0x0
006B22E6  56                        PUSH ESI
006B22E7  E8 54 3B FF FF            CALL 0x006a5e40
006B22EC  8B C6                     MOV EAX,ESI
LAB_006b22ee:
006B22EE  5E                        POP ESI
006B22EF  8B E5                     MOV ESP,EBP
006B22F1  5D                        POP EBP
006B22F2  C2 20 00                  RET 0x20
