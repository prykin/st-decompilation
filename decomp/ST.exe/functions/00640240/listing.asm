FUN_00640240:
00640240  56                        PUSH ESI
00640241  8B F1                     MOV ESI,ECX
00640243  8B 86 7F 03 00 00         MOV EAX,dword ptr [ESI + 0x37f]
00640249  85 C0                     TEST EAX,EAX
0064024B  0F 84 92 00 00 00         JZ 0x006402e3
00640251  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
00640257  6A 00                     PUSH 0x0
00640259  6A 00                     PUSH 0x0
0064025B  6A 00                     PUSH 0x0
0064025D  6A 00                     PUSH 0x0
0064025F  6A 00                     PUSH 0x0
00640261  6A 00                     PUSH 0x0
00640263  6A 00                     PUSH 0x0
00640265  50                        PUSH EAX
00640266  E8 F5 83 0A 00            CALL 0x006e8660
0064026B  8B 86 7F 03 00 00         MOV EAX,dword ptr [ESI + 0x37f]
00640271  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
00640277  50                        PUSH EAX
00640278  68 20 03 64 00            PUSH 0x640320
0064027D  8B 00                     MOV EAX,dword ptr [EAX]
0064027F  6A 00                     PUSH 0x0
00640281  50                        PUSH EAX
00640282  E8 99 92 0A 00            CALL 0x006e9520
00640287  8B 86 7F 03 00 00         MOV EAX,dword ptr [ESI + 0x37f]
0064028D  8B 15 B8 32 80 00         MOV EDX,dword ptr [0x008032b8]
00640293  33 C9                     XOR ECX,ECX
00640295  8A 48 15                  MOV CL,byte ptr [EAX + 0x15]
00640298  C1 E1 08                  SHL ECX,0x8
0064029B  03 CA                     ADD ECX,EDX
0064029D  8B 10                     MOV EDX,dword ptr [EAX]
0064029F  51                        PUSH ECX
006402A0  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
006402A6  52                        PUSH EDX
006402A7  E8 74 94 0A 00            CALL 0x006e9720
006402AC  8B 86 7F 03 00 00         MOV EAX,dword ptr [ESI + 0x37f]
006402B2  68 EB 51 47 42            PUSH 0x424751eb
006402B7  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
006402BA  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
006402BD  8B 00                     MOV EAX,dword ptr [EAX]
006402BF  51                        PUSH ECX
006402C0  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
006402C6  52                        PUSH EDX
006402C7  50                        PUSH EAX
006402C8  E8 93 A6 0A 00            CALL 0x006ea960
006402CD  8B 8E 7F 03 00 00         MOV ECX,dword ptr [ESI + 0x37f]
006402D3  6A 00                     PUSH 0x0
006402D5  8B 11                     MOV EDX,dword ptr [ECX]
006402D7  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
006402DD  52                        PUSH EDX
006402DE  E8 BD A7 0A 00            CALL 0x006eaaa0
LAB_006402e3:
006402E3  5E                        POP ESI
006402E4  C3                        RET
