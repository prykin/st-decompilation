FUN_00660010:
00660010  55                        PUSH EBP
00660011  8B EC                     MOV EBP,ESP
00660013  83 EC 10                  SUB ESP,0x10
00660016  56                        PUSH ESI
00660017  8B F1                     MOV ESI,ECX
00660019  57                        PUSH EDI
0066001A  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00660021  66 8B 4E 39               MOV CX,word ptr [ESI + 0x39]
00660025  C7 86 A7 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xa7],0x0
0066002F  0F BF C1                  MOVSX EAX,CX
00660032  85 C0                     TEST EAX,EAX
00660034  7E 18                     JLE 0x0066004e
00660036  83 F8 02                  CMP EAX,0x2
00660039  7E 0C                     JLE 0x00660047
0066003B  83 F8 03                  CMP EAX,0x3
0066003E  75 0E                     JNZ 0x0066004e
00660040  B8 62 00 00 00            MOV EAX,0x62
00660045  EB 09                     JMP 0x00660050
LAB_00660047:
00660047  B8 33 00 00 00            MOV EAX,0x33
0066004C  EB 02                     JMP 0x00660050
LAB_0066004e:
0066004E  33 C0                     XOR EAX,EAX
LAB_00660050:
00660050  33 D2                     XOR EDX,EDX
00660052  66 83 F9 03               CMP CX,0x3
00660056  0F 95 C2                  SETNZ DL
00660059  4A                        DEC EDX
0066005A  6A 00                     PUSH 0x0
0066005C  83 E2 02                  AND EDX,0x2
0066005F  8B CE                     MOV ECX,ESI
00660061  52                        PUSH EDX
00660062  50                        PUSH EAX
00660063  E8 79 38 DA FF            CALL 0x004038e1
00660068  8B F8                     MOV EDI,EAX
0066006A  85 FF                     TEST EDI,EDI
0066006C  75 0B                     JNZ 0x00660079
0066006E  5F                        POP EDI
0066006F  B8 FE FF FF FF            MOV EAX,0xfffffffe
00660074  5E                        POP ESI
00660075  8B E5                     MOV ESP,EBP
00660077  5D                        POP EBP
00660078  C3                        RET
LAB_00660079:
00660079  8B CE                     MOV ECX,ESI
0066007B  E8 BB 33 DA FF            CALL 0x0040343b
00660080  85 C0                     TEST EAX,EAX
00660082  75 11                     JNZ 0x00660095
00660084  57                        PUSH EDI
00660085  83 CE FF                  OR ESI,0xffffffff
00660088  E8 83 E0 04 00            CALL 0x006ae110
0066008D  8B C6                     MOV EAX,ESI
0066008F  5F                        POP EDI
00660090  5E                        POP ESI
00660091  8B E5                     MOV ESP,EBP
00660093  5D                        POP EBP
00660094  C3                        RET
LAB_00660095:
00660095  66 8B 46 7D               MOV AX,word ptr [ESI + 0x7d]
00660099  66 3D FE FF               CMP AX,0xfffe
0066009D  74 1A                     JZ 0x006600b9
0066009F  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
006600A5  85 C9                     TEST ECX,ECX
006600A7  74 10                     JZ 0x006600b9
006600A9  50                        PUSH EAX
006600AA  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
006600AD  50                        PUSH EAX
006600AE  E8 46 5C DA FF            CALL 0x00405cf9
006600B3  8B C8                     MOV ECX,EAX
006600B5  85 C9                     TEST ECX,ECX
006600B7  75 13                     JNZ 0x006600cc
LAB_006600b9:
006600B9  57                        PUSH EDI
006600BA  BE FD FF FF FF            MOV ESI,0xfffffffd
006600BF  E8 4C E0 04 00            CALL 0x006ae110
006600C4  8B C6                     MOV EAX,ESI
006600C6  5F                        POP EDI
006600C7  5E                        POP ESI
006600C8  8B E5                     MOV ESP,EBP
006600CA  5D                        POP EBP
006600CB  C3                        RET
LAB_006600cc:
006600CC  66 83 7E 39 03            CMP word ptr [ESI + 0x39],0x3
006600D1  75 2F                     JNZ 0x00660102
006600D3  33 D2                     XOR EDX,EDX
006600D5  8B 01                     MOV EAX,dword ptr [ECX]
006600D7  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
006600DA  C7 45 F0 01 00 00 00      MOV dword ptr [EBP + -0x10],0x1
006600E1  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006600E4  66 89 55 F8               MOV word ptr [EBP + -0x8],DX
006600E8  8D 55 F0                  LEA EDX,[EBP + -0x10]
006600EB  52                        PUSH EDX
006600EC  6A 11                     PUSH 0x11
006600EE  FF 50 08                  CALL dword ptr [EAX + 0x8]
006600F1  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006600F4  57                        PUSH EDI
006600F5  E8 16 E0 04 00            CALL 0x006ae110
006600FA  8B C6                     MOV EAX,ESI
006600FC  5F                        POP EDI
006600FD  5E                        POP ESI
006600FE  8B E5                     MOV ESP,EBP
00660100  5D                        POP EBP
00660101  C3                        RET
LAB_00660102:
00660102  8B 11                     MOV EDX,dword ptr [ECX]
00660104  33 C0                     XOR EAX,EAX
00660106  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00660109  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0066010C  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066010F  8D 45 F0                  LEA EAX,[EBP + -0x10]
00660112  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
00660115  50                        PUSH EAX
00660116  6A 04                     PUSH 0x4
00660118  FF 52 08                  CALL dword ptr [EDX + 0x8]
0066011B  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0066011E  57                        PUSH EDI
0066011F  E8 EC DF 04 00            CALL 0x006ae110
00660124  8B C6                     MOV EAX,ESI
00660126  5F                        POP EDI
00660127  5E                        POP ESI
00660128  8B E5                     MOV ESP,EBP
0066012A  5D                        POP EBP
0066012B  C3                        RET
