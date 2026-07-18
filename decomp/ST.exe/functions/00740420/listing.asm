FUN_00740420:
00740420  55                        PUSH EBP
00740421  8B EC                     MOV EBP,ESP
00740423  83 EC 18                  SUB ESP,0x18
00740426  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
0074042D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00740430  33 C9                     XOR ECX,ECX
00740432  66 8B 48 0A               MOV CX,word ptr [EAX + 0xa]
00740436  81 E1 FF 7F 00 00         AND ECX,0x7fff
0074043C  66 89 4D FC               MOV word ptr [EBP + -0x4],CX
00740440  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00740443  33 C0                     XOR EAX,EAX
00740445  66 8B 42 0A               MOV AX,word ptr [EDX + 0xa]
00740449  25 00 80 00 00            AND EAX,0x8000
0074044E  66 89 45 E8               MOV word ptr [EBP + -0x18],AX
00740452  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00740455  8B 51 06                  MOV EDX,dword ptr [ECX + 0x6]
00740458  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0074045B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074045E  8B 48 02                  MOV ECX,dword ptr [EAX + 0x2]
00740461  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00740464  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00740467  33 C0                     XOR EAX,EAX
00740469  66 8B 02                  MOV AX,word ptr [EDX]
0074046C  C1 E0 10                  SHL EAX,0x10
0074046F  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00740472  6A 40                     PUSH 0x40
00740474  8D 4D F0                  LEA ECX,[EBP + -0x10]
00740477  51                        PUSH ECX
00740478  E8 83 FA FF FF            CALL 0x0073ff00
0074047D  83 C4 08                  ADD ESP,0x8
00740480  85 C0                     TEST EAX,EAX
00740482  74 13                     JZ 0x00740497
00740484  C7 45 F0 00 00 00 80      MOV dword ptr [EBP + -0x10],0x80000000
0074048B  66 8B 55 FC               MOV DX,word ptr [EBP + -0x4]
0074048F  66 83 C2 01               ADD DX,0x1
00740493  66 89 55 FC               MOV word ptr [EBP + -0x4],DX
LAB_00740497:
00740497  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0074049A  25 FF FF 00 00            AND EAX,0xffff
0074049F  3D FF 7F 00 00            CMP EAX,0x7fff
007404A4  75 07                     JNZ 0x007404ad
007404A6  C7 45 EC 01 00 00 00      MOV dword ptr [EBP + -0x14],0x1
LAB_007404ad:
007404AD  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
007404B0  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
007404B3  89 51 04                  MOV dword ptr [ECX + 0x4],EDX
007404B6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
007404B9  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
007404BC  89 08                     MOV dword ptr [EAX],ECX
007404BE  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
007404C1  81 E2 FF FF 00 00         AND EDX,0xffff
007404C7  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007404CA  25 FF FF 00 00            AND EAX,0xffff
007404CF  0B D0                     OR EDX,EAX
007404D1  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
007404D4  66 89 51 08               MOV word ptr [ECX + 0x8],DX
007404D8  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
007404DB  8B E5                     MOV ESP,EBP
007404DD  5D                        POP EBP
007404DE  C3                        RET
