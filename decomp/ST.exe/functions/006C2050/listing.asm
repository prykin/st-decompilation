FUN_006c2050:
006C2050  A1 B4 68 85 00            MOV EAX,[0x008568b4]
006C2055  57                        PUSH EDI
006C2056  33 FF                     XOR EDI,EDI
006C2058  3B C7                     CMP EAX,EDI
006C205A  0F 84 CF 00 00 00         JZ 0x006c212f
006C2060  56                        PUSH ESI
006C2061  8B 35 8C BB 85 00         MOV ESI,dword ptr [0x0085bb8c]
006C2067  68 80 68 85 00            PUSH 0x856880
006C206C  FF D6                     CALL ESI
006C206E  68 98 68 85 00            PUSH 0x856898
006C2073  FF D6                     CALL ESI
006C2075  68 F4 4F 85 00            PUSH 0x854ff4
006C207A  E8 11 78 FF FF            CALL 0x006b9890
006C207F  A1 C0 68 85 00            MOV EAX,[0x008568c0]
006C2084  3B C7                     CMP EAX,EDI
006C2086  74 0E                     JZ 0x006c2096
006C2088  57                        PUSH EDI
006C2089  50                        PUSH EAX
006C208A  FF 15 6C BB 85 00         CALL dword ptr [0x0085bb6c]
006C2090  89 3D C0 68 85 00         MOV dword ptr [0x008568c0],EDI
LAB_006c2096:
006C2096  8B 35 84 BB 85 00         MOV ESI,dword ptr [0x0085bb84]
006C209C  68 80 68 85 00            PUSH 0x856880
006C20A1  FF D6                     CALL ESI
006C20A3  68 98 68 85 00            PUSH 0x856898
006C20A8  FF D6                     CALL ESI
006C20AA  BE 08 50 85 00            MOV ESI,0x855008
LAB_006c20af:
006C20AF  8B 46 F0                  MOV EAX,dword ptr [ESI + -0x10]
006C20B2  A8 01                     TEST AL,0x1
006C20B4  74 29                     JZ 0x006c20df
006C20B6  24 F7                     AND AL,0xf7
006C20B8  89 46 F0                  MOV dword ptr [ESI + -0x10],EAX
006C20BB  8B 46 FC                  MOV EAX,dword ptr [ESI + -0x4]
006C20BE  3B C7                     CMP EAX,EDI
006C20C0  74 1D                     JZ 0x006c20df
006C20C2  8B 08                     MOV ECX,dword ptr [EAX]
006C20C4  50                        PUSH EAX
006C20C5  FF 51 48                  CALL dword ptr [ECX + 0x48]
006C20C8  8B 06                     MOV EAX,dword ptr [ESI]
006C20CA  3B C7                     CMP EAX,EDI
006C20CC  74 08                     JZ 0x006c20d6
006C20CE  8B 10                     MOV EDX,dword ptr [EAX]
006C20D0  50                        PUSH EAX
006C20D1  FF 52 08                  CALL dword ptr [EDX + 0x8]
006C20D4  89 3E                     MOV dword ptr [ESI],EDI
LAB_006c20d6:
006C20D6  8B 46 FC                  MOV EAX,dword ptr [ESI + -0x4]
006C20D9  50                        PUSH EAX
006C20DA  8B 08                     MOV ECX,dword ptr [EAX]
006C20DC  FF 51 08                  CALL dword ptr [ECX + 0x8]
LAB_006c20df:
006C20DF  81 C6 C4 00 00 00         ADD ESI,0xc4
006C20E5  81 FE 88 68 85 00         CMP ESI,0x856888
006C20EB  7C C2                     JL 0x006c20af
006C20ED  A1 B8 68 85 00            MOV EAX,[0x008568b8]
006C20F2  5E                        POP ESI
006C20F3  3B C7                     CMP EAX,EDI
006C20F5  74 17                     JZ 0x006c210e
006C20F7  8B 10                     MOV EDX,dword ptr [EAX]
006C20F9  50                        PUSH EAX
006C20FA  FF 52 48                  CALL dword ptr [EDX + 0x48]
006C20FD  A1 B8 68 85 00            MOV EAX,[0x008568b8]
006C2102  50                        PUSH EAX
006C2103  8B 08                     MOV ECX,dword ptr [EAX]
006C2105  FF 51 08                  CALL dword ptr [ECX + 0x8]
006C2108  89 3D B8 68 85 00         MOV dword ptr [0x008568b8],EDI
LAB_006c210e:
006C210E  A1 B4 68 85 00            MOV EAX,[0x008568b4]
006C2113  50                        PUSH EAX
006C2114  8B 10                     MOV EDX,dword ptr [EAX]
006C2116  FF 52 08                  CALL dword ptr [EDX + 0x8]
006C2119  68 B0 68 85 00            PUSH 0x8568b0
006C211E  89 3D B4 68 85 00         MOV dword ptr [0x008568b4],EDI
006C2124  89 3D 78 68 85 00         MOV dword ptr [0x00856878],EDI
006C212A  E8 31 8F FE FF            CALL 0x006ab060
LAB_006c212f:
006C212F  5F                        POP EDI
006C2130  C3                        RET
