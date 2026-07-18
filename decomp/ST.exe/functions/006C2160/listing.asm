FUN_006c2160:
006C2160  55                        PUSH EBP
006C2161  8B EC                     MOV EBP,ESP
006C2163  A1 BC 68 85 00            MOV EAX,[0x008568bc]
006C2168  56                        PUSH ESI
006C2169  85 C0                     TEST EAX,EAX
006C216B  74 50                     JZ 0x006c21bd
006C216D  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006C2170  8B 08                     MOV ECX,dword ptr [EAX]
006C2172  6A 01                     PUSH 0x1
006C2174  52                        PUSH EDX
006C2175  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006C2178  52                        PUSH EDX
006C2179  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006C217C  52                        PUSH EDX
006C217D  50                        PUSH EAX
006C217E  FF 51 38                  CALL dword ptr [ECX + 0x38]
006C2181  8B F0                     MOV ESI,EAX
006C2183  85 F6                     TEST ESI,ESI
006C2185  75 3D                     JNZ 0x006c21c4
006C2187  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006C218A  6A 01                     PUSH 0x1
006C218C  52                        PUSH EDX
006C218D  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006C2190  52                        PUSH EDX
006C2191  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006C2194  A1 BC 68 85 00            MOV EAX,[0x008568bc]
006C2199  52                        PUSH EDX
006C219A  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006C219D  8B 08                     MOV ECX,dword ptr [EAX]
006C219F  52                        PUSH EDX
006C21A0  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006C21A3  52                        PUSH EDX
006C21A4  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006C21A7  52                        PUSH EDX
006C21A8  50                        PUSH EAX
006C21A9  FF 51 34                  CALL dword ptr [ECX + 0x34]
006C21AC  8B F0                     MOV ESI,EAX
006C21AE  85 F6                     TEST ESI,ESI
006C21B0  75 12                     JNZ 0x006c21c4
006C21B2  A1 BC 68 85 00            MOV EAX,[0x008568bc]
006C21B7  50                        PUSH EAX
006C21B8  8B 08                     MOV ECX,dword ptr [EAX]
006C21BA  FF 51 44                  CALL dword ptr [ECX + 0x44]
LAB_006c21bd:
006C21BD  33 C0                     XOR EAX,EAX
006C21BF  5E                        POP ESI
006C21C0  5D                        POP EBP
006C21C1  C2 24 00                  RET 0x24
LAB_006c21c4:
006C21C4  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006C21CA  6A 17                     PUSH 0x17
006C21CC  68 2C DE 7E 00            PUSH 0x7ede2c
006C21D1  52                        PUSH EDX
006C21D2  56                        PUSH ESI
006C21D3  E8 68 3C FE FF            CALL 0x006a5e40
006C21D8  8B C6                     MOV EAX,ESI
006C21DA  5E                        POP ESI
006C21DB  5D                        POP EBP
006C21DC  C2 24 00                  RET 0x24
