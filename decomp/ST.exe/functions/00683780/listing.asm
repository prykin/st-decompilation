FUN_00683780:
00683780  55                        PUSH EBP
00683781  8B EC                     MOV EBP,ESP
00683783  83 EC 08                  SUB ESP,0x8
00683786  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00683789  56                        PUSH ESI
0068378A  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0068378D  57                        PUSH EDI
0068378E  85 C0                     TEST EAX,EAX
00683790  74 0B                     JZ 0x0068379d
00683792  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00683795  85 C0                     TEST EAX,EAX
00683797  74 04                     JZ 0x0068379d
00683799  85 F6                     TEST ESI,ESI
0068379B  75 17                     JNZ 0x006837b4
LAB_0068379d:
0068379D  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006837A2  68 9E 03 00 00            PUSH 0x39e
006837A7  68 04 56 7D 00            PUSH 0x7d5604
006837AC  50                        PUSH EAX
006837AD  6A CC                     PUSH -0x34
006837AF  E8 8C 26 02 00            CALL 0x006a5e40
LAB_006837b4:
006837B4  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006837B7  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006837BA  33 FF                     XOR EDI,EDI
006837BC  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
006837BF  85 C0                     TEST EAX,EAX
006837C1  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
006837C4  7E 75                     JLE 0x0068383b
006837C6  53                        PUSH EBX
006837C7  33 DB                     XOR EBX,EBX
LAB_006837c9:
006837C9  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006837CC  03 C3                     ADD EAX,EBX
006837CE  8B 08                     MOV ECX,dword ptr [EAX]
006837D0  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006837D3  8A 50 04                  MOV DL,byte ptr [EAX + 0x4]
006837D6  8A C1                     MOV AL,CL
006837D8  3C 06                     CMP AL,0x6
006837DA  88 55 FC                  MOV byte ptr [EBP + -0x4],DL
006837DD  74 04                     JZ 0x006837e3
006837DF  3C 03                     CMP AL,0x3
006837E1  75 3C                     JNZ 0x0068381f
LAB_006837e3:
006837E3  0F BF 45 F9               MOVSX EAX,word ptr [EBP + -0x7]
006837E7  50                        PUSH EAX
006837E8  E8 4D FD D7 FF            CALL 0x0040353a
006837ED  83 C4 04                  ADD ESP,0x4
006837F0  85 C0                     TEST EAX,EAX
006837F2  74 13                     JZ 0x00683807
006837F4  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006837F7  50                        PUSH EAX
006837F8  51                        PUSH ECX
006837F9  E8 9B FD D7 FF            CALL 0x00403599
006837FE  83 C4 08                  ADD ESP,0x8
00683801  66 89 45 F9               MOV word ptr [EBP + -0x7],AX
00683805  EB 18                     JMP 0x0068381f
LAB_00683807:
00683807  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0068380D  68 A5 03 00 00            PUSH 0x3a5
00683812  68 04 56 7D 00            PUSH 0x7d5604
00683817  52                        PUSH EDX
00683818  6A 95                     PUSH -0x6b
0068381A  E8 21 26 02 00            CALL 0x006a5e40
LAB_0068381f:
0068381F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00683822  8D 45 F8                  LEA EAX,[EBP + -0x8]
00683825  50                        PUSH EAX
00683826  51                        PUSH ECX
00683827  E8 1D E9 D7 FF            CALL 0x00402149
0068382C  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
0068382F  83 C4 08                  ADD ESP,0x8
00683832  47                        INC EDI
00683833  83 C3 05                  ADD EBX,0x5
00683836  3B F8                     CMP EDI,EAX
00683838  7C 8F                     JL 0x006837c9
0068383A  5B                        POP EBX
LAB_0068383b:
0068383B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0068383E  8D 55 F8                  LEA EDX,[EBP + -0x8]
00683841  52                        PUSH EDX
00683842  50                        PUSH EAX
00683843  C6 45 F8 07               MOV byte ptr [EBP + -0x8],0x7
00683847  66 C7 45 F9 1D 00         MOV word ptr [EBP + -0x7],0x1d
0068384D  66 C7 45 FB 00 00         MOV word ptr [EBP + -0x5],0x0
00683853  E8 F1 E8 D7 FF            CALL 0x00402149
00683858  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0068385B  83 C4 08                  ADD ESP,0x8
0068385E  5F                        POP EDI
0068385F  5E                        POP ESI
00683860  8B E5                     MOV ESP,EBP
00683862  5D                        POP EBP
00683863  C3                        RET
