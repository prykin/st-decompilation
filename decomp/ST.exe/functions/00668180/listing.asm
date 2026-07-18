FUN_00668180:
00668180  55                        PUSH EBP
00668181  8B EC                     MOV EBP,ESP
00668183  83 EC 48                  SUB ESP,0x48
00668186  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0066818B  56                        PUSH ESI
0066818C  8D 55 BC                  LEA EDX,[EBP + -0x44]
0066818F  8D 4D B8                  LEA ECX,[EBP + -0x48]
00668192  6A 00                     PUSH 0x0
00668194  52                        PUSH EDX
00668195  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0066819C  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0066819F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006681A5  E8 46 56 0C 00            CALL 0x0072d7f0
006681AA  8B F0                     MOV ESI,EAX
006681AC  83 C4 08                  ADD ESP,0x8
006681AF  85 F6                     TEST ESI,ESI
006681B1  0F 85 E9 00 00 00         JNZ 0x006682a0
006681B7  68 60 02 00 00            PUSH 0x260
006681BC  E8 4F 2A 04 00            CALL 0x006aac10
006681C1  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006681C4  C7 00 84 03 00 00         MOV dword ptr [EAX],0x384
006681CA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006681CD  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006681D0  6A 3F                     PUSH 0x3f
006681D2  52                        PUSH EDX
006681D3  C7 40 14 60 02 00 00      MOV dword ptr [EAX + 0x14],0x260
006681DA  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006681DD  C6 41 18 02               MOV byte ptr [ECX + 0x18],0x2
006681E1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006681E4  83 C0 1B                  ADD EAX,0x1b
006681E7  50                        PUSH EAX
006681E8  E8 53 61 0C 00            CALL 0x0072e340
006681ED  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006681F0  66 8B 55 0C               MOV DX,word ptr [EBP + 0xc]
006681F4  83 C4 0C                  ADD ESP,0xc
006681F7  66 89 51 19               MOV word ptr [ECX + 0x19],DX
006681FB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006681FE  66 8B 4D 10               MOV CX,word ptr [EBP + 0x10]
00668202  66 89 48 5B               MOV word ptr [EAX + 0x5b],CX
00668206  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00668209  66 8B 45 14               MOV AX,word ptr [EBP + 0x14]
0066820D  66 89 42 5F               MOV word ptr [EDX + 0x5f],AX
00668211  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00668214  8A 55 18                  MOV DL,byte ptr [EBP + 0x18]
00668217  88 51 61                  MOV byte ptr [ECX + 0x61],DL
0066821A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066821D  C7 80 3F 02 00 00 FF FF FF 3F  MOV dword ptr [EAX + 0x23f],0x3fffffff
00668227  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0066822A  8B 81 EB 01 00 00         MOV EAX,dword ptr [ECX + 0x1eb]
00668230  85 C0                     TEST EAX,EAX
00668232  75 15                     JNZ 0x00668249
00668234  6A 0A                     PUSH 0xa
00668236  6A 2C                     PUSH 0x2c
00668238  6A 0A                     PUSH 0xa
0066823A  56                        PUSH ESI
0066823B  E8 50 60 04 00            CALL 0x006ae290
00668240  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00668243  89 82 EB 01 00 00         MOV dword ptr [EDX + 0x1eb],EAX
LAB_00668249:
00668249  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066824C  8B 88 03 02 00 00         MOV ECX,dword ptr [EAX + 0x203]
00668252  85 C9                     TEST ECX,ECX
00668254  75 16                     JNZ 0x0066826c
00668256  6A 0A                     PUSH 0xa
00668258  6A 14                     PUSH 0x14
0066825A  6A 0A                     PUSH 0xa
0066825C  6A 00                     PUSH 0x0
0066825E  E8 2D 60 04 00            CALL 0x006ae290
00668263  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00668266  89 81 03 02 00 00         MOV dword ptr [ECX + 0x203],EAX
LAB_0066826c:
0066826C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066826F  8B 82 0F 02 00 00         MOV EAX,dword ptr [EDX + 0x20f]
00668275  85 C0                     TEST EAX,EAX
00668277  75 16                     JNZ 0x0066828f
00668279  6A 0A                     PUSH 0xa
0066827B  6A 0C                     PUSH 0xc
0066827D  6A 0A                     PUSH 0xa
0066827F  6A 00                     PUSH 0x0
00668281  E8 0A 60 04 00            CALL 0x006ae290
00668286  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00668289  89 81 0F 02 00 00         MOV dword ptr [ECX + 0x20f],EAX
LAB_0066828f:
0066828F  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
00668292  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00668295  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0066829B  5E                        POP ESI
0066829C  8B E5                     MOV ESP,EBP
0066829E  5D                        POP EBP
0066829F  C3                        RET
LAB_006682a0:
006682A0  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
006682A3  8D 4D FC                  LEA ECX,[EBP + -0x4]
006682A6  51                        PUSH ECX
006682A7  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006682AC  E8 1C D9 D9 FF            CALL 0x00405bcd
006682B1  83 C4 04                  ADD ESP,0x4
006682B4  6A 2A                     PUSH 0x2a
006682B6  68 C0 2C 7D 00            PUSH 0x7d2cc0
006682BB  6A 00                     PUSH 0x0
006682BD  56                        PUSH ESI
006682BE  E8 7D DB 03 00            CALL 0x006a5e40
006682C3  33 C0                     XOR EAX,EAX
006682C5  5E                        POP ESI
006682C6  8B E5                     MOV ESP,EBP
006682C8  5D                        POP EBP
006682C9  C3                        RET
